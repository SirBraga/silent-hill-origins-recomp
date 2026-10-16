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

// Function: sub_0010E880
// Address: 0x10e880 - 0x10e8e0
void sub_0010E880_0x10e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E880_0x10e880");
#endif

    switch (ctx->pc) {
        case 0x10e890u: goto label_10e890;
        default: break;
    }

    ctx->pc = 0x10e880u;

    // 0x10e880: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x10e880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e884: 0x24840b20  addiu       $a0, $a0, 0xB20
    ctx->pc = 0x10e884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2848));
    // 0x10e888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10e888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e88c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x10e88cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e890:
    // 0x10e890: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10e890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10e894: 0x14480006  bne         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E894u;
    {
        const bool branch_taken_0x10e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x10E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E894u;
        // 0x10e898: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e894) {
            ctx->pc = 0x10E8B0u;
            goto label_10e8b0;
        }
    }
    ctx->pc = 0x10E89Cu;
    // 0x10e89c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x10e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e8a0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x10e8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10e8a8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x10e8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10e8ac: 0x3300b  movn        $a2, $zero, $v1
    ctx->pc = 0x10e8acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_10e8b0:
    // 0x10e8b0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E8B0u;
    {
        const bool branch_taken_0x10e8b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8B0u;
        // 0x10e8b4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8b0) {
            ctx->pc = 0x10E8C0u;
            goto label_10e8c0;
        }
    }
    ctx->pc = 0x10E8B8u;
    // 0x10e8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8B8u;
        // 0x10e8bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E8C0u;
label_10e8c0:
    // 0x10e8c0: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x10e8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10e8c4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x10E8C4u;
    {
        const bool branch_taken_0x10e8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8C4u;
        // 0x10e8c8: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8c4) {
            ctx->pc = 0x10E890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e890;
        }
    }
    ctx->pc = 0x10E8CCu;
    // 0x10e8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10E8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8CCu;
        // 0x10e8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E8D4u;
    // 0x10e8d4: 0x0  nop
    ctx->pc = 0x10e8d4u;
    // NOP
    // 0x10e8d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10e8dc: 0x0  nop
    ctx->pc = 0x10e8dcu;
    // NOP
    ctx->pc = 0x10e8e0u;
}
