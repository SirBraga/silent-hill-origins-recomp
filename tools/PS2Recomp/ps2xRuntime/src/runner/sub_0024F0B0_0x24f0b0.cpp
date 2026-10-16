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

// Function: sub_0024F0B0
// Address: 0x24f0b0 - 0x24f120
void sub_0024F0B0_0x24f0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F0B0_0x24f0b0");
#endif

    switch (ctx->pc) {
        case 0x24f0c0u: goto label_24f0c0;
        default: break;
    }

    ctx->pc = 0x24f0b0u;

    // 0x24f0b0: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24F0B0u;
    {
        const bool branch_taken_0x24f0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0B0u;
        // 0x24f0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0b0) {
            ctx->pc = 0x24F118u;
            goto label_24f118;
        }
    }
    ctx->pc = 0x24F0B8u;
    // 0x24f0b8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24F0B8u;
    {
        const bool branch_taken_0x24f0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f0b8) {
            ctx->pc = 0x24F118u;
            goto label_24f118;
        }
    }
    ctx->pc = 0x24F0C0u;
label_24f0c0:
    // 0x24f0c0: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x24f0c0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f0c4: 0x24c2ffbf  addiu       $v0, $a2, -0x41
    ctx->pc = 0x24f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
    // 0x24f0c8: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x24f0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x24f0cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F0CCu;
    {
        const bool branch_taken_0x24f0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0CCu;
        // 0x24f0d0: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0cc) {
            ctx->pc = 0x24F0E0u;
            goto label_24f0e0;
        }
    }
    ctx->pc = 0x24F0D4u;
    // 0x24f0d4: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x24f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x24f0d8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x24f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x24f0dc: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x24f0dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_24f0e0:
    // 0x24f0e0: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x24f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x24f0e4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x24f0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x24f0e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F0E8u;
    {
        const bool branch_taken_0x24f0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0E8u;
        // 0x24f0ec: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0e8) {
            ctx->pc = 0x24F0F8u;
            goto label_24f0f8;
        }
    }
    ctx->pc = 0x24F0F0u;
    // 0x24f0f0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x24f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x24f0f4: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x24f0f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_24f0f8:
    // 0x24f0f8: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F0F8u;
    {
        const bool branch_taken_0x24f0f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x24F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0F8u;
        // 0x24f0fc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0f8) {
            ctx->pc = 0x24F110u;
            goto label_24f110;
        }
    }
    ctx->pc = 0x24F100u;
    // 0x24f100: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x24F100u;
    {
        const bool branch_taken_0x24f100 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F100u;
        // 0x24f104: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f100) {
            ctx->pc = 0x24F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f0c0;
        }
    }
    ctx->pc = 0x24F108u;
    // 0x24f108: 0x3e00008  jr          $ra
    ctx->pc = 0x24F108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F108u;
        // 0x24f10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F110u;
label_24f110:
    // 0x24f110: 0x3e00008  jr          $ra
    ctx->pc = 0x24F110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F110u;
        // 0x24f114: 0xc31023  subu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F118u;
label_24f118:
    // 0x24f118: 0x3e00008  jr          $ra
    ctx->pc = 0x24F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F120u;
}
