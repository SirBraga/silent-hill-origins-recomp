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

// Function: sub_001D2C00
// Address: 0x1d2c00 - 0x1d2c60
void sub_001D2C00_0x1d2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2C00_0x1d2c00");
#endif

    switch (ctx->pc) {
        case 0x1d2c24u: goto label_1d2c24;
        case 0x1d2c30u: goto label_1d2c30;
        case 0x1d2c44u: goto label_1d2c44;
        case 0x1d2c54u: goto label_1d2c54;
        default: break;
    }

    ctx->pc = 0x1d2c00u;

    // 0x1d2c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2c04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d2c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2c08: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D2C08u;
    {
        const bool branch_taken_0x1d2c08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C08u;
        // 0x1d2c0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c08) {
            ctx->pc = 0x1D2C54u;
            goto label_1d2c54;
        }
    }
    ctx->pc = 0x1D2C10u;
    // 0x1d2c10: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2C10u;
    {
        const bool branch_taken_0x1d2c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c10) {
            ctx->pc = 0x1D2C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2C10u;
            // 0x1d2c14: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2C38u;
            goto label_1d2c38;
        }
    }
    ctx->pc = 0x1D2C18u;
    // 0x1d2c18: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d2c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d2c1c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D2C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C24u);
    ctx->pc = 0x1D2C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C1Cu;
    // 0x1d2c20: 0x248486c8  addiu       $a0, $a0, -0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D2C1Cu, 0x1D2C24u)) {
        return;
    }
    ctx->pc = 0x1D2C24u;
label_1d2c24:
    // 0x1d2c24: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d2c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d2c28: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D2C28u;
    SET_GPR_U32(ctx, 31, 0x1D2C30u);
    ctx->pc = 0x1D2C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C28u;
    // 0x1d2c2c: 0x248486d0  addiu       $a0, $a0, -0x7930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D2C28u, 0x1D2C30u)) {
        return;
    }
    ctx->pc = 0x1D2C30u;
label_1d2c30:
    // 0x1d2c30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2C30u;
    {
        const bool branch_taken_0x1d2c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C30u;
        // 0x1d2c34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c30) {
            ctx->pc = 0x1D2C58u;
            goto label_1d2c58;
        }
    }
    ctx->pc = 0x1D2C38u;
label_1d2c38:
    // 0x1d2c38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d2c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2c3c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D2C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C44u);
    ctx->pc = 0x1D2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C3Cu;
    // 0x1d2c40: 0x248486d0  addiu       $a0, $a0, -0x7930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D2C3Cu, 0x1D2C44u)) {
        return;
    }
    ctx->pc = 0x1D2C44u;
label_1d2c44:
    // 0x1d2c44: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d2c48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2c4c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C54u);
    ctx->pc = 0x1D2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C4Cu;
    // 0x1d2c50: 0x248486c8  addiu       $a0, $a0, -0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D2C4Cu, 0x1D2C54u)) {
        return;
    }
    ctx->pc = 0x1D2C54u;
label_1d2c54:
    // 0x1d2c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2c58:
    // 0x1d2c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C58u;
        // 0x1d2c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2C60u;
}
