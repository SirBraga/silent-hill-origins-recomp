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

// Function: sub_00227668
// Address: 0x227668 - 0x2276c0
void sub_00227668_0x227668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227668_0x227668");
#endif

    switch (ctx->pc) {
        case 0x227668u: goto label_227668;
        case 0x22766cu: goto label_22766c;
        case 0x227670u: goto label_227670;
        case 0x227674u: goto label_227674;
        case 0x227678u: goto label_227678;
        case 0x22767cu: goto label_22767c;
        case 0x227680u: goto label_227680;
        case 0x227684u: goto label_227684;
        case 0x227688u: goto label_227688;
        case 0x22768cu: goto label_22768c;
        case 0x227690u: goto label_227690;
        case 0x227694u: goto label_227694;
        case 0x227698u: goto label_227698;
        case 0x22769cu: goto label_22769c;
        case 0x2276a0u: goto label_2276a0;
        case 0x2276a4u: goto label_2276a4;
        case 0x2276a8u: goto label_2276a8;
        case 0x2276acu: goto label_2276ac;
        case 0x2276b0u: goto label_2276b0;
        case 0x2276b4u: goto label_2276b4;
        case 0x2276b8u: goto label_2276b8;
        case 0x2276bcu: goto label_2276bc;
        default: break;
    }

    ctx->pc = 0x227668u;

label_227668:
    // 0x227668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22766c:
    // 0x22766c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_227670:
    // 0x227670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_227674:
    // 0x227674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227678:
    // 0x227678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22767c:
    // 0x22767c: 0xc09cd22  jal         func_273488
label_227680:
    if (ctx->pc == 0x227680u) {
        ctx->pc = 0x227680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22767Cu;
        // 0x227680: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227684u;
        goto label_227684;
    }
    ctx->pc = 0x22767Cu;
    SET_GPR_U32(ctx, 31, 0x227684u);
    ctx->pc = 0x227680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22767Cu;
    // 0x227680: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273488u, 0x22767Cu, 0x227684u)) {
        return;
    }
    ctx->pc = 0x227684u;
label_227684:
    // 0x227684: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_227688:
    if (ctx->pc == 0x227688u) {
        ctx->pc = 0x227688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227684u;
        // 0x227688: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22768Cu;
        goto label_22768c;
    }
    ctx->pc = 0x227684u;
    {
        const bool branch_taken_0x227684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227684) {
            ctx->pc = 0x227688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227684u;
            // 0x227688: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2276ACu;
            goto label_2276ac;
        }
    }
    ctx->pc = 0x22768Cu;
label_22768c:
    // 0x22768c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_227690:
    // 0x227690: 0x40f809  jalr        $v0
label_227694:
    if (ctx->pc == 0x227694u) {
        ctx->pc = 0x227694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227690u;
        // 0x227694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227698u;
        goto label_227698;
    }
    ctx->pc = 0x227690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227698u);
        ctx->pc = 0x227694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227690u;
        // 0x227694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227690u, 0x227698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227698u;
label_227698:
    // 0x227698: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x227698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22769c:
    // 0x22769c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x22769cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_2276a0:
    // 0x2276a0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2276a4:
    if (ctx->pc == 0x2276A4u) {
        ctx->pc = 0x2276A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276A0u;
        // 0x2276a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276A8u;
        goto label_2276a8;
    }
    ctx->pc = 0x2276A0u;
    {
        const bool branch_taken_0x2276a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2276A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276A0u;
        // 0x2276a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276a0) {
            ctx->pc = 0x2276ACu;
            goto label_2276ac;
        }
    }
    ctx->pc = 0x2276A8u;
label_2276a8:
    // 0x2276a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2276a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2276ac:
    // 0x2276ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2276acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2276b0:
    // 0x2276b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2276b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2276b4:
    // 0x2276b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2276b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2276b8:
    // 0x2276b8: 0x3e00008  jr          $ra
label_2276bc:
    if (ctx->pc == 0x2276BCu) {
        ctx->pc = 0x2276BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276B8u;
        // 0x2276bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276C0u;
        goto label_fallthrough_0x2276b8;
    }
    ctx->pc = 0x2276B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2276BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276B8u;
        // 0x2276bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2276B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2276b8:
    ctx->pc = 0x2276C0u;
}
