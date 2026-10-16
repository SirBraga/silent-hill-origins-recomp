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

// Function: sub_0014ADE8
// Address: 0x14ade8 - 0x14af08
void sub_0014ADE8_0x14ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ADE8_0x14ade8");
#endif

    switch (ctx->pc) {
        case 0x14ae44u: goto label_14ae44;
        case 0x14ae4cu: goto label_14ae4c;
        case 0x14ae54u: goto label_14ae54;
        case 0x14ae68u: goto label_14ae68;
        case 0x14ae70u: goto label_14ae70;
        case 0x14ae7cu: goto label_14ae7c;
        case 0x14ae8cu: goto label_14ae8c;
        case 0x14aea0u: goto label_14aea0;
        case 0x14aea8u: goto label_14aea8;
        case 0x14aeb4u: goto label_14aeb4;
        case 0x14aebcu: goto label_14aebc;
        case 0x14aeccu: goto label_14aecc;
        case 0x14aed8u: goto label_14aed8;
        case 0x14aee4u: goto label_14aee4;
        default: break;
    }

    ctx->pc = 0x14ade8u;

    // 0x14ade8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14ade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14adec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14adecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14adf0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14adf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14adf4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14adf8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14adfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14adfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14ae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14ae04: 0x24421c08  addiu       $v0, $v0, 0x1C08
    ctx->pc = 0x14ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7176));
    // 0x14ae08: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14ae0c: 0x24631c28  addiu       $v1, $v1, 0x1C28
    ctx->pc = 0x14ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7208));
    // 0x14ae10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14ae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14ae14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ae18: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x14ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x14ae1c: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x14ae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x14ae20: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x14ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x14ae24: 0x8c6284dc  lw          $v0, -0x7B24($v1)
    ctx->pc = 0x14ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3384DCu));
    // 0x14ae28: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AE28u;
    {
        const bool branch_taken_0x14ae28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x14AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE28u;
        // 0x14ae2c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae28) {
            ctx->pc = 0x14AE34u;
            goto label_14ae34;
        }
    }
    ctx->pc = 0x14AE30u;
    // 0x14ae30: 0xac6084dc  sw          $zero, -0x7B24($v1)
    ctx->pc = 0x14ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935772), GPR_U32(ctx, 0));
label_14ae34:
    // 0x14ae34: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x14ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x14ae38: 0x26710038  addiu       $s1, $s3, 0x38
    ctx->pc = 0x14ae38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x14ae3c: 0xc07f846  jal         func_1FE118
    ctx->pc = 0x14AE3Cu;
    SET_GPR_U32(ctx, 31, 0x14AE44u);
    ctx->pc = 0x14AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE3Cu;
    // 0x14ae40: 0x2672005c  addiu       $s2, $s3, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE118u, 0x14AE3Cu, 0x14AE44u)) {
        return;
    }
    ctx->pc = 0x14AE44u;
label_14ae44:
    // 0x14ae44: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14AE44u;
    SET_GPR_U32(ctx, 31, 0x14AE4Cu);
    ctx->pc = 0x14AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE44u;
    // 0x14ae48: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14AE44u, 0x14AE4Cu)) {
        return;
    }
    ctx->pc = 0x14AE4Cu;
label_14ae4c:
    // 0x14ae4c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14AE4Cu;
    SET_GPR_U32(ctx, 31, 0x14AE54u);
    ctx->pc = 0x14AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE4Cu;
    // 0x14ae50: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14AE4Cu, 0x14AE54u)) {
        return;
    }
    ctx->pc = 0x14AE54u;
label_14ae54:
    // 0x14ae54: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x14ae54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x14ae58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae5c: 0x2610eed0  addiu       $s0, $s0, -0x1130
    ctx->pc = 0x14ae5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962896));
    // 0x14ae60: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14AE60u;
    SET_GPR_U32(ctx, 31, 0x14AE68u);
    ctx->pc = 0x14AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE60u;
    // 0x14ae64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14AE60u, 0x14AE68u)) {
        return;
    }
    ctx->pc = 0x14AE68u;
label_14ae68:
    // 0x14ae68: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14AE68u;
    SET_GPR_U32(ctx, 31, 0x14AE70u);
    ctx->pc = 0x14AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE68u;
    // 0x14ae6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14AE68u, 0x14AE70u)) {
        return;
    }
    ctx->pc = 0x14AE70u;
label_14ae70:
    // 0x14ae70: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14ae74: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14AE74u;
    SET_GPR_U32(ctx, 31, 0x14AE7Cu);
    ctx->pc = 0x14AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE74u;
    // 0x14ae78: 0x2484eed8  addiu       $a0, $a0, -0x1128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14AE74u, 0x14AE7Cu)) {
        return;
    }
    ctx->pc = 0x14AE7Cu;
label_14ae7c:
    // 0x14ae7c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14ae80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae84: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14AE84u;
    SET_GPR_U32(ctx, 31, 0x14AE8Cu);
    ctx->pc = 0x14AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE84u;
    // 0x14ae88: 0x24a5eea0  addiu       $a1, $a1, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14AE84u, 0x14AE8Cu)) {
        return;
    }
    ctx->pc = 0x14AE8Cu;
label_14ae8c:
    // 0x14ae8c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x14ae8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x14ae90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae94: 0x2610eee0  addiu       $s0, $s0, -0x1120
    ctx->pc = 0x14ae94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962912));
    // 0x14ae98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14AE98u;
    SET_GPR_U32(ctx, 31, 0x14AEA0u);
    ctx->pc = 0x14AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE98u;
    // 0x14ae9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14AE98u, 0x14AEA0u)) {
        return;
    }
    ctx->pc = 0x14AEA0u;
label_14aea0:
    // 0x14aea0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14AEA0u;
    SET_GPR_U32(ctx, 31, 0x14AEA8u);
    ctx->pc = 0x14AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEA0u;
    // 0x14aea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14AEA0u, 0x14AEA8u)) {
        return;
    }
    ctx->pc = 0x14AEA8u;
label_14aea8:
    // 0x14aea8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14aea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aeac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14AEACu;
    SET_GPR_U32(ctx, 31, 0x14AEB4u);
    ctx->pc = 0x14AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEACu;
    // 0x14aeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14AEACu, 0x14AEB4u)) {
        return;
    }
    ctx->pc = 0x14AEB4u;
label_14aeb4:
    // 0x14aeb4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14AEB4u;
    SET_GPR_U32(ctx, 31, 0x14AEBCu);
    ctx->pc = 0x14AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEB4u;
    // 0x14aeb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14AEB4u, 0x14AEBCu)) {
        return;
    }
    ctx->pc = 0x14AEBCu;
label_14aebc:
    // 0x14aebc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x14aec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aec4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14AEC4u;
    SET_GPR_U32(ctx, 31, 0x14AECCu);
    ctx->pc = 0x14AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEC4u;
    // 0x14aec8: 0x24a58878  addiu       $a1, $a1, -0x7788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14AEC4u, 0x14AECCu)) {
        return;
    }
    ctx->pc = 0x14AECCu;
label_14aecc:
    // 0x14aecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aed0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14AED0u;
    SET_GPR_U32(ctx, 31, 0x14AED8u);
    ctx->pc = 0x14AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AED0u;
    // 0x14aed4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14AED0u, 0x14AED8u)) {
        return;
    }
    ctx->pc = 0x14AED8u;
label_14aed8:
    // 0x14aed8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14aed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aedc: 0xc04f084  jal         func_13C210
    ctx->pc = 0x14AEDCu;
    SET_GPR_U32(ctx, 31, 0x14AEE4u);
    ctx->pc = 0x14AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEDCu;
    // 0x14aee0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x14AEDCu, 0x14AEE4u)) {
        return;
    }
    ctx->pc = 0x14AEE4u;
label_14aee4:
    // 0x14aee4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14aee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14aee8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14aee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aeec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14aeecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14aef0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14aef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aef4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14aef4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14aef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aefc: 0x3e00008  jr          $ra
    ctx->pc = 0x14AEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEFCu;
        // 0x14af00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AF04u;
    // 0x14af04: 0x0  nop
    ctx->pc = 0x14af04u;
    // NOP
    ctx->pc = 0x14af08u;
}
