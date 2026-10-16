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

// Function: sub_002597F8
// Address: 0x2597f8 - 0x2598a0
void sub_002597F8_0x2597f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002597F8_0x2597f8");
#endif

    switch (ctx->pc) {
        case 0x259860u: goto label_259860;
        default: break;
    }

    ctx->pc = 0x2597f8u;

    // 0x2597f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2597f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2597fc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2597fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x259800: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x259800u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259804: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259804u;
    {
        const bool branch_taken_0x259804 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x259808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259804u;
        // 0x259808: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259804) {
            ctx->pc = 0x259818u;
            goto label_259818;
        }
    }
    ctx->pc = 0x25980Cu;
    // 0x25980c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x25980cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x259810: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x259810u;
    {
        const bool branch_taken_0x259810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x259810) {
            ctx->pc = 0x25982Cu;
            goto label_25982c;
        }
    }
    ctx->pc = 0x259818u;
label_259818:
    // 0x259818: 0x54e60006  bnel        $a3, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x259818u;
    {
        const bool branch_taken_0x259818 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x259818) {
            ctx->pc = 0x25981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259818u;
            // 0x25981c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259834u;
            goto label_259834;
        }
    }
    ctx->pc = 0x259820u;
    // 0x259820: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x259820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x259824: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x259824u;
    {
        const bool branch_taken_0x259824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x259824) {
            ctx->pc = 0x259828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259824u;
            // 0x259828: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259834u;
            goto label_259834;
        }
    }
    ctx->pc = 0x25982Cu;
label_25982c:
    // 0x25982c: 0x3e00008  jr          $ra
    ctx->pc = 0x25982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25982Cu;
        // 0x259830: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25982Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259834u;
label_259834:
    // 0x259834: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x259834u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259838: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259838u;
    {
        const bool branch_taken_0x259838 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x25983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259838u;
        // 0x25983c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259838) {
            ctx->pc = 0x25984Cu;
            goto label_25984c;
        }
    }
    ctx->pc = 0x259840u;
    // 0x259840: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x259840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x259844: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x259844u;
    {
        const bool branch_taken_0x259844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x259844) {
            ctx->pc = 0x259860u;
            goto label_259860;
        }
    }
    ctx->pc = 0x25984Cu;
label_25984c:
    // 0x25984c: 0x54e60006  bnel        $a3, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x25984Cu;
    {
        const bool branch_taken_0x25984c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x25984c) {
            ctx->pc = 0x259850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25984Cu;
            // 0x259850: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259868u;
            goto label_259868;
        }
    }
    ctx->pc = 0x259854u;
    // 0x259854: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x259854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x259858: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x259858u;
    {
        const bool branch_taken_0x259858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x259858) {
            ctx->pc = 0x25985Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259858u;
            // 0x25985c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259868u;
            goto label_259868;
        }
    }
    ctx->pc = 0x259860u;
label_259860:
    // 0x259860: 0x3e00008  jr          $ra
    ctx->pc = 0x259860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259860u;
        // 0x259864: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259868u;
label_259868:
    // 0x259868: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x259868u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25986c: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25986Cu;
    {
        const bool branch_taken_0x25986c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x259870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25986Cu;
        // 0x259870: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25986c) {
            ctx->pc = 0x259880u;
            goto label_259880;
        }
    }
    ctx->pc = 0x259874u;
    // 0x259874: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x259874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x259878: 0x1046fff9  beq         $v0, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x259878u;
    {
        const bool branch_taken_0x259878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x259878) {
            ctx->pc = 0x259860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259860;
        }
    }
    ctx->pc = 0x259880u;
label_259880:
    // 0x259880: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x259880u;
    {
        const bool branch_taken_0x259880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x259880) {
            ctx->pc = 0x259894u;
            goto label_259894;
        }
    }
    ctx->pc = 0x259888u;
    // 0x259888: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x259888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x25988c: 0x1045fff4  beq         $v0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25988Cu;
    {
        const bool branch_taken_0x25988c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x25988c) {
            ctx->pc = 0x259860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259860;
        }
    }
    ctx->pc = 0x259894u;
label_259894:
    // 0x259894: 0x3e00008  jr          $ra
    ctx->pc = 0x259894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259894u;
        // 0x259898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25989Cu;
    // 0x25989c: 0x0  nop
    ctx->pc = 0x25989cu;
    // NOP
    ctx->pc = 0x2598a0u;
}
