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

// Function: sub_0014B608
// Address: 0x14b608 - 0x14b6c0
void sub_0014B608_0x14b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B608_0x14b608");
#endif

    switch (ctx->pc) {
        case 0x14b624u: goto label_14b624;
        case 0x14b64cu: goto label_14b64c;
        case 0x14b674u: goto label_14b674;
        case 0x14b690u: goto label_14b690;
        default: break;
    }

    ctx->pc = 0x14b608u;

    // 0x14b608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b60c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14b60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14b610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b614: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14b614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b61c: 0xc0525e0  jal         func_149780
    ctx->pc = 0x14B61Cu;
    SET_GPR_U32(ctx, 31, 0x14B624u);
    ctx->pc = 0x14B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B61Cu;
    // 0x14b620: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149780u, 0x14B61Cu, 0x14B624u)) {
        return;
    }
    ctx->pc = 0x14B624u;
label_14b624:
    // 0x14b624: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14b624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14b628: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14b628u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b62c: 0x8c43f898  lw          $v1, -0x768($v0)
    ctx->pc = 0x14b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF898u));
    // 0x14b630: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B630u;
    {
        const bool branch_taken_0x14b630 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x14B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B630u;
        // 0x14b634: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b630) {
            ctx->pc = 0x14B654u;
            goto label_14b654;
        }
    }
    ctx->pc = 0x14B638u;
    // 0x14b638: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x14b638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x14b63c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14B63Cu;
    {
        const bool branch_taken_0x14b63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B63Cu;
        // 0x14b640: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b63c) {
            ctx->pc = 0x14B6ACu;
            goto label_14b6ac;
        }
    }
    ctx->pc = 0x14B644u;
    // 0x14b644: 0xc07f822  jal         func_1FE088
    ctx->pc = 0x14B644u;
    SET_GPR_U32(ctx, 31, 0x14B64Cu);
    ctx->pc = 0x14B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B644u;
    // 0x14b648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE088u, 0x14B644u, 0x14B64Cu)) {
        return;
    }
    ctx->pc = 0x14B64Cu;
label_14b64c:
    // 0x14b64c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14B64Cu;
    {
        const bool branch_taken_0x14b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B64Cu;
        // 0x14b650: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b64c) {
            ctx->pc = 0x14B6ACu;
            goto label_14b6ac;
        }
    }
    ctx->pc = 0x14B654u;
label_14b654:
    // 0x14b654: 0x8c43f8a0  lw          $v1, -0x760($v0)
    ctx->pc = 0x14b654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965408)));
    // 0x14b658: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B658u;
    {
        const bool branch_taken_0x14b658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x14B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B658u;
        // 0x14b65c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b658) {
            ctx->pc = 0x14B67Cu;
            goto label_14b67c;
        }
    }
    ctx->pc = 0x14B660u;
    // 0x14b660: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x14b664: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14B664u;
    {
        const bool branch_taken_0x14b664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B664u;
        // 0x14b668: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b664) {
            ctx->pc = 0x14B6ACu;
            goto label_14b6ac;
        }
    }
    ctx->pc = 0x14B66Cu;
    // 0x14b66c: 0xc07f846  jal         func_1FE118
    ctx->pc = 0x14B66Cu;
    SET_GPR_U32(ctx, 31, 0x14B674u);
    ctx->pc = 0x1FE118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE118u, 0x14B66Cu, 0x14B674u)) {
        return;
    }
    ctx->pc = 0x14B674u;
label_14b674:
    // 0x14b674: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14B674u;
    {
        const bool branch_taken_0x14b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B674u;
        // 0x14b678: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b674) {
            ctx->pc = 0x14B6ACu;
            goto label_14b6ac;
        }
    }
    ctx->pc = 0x14B67Cu;
label_14b67c:
    // 0x14b67c: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x14b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x14b680: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B680u;
    {
        const bool branch_taken_0x14b680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x14B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B680u;
        // 0x14b684: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b680) {
            ctx->pc = 0x14B698u;
            goto label_14b698;
        }
    }
    ctx->pc = 0x14B688u;
    // 0x14b688: 0xc052c7a  jal         func_14B1E8
    ctx->pc = 0x14B688u;
    SET_GPR_U32(ctx, 31, 0x14B690u);
    ctx->pc = 0x14B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B688u;
    // 0x14b68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B1E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14B1E8u, 0x14B688u, 0x14B690u)) {
        return;
    }
    ctx->pc = 0x14B690u;
label_14b690:
    // 0x14b690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14B690u;
    {
        const bool branch_taken_0x14b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B690u;
        // 0x14b694: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b690) {
            ctx->pc = 0x14B6ACu;
            goto label_14b6ac;
        }
    }
    ctx->pc = 0x14B698u;
label_14b698:
    // 0x14b698: 0x8c438888  lw          $v1, -0x7778($v0)
    ctx->pc = 0x14b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936712)));
    // 0x14b69c: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B69Cu;
    {
        const bool branch_taken_0x14b69c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x14B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B69Cu;
        // 0x14b6a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b69c) {
            ctx->pc = 0x14B6ACu;
            goto label_14b6ac;
        }
    }
    ctx->pc = 0x14B6A4u;
    // 0x14b6a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14b6a8: 0xac4084ec  sw          $zero, -0x7B14($v0)
    ctx->pc = 0x14b6a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3384ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3384ECu, _value); } while (0);
label_14b6ac:
    // 0x14b6ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6B4u;
        // 0x14b6b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B6BCu;
    // 0x14b6bc: 0x0  nop
    ctx->pc = 0x14b6bcu;
    // NOP
    ctx->pc = 0x14b6c0u;
}
