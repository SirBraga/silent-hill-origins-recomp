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

// Function: sub_0019F038
// Address: 0x19f038 - 0x19f090
void sub_0019F038_0x19f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F038_0x19f038");
#endif

    switch (ctx->pc) {
        case 0x19f058u: goto label_19f058;
        case 0x19f064u: goto label_19f064;
        case 0x19f078u: goto label_19f078;
        default: break;
    }

    ctx->pc = 0x19f038u;

    // 0x19f038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f03c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f044: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19f048: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19f04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f050: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19F050u;
    SET_GPR_U32(ctx, 31, 0x19F058u);
    ctx->pc = 0x19F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F050u;
    // 0x19f054: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19F050u, 0x19F058u)) {
        return;
    }
    ctx->pc = 0x19F058u;
label_19f058:
    // 0x19f058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f05c: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19F05Cu;
    SET_GPR_U32(ctx, 31, 0x19F064u);
    ctx->pc = 0x19F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F05Cu;
    // 0x19f060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19F05Cu, 0x19F064u)) {
        return;
    }
    ctx->pc = 0x19F064u;
label_19f064:
    // 0x19f064: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19f068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f06c: 0x2463a568  addiu       $v1, $v1, -0x5A98
    ctx->pc = 0x19f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944104));
    // 0x19f070: 0xc06744e  jal         func_19D138
    ctx->pc = 0x19F070u;
    SET_GPR_U32(ctx, 31, 0x19F078u);
    ctx->pc = 0x19F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F070u;
    // 0x19f074: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19D138u, 0x19F070u, 0x19F078u)) {
        return;
    }
    ctx->pc = 0x19F078u;
label_19f078:
    // 0x19f078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f07c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f080: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19f080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f088: 0x3e00008  jr          $ra
    ctx->pc = 0x19F088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F088u;
        // 0x19f08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F090u;
}
