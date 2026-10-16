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

// Function: sub_00317470
// Address: 0x317470 - 0x3174e8
void sub_00317470_0x317470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317470_0x317470");
#endif

    switch (ctx->pc) {
        case 0x317488u: goto label_317488;
        case 0x317490u: goto label_317490;
        case 0x3174b0u: goto label_3174b0;
        default: break;
    }

    ctx->pc = 0x317470u;

    // 0x317470: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x317470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x317474: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x317474u;
    {
        const bool branch_taken_0x317474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317474u;
        // 0x317478: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317474) {
            ctx->pc = 0x317490u;
            goto label_317490;
        }
    }
    ctx->pc = 0x31747Cu;
    // 0x31747c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31747cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317480: 0x3e00008  jr          $ra
    ctx->pc = 0x317480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317480u;
        // 0x317484: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317488u;
label_317488:
    // 0x317488: 0x3e00008  jr          $ra
    ctx->pc = 0x317488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317488u;
        // 0x31748c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317490u;
label_317490:
    // 0x317490: 0x0  nop
    ctx->pc = 0x317490u;
    // NOP
    // 0x317494: 0x0  nop
    ctx->pc = 0x317494u;
    // NOP
    // 0x317498: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317498u;
    {
        const bool branch_taken_0x317498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317498u;
        // 0x31749c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317498) {
            ctx->pc = 0x317488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317488;
        }
    }
    ctx->pc = 0x3174A0u;
    // 0x3174a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3174a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3174a4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3174A4u;
    {
        const bool branch_taken_0x3174a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3174a4) {
            ctx->pc = 0x3174A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3174A4u;
            // 0x3174a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3174D0u;
            goto label_3174d0;
        }
    }
    ctx->pc = 0x3174ACu;
    // 0x3174ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3174acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3174b0:
    // 0x3174b0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x3174b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3174b4: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3174b4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3174b8: 0x10c0fff3  beqz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3174B8u;
    {
        const bool branch_taken_0x3174b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3174BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174B8u;
        // 0x3174bc: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3174b8) {
            ctx->pc = 0x317488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317488;
        }
    }
    ctx->pc = 0x3174C0u;
    // 0x3174c0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3174c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3174c4: 0x50c3fffa  beql        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3174C4u;
    {
        const bool branch_taken_0x3174c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3174c4) {
            ctx->pc = 0x3174C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3174C4u;
            // 0x3174c8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3174B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3174b0;
        }
    }
    ctx->pc = 0x3174CCu;
    // 0x3174cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3174ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3174d0:
    // 0x3174d0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3174d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3174d4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3174D4u;
    {
        const bool branch_taken_0x3174d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3174d4) {
            ctx->pc = 0x3174D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3174D4u;
            // 0x3174d8: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317490;
        }
    }
    ctx->pc = 0x3174DCu;
    // 0x3174dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3174DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3174E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174DCu;
        // 0x3174e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3174DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3174E4u;
    // 0x3174e4: 0x0  nop
    ctx->pc = 0x3174e4u;
    // NOP
    ctx->pc = 0x3174e8u;
}
