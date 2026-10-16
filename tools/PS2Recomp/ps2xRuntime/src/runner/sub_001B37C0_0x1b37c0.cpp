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

// Function: sub_001B37C0
// Address: 0x1b37c0 - 0x1b3868
void sub_001B37C0_0x1b37c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B37C0_0x1b37c0");
#endif

    switch (ctx->pc) {
        case 0x1b37d0u: goto label_1b37d0;
        default: break;
    }

    ctx->pc = 0x1b37c0u;

    // 0x1b37c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b37c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b37c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b37c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b37c8: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B37C8u;
    SET_GPR_U32(ctx, 31, 0x1B37D0u);
    ctx->pc = 0x1B37CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37C8u;
    // 0x1b37cc: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B37C8u, 0x1B37D0u)) {
        return;
    }
    ctx->pc = 0x1B37D0u;
label_1b37d0:
    // 0x1b37d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B37D0u;
    {
        const bool branch_taken_0x1b37d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37D0u;
        // 0x1b37d4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37d0) {
            ctx->pc = 0x1B37ECu;
            goto label_1b37ec;
        }
    }
    ctx->pc = 0x1B37D8u;
    // 0x1b37d8: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1b37d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x1b37dc: 0x34210901  ori         $at, $at, 0x901
    ctx->pc = 0x1b37dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2305);
    // 0x1b37e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b37e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b37e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B37E4u;
    {
        const bool branch_taken_0x1b37e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37E4u;
        // 0x1b37e8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37e4) {
            ctx->pc = 0x1B3808u;
            goto label_1b3808;
        }
    }
    ctx->pc = 0x1B37ECu;
label_1b37ec:
    // 0x1b37ec: 0x3c0142e4  lui         $at, 0x42E4
    ctx->pc = 0x1b37ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17124 << 16));
    // 0x1b37f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b37f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b37f4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b37f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1b37f8: 0x3421300c  ori         $at, $at, 0x300C
    ctx->pc = 0x1b37f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12300);
    // 0x1b37fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b37fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3800: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b3800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b3804: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b3804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b3808:
    // 0x1b3808: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b3808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b380c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1b380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3810: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3814: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3818: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1b3818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1b381c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b381cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3820: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b3820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b3824: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b3824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3828: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b3828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b382c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b382cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3830: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3834: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b3834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b3838: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1b3838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1b383c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1b383cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1b3840: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1b3840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3844: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1b3844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3848: 0x9fa40020  lwu         $a0, 0x20($sp)
    ctx->pc = 0x1b3848u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b384c: 0x9fa20024  lwu         $v0, 0x24($sp)
    ctx->pc = 0x1b384cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b3850: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b3850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b3854: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b3854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b3858: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b385c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b3860: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3860u;
        // 0x1b3864: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3868u;
}
