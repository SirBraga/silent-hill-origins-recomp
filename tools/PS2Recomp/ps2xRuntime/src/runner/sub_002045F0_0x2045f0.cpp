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

// Function: sub_002045F0
// Address: 0x2045f0 - 0x2046b0
void sub_002045F0_0x2045f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002045F0_0x2045f0");
#endif

    switch (ctx->pc) {
        case 0x204648u: goto label_204648;
        case 0x204688u: goto label_204688;
        default: break;
    }

    ctx->pc = 0x2045f0u;

    // 0x2045f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2045f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2045f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2045f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2045f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2045f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2045fc: 0x14a20028  bne         $a1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2045FCu;
    {
        const bool branch_taken_0x2045fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x204600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045FCu;
        // 0x204600: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045fc) {
            ctx->pc = 0x2046A0u;
            goto label_2046a0;
        }
    }
    ctx->pc = 0x204604u;
    // 0x204604: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x204604u;
    {
        const bool branch_taken_0x204604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204604u;
        // 0x204608: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204604) {
            ctx->pc = 0x20462Cu;
            goto label_20462c;
        }
    }
    ctx->pc = 0x20460Cu;
    // 0x20460c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x20460cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x204610: 0x24442cf8  addiu       $a0, $v0, 0x2CF8
    ctx->pc = 0x204610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11512));
    // 0x204614: 0x24636a30  addiu       $v1, $v1, 0x6A30
    ctx->pc = 0x204614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27184));
    // 0x204618: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x204618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x20461c: 0xac402cf8  sw          $zero, 0x2CF8($v0)
    ctx->pc = 0x20461cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11512), GPR_U32(ctx, 0));
    // 0x204620: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x204620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x204624: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x204624u;
    {
        const bool branch_taken_0x204624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204624u;
        // 0x204628: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204624) {
            ctx->pc = 0x2046A0u;
            goto label_2046a0;
        }
    }
    ctx->pc = 0x20462Cu;
label_20462c:
    // 0x20462c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x20462cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x204630: 0x24502cf8  addiu       $s0, $v0, 0x2CF8
    ctx->pc = 0x204630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11512));
    // 0x204634: 0x24636a30  addiu       $v1, $v1, 0x6A30
    ctx->pc = 0x204634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27184));
    // 0x204638: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x204638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20463c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20463Cu;
    {
        const bool branch_taken_0x20463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20463Cu;
        // 0x204640: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20463c) {
            ctx->pc = 0x2046A0u;
            goto label_2046a0;
        }
    }
    ctx->pc = 0x204644u;
    // 0x204644: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x204644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_204648:
    // 0x204648: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x204648u;
    {
        const bool branch_taken_0x204648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x204648) {
            ctx->pc = 0x20464Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204648u;
            // 0x20464c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204698u;
            goto label_204698;
        }
    }
    ctx->pc = 0x204650u;
    // 0x204650: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x204650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204654: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204654u;
    {
        const bool branch_taken_0x204654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204654u;
        // 0x204658: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204654) {
            ctx->pc = 0x204664u;
            goto label_204664;
        }
    }
    ctx->pc = 0x20465Cu;
    // 0x20465c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20465Cu;
    {
        const bool branch_taken_0x20465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20465Cu;
        // 0x204660: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20465c) {
            ctx->pc = 0x204668u;
            goto label_204668;
        }
    }
    ctx->pc = 0x204664u;
label_204664:
    // 0x204664: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x204664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_204668:
    // 0x204668: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x204668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20466c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20466Cu;
    {
        const bool branch_taken_0x20466c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20466c) {
            ctx->pc = 0x20467Cu;
            goto label_20467c;
        }
    }
    ctx->pc = 0x204674u;
    // 0x204674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204674u;
    {
        const bool branch_taken_0x204674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204674u;
        // 0x204678: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204674) {
            ctx->pc = 0x204680u;
            goto label_204680;
        }
    }
    ctx->pc = 0x20467Cu;
label_20467c:
    // 0x20467c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x20467cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_204680:
    // 0x204680: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204680u;
    SET_GPR_U32(ctx, 31, 0x204688u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204680u, 0x204688u)) {
        return;
    }
    ctx->pc = 0x204688u;
label_204688:
    // 0x204688: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20468c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204690: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x204690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x204694: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x204694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_204698:
    // 0x204698: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204698u;
    {
        const bool branch_taken_0x204698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204698) {
            ctx->pc = 0x20469Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204698u;
            // 0x20469c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204648;
        }
    }
    ctx->pc = 0x2046A0u;
label_2046a0:
    // 0x2046a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2046a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2046a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2046a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2046a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2046A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046A8u;
        // 0x2046ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2046A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2046B0u;
}
