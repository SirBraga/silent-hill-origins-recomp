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

// Function: sub_001A54B8
// Address: 0x1a54b8 - 0x1a55d8
void sub_001A54B8_0x1a54b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A54B8_0x1a54b8");
#endif

    switch (ctx->pc) {
        case 0x1a5578u: goto label_1a5578;
        default: break;
    }

    ctx->pc = 0x1a54b8u;

    // 0x1a54b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a54b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a54bc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1a54bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a54c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a54c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a54c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a54c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a54c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a54c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a54ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a54d0: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1a54d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a54d4: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x1a54d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a54d8: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x1a54d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a54dc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1a54dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a54e0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1a54e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a54e4: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1a54e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a54e8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1a54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a54ec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a54ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a54f0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a54f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a54f4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a54f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a54f8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1a54f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1a54fc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a54fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a5500: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a5500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a5504: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a5504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a5508: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a5508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a550c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a550cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5510: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a5510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5514: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a5514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a5518: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a5518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a551c: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x1a551cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5520: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x1a5520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5524: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1a5524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5528: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a552c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a552cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a5530: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a5530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a5534: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1a5534u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5538: 0x46046032  c.eq.s      $f12, $f4
    ctx->pc = 0x1a5538u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a553c: 0x0  nop
    ctx->pc = 0x1a553cu;
    // NOP
    // 0x1a5540: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5540u;
    {
        const bool branch_taken_0x1a5540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5540) {
            ctx->pc = 0x1A5554u;
            goto label_1a5554;
        }
    }
    ctx->pc = 0x1A5548u;
    // 0x1a5548: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x1a5548u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1a554c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A554Cu;
    {
        const bool branch_taken_0x1a554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A554Cu;
        // 0x1a5550: 0xe6240004  swc1        $f4, 0x4($s1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a554c) {
            ctx->pc = 0x1A55A4u;
            goto label_1a55a4;
        }
    }
    ctx->pc = 0x1A5554u;
label_1a5554:
    // 0x1a5554: 0x0  nop
    ctx->pc = 0x1a5554u;
    // NOP
    // 0x1a5558: 0x0  nop
    ctx->pc = 0x1a5558u;
    // NOP
    // 0x1a555c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1a555cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a5560: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1a5560u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5564: 0x0  nop
    ctx->pc = 0x1a5564u;
    // NOP
    // 0x1a5568: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5568u;
    {
        const bool branch_taken_0x1a5568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5568) {
            ctx->pc = 0x1A5578u;
            goto label_1a5578;
        }
    }
    ctx->pc = 0x1A5570u;
    // 0x1a5570: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1A5570u;
    SET_GPR_U32(ctx, 31, 0x1A5578u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1A5570u, 0x1A5578u)) {
        return;
    }
    ctx->pc = 0x1A5578u;
label_1a5578:
    // 0x1a5578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a557c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a557cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5580: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1a5580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5584: 0x0  nop
    ctx->pc = 0x1a5584u;
    // NOP
    // 0x1a5588: 0x0  nop
    ctx->pc = 0x1a5588u;
    // NOP
    // 0x1a558c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1a558cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x1a5590: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a5590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a5594: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1a5594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1a5598: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a5598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a559c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a559cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a55a0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1a55a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1a55a4:
    // 0x1a55a4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a55a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a55a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a55ac: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1a55acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a55b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a55b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a55b4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1a55b8: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1a55b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1a55bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a55bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a55c0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1a55c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1a55c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a55c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a55c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a55c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a55cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A55CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55CCu;
        // 0x1a55d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A55CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A55D4u;
    // 0x1a55d4: 0x0  nop
    ctx->pc = 0x1a55d4u;
    // NOP
    ctx->pc = 0x1a55d8u;
}
