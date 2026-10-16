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

// Function: sub_001D3AC8
// Address: 0x1d3ac8 - 0x1d3bc8
void sub_001D3AC8_0x1d3ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3AC8_0x1d3ac8");
#endif

    switch (ctx->pc) {
        case 0x1d3adcu: goto label_1d3adc;
        case 0x1d3af0u: goto label_1d3af0;
        case 0x1d3afcu: goto label_1d3afc;
        case 0x1d3b08u: goto label_1d3b08;
        case 0x1d3b28u: goto label_1d3b28;
        case 0x1d3b44u: goto label_1d3b44;
        case 0x1d3b60u: goto label_1d3b60;
        case 0x1d3b7cu: goto label_1d3b7c;
        case 0x1d3b98u: goto label_1d3b98;
        case 0x1d3bb8u: goto label_1d3bb8;
        default: break;
    }

    ctx->pc = 0x1d3ac8u;

    // 0x1d3ac8: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x1d3acc: 0x7fb00410  sq          $s0, 0x410($sp)
    ctx->pc = 0x1d3accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 16));
    // 0x1d3ad0: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1d3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1d3ad4: 0xc07cdd4  jal         func_1F3750
    ctx->pc = 0x1D3AD4u;
    SET_GPR_U32(ctx, 31, 0x1D3ADCu);
    ctx->pc = 0x1D3AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AD4u;
    // 0x1d3ad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3750u, 0x1D3AD4u, 0x1D3ADCu)) {
        return;
    }
    ctx->pc = 0x1D3ADCu;
label_1d3adc:
    // 0x1d3adc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d3ae0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d3ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d3ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ae8: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D3AE8u;
    SET_GPR_U32(ctx, 31, 0x1D3AF0u);
    ctx->pc = 0x1D3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AE8u;
    // 0x1d3aec: 0x24a51070  addiu       $a1, $a1, 0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D3AE8u, 0x1D3AF0u)) {
        return;
    }
    ctx->pc = 0x1D3AF0u;
label_1d3af0:
    // 0x1d3af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3af4: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D3AF4u;
    SET_GPR_U32(ctx, 31, 0x1D3AFCu);
    ctx->pc = 0x1D3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AF4u;
    // 0x1d3af8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D3AF4u, 0x1D3AFCu)) {
        return;
    }
    ctx->pc = 0x1D3AFCu;
label_1d3afc:
    // 0x1d3afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b00: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D3B00u;
    SET_GPR_U32(ctx, 31, 0x1D3B08u);
    ctx->pc = 0x1D3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B00u;
    // 0x1d3b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D3B00u, 0x1D3B08u)) {
        return;
    }
    ctx->pc = 0x1D3B08u;
label_1d3b08:
    // 0x1d3b08: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d3b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d3b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b10: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x1d3b14: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d3b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3b18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b20: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3B20u;
    SET_GPR_U32(ctx, 31, 0x1D3B28u);
    ctx->pc = 0x1D3B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B20u;
    // 0x1d3b24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3B20u, 0x1D3B28u)) {
        return;
    }
    ctx->pc = 0x1D3B28u;
label_1d3b28:
    // 0x1d3b28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3b34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b3c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3B44u);
    ctx->pc = 0x1D3B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B3Cu;
    // 0x1d3b40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3B3Cu, 0x1D3B44u)) {
        return;
    }
    ctx->pc = 0x1D3B44u;
label_1d3b44:
    // 0x1d3b44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b58: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3B58u;
    SET_GPR_U32(ctx, 31, 0x1D3B60u);
    ctx->pc = 0x1D3B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B58u;
    // 0x1d3b5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3B58u, 0x1D3B60u)) {
        return;
    }
    ctx->pc = 0x1D3B60u;
label_1d3b60:
    // 0x1d3b60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d3b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3b6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b74: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3B74u;
    SET_GPR_U32(ctx, 31, 0x1D3B7Cu);
    ctx->pc = 0x1D3B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B74u;
    // 0x1d3b78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3B74u, 0x1D3B7Cu)) {
        return;
    }
    ctx->pc = 0x1D3B7Cu;
label_1d3b7c:
    // 0x1d3b7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b84: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d3b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d3b88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b90: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3B90u;
    SET_GPR_U32(ctx, 31, 0x1D3B98u);
    ctx->pc = 0x1D3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B90u;
    // 0x1d3b94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3B90u, 0x1D3B98u)) {
        return;
    }
    ctx->pc = 0x1D3B98u;
label_1d3b98:
    // 0x1d3b98: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d3b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d3b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ba0: 0x24c60ec0  addiu       $a2, $a2, 0xEC0
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3776));
    // 0x1d3ba4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d3ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d3ba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3bacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bb0: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3BB0u;
    SET_GPR_U32(ctx, 31, 0x1D3BB8u);
    ctx->pc = 0x1D3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BB0u;
    // 0x1d3bb4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3BB0u, 0x1D3BB8u)) {
        return;
    }
    ctx->pc = 0x1D3BB8u;
label_1d3bb8:
    // 0x1d3bb8: 0x7bb00410  lq          $s0, 0x410($sp)
    ctx->pc = 0x1d3bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1d3bbc: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1d3bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1d3bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BC0u;
        // 0x1d3bc4: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3BC8u;
}
