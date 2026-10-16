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

// Function: sub_002ECF40
// Address: 0x2ecf40 - 0x2ecfb8
void sub_002ECF40_0x2ecf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECF40_0x2ecf40");
#endif

    switch (ctx->pc) {
        case 0x2ecf50u: goto label_2ecf50;
        case 0x2ecf80u: goto label_2ecf80;
        default: break;
    }

    ctx->pc = 0x2ecf40u;

    // 0x2ecf40: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2ecf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2ecf44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ecf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf48: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF48u;
        // 0x2ecf4c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF50u;
label_2ecf50:
    // 0x2ecf50: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2ecf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ecf54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ecf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ecf58: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2ecf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2ecf5c: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x2ecf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2ecf60: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2ecf60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2ecf64: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x2ecf64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x2ecf68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ecf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf6c: 0x94830058  lhu         $v1, 0x58($a0)
    ctx->pc = 0x2ecf6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2ecf70: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x2ecf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2ecf74: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF74u;
        // 0x2ecf78: 0xa4830058  sh          $v1, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF7Cu;
    // 0x2ecf7c: 0x0  nop
    ctx->pc = 0x2ecf7cu;
    // NOP
label_2ecf80:
    // 0x2ecf80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ecf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf84: 0x94a20058  lhu         $v0, 0x58($a1)
    ctx->pc = 0x2ecf84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2ecf88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ecf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ecf8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECF8Cu;
    {
        const bool branch_taken_0x2ecf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF8Cu;
        // 0x2ecf90: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf8c) {
            ctx->pc = 0x2ECFA8u;
            goto label_2ecfa8;
        }
    }
    ctx->pc = 0x2ECF94u;
    // 0x2ecf94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ecf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ecf98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ecf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ecf9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF9Cu;
    {
        const bool branch_taken_0x2ecf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF9Cu;
        // 0x2ecfa0: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf9c) {
            ctx->pc = 0x2ECFACu;
            goto label_2ecfac;
        }
    }
    ctx->pc = 0x2ECFA4u;
    // 0x2ecfa4: 0x0  nop
    ctx->pc = 0x2ecfa4u;
    // NOP
label_2ecfa8:
    // 0x2ecfa8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ecfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ecfac:
    // 0x2ecfac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2ecfacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2ecfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFB0u;
        // 0x2ecfb4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECFB8u;
}
