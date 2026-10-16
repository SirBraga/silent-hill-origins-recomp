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

// Function: sub_003283D8
// Address: 0x3283d8 - 0x328480
void sub_003283D8_0x3283d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003283D8_0x3283d8");
#endif

    switch (ctx->pc) {
        case 0x3283d8u: goto label_3283d8;
        case 0x3283dcu: goto label_3283dc;
        case 0x3283e0u: goto label_3283e0;
        case 0x3283e4u: goto label_3283e4;
        case 0x3283e8u: goto label_3283e8;
        case 0x3283ecu: goto label_3283ec;
        case 0x3283f0u: goto label_3283f0;
        case 0x3283f4u: goto label_3283f4;
        case 0x3283f8u: goto label_3283f8;
        case 0x3283fcu: goto label_3283fc;
        case 0x328400u: goto label_328400;
        case 0x328404u: goto label_328404;
        case 0x328408u: goto label_328408;
        case 0x32840cu: goto label_32840c;
        case 0x328410u: goto label_328410;
        case 0x328414u: goto label_328414;
        case 0x328418u: goto label_328418;
        case 0x32841cu: goto label_32841c;
        case 0x328420u: goto label_328420;
        case 0x328424u: goto label_328424;
        case 0x328428u: goto label_328428;
        case 0x32842cu: goto label_32842c;
        case 0x328430u: goto label_328430;
        case 0x328434u: goto label_328434;
        case 0x328438u: goto label_328438;
        case 0x32843cu: goto label_32843c;
        case 0x328440u: goto label_328440;
        case 0x328444u: goto label_328444;
        case 0x328448u: goto label_328448;
        case 0x32844cu: goto label_32844c;
        case 0x328450u: goto label_328450;
        case 0x328454u: goto label_328454;
        case 0x328458u: goto label_328458;
        case 0x32845cu: goto label_32845c;
        case 0x328460u: goto label_328460;
        case 0x328464u: goto label_328464;
        case 0x328468u: goto label_328468;
        case 0x32846cu: goto label_32846c;
        case 0x328470u: goto label_328470;
        case 0x328474u: goto label_328474;
        case 0x328478u: goto label_328478;
        case 0x32847cu: goto label_32847c;
        default: break;
    }

    ctx->pc = 0x3283d8u;

label_3283d8:
    // 0x3283d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3283d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3283dc:
    // 0x3283dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3283dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3283e0:
    // 0x3283e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3283e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3283e4:
    // 0x3283e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3283e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3283e8:
    // 0x3283e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3283e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3283ec:
    // 0x3283ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3283ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3283f0:
    // 0x3283f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3283f4:
    if (ctx->pc == 0x3283F4u) {
        ctx->pc = 0x3283F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283F0u;
        // 0x3283f4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283F8u;
        goto label_3283f8;
    }
    ctx->pc = 0x3283F0u;
    {
        const bool branch_taken_0x3283f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3283F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283F0u;
        // 0x3283f4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3283f0) {
            ctx->pc = 0x328408u;
            goto label_328408;
        }
    }
    ctx->pc = 0x3283F8u;
label_3283f8:
    // 0x3283f8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3283f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_3283fc:
    // 0x3283fc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3283fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_328400:
    // 0x328400: 0x10000005  b           . + 4 + (0x5 << 2)
label_328404:
    if (ctx->pc == 0x328404u) {
        ctx->pc = 0x328404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328400u;
        // 0x328404: 0x2442fb48  addiu       $v0, $v0, -0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328408u;
        goto label_328408;
    }
    ctx->pc = 0x328400u;
    {
        const bool branch_taken_0x328400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328400u;
        // 0x328404: 0x2442fb48  addiu       $v0, $v0, -0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328400) {
            ctx->pc = 0x328418u;
            goto label_328418;
        }
    }
    ctx->pc = 0x328408u;
label_328408:
    // 0x328408: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x328408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_32840c:
    // 0x32840c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x32840cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_328410:
    // 0x328410: 0x8c4285b0  lw          $v0, -0x7A50($v0)
    ctx->pc = 0x328410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935984)));
label_328414:
    // 0x328414: 0x8c6385b4  lw          $v1, -0x7A4C($v1)
    ctx->pc = 0x328414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935988)));
label_328418:
    // 0x328418: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x328418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_32841c:
    // 0x32841c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_328420:
    if (ctx->pc == 0x328420u) {
        ctx->pc = 0x328420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32841Cu;
        // 0x328420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328424u;
        goto label_328424;
    }
    ctx->pc = 0x32841Cu;
    {
        const bool branch_taken_0x32841c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x328420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32841Cu;
        // 0x328420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32841c) {
            ctx->pc = 0x32845Cu;
            goto label_32845c;
        }
    }
    ctx->pc = 0x328424u;
label_328424:
    // 0x328424: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x328424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_328428:
    // 0x328428: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x328428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32842c:
    // 0x32842c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_328430:
    if (ctx->pc == 0x328430u) {
        ctx->pc = 0x328430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32842Cu;
        // 0x328430: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328434u;
        goto label_328434;
    }
    ctx->pc = 0x32842Cu;
    {
        const bool branch_taken_0x32842c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32842c) {
            ctx->pc = 0x328430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32842Cu;
            // 0x328430: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328454u;
            goto label_328454;
        }
    }
    ctx->pc = 0x328434u;
label_328434:
    // 0x328434: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328438:
    // 0x328438: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x328438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_32843c:
    // 0x32843c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x32843cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328440:
    // 0x328440: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x328440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328444:
    // 0x328444: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x328444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328448:
    // 0x328448: 0xc0f809  jalr        $a2
label_32844c:
    if (ctx->pc == 0x32844Cu) {
        ctx->pc = 0x32844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328448u;
        // 0x32844c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328450u;
        goto label_328450;
    }
    ctx->pc = 0x328448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x328450u);
        ctx->pc = 0x32844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328448u;
        // 0x32844c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328448u, 0x328450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328450u;
label_328450:
    // 0x328450: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x328450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_328454:
    // 0x328454: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_328458:
    if (ctx->pc == 0x328458u) {
        ctx->pc = 0x328458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328454u;
        // 0x328458: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32845Cu;
        goto label_32845c;
    }
    ctx->pc = 0x328454u;
    {
        const bool branch_taken_0x328454 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x328458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328454u;
        // 0x328458: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328454) {
            ctx->pc = 0x328428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328428;
        }
    }
    ctx->pc = 0x32845Cu;
label_32845c:
    // 0x32845c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x32845cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_328460:
    // 0x328460: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x328460u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328464:
    // 0x328464: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x328464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_328468:
    // 0x328468: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x328468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32846c:
    // 0x32846c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32846cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_328470:
    // 0x328470: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x328470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328474:
    // 0x328474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328478:
    // 0x328478: 0x3e00008  jr          $ra
label_32847c:
    if (ctx->pc == 0x32847Cu) {
        ctx->pc = 0x32847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328478u;
        // 0x32847c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328480u;
        goto label_fallthrough_0x328478;
    }
    ctx->pc = 0x328478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328478u;
        // 0x32847c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x328478:
    ctx->pc = 0x328480u;
}
