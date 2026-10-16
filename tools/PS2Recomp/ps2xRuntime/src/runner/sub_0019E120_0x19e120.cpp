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

// Function: sub_0019E120
// Address: 0x19e120 - 0x19e180
void sub_0019E120_0x19e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E120_0x19e120");
#endif

    switch (ctx->pc) {
        case 0x19e140u: goto label_19e140;
        case 0x19e14cu: goto label_19e14c;
        case 0x19e160u: goto label_19e160;
        default: break;
    }

    ctx->pc = 0x19e120u;

    // 0x19e120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e124: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e12c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e130: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e138: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E138u;
    SET_GPR_U32(ctx, 31, 0x19E140u);
    ctx->pc = 0x19E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E138u;
    // 0x19e13c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E138u, 0x19E140u)) {
        return;
    }
    ctx->pc = 0x19E140u;
label_19e140:
    // 0x19e140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e144: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E144u;
    SET_GPR_U32(ctx, 31, 0x19E14Cu);
    ctx->pc = 0x19E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E144u;
    // 0x19e148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E144u, 0x19E14Cu)) {
        return;
    }
    ctx->pc = 0x19E14Cu;
label_19e14c:
    // 0x19e14c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e154: 0x2463aab8  addiu       $v1, $v1, -0x5548
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945464));
    // 0x19e158: 0xc085bca  jal         func_216F28
    ctx->pc = 0x19E158u;
    SET_GPR_U32(ctx, 31, 0x19E160u);
    ctx->pc = 0x19E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E158u;
    // 0x19e15c: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F28u, 0x19E158u, 0x19E160u)) {
        return;
    }
    ctx->pc = 0x19E160u;
label_19e160:
    // 0x19e160: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19e160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19e164: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e16c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e174: 0x3e00008  jr          $ra
    ctx->pc = 0x19E174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E174u;
        // 0x19e178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E17Cu;
    // 0x19e17c: 0x0  nop
    ctx->pc = 0x19e17cu;
    // NOP
    ctx->pc = 0x19e180u;
}
