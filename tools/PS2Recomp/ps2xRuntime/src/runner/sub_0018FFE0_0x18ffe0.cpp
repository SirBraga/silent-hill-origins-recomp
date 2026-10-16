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

// Function: sub_0018FFE0
// Address: 0x18ffe0 - 0x190090
void sub_0018FFE0_0x18ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FFE0_0x18ffe0");
#endif

    switch (ctx->pc) {
        case 0x190010u: goto label_190010;
        case 0x190050u: goto label_190050;
        case 0x19007cu: goto label_19007c;
        default: break;
    }

    ctx->pc = 0x18ffe0u;

    // 0x18ffe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18ffe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18ffe8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18ffec: 0x24429500  addiu       $v0, $v0, -0x6B00
    ctx->pc = 0x18ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x18fff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18fff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18fff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fffc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x190000: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x190000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x190004: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x190004u;
    {
        const bool branch_taken_0x190004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190004u;
        // 0x190008: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190004) {
            ctx->pc = 0x190068u;
            goto label_190068;
        }
    }
    ctx->pc = 0x19000Cu;
    // 0x19000c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19000cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_190010:
    // 0x190010: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190010u;
    {
        const bool branch_taken_0x190010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190010) {
            ctx->pc = 0x190014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190010u;
            // 0x190014: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190060u;
            goto label_190060;
        }
    }
    ctx->pc = 0x190018u;
    // 0x190018: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x190018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19001c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19001Cu;
    {
        const bool branch_taken_0x19001c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19001Cu;
        // 0x190020: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19001c) {
            ctx->pc = 0x19002Cu;
            goto label_19002c;
        }
    }
    ctx->pc = 0x190024u;
    // 0x190024: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190024u;
    {
        const bool branch_taken_0x190024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190024u;
        // 0x190028: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190024) {
            ctx->pc = 0x190030u;
            goto label_190030;
        }
    }
    ctx->pc = 0x19002Cu;
label_19002c:
    // 0x19002c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x19002cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_190030:
    // 0x190030: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190034: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190034u;
    {
        const bool branch_taken_0x190034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190034u;
        // 0x190038: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190034) {
            ctx->pc = 0x190044u;
            goto label_190044;
        }
    }
    ctx->pc = 0x19003Cu;
    // 0x19003c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19003Cu;
    {
        const bool branch_taken_0x19003c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19003Cu;
        // 0x190040: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19003c) {
            ctx->pc = 0x190048u;
            goto label_190048;
        }
    }
    ctx->pc = 0x190044u;
label_190044:
    // 0x190044: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x190044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_190048:
    // 0x190048: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190048u;
    SET_GPR_U32(ctx, 31, 0x190050u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190048u, 0x190050u)) {
        return;
    }
    ctx->pc = 0x190050u;
label_190050:
    // 0x190050: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190058: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x190058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19005c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_190060:
    // 0x190060: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x190060u;
    {
        const bool branch_taken_0x190060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190060) {
            ctx->pc = 0x190064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190060u;
            // 0x190064: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190010;
        }
    }
    ctx->pc = 0x190068u;
label_190068:
    // 0x190068: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x190068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x19006c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19006Cu;
    {
        const bool branch_taken_0x19006c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19006c) {
            ctx->pc = 0x190070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19006Cu;
            // 0x190070: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190080u;
            goto label_190080;
        }
    }
    ctx->pc = 0x190074u;
    // 0x190074: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190074u;
    SET_GPR_U32(ctx, 31, 0x19007Cu);
    ctx->pc = 0x190078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190074u;
    // 0x190078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190074u, 0x19007Cu)) {
        return;
    }
    ctx->pc = 0x19007Cu;
label_19007c:
    // 0x19007c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19007cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190080:
    // 0x190080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190088: 0x3e00008  jr          $ra
    ctx->pc = 0x190088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190088u;
        // 0x19008c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190090u;
}
