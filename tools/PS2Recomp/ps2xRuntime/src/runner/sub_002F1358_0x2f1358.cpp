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

// Function: sub_002F1358
// Address: 0x2f1358 - 0x2f1440
void sub_002F1358_0x2f1358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1358_0x2f1358");
#endif

    switch (ctx->pc) {
        case 0x2f1394u: goto label_2f1394;
        case 0x2f13b4u: goto label_2f13b4;
        case 0x2f13d4u: goto label_2f13d4;
        case 0x2f13f0u: goto label_2f13f0;
        case 0x2f1410u: goto label_2f1410;
        case 0x2f141cu: goto label_2f141c;
        case 0x2f1424u: goto label_2f1424;
        default: break;
    }

    ctx->pc = 0x2f1358u;

    // 0x2f1358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f1358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f135c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f1360: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1368: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f136c: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f136cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f1370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f1378: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1378u;
    {
        const bool branch_taken_0x2f1378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1378u;
        // 0x2f137c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1378) {
            ctx->pc = 0x2F138Cu;
            goto label_2f138c;
        }
    }
    ctx->pc = 0x2F1380u;
    // 0x2f1380: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f1380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1384: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F1384u;
    {
        const bool branch_taken_0x2f1384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1384u;
        // 0x2f1388: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1384) {
            ctx->pc = 0x2F1428u;
            goto label_2f1428;
        }
    }
    ctx->pc = 0x2F138Cu;
label_2f138c:
    // 0x2f138c: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F138Cu;
    SET_GPR_U32(ctx, 31, 0x2F1394u);
    ctx->pc = 0x2F1390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F138Cu;
    // 0x2f1390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F138Cu, 0x2F1394u)) {
        return;
    }
    ctx->pc = 0x2F1394u;
label_2f1394:
    // 0x2f1394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1398: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1398u;
    {
        const bool branch_taken_0x2f1398 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2f1398) {
            ctx->pc = 0x2F13ACu;
            goto label_2f13ac;
        }
    }
    ctx->pc = 0x2F13A0u;
    // 0x2f13a0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f13a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F13A4u;
    {
        const bool branch_taken_0x2f13a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13A4u;
        // 0x2f13a8: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13a4) {
            ctx->pc = 0x2F1428u;
            goto label_2f1428;
        }
    }
    ctx->pc = 0x2F13ACu;
label_2f13ac:
    // 0x2f13ac: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F13ACu;
    SET_GPR_U32(ctx, 31, 0x2F13B4u);
    ctx->pc = 0x2F13B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13ACu;
    // 0x2f13b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F13ACu, 0x2F13B4u)) {
        return;
    }
    ctx->pc = 0x2F13B4u;
label_2f13b4:
    // 0x2f13b4: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f13b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f13b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F13B8u;
    {
        const bool branch_taken_0x2f13b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13B8u;
        // 0x2f13bc: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13b8) {
            ctx->pc = 0x2F13CCu;
            goto label_2f13cc;
        }
    }
    ctx->pc = 0x2F13C0u;
    // 0x2f13c0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f13c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F13C4u;
    {
        const bool branch_taken_0x2f13c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13C4u;
        // 0x2f13c8: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13c4) {
            ctx->pc = 0x2F1428u;
            goto label_2f1428;
        }
    }
    ctx->pc = 0x2F13CCu;
label_2f13cc:
    // 0x2f13cc: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F13CCu;
    SET_GPR_U32(ctx, 31, 0x2F13D4u);
    ctx->pc = 0x2F13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13CCu;
    // 0x2f13d0: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F13CCu, 0x2F13D4u)) {
        return;
    }
    ctx->pc = 0x2F13D4u;
label_2f13d4:
    // 0x2f13d4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f13d8: 0x2464f100  addiu       $a0, $v1, -0xF00
    ctx->pc = 0x2f13d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x2f13dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f13e0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F13E0u;
    {
        const bool branch_taken_0x2f13e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f13e0) {
            ctx->pc = 0x2F13E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F13E0u;
            // 0x2f13e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F13FCu;
            goto label_2f13fc;
        }
    }
    ctx->pc = 0x2F13E8u;
    // 0x2f13e8: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F13E8u;
    SET_GPR_U32(ctx, 31, 0x2F13F0u);
    ctx->pc = 0x2F13ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13E8u;
    // 0x2f13ec: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F13E8u, 0x2F13F0u)) {
        return;
    }
    ctx->pc = 0x2F13F0u;
label_2f13f0:
    // 0x2f13f0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f13f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F13F4u;
    {
        const bool branch_taken_0x2f13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13F4u;
        // 0x2f13f8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13f4) {
            ctx->pc = 0x2F1428u;
            goto label_2f1428;
        }
    }
    ctx->pc = 0x2F13FCu;
label_2f13fc:
    // 0x2f13fc: 0xac70f100  sw          $s0, -0xF00($v1)
    ctx->pc = 0x2f13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963456), GPR_U32(ctx, 16));
    // 0x2f1400: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2f1400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2f1404: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f1404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1408: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F1408u;
    SET_GPR_U32(ctx, 31, 0x2F1410u);
    ctx->pc = 0x2F140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1408u;
    // 0x2f140c: 0x2484041c  addiu       $a0, $a0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F1408u, 0x2F1410u)) {
        return;
    }
    ctx->pc = 0x2F1410u;
label_2f1410:
    // 0x2f1410: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f1410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f1414: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1414u;
    SET_GPR_U32(ctx, 31, 0x2F141Cu);
    ctx->pc = 0x2F1418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1414u;
    // 0x2f1418: 0x8c64f624  lw          $a0, -0x9DC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1414u, 0x2F141Cu)) {
        return;
    }
    ctx->pc = 0x2F141Cu;
label_2f141c:
    // 0x2f141c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F141Cu;
    SET_GPR_U32(ctx, 31, 0x2F1424u);
    ctx->pc = 0x2F1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F141Cu;
    // 0x2f1420: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F141Cu, 0x2F1424u)) {
        return;
    }
    ctx->pc = 0x2F1424u;
label_2f1424:
    // 0x2f1424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1428:
    // 0x2f1428: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f142c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f142cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1430: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1438: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1438u;
        // 0x2f143c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1440u;
}
