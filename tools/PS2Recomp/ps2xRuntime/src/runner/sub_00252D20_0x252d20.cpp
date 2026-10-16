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

// Function: sub_00252D20
// Address: 0x252d20 - 0x252d90
void sub_00252D20_0x252d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252D20_0x252d20");
#endif

    switch (ctx->pc) {
        case 0x252d64u: goto label_252d64;
        case 0x252d78u: goto label_252d78;
        default: break;
    }

    ctx->pc = 0x252d20u;

    // 0x252d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252d24: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x252d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252d2c: 0x8c43561c  lw          $v1, 0x561C($v0)
    ctx->pc = 0x252d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x73561Cu));
    // 0x252d30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x252d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x252d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252d3c: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x252d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x252d40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x252d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252d44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x252D44u;
    {
        const bool branch_taken_0x252d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D44u;
        // 0x252d48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d44) {
            ctx->pc = 0x252D7Cu;
            goto label_252d7c;
        }
    }
    ctx->pc = 0x252D4Cu;
    // 0x252d4c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x252d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x252d50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x252D50u;
    {
        const bool branch_taken_0x252d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D50u;
        // 0x252d54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d50) {
            ctx->pc = 0x252D7Cu;
            goto label_252d7c;
        }
    }
    ctx->pc = 0x252D58u;
    // 0x252d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d5c: 0xc097200  jal         func_25C800
    ctx->pc = 0x252D5Cu;
    SET_GPR_U32(ctx, 31, 0x252D64u);
    ctx->pc = 0x252D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D5Cu;
    // 0x252d60: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C800u, 0x252D5Cu, 0x252D64u)) {
        return;
    }
    ctx->pc = 0x252D64u;
label_252d64:
    // 0x252d64: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x252d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x252d68: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x252d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x252d6c: 0x24a52300  addiu       $a1, $a1, 0x2300
    ctx->pc = 0x252d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    // 0x252d70: 0xc0971f8  jal         func_25C7E0
    ctx->pc = 0x252D70u;
    SET_GPR_U32(ctx, 31, 0x252D78u);
    ctx->pc = 0x252D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D70u;
    // 0x252d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C7E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C7E0u, 0x252D70u, 0x252D78u)) {
        return;
    }
    ctx->pc = 0x252D78u;
label_252d78:
    // 0x252d78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252d7c:
    // 0x252d7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x252d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252d88: 0x3e00008  jr          $ra
    ctx->pc = 0x252D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D88u;
        // 0x252d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252D90u;
}
