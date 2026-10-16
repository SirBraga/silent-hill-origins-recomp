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

// Function: sub_0018FF58
// Address: 0x18ff58 - 0x18ffe0
void sub_0018FF58_0x18ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FF58_0x18ff58");
#endif

    switch (ctx->pc) {
        case 0x18ff7cu: goto label_18ff7c;
        case 0x18ff88u: goto label_18ff88;
        case 0x18ff94u: goto label_18ff94;
        case 0x18ffa8u: goto label_18ffa8;
        case 0x18ffb8u: goto label_18ffb8;
        case 0x18ffc8u: goto label_18ffc8;
        default: break;
    }

    ctx->pc = 0x18ff58u;

    // 0x18ff58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ff58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ff5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18ff5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18ff60: 0x14a20019  bne         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18FF60u;
    {
        const bool branch_taken_0x18ff60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF60u;
        // 0x18ff64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff60) {
            ctx->pc = 0x18FFC8u;
            goto label_18ffc8;
        }
    }
    ctx->pc = 0x18FF68u;
    // 0x18ff68: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18FF68u;
    {
        const bool branch_taken_0x18ff68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff68) {
            ctx->pc = 0x18FF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FF68u;
            // 0x18ff6c: 0x3c04006d  lui         $a0, 0x6D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FF9Cu;
            goto label_18ff9c;
        }
    }
    ctx->pc = 0x18FF70u;
    // 0x18ff70: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18ff74: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x18FF74u;
    SET_GPR_U32(ctx, 31, 0x18FF7Cu);
    ctx->pc = 0x18FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF74u;
    // 0x18ff78: 0x2484bd80  addiu       $a0, $a0, -0x4280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x18FF74u, 0x18FF7Cu)) {
        return;
    }
    ctx->pc = 0x18FF7Cu;
label_18ff7c:
    // 0x18ff7c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18ff80: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x18FF80u;
    SET_GPR_U32(ctx, 31, 0x18FF88u);
    ctx->pc = 0x18FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF80u;
    // 0x18ff84: 0x2484bd88  addiu       $a0, $a0, -0x4278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x18FF80u, 0x18FF88u)) {
        return;
    }
    ctx->pc = 0x18FF88u;
label_18ff88:
    // 0x18ff88: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18ff8c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x18FF8Cu;
    SET_GPR_U32(ctx, 31, 0x18FF94u);
    ctx->pc = 0x18FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF8Cu;
    // 0x18ff90: 0x2484bd90  addiu       $a0, $a0, -0x4270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x18FF8Cu, 0x18FF94u)) {
        return;
    }
    ctx->pc = 0x18FF94u;
label_18ff94:
    // 0x18ff94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18FF94u;
    {
        const bool branch_taken_0x18ff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF94u;
        // 0x18ff98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff94) {
            ctx->pc = 0x18FFCCu;
            goto label_18ffcc;
        }
    }
    ctx->pc = 0x18FF9Cu;
label_18ff9c:
    // 0x18ff9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ffa0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x18FFA0u;
    SET_GPR_U32(ctx, 31, 0x18FFA8u);
    ctx->pc = 0x18FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFA0u;
    // 0x18ffa4: 0x2484bd90  addiu       $a0, $a0, -0x4270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x18FFA0u, 0x18FFA8u)) {
        return;
    }
    ctx->pc = 0x18FFA8u;
label_18ffa8:
    // 0x18ffa8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18ffac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ffb0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x18FFB0u;
    SET_GPR_U32(ctx, 31, 0x18FFB8u);
    ctx->pc = 0x18FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFB0u;
    // 0x18ffb4: 0x2484bd88  addiu       $a0, $a0, -0x4278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x18FFB0u, 0x18FFB8u)) {
        return;
    }
    ctx->pc = 0x18FFB8u;
label_18ffb8:
    // 0x18ffb8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18ffbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ffc0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x18FFC0u;
    SET_GPR_U32(ctx, 31, 0x18FFC8u);
    ctx->pc = 0x18FFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFC0u;
    // 0x18ffc4: 0x2484bd80  addiu       $a0, $a0, -0x4280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x18FFC0u, 0x18FFC8u)) {
        return;
    }
    ctx->pc = 0x18FFC8u;
label_18ffc8:
    // 0x18ffc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ffc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ffcc:
    // 0x18ffcc: 0x3e00008  jr          $ra
    ctx->pc = 0x18FFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFCCu;
        // 0x18ffd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FFD4u;
    // 0x18ffd4: 0x0  nop
    ctx->pc = 0x18ffd4u;
    // NOP
    // 0x18ffd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ffdc: 0x0  nop
    ctx->pc = 0x18ffdcu;
    // NOP
    ctx->pc = 0x18ffe0u;
}
