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

// Function: sub_0025C620
// Address: 0x25c620 - 0x25c6f0
void sub_0025C620_0x25c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C620_0x25c620");
#endif

    switch (ctx->pc) {
        case 0x25c660u: goto label_25c660;
        case 0x25c6b0u: goto label_25c6b0;
        default: break;
    }

    ctx->pc = 0x25c620u;

    // 0x25c620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25c624: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25c624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25c628: 0x8c633fe0  lw          $v1, 0x3FE0($v1)
    ctx->pc = 0x25c628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE0u));
    // 0x25c62c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25c630: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x25c634: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25c634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25c638: 0x24420fcc  addiu       $v0, $v0, 0xFCC
    ctx->pc = 0x25c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4044));
    // 0x25c63c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x25c640: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25c640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c648: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25c648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x25c64c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x25c64cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25c650: 0x1212001f  beq         $s0, $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x25C650u;
    {
        const bool branch_taken_0x25c650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x25C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C650u;
        // 0x25c654: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c650) {
            ctx->pc = 0x25C6D0u;
            goto label_25c6d0;
        }
    }
    ctx->pc = 0x25C658u;
    // 0x25c658: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x25c658u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x25c65c: 0x8e03fff8  lw          $v1, -0x8($s0)
    ctx->pc = 0x25c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
label_25c660:
    // 0x25c660: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x25c660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x25c664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25c664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25c668: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25C668u;
    {
        const bool branch_taken_0x25c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C668u;
        // 0x25c66c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c668) {
            ctx->pc = 0x25C698u;
            goto label_25c698;
        }
    }
    ctx->pc = 0x25C670u;
    // 0x25c670: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x25c670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25c674: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x25C674u;
    {
        const bool branch_taken_0x25c674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c674) {
            ctx->pc = 0x25C678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C674u;
            // 0x25c678: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C6C8u;
            goto label_25c6c8;
        }
    }
    ctx->pc = 0x25C67Cu;
    // 0x25c67c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25c680: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c684: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x25c684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25c688: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25C688u;
    {
        const bool branch_taken_0x25c688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C688u;
        // 0x25c68c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c688) {
            ctx->pc = 0x25C6C4u;
            goto label_25c6c4;
        }
    }
    ctx->pc = 0x25C690u;
    // 0x25c690: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25C690u;
    {
        const bool branch_taken_0x25c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C690u;
        // 0x25c694: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c690) {
            ctx->pc = 0x25C6D8u;
            goto label_25c6d8;
        }
    }
    ctx->pc = 0x25C698u;
label_25c698:
    // 0x25c698: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x25c698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x25c69c: 0x2665b880  addiu       $a1, $s3, -0x4780
    ctx->pc = 0x25c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948992));
    // 0x25c6a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x25c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x25c6a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25c6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6a8: 0xc0972f2  jal         func_25CBC8
    ctx->pc = 0x25C6A8u;
    SET_GPR_U32(ctx, 31, 0x25C6B0u);
    ctx->pc = 0x25C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C6A8u;
    // 0x25c6ac: 0x8e04fff8  lw          $a0, -0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CBC8u, 0x25C6A8u, 0x25C6B0u)) {
        return;
    }
    ctx->pc = 0x25C6B0u;
label_25c6b0:
    // 0x25c6b0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x25c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x25c6b4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C6B4u;
    {
        const bool branch_taken_0x25c6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6b4) {
            ctx->pc = 0x25C6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C6B4u;
            // 0x25c6b8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C6C8u;
            goto label_25c6c8;
        }
    }
    ctx->pc = 0x25C6BCu;
    // 0x25c6bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25C6BCu;
    {
        const bool branch_taken_0x25c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6BCu;
        // 0x25c6c0: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6bc) {
            ctx->pc = 0x25C6D4u;
            goto label_25c6d4;
        }
    }
    ctx->pc = 0x25C6C4u;
label_25c6c4:
    // 0x25c6c4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x25c6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25c6c8:
    // 0x25c6c8: 0x5612ffe5  bnel        $s0, $s2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x25C6C8u;
    {
        const bool branch_taken_0x25c6c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x25c6c8) {
            ctx->pc = 0x25C6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C6C8u;
            // 0x25c6cc: 0x8e03fff8  lw          $v1, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c660;
        }
    }
    ctx->pc = 0x25C6D0u;
label_25c6d0:
    // 0x25c6d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c6d4:
    // 0x25c6d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25c6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25c6d8:
    // 0x25c6d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25c6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c6dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25c6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c6e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25c6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c6e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25C6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6E8u;
        // 0x25c6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C6F0u;
}
