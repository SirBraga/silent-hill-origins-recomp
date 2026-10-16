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

// Function: sub_0029E448
// Address: 0x29e448 - 0x29e550
void sub_0029E448_0x29e448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E448_0x29e448");
#endif

    switch (ctx->pc) {
        case 0x29e478u: goto label_29e478;
        case 0x29e4a8u: goto label_29e4a8;
        case 0x29e4acu: goto label_29e4ac;
        case 0x29e4b8u: goto label_29e4b8;
        case 0x29e520u: goto label_29e520;
        default: break;
    }

    ctx->pc = 0x29e448u;

    // 0x29e448: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x29e448u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29e44c: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x29e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x29e450: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E450u;
    {
        const bool branch_taken_0x29e450 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E450u;
        // 0x29e454: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e450) {
            ctx->pc = 0x29E468u;
            goto label_29e468;
        }
    }
    ctx->pc = 0x29E458u;
    // 0x29e458: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x29e458u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29e45c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x29e45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29E460u;
    {
        const bool branch_taken_0x29e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E460u;
        // 0x29e464: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e460) {
            ctx->pc = 0x29E46Cu;
            goto label_29e46c;
        }
    }
    ctx->pc = 0x29E468u;
label_29e468:
    // 0x29e468: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29e468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e46c:
    // 0x29e46c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x29e46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29e470: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x29e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x29e474: 0x0  nop
    ctx->pc = 0x29e474u;
    // NOP
label_29e478:
    // 0x29e478: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x29e478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x29e47c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x29e47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x29e480: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e484: 0x0  nop
    ctx->pc = 0x29e484u;
    // NOP
    // 0x29e488: 0x0  nop
    ctx->pc = 0x29e488u;
    // NOP
    // 0x29e48c: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29E48Cu;
    {
        const bool branch_taken_0x29e48c = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x29e48c) {
            ctx->pc = 0x29E478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e478;
        }
    }
    ctx->pc = 0x29E494u;
    // 0x29e494: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29E494u;
    {
        const bool branch_taken_0x29e494 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E494u;
        // 0x29e498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e494) {
            ctx->pc = 0x29E4A4u;
            goto label_29e4a4;
        }
    }
    ctx->pc = 0x29E49Cu;
    // 0x29e49c: 0x3e00008  jr          $ra
    ctx->pc = 0x29E49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E49Cu;
        // 0x29e4a0: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E4A4u;
label_29e4a4:
    // 0x29e4a4: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x29e4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_29e4a8:
    // 0x29e4a8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x29e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_29e4ac:
    // 0x29e4ac: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x29e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29e4b0: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x29e4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x29e4b4: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x29e4b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29e4b8:
    // 0x29e4b8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x29e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x29e4bc: 0x1102000e  beq         $t0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29E4BCu;
    {
        const bool branch_taken_0x29e4bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4BCu;
        // 0x29e4c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4bc) {
            ctx->pc = 0x29E4F8u;
            goto label_29e4f8;
        }
    }
    ctx->pc = 0x29E4C4u;
    // 0x29e4c4: 0x2902002e  slti        $v0, $t0, 0x2E
    ctx->pc = 0x29e4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x29e4c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E4C8u;
    {
        const bool branch_taken_0x29e4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4C8u;
        // 0x29e4cc: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4c8) {
            ctx->pc = 0x29E4E0u;
            goto label_29e4e0;
        }
    }
    ctx->pc = 0x29E4D0u;
    // 0x29e4d0: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E4D0u;
    {
        const bool branch_taken_0x29e4d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D0u;
        // 0x29e4d4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4d0) {
            ctx->pc = 0x29E4F0u;
            goto label_29e4f0;
        }
    }
    ctx->pc = 0x29E4D8u;
    // 0x29e4d8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x29E4D8u;
    {
        const bool branch_taken_0x29e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D8u;
        // 0x29e4dc: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4d8) {
            ctx->pc = 0x29E4ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e4ac;
        }
    }
    ctx->pc = 0x29E4E0u;
label_29e4e0:
    // 0x29e4e0: 0x11020018  beq         $t0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29E4E0u;
    {
        const bool branch_taken_0x29e4e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4E0u;
        // 0x29e4e4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4e0) {
            ctx->pc = 0x29E544u;
            goto label_29e544;
        }
    }
    ctx->pc = 0x29E4E8u;
    // 0x29e4e8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x29E4E8u;
    {
        const bool branch_taken_0x29e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4E8u;
        // 0x29e4ec: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4e8) {
            ctx->pc = 0x29E4ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e4ac;
        }
    }
    ctx->pc = 0x29E4F0u;
label_29e4f0:
    // 0x29e4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4F0u;
        // 0x29e4f4: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E4F8u;
label_29e4f8:
    // 0x29e4f8: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x29e4f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29e4fc: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x29e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x29e500: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29E500u;
    {
        const bool branch_taken_0x29e500 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E500u;
        // 0x29e504: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e500) {
            ctx->pc = 0x29E510u;
            goto label_29e510;
        }
    }
    ctx->pc = 0x29E508u;
    // 0x29e508: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29E508u;
    {
        const bool branch_taken_0x29e508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e508) {
            ctx->pc = 0x29E50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E508u;
            // 0x29e50c: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E518u;
            goto label_29e518;
        }
    }
    ctx->pc = 0x29E510u;
label_29e510:
    // 0x29e510: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x29E510u;
    {
        const bool branch_taken_0x29e510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E510u;
        // 0x29e514: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e510) {
            ctx->pc = 0x29E4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e4a8;
        }
    }
    ctx->pc = 0x29E518u;
label_29e518:
    // 0x29e518: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x29e518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x29e51c: 0x0  nop
    ctx->pc = 0x29e51cu;
    // NOP
label_29e520:
    // 0x29e520: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29e520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29e524: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x29e524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x29e528: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x29e528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x29e52c: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x29e52cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x29e530: 0x0  nop
    ctx->pc = 0x29e530u;
    // NOP
    // 0x29e534: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29E534u;
    {
        const bool branch_taken_0x29e534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e534) {
            ctx->pc = 0x29E520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e520;
        }
    }
    ctx->pc = 0x29E53Cu;
    // 0x29e53c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x29E53Cu;
    {
        const bool branch_taken_0x29e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E53Cu;
        // 0x29e540: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e53c) {
            ctx->pc = 0x29E4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e4b8;
        }
    }
    ctx->pc = 0x29E544u;
label_29e544:
    // 0x29e544: 0x3e00008  jr          $ra
    ctx->pc = 0x29E544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E544u;
        // 0x29e548: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E54Cu;
    // 0x29e54c: 0x0  nop
    ctx->pc = 0x29e54cu;
    // NOP
    ctx->pc = 0x29e550u;
}
