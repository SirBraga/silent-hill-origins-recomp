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

// Function: sub_00327CE0
// Address: 0x327ce0 - 0x327d50
void sub_00327CE0_0x327ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327CE0_0x327ce0");
#endif

    ctx->pc = 0x327ce0u;

    // 0x327ce0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x327ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x327ce4: 0x24478590  addiu       $a3, $v0, -0x7A70
    ctx->pc = 0x327ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x327ce8: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x327ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6885A4u));
    // 0x327cec: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x327CECu;
    {
        const bool branch_taken_0x327cec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x327cec) {
            ctx->pc = 0x327D00u;
            goto label_327d00;
        }
    }
    ctx->pc = 0x327CF4u;
    // 0x327cf4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x327cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x327cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x327CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CF8u;
        // 0x327cfc: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D00u;
label_327d00:
    // 0x327d00: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x327d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x327d04: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x327d04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x327d08: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x327d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x327d0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x327d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327d10: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x327d10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x327d14: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x327d14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x327d18: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x327d18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x327d1c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x327d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x327d20: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x327d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x327d24: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x327d24u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x327d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327d2c: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x327d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x327d30: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x327d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x327d34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x327d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x327d38: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x327d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x327d3c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x327d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x327d40: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x327d40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x327d44: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x327d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x327d48: 0x3e00008  jr          $ra
    ctx->pc = 0x327D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D48u;
        // 0x327d4c: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D50u;
}
