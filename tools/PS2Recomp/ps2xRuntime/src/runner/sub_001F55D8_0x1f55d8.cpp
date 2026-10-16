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

// Function: sub_001F55D8
// Address: 0x1f55d8 - 0x1f5688
void sub_001F55D8_0x1f55d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F55D8_0x1f55d8");
#endif

    switch (ctx->pc) {
        case 0x1f5618u: goto label_1f5618;
        case 0x1f563cu: goto label_1f563c;
        case 0x1f565cu: goto label_1f565c;
        default: break;
    }

    ctx->pc = 0x1f55d8u;

    // 0x1f55d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f55d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f55dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f55e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f55e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f55e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f55e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f55e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f55e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f55ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f55f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f55f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f55f4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1f55f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1f55f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f55f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f55fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f55fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5600: 0x8c45eafc  lw          $a1, -0x1504($v0)
    ctx->pc = 0x1f5600u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33EAFCu));
    // 0x1f5604: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f5604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f560c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f560cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5610: 0xc0c48d9  jal         func_312364
    ctx->pc = 0x1F5610u;
    SET_GPR_U32(ctx, 31, 0x1F5618u);
    ctx->pc = 0x1F5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5610u;
    // 0x1f5614: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x1F5610u, 0x1F5618u)) {
        return;
    }
    ctx->pc = 0x1F5618u;
label_1f5618:
    // 0x1f5618: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F5618u;
    {
        const bool branch_taken_0x1f5618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5618u;
        // 0x1f561c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5618) {
            ctx->pc = 0x1F5660u;
            goto label_1f5660;
        }
    }
    ctx->pc = 0x1F5620u;
    // 0x1f5620: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1f5620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f5624: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f5624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5628: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5628u;
    {
        const bool branch_taken_0x1f5628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5628u;
        // 0x1f562c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5628) {
            ctx->pc = 0x1F5660u;
            goto label_1f5660;
        }
    }
    ctx->pc = 0x1F5630u;
    // 0x1f5630: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1f5630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f5634: 0xc074ce0  jal         func_1D3380
    ctx->pc = 0x1F5634u;
    SET_GPR_U32(ctx, 31, 0x1F563Cu);
    ctx->pc = 0x1F5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5634u;
    // 0x1f5638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3380u, 0x1F5634u, 0x1F563Cu)) {
        return;
    }
    ctx->pc = 0x1F563Cu;
label_1f563c:
    // 0x1f563c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f5640: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5640u;
    {
        const bool branch_taken_0x1f5640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5640u;
        // 0x1f5644: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5640) {
            ctx->pc = 0x1F5660u;
            goto label_1f5660;
        }
    }
    ctx->pc = 0x1F5648u;
    // 0x1f5648: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x1f5648u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1f564c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5650: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f5650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5654: 0xc07d1b6  jal         func_1F46D8
    ctx->pc = 0x1F5654u;
    SET_GPR_U32(ctx, 31, 0x1F565Cu);
    ctx->pc = 0x1F5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5654u;
    // 0x1f5658: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F46D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F46D8u, 0x1F5654u, 0x1F565Cu)) {
        return;
    }
    ctx->pc = 0x1F565Cu;
label_1f565c:
    // 0x1f565c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1f565cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5660:
    // 0x1f5660: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f5660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5664: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f5664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5668: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f5668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f566c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f566cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5674: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5674u;
        // 0x1f5678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F567Cu;
    // 0x1f567c: 0x0  nop
    ctx->pc = 0x1f567cu;
    // NOP
    // 0x1f5680: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f5684: 0x0  nop
    ctx->pc = 0x1f5684u;
    // NOP
    ctx->pc = 0x1f5688u;
}
