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

// Function: sub_001AFEC0
// Address: 0x1afec0 - 0x1affe0
void sub_001AFEC0_0x1afec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFEC0_0x1afec0");
#endif

    switch (ctx->pc) {
        case 0x1afef4u: goto label_1afef4;
        case 0x1aff0cu: goto label_1aff0c;
        case 0x1aff24u: goto label_1aff24;
        case 0x1aff50u: goto label_1aff50;
        case 0x1aff58u: goto label_1aff58;
        case 0x1aff60u: goto label_1aff60;
        case 0x1aff70u: goto label_1aff70;
        case 0x1aff80u: goto label_1aff80;
        case 0x1aff94u: goto label_1aff94;
        case 0x1affa8u: goto label_1affa8;
        case 0x1affc0u: goto label_1affc0;
        default: break;
    }

    ctx->pc = 0x1afec0u;

    // 0x1afec0: 0x27bdf130  addiu       $sp, $sp, -0xED0
    ctx->pc = 0x1afec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963504));
    // 0x1afec4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1afec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1afec8: 0x7fb00ec0  sq          $s0, 0xEC0($sp)
    ctx->pc = 0x1afec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3776), GPR_VEC(ctx, 16));
    // 0x1afecc: 0x7fb20ea0  sq          $s2, 0xEA0($sp)
    ctx->pc = 0x1afeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3744), GPR_VEC(ctx, 18));
    // 0x1afed0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1afed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1afed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afedc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1afedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afee0: 0x7fb10eb0  sq          $s1, 0xEB0($sp)
    ctx->pc = 0x1afee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3760), GPR_VEC(ctx, 17));
    // 0x1afee4: 0x7fb30e90  sq          $s3, 0xE90($sp)
    ctx->pc = 0x1afee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3728), GPR_VEC(ctx, 19));
    // 0x1afee8: 0xffbf0e80  sd          $ra, 0xE80($sp)
    ctx->pc = 0x1afee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3712), GPR_U64(ctx, 31));
    // 0x1afeec: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AFEECu;
    SET_GPR_U32(ctx, 31, 0x1AFEF4u);
    ctx->pc = 0x1AFEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEECu;
    // 0x1afef0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AFEECu, 0x1AFEF4u)) {
        return;
    }
    ctx->pc = 0x1AFEF4u;
label_1afef4:
    // 0x1afef4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1afef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1afef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afefc: 0x24c6bf60  addiu       $a2, $a2, -0x40A0
    ctx->pc = 0x1afefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950752));
    // 0x1aff00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aff00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff04: 0xc07cc10  jal         func_1F3040
    ctx->pc = 0x1AFF04u;
    SET_GPR_U32(ctx, 31, 0x1AFF0Cu);
    ctx->pc = 0x1AFF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF04u;
    // 0x1aff08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3040u, 0x1AFF04u, 0x1AFF0Cu)) {
        return;
    }
    ctx->pc = 0x1AFF0Cu;
label_1aff0c:
    // 0x1aff0c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AFF0Cu;
    {
        const bool branch_taken_0x1aff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF0Cu;
        // 0x1aff10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff0c) {
            ctx->pc = 0x1AFFC0u;
            goto label_1affc0;
        }
    }
    ctx->pc = 0x1AFF14u;
    // 0x1aff14: 0xafa00e70  sw          $zero, 0xE70($sp)
    ctx->pc = 0x1aff14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3696), GPR_U32(ctx, 0));
    // 0x1aff18: 0x27a50e70  addiu       $a1, $sp, 0xE70
    ctx->pc = 0x1aff18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3696));
    // 0x1aff1c: 0xc0814fa  jal         func_2053E8
    ctx->pc = 0x1AFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1AFF24u);
    ctx->pc = 0x1AFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF1Cu;
    // 0x1aff20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2053E8u, 0x1AFF1Cu, 0x1AFF24u)) {
        return;
    }
    ctx->pc = 0x1AFF24u;
label_1aff24:
    // 0x1aff24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aff24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff28: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AFF28u;
    {
        const bool branch_taken_0x1aff28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF28u;
        // 0x1aff2c: 0x8fa20e70  lw          $v0, 0xE70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff28) {
            ctx->pc = 0x1AFFC0u;
            goto label_1affc0;
        }
    }
    ctx->pc = 0x1AFF30u;
    // 0x1aff30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1aff30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1aff34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aff34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1aff38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1aff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aff40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aff40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff44: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1aff44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aff48: 0xc065dea  jal         func_1977A8
    ctx->pc = 0x1AFF48u;
    SET_GPR_U32(ctx, 31, 0x1AFF50u);
    ctx->pc = 0x1AFF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF48u;
    // 0x1aff4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1977A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1977A8u, 0x1AFF48u, 0x1AFF50u)) {
        return;
    }
    ctx->pc = 0x1AFF50u;
label_1aff50:
    // 0x1aff50: 0x3c13006a  lui         $s3, 0x6A
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)106 << 16));
    // 0x1aff54: 0x0  nop
    ctx->pc = 0x1aff54u;
    // NOP
label_1aff58:
    // 0x1aff58: 0xc065cba  jal         func_1972E8
    ctx->pc = 0x1AFF58u;
    SET_GPR_U32(ctx, 31, 0x1AFF60u);
    ctx->pc = 0x1AFF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF58u;
    // 0x1aff5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1972E8u, 0x1AFF58u, 0x1AFF60u)) {
        return;
    }
    ctx->pc = 0x1AFF60u;
label_1aff60:
    // 0x1aff60: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AFF60u;
    {
        const bool branch_taken_0x1aff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF60u;
        // 0x1aff64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff60) {
            ctx->pc = 0x1AFFB4u;
            goto label_1affb4;
        }
    }
    ctx->pc = 0x1AFF68u;
    // 0x1aff68: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1AFF68u;
    SET_GPR_U32(ctx, 31, 0x1AFF70u);
    ctx->pc = 0x1AFF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF68u;
    // 0x1aff6c: 0x2665bf68  addiu       $a1, $s3, -0x4098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1AFF68u, 0x1AFF70u)) {
        return;
    }
    ctx->pc = 0x1AFF70u;
label_1aff70:
    // 0x1aff70: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AFF70u;
    {
        const bool branch_taken_0x1aff70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF70u;
        // 0x1aff74: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff70) {
            ctx->pc = 0x1AFFB0u;
            goto label_1affb0;
        }
    }
    ctx->pc = 0x1AFF78u;
    // 0x1aff78: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1AFF78u;
    SET_GPR_U32(ctx, 31, 0x1AFF80u);
    ctx->pc = 0x1AFF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF78u;
    // 0x1aff7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1AFF78u, 0x1AFF80u)) {
        return;
    }
    ctx->pc = 0x1AFF80u;
label_1aff80:
    // 0x1aff80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aff80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aff84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aff88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff8c: 0xc070ea0  jal         func_1C3A80
    ctx->pc = 0x1AFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFF94u);
    ctx->pc = 0x1AFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF8Cu;
    // 0x1aff90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3A80u, 0x1AFF8Cu, 0x1AFF94u)) {
        return;
    }
    ctx->pc = 0x1AFF94u;
label_1aff94:
    // 0x1aff94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aff94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affa0: 0xc06bff8  jal         func_1AFFE0
    ctx->pc = 0x1AFFA0u;
    SET_GPR_U32(ctx, 31, 0x1AFFA8u);
    ctx->pc = 0x1AFFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFA0u;
    // 0x1affa4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFFE0u, 0x1AFFA0u, 0x1AFFA8u)) {
        return;
    }
    ctx->pc = 0x1AFFA8u;
label_1affa8:
    // 0x1affa8: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AFFA8u;
    {
        const bool branch_taken_0x1affa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1affa8) {
            ctx->pc = 0x1AFF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff58;
        }
    }
    ctx->pc = 0x1AFFB0u;
label_1affb0:
    // 0x1affb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1affb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1affb4:
    // 0x1affb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1affb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affb8: 0xc065df8  jal         func_1977E0
    ctx->pc = 0x1AFFB8u;
    SET_GPR_U32(ctx, 31, 0x1AFFC0u);
    ctx->pc = 0x1AFFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFB8u;
    // 0x1affbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1977E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1977E0u, 0x1AFFB8u, 0x1AFFC0u)) {
        return;
    }
    ctx->pc = 0x1AFFC0u;
label_1affc0:
    // 0x1affc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1affc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affc4: 0x7bb00ec0  lq          $s0, 0xEC0($sp)
    ctx->pc = 0x1affc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3776)));
    // 0x1affc8: 0x7bb10eb0  lq          $s1, 0xEB0($sp)
    ctx->pc = 0x1affc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3760)));
    // 0x1affcc: 0x7bb20ea0  lq          $s2, 0xEA0($sp)
    ctx->pc = 0x1affccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3744)));
    // 0x1affd0: 0x7bb30e90  lq          $s3, 0xE90($sp)
    ctx->pc = 0x1affd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3728)));
    // 0x1affd4: 0xdfbf0e80  ld          $ra, 0xE80($sp)
    ctx->pc = 0x1affd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3712)));
    // 0x1affd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFD8u;
        // 0x1affdc: 0x27bd0ed0  addiu       $sp, $sp, 0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFFE0u;
}
