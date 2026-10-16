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

// Function: sub_0027E2E8
// Address: 0x27e2e8 - 0x27e380
void sub_0027E2E8_0x27e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E2E8_0x27e2e8");
#endif

    switch (ctx->pc) {
        case 0x27e2e8u: goto label_27e2e8;
        case 0x27e2ecu: goto label_27e2ec;
        case 0x27e2f0u: goto label_27e2f0;
        case 0x27e2f4u: goto label_27e2f4;
        case 0x27e2f8u: goto label_27e2f8;
        case 0x27e2fcu: goto label_27e2fc;
        case 0x27e300u: goto label_27e300;
        case 0x27e304u: goto label_27e304;
        case 0x27e308u: goto label_27e308;
        case 0x27e30cu: goto label_27e30c;
        case 0x27e310u: goto label_27e310;
        case 0x27e314u: goto label_27e314;
        case 0x27e318u: goto label_27e318;
        case 0x27e31cu: goto label_27e31c;
        case 0x27e320u: goto label_27e320;
        case 0x27e324u: goto label_27e324;
        case 0x27e328u: goto label_27e328;
        case 0x27e32cu: goto label_27e32c;
        case 0x27e330u: goto label_27e330;
        case 0x27e334u: goto label_27e334;
        case 0x27e338u: goto label_27e338;
        case 0x27e33cu: goto label_27e33c;
        case 0x27e340u: goto label_27e340;
        case 0x27e344u: goto label_27e344;
        case 0x27e348u: goto label_27e348;
        case 0x27e34cu: goto label_27e34c;
        case 0x27e350u: goto label_27e350;
        case 0x27e354u: goto label_27e354;
        case 0x27e358u: goto label_27e358;
        case 0x27e35cu: goto label_27e35c;
        case 0x27e360u: goto label_27e360;
        case 0x27e364u: goto label_27e364;
        case 0x27e368u: goto label_27e368;
        case 0x27e36cu: goto label_27e36c;
        case 0x27e370u: goto label_27e370;
        case 0x27e374u: goto label_27e374;
        case 0x27e378u: goto label_27e378;
        case 0x27e37cu: goto label_27e37c;
        default: break;
    }

    ctx->pc = 0x27e2e8u;

label_27e2e8:
    // 0x27e2e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27e2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27e2ec:
    // 0x27e2ec: 0x8f8287f0  lw          $v0, -0x7810($gp)
    ctx->pc = 0x27e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_27e2f0:
    // 0x27e2f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27e2f4:
    // 0x27e2f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x27e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_27e2f8:
    // 0x27e2f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27e2f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e2fc:
    // 0x27e2fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x27e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_27e300:
    // 0x27e300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27e304:
    // 0x27e304: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x27e304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_27e308:
    // 0x27e308: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x27e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_27e30c:
    // 0x27e30c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x27e30cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27e310:
    // 0x27e310: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27e314:
    // 0x27e314: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27e318:
    if (ctx->pc == 0x27E318u) {
        ctx->pc = 0x27E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E314u;
        // 0x27e318: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E31Cu;
        goto label_27e31c;
    }
    ctx->pc = 0x27E314u;
    {
        const bool branch_taken_0x27e314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E314u;
        // 0x27e318: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e314) {
            ctx->pc = 0x27E33Cu;
            goto label_27e33c;
        }
    }
    ctx->pc = 0x27E31Cu;
label_27e31c:
    // 0x27e31c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e320:
    // 0x27e320: 0xc09f8e0  jal         func_27E380
label_27e324:
    if (ctx->pc == 0x27E324u) {
        ctx->pc = 0x27E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E320u;
        // 0x27e324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E328u;
        goto label_27e328;
    }
    ctx->pc = 0x27E320u;
    SET_GPR_U32(ctx, 31, 0x27E328u);
    ctx->pc = 0x27E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E320u;
    // 0x27e324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E380u, 0x27E320u, 0x27E328u)) {
        return;
    }
    ctx->pc = 0x27E328u;
label_27e328:
    // 0x27e328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27e32c:
    // 0x27e32c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27e330:
    // 0x27e330: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x27e330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27e334:
    // 0x27e334: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_27e338:
    if (ctx->pc == 0x27E338u) {
        ctx->pc = 0x27E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E334u;
        // 0x27e338: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E33Cu;
        goto label_27e33c;
    }
    ctx->pc = 0x27E334u;
    {
        const bool branch_taken_0x27e334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E334u;
        // 0x27e338: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e334) {
            ctx->pc = 0x27E320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e320;
        }
    }
    ctx->pc = 0x27E33Cu;
label_27e33c:
    // 0x27e33c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x27e33cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_27e340:
    // 0x27e340: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x27e340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_27e344:
    // 0x27e344: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x27e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_27e348:
    // 0x27e348: 0x40f809  jalr        $v0
label_27e34c:
    if (ctx->pc == 0x27E34Cu) {
        ctx->pc = 0x27E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E348u;
        // 0x27e34c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E350u;
        goto label_27e350;
    }
    ctx->pc = 0x27E348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27E350u);
        ctx->pc = 0x27E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E348u;
        // 0x27e34c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E348u, 0x27E350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E350u;
label_27e350:
    // 0x27e350: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x27e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_27e354:
    // 0x27e354: 0x60f809  jalr        $v1
label_27e358:
    if (ctx->pc == 0x27E358u) {
        ctx->pc = 0x27E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E354u;
        // 0x27e358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E35Cu;
        goto label_27e35c;
    }
    ctx->pc = 0x27E354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27E35Cu);
        ctx->pc = 0x27E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E354u;
        // 0x27e358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E354u, 0x27E35Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E35Cu;
label_27e35c:
    // 0x27e35c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x27e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_27e360:
    // 0x27e360: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27e360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27e364:
    // 0x27e364: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x27e364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27e368:
    // 0x27e368: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x27e368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27e36c:
    // 0x27e36c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e36cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27e370:
    // 0x27e370: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x27e370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27e374:
    // 0x27e374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e378:
    // 0x27e378: 0x3e00008  jr          $ra
label_27e37c:
    if (ctx->pc == 0x27E37Cu) {
        ctx->pc = 0x27E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E378u;
        // 0x27e37c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E380u;
        goto label_fallthrough_0x27e378;
    }
    ctx->pc = 0x27E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E378u;
        // 0x27e37c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27e378:
    ctx->pc = 0x27E380u;
}
