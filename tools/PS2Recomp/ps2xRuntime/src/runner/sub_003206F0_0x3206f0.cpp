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

// Function: sub_003206F0
// Address: 0x3206f0 - 0x320758
void sub_003206F0_0x3206f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003206F0_0x3206f0");
#endif

    switch (ctx->pc) {
        case 0x32070cu: goto label_32070c;
        case 0x320730u: goto label_320730;
        default: break;
    }

    ctx->pc = 0x3206f0u;

    // 0x3206f0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x3206f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3206f4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3206f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3206f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3206f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3206fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3206FCu;
    {
        const bool branch_taken_0x3206fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206FCu;
        // 0x320700: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206fc) {
            ctx->pc = 0x32071Cu;
            goto label_32071c;
        }
    }
    ctx->pc = 0x320704u;
    // 0x320704: 0x3e00008  jr          $ra
    ctx->pc = 0x320704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32070Cu;
label_32070c:
    // 0x32070c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320710: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x320710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320714: 0x3e00008  jr          $ra
    ctx->pc = 0x320714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320714u;
        // 0x320718: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32071Cu;
label_32071c:
    // 0x32071c: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x32071cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x320720: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x320720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x320724: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x320724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x320728: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x320728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32072c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x32072cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_320730:
    // 0x320730: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x320730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x320734: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x320734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x320738: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x320738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32073c: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x32073Cu;
    {
        const bool branch_taken_0x32073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x32073c) {
            ctx->pc = 0x320740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32073Cu;
            // 0x320740: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32070Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32070c;
        }
    }
    ctx->pc = 0x320744u;
    // 0x320744: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x320744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x320748: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x320748u;
    {
        const bool branch_taken_0x320748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320748u;
        // 0x32074c: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320748) {
            ctx->pc = 0x320730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320730;
        }
    }
    ctx->pc = 0x320750u;
    // 0x320750: 0x3e00008  jr          $ra
    ctx->pc = 0x320750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320750u;
        // 0x320754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320758u;
}
