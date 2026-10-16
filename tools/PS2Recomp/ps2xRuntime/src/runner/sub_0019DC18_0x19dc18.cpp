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

// Function: sub_0019DC18
// Address: 0x19dc18 - 0x19dc88
void sub_0019DC18_0x19dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DC18_0x19dc18");
#endif

    switch (ctx->pc) {
        case 0x19dc68u: goto label_19dc68;
        case 0x19dc74u: goto label_19dc74;
        default: break;
    }

    ctx->pc = 0x19dc18u;

    // 0x19dc18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dc1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19dc20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19dc24: 0x2442abf8  addiu       $v0, $v0, -0x5408
    ctx->pc = 0x19dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945784));
    // 0x19dc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19dc2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19dc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dc34: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19dc34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x19dc38: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x19dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x19dc3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19dc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc40: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x19dc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19dc44: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19dc48: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19dc4c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19dc50: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x19dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x19dc54: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x19dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x19dc58: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19dc5c: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x19dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
    // 0x19dc60: 0xc095534  jal         func_2554D0
    ctx->pc = 0x19DC60u;
    SET_GPR_U32(ctx, 31, 0x19DC68u);
    ctx->pc = 0x19DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC60u;
    // 0x19dc64: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x19DC60u, 0x19DC68u)) {
        return;
    }
    ctx->pc = 0x19DC68u;
label_19dc68:
    // 0x19dc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc6c: 0xc080596  jal         func_201658
    ctx->pc = 0x19DC6Cu;
    SET_GPR_U32(ctx, 31, 0x19DC74u);
    ctx->pc = 0x19DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC6Cu;
    // 0x19dc70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19DC6Cu, 0x19DC74u)) {
        return;
    }
    ctx->pc = 0x19DC74u;
label_19dc74:
    // 0x19dc74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19dc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dc78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc80: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC80u;
        // 0x19dc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DC88u;
}
