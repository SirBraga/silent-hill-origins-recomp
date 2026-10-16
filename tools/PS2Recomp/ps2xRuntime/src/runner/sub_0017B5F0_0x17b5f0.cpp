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

// Function: sub_0017B5F0
// Address: 0x17b5f0 - 0x17b6c0
void sub_0017B5F0_0x17b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B5F0_0x17b5f0");
#endif

    switch (ctx->pc) {
        case 0x17b608u: goto label_17b608;
        case 0x17b61cu: goto label_17b61c;
        case 0x17b624u: goto label_17b624;
        case 0x17b640u: goto label_17b640;
        case 0x17b680u: goto label_17b680;
        case 0x17b6a0u: goto label_17b6a0;
        case 0x17b6a8u: goto label_17b6a8;
        default: break;
    }

    ctx->pc = 0x17b5f0u;

    // 0x17b5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b5f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b5f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b5fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b600: 0xc08114c  jal         func_204530
    ctx->pc = 0x17B600u;
    SET_GPR_U32(ctx, 31, 0x17B608u);
    ctx->pc = 0x17B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B600u;
    // 0x17b604: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x17B600u, 0x17B608u)) {
        return;
    }
    ctx->pc = 0x17B608u;
label_17b608:
    // 0x17b608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b60c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17B60Cu;
    {
        const bool branch_taken_0x17b60c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B60Cu;
        // 0x17b610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b60c) {
            ctx->pc = 0x17B6A0u;
            goto label_17b6a0;
        }
    }
    ctx->pc = 0x17B614u;
    // 0x17b614: 0xc080dd6  jal         func_203758
    ctx->pc = 0x17B614u;
    SET_GPR_U32(ctx, 31, 0x17B61Cu);
    ctx->pc = 0x17B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B614u;
    // 0x17b618: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203758u, 0x17B614u, 0x17B61Cu)) {
        return;
    }
    ctx->pc = 0x17B61Cu;
label_17b61c:
    // 0x17b61c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17B61Cu;
    SET_GPR_U32(ctx, 31, 0x17B624u);
    ctx->pc = 0x17B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B61Cu;
    // 0x17b620: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17B61Cu, 0x17B624u)) {
        return;
    }
    ctx->pc = 0x17B624u;
label_17b624:
    // 0x17b624: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17b624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17b628: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b62c: 0x24426a48  addiu       $v0, $v0, 0x6A48
    ctx->pc = 0x17b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27208));
    // 0x17b630: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x17B630u;
    {
        const bool branch_taken_0x17b630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B630u;
        // 0x17b634: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b630) {
            ctx->pc = 0x17B698u;
            goto label_17b698;
        }
    }
    ctx->pc = 0x17B638u;
    // 0x17b638: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17b638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b63c: 0x0  nop
    ctx->pc = 0x17b63cu;
    // NOP
label_17b640:
    // 0x17b640: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17B640u;
    {
        const bool branch_taken_0x17b640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b640) {
            ctx->pc = 0x17B644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B640u;
            // 0x17b644: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B690u;
            goto label_17b690;
        }
    }
    ctx->pc = 0x17B648u;
    // 0x17b648: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17b64c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B64Cu;
    {
        const bool branch_taken_0x17b64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B64Cu;
        // 0x17b650: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b64c) {
            ctx->pc = 0x17B65Cu;
            goto label_17b65c;
        }
    }
    ctx->pc = 0x17B654u;
    // 0x17b654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B654u;
    {
        const bool branch_taken_0x17b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B654u;
        // 0x17b658: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b654) {
            ctx->pc = 0x17B660u;
            goto label_17b660;
        }
    }
    ctx->pc = 0x17B65Cu;
label_17b65c:
    // 0x17b65c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17b660:
    // 0x17b660: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17b664: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B664u;
    {
        const bool branch_taken_0x17b664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B664u;
        // 0x17b668: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b664) {
            ctx->pc = 0x17B674u;
            goto label_17b674;
        }
    }
    ctx->pc = 0x17B66Cu;
    // 0x17b66c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B66Cu;
    {
        const bool branch_taken_0x17b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B66Cu;
        // 0x17b670: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b66c) {
            ctx->pc = 0x17B678u;
            goto label_17b678;
        }
    }
    ctx->pc = 0x17B674u;
label_17b674:
    // 0x17b674: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17b674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_17b678:
    // 0x17b678: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17B678u;
    SET_GPR_U32(ctx, 31, 0x17B680u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17B678u, 0x17B680u)) {
        return;
    }
    ctx->pc = 0x17B680u;
label_17b680:
    // 0x17b680: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17b688: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17b688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17b68c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17b690:
    // 0x17b690: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x17B690u;
    {
        const bool branch_taken_0x17b690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b690) {
            ctx->pc = 0x17B694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B690u;
            // 0x17b694: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b640;
        }
    }
    ctx->pc = 0x17B698u;
label_17b698:
    // 0x17b698: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17B698u;
    SET_GPR_U32(ctx, 31, 0x17B6A0u);
    ctx->pc = 0x17B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B698u;
    // 0x17b69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17B698u, 0x17B6A0u)) {
        return;
    }
    ctx->pc = 0x17B6A0u;
label_17b6a0:
    // 0x17b6a0: 0xc0804a8  jal         func_2012A0
    ctx->pc = 0x17B6A0u;
    SET_GPR_U32(ctx, 31, 0x17B6A8u);
    ctx->pc = 0x2012A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2012A0u, 0x17B6A0u, 0x17B6A8u)) {
        return;
    }
    ctx->pc = 0x17B6A8u;
label_17b6a8:
    // 0x17b6a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b6b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6B8u;
        // 0x17b6bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B6C0u;
}
