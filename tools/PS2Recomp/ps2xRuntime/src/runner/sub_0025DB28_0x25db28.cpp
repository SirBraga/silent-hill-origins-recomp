#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025DB28
// Address: 0x25db28 - 0x25dd90
void sub_0025DB28_0x25db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DB28_0x25db28");
#endif

    switch (ctx->pc) {
        case 0x25db74u: goto label_25db74;
        case 0x25dbd8u: goto label_25dbd8;
        case 0x25dbf8u: goto label_25dbf8;
        case 0x25dc8cu: goto label_25dc8c;
        default: break;
    }

    ctx->pc = 0x25db28u;

    // 0x25db28: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x25db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x25db2c: 0x8f8285f8  lw          $v0, -0x7A08($gp)
    ctx->pc = 0x25db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x25db30: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x25db30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x25db34: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x25db34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x25db38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25db38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db3c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x25db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x25db40: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x25db40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x25db44: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x25db44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25db48: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x25db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x25db4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25db4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db50: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x25db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x25db54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25db54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db58: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x25db58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x25db5c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25db5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db60: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x25db60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x25db64: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x25db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x25db68: 0x26170094  addiu       $s7, $s0, 0x94
    ctx->pc = 0x25db68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x25db6c: 0xc08994a  jal         func_226528
    ctx->pc = 0x25DB6Cu;
    SET_GPR_U32(ctx, 31, 0x25DB74u);
    ctx->pc = 0x25DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB6Cu;
    // 0x25db70: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x25DB6Cu, 0x25DB74u)) {
        return;
    }
    ctx->pc = 0x25DB74u;
label_25db74:
    // 0x25db74: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x25db74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x25db78: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x25db78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x25db7c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x25db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x25db80: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x25db80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25db84: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x25db84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25db88: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x25db88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x25db8c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x25db8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db90: 0x6a07011f  ldl         $a3, 0x11F($s0)
    ctx->pc = 0x25db90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x25db94: 0x6e070118  ldr         $a3, 0x118($s0)
    ctx->pc = 0x25db94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x25db98: 0x8e080120  lw          $t0, 0x120($s0)
    ctx->pc = 0x25db98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x25db9c: 0xb3a70117  sdl         $a3, 0x117($sp)
    ctx->pc = 0x25db9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25dba0: 0xb7a70110  sdr         $a3, 0x110($sp)
    ctx->pc = 0x25dba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25dba4: 0xafa80118  sw          $t0, 0x118($sp)
    ctx->pc = 0x25dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 8));
    // 0x25dba8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x25dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x25dbac: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x25dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x25dbb0: 0x6a040113  ldl         $a0, 0x113($s0)
    ctx->pc = 0x25dbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x25dbb4: 0x6e04010c  ldr         $a0, 0x10C($s0)
    ctx->pc = 0x25dbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x25dbb8: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x25dbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x25dbbc: 0xb3a40127  sdl         $a0, 0x127($sp)
    ctx->pc = 0x25dbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25dbc0: 0xb7a40120  sdr         $a0, 0x120($sp)
    ctx->pc = 0x25dbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25dbc4: 0xafa50128  sw          $a1, 0x128($sp)
    ctx->pc = 0x25dbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 5));
    // 0x25dbc8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x25dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x25dbcc: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x25dbccu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x25dbd0: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x25dbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x25dbd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25dbd8:
    // 0x25dbd8: 0x4810037  bgez        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x25DBD8u;
    {
        const bool branch_taken_0x25dbd8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x25DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBD8u;
        // 0x25dbdc: 0x3a41821  addu        $v1, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbd8) {
            ctx->pc = 0x25DCB8u;
            goto label_25dcb8;
        }
    }
    ctx->pc = 0x25DBE0u;
    // 0x25dbe0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x25dbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbe4: 0x26090048  addiu       $t1, $s0, 0x48
    ctx->pc = 0x25dbe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x25dbe8: 0x24a70078  addiu       $a3, $a1, 0x78
    ctx->pc = 0x25dbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x25dbec: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x25dbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25dbf0: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x25dbf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x25dbf4: 0x0  nop
    ctx->pc = 0x25dbf4u;
    // NOP
label_25dbf8:
    // 0x25dbf8: 0x90a30011  lbu         $v1, 0x11($a1)
    ctx->pc = 0x25dbf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x25dbfc: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x25dbfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25dc00: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x25dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dc04: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x25dc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x25dc08: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x25dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25dc0c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x25dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25dc10: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x25dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25dc14: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x25dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x25dc18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dc1c: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x25dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x25dc20: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x25dc20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x25dc24: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x25dc24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25dc28: 0x864018  mult        $t0, $a0, $a2
    ctx->pc = 0x25dc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x25dc2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25dc2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x25dc30: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc34: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x25dc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x25dc38: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x25dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x25dc3c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x25dc3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x25dc40: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x25dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dc44: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25dc44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25dc48: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x25dc48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x25dc4c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25dc4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x25dc50: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x25dc50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x25dc54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25dc54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25dc58: 0x1c600013  bgtz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25DC58u;
    {
        const bool branch_taken_0x25dc58 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x25DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC58u;
        // 0x25dc5c: 0xe7a20138  swc1        $f2, 0x138($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc58) {
            ctx->pc = 0x25DCA8u;
            goto label_25dca8;
        }
    }
    ctx->pc = 0x25DC60u;
    // 0x25dc60: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x25dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x25dc64: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x25dc64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x25dc68: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x25DC68u;
    {
        const bool branch_taken_0x25dc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dc68) {
            ctx->pc = 0x25DC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DC68u;
            // 0x25dc6c: 0x90a20010  lbu         $v0, 0x10($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dbf8;
        }
    }
    ctx->pc = 0x25DC70u;
    // 0x25dc70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25dc74: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x25dc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25dc78: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25DC78u;
    {
        const bool branch_taken_0x25dc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dc78) {
            ctx->pc = 0x25DC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DC78u;
            // 0x25dc7c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DC98u;
            goto label_25dc98;
        }
    }
    ctx->pc = 0x25DC80u;
    // 0x25dc80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc84: 0xc09740e  jal         func_25D038
    ctx->pc = 0x25DC84u;
    SET_GPR_U32(ctx, 31, 0x25DC8Cu);
    ctx->pc = 0x25DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC84u;
    // 0x25dc88: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D038u, 0x25DC84u, 0x25DC8Cu)) {
        return;
    }
    ctx->pc = 0x25DC8Cu;
label_25dc8c:
    // 0x25dc8c: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x25DC8Cu;
    {
        const bool branch_taken_0x25dc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc8c) {
            ctx->pc = 0x25DC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DC8Cu;
            // 0x25dc90: 0xae540008  sw          $s4, 0x8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DD60u;
            goto label_25dd60;
        }
    }
    ctx->pc = 0x25DC94u;
    // 0x25dc94: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25dc98:
    // 0x25dc98: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x25dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25dc9c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x25dc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25dca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dca4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_25dca8:
    // 0x25dca8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x25dca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25dcac: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x25dcacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x25dcb0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25DCB0u;
    {
        const bool branch_taken_0x25dcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCB0u;
        // 0x25dcb4: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcb0) {
            ctx->pc = 0x25DD54u;
            goto label_25dd54;
        }
    }
    ctx->pc = 0x25DCB8u;
label_25dcb8:
    // 0x25dcb8: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x25dcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25dcbc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x25dcbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dcc0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x25dcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dcc4: 0xc4420120  lwc1        $f2, 0x120($v0)
    ctx->pc = 0x25dcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dcc8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x25dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dccc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25dcccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25dcd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25dcd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25dcd4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25dcd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25dcd8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25dcd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25dcdc: 0x461001c  bgez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x25DCDCu;
    {
        const bool branch_taken_0x25dcdc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x25DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCDCu;
        // 0x25dce0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcdc) {
            ctx->pc = 0x25DD50u;
            goto label_25dd50;
        }
    }
    ctx->pc = 0x25DCE4u;
    // 0x25dce4: 0x443001b  bgezl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25DCE4u;
    {
        const bool branch_taken_0x25dce4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x25dce4) {
            ctx->pc = 0x25DCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DCE4u;
            // 0x25dce8: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DD54u;
            goto label_25dd54;
        }
    }
    ctx->pc = 0x25DCECu;
    // 0x25dcec: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x25dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x25dcf0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x25dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dcf4: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x25dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dcf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25dcf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dcfc: 0x0  nop
    ctx->pc = 0x25dcfcu;
    // NOP
    // 0x25dd00: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25DD00u;
    {
        const bool branch_taken_0x25dd00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD00u;
        // 0x25dd04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd00) {
            ctx->pc = 0x25DD0Cu;
            goto label_25dd0c;
        }
    }
    ctx->pc = 0x25DD08u;
    // 0x25dd08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25dd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dd0c:
    // 0x25dd0c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DD0Cu;
    {
        const bool branch_taken_0x25dd0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd0c) {
            ctx->pc = 0x25DD24u;
            goto label_25dd24;
        }
    }
    ctx->pc = 0x25DD14u;
    // 0x25dd14: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25DD14u;
    {
        const bool branch_taken_0x25dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dd14) {
            ctx->pc = 0x25DD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DD14u;
            // 0x25dd18: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DD30u;
            goto label_25dd30;
        }
    }
    ctx->pc = 0x25DD1Cu;
    // 0x25dd1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25DD1Cu;
    {
        const bool branch_taken_0x25dd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD1Cu;
        // 0x25dd20: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd1c) {
            ctx->pc = 0x25DD3Cu;
            goto label_25dd3c;
        }
    }
    ctx->pc = 0x25DD24u;
label_25dd24:
    // 0x25dd24: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DD24u;
    {
        const bool branch_taken_0x25dd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dd24) {
            ctx->pc = 0x25DD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DD24u;
            // 0x25dd28: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DD3Cu;
            goto label_25dd3c;
        }
    }
    ctx->pc = 0x25DD2Cu;
    // 0x25dd2c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x25dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25dd30:
    // 0x25dd30: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x25dd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x25dd34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25DD34u;
    {
        const bool branch_taken_0x25dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD34u;
        // 0x25dd38: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd34) {
            ctx->pc = 0x25DD44u;
            goto label_25dd44;
        }
    }
    ctx->pc = 0x25DD3Cu;
label_25dd3c:
    // 0x25dd3c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x25dd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x25dd40: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x25dd40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_25dd44:
    // 0x25dd44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25dd44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25dd48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DD48u;
    {
        const bool branch_taken_0x25dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD48u;
        // 0x25dd4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd48) {
            ctx->pc = 0x25DD54u;
            goto label_25dd54;
        }
    }
    ctx->pc = 0x25DD50u;
label_25dd50:
    // 0x25dd50: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x25dd50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_25dd54:
    // 0x25dd54: 0x663ffa0  bgezl       $s3, . + 4 + (-0x60 << 2)
    ctx->pc = 0x25DD54u;
    {
        const bool branch_taken_0x25dd54 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x25dd54) {
            ctx->pc = 0x25DD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DD54u;
            // 0x25dd58: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dbd8;
        }
    }
    ctx->pc = 0x25DD5Cu;
    // 0x25dd5c: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x25dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
label_25dd60:
    // 0x25dd60: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x25dd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd64: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x25dd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x25dd68: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x25dd68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x25dd6c: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x25dd6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25dd70: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x25dd70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25dd74: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x25dd74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25dd78: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x25dd78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x25dd7c: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x25dd7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x25dd80: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x25dd80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25dd84: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x25dd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25dd88: 0x3e00008  jr          $ra
    ctx->pc = 0x25DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD88u;
        // 0x25dd8c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DD90u;
}
