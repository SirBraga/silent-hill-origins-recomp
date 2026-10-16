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

// Function: sub_001AF310
// Address: 0x1af310 - 0x1af388
void sub_001AF310_0x1af310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF310_0x1af310");
#endif

    switch (ctx->pc) {
        case 0x1af310u: goto label_1af310;
        case 0x1af314u: goto label_1af314;
        case 0x1af318u: goto label_1af318;
        case 0x1af31cu: goto label_1af31c;
        case 0x1af320u: goto label_1af320;
        case 0x1af324u: goto label_1af324;
        case 0x1af328u: goto label_1af328;
        case 0x1af32cu: goto label_1af32c;
        case 0x1af330u: goto label_1af330;
        case 0x1af334u: goto label_1af334;
        case 0x1af338u: goto label_1af338;
        case 0x1af33cu: goto label_1af33c;
        case 0x1af340u: goto label_1af340;
        case 0x1af344u: goto label_1af344;
        case 0x1af348u: goto label_1af348;
        case 0x1af34cu: goto label_1af34c;
        case 0x1af350u: goto label_1af350;
        case 0x1af354u: goto label_1af354;
        case 0x1af358u: goto label_1af358;
        case 0x1af35cu: goto label_1af35c;
        case 0x1af360u: goto label_1af360;
        case 0x1af364u: goto label_1af364;
        case 0x1af368u: goto label_1af368;
        case 0x1af36cu: goto label_1af36c;
        case 0x1af370u: goto label_1af370;
        case 0x1af374u: goto label_1af374;
        case 0x1af378u: goto label_1af378;
        case 0x1af37cu: goto label_1af37c;
        case 0x1af380u: goto label_1af380;
        case 0x1af384u: goto label_1af384;
        default: break;
    }

    ctx->pc = 0x1af310u;

label_1af310:
    // 0x1af310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af314:
    // 0x1af314: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1af318:
    // 0x1af318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af31c:
    // 0x1af31c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af320:
    // 0x1af320: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x1af320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1af324:
    // 0x1af324: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1af328:
    if (ctx->pc == 0x1AF328u) {
        ctx->pc = 0x1AF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF324u;
        // 0x1af328: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF32Cu;
        goto label_1af32c;
    }
    ctx->pc = 0x1AF324u;
    {
        const bool branch_taken_0x1af324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF324u;
        // 0x1af328: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af324) {
            ctx->pc = 0x1AF378u;
            goto label_1af378;
        }
    }
    ctx->pc = 0x1AF32Cu;
label_1af32c:
    // 0x1af32c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1af32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1af330:
    // 0x1af330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af334:
    // 0x1af334: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1af334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1af338:
    // 0x1af338: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1af338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1af33c:
    // 0x1af33c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1af33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1af340:
    // 0x1af340: 0x60f809  jalr        $v1
label_1af344:
    if (ctx->pc == 0x1AF344u) {
        ctx->pc = 0x1AF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF340u;
        // 0x1af344: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF348u;
        goto label_1af348;
    }
    ctx->pc = 0x1AF340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF348u);
        ctx->pc = 0x1AF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF340u;
        // 0x1af344: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF340u, 0x1AF348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF348u;
label_1af348:
    // 0x1af348: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1af348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1af34c:
    // 0x1af34c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1af350:
    if (ctx->pc == 0x1AF350u) {
        ctx->pc = 0x1AF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF34Cu;
        // 0x1af350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF354u;
        goto label_1af354;
    }
    ctx->pc = 0x1AF34Cu;
    {
        const bool branch_taken_0x1af34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF34Cu;
        // 0x1af350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af34c) {
            ctx->pc = 0x1AF368u;
            goto label_1af368;
        }
    }
    ctx->pc = 0x1AF354u;
label_1af354:
    // 0x1af354: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1af354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1af358:
    // 0x1af358: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1af358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1af35c:
    // 0x1af35c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1af35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1af360:
    // 0x1af360: 0x60f809  jalr        $v1
label_1af364:
    if (ctx->pc == 0x1AF364u) {
        ctx->pc = 0x1AF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF360u;
        // 0x1af364: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF368u;
        goto label_1af368;
    }
    ctx->pc = 0x1AF360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF368u);
        ctx->pc = 0x1AF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF360u;
        // 0x1af364: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF360u, 0x1AF368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF368u;
label_1af368:
    // 0x1af368: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1af368u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1af36c:
    // 0x1af36c: 0x5620fff0  bnel        $s1, $zero, . + 4 + (-0x10 << 2)
label_1af370:
    if (ctx->pc == 0x1AF370u) {
        ctx->pc = 0x1AF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF36Cu;
        // 0x1af370: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF374u;
        goto label_1af374;
    }
    ctx->pc = 0x1AF36Cu;
    {
        const bool branch_taken_0x1af36c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af36c) {
            ctx->pc = 0x1AF370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF36Cu;
            // 0x1af370: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af330;
        }
    }
    ctx->pc = 0x1AF374u;
label_1af374:
    // 0x1af374: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af378:
    // 0x1af378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af37c:
    // 0x1af37c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af380:
    // 0x1af380: 0x3e00008  jr          $ra
label_1af384:
    if (ctx->pc == 0x1AF384u) {
        ctx->pc = 0x1AF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF380u;
        // 0x1af384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF388u;
        goto label_fallthrough_0x1af380;
    }
    ctx->pc = 0x1AF380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF380u;
        // 0x1af384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af380:
    ctx->pc = 0x1AF388u;
}
