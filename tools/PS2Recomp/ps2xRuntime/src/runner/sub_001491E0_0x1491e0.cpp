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

// Function: sub_001491E0
// Address: 0x1491e0 - 0x149330
void sub_001491E0_0x1491e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001491E0_0x1491e0");
#endif

    switch (ctx->pc) {
        case 0x14921cu: goto label_14921c;
        case 0x149314u: goto label_149314;
        default: break;
    }

    ctx->pc = 0x1491e0u;

    // 0x1491e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1491e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1491e4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1491e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1491e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1491e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1491ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1491ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1491f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1491f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491f4: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1491f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1491f8: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1491f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1491fc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1491fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x149200: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149200u;
    {
        const bool branch_taken_0x149200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x149204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149200u;
        // 0x149204: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149200) {
            ctx->pc = 0x14921Cu;
            goto label_14921c;
        }
    }
    ctx->pc = 0x149208u;
    // 0x149208: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x149208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14920c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14920Cu;
    {
        const bool branch_taken_0x14920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14920Cu;
        // 0x149210: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14920c) {
            ctx->pc = 0x149220u;
            goto label_149220;
        }
    }
    ctx->pc = 0x149214u;
    // 0x149214: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x149214u;
    SET_GPR_U32(ctx, 31, 0x14921Cu);
    ctx->pc = 0x149218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149214u;
    // 0x149218: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x149214u, 0x14921Cu)) {
        return;
    }
    ctx->pc = 0x14921Cu;
label_14921c:
    // 0x14921c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_149220:
    // 0x149220: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x149220u;
    {
        const bool branch_taken_0x149220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149220) {
            ctx->pc = 0x149224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149220u;
            // 0x149224: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149320u;
            goto label_149320;
        }
    }
    ctx->pc = 0x149228u;
    // 0x149228: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x149228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x14922c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14922cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x149230: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149234: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x149234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x149238: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x149238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14923c: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x14923cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x149240: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x149240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x149244: 0xb203012f  sdl         $v1, 0x12F($s0)
    ctx->pc = 0x149244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x149248: 0xb6030128  sdr         $v1, 0x128($s0)
    ctx->pc = 0x149248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14924c: 0xae040130  sw          $a0, 0x130($s0)
    ctx->pc = 0x14924cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 4));
    // 0x149250: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x149250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x149254: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x149254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149258: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x149258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14925c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14925cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149260: 0x0  nop
    ctx->pc = 0x149260u;
    // NOP
    // 0x149264: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x149264u;
    {
        const bool branch_taken_0x149264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149264u;
        // 0x149268: 0xe6000138  swc1        $f0, 0x138($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149264) {
            ctx->pc = 0x149274u;
            goto label_149274;
        }
    }
    ctx->pc = 0x14926Cu;
    // 0x14926c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14926cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149270: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_149274:
    // 0x149274: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x149274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x149278: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x149278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x14927c: 0xe6020184  swc1        $f2, 0x184($s0)
    ctx->pc = 0x14927cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
    // 0x149280: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x149284: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x149284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x149288: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x149288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14928c: 0x6849001f  ldl         $t1, 0x1F($v0)
    ctx->pc = 0x14928cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x149290: 0x6c490018  ldr         $t1, 0x18($v0)
    ctx->pc = 0x149290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x149294: 0x684a0027  ldl         $t2, 0x27($v0)
    ctx->pc = 0x149294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x149298: 0x6c4a0020  ldr         $t2, 0x20($v0)
    ctx->pc = 0x149298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x14929c: 0x6843002f  ldl         $v1, 0x2F($v0)
    ctx->pc = 0x14929cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1492a0: 0x6c430028  ldr         $v1, 0x28($v0)
    ctx->pc = 0x1492a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1492a4: 0xb2080147  sdl         $t0, 0x147($s0)
    ctx->pc = 0x1492a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492a8: 0xb6080140  sdr         $t0, 0x140($s0)
    ctx->pc = 0x1492a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492ac: 0xb209014f  sdl         $t1, 0x14F($s0)
    ctx->pc = 0x1492acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492b0: 0xb6090148  sdr         $t1, 0x148($s0)
    ctx->pc = 0x1492b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492b4: 0xb20a0157  sdl         $t2, 0x157($s0)
    ctx->pc = 0x1492b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492b8: 0xb60a0150  sdr         $t2, 0x150($s0)
    ctx->pc = 0x1492b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492bc: 0xb203015f  sdl         $v1, 0x15F($s0)
    ctx->pc = 0x1492bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492c0: 0xb6030158  sdr         $v1, 0x158($s0)
    ctx->pc = 0x1492c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492c4: 0x68480037  ldl         $t0, 0x37($v0)
    ctx->pc = 0x1492c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1492c8: 0x6c480030  ldr         $t0, 0x30($v0)
    ctx->pc = 0x1492c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1492cc: 0x6849003f  ldl         $t1, 0x3F($v0)
    ctx->pc = 0x1492ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1492d0: 0x6c490038  ldr         $t1, 0x38($v0)
    ctx->pc = 0x1492d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1492d4: 0x684a0047  ldl         $t2, 0x47($v0)
    ctx->pc = 0x1492d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1492d8: 0x6c4a0040  ldr         $t2, 0x40($v0)
    ctx->pc = 0x1492d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1492dc: 0x6843004f  ldl         $v1, 0x4F($v0)
    ctx->pc = 0x1492dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1492e0: 0x6c430048  ldr         $v1, 0x48($v0)
    ctx->pc = 0x1492e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1492e4: 0xb2080167  sdl         $t0, 0x167($s0)
    ctx->pc = 0x1492e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492e8: 0xb6080160  sdr         $t0, 0x160($s0)
    ctx->pc = 0x1492e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492ec: 0xb209016f  sdl         $t1, 0x16F($s0)
    ctx->pc = 0x1492ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492f0: 0xb6090168  sdr         $t1, 0x168($s0)
    ctx->pc = 0x1492f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492f4: 0xb20a0177  sdl         $t2, 0x177($s0)
    ctx->pc = 0x1492f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492f8: 0xb60a0170  sdr         $t2, 0x170($s0)
    ctx->pc = 0x1492f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1492fc: 0xb203017f  sdl         $v1, 0x17F($s0)
    ctx->pc = 0x1492fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x149300: 0xb6030178  sdr         $v1, 0x178($s0)
    ctx->pc = 0x149300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x149304: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x149304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x149308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14930c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14930Cu;
    SET_GPR_U32(ctx, 31, 0x149314u);
    ctx->pc = 0x149310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14930Cu;
    // 0x149310: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14930Cu, 0x149314u)) {
        return;
    }
    ctx->pc = 0x149314u;
label_149314:
    // 0x149314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149318: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x149318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x14931c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14931cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_149320:
    // 0x149320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149324: 0x3e00008  jr          $ra
    ctx->pc = 0x149324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149324u;
        // 0x149328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14932Cu;
    // 0x14932c: 0x0  nop
    ctx->pc = 0x14932cu;
    // NOP
    ctx->pc = 0x149330u;
}
