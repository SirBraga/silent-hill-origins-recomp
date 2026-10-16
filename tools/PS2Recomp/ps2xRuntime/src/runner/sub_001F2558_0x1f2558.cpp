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

// Function: sub_001F2558
// Address: 0x1f2558 - 0x1f2608
void sub_001F2558_0x1f2558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2558_0x1f2558");
#endif

    switch (ctx->pc) {
        case 0x1f2568u: goto label_1f2568;
        default: break;
    }

    ctx->pc = 0x1f2558u;

    // 0x1f2558: 0x8c87271c  lw          $a3, 0x271C($a0)
    ctx->pc = 0x1f2558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10012)));
    // 0x1f255c: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F255Cu;
    {
        const bool branch_taken_0x1f255c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f255c) {
            ctx->pc = 0x1F2560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F255Cu;
            // 0x1f2560: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F25A0u;
            goto label_1f25a0;
        }
    }
    ctx->pc = 0x1F2564u;
    // 0x1f2564: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1f2564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1f2568:
    // 0x1f2568: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2568u;
    {
        const bool branch_taken_0x1f2568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2568u;
        // 0x1f256c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2568) {
            ctx->pc = 0x1F257Cu;
            goto label_1f257c;
        }
    }
    ctx->pc = 0x1F2570u;
    // 0x1f2570: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1f2570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f2574: 0x10460010  beq         $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F2574u;
    {
        const bool branch_taken_0x1f2574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1f2574) {
            ctx->pc = 0x1F25B8u;
            goto label_1f25b8;
        }
    }
    ctx->pc = 0x1F257Cu;
label_1f257c:
    // 0x1f257c: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F257Cu;
    {
        const bool branch_taken_0x1f257c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1f257c) {
            ctx->pc = 0x1F2580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F257Cu;
            // 0x1f2580: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2594u;
            goto label_1f2594;
        }
    }
    ctx->pc = 0x1F2584u;
    // 0x1f2584: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1f2584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f2588: 0x5045000d  beql        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2588u;
    {
        const bool branch_taken_0x1f2588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f2588) {
            ctx->pc = 0x1F258Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2588u;
            // 0x1f258c: 0xace60008  sw          $a2, 0x8($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F25C0u;
            goto label_1f25c0;
        }
    }
    ctx->pc = 0x1F2590u;
    // 0x1f2590: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1f2590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f2594:
    // 0x1f2594: 0x54e0fff4  bnel        $a3, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F2594u;
    {
        const bool branch_taken_0x1f2594 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2594) {
            ctx->pc = 0x1F2598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2594u;
            // 0x1f2598: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2568;
        }
    }
    ctx->pc = 0x1F259Cu;
    // 0x1f259c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f25a0:
    // 0x1f25a0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F25A0u;
    {
        const bool branch_taken_0x1f25a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25a0) {
            ctx->pc = 0x1F25A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F25A0u;
            // 0x1f25a4: 0x8c821d0c  lw          $v0, 0x1D0C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F25CCu;
            goto label_1f25cc;
        }
    }
    ctx->pc = 0x1F25A8u;
    // 0x1f25a8: 0x8c870808  lw          $a3, 0x808($a0)
    ctx->pc = 0x1f25a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2056)));
    // 0x1f25ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f25acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f25b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F25B0u;
    {
        const bool branch_taken_0x1f25b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25B0u;
        // 0x1f25b4: 0xac820808  sw          $v0, 0x808($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25b0) {
            ctx->pc = 0x1F25E4u;
            goto label_1f25e4;
        }
    }
    ctx->pc = 0x1F25B8u;
label_1f25b8:
    // 0x1f25b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F25B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25B8u;
        // 0x1f25bc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F25B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F25C0u;
label_1f25c0:
    // 0x1f25c0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1f25c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F25C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25C4u;
        // 0x1f25c8: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F25C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F25CCu;
label_1f25cc:
    // 0x1f25cc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1f25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f25d0: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1f25d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f25d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f25d8: 0xac821d0c  sw          $v0, 0x1D0C($a0)
    ctx->pc = 0x1f25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7436), GPR_U32(ctx, 2));
    // 0x1f25dc: 0x2463080c  addiu       $v1, $v1, 0x80C
    ctx->pc = 0x1f25dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2060));
    // 0x1f25e0: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x1f25e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f25e4:
    // 0x1f25e4: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1f25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x1f25e8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1f25e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25ec: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x1f25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x1f25f0: 0xace40018  sw          $a0, 0x18($a3)
    ctx->pc = 0x1f25f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    // 0x1f25f4: 0x8c83271c  lw          $v1, 0x271C($a0)
    ctx->pc = 0x1f25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10012)));
    // 0x1f25f8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1f25f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1f25fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F25FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25FCu;
        // 0x1f2600: 0xac87271c  sw          $a3, 0x271C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10012), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F25FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2604u;
    // 0x1f2604: 0x0  nop
    ctx->pc = 0x1f2604u;
    // NOP
    ctx->pc = 0x1f2608u;
}
