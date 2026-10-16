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

// Function: sub_001CA628
// Address: 0x1ca628 - 0x1ca6d0
void sub_001CA628_0x1ca628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA628_0x1ca628");
#endif

    switch (ctx->pc) {
        case 0x1ca658u: goto label_1ca658;
        case 0x1ca664u: goto label_1ca664;
        case 0x1ca678u: goto label_1ca678;
        case 0x1ca688u: goto label_1ca688;
        default: break;
    }

    ctx->pc = 0x1ca628u;

    // 0x1ca628: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ca628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ca62c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca630: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ca630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca634: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ca634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ca638: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ca638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ca63c: 0x265002c4  addiu       $s0, $s2, 0x2C4
    ctx->pc = 0x1ca63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 708));
    // 0x1ca640: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ca640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ca644: 0x265102e4  addiu       $s1, $s2, 0x2E4
    ctx->pc = 0x1ca644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 740));
    // 0x1ca648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca64c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ca64cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca650: 0xae450268  sw          $a1, 0x268($s2)
    ctx->pc = 0x1ca650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 5));
    // 0x1ca654: 0x0  nop
    ctx->pc = 0x1ca654u;
    // NOP
label_1ca658:
    // 0x1ca658: 0x8e440268  lw          $a0, 0x268($s2)
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x1ca65c: 0xc05d0d2  jal         func_174348
    ctx->pc = 0x1CA65Cu;
    SET_GPR_U32(ctx, 31, 0x1CA664u);
    ctx->pc = 0x1CA660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA65Cu;
    // 0x1ca660: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174348u, 0x1CA65Cu, 0x1CA664u)) {
        return;
    }
    ctx->pc = 0x1CA664u;
label_1ca664:
    // 0x1ca664: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ca664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ca668: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ca668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca66c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ca670: 0xc05d0e0  jal         func_174380
    ctx->pc = 0x1CA670u;
    SET_GPR_U32(ctx, 31, 0x1CA678u);
    ctx->pc = 0x1CA674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA670u;
    // 0x1ca674: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174380u, 0x1CA670u, 0x1CA678u)) {
        return;
    }
    ctx->pc = 0x1CA678u;
label_1ca678:
    // 0x1ca678: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ca678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ca67c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ca67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca680: 0xc09795e  jal         func_25E578
    ctx->pc = 0x1CA680u;
    SET_GPR_U32(ctx, 31, 0x1CA688u);
    ctx->pc = 0x1CA684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA680u;
    // 0x1ca684: 0x8e4402a0  lw          $a0, 0x2A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x1CA680u, 0x1CA688u)) {
        return;
    }
    ctx->pc = 0x1CA688u;
label_1ca688:
    // 0x1ca688: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ca688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ca68c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1ca68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ca690: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ca690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ca694: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ca694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ca698: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ca698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ca69c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ca69cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1ca6a0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ca6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ca6a4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ca6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ca6a8: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x1ca6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1ca6ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CA6ACu;
    {
        const bool branch_taken_0x1ca6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6ACu;
        // 0x1ca6b0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6ac) {
            ctx->pc = 0x1CA658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca658;
        }
    }
    ctx->pc = 0x1CA6B4u;
    // 0x1ca6b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ca6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca6b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ca6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca6bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca6bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca6c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ca6c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6C8u;
        // 0x1ca6cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA6D0u;
}
