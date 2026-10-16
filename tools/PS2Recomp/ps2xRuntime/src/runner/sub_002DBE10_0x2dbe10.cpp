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

// Function: sub_002DBE10
// Address: 0x2dbe10 - 0x2dbe68
void sub_002DBE10_0x2dbe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBE10_0x2dbe10");
#endif

    switch (ctx->pc) {
        case 0x2dbe40u: goto label_2dbe40;
        default: break;
    }

    ctx->pc = 0x2dbe10u;

    // 0x2dbe10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbe14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dbe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbe18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbe1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbe20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbe20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2dbe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dbe28: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBE28u;
    {
        const bool branch_taken_0x2dbe28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE28u;
        // 0x2dbe2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe28) {
            ctx->pc = 0x2DBE58u;
            goto label_2dbe58;
        }
    }
    ctx->pc = 0x2DBE30u;
    // 0x2dbe30: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2dbe30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2dbe34: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2dbe34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dbe38: 0xc0b7018  jal         func_2DC060
    ctx->pc = 0x2DBE38u;
    SET_GPR_U32(ctx, 31, 0x2DBE40u);
    ctx->pc = 0x2DBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE38u;
    // 0x2dbe3c: 0x24847c98  addiu       $a0, $a0, 0x7C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC060u, 0x2DBE38u, 0x2DBE40u)) {
        return;
    }
    ctx->pc = 0x2DBE40u;
label_2dbe40:
    // 0x2dbe40: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBE40u;
    {
        const bool branch_taken_0x2dbe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe40) {
            ctx->pc = 0x2DBE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBE40u;
            // 0x2dbe44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBE50u;
            goto label_2dbe50;
        }
    }
    ctx->pc = 0x2DBE48u;
    // 0x2dbe48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBE48u;
    {
        const bool branch_taken_0x2dbe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE48u;
        // 0x2dbe4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe48) {
            ctx->pc = 0x2DBE58u;
            goto label_2dbe58;
        }
    }
    ctx->pc = 0x2DBE50u;
label_2dbe50:
    // 0x2dbe50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2dbe50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2dbe54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dbe54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe58:
    // 0x2dbe58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbe58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbe5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbe60: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE60u;
        // 0x2dbe64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBE68u;
}
