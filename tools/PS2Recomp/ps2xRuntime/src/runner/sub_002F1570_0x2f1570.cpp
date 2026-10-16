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

// Function: sub_002F1570
// Address: 0x2f1570 - 0x2f1668
void sub_002F1570_0x2f1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1570_0x2f1570");
#endif

    switch (ctx->pc) {
        case 0x2f15b0u: goto label_2f15b0;
        case 0x2f15d0u: goto label_2f15d0;
        case 0x2f15f0u: goto label_2f15f0;
        case 0x2f160cu: goto label_2f160c;
        case 0x2f162cu: goto label_2f162c;
        case 0x2f1640u: goto label_2f1640;
        case 0x2f1648u: goto label_2f1648;
        default: break;
    }

    ctx->pc = 0x2f1570u;

    // 0x2f1570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f1574: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f1574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f1578: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f157c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1580: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1584: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f1584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f1588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f158c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1590: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1594: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1594u;
    {
        const bool branch_taken_0x2f1594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1594u;
        // 0x2f1598: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1594) {
            ctx->pc = 0x2F15A8u;
            goto label_2f15a8;
        }
    }
    ctx->pc = 0x2F159Cu;
    // 0x2f159c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f15a0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F15A0u;
    {
        const bool branch_taken_0x2f15a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15A0u;
        // 0x2f15a4: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15a0) {
            ctx->pc = 0x2F164Cu;
            goto label_2f164c;
        }
    }
    ctx->pc = 0x2F15A8u;
label_2f15a8:
    // 0x2f15a8: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F15A8u;
    SET_GPR_U32(ctx, 31, 0x2F15B0u);
    ctx->pc = 0x2F15ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15A8u;
    // 0x2f15ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F15A8u, 0x2F15B0u)) {
        return;
    }
    ctx->pc = 0x2F15B0u;
label_2f15b0:
    // 0x2f15b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f15b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15b4: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F15B4u;
    {
        const bool branch_taken_0x2f15b4 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2f15b4) {
            ctx->pc = 0x2F15C8u;
            goto label_2f15c8;
        }
    }
    ctx->pc = 0x2F15BCu;
    // 0x2f15bc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f15c0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2F15C0u;
    {
        const bool branch_taken_0x2f15c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15C0u;
        // 0x2f15c4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15c0) {
            ctx->pc = 0x2F164Cu;
            goto label_2f164c;
        }
    }
    ctx->pc = 0x2F15C8u;
label_2f15c8:
    // 0x2f15c8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F15C8u;
    SET_GPR_U32(ctx, 31, 0x2F15D0u);
    ctx->pc = 0x2F15CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15C8u;
    // 0x2f15cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F15C8u, 0x2F15D0u)) {
        return;
    }
    ctx->pc = 0x2F15D0u;
label_2f15d0:
    // 0x2f15d0: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f15d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f15d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F15D4u;
    {
        const bool branch_taken_0x2f15d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15D4u;
        // 0x2f15d8: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15d4) {
            ctx->pc = 0x2F15E8u;
            goto label_2f15e8;
        }
    }
    ctx->pc = 0x2F15DCu;
    // 0x2f15dc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f15e0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F15E0u;
    {
        const bool branch_taken_0x2f15e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15E0u;
        // 0x2f15e4: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15e0) {
            ctx->pc = 0x2F164Cu;
            goto label_2f164c;
        }
    }
    ctx->pc = 0x2F15E8u;
label_2f15e8:
    // 0x2f15e8: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F15E8u;
    SET_GPR_U32(ctx, 31, 0x2F15F0u);
    ctx->pc = 0x2F15ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15E8u;
    // 0x2f15ec: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F15E8u, 0x2F15F0u)) {
        return;
    }
    ctx->pc = 0x2F15F0u;
label_2f15f0:
    // 0x2f15f0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f15f4: 0x2471f100  addiu       $s1, $v1, -0xF00
    ctx->pc = 0x2f15f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x2f15f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f15fc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F15FCu;
    {
        const bool branch_taken_0x2f15fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f15fc) {
            ctx->pc = 0x2F1600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F15FCu;
            // 0x2f1600: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1618u;
            goto label_2f1618;
        }
    }
    ctx->pc = 0x2F1604u;
    // 0x2f1604: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1604u;
    SET_GPR_U32(ctx, 31, 0x2F160Cu);
    ctx->pc = 0x2F1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1604u;
    // 0x2f1608: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1604u, 0x2F160Cu)) {
        return;
    }
    ctx->pc = 0x2F160Cu;
label_2f160c:
    // 0x2f160c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1610: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F1610u;
    {
        const bool branch_taken_0x2f1610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1610u;
        // 0x2f1614: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1610) {
            ctx->pc = 0x2F164Cu;
            goto label_2f164c;
        }
    }
    ctx->pc = 0x2F1618u;
label_2f1618:
    // 0x2f1618: 0xac70f100  sw          $s0, -0xF00($v1)
    ctx->pc = 0x2f1618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963456), GPR_U32(ctx, 16));
    // 0x2f161c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f161cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2f1620: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1624: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F1624u;
    SET_GPR_U32(ctx, 31, 0x2F162Cu);
    ctx->pc = 0x2F1628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1624u;
    // 0x2f1628: 0x2624041c  addiu       $a0, $s1, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F1624u, 0x2F162Cu)) {
        return;
    }
    ctx->pc = 0x2F162Cu;
label_2f162c:
    // 0x2f162c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f162cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f1630: 0x34028427  ori         $v0, $zero, 0x8427
    ctx->pc = 0x2f1630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33831);
    // 0x2f1634: 0x8c64f624  lw          $a0, -0x9DC($v1)
    ctx->pc = 0x2f1634u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70F624u));
    // 0x2f1638: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1638u;
    SET_GPR_U32(ctx, 31, 0x2F1640u);
    ctx->pc = 0x2F163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1638u;
    // 0x2f163c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1638u, 0x2F1640u)) {
        return;
    }
    ctx->pc = 0x2F1640u;
label_2f1640:
    // 0x2f1640: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1640u;
    SET_GPR_U32(ctx, 31, 0x2F1648u);
    ctx->pc = 0x2F1644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1640u;
    // 0x2f1644: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1640u, 0x2F1648u)) {
        return;
    }
    ctx->pc = 0x2F1648u;
label_2f1648:
    // 0x2f1648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f164c:
    // 0x2f164c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1650: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f1650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1654: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f1654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1658: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f165c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f165cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1660: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1660u;
        // 0x2f1664: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1668u;
}
