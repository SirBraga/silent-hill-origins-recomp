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

// Function: sub_002DB008
// Address: 0x2db008 - 0x2db068
void sub_002DB008_0x2db008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB008_0x2db008");
#endif

    switch (ctx->pc) {
        case 0x2db028u: goto label_2db028;
        case 0x2db030u: goto label_2db030;
        case 0x2db050u: goto label_2db050;
        default: break;
    }

    ctx->pc = 0x2db008u;

    // 0x2db008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db00c: 0x8f848fd8  lw          $a0, -0x7028($gp)
    ctx->pc = 0x2db00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x2db010: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2db010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2db014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db018: 0x27908fd8  addiu       $s0, $gp, -0x7028
    ctx->pc = 0x2db018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938584));
    // 0x2db01c: 0x10900007  beq         $a0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB01Cu;
    {
        const bool branch_taken_0x2db01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB01Cu;
        // 0x2db020: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db01c) {
            ctx->pc = 0x2DB03Cu;
            goto label_2db03c;
        }
    }
    ctx->pc = 0x2DB024u;
    // 0x2db024: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2db024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db028:
    // 0x2db028: 0xc0b6c8c  jal         func_2DB230
    ctx->pc = 0x2DB028u;
    SET_GPR_U32(ctx, 31, 0x2DB030u);
    ctx->pc = 0x2DB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB028u;
    // 0x2db02c: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB230u, 0x2DB028u, 0x2DB030u)) {
        return;
    }
    ctx->pc = 0x2DB030u;
label_2db030:
    // 0x2db030: 0x8f848fd8  lw          $a0, -0x7028($gp)
    ctx->pc = 0x2db030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x2db034: 0x1491fffc  bne         $a0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2DB034u;
    {
        const bool branch_taken_0x2db034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x2db034) {
            ctx->pc = 0x2DB028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db028;
        }
    }
    ctx->pc = 0x2DB03Cu;
label_2db03c:
    // 0x2db03c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2db03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2db040: 0xaf908fdc  sw          $s0, -0x7024($gp)
    ctx->pc = 0x2db040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938588), GPR_U32(ctx, 16));
    // 0x2db044: 0x24847c70  addiu       $a0, $a0, 0x7C70
    ctx->pc = 0x2db044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31856));
    // 0x2db048: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DB048u;
    SET_GPR_U32(ctx, 31, 0x2DB050u);
    ctx->pc = 0x2DB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB048u;
    // 0x2db04c: 0xaf908fd8  sw          $s0, -0x7028($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938584), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DB048u, 0x2DB050u)) {
        return;
    }
    ctx->pc = 0x2DB050u;
label_2db050:
    // 0x2db050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2db050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db05c: 0xaf808b64  sw          $zero, -0x749C($gp)
    ctx->pc = 0x2db05cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 0));
    // 0x2db060: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB060u;
        // 0x2db064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB068u;
}
