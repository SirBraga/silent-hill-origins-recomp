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

// Function: sub_002392D0
// Address: 0x2392d0 - 0x239628
void sub_002392D0_0x2392d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002392D0_0x2392d0");
#endif

    switch (ctx->pc) {
        case 0x239318u: goto label_239318;
        default: break;
    }

    ctx->pc = 0x2392d0u;

    // 0x2392d0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2392d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2392d4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2392d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2392d8: 0x24633c90  addiu       $v1, $v1, 0x3C90
    ctx->pc = 0x2392d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15504));
    // 0x2392dc: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x2392dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x703CC2u));
    // 0x2392e0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2392E0u;
    {
        const bool branch_taken_0x2392e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2392E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392E0u;
        // 0x2392e4: 0x25223c90  addiu       $v0, $t1, 0x3C90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392e0) {
            ctx->pc = 0x239360u;
            goto label_239360;
        }
    }
    ctx->pc = 0x2392E8u;
    // 0x2392e8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2392ec: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x2392ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2392f0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2392F0u;
    {
        const bool branch_taken_0x2392f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2392F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F0u;
        // 0x2392f4: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392f0) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x2392F8u;
    // 0x2392f8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2392F8u;
    {
        const bool branch_taken_0x2392f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392f8) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x239300u;
    // 0x239300: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239300u;
    {
        const bool branch_taken_0x239300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x240201e0  addiu       $v0, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239300) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x239308u;
    // 0x239308: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x239308u;
    {
        const bool branch_taken_0x239308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239308u;
        // 0x23930c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239308) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x239310u;
    // 0x239310: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239310u;
    {
        const bool branch_taken_0x239310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239310u;
        // 0x239314: 0x25243c90  addiu       $a0, $t1, 0x3C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239310) {
            ctx->pc = 0x239324u;
            goto label_239324;
        }
    }
    ctx->pc = 0x239318u;
label_239318:
    // 0x239318: 0x3e00008  jr          $ra
    ctx->pc = 0x239318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239318u;
        // 0x23931c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239320u;
label_239320:
    // 0x239320: 0x25243c90  addiu       $a0, $t1, 0x3C90
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
label_239324:
    // 0x239324: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x239328: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x239328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x23932c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23932Cu;
    {
        const bool branch_taken_0x23932c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23932Cu;
        // 0x239330: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23932c) {
            ctx->pc = 0x239344u;
            goto label_239344;
        }
    }
    ctx->pc = 0x239334u;
label_239334:
    // 0x239334: 0x25233c90  addiu       $v1, $t1, 0x3C90
    ctx->pc = 0x239334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x239338: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x239338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x23933c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23933Cu;
    {
        const bool branch_taken_0x23933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23933Cu;
        // 0x239340: 0xa0620032  sb          $v0, 0x32($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23933c) {
            ctx->pc = 0x23935Cu;
            goto label_23935c;
        }
    }
    ctx->pc = 0x239344u;
label_239344:
    // 0x239344: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239344u;
    {
        const bool branch_taken_0x239344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239344u;
        // 0x239348: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239344) {
            ctx->pc = 0x239354u;
            goto label_239354;
        }
    }
    ctx->pc = 0x23934Cu;
    // 0x23934c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23934Cu;
    {
        const bool branch_taken_0x23934c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23934Cu;
        // 0x239350: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23934c) {
            ctx->pc = 0x239358u;
            goto label_239358;
        }
    }
    ctx->pc = 0x239354u;
label_239354:
    // 0x239354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_239358:
    // 0x239358: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x239358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_23935c:
    // 0x23935c: 0x25223c90  addiu       $v0, $t1, 0x3C90
    ctx->pc = 0x23935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
label_239360:
    // 0x239360: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x239360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239364: 0x90440032  lbu         $a0, 0x32($v0)
    ctx->pc = 0x239364u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x239368: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x239368u;
    {
        const bool branch_taken_0x239368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239368) {
            ctx->pc = 0x239380u;
            goto label_239380;
        }
    }
    ctx->pc = 0x239370u;
    // 0x239370: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239370u;
    {
        const bool branch_taken_0x239370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x239374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239370u;
        // 0x239374: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239370) {
            ctx->pc = 0x239380u;
            goto label_239380;
        }
    }
    ctx->pc = 0x239378u;
    // 0x239378: 0x1482ffe7  bne         $a0, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x239378u;
    {
        const bool branch_taken_0x239378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x239378) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x239380u;
label_239380:
    // 0x239380: 0x25233c90  addiu       $v1, $t1, 0x3C90
    ctx->pc = 0x239380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x239384: 0x90620033  lbu         $v0, 0x33($v1)
    ctx->pc = 0x239384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
    // 0x239388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239388u;
    {
        const bool branch_taken_0x239388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239388u;
        // 0x23938c: 0x24020202  addiu       $v0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239388) {
            ctx->pc = 0x23939Cu;
            goto label_23939c;
        }
    }
    ctx->pc = 0x239390u;
    // 0x239390: 0x94630030  lhu         $v1, 0x30($v1)
    ctx->pc = 0x239390u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x239394: 0x1462ffe0  bne         $v1, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x239394u;
    {
        const bool branch_taken_0x239394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239394) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x23939Cu;
label_23939c:
    // 0x23939c: 0x25243c90  addiu       $a0, $t1, 0x3C90
    ctx->pc = 0x23939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x2393a0: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x2393a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2393a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2393a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2393a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2393a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2393ac: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2393ACu;
    {
        const bool branch_taken_0x2393ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393ac) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x2393B4u;
    // 0x2393b4: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x2393b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2393b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2393b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2393bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2393bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2393c0: 0x1040ffd5  beqz        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2393C0u;
    {
        const bool branch_taken_0x2393c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393C0u;
        // 0x2393c4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393c0) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x2393C8u;
    // 0x2393c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2393c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2393cc: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2393CCu;
    {
        const bool branch_taken_0x2393cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2393D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393CCu;
        // 0x2393d0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393cc) {
            ctx->pc = 0x2393DCu;
            goto label_2393dc;
        }
    }
    ctx->pc = 0x2393D4u;
    // 0x2393d4: 0x1462ffd0  bne         $v1, $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2393D4u;
    {
        const bool branch_taken_0x2393d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2393d4) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x2393DCu;
label_2393dc:
    // 0x2393dc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2393dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2393e0: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2393E0u;
    {
        const bool branch_taken_0x2393e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2393E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393E0u;
        // 0x2393e4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393e0) {
            ctx->pc = 0x2393F0u;
            goto label_2393f0;
        }
    }
    ctx->pc = 0x2393E8u;
    // 0x2393e8: 0x1462ffcb  bne         $v1, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2393E8u;
    {
        const bool branch_taken_0x2393e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2393e8) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x2393F0u;
label_2393f0:
    // 0x2393f0: 0x8d223c90  lw          $v0, 0x3C90($t1)
    ctx->pc = 0x2393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15504)));
    // 0x2393f4: 0x25253c90  addiu       $a1, $t1, 0x3C90
    ctx->pc = 0x2393f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x2393f8: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x2393f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x2393fc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2393fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x239400: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239404: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x239404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239408: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x239408u;
    {
        const bool branch_taken_0x239408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x23940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239408u;
        // 0x23940c: 0x473024  and         $a2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239408) {
            ctx->pc = 0x239420u;
            goto label_239420;
        }
    }
    ctx->pc = 0x239410u;
    // 0x239410: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x239410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x239414: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239418: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239418u;
    {
        const bool branch_taken_0x239418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239418u;
        // 0x23941c: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239418) {
            ctx->pc = 0x239430u;
            goto label_239430;
        }
    }
    ctx->pc = 0x239420u;
label_239420:
    // 0x239420: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x239420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x239424: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x239424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x239428: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x239428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x23942c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23942cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239430:
    // 0x239430: 0xc24018  mult        $t0, $a2, $v0
    ctx->pc = 0x239430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x239434: 0x25223c90  addiu       $v0, $t1, 0x3C90
    ctx->pc = 0x239434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x239438: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x239438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23943c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239440: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239440u;
    {
        const bool branch_taken_0x239440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x239440) {
            ctx->pc = 0x239444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239440u;
            // 0x239444: 0x84080  sll         $t0, $t0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23944Cu;
            goto label_23944c;
        }
    }
    ctx->pc = 0x239448u;
    // 0x239448: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x239448u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_23944c:
    // 0x23944c: 0x25253c90  addiu       $a1, $t1, 0x3C90
    ctx->pc = 0x23944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x239450: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x239450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x239454: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x239454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x239458: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x239458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23945c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x23945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x239460: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239464: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239464u;
    {
        const bool branch_taken_0x239464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x239468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239464u;
        // 0x239468: 0x473024  and         $a2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239464) {
            ctx->pc = 0x23947Cu;
            goto label_23947c;
        }
    }
    ctx->pc = 0x23946Cu;
    // 0x23946c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x23946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x239470: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239474: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239474u;
    {
        const bool branch_taken_0x239474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239474u;
        // 0x239478: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239474) {
            ctx->pc = 0x23948Cu;
            goto label_23948c;
        }
    }
    ctx->pc = 0x23947Cu;
label_23947c:
    // 0x23947c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x23947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x239480: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x239480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x239484: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x239484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x239488: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23948c:
    // 0x23948c: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x23948cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x239490: 0x25223c90  addiu       $v0, $t1, 0x3C90
    ctx->pc = 0x239490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x239494: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x239494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239498: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x239498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x23949c: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23949Cu;
    {
        const bool branch_taken_0x23949c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23949c) {
            ctx->pc = 0x2394A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23949Cu;
            // 0x2394a0: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2394A8u;
            goto label_2394a8;
        }
    }
    ctx->pc = 0x2394A4u;
    // 0x2394a4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2394a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2394a8:
    // 0x2394a8: 0x8d223c90  lw          $v0, 0x3C90($t1)
    ctx->pc = 0x2394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15504)));
    // 0x2394ac: 0x2406ffc0  addiu       $a2, $zero, -0x40
    ctx->pc = 0x2394acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x2394b0: 0x8f8a84cc  lw          $t2, -0x7B34($gp)
    ctx->pc = 0x2394b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x2394b4: 0x25253c90  addiu       $a1, $t1, 0x3C90
    ctx->pc = 0x2394b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x2394b8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x2394b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2394bc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2394bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2394c0: 0x15430005  bne         $t2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2394C0u;
    {
        const bool branch_taken_0x2394c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x2394C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394C0u;
        // 0x2394c4: 0x462024  and         $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394c0) {
            ctx->pc = 0x2394D8u;
            goto label_2394d8;
        }
    }
    ctx->pc = 0x2394C8u;
    // 0x2394c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2394c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2394cc: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x2394ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2394d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2394D0u;
    {
        const bool branch_taken_0x2394d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394D0u;
        // 0x2394d4: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394d0) {
            ctx->pc = 0x2394E8u;
            goto label_2394e8;
        }
    }
    ctx->pc = 0x2394D8u;
label_2394d8:
    // 0x2394d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2394d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2394dc: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2394dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2394e0: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x2394e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x2394e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2394e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2394e8:
    // 0x2394e8: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x2394e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2394ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2394ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2394f0: 0x55420002  bnel        $t2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2394F0u;
    {
        const bool branch_taken_0x2394f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x2394f0) {
            ctx->pc = 0x2394F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2394F0u;
            // 0x2394f4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2394FCu;
            goto label_2394fc;
        }
    }
    ctx->pc = 0x2394F8u;
    // 0x2394f8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2394fc:
    // 0x2394fc: 0x25223c90  addiu       $v0, $t1, 0x3C90
    ctx->pc = 0x2394fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x239500: 0x90430033  lbu         $v1, 0x33($v0)
    ctx->pc = 0x239500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 51)));
    // 0x239504: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x239504u;
    {
        const bool branch_taken_0x239504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239504u;
        // 0x239508: 0x107102b  sltu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239504) {
            ctx->pc = 0x239514u;
            goto label_239514;
        }
    }
    ctx->pc = 0x23950Cu;
    // 0x23950c: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x23950Cu;
    {
        const bool branch_taken_0x23950c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23950c) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x239514u;
label_239514:
    // 0x239514: 0x25253c90  addiu       $a1, $t1, 0x3C90
    ctx->pc = 0x239514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
    // 0x239518: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x239518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23951c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x23951Cu;
    {
        const bool branch_taken_0x23951c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23951Cu;
        // 0x239520: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23951c) {
            ctx->pc = 0x239558u;
            goto label_239558;
        }
    }
    ctx->pc = 0x239524u;
    // 0x239524: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x239524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x239528: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239528u;
    {
        const bool branch_taken_0x239528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239528u;
        // 0x23952c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239528) {
            ctx->pc = 0x23953Cu;
            goto label_23953c;
        }
    }
    ctx->pc = 0x239530u;
    // 0x239530: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x239530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239534: 0x1462ff78  bne         $v1, $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x239534u;
    {
        const bool branch_taken_0x239534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239534u;
        // 0x239538: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239534) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x23953Cu;
label_23953c:
    // 0x23953c: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23953Cu;
    {
        const bool branch_taken_0x23953c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x239540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23953Cu;
        // 0x239540: 0x25253c90  addiu       $a1, $t1, 0x3C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23953c) {
            ctx->pc = 0x239574u;
            goto label_239574;
        }
    }
    ctx->pc = 0x239544u;
    // 0x239544: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x239544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x239548: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x239548u;
    {
        const bool branch_taken_0x239548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x239548) {
            ctx->pc = 0x23954Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239548u;
            // 0x23954c: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239578u;
            goto label_239578;
        }
    }
    ctx->pc = 0x239550u;
    // 0x239550: 0x1000ff71  b           . + 4 + (-0x8F << 2)
    ctx->pc = 0x239550u;
    {
        const bool branch_taken_0x239550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239550) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x239558u;
label_239558:
    // 0x239558: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x239558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23955c: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x23955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x239560: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x239560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239564: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239568: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x239568u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x23956c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x23956cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x239570: 0x25253c90  addiu       $a1, $t1, 0x3C90
    ctx->pc = 0x239570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
label_239574:
    // 0x239574: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x239574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_239578:
    // 0x239578: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x239578u;
    {
        const bool branch_taken_0x239578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239578u;
        // 0x23957c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239578) {
            ctx->pc = 0x2395B4u;
            goto label_2395b4;
        }
    }
    ctx->pc = 0x239580u;
    // 0x239580: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x239580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x239584: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239584u;
    {
        const bool branch_taken_0x239584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x239588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239584u;
        // 0x239588: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239584) {
            ctx->pc = 0x239598u;
            goto label_239598;
        }
    }
    ctx->pc = 0x23958Cu;
    // 0x23958c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x23958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239590: 0x1462ff61  bne         $v1, $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x239590u;
    {
        const bool branch_taken_0x239590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239590u;
        // 0x239594: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239590) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x239598u;
label_239598:
    // 0x239598: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x239598u;
    {
        const bool branch_taken_0x239598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239598u;
        // 0x23959c: 0x25243c90  addiu       $a0, $t1, 0x3C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239598) {
            ctx->pc = 0x2395D0u;
            goto label_2395d0;
        }
    }
    ctx->pc = 0x2395A0u;
    // 0x2395a0: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x2395a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2395a4: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2395A4u;
    {
        const bool branch_taken_0x2395a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2395a4) {
            ctx->pc = 0x2395A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2395A4u;
            // 0x2395a8: 0x90820030  lbu         $v0, 0x30($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2395D4u;
            goto label_2395d4;
        }
    }
    ctx->pc = 0x2395ACu;
    // 0x2395ac: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
    ctx->pc = 0x2395ACu;
    {
        const bool branch_taken_0x2395ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2395ac) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x2395B4u;
label_2395b4:
    // 0x2395b4: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2395b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2395b8: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x2395b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2395bc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2395bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2395c0: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x2395c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x2395c4: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2395c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2395c8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x2395c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x2395cc: 0x25243c90  addiu       $a0, $t1, 0x3C90
    ctx->pc = 0x2395ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
label_2395d0:
    // 0x2395d0: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x2395d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
label_2395d4:
    // 0x2395d4: 0x90830033  lbu         $v1, 0x33($a0)
    ctx->pc = 0x2395d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x2395d8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2395D8u;
    {
        const bool branch_taken_0x2395d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2395DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395D8u;
        // 0x2395dc: 0x1022818  mult        $a1, $t0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395d8) {
            ctx->pc = 0x239608u;
            goto label_239608;
        }
    }
    ctx->pc = 0x2395E0u;
    // 0x2395e0: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x2395e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2395e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2395e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2395e8: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2395e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2395ec: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2395ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2395f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2395f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2395f4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2395f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2395f8: 0x1460ff47  bnez        $v1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x2395F8u;
    {
        const bool branch_taken_0x2395f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2395FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395F8u;
        // 0x2395fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395f8) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x239600u;
    // 0x239600: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239600u;
    {
        const bool branch_taken_0x239600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239600) {
            ctx->pc = 0x23961Cu;
            goto label_23961c;
        }
    }
    ctx->pc = 0x239608u;
label_239608:
    // 0x239608: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x239608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x23960c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x239610: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x239610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x239614: 0x1440ff40  bnez        $v0, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x239614u;
    {
        const bool branch_taken_0x239614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239614u;
        // 0x239618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239614) {
            ctx->pc = 0x239318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239318;
        }
    }
    ctx->pc = 0x23961Cu;
label_23961c:
    // 0x23961c: 0x3e00008  jr          $ra
    ctx->pc = 0x23961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23961Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239624u;
    // 0x239624: 0x0  nop
    ctx->pc = 0x239624u;
    // NOP
    ctx->pc = 0x239628u;
}
