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

// Function: sub_0015E600
// Address: 0x15e600 - 0x15e6b0
void sub_0015E600_0x15e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E600_0x15e600");
#endif

    switch (ctx->pc) {
        case 0x15e634u: goto label_15e634;
        case 0x15e674u: goto label_15e674;
        case 0x15e690u: goto label_15e690;
        default: break;
    }

    ctx->pc = 0x15e600u;

    // 0x15e600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15e604: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x15e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x15e608: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x15e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x15e60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e610: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x15e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x15e614: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15e614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e618: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15e618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e61c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e620: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15e624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e628: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e62c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15E62Cu;
    SET_GPR_U32(ctx, 31, 0x15E634u);
    ctx->pc = 0x15E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E62Cu;
    // 0x15e630: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15E62Cu, 0x15E634u)) {
        return;
    }
    ctx->pc = 0x15E634u;
label_15e634:
    // 0x15e634: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x15e638: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15e638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15e63c: 0x8c938668  lw          $s3, -0x7998($a0)
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x338668u));
    // 0x15e640: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x15e644: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e648: 0x2442e210  addiu       $v0, $v0, -0x1DF0
    ctx->pc = 0x15e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
    // 0x15e64c: 0x2463e180  addiu       $v1, $v1, -0x1E80
    ctx->pc = 0x15e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959488));
    // 0x15e650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e654: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15e654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15e658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e65c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x15e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x15e660: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15e660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e664: 0xafb2001c  sw          $s2, 0x1C($sp)
    ctx->pc = 0x15e664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
    // 0x15e668: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e66c: 0xc0596ae  jal         func_165AB8
    ctx->pc = 0x15E66Cu;
    SET_GPR_U32(ctx, 31, 0x15E674u);
    ctx->pc = 0x15E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E66Cu;
    // 0x15e670: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x15E66Cu, 0x15E674u)) {
        return;
    }
    ctx->pc = 0x15E674u;
label_15e674:
    // 0x15e674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e678: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15e67c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E67Cu;
    {
        const bool branch_taken_0x15e67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E67Cu;
        // 0x15e680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e67c) {
            ctx->pc = 0x15E690u;
            goto label_15e690;
        }
    }
    ctx->pc = 0x15E684u;
    // 0x15e684: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e688: 0xc0595c6  jal         func_165718
    ctx->pc = 0x15E688u;
    SET_GPR_U32(ctx, 31, 0x15E690u);
    ctx->pc = 0x15E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E688u;
    // 0x15e68c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165718u, 0x15E688u, 0x15E690u)) {
        return;
    }
    ctx->pc = 0x15E690u;
label_15e690:
    // 0x15e690: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e694: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x15e694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e698: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x15e698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e69c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x15e69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e6a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e6a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e6a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15E6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6A8u;
        // 0x15e6ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E6B0u;
}
