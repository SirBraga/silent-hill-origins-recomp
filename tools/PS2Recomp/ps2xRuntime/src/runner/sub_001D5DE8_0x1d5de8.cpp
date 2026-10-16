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

// Function: sub_001D5DE8
// Address: 0x1d5de8 - 0x1d5ed8
void sub_001D5DE8_0x1d5de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5DE8_0x1d5de8");
#endif

    switch (ctx->pc) {
        case 0x1d5e0cu: goto label_1d5e0c;
        case 0x1d5e1cu: goto label_1d5e1c;
        case 0x1d5e30u: goto label_1d5e30;
        case 0x1d5e4cu: goto label_1d5e4c;
        case 0x1d5e68u: goto label_1d5e68;
        case 0x1d5e84u: goto label_1d5e84;
        case 0x1d5ea4u: goto label_1d5ea4;
        case 0x1d5ec0u: goto label_1d5ec0;
        default: break;
    }

    ctx->pc = 0x1d5de8u;

    // 0x1d5de8: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x1d5de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x1d5dec: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x1d5decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
    // 0x1d5df0: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x1d5df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
    // 0x1d5df4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dfc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d5e00: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1d5e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1d5e04: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D5E04u;
    SET_GPR_U32(ctx, 31, 0x1D5E0Cu);
    ctx->pc = 0x1D5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E04u;
    // 0x1d5e08: 0x24a50ff8  addiu       $a1, $a1, 0xFF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D5E04u, 0x1D5E0Cu)) {
        return;
    }
    ctx->pc = 0x1D5E0Cu;
label_1d5e0c:
    // 0x1d5e0c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d5e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e14: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D5E14u;
    SET_GPR_U32(ctx, 31, 0x1D5E1Cu);
    ctx->pc = 0x1D5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E14u;
    // 0x1d5e18: 0x24a51018  addiu       $a1, $a1, 0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D5E14u, 0x1D5E1Cu)) {
        return;
    }
    ctx->pc = 0x1D5E1Cu;
label_1d5e1c:
    // 0x1d5e1c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d5e20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e28: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D5E28u;
    SET_GPR_U32(ctx, 31, 0x1D5E30u);
    ctx->pc = 0x1D5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E28u;
    // 0x1d5e2c: 0x24a50fd8  addiu       $a1, $a1, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D5E28u, 0x1D5E30u)) {
        return;
    }
    ctx->pc = 0x1D5E30u;
label_1d5e30:
    // 0x1d5e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e44: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D5E44u;
    SET_GPR_U32(ctx, 31, 0x1D5E4Cu);
    ctx->pc = 0x1D5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E44u;
    // 0x1d5e48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D5E44u, 0x1D5E4Cu)) {
        return;
    }
    ctx->pc = 0x1D5E4Cu;
label_1d5e4c:
    // 0x1d5e4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d5e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5e58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5e5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e60: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D5E60u;
    SET_GPR_U32(ctx, 31, 0x1D5E68u);
    ctx->pc = 0x1D5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E60u;
    // 0x1d5e64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D5E60u, 0x1D5E68u)) {
        return;
    }
    ctx->pc = 0x1D5E68u;
label_1d5e68:
    // 0x1d5e68: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d5e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e7c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E84u);
    ctx->pc = 0x1D5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E7Cu;
    // 0x1d5e80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D5E7Cu, 0x1D5E84u)) {
        return;
    }
    ctx->pc = 0x1D5E84u;
label_1d5e84:
    // 0x1d5e84: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d5e84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d5e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e8c: 0x24c61038  addiu       $a2, $a2, 0x1038
    ctx->pc = 0x1d5e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4152));
    // 0x1d5e90: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d5e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e9c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5EA4u);
    ctx->pc = 0x1D5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E9Cu;
    // 0x1d5ea0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D5E9Cu, 0x1D5EA4u)) {
        return;
    }
    ctx->pc = 0x1D5EA4u;
label_1d5ea4:
    // 0x1d5ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eac: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d5eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb8: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D5EB8u;
    SET_GPR_U32(ctx, 31, 0x1D5EC0u);
    ctx->pc = 0x1D5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EB8u;
    // 0x1d5ebc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D5EB8u, 0x1D5EC0u)) {
        return;
    }
    ctx->pc = 0x1D5EC0u;
label_1d5ec0:
    // 0x1d5ec0: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x1d5ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1d5ec4: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x1d5ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1d5ec8: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1d5ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ECCu;
        // 0x1d5ed0: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5ED4u;
    // 0x1d5ed4: 0x0  nop
    ctx->pc = 0x1d5ed4u;
    // NOP
    ctx->pc = 0x1d5ed8u;
}
