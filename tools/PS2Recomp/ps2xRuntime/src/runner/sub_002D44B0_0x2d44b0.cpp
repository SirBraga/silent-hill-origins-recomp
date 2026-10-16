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

// Function: sub_002D44B0
// Address: 0x2d44b0 - 0x2d4550
void sub_002D44B0_0x2d44b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D44B0_0x2d44b0");
#endif

    switch (ctx->pc) {
        case 0x2d44d8u: goto label_2d44d8;
        default: break;
    }

    ctx->pc = 0x2d44b0u;

    // 0x2d44b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d44b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d44b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d44b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d44b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d44b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d44bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d44bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d44c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d44c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d44c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d44c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d44ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d44d0: 0xc0b4ba8  jal         func_2D2EA0
    ctx->pc = 0x2D44D0u;
    SET_GPR_U32(ctx, 31, 0x2D44D8u);
    ctx->pc = 0x2D44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44D0u;
    // 0x2d44d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D2EA0u, 0x2D44D0u, 0x2D44D8u)) {
        return;
    }
    ctx->pc = 0x2D44D8u;
label_2d44d8:
    // 0x2d44d8: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x2d44d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d44dc: 0xc7818294  lwc1        $f1, -0x7D6C($gp)
    ctx->pc = 0x2d44dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d44e0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2d44e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d44e4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2d44e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d44e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d44ec: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2d44ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d44f0: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2d44f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d44f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d44f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d44f8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2d44f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2d44fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d44fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d4500: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d4500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2d4504: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d4504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d4508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d4508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d450c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2d4510: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2d4510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d4514: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2d4514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2d4518: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2d4518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d451c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2d451cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d4520: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d4520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d4524: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d4524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4528: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2d4528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d452c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d452cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4530: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d4530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d4534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d4534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d453c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d453cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d4540: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d4540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d4544: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4544u;
        // 0x2d4548: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D454Cu;
    // 0x2d454c: 0x0  nop
    ctx->pc = 0x2d454cu;
    // NOP
    ctx->pc = 0x2d4550u;
}
