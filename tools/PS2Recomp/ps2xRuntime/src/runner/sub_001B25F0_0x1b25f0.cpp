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

// Function: sub_001B25F0
// Address: 0x1b25f0 - 0x1b2650
void sub_001B25F0_0x1b25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B25F0_0x1b25f0");
#endif

    switch (ctx->pc) {
        case 0x1b25f0u: goto label_1b25f0;
        case 0x1b25f4u: goto label_1b25f4;
        case 0x1b25f8u: goto label_1b25f8;
        case 0x1b25fcu: goto label_1b25fc;
        case 0x1b2600u: goto label_1b2600;
        case 0x1b2604u: goto label_1b2604;
        case 0x1b2608u: goto label_1b2608;
        case 0x1b260cu: goto label_1b260c;
        case 0x1b2610u: goto label_1b2610;
        case 0x1b2614u: goto label_1b2614;
        case 0x1b2618u: goto label_1b2618;
        case 0x1b261cu: goto label_1b261c;
        case 0x1b2620u: goto label_1b2620;
        case 0x1b2624u: goto label_1b2624;
        case 0x1b2628u: goto label_1b2628;
        case 0x1b262cu: goto label_1b262c;
        case 0x1b2630u: goto label_1b2630;
        case 0x1b2634u: goto label_1b2634;
        case 0x1b2638u: goto label_1b2638;
        case 0x1b263cu: goto label_1b263c;
        case 0x1b2640u: goto label_1b2640;
        case 0x1b2644u: goto label_1b2644;
        case 0x1b2648u: goto label_1b2648;
        case 0x1b264cu: goto label_1b264c;
        default: break;
    }

    ctx->pc = 0x1b25f0u;

label_1b25f0:
    // 0x1b25f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b25f4:
    // 0x1b25f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b25f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b25f8:
    // 0x1b25f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b25fc:
    // 0x1b25fc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1b2600:
    if (ctx->pc == 0x1B2600u) {
        ctx->pc = 0x1B2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25FCu;
        // 0x1b2600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2604u;
        goto label_1b2604;
    }
    ctx->pc = 0x1B25FCu;
    {
        const bool branch_taken_0x1b25fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25FCu;
        // 0x1b2600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25fc) {
            ctx->pc = 0x1B2644u;
            goto label_1b2644;
        }
    }
    ctx->pc = 0x1B2604u;
label_1b2604:
    // 0x1b2604: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1b2604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b2608:
    // 0x1b2608: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
label_1b260c:
    if (ctx->pc == 0x1B260Cu) {
        ctx->pc = 0x1B260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2608u;
        // 0x1b260c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2610u;
        goto label_1b2610;
    }
    ctx->pc = 0x1B2608u;
    {
        const bool branch_taken_0x1b2608 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2608) {
            ctx->pc = 0x1B260Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2608u;
            // 0x1b260c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2638u;
            goto label_1b2638;
        }
    }
    ctx->pc = 0x1B2610u;
label_1b2610:
    // 0x1b2610: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x1b2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_1b2614:
    // 0x1b2614: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
label_1b2618:
    if (ctx->pc == 0x1B2618u) {
        ctx->pc = 0x1B2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2614u;
        // 0x1b2618: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B261Cu;
        goto label_1b261c;
    }
    ctx->pc = 0x1B2614u;
    {
        const bool branch_taken_0x1b2614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b2614) {
            ctx->pc = 0x1B2618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2614u;
            // 0x1b2618: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2638u;
            goto label_1b2638;
        }
    }
    ctx->pc = 0x1B261Cu;
label_1b261c:
    // 0x1b261c: 0x8cc30258  lw          $v1, 0x258($a2)
    ctx->pc = 0x1b261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b2620:
    // 0x1b2620: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1b2620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1b2624:
    // 0x1b2624: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1b2624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1b2628:
    // 0x1b2628: 0x40f809  jalr        $v0
label_1b262c:
    if (ctx->pc == 0x1B262Cu) {
        ctx->pc = 0x1B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2628u;
        // 0x1b262c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2630u;
        goto label_1b2630;
    }
    ctx->pc = 0x1B2628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2630u);
        ctx->pc = 0x1B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2628u;
        // 0x1b262c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2628u, 0x1B2630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2630u;
label_1b2630:
    // 0x1b2630: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b2634:
    if (ctx->pc == 0x1B2634u) {
        ctx->pc = 0x1B2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2630u;
        // 0x1b2634: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2638u;
        goto label_1b2638;
    }
    ctx->pc = 0x1B2630u;
    {
        const bool branch_taken_0x1b2630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2630u;
        // 0x1b2634: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2630) {
            ctx->pc = 0x1B2648u;
            goto label_1b2648;
        }
    }
    ctx->pc = 0x1B2638u;
label_1b2638:
    // 0x1b2638: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_1b263c:
    if (ctx->pc == 0x1B263Cu) {
        ctx->pc = 0x1B263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2638u;
        // 0x1b263c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2640u;
        goto label_1b2640;
    }
    ctx->pc = 0x1B2638u;
    {
        const bool branch_taken_0x1b2638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2638) {
            ctx->pc = 0x1B263Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2638u;
            // 0x1b263c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2608;
        }
    }
    ctx->pc = 0x1B2640u;
label_1b2640:
    // 0x1b2640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2644:
    // 0x1b2644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2648:
    // 0x1b2648: 0x3e00008  jr          $ra
label_1b264c:
    if (ctx->pc == 0x1B264Cu) {
        ctx->pc = 0x1B264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2648u;
        // 0x1b264c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2650u;
        goto label_fallthrough_0x1b2648;
    }
    ctx->pc = 0x1B2648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2648u;
        // 0x1b264c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b2648:
    ctx->pc = 0x1B2650u;
}
