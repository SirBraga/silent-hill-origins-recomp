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

// Function: sub_0010AF48
// Address: 0x10af48 - 0x10afe0
void sub_0010AF48_0x10af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AF48_0x10af48");
#endif

    switch (ctx->pc) {
        case 0x10af6cu: goto label_10af6c;
        case 0x10af78u: goto label_10af78;
        case 0x10af84u: goto label_10af84;
        case 0x10af90u: goto label_10af90;
        case 0x10afa4u: goto label_10afa4;
        case 0x10afb4u: goto label_10afb4;
        case 0x10afc4u: goto label_10afc4;
        case 0x10afd4u: goto label_10afd4;
        default: break;
    }

    ctx->pc = 0x10af48u;

    // 0x10af48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10af4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10af4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10af50: 0x14a20020  bne         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10AF50u;
    {
        const bool branch_taken_0x10af50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF50u;
        // 0x10af54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af50) {
            ctx->pc = 0x10AFD4u;
            goto label_10afd4;
        }
    }
    ctx->pc = 0x10AF58u;
    // 0x10af58: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x10AF58u;
    {
        const bool branch_taken_0x10af58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10af58) {
            ctx->pc = 0x10AF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AF58u;
            // 0x10af5c: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AF98u;
            goto label_10af98;
        }
    }
    ctx->pc = 0x10AF60u;
    // 0x10af60: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10af60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10af64: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10AF64u;
    SET_GPR_U32(ctx, 31, 0x10AF6Cu);
    ctx->pc = 0x10AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF64u;
    // 0x10af68: 0x248442d0  addiu       $a0, $a0, 0x42D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10AF64u, 0x10AF6Cu)) {
        return;
    }
    ctx->pc = 0x10AF6Cu;
label_10af6c:
    // 0x10af6c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10af70: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10AF70u;
    SET_GPR_U32(ctx, 31, 0x10AF78u);
    ctx->pc = 0x10AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF70u;
    // 0x10af74: 0x248442d8  addiu       $a0, $a0, 0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10AF70u, 0x10AF78u)) {
        return;
    }
    ctx->pc = 0x10AF78u;
label_10af78:
    // 0x10af78: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10af78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10af7c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10AF7Cu;
    SET_GPR_U32(ctx, 31, 0x10AF84u);
    ctx->pc = 0x10AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF7Cu;
    // 0x10af80: 0x248442e0  addiu       $a0, $a0, 0x42E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10AF7Cu, 0x10AF84u)) {
        return;
    }
    ctx->pc = 0x10AF84u;
label_10af84:
    // 0x10af84: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10af84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10af88: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10AF88u;
    SET_GPR_U32(ctx, 31, 0x10AF90u);
    ctx->pc = 0x10AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF88u;
    // 0x10af8c: 0x248442e8  addiu       $a0, $a0, 0x42E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10AF88u, 0x10AF90u)) {
        return;
    }
    ctx->pc = 0x10AF90u;
label_10af90:
    // 0x10af90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10AF90u;
    {
        const bool branch_taken_0x10af90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF90u;
        // 0x10af94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af90) {
            ctx->pc = 0x10AFD8u;
            goto label_10afd8;
        }
    }
    ctx->pc = 0x10AF98u;
label_10af98:
    // 0x10af98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10af98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10af9c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10AF9Cu;
    SET_GPR_U32(ctx, 31, 0x10AFA4u);
    ctx->pc = 0x10AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF9Cu;
    // 0x10afa0: 0x248442e8  addiu       $a0, $a0, 0x42E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10AF9Cu, 0x10AFA4u)) {
        return;
    }
    ctx->pc = 0x10AFA4u;
label_10afa4:
    // 0x10afa4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10afa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10afa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10afac: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10AFACu;
    SET_GPR_U32(ctx, 31, 0x10AFB4u);
    ctx->pc = 0x10AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFACu;
    // 0x10afb0: 0x248442e0  addiu       $a0, $a0, 0x42E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10AFACu, 0x10AFB4u)) {
        return;
    }
    ctx->pc = 0x10AFB4u;
label_10afb4:
    // 0x10afb4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10afb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10afbc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10AFBCu;
    SET_GPR_U32(ctx, 31, 0x10AFC4u);
    ctx->pc = 0x10AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFBCu;
    // 0x10afc0: 0x248442d8  addiu       $a0, $a0, 0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10AFBCu, 0x10AFC4u)) {
        return;
    }
    ctx->pc = 0x10AFC4u;
label_10afc4:
    // 0x10afc4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10afc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10afcc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10AFCCu;
    SET_GPR_U32(ctx, 31, 0x10AFD4u);
    ctx->pc = 0x10AFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFCCu;
    // 0x10afd0: 0x248442d0  addiu       $a0, $a0, 0x42D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10AFCCu, 0x10AFD4u)) {
        return;
    }
    ctx->pc = 0x10AFD4u;
label_10afd4:
    // 0x10afd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10afd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10afd8:
    // 0x10afd8: 0x3e00008  jr          $ra
    ctx->pc = 0x10AFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFD8u;
        // 0x10afdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AFE0u;
}
