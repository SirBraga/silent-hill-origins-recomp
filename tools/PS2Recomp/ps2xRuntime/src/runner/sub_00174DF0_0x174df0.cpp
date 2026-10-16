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

// Function: sub_00174DF0
// Address: 0x174df0 - 0x174ec0
void sub_00174DF0_0x174df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174DF0_0x174df0");
#endif

    switch (ctx->pc) {
        case 0x174e40u: goto label_174e40;
        case 0x174e54u: goto label_174e54;
        case 0x174e74u: goto label_174e74;
        case 0x174e88u: goto label_174e88;
        case 0x174e94u: goto label_174e94;
        case 0x174ea0u: goto label_174ea0;
        default: break;
    }

    ctx->pc = 0x174df0u;

    // 0x174df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174df4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x174df8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x174df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x174dfc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x174dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x174e00: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x174e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x174e04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x174e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x174e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174e0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x174e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x174e14: 0x24425f68  addiu       $v0, $v0, 0x5F68
    ctx->pc = 0x174e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24424));
    // 0x174e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174e1c: 0x24635f50  addiu       $v1, $v1, 0x5F50
    ctx->pc = 0x174e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24400));
    // 0x174e20: 0x24c65f88  addiu       $a2, $a2, 0x5F88
    ctx->pc = 0x174e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24456));
    // 0x174e24: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x174e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x174e28: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x174e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x174e2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x174e2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e30: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x174e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
    // 0x174e34: 0x26300064  addiu       $s0, $s1, 0x64
    ctx->pc = 0x174e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x174e38: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x174e38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x174e3c: 0x0  nop
    ctx->pc = 0x174e3cu;
    // NOP
label_174e40:
    // 0x174e40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x174e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174e44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174E44u;
    {
        const bool branch_taken_0x174e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E44u;
        // 0x174e48: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e44) {
            ctx->pc = 0x174E58u;
            goto label_174e58;
        }
    }
    ctx->pc = 0x174E4Cu;
    // 0x174e4c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x174E4Cu;
    SET_GPR_U32(ctx, 31, 0x174E54u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x174E4Cu, 0x174E54u)) {
        return;
    }
    ctx->pc = 0x174E54u;
label_174e54:
    // 0x174e54: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x174e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_174e58:
    // 0x174e58: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x174E58u;
    {
        const bool branch_taken_0x174e58 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x174E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E58u;
        // 0x174e5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e58) {
            ctx->pc = 0x174E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174e40;
        }
    }
    ctx->pc = 0x174E60u;
    // 0x174e60: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x174e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x174e64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174E64u;
    {
        const bool branch_taken_0x174e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E64u;
        // 0x174e68: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e64) {
            ctx->pc = 0x174E7Cu;
            goto label_174e7c;
        }
    }
    ctx->pc = 0x174E6Cu;
    // 0x174e6c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x174E6Cu;
    SET_GPR_U32(ctx, 31, 0x174E74u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x174E6Cu, 0x174E74u)) {
        return;
    }
    ctx->pc = 0x174E74u;
label_174e74:
    // 0x174e74: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x174e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x174e78: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x174e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_174e7c:
    // 0x174e7c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x174e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x174e80: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x174E80u;
    SET_GPR_U32(ctx, 31, 0x174E88u);
    ctx->pc = 0x174E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E80u;
    // 0x174e84: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x174E80u, 0x174E88u)) {
        return;
    }
    ctx->pc = 0x174E88u;
label_174e88:
    // 0x174e88: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x174e8c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x174E8Cu;
    SET_GPR_U32(ctx, 31, 0x174E94u);
    ctx->pc = 0x174E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E8Cu;
    // 0x174e90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F158u, 0x174E8Cu, 0x174E94u)) {
        return;
    }
    ctx->pc = 0x174E94u;
label_174e94:
    // 0x174e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e98: 0xc05d822  jal         func_176088
    ctx->pc = 0x174E98u;
    SET_GPR_U32(ctx, 31, 0x174EA0u);
    ctx->pc = 0x174E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E98u;
    // 0x174e9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x174E98u, 0x174EA0u)) {
        return;
    }
    ctx->pc = 0x174EA0u;
label_174ea0:
    // 0x174ea0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x174ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174ea4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x174ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174eac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x174eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x174EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EB4u;
        // 0x174eb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174EBCu;
    // 0x174ebc: 0x0  nop
    ctx->pc = 0x174ebcu;
    // NOP
    ctx->pc = 0x174ec0u;
}
