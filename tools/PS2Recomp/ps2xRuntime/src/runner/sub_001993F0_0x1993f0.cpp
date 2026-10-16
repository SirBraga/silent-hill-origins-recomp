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

// Function: sub_001993F0
// Address: 0x1993f0 - 0x199440
void sub_001993F0_0x1993f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001993F0_0x1993f0");
#endif

    switch (ctx->pc) {
        case 0x199410u: goto label_199410;
        case 0x199420u: goto label_199420;
        case 0x199428u: goto label_199428;
        default: break;
    }

    ctx->pc = 0x1993f0u;

    // 0x1993f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1993f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1993f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1993f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1993f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1993f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1993fc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1993fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x199400: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x199400u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x199404: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x199404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x199408: 0xc0ab628  jal         func_2AD8A0
    ctx->pc = 0x199408u;
    SET_GPR_U32(ctx, 31, 0x199410u);
    ctx->pc = 0x19940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199408u;
    // 0x19940c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A0u, 0x199408u, 0x199410u)) {
        return;
    }
    ctx->pc = 0x199410u;
label_199410:
    // 0x199410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199414: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x199414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x199418: 0xc0acabe  jal         func_2B2AF8
    ctx->pc = 0x199418u;
    SET_GPR_U32(ctx, 31, 0x199420u);
    ctx->pc = 0x19941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199418u;
    // 0x19941c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2AF8u, 0x199418u, 0x199420u)) {
        return;
    }
    ctx->pc = 0x199420u;
label_199420:
    // 0x199420: 0xc0abbaa  jal         func_2AEEA8
    ctx->pc = 0x199420u;
    SET_GPR_U32(ctx, 31, 0x199428u);
    ctx->pc = 0x199424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199420u;
    // 0x199424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AEEA8u, 0x199420u, 0x199428u)) {
        return;
    }
    ctx->pc = 0x199428u;
label_199428:
    // 0x199428: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19942c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19942cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199430: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x199430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x199434: 0x3e00008  jr          $ra
    ctx->pc = 0x199434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199434u;
        // 0x199438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19943Cu;
    // 0x19943c: 0x0  nop
    ctx->pc = 0x19943cu;
    // NOP
    ctx->pc = 0x199440u;
}
