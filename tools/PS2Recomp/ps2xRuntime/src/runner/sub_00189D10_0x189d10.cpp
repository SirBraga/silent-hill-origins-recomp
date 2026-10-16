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

// Function: sub_00189D10
// Address: 0x189d10 - 0x189d90
void sub_00189D10_0x189d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189D10_0x189d10");
#endif

    switch (ctx->pc) {
        case 0x189d40u: goto label_189d40;
        case 0x189d60u: goto label_189d60;
        default: break;
    }

    ctx->pc = 0x189d10u;

    // 0x189d10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x189d14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x189d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x189d18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x189d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x189d1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x189d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x189d24: 0x265000c4  addiu       $s0, $s2, 0xC4
    ctx->pc = 0x189d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    // 0x189d28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x189d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x189d2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x189d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d30: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x189d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x189d34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x189d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189d3c: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_189d40:
    // 0x189d40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x189d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189d44: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189d48: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x189D48u;
    {
        const bool branch_taken_0x189d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x189d48) {
            ctx->pc = 0x189D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189D48u;
            // 0x189d4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189D64u;
            goto label_189d64;
        }
    }
    ctx->pc = 0x189D50u;
    // 0x189d50: 0xae5100dc  sw          $s1, 0xDC($s2)
    ctx->pc = 0x189d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 17));
    // 0x189d54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x189d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d58: 0xc06285c  jal         func_18A170
    ctx->pc = 0x189D58u;
    SET_GPR_U32(ctx, 31, 0x189D60u);
    ctx->pc = 0x189D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D58u;
    // 0x189d5c: 0x8e848acc  lw          $a0, -0x7534($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A170u, 0x189D58u, 0x189D60u)) {
        return;
    }
    ctx->pc = 0x189D60u;
label_189d60:
    // 0x189d60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x189d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_189d64:
    // 0x189d64: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x189d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x189d68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x189D68u;
    {
        const bool branch_taken_0x189d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D68u;
        // 0x189d6c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d68) {
            ctx->pc = 0x189D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189d40;
        }
    }
    ctx->pc = 0x189D70u;
    // 0x189d70: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x189d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189d74: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x189d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189d78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x189d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189d7c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x189d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189d80: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x189d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189d88: 0x3e00008  jr          $ra
    ctx->pc = 0x189D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D88u;
        // 0x189d8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189D90u;
}
