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

// Function: sub_003123F8
// Address: 0x3123f8 - 0x3124f4
void sub_003123F8_0x3123f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003123F8_0x3123f8");
#endif

    switch (ctx->pc) {
        case 0x31242cu: goto label_31242c;
        case 0x31246cu: goto label_31246c;
        case 0x3124a4u: goto label_3124a4;
        case 0x3124d4u: goto label_3124d4;
        default: break;
    }

    ctx->pc = 0x3123f8u;

    // 0x3123f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3123f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123fc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3123fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x312400: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x312400u;
    {
        const bool branch_taken_0x312400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312400u;
        // 0x312404: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312400) {
            ctx->pc = 0x31244Cu;
            goto label_31244c;
        }
    }
    ctx->pc = 0x312408u;
    // 0x312408: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x312408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31240c: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x31240cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x312410: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x312410u;
    {
        const bool branch_taken_0x312410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312410u;
        // 0x312414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312410) {
            ctx->pc = 0x31244Cu;
            goto label_31244c;
        }
    }
    ctx->pc = 0x312418u;
    // 0x312418: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x312418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x31241c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x31241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x312420: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x312420u;
    {
        const bool branch_taken_0x312420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x312424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312420u;
        // 0x312424: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312420) {
            ctx->pc = 0x3124ECu;
            goto label_3124ec;
        }
    }
    ctx->pc = 0x312428u;
    // 0x312428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x312428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31242c:
    // 0x31242c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x31242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x312430: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x312430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x312434: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x312434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312438: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x312438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x31243c: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31243Cu;
    {
        const bool branch_taken_0x31243c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x312440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31243Cu;
        // 0x312440: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31243c) {
            ctx->pc = 0x31242Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31242c;
        }
    }
    ctx->pc = 0x312444u;
    // 0x312444: 0x3e00008  jr          $ra
    ctx->pc = 0x312444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312444u;
        // 0x312448: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31244Cu;
label_31244c:
    // 0x31244c: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x31244cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x312450: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x312450u;
    {
        const bool branch_taken_0x312450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312450) {
            ctx->pc = 0x312454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312450u;
            // 0x312454: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124C8u;
            goto label_3124c8;
        }
    }
    ctx->pc = 0x312458u;
    // 0x312458: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x312458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x31245c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x31245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x312460: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x312460u;
    {
        const bool branch_taken_0x312460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312460) {
            ctx->pc = 0x312464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312460u;
            // 0x312464: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124C8u;
            goto label_3124c8;
        }
    }
    ctx->pc = 0x312468u;
    // 0x312468: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x312468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31246c:
    // 0x31246c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x31246cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312470: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x312470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x312474: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x312474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x312478: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x312478u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x31247c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31247cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x312480: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x312480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x312484: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x312484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312488: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x312488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31248c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x31248cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x312490: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x312490u;
    {
        const bool branch_taken_0x312490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312490u;
        // 0x312494: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312490) {
            ctx->pc = 0x31246Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31246c;
        }
    }
    ctx->pc = 0x312498u;
    // 0x312498: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x312498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x31249c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31249Cu;
    {
        const bool branch_taken_0x31249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3124A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31249Cu;
        // 0x3124a0: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31249c) {
            ctx->pc = 0x3124C4u;
            goto label_3124c4;
        }
    }
    ctx->pc = 0x3124A4u;
label_3124a4:
    // 0x3124a4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3124a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3124a8: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3124a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3124ac: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3124acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3124b0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3124b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3124b4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3124b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3124b8: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3124B8u;
    {
        const bool branch_taken_0x3124b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124B8u;
        // 0x3124bc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124b8) {
            ctx->pc = 0x3124A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3124a4;
        }
    }
    ctx->pc = 0x3124C0u;
    // 0x3124c0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3124c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3124c4:
    // 0x3124c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3124c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3124c8:
    // 0x3124c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3124c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3124cc: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3124CCu;
    {
        const bool branch_taken_0x3124cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3124D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124CCu;
        // 0x3124d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124cc) {
            ctx->pc = 0x3124ECu;
            goto label_3124ec;
        }
    }
    ctx->pc = 0x3124D4u;
label_3124d4:
    // 0x3124d4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3124d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3124d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3124d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3124dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3124dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3124e0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3124e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3124e4: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3124E4u;
    {
        const bool branch_taken_0x3124e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3124E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124E4u;
        // 0x3124e8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124e4) {
            ctx->pc = 0x3124D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3124d4;
        }
    }
    ctx->pc = 0x3124ECu;
label_3124ec:
    // 0x3124ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3124ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124ECu;
        // 0x3124f0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3124ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3124F4u;
}
