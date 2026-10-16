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

// Function: sub_00172C88
// Address: 0x172c88 - 0x172d40
void sub_00172C88_0x172c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172C88_0x172c88");
#endif

    switch (ctx->pc) {
        case 0x172cb0u: goto label_172cb0;
        case 0x172cd4u: goto label_172cd4;
        case 0x172cd8u: goto label_172cd8;
        case 0x172ce4u: goto label_172ce4;
        case 0x172cf8u: goto label_172cf8;
        case 0x172d00u: goto label_172d00;
        case 0x172d10u: goto label_172d10;
        case 0x172d20u: goto label_172d20;
        default: break;
    }

    ctx->pc = 0x172c88u;

    // 0x172c88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x172c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x172c8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x172c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x172c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x172c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x172c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x172c9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x172c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x172ca0: 0x26110064  addiu       $s1, $s0, 0x64
    ctx->pc = 0x172ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x172ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172ca8: 0xc05d80c  jal         func_176030
    ctx->pc = 0x172CA8u;
    SET_GPR_U32(ctx, 31, 0x172CB0u);
    ctx->pc = 0x172CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CA8u;
    // 0x172cac: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x172CA8u, 0x172CB0u)) {
        return;
    }
    ctx->pc = 0x172CB0u;
label_172cb0:
    // 0x172cb0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x172cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x172cb4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x172cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x172cb8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x172cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x172cbc: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x172cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
    // 0x172cc0: 0x24635990  addiu       $v1, $v1, 0x5990
    ctx->pc = 0x172cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22928));
    // 0x172cc4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x172cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x172cc8: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x172cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x172ccc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x172CCCu;
    SET_GPR_U32(ctx, 31, 0x172CD4u);
    ctx->pc = 0x172CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CCCu;
    // 0x172cd0: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x172CCCu, 0x172CD4u)) {
        return;
    }
    ctx->pc = 0x172CD4u;
label_172cd4:
    // 0x172cd4: 0x0  nop
    ctx->pc = 0x172cd4u;
    // NOP
label_172cd8:
    // 0x172cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cdc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x172CDCu;
    SET_GPR_U32(ctx, 31, 0x172CE4u);
    ctx->pc = 0x172CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CDCu;
    // 0x172ce0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x172CDCu, 0x172CE4u)) {
        return;
    }
    ctx->pc = 0x172CE4u;
label_172ce4:
    // 0x172ce4: 0x0  nop
    ctx->pc = 0x172ce4u;
    // NOP
    // 0x172ce8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x172CE8u;
    {
        const bool branch_taken_0x172ce8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x172CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CE8u;
        // 0x172cec: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ce8) {
            ctx->pc = 0x172CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172cd8;
        }
    }
    ctx->pc = 0x172CF0u;
    // 0x172cf0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x172CF0u;
    SET_GPR_U32(ctx, 31, 0x172CF8u);
    ctx->pc = 0x172CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CF0u;
    // 0x172cf4: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x172CF0u, 0x172CF8u)) {
        return;
    }
    ctx->pc = 0x172CF8u;
label_172cf8:
    // 0x172cf8: 0xc05c9fc  jal         func_1727F0
    ctx->pc = 0x172CF8u;
    SET_GPR_U32(ctx, 31, 0x172D00u);
    ctx->pc = 0x172CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CF8u;
    // 0x172cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1727F0u, 0x172CF8u, 0x172D00u)) {
        return;
    }
    ctx->pc = 0x172D00u;
label_172d00:
    // 0x172d00: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x172d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x172d04: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x172d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x172d08: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x172D08u;
    SET_GPR_U32(ctx, 31, 0x172D10u);
    ctx->pc = 0x172D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D08u;
    // 0x172d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x172D08u, 0x172D10u)) {
        return;
    }
    ctx->pc = 0x172D10u;
label_172d10:
    // 0x172d10: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x172d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x172d14: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x172d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x172d18: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x172D18u;
    SET_GPR_U32(ctx, 31, 0x172D20u);
    ctx->pc = 0x172D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D18u;
    // 0x172d1c: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x172D18u, 0x172D20u)) {
        return;
    }
    ctx->pc = 0x172D20u;
label_172d20:
    // 0x172d20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x172d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172d28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x172d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172d2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172d30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x172d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172d38: 0x3e00008  jr          $ra
    ctx->pc = 0x172D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D38u;
        // 0x172d3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172D40u;
}
