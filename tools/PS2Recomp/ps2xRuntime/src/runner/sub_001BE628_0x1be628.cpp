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

// Function: sub_001BE628
// Address: 0x1be628 - 0x1be6c0
void sub_001BE628_0x1be628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE628_0x1be628");
#endif

    switch (ctx->pc) {
        case 0x1be654u: goto label_1be654;
        case 0x1be67cu: goto label_1be67c;
        default: break;
    }

    ctx->pc = 0x1be628u;

    // 0x1be628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be62c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1be62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1be630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be63c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1be63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1be640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE640u;
    {
        const bool branch_taken_0x1be640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE640u;
        // 0x1be644: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be640) {
            ctx->pc = 0x1BE658u;
            goto label_1be658;
        }
    }
    ctx->pc = 0x1BE648u;
    // 0x1be648: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1be648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1be64c: 0xc063d94  jal         func_18F650
    ctx->pc = 0x1BE64Cu;
    SET_GPR_U32(ctx, 31, 0x1BE654u);
    ctx->pc = 0x1BE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE64Cu;
    // 0x1be650: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F650u, 0x1BE64Cu, 0x1BE654u)) {
        return;
    }
    ctx->pc = 0x1BE654u;
label_1be654:
    // 0x1be654: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1be654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_1be658:
    // 0x1be658: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1be658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1be65c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BE65Cu;
    {
        const bool branch_taken_0x1be65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE65Cu;
        // 0x1be660: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be65c) {
            ctx->pc = 0x1BE698u;
            goto label_1be698;
        }
    }
    ctx->pc = 0x1BE664u;
    // 0x1be664: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1be664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1be668: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE668u;
    {
        const bool branch_taken_0x1be668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE668u;
        // 0x1be66c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be668) {
            ctx->pc = 0x1BE684u;
            goto label_1be684;
        }
    }
    ctx->pc = 0x1BE670u;
    // 0x1be670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be674: 0xc064452  jal         func_191148
    ctx->pc = 0x1BE674u;
    SET_GPR_U32(ctx, 31, 0x1BE67Cu);
    ctx->pc = 0x1BE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE674u;
    // 0x1be678: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BE674u, 0x1BE67Cu)) {
        return;
    }
    ctx->pc = 0x1BE67Cu;
label_1be67c:
    // 0x1be67c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE67Cu;
    {
        const bool branch_taken_0x1be67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE67Cu;
        // 0x1be680: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be67c) {
            ctx->pc = 0x1BE698u;
            goto label_1be698;
        }
    }
    ctx->pc = 0x1BE684u;
label_1be684:
    // 0x1be684: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x1be684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    // 0x1be688: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x1be688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1be68c: 0x711826  xor         $v1, $v1, $s1
    ctx->pc = 0x1be68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 17));
    // 0x1be690: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1be690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1be694: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1be694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_1be698:
    // 0x1be698: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1be698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1be69c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE69Cu;
    {
        const bool branch_taken_0x1be69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be69c) {
            ctx->pc = 0x1BE6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE69Cu;
            // 0x1be6a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE6B0u;
            goto label_1be6b0;
        }
    }
    ctx->pc = 0x1BE6A4u;
    // 0x1be6a4: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1be6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1be6a8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1be6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1be6ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1be6b0:
    // 0x1be6b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6B8u;
        // 0x1be6bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE6C0u;
}
