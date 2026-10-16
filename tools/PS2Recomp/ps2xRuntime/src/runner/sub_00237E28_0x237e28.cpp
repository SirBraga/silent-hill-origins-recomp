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

// Function: sub_00237E28
// Address: 0x237e28 - 0x237f10
void sub_00237E28_0x237e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237E28_0x237e28");
#endif

    switch (ctx->pc) {
        case 0x237e60u: goto label_237e60;
        case 0x237e88u: goto label_237e88;
        case 0x237e98u: goto label_237e98;
        case 0x237ea8u: goto label_237ea8;
        case 0x237eb8u: goto label_237eb8;
        case 0x237ed8u: goto label_237ed8;
        case 0x237eecu: goto label_237eec;
        default: break;
    }

    ctx->pc = 0x237e28u;

    // 0x237e28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x237e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x237e2c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x237e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x237e30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x237e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x237e34: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x237e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x237e38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x237e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x237e3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x237e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x237e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x237e4c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x237e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237e50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237e54: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x237e54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x237e58: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x237E58u;
    SET_GPR_U32(ctx, 31, 0x237E60u);
    ctx->pc = 0x237E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E58u;
    // 0x237e5c: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x237E58u, 0x237E60u)) {
        return;
    }
    ctx->pc = 0x237E60u;
label_237e60:
    // 0x237e60: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x237E60u;
    {
        const bool branch_taken_0x237e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E60u;
        // 0x237e64: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e60) {
            ctx->pc = 0x237EF4u;
            goto label_237ef4;
        }
    }
    ctx->pc = 0x237E68u;
    // 0x237e68: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x237e68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x237e6c: 0x8c463548  lw          $a2, 0x3548($v0)
    ctx->pc = 0x237e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13640)));
    // 0x237e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e74: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x237e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x237e78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x237e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e7c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x237e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x237e80: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x237E80u;
    SET_GPR_U32(ctx, 31, 0x237E88u);
    ctx->pc = 0x237E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E80u;
    // 0x237e84: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x237E80u, 0x237E88u)) {
        return;
    }
    ctx->pc = 0x237E88u;
label_237e88:
    // 0x237e88: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x237E88u;
    {
        const bool branch_taken_0x237e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E88u;
        // 0x237e8c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e88) {
            ctx->pc = 0x237EF4u;
            goto label_237ef4;
        }
    }
    ctx->pc = 0x237E90u;
    // 0x237e90: 0xc093cd8  jal         func_24F360
    ctx->pc = 0x237E90u;
    SET_GPR_U32(ctx, 31, 0x237E98u);
    ctx->pc = 0x237E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E90u;
    // 0x237e94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F360u, 0x237E90u, 0x237E98u)) {
        return;
    }
    ctx->pc = 0x237E98u;
label_237e98:
    // 0x237e98: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x237E98u;
    {
        const bool branch_taken_0x237e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E98u;
        // 0x237e9c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e98) {
            ctx->pc = 0x237EF4u;
            goto label_237ef4;
        }
    }
    ctx->pc = 0x237EA0u;
    // 0x237ea0: 0xc093cd8  jal         func_24F360
    ctx->pc = 0x237EA0u;
    SET_GPR_U32(ctx, 31, 0x237EA8u);
    ctx->pc = 0x237EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EA0u;
    // 0x237ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F360u, 0x237EA0u, 0x237EA8u)) {
        return;
    }
    ctx->pc = 0x237EA8u;
label_237ea8:
    // 0x237ea8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x237EA8u;
    {
        const bool branch_taken_0x237ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EA8u;
        // 0x237eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ea8) {
            ctx->pc = 0x237EF8u;
            goto label_237ef8;
        }
    }
    ctx->pc = 0x237EB0u;
    // 0x237eb0: 0xc08de00  jal         func_237800
    ctx->pc = 0x237EB0u;
    SET_GPR_U32(ctx, 31, 0x237EB8u);
    ctx->pc = 0x237EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EB0u;
    // 0x237eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x237800u, 0x237EB0u, 0x237EB8u)) {
        return;
    }
    ctx->pc = 0x237EB8u;
label_237eb8:
    // 0x237eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ebc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x237ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x237ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237ec8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x237ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ecc: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x237eccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x237ed0: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x237ED0u;
    SET_GPR_U32(ctx, 31, 0x237ED8u);
    ctx->pc = 0x237ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237ED0u;
    // 0x237ed4: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x237ED0u, 0x237ED8u)) {
        return;
    }
    ctx->pc = 0x237ED8u;
label_237ed8:
    // 0x237ed8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x237ED8u;
    {
        const bool branch_taken_0x237ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ED8u;
        // 0x237edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ed8) {
            ctx->pc = 0x237EF4u;
            goto label_237ef4;
        }
    }
    ctx->pc = 0x237EE0u;
    // 0x237ee0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ee4: 0xc08de08  jal         func_237820
    ctx->pc = 0x237EE4u;
    SET_GPR_U32(ctx, 31, 0x237EECu);
    ctx->pc = 0x237EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EE4u;
    // 0x237ee8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x237820u, 0x237EE4u, 0x237EECu)) {
        return;
    }
    ctx->pc = 0x237EECu;
label_237eec:
    // 0x237eec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x237EECu;
    {
        const bool branch_taken_0x237eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EECu;
        // 0x237ef0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237eec) {
            ctx->pc = 0x237EF8u;
            goto label_237ef8;
        }
    }
    ctx->pc = 0x237EF4u;
label_237ef4:
    // 0x237ef4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237ef8:
    // 0x237ef8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x237ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237efc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x237efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237f00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x237f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237f08: 0x3e00008  jr          $ra
    ctx->pc = 0x237F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F08u;
        // 0x237f0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237F10u;
}
