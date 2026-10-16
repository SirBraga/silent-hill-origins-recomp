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

// Function: sub_00231710
// Address: 0x231710 - 0x231768
void sub_00231710_0x231710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231710_0x231710");
#endif

    switch (ctx->pc) {
        case 0x231748u: goto label_231748;
        default: break;
    }

    ctx->pc = 0x231710u;

    // 0x231710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231714: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x231714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x231718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23171c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x23171Cu;
    {
        const bool branch_taken_0x23171c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x231720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23171Cu;
        // 0x231720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23171c) {
            ctx->pc = 0x231754u;
            goto label_231754;
        }
    }
    ctx->pc = 0x231724u;
    // 0x231724: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x231724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x231728: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x231728u;
    {
        const bool branch_taken_0x231728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231728u;
        // 0x23172c: 0x8f8390fc  lw          $v1, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231728) {
            ctx->pc = 0x231754u;
            goto label_231754;
        }
    }
    ctx->pc = 0x231730u;
    // 0x231730: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x231730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231734: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x231734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231738: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x231738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23173c: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x23173cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x231740: 0xc092782  jal         func_249E08
    ctx->pc = 0x231740u;
    SET_GPR_U32(ctx, 31, 0x231748u);
    ctx->pc = 0x231744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231740u;
    // 0x231744: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x231740u, 0x231748u)) {
        return;
    }
    ctx->pc = 0x231748u;
label_231748:
    // 0x231748: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x231748u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x23174c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23174Cu;
    {
        const bool branch_taken_0x23174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23174Cu;
        // 0x231750: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23174c) {
            ctx->pc = 0x231758u;
            goto label_231758;
        }
    }
    ctx->pc = 0x231754u;
label_231754:
    // 0x231754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231758:
    // 0x231758: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x231758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23175c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231760: 0x3e00008  jr          $ra
    ctx->pc = 0x231760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231760u;
        // 0x231764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231768u;
}
