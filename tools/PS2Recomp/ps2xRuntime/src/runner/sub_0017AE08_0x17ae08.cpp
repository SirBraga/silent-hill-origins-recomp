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

// Function: sub_0017AE08
// Address: 0x17ae08 - 0x17af70
void sub_0017AE08_0x17ae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AE08_0x17ae08");
#endif

    switch (ctx->pc) {
        case 0x17ae2cu: goto label_17ae2c;
        case 0x17ae38u: goto label_17ae38;
        case 0x17ae44u: goto label_17ae44;
        case 0x17ae50u: goto label_17ae50;
        case 0x17ae5cu: goto label_17ae5c;
        case 0x17ae68u: goto label_17ae68;
        case 0x17ae74u: goto label_17ae74;
        case 0x17ae80u: goto label_17ae80;
        case 0x17ae8cu: goto label_17ae8c;
        case 0x17ae98u: goto label_17ae98;
        case 0x17aea4u: goto label_17aea4;
        case 0x17aeb8u: goto label_17aeb8;
        case 0x17aec8u: goto label_17aec8;
        case 0x17aed8u: goto label_17aed8;
        case 0x17aee8u: goto label_17aee8;
        case 0x17aef8u: goto label_17aef8;
        case 0x17af08u: goto label_17af08;
        case 0x17af18u: goto label_17af18;
        case 0x17af28u: goto label_17af28;
        case 0x17af38u: goto label_17af38;
        case 0x17af48u: goto label_17af48;
        case 0x17af58u: goto label_17af58;
        default: break;
    }

    ctx->pc = 0x17ae08u;

    // 0x17ae08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ae08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ae0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17ae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17ae10: 0x14a20051  bne         $a1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x17AE10u;
    {
        const bool branch_taken_0x17ae10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE10u;
        // 0x17ae14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae10) {
            ctx->pc = 0x17AF58u;
            goto label_17af58;
        }
    }
    ctx->pc = 0x17AE18u;
    // 0x17ae18: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x17AE18u;
    {
        const bool branch_taken_0x17ae18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ae18) {
            ctx->pc = 0x17AE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AE18u;
            // 0x17ae1c: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AEACu;
            goto label_17aeac;
        }
    }
    ctx->pc = 0x17AE20u;
    // 0x17ae20: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae24: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE24u;
    SET_GPR_U32(ctx, 31, 0x17AE2Cu);
    ctx->pc = 0x17AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE24u;
    // 0x17ae28: 0x2484f880  addiu       $a0, $a0, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE24u, 0x17AE2Cu)) {
        return;
    }
    ctx->pc = 0x17AE2Cu;
label_17ae2c:
    // 0x17ae2c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae30: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE30u;
    SET_GPR_U32(ctx, 31, 0x17AE38u);
    ctx->pc = 0x17AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE30u;
    // 0x17ae34: 0x2484f888  addiu       $a0, $a0, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE30u, 0x17AE38u)) {
        return;
    }
    ctx->pc = 0x17AE38u;
label_17ae38:
    // 0x17ae38: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae3c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE3Cu;
    SET_GPR_U32(ctx, 31, 0x17AE44u);
    ctx->pc = 0x17AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE3Cu;
    // 0x17ae40: 0x2484f890  addiu       $a0, $a0, -0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE3Cu, 0x17AE44u)) {
        return;
    }
    ctx->pc = 0x17AE44u;
label_17ae44:
    // 0x17ae44: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae48: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE48u;
    SET_GPR_U32(ctx, 31, 0x17AE50u);
    ctx->pc = 0x17AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE48u;
    // 0x17ae4c: 0x2484f898  addiu       $a0, $a0, -0x768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE48u, 0x17AE50u)) {
        return;
    }
    ctx->pc = 0x17AE50u;
label_17ae50:
    // 0x17ae50: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae54: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE54u;
    SET_GPR_U32(ctx, 31, 0x17AE5Cu);
    ctx->pc = 0x17AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE54u;
    // 0x17ae58: 0x2484f8a0  addiu       $a0, $a0, -0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE54u, 0x17AE5Cu)) {
        return;
    }
    ctx->pc = 0x17AE5Cu;
label_17ae5c:
    // 0x17ae5c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae60: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE60u;
    SET_GPR_U32(ctx, 31, 0x17AE68u);
    ctx->pc = 0x17AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE60u;
    // 0x17ae64: 0x2484f8a8  addiu       $a0, $a0, -0x758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE60u, 0x17AE68u)) {
        return;
    }
    ctx->pc = 0x17AE68u;
label_17ae68:
    // 0x17ae68: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae6c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE6Cu;
    SET_GPR_U32(ctx, 31, 0x17AE74u);
    ctx->pc = 0x17AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE6Cu;
    // 0x17ae70: 0x2484f8b0  addiu       $a0, $a0, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE6Cu, 0x17AE74u)) {
        return;
    }
    ctx->pc = 0x17AE74u;
label_17ae74:
    // 0x17ae74: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae78: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE78u;
    SET_GPR_U32(ctx, 31, 0x17AE80u);
    ctx->pc = 0x17AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE78u;
    // 0x17ae7c: 0x2484f8b8  addiu       $a0, $a0, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE78u, 0x17AE80u)) {
        return;
    }
    ctx->pc = 0x17AE80u;
label_17ae80:
    // 0x17ae80: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae84: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE84u;
    SET_GPR_U32(ctx, 31, 0x17AE8Cu);
    ctx->pc = 0x17AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE84u;
    // 0x17ae88: 0x2484f8c0  addiu       $a0, $a0, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE84u, 0x17AE8Cu)) {
        return;
    }
    ctx->pc = 0x17AE8Cu;
label_17ae8c:
    // 0x17ae8c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae90: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE90u;
    SET_GPR_U32(ctx, 31, 0x17AE98u);
    ctx->pc = 0x17AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE90u;
    // 0x17ae94: 0x2484f8c8  addiu       $a0, $a0, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE90u, 0x17AE98u)) {
        return;
    }
    ctx->pc = 0x17AE98u;
label_17ae98:
    // 0x17ae98: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ae9c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17AE9Cu;
    SET_GPR_U32(ctx, 31, 0x17AEA4u);
    ctx->pc = 0x17AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE9Cu;
    // 0x17aea0: 0x2484f8d0  addiu       $a0, $a0, -0x730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17AE9Cu, 0x17AEA4u)) {
        return;
    }
    ctx->pc = 0x17AEA4u;
label_17aea4:
    // 0x17aea4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x17AEA4u;
    {
        const bool branch_taken_0x17aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEA4u;
        // 0x17aea8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aea4) {
            ctx->pc = 0x17AF5Cu;
            goto label_17af5c;
        }
    }
    ctx->pc = 0x17AEACu;
label_17aeac:
    // 0x17aeac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17aeb0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AEB0u;
    SET_GPR_U32(ctx, 31, 0x17AEB8u);
    ctx->pc = 0x17AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEB0u;
    // 0x17aeb4: 0x2484f8d0  addiu       $a0, $a0, -0x730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AEB0u, 0x17AEB8u)) {
        return;
    }
    ctx->pc = 0x17AEB8u;
label_17aeb8:
    // 0x17aeb8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17aebc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17aec0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AEC0u;
    SET_GPR_U32(ctx, 31, 0x17AEC8u);
    ctx->pc = 0x17AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEC0u;
    // 0x17aec4: 0x2484f8c8  addiu       $a0, $a0, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AEC0u, 0x17AEC8u)) {
        return;
    }
    ctx->pc = 0x17AEC8u;
label_17aec8:
    // 0x17aec8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17aecc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17aed0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AED0u;
    SET_GPR_U32(ctx, 31, 0x17AED8u);
    ctx->pc = 0x17AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AED0u;
    // 0x17aed4: 0x2484f8c0  addiu       $a0, $a0, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AED0u, 0x17AED8u)) {
        return;
    }
    ctx->pc = 0x17AED8u;
label_17aed8:
    // 0x17aed8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17aedc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17aee0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AEE0u;
    SET_GPR_U32(ctx, 31, 0x17AEE8u);
    ctx->pc = 0x17AEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEE0u;
    // 0x17aee4: 0x2484f8b8  addiu       $a0, $a0, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AEE0u, 0x17AEE8u)) {
        return;
    }
    ctx->pc = 0x17AEE8u;
label_17aee8:
    // 0x17aee8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17aeec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17aef0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AEF0u;
    SET_GPR_U32(ctx, 31, 0x17AEF8u);
    ctx->pc = 0x17AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEF0u;
    // 0x17aef4: 0x2484f8b0  addiu       $a0, $a0, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AEF0u, 0x17AEF8u)) {
        return;
    }
    ctx->pc = 0x17AEF8u;
label_17aef8:
    // 0x17aef8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17aefc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af00: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AF00u;
    SET_GPR_U32(ctx, 31, 0x17AF08u);
    ctx->pc = 0x17AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF00u;
    // 0x17af04: 0x2484f8a8  addiu       $a0, $a0, -0x758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AF00u, 0x17AF08u)) {
        return;
    }
    ctx->pc = 0x17AF08u;
label_17af08:
    // 0x17af08: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17af08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17af0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af10: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AF10u;
    SET_GPR_U32(ctx, 31, 0x17AF18u);
    ctx->pc = 0x17AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF10u;
    // 0x17af14: 0x2484f8a0  addiu       $a0, $a0, -0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AF10u, 0x17AF18u)) {
        return;
    }
    ctx->pc = 0x17AF18u;
label_17af18:
    // 0x17af18: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17af18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17af1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af20: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AF20u;
    SET_GPR_U32(ctx, 31, 0x17AF28u);
    ctx->pc = 0x17AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF20u;
    // 0x17af24: 0x2484f898  addiu       $a0, $a0, -0x768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AF20u, 0x17AF28u)) {
        return;
    }
    ctx->pc = 0x17AF28u;
label_17af28:
    // 0x17af28: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17af28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17af2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af30: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AF30u;
    SET_GPR_U32(ctx, 31, 0x17AF38u);
    ctx->pc = 0x17AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF30u;
    // 0x17af34: 0x2484f890  addiu       $a0, $a0, -0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AF30u, 0x17AF38u)) {
        return;
    }
    ctx->pc = 0x17AF38u;
label_17af38:
    // 0x17af38: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17af38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17af3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af40: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AF40u;
    SET_GPR_U32(ctx, 31, 0x17AF48u);
    ctx->pc = 0x17AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF40u;
    // 0x17af44: 0x2484f888  addiu       $a0, $a0, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AF40u, 0x17AF48u)) {
        return;
    }
    ctx->pc = 0x17AF48u;
label_17af48:
    // 0x17af48: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17af48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17af4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af50: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17AF50u;
    SET_GPR_U32(ctx, 31, 0x17AF58u);
    ctx->pc = 0x17AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF50u;
    // 0x17af54: 0x2484f880  addiu       $a0, $a0, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17AF50u, 0x17AF58u)) {
        return;
    }
    ctx->pc = 0x17AF58u;
label_17af58:
    // 0x17af58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17af58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17af5c:
    // 0x17af5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF5Cu;
        // 0x17af60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AF64u;
    // 0x17af64: 0x0  nop
    ctx->pc = 0x17af64u;
    // NOP
    // 0x17af68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17af6c: 0x0  nop
    ctx->pc = 0x17af6cu;
    // NOP
    ctx->pc = 0x17af70u;
}
