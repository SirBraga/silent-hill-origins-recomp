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

// Function: sub_001A4C78
// Address: 0x1a4c78 - 0x1a4d40
void sub_001A4C78_0x1a4c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4C78_0x1a4c78");
#endif

    switch (ctx->pc) {
        case 0x1a4ca4u: goto label_1a4ca4;
        case 0x1a4cd0u: goto label_1a4cd0;
        case 0x1a4d08u: goto label_1a4d08;
        default: break;
    }

    ctx->pc = 0x1a4c78u;

    // 0x1a4c78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4c7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a4c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a4c80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a4c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a4c84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4c88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a4c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c8c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a4c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a4c90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a4c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4c98: 0x8e451294  lw          $a1, 0x1294($s2)
    ctx->pc = 0x1a4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4756)));
    // 0x1a4c9c: 0xc069350  jal         func_1A4D40
    ctx->pc = 0x1A4C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A4CA4u);
    ctx->pc = 0x1A4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C9Cu;
    // 0x1a4ca0: 0x8e531350  lw          $s3, 0x1350($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4944)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4D40u, 0x1A4C9Cu, 0x1A4CA4u)) {
        return;
    }
    ctx->pc = 0x1A4CA4u;
label_1a4ca4:
    // 0x1a4ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ca8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A4CA8u;
    {
        const bool branch_taken_0x1a4ca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ca8) {
            ctx->pc = 0x1A4D0Cu;
            goto label_1a4d0c;
        }
    }
    ctx->pc = 0x1A4CB0u;
    // 0x1a4cb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4cb4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A4CB4u;
    {
        const bool branch_taken_0x1a4cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CB4u;
        // 0x1a4cb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cb4) {
            ctx->pc = 0x1A4D0Cu;
            goto label_1a4d0c;
        }
    }
    ctx->pc = 0x1A4CBCu;
    // 0x1a4cbc: 0x8e431290  lw          $v1, 0x1290($s2)
    ctx->pc = 0x1a4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4752)));
    // 0x1a4cc0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A4CC0u;
    {
        const bool branch_taken_0x1a4cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4cc0) {
            ctx->pc = 0x1A4CF4u;
            goto label_1a4cf4;
        }
    }
    ctx->pc = 0x1A4CC8u;
    // 0x1a4cc8: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1A4CC8u;
    SET_GPR_U32(ctx, 31, 0x1A4CD0u);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1A4CC8u, 0x1A4CD0u)) {
        return;
    }
    ctx->pc = 0x1A4CD0u;
label_1a4cd0:
    // 0x1a4cd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4cd4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a4cd4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a4cd8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A4CD8u;
    {
        const bool branch_taken_0x1a4cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cd8) {
            ctx->pc = 0x1A4CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4CD8u;
            // 0x1a4cdc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4CE0u;
            goto label_1a4ce0;
        }
    }
    ctx->pc = 0x1A4CE0u;
label_1a4ce0:
    // 0x1a4ce0: 0x2010  mfhi        $a0
    ctx->pc = 0x1a4ce0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1a4ce4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4ce8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1a4ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1a4cec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4CECu;
    {
        const bool branch_taken_0x1a4cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CECu;
        // 0x1a4cf0: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cec) {
            ctx->pc = 0x1A4D0Cu;
            goto label_1a4d0c;
        }
    }
    ctx->pc = 0x1A4CF4u;
label_1a4cf4:
    // 0x1a4cf4: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4CF4u;
    {
        const bool branch_taken_0x1a4cf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cf4) {
            ctx->pc = 0x1A4CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4CF4u;
            // 0x1a4cf8: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D0Cu;
            goto label_1a4d0c;
        }
    }
    ctx->pc = 0x1A4CFCu;
    // 0x1a4cfc: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x1a4cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1a4d00: 0xc0693a0  jal         func_1A4E80
    ctx->pc = 0x1A4D00u;
    SET_GPR_U32(ctx, 31, 0x1A4D08u);
    ctx->pc = 0x1A4D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D00u;
    // 0x1a4d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4E80u, 0x1A4D00u, 0x1A4D08u)) {
        return;
    }
    ctx->pc = 0x1A4D08u;
label_1a4d08:
    // 0x1a4d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d0c:
    // 0x1a4d0c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4D0Cu;
    {
        const bool branch_taken_0x1a4d0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D0Cu;
        // 0x1a4d10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d0c) {
            ctx->pc = 0x1A4D24u;
            goto label_1a4d24;
        }
    }
    ctx->pc = 0x1A4D14u;
    // 0x1a4d14: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1a4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1a4d18: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1a4d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a4d1c: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x1a4d1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
    // 0x1a4d20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a4d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d24:
    // 0x1a4d24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a4d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4d28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a4d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4d2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4d30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a4d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D38u;
        // 0x1a4d3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4D40u;
}
