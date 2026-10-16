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

// Function: sub_002EBBE8
// Address: 0x2ebbe8 - 0x2ebc78
void sub_002EBBE8_0x2ebbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBBE8_0x2ebbe8");
#endif

    switch (ctx->pc) {
        case 0x2ebc08u: goto label_2ebc08;
        case 0x2ebc40u: goto label_2ebc40;
        default: break;
    }

    ctx->pc = 0x2ebbe8u;

    // 0x2ebbe8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ebbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ebbec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ebbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebbf0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ebbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ebbf4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2ebbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2ebbf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBFCu;
        // 0x2ebc00: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC04u;
    // 0x2ebc04: 0x0  nop
    ctx->pc = 0x2ebc04u;
    // NOP
label_2ebc08:
    // 0x2ebc08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc0c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2ebc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2ebc10: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ebc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ebc14: 0xaca40658  sw          $a0, 0x658($a1)
    ctx->pc = 0x2ebc14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1624), GPR_U32(ctx, 4));
    // 0x2ebc18: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x2ebc18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ebc1c: 0xa4a3065c  sh          $v1, 0x65C($a1)
    ctx->pc = 0x2ebc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1628), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ebc20: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x2ebc20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2ebc24: 0xa4a4065e  sh          $a0, 0x65E($a1)
    ctx->pc = 0x2ebc24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1630), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ebc28: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2ebc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ebc2c: 0xaca30668  sw          $v1, 0x668($a1)
    ctx->pc = 0x2ebc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1640), GPR_U32(ctx, 3));
    // 0x2ebc30: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2ebc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2ebc34: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC34u;
        // 0x2ebc38: 0xaca4066c  sw          $a0, 0x66C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1644), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC3Cu;
    // 0x2ebc3c: 0x0  nop
    ctx->pc = 0x2ebc3cu;
    // NOP
label_2ebc40:
    // 0x2ebc40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc44: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2ebc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2ebc48: 0x8ca40658  lw          $a0, 0x658($a1)
    ctx->pc = 0x2ebc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1624)));
    // 0x2ebc4c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2ebc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2ebc50: 0x94a3065c  lhu         $v1, 0x65C($a1)
    ctx->pc = 0x2ebc50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1628)));
    // 0x2ebc54: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x2ebc54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ebc58: 0x94a4065e  lhu         $a0, 0x65E($a1)
    ctx->pc = 0x2ebc58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1630)));
    // 0x2ebc5c: 0xa4c40006  sh          $a0, 0x6($a2)
    ctx->pc = 0x2ebc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ebc60: 0x8ca30668  lw          $v1, 0x668($a1)
    ctx->pc = 0x2ebc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1640)));
    // 0x2ebc64: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2ebc64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2ebc68: 0x8ca4066c  lw          $a0, 0x66C($a1)
    ctx->pc = 0x2ebc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1644)));
    // 0x2ebc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC6Cu;
        // 0x2ebc70: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC74u;
    // 0x2ebc74: 0x0  nop
    ctx->pc = 0x2ebc74u;
    // NOP
    ctx->pc = 0x2ebc78u;
}
