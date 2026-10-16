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

// Function: sub_002ABB88
// Address: 0x2abb88 - 0x2abc18
void sub_002ABB88_0x2abb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABB88_0x2abb88");
#endif

    switch (ctx->pc) {
        case 0x2abb88u: goto label_2abb88;
        case 0x2abb8cu: goto label_2abb8c;
        case 0x2abb90u: goto label_2abb90;
        case 0x2abb94u: goto label_2abb94;
        case 0x2abb98u: goto label_2abb98;
        case 0x2abb9cu: goto label_2abb9c;
        case 0x2abba0u: goto label_2abba0;
        case 0x2abba4u: goto label_2abba4;
        case 0x2abba8u: goto label_2abba8;
        case 0x2abbacu: goto label_2abbac;
        case 0x2abbb0u: goto label_2abbb0;
        case 0x2abbb4u: goto label_2abbb4;
        case 0x2abbb8u: goto label_2abbb8;
        case 0x2abbbcu: goto label_2abbbc;
        case 0x2abbc0u: goto label_2abbc0;
        case 0x2abbc4u: goto label_2abbc4;
        case 0x2abbc8u: goto label_2abbc8;
        case 0x2abbccu: goto label_2abbcc;
        case 0x2abbd0u: goto label_2abbd0;
        case 0x2abbd4u: goto label_2abbd4;
        case 0x2abbd8u: goto label_2abbd8;
        case 0x2abbdcu: goto label_2abbdc;
        case 0x2abbe0u: goto label_2abbe0;
        case 0x2abbe4u: goto label_2abbe4;
        case 0x2abbe8u: goto label_2abbe8;
        case 0x2abbecu: goto label_2abbec;
        case 0x2abbf0u: goto label_2abbf0;
        case 0x2abbf4u: goto label_2abbf4;
        case 0x2abbf8u: goto label_2abbf8;
        case 0x2abbfcu: goto label_2abbfc;
        case 0x2abc00u: goto label_2abc00;
        case 0x2abc04u: goto label_2abc04;
        case 0x2abc08u: goto label_2abc08;
        case 0x2abc0cu: goto label_2abc0c;
        case 0x2abc10u: goto label_2abc10;
        case 0x2abc14u: goto label_2abc14;
        default: break;
    }

    ctx->pc = 0x2abb88u;

label_2abb88:
    // 0x2abb88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2abb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2abb8c:
    // 0x2abb8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2abb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2abb90:
    // 0x2abb90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2abb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2abb94:
    // 0x2abb94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2abb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2abb98:
    // 0x2abb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2abb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2abb9c:
    // 0x2abb9c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2abb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2abba0:
    // 0x2abba0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2abba4:
    if (ctx->pc == 0x2ABBA4u) {
        ctx->pc = 0x2ABBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBA0u;
        // 0x2abba4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBA8u;
        goto label_2abba8;
    }
    ctx->pc = 0x2ABBA0u;
    {
        const bool branch_taken_0x2abba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abba0) {
            ctx->pc = 0x2ABBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABBA0u;
            // 0x2abba4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABBD0u;
            goto label_2abbd0;
        }
    }
    ctx->pc = 0x2ABBA8u;
label_2abba8:
    // 0x2abba8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2abba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2abbac:
    // 0x2abbac: 0x0  nop
    ctx->pc = 0x2abbacu;
    // NOP
label_2abbb0:
    // 0x2abbb0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2abbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2abbb4:
    // 0x2abbb4: 0x0  nop
    ctx->pc = 0x2abbb4u;
    // NOP
label_2abbb8:
    // 0x2abbb8: 0x0  nop
    ctx->pc = 0x2abbb8u;
    // NOP
label_2abbbc:
    // 0x2abbbc: 0x0  nop
    ctx->pc = 0x2abbbcu;
    // NOP
label_2abbc0:
    // 0x2abbc0: 0x0  nop
    ctx->pc = 0x2abbc0u;
    // NOP
label_2abbc4:
    // 0x2abbc4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_2abbc8:
    if (ctx->pc == 0x2ABBC8u) {
        ctx->pc = 0x2ABBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBC4u;
        // 0x2abbc8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBCCu;
        goto label_2abbcc;
    }
    ctx->pc = 0x2ABBC4u;
    {
        const bool branch_taken_0x2abbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abbc4) {
            ctx->pc = 0x2ABBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABBC4u;
            // 0x2abbc8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abbb0;
        }
    }
    ctx->pc = 0x2ABBCCu;
label_2abbcc:
    // 0x2abbcc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2abbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2abbd0:
    // 0x2abbd0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2abbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2abbd4:
    // 0x2abbd4: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x2abbd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2abbd8:
    // 0x2abbd8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2abbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2abbdc:
    // 0x2abbdc: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2abbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2abbe0:
    // 0x2abbe0: 0x40f809  jalr        $v0
label_2abbe4:
    if (ctx->pc == 0x2ABBE4u) {
        ctx->pc = 0x2ABBE8u;
        goto label_2abbe8;
    }
    ctx->pc = 0x2ABBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABBE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABBE0u, 0x2ABBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABBE8u;
label_2abbe8:
    // 0x2abbe8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2abbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2abbec:
    // 0x2abbec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2abbf0:
    if (ctx->pc == 0x2ABBF0u) {
        ctx->pc = 0x2ABBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBECu;
        // 0x2abbf0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBF4u;
        goto label_2abbf4;
    }
    ctx->pc = 0x2ABBECu;
    {
        const bool branch_taken_0x2abbec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBECu;
        // 0x2abbf0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbec) {
            ctx->pc = 0x2ABC04u;
            goto label_2abc04;
        }
    }
    ctx->pc = 0x2ABBF4u;
label_2abbf4:
    // 0x2abbf4: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2abbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2abbf8:
    // 0x2abbf8: 0x40f809  jalr        $v0
label_2abbfc:
    if (ctx->pc == 0x2ABBFCu) {
        ctx->pc = 0x2ABC00u;
        goto label_2abc00;
    }
    ctx->pc = 0x2ABBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABC00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABBF8u, 0x2ABC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABC00u;
label_2abc00:
    // 0x2abc00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2abc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2abc04:
    // 0x2abc04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abc08:
    // 0x2abc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2abc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2abc0c:
    // 0x2abc0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2abc10:
    // 0x2abc10: 0x3e00008  jr          $ra
label_2abc14:
    if (ctx->pc == 0x2ABC14u) {
        ctx->pc = 0x2ABC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC10u;
        // 0x2abc14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC18u;
        goto label_fallthrough_0x2abc10;
    }
    ctx->pc = 0x2ABC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC10u;
        // 0x2abc14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2abc10:
    ctx->pc = 0x2ABC18u;
}
