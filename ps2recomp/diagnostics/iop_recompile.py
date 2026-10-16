#!/usr/bin/env python3
"""Generates the statically recompiled IOP module code for the runtime (native C++, no interpreter).

usage: iop_recompile.py OUT.inc iop-<base>-<hash>.bin ...

Inputs are the relocated text of each IRX module as the runner saves it with
PS2X_IOP_RECOMP_CAPTURE=<dir> (name: iop-<load address>-<FNV-1a 64 of the bytes>.bin). They contain
game code: keep them and the generated file local, never commit them.

Each module becomes one C++ function per basic block, operating directly on the guest registers, and a table with
one entry per instruction word that points at the block starting there (findRecompiledModule()).

Semantics follow the interpreter (ps2xIOP core/iop_cpu_exec.inl) exactly, resolved here at generation time:
- Load delay slot: a load's value lands after the next instruction, unless that instruction writes the same register
  itself; LWL/LWR forward a value still pending for their register. A load in a block's last slot leaves its value
  pending in CpuState for the next block (or the interpreter).
- Branch delay slot: the condition and target are read at the branch, the delay slot runs, then the block exits.
- Exceptions (overflow, misaligned access, SYSCALL, BREAK, reserved): raised through IopCpuCore::raiseException with
  the delay-slot flag, the pending load dropped, as the interpreter does.
- Interrupts are taken at block entry; DMA starts are scheduled after each store; counters advance per block.
- MTC0/RFE end their block (the next block entry checks for an interrupt they may enable).
Code entered anywhere else (computed jumps into the middle of a block), import stubs, and branches with a branch in
their delay slot are left to the interpreter, which remains the reference (PS2X_IOP_RECOMPILED=0) and the checker
(PS2X_IOP_RECOMP_VERIFY=1).
"""
import os, struct, sys

MAX_BLOCK = 64

def sx16(v):
    return v - 0x10000 if v & 0x8000 else v

def fields(w):
    return dict(op=w >> 26, rs=(w >> 21) & 31, rt=(w >> 16) & 31, rd=(w >> 11) & 31, sa=(w >> 6) & 31,
                fn=w & 63, imm=w & 0xFFFF, simm=sx16(w & 0xFFFF))

def is_branch(w):
    """Instructions with a delay slot."""
    f = fields(w)
    if f['op'] == 0:
        return f['fn'] in (0x08, 0x09)
    if f['op'] == 1:
        return f['rt'] in (0x00, 0x01, 0x10, 0x11)
    return f['op'] in (2, 3, 4, 5, 6, 7)

def ends_block_alone(w):
    """Instructions after which the block ends (no delay slot): COP0 writes and RFE, SYSCALL/BREAK."""
    f = fields(w)
    if f['op'] == 0x10 and f['rs'] in (0x04, 0x10):
        return True
    if f['op'] == 0 and f['fn'] in (0x0C, 0x0D):
        return True
    return False

def static_target(w, pc):
    f = fields(w)
    if f['op'] == 1 or 4 <= f['op'] <= 7:
        return pc + 4 + (f['simm'] << 2)
    if f['op'] in (2, 3):
        return ((pc + 4) & 0xF0000000) | ((w & 0x03FFFFFF) << 2)
    return None

def R(n):
    return '0u' if n == 0 else 'r[%d]' % n

class Emitter:
    """Emits one instruction; tracks the pending load of the previous instruction."""
    def __init__(self, lines):
        self.lines = lines
        self.tmp = 0

    def var(self, prefix):
        self.tmp += 1
        return '%s%d' % (prefix, self.tmp)

    def out(self, s):
        self.lines.append('        ' + s)

def emit_instruction(em, w, pc, index, delay, prev_load, first, branch_target_expr):
    """Returns (written_reg, new_load or None, branch info or None, exception_exit_code_lines_used)."""
    f = fields(w)
    op, rs, rt, rd, sa, fn, imm, simm = f['op'], f['rs'], f['rt'], f['rd'], f['sa'], f['fn'], f['imm'], f['simm']
    out = em.out
    written = 0
    load = None  # (reg, var)
    branch = None

    def exc(code, bad=None):
        # Exception: the pending load is dropped, nothing of this instruction is written.
        b = ', %s' % bad if bad else ''
        return ('{ impl.recompiledRetire(%d); cpu.pc = 0x%08xu; cpu.branchPending = false; '
                'impl.cpuCore.raiseException(cpu, %du, 0x%08xu, %s%s); return true; }'
                % (index + 1, pc, code, pc, delay, b))

    def write(reg, expr):
        nonlocal written
        if reg == 0:
            out('(void)(%s);' % expr)
            return
        out('r[%d] = %s;' % (reg, expr))
        written = reg

    def old_for_lwlr(reg):
        if prev_load is not None and prev_load[0] == reg:
            return prev_load[1]
        if first:
            return '((inLoad && inReg == %du) ? inValue : %s)' % (reg, R(reg))
        return R(reg)

    addr = lambda: '(%s + 0x%08xu)' % (R(rs), simm & 0xFFFFFFFF)

    if op == 0:
        if fn == 0x00: write(rd, '%s << %d' % (R(rt), sa))
        elif fn == 0x02: write(rd, '%s >> %d' % (R(rt), sa))
        elif fn == 0x03: write(rd, 'uint32_t(int32_t(%s) >> %d)' % (R(rt), sa))
        elif fn == 0x04: write(rd, '%s << (%s & 31u)' % (R(rt), R(rs)))
        elif fn == 0x06: write(rd, '%s >> (%s & 31u)' % (R(rt), R(rs)))
        elif fn == 0x07: write(rd, 'uint32_t(int32_t(%s) >> (%s & 31u))' % (R(rt), R(rs)))
        elif fn == 0x08:
            t = em.var('tgt'); out('const uint32_t %s = %s;' % (t, R(rs)))
            branch = ('jump', t)
        elif fn == 0x09:
            # The interpreter writes the link register first and then reads the target (rs == rd gets pc + 8).
            write(rd if rd else 31, '0x%08xu' % (pc + 8))
            t = em.var('tgt'); out('const uint32_t %s = %s;' % (t, R(rs)))
            branch = ('jump', t)
        elif fn == 0x0C: out(exc(8)); return written, None, ('exit', None)
        elif fn == 0x0D: out(exc(9)); return written, None, ('exit', None)
        elif fn == 0x10: write(rd, 'cpu.hi')
        elif fn == 0x11: out('cpu.hi = %s;' % R(rs))
        elif fn == 0x12: write(rd, 'cpu.lo')
        elif fn == 0x13: out('cpu.lo = %s;' % R(rs))
        elif fn == 0x18:
            v = em.var('m'); out('{ const int64_t %s = int64_t(int32_t(%s)) * int64_t(int32_t(%s)); cpu.lo = uint32_t(%s); cpu.hi = uint32_t(uint64_t(%s) >> 32); }' % (v, R(rs), R(rt), v, v))
        elif fn == 0x19:
            v = em.var('m'); out('{ const uint64_t %s = uint64_t(%s) * %s; cpu.lo = uint32_t(%s); cpu.hi = uint32_t(%s >> 32); }' % (v, R(rs), R(rt), v, v))
        elif fn == 0x1A:
            out('{ const int32_t n = int32_t(%s), d = int32_t(%s); if (d == 0) { cpu.lo = n >= 0 ? 0xFFFFFFFFu : 1u; cpu.hi = uint32_t(n); } '
                'else if (n == INT32_MIN && d == -1) { cpu.lo = uint32_t(n); cpu.hi = 0u; } else { cpu.lo = uint32_t(n / d); cpu.hi = uint32_t(n %% d); } }' % (R(rs), R(rt)))
        elif fn == 0x1B:
            out('{ const uint32_t n = %s, d = %s; if (d == 0u) { cpu.lo = 0xFFFFFFFFu; cpu.hi = n; } else { cpu.lo = n / d; cpu.hi = n %% d; } }' % (R(rs), R(rt)))
        elif fn in (0x20, 0x22):
            v = em.var('s')
            out('const int64_t %s = int64_t(int32_t(%s)) %s int64_t(int32_t(%s));' % (v, R(rs), '+' if fn == 0x20 else '-', R(rt)))
            out('if (%s != int64_t(int32_t(%s))) %s' % (v, v, exc(12)))
            write(rd, 'uint32_t(int32_t(%s))' % v)
        elif fn == 0x21: write(rd, '%s + %s' % (R(rs), R(rt)))
        elif fn == 0x23: write(rd, '%s - %s' % (R(rs), R(rt)))
        elif fn == 0x24: write(rd, '%s & %s' % (R(rs), R(rt)))
        elif fn == 0x25: write(rd, '%s | %s' % (R(rs), R(rt)))
        elif fn == 0x26: write(rd, '%s ^ %s' % (R(rs), R(rt)))
        elif fn == 0x27: write(rd, '~(%s | %s)' % (R(rs), R(rt)))
        elif fn == 0x2A: write(rd, '(int32_t(%s) < int32_t(%s) ? 1u : 0u)' % (R(rs), R(rt)))
        elif fn == 0x2B: write(rd, '(%s < %s ? 1u : 0u)' % (R(rs), R(rt)))
        else: out(exc(10)); return written, None, ('exit', None)
    elif op == 1:
        if rt not in (0x00, 0x01, 0x10, 0x11):
            out(exc(10)); return written, None, ('exit', None)
        c = em.var('take')
        cond = 'int32_t(%s) < 0' % R(rs) if rt in (0x00, 0x10) else 'int32_t(%s) >= 0' % R(rs)
        out('const bool %s = %s;' % (c, cond))
        if rt in (0x10, 0x11):
            write(31, '0x%08xu' % (pc + 8))
        branch = ('cond', c, pc + 4 + (simm << 2))
    elif op in (2, 3):
        if op == 3:
            write(31, '0x%08xu' % (pc + 8))
        branch = ('jump', '0x%08xu' % (((pc + 4) & 0xF0000000) | ((w & 0x03FFFFFF) << 2)))
    elif op in (4, 5, 6, 7):
        c = em.var('take')
        cond = {4: '%s == %s' % (R(rs), R(rt)), 5: '%s != %s' % (R(rs), R(rt)),
                6: 'int32_t(%s) <= 0' % R(rs), 7: 'int32_t(%s) > 0' % R(rs)}[op]
        out('const bool %s = %s;' % (c, cond))
        branch = ('cond', c, pc + 4 + (simm << 2))
    elif op == 0x08:
        v = em.var('s')
        out('const int64_t %s = int64_t(int32_t(%s)) + int64_t(%d);' % (v, R(rs), simm))
        out('if (%s != int64_t(int32_t(%s))) %s' % (v, v, exc(12)))
        write(rt, 'uint32_t(int32_t(%s))' % v)
    elif op == 0x09: write(rt, '%s + 0x%08xu' % (R(rs), simm & 0xFFFFFFFF))
    elif op == 0x0A: write(rt, '(int32_t(%s) < %d ? 1u : 0u)' % (R(rs), simm))
    elif op == 0x0B: write(rt, '(%s < 0x%08xu ? 1u : 0u)' % (R(rs), simm & 0xFFFFFFFF))
    elif op == 0x0C: write(rt, '%s & 0x%xu' % (R(rs), imm))
    elif op == 0x0D: write(rt, '%s | 0x%xu' % (R(rs), imm))
    elif op == 0x0E: write(rt, '%s ^ 0x%xu' % (R(rs), imm))
    elif op == 0x0F: write(rt, '0x%08xu' % (imm << 16))
    elif op == 0x10:
        if rs == 0x00:
            v = em.var('ld'); out('const uint32_t %s = cpu.cop0[%d];' % (v, rd))
            if rt: load = (rt, v)
        elif rs == 0x04:
            out('cpu.cop0[%d] = %s;' % (rd, R(rt)))
            return written, None, ('end', None)
        elif rs == 0x10 and fn == 0x10:
            out('cpu.cop0[12] = (cpu.cop0[12] & ~0x0Fu) | ((cpu.cop0[12] >> 2) & 0x0Fu);')
            return written, None, ('end', None)
        else:
            out(exc(10)); return written, None, ('exit', None)
    elif op in (0x20, 0x24, 0x21, 0x25, 0x23):
        a = em.var('a'); v = em.var('ld')
        out('const uint32_t %s = %s;' % (a, addr()))
        if op in (0x20, 0x24):
            out('const uint32_t %s = %s;' % (v, 'uint32_t(int32_t(int8_t(impl.ld8(%s))))' % a if op == 0x20 else 'uint32_t(impl.ld8(%s))' % a))
        elif op in (0x21, 0x25):
            out('if (%s & 1u) %s' % (a, exc(4, a)))
            out('const uint32_t %s = %s;' % (v, 'uint32_t(int32_t(int16_t(impl.ld16(%s))))' % a if op == 0x21 else 'uint32_t(impl.ld16(%s))' % a))
        else:
            out('if (%s & 3u) %s' % (a, exc(4, a)))
            out('const uint32_t %s = impl.ld32(%s);' % (v, a))
        if rt: load = (rt, v)
    elif op in (0x22, 0x26):
        a = em.var('a'); m = em.var('w'); v = em.var('ld'); o = old_for_lwlr(rt)
        out('const uint32_t %s = %s;' % (a, addr()))
        out('const uint32_t %s = impl.ld32(%s & ~3u);' % (m, a))
        if op == 0x22:
            out('static constexpr uint32_t kM%s[4] = {0x00FFFFFFu, 0x0000FFFFu, 0x000000FFu, 0u}; static constexpr uint32_t kS%s[4] = {24u, 16u, 8u, 0u};' % (v, v))
            out('const uint32_t %s = (%s & kM%s[%s & 3u]) | (%s << kS%s[%s & 3u]);' % (v, o, v, a, m, v, a))
        else:
            out('static constexpr uint32_t kM%s[4] = {0u, 0xFF000000u, 0xFFFF0000u, 0xFFFFFF00u}; static constexpr uint32_t kS%s[4] = {0u, 8u, 16u, 24u};' % (v, v))
            out('const uint32_t %s = (%s & kM%s[%s & 3u]) | (%s >> kS%s[%s & 3u]);' % (v, o, v, a, m, v, a))
        if rt: load = (rt, v)
    elif op == 0x28:
        out('impl.st8(%s, uint8_t(%s));' % (addr(), R(rt)))
    elif op == 0x29:
        a = em.var('a'); out('const uint32_t %s = %s;' % (a, addr()))
        out('if (%s & 1u) %s' % (a, exc(5, a)))
        out('impl.st16(%s, uint16_t(%s));' % (a, R(rt)))
    elif op == 0x2B:
        a = em.var('a'); out('const uint32_t %s = %s;' % (a, addr()))
        out('if (%s & 3u) %s' % (a, exc(5, a)))
        out('impl.st32(%s, %s);' % (a, R(rt)))
    elif op in (0x2A, 0x2E):
        a = em.var('a'); old = em.var('w'); res = em.var('v')
        out('const uint32_t %s = %s;' % (a, addr()))
        out('const uint32_t %s = impl.ld32(%s & ~3u);' % (old, a))
        if op == 0x2A:
            out('uint32_t %s; switch (%s & 3u) { case 0u: %s = (%s & 0xFFFFFF00u) | (%s >> 24); break; case 1u: %s = (%s & 0xFFFF0000u) | (%s >> 16); break; '
                'case 2u: %s = (%s & 0xFF000000u) | (%s >> 8); break; default: %s = %s; break; }'
                % (res, a, res, old, R(rt), res, old, R(rt), res, old, R(rt), res, R(rt)))
        else:
            out('uint32_t %s; switch (%s & 3u) { case 0u: %s = %s; break; case 1u: %s = (%s & 0x000000FFu) | (%s << 8); break; '
                'case 2u: %s = (%s & 0x0000FFFFu) | (%s << 16); break; default: %s = (%s & 0x00FFFFFFu) | (%s << 24); break; }'
                % (res, a, res, R(rt), res, old, R(rt), res, old, R(rt), res, old, R(rt)))
        out('impl.st32(%s & ~3u, %s);' % (a, res))
    else:
        out(exc(10)); return written, None, ('exit', None)
    return written, load, branch

def commit(em, prev_load, written, first):
    """After an instruction: the previous instruction's load lands unless this one wrote the register."""
    if first:
        em.out('if (inLoad && inReg != 0u && inReg != %du) r[inReg] = inValue;' % written)
    if prev_load is not None and prev_load[0] != written:
        em.out('r[%d] = %s;' % (prev_load[0], prev_load[1]))

def exit_to(target_expr, known, blocks_by_pc, stubs):
    """Code that continues at a target: the next block directly (a tail call), an import stub through the kernel
    call, or back to the dispatcher."""
    if known is not None and known in blocks_by_pc:
        return 'IOP_TAIL return %s(impl, cpu, start, budget);' % blocks_by_pc[known]
    if known is not None and known in stubs:
        return 'return impl.callImportStub(cpu, 0x%08xu);' % known
    return 'return true;'

def generate_block(fn, base, words, body, next_pc, blocks_by_pc, stubs):
    lines = ['    static bool %s(Impl &impl, CpuState &cpu, const uint64_t start, const uint32_t budget)' % fn, '    {']
    first_pc = base + body[0] * 4
    lines.append('        if (cpu.stopped || cpu.yielded || cpu.branchPending || impl.totalInstructions - start >= budget) return false;')
    lines.append('        if (impl.ld32(0x%08xu) != 0x%08xu || impl.spinYieldPc == 0x%08xu) return false;' % (first_pc, words[body[0]], first_pc))
    lines.append('        if (impl.checkInterrupt(cpu)) return true;')
    lines.append('        uint32_t *const r = cpu.gpr.data();')
    lines.append('        const bool inLoad = cpu.pendingLoad; const uint32_t inReg = cpu.pendingLoadReg, inValue = cpu.pendingLoadValue; (void)inValue;')
    lines.append('        cpu.pendingLoad = false; cpu.exception = false;')
    em = Emitter(lines)
    prev_load = None
    k = 0
    while k < len(body):
        i = body[k]; pc = base + i * 4; w = words[i]
        em.out('// %08x: %08x' % (pc, w))
        written, load, branch = emit_instruction(em, w, pc, k, 'false', prev_load, k == 0, None)
        if branch is not None and branch[0] == 'exit':
            break  # exception always raised (SYSCALL, BREAK, reserved)
        commit(em, prev_load, written, k == 0)
        prev_load = load
        if branch is not None and branch[0] == 'end':
            em.out('impl.recompiledRetire(%d); cpu.pc = 0x%08xu; cpu.branchPending = false; %s' % (k + 1, pc + 4, exit_to(None, pc + 4, blocks_by_pc, stubs)))
            break
        if branch is not None:
            # Delay slot, then leave.
            k += 1
            j = body[k]; dpc = base + j * 4; dw = words[j]
            em.out('// %08x: %08x (delay slot)' % (dpc, dw))
            # A delay slot counts as one (for an exception's EPC) only when the branch is taken, as in the interpreter.
            delay_expr = branch[1] if branch[0] == 'cond' else 'true'
            dwritten, dload, dbranch = emit_instruction(em, dw, dpc, k, delay_expr, prev_load, False, None)
            if dbranch is not None and dbranch[0] == 'exit':
                break
            commit(em, prev_load, dwritten, False)
            if dload is not None:
                em.out('cpu.pendingLoad = true; cpu.pendingLoadReg = %du; cpu.pendingLoadValue = %s;' % dload)
            em.out('cpu.branchPending = false; impl.recompiledRetire(%d);' % (k + 1))
            if branch[0] == 'cond':
                em.out('if (%s) { cpu.pc = 0x%08xu; %s }' % (branch[1], branch[2], exit_to(None, branch[2], blocks_by_pc, stubs)))
                em.out('cpu.pc = 0x%08xu; %s' % (dpc + 4, exit_to(None, dpc + 4, blocks_by_pc, stubs)))
            else:
                known = int(branch[1][2:-1], 16) if branch[1].startswith('0x') else None
                em.out('cpu.pc = %s; %s' % (branch[1], exit_to(None, known, blocks_by_pc, stubs)))
            break
        k += 1
    else:
        if prev_load is not None:
            em.out('cpu.pendingLoad = true; cpu.pendingLoadReg = %du; cpu.pendingLoadValue = %s;' % prev_load)
        em.out('cpu.pc = 0x%08xu; cpu.branchPending = false; impl.recompiledRetire(%d); %s' % (next_pc, len(body), exit_to(None, next_pc, blocks_by_pc, stubs)))
    lines += ['        return true; // after an exception that is always raised', '    }', '']
    return '\n'.join(lines)

def main():
    out_path, paths = sys.argv[1], sys.argv[2:]
    functions, tables, finders, total, block_total = [], [], [], 0, 0
    for path in sorted(paths):
        name = os.path.basename(path)
        parts = name[:-4].split('-')
        if len(parts) != 3 or parts[0] != 'iop':
            print('skip %s: unexpected name' % name, file=sys.stderr)
            continue
        base, digest = int(parts[1], 16), parts[2]
        data = open(path, 'rb').read()
        size = len(data) & ~3
        count = size // 4
        words = struct.unpack('<%dI' % count, data[:size])
        def is_stub(index):
            return (words[index] == 0x03E00008 and index + 1 < count
                    and (words[index + 1] & 0xFFFF0000) == 0x24000000)
        leaders = {0}
        for index, word in enumerate(words):
            if is_branch(word):
                if index + 2 < count:
                    leaders.add(index + 2)
                t = static_target(word, base + index * 4)
                if t is not None and base <= t < base + size and t % 4 == 0:
                    leaders.add((t - base) // 4)
            elif ends_block_alone(word) and index + 1 < count:
                leaders.add(index + 1)
        # Functions reached only through pointers (callbacks, thread entries, handler tables) are nobody's branch
        # target. They start after a return (jr ra + its delay slot, past alignment nops) and their addresses are
        # built in the text with lui + addiu/ori.
        for index, word in enumerate(words):
            if word == 0x03E00008:
                at = index + 2
                while at < count and words[at] == 0:
                    at += 1
                if at < count:
                    leaders.add(at)
            if (word >> 26) == 0x0F:  # lui rt, hi
                rt, hi = (word >> 16) & 31, (word & 0xFFFF) << 16
                for at in range(index + 1, min(index + 8, count)):
                    w2 = words[at]
                    op = w2 >> 26
                    if op in (0x09, 0x0D) and ((w2 >> 21) & 31) == rt:  # addiu / ori from it
                        value = (hi + sx16(w2 & 0xFFFF)) & 0xFFFFFFFF if op == 0x09 else hi | (w2 & 0xFFFF)
                        if base <= value < base + size and value % 4 == 0:
                            leaders.add((value - base) // 4)
                        break
                    if ((w2 >> 16) & 31) == rt and op != 0x2B and op != 0x29 and op != 0x28:
                        break  # rt overwritten (anything but a store into it)
        starts = [None] * count
        module_blocks = []
        pending = sorted(leaders)
        done = set()
        while pending:
            index = pending.pop(0)
            if index in done or index >= count or is_stub(index):
                continue
            done.add(index)
            body, at, ended = [], index, False
            while at < count and len(body) < MAX_BLOCK and not is_stub(at) and (at == index or at not in leaders):
                w = words[at]
                if is_branch(w):
                    if at + 1 >= count or is_stub(at + 1) or is_branch(words[at + 1]):
                        break  # branch in a delay slot, or no delay slot: left to the interpreter
                    body += [at, at + 1]
                    at += 2
                    ended = True
                    break
                body.append(at)
                at += 1
                if ends_block_alone(w):
                    ended = True
                    break
            if not body:
                continue
            if not ended and at < count and at not in leaders and not is_stub(at):
                leaders.add(at)
                pending.append(at)
                pending.sort()
            fn = 'iopn_%s_%x' % (digest, base + index * 4)
            starts[index] = fn
            module_blocks.append((fn, body, base + at * 4))
            total += len(body)
            block_total += 1
        blocks_by_pc = {base + i * 4: n for i, n in enumerate(starts) if n}
        stubs = {base + i * 4 for i in range(count) if is_stub(i)}
        for fn, body, next_pc in module_blocks:
            functions.append(generate_block(fn, base, words, body, next_pc, blocks_by_pc, stubs))
        table = 'iop_%s_blocks' % digest
        tables.append('    static const RecompiledBlock *%s()\n    {\n        static const RecompiledBlock blocks[] = {\n%s        };\n        return blocks;\n    }\n'
                      % (table, ''.join('            %s,\n' % ('&' + s if s else 'nullptr') for s in starts)))
        finders.append('        if (base == 0x%08xu && textSize == 0x%xu && hash == 0x%sull)\n            return %s();\n' % (base, size, digest, table))
    with open(out_path, 'w') as out:
        out.write('// Generated by ps2recomp/diagnostics/iop_recompile.py from captured IRX module text. Do not edit.\n')
        out.write('// %d modules, %d basic blocks, %d instructions, native code. Included inside IopEmulator::Impl.\n\n' % (len(tables), block_total, total))
        out.write('#define PS2X_IOP_RECOMPILED_NATIVE 1\n')
        out.write('// Blocks continue into the next one by a guaranteed tail call (no stack growth).\n')
        out.write('#if defined(__clang__)\n#define IOP_TAIL [[clang::musttail]]\n#else\n#define IOP_TAIL\n#endif\n')
        out.write('\n'.join(functions))
        out.write('\n')
        out.write('\n'.join(tables))
        out.write('\n    static const RecompiledBlock *findRecompiledModule(uint32_t base, uint32_t textSize, uint64_t hash)\n    {\n')
        out.write(''.join(finders))
        out.write('        return nullptr;\n    }\n')
    print('wrote %s: %d modules, %d basic blocks, %d instructions' % (out_path, len(tables), block_total, total))

if __name__ == '__main__':
    main()
