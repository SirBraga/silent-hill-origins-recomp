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

// Function: sub_002E1070
// Address: 0x2e1070 - 0x2e1120
void sub_002E1070_0x2e1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1070_0x2e1070");
#endif

    ctx->pc = 0x2e1070u;

    // 0x2e1070: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1074: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E1074u;
    {
        const bool branch_taken_0x2e1074 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1074u;
        // 0x2e1078: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1074) {
            ctx->pc = 0x2E10C0u;
            goto label_2e10c0;
        }
    }
    ctx->pc = 0x2E107Cu;
    // 0x2e107c: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x2e107cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e1080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1080u;
    {
        const bool branch_taken_0x2e1080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1080u;
        // 0x2e1084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1080) {
            ctx->pc = 0x2E1098u;
            goto label_2e1098;
        }
    }
    ctx->pc = 0x2E1088u;
    // 0x2e1088: 0x50c20008  beql        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1088u;
    {
        const bool branch_taken_0x2e1088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1088) {
            ctx->pc = 0x2E108Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1088u;
            // 0x2e108c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E10ACu;
            goto label_2e10ac;
        }
    }
    ctx->pc = 0x2E1090u;
    // 0x2e1090: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1098u;
label_2e1098:
    // 0x2e1098: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e1098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e109c: 0x50c20012  beql        $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E109Cu;
    {
        const bool branch_taken_0x2e109c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e109c) {
            ctx->pc = 0x2E10A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E109Cu;
            // 0x2e10a0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E10E8u;
            goto label_2e10e8;
        }
    }
    ctx->pc = 0x2E10A4u;
    // 0x2e10a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E10A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E10A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E10ACu;
label_2e10ac:
    // 0x2e10ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2e10acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e10b0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2e10b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e10b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e10b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E10B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10B8u;
        // 0x2e10bc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E10B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E10C0u;
label_2e10c0:
    // 0x2e10c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e10c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e10c4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2e10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e10c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e10c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e10cc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2e10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e10d0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e10d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e10d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e10d8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2e10d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e10dc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2e10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e10e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E10E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10E0u;
        // 0x2e10e4: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E10E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E10E8u;
label_2e10e8:
    // 0x2e10e8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2e10e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e10ec: 0x30a4ff00  andi        $a0, $a1, 0xFF00
    ctx->pc = 0x2e10ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2e10f0: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2e10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2e10f4: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x2e10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2e10f8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2e10f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2e10fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e10fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e1100: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2e1100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2e1104: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1108: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x2e1108u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x2e110c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e1110: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2e1110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2e1114: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2e1114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2e1118: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1118u;
        // 0x2e111c: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1120u;
}
