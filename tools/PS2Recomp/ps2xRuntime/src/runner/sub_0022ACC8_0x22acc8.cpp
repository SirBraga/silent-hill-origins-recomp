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

// Function: sub_0022ACC8
// Address: 0x22acc8 - 0x22ad40
void sub_0022ACC8_0x22acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ACC8_0x22acc8");
#endif

    switch (ctx->pc) {
        case 0x22acc8u: goto label_22acc8;
        case 0x22acccu: goto label_22accc;
        case 0x22acd0u: goto label_22acd0;
        case 0x22acd4u: goto label_22acd4;
        case 0x22acd8u: goto label_22acd8;
        case 0x22acdcu: goto label_22acdc;
        case 0x22ace0u: goto label_22ace0;
        case 0x22ace4u: goto label_22ace4;
        case 0x22ace8u: goto label_22ace8;
        case 0x22acecu: goto label_22acec;
        case 0x22acf0u: goto label_22acf0;
        case 0x22acf4u: goto label_22acf4;
        case 0x22acf8u: goto label_22acf8;
        case 0x22acfcu: goto label_22acfc;
        case 0x22ad00u: goto label_22ad00;
        case 0x22ad04u: goto label_22ad04;
        case 0x22ad08u: goto label_22ad08;
        case 0x22ad0cu: goto label_22ad0c;
        case 0x22ad10u: goto label_22ad10;
        case 0x22ad14u: goto label_22ad14;
        case 0x22ad18u: goto label_22ad18;
        case 0x22ad1cu: goto label_22ad1c;
        case 0x22ad20u: goto label_22ad20;
        case 0x22ad24u: goto label_22ad24;
        case 0x22ad28u: goto label_22ad28;
        case 0x22ad2cu: goto label_22ad2c;
        case 0x22ad30u: goto label_22ad30;
        case 0x22ad34u: goto label_22ad34;
        case 0x22ad38u: goto label_22ad38;
        case 0x22ad3cu: goto label_22ad3c;
        default: break;
    }

    ctx->pc = 0x22acc8u;

label_22acc8:
    // 0x22acc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22acc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22accc:
    // 0x22accc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22acccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22acd0:
    // 0x22acd0: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22acd4:
    // 0x22acd4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_22acd8:
    // 0x22acd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22acdc:
    // 0x22acdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22ace0:
    // 0x22ace0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_22ace4:
    // 0x22ace4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22ace8:
    // 0x22ace8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x22ace8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22acec:
    // 0x22acec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22acecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22acf0:
    // 0x22acf0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22acf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22acf4:
    // 0x22acf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22acf8:
    // 0x22acf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22acf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22acfc:
    // 0x22acfc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22ad00:
    // 0x22ad00: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_22ad04:
    if (ctx->pc == 0x22AD04u) {
        ctx->pc = 0x22AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD00u;
        // 0x22ad04: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD08u;
        goto label_22ad08;
    }
    ctx->pc = 0x22AD00u;
    {
        const bool branch_taken_0x22ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x22AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD00u;
        // 0x22ad04: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad00) {
            ctx->pc = 0x22AD1Cu;
            goto label_22ad1c;
        }
    }
    ctx->pc = 0x22AD08u;
label_22ad08:
    // 0x22ad08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22ad08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22ad0c:
    // 0x22ad0c: 0x260f809  jalr        $s3
label_22ad10:
    if (ctx->pc == 0x22AD10u) {
        ctx->pc = 0x22AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD0Cu;
        // 0x22ad10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD14u;
        goto label_22ad14;
    }
    ctx->pc = 0x22AD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x22AD14u);
        ctx->pc = 0x22AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD0Cu;
        // 0x22ad10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD0Cu, 0x22AD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AD14u;
label_22ad14:
    // 0x22ad14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_22ad18:
    if (ctx->pc == 0x22AD18u) {
        ctx->pc = 0x22AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD14u;
        // 0x22ad18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD1Cu;
        goto label_22ad1c;
    }
    ctx->pc = 0x22AD14u;
    {
        const bool branch_taken_0x22ad14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD14u;
        // 0x22ad18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad14) {
            ctx->pc = 0x22AD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ad00;
        }
    }
    ctx->pc = 0x22AD1Cu;
label_22ad1c:
    // 0x22ad1c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22ad1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22ad20:
    // 0x22ad20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ad24:
    // 0x22ad24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22ad24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22ad28:
    // 0x22ad28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ad28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ad2c:
    // 0x22ad2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22ad2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ad30:
    // 0x22ad30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ad30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22ad34:
    // 0x22ad34: 0x3e00008  jr          $ra
label_22ad38:
    if (ctx->pc == 0x22AD38u) {
        ctx->pc = 0x22AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD34u;
        // 0x22ad38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD3Cu;
        goto label_22ad3c;
    }
    ctx->pc = 0x22AD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD34u;
        // 0x22ad38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AD3Cu;
label_22ad3c:
    // 0x22ad3c: 0x0  nop
    ctx->pc = 0x22ad3cu;
    // NOP
    ctx->pc = 0x22ad40u;
}
