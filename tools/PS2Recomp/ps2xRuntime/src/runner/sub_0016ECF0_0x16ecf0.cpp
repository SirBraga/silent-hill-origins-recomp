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

// Function: sub_0016ECF0
// Address: 0x16ecf0 - 0x16ed70
void sub_0016ECF0_0x16ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ECF0_0x16ecf0");
#endif

    switch (ctx->pc) {
        case 0x16ed34u: goto label_16ed34;
        case 0x16ed3cu: goto label_16ed3c;
        case 0x16ed48u: goto label_16ed48;
        case 0x16ed54u: goto label_16ed54;
        default: break;
    }

    ctx->pc = 0x16ecf0u;

    // 0x16ecf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ecf4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16ecf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16ecfc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16ed00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16ed04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ed04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16ed0c: 0x24424fc0  addiu       $v0, $v0, 0x4FC0
    ctx->pc = 0x16ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20416));
    // 0x16ed10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ed14: 0x24634f78  addiu       $v1, $v1, 0x4F78
    ctx->pc = 0x16ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20344));
    // 0x16ed18: 0x26300044  addiu       $s0, $s1, 0x44
    ctx->pc = 0x16ed18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16ed1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16ed1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed20: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x16ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x16ed24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ed24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed28: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x16ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x16ed2c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16ED2Cu;
    SET_GPR_U32(ctx, 31, 0x16ED34u);
    ctx->pc = 0x16ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED2Cu;
    // 0x16ed30: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16ED2Cu, 0x16ED34u)) {
        return;
    }
    ctx->pc = 0x16ED34u;
label_16ed34:
    // 0x16ed34: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16ED34u;
    SET_GPR_U32(ctx, 31, 0x16ED3Cu);
    ctx->pc = 0x16ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED34u;
    // 0x16ed38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16ED34u, 0x16ED3Cu)) {
        return;
    }
    ctx->pc = 0x16ED3Cu;
label_16ed3c:
    // 0x16ed3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed40: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16ED40u;
    SET_GPR_U32(ctx, 31, 0x16ED48u);
    ctx->pc = 0x16ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED40u;
    // 0x16ed44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16ED40u, 0x16ED48u)) {
        return;
    }
    ctx->pc = 0x16ED48u;
label_16ed48:
    // 0x16ed48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed4c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16ED4Cu;
    SET_GPR_U32(ctx, 31, 0x16ED54u);
    ctx->pc = 0x16ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED4Cu;
    // 0x16ed50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16ED4Cu, 0x16ED54u)) {
        return;
    }
    ctx->pc = 0x16ED54u;
label_16ed54:
    // 0x16ed54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16ed54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ed58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ed58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ed5c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16ed5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ed60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ed60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ed64: 0x3e00008  jr          $ra
    ctx->pc = 0x16ED64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED64u;
        // 0x16ed68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ED64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ED6Cu;
    // 0x16ed6c: 0x0  nop
    ctx->pc = 0x16ed6cu;
    // NOP
    ctx->pc = 0x16ed70u;
}
