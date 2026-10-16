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

// Function: sub_002F1668
// Address: 0x2f1668 - 0x2f1768
void sub_002F1668_0x2f1668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1668_0x2f1668");
#endif

    switch (ctx->pc) {
        case 0x2f16b0u: goto label_2f16b0;
        case 0x2f16d0u: goto label_2f16d0;
        case 0x2f16f0u: goto label_2f16f0;
        case 0x2f170cu: goto label_2f170c;
        case 0x2f172cu: goto label_2f172c;
        case 0x2f173cu: goto label_2f173c;
        case 0x2f1744u: goto label_2f1744;
        default: break;
    }

    ctx->pc = 0x2f1668u;

    // 0x2f1668: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f166c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f1670: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f1670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f1674: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f1674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f1678: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f1678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f167c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f167cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1680: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1684: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f1684u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f1688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f168c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f1690: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1694: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1694u;
    {
        const bool branch_taken_0x2f1694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1694u;
        // 0x2f1698: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1694) {
            ctx->pc = 0x2F16A8u;
            goto label_2f16a8;
        }
    }
    ctx->pc = 0x2F169Cu;
    // 0x2f169c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f16a0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F16A0u;
    {
        const bool branch_taken_0x2f16a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16A0u;
        // 0x2f16a4: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f16a0) {
            ctx->pc = 0x2F1748u;
            goto label_2f1748;
        }
    }
    ctx->pc = 0x2F16A8u;
label_2f16a8:
    // 0x2f16a8: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F16A8u;
    SET_GPR_U32(ctx, 31, 0x2F16B0u);
    ctx->pc = 0x2F16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16A8u;
    // 0x2f16ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F16A8u, 0x2F16B0u)) {
        return;
    }
    ctx->pc = 0x2F16B0u;
label_2f16b0:
    // 0x2f16b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f16b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16b4: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F16B4u;
    {
        const bool branch_taken_0x2f16b4 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2f16b4) {
            ctx->pc = 0x2F16C8u;
            goto label_2f16c8;
        }
    }
    ctx->pc = 0x2F16BCu;
    // 0x2f16bc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f16c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2F16C0u;
    {
        const bool branch_taken_0x2f16c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16C0u;
        // 0x2f16c4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f16c0) {
            ctx->pc = 0x2F1748u;
            goto label_2f1748;
        }
    }
    ctx->pc = 0x2F16C8u;
label_2f16c8:
    // 0x2f16c8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F16C8u;
    SET_GPR_U32(ctx, 31, 0x2F16D0u);
    ctx->pc = 0x2F16CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16C8u;
    // 0x2f16cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F16C8u, 0x2F16D0u)) {
        return;
    }
    ctx->pc = 0x2F16D0u;
label_2f16d0:
    // 0x2f16d0: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f16d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f16d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F16D4u;
    {
        const bool branch_taken_0x2f16d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16D4u;
        // 0x2f16d8: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f16d4) {
            ctx->pc = 0x2F16E8u;
            goto label_2f16e8;
        }
    }
    ctx->pc = 0x2F16DCu;
    // 0x2f16dc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f16e0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2F16E0u;
    {
        const bool branch_taken_0x2f16e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F16E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16E0u;
        // 0x2f16e4: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f16e0) {
            ctx->pc = 0x2F1748u;
            goto label_2f1748;
        }
    }
    ctx->pc = 0x2F16E8u;
label_2f16e8:
    // 0x2f16e8: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F16E8u;
    SET_GPR_U32(ctx, 31, 0x2F16F0u);
    ctx->pc = 0x2F16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16E8u;
    // 0x2f16ec: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F16E8u, 0x2F16F0u)) {
        return;
    }
    ctx->pc = 0x2F16F0u;
label_2f16f0:
    // 0x2f16f0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f16f4: 0x2471f100  addiu       $s1, $v1, -0xF00
    ctx->pc = 0x2f16f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x2f16f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f16fc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F16FCu;
    {
        const bool branch_taken_0x2f16fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f16fc) {
            ctx->pc = 0x2F1700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F16FCu;
            // 0x2f1700: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1718u;
            goto label_2f1718;
        }
    }
    ctx->pc = 0x2F1704u;
    // 0x2f1704: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1704u;
    SET_GPR_U32(ctx, 31, 0x2F170Cu);
    ctx->pc = 0x2F1708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1704u;
    // 0x2f1708: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1704u, 0x2F170Cu)) {
        return;
    }
    ctx->pc = 0x2F170Cu;
label_2f170c:
    // 0x2f170c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f170cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1710: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F1710u;
    {
        const bool branch_taken_0x2f1710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1710u;
        // 0x2f1714: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1710) {
            ctx->pc = 0x2F1748u;
            goto label_2f1748;
        }
    }
    ctx->pc = 0x2F1718u;
label_2f1718:
    // 0x2f1718: 0xac70f100  sw          $s0, -0xF00($v1)
    ctx->pc = 0x2f1718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963456), GPR_U32(ctx, 16));
    // 0x2f171c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f171cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2f1720: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1724: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F1724u;
    SET_GPR_U32(ctx, 31, 0x2F172Cu);
    ctx->pc = 0x2F1728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1724u;
    // 0x2f1728: 0x2624041c  addiu       $a0, $s1, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F1724u, 0x2F172Cu)) {
        return;
    }
    ctx->pc = 0x2F172Cu;
label_2f172c:
    // 0x2f172c: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x2f172cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x2f1730: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f1730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f1734: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1734u;
    SET_GPR_U32(ctx, 31, 0x2F173Cu);
    ctx->pc = 0x2F1738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1734u;
    // 0x2f1738: 0x8c64f624  lw          $a0, -0x9DC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1734u, 0x2F173Cu)) {
        return;
    }
    ctx->pc = 0x2F173Cu;
label_2f173c:
    // 0x2f173c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F173Cu;
    SET_GPR_U32(ctx, 31, 0x2F1744u);
    ctx->pc = 0x2F1740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F173Cu;
    // 0x2f1740: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F173Cu, 0x2F1744u)) {
        return;
    }
    ctx->pc = 0x2F1744u;
label_2f1744:
    // 0x2f1744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1748:
    // 0x2f1748: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f1748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f174c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f174cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1750: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f1750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1754: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f1754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1758: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f175c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f175cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1760: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1760u;
        // 0x2f1764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1768u;
}
