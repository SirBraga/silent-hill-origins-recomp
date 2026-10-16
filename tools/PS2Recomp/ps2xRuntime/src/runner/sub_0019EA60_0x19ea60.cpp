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

// Function: sub_0019EA60
// Address: 0x19ea60 - 0x19ead0
void sub_0019EA60_0x19ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EA60_0x19ea60");
#endif

    switch (ctx->pc) {
        case 0x19eab0u: goto label_19eab0;
        case 0x19eabcu: goto label_19eabc;
        default: break;
    }

    ctx->pc = 0x19ea60u;

    // 0x19ea60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ea64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19ea68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19ea6c: 0x2442a658  addiu       $v0, $v0, -0x59A8
    ctx->pc = 0x19ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944344));
    // 0x19ea70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ea74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ea74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ea7c: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19ea7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x19ea80: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x19ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x19ea84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19ea84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea88: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x19ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19ea8c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19ea90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19ea94: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19ea98: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x19ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x19ea9c: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x19ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x19eaa0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19eaa4: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x19eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
    // 0x19eaa8: 0xc0653f2  jal         func_194FC8
    ctx->pc = 0x19EAA8u;
    SET_GPR_U32(ctx, 31, 0x19EAB0u);
    ctx->pc = 0x19EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAA8u;
    // 0x19eaac: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x194FC8u, 0x19EAA8u, 0x19EAB0u)) {
        return;
    }
    ctx->pc = 0x19EAB0u;
label_19eab0:
    // 0x19eab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eab4: 0xc080596  jal         func_201658
    ctx->pc = 0x19EAB4u;
    SET_GPR_U32(ctx, 31, 0x19EABCu);
    ctx->pc = 0x19EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAB4u;
    // 0x19eab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19EAB4u, 0x19EABCu)) {
        return;
    }
    ctx->pc = 0x19EABCu;
label_19eabc:
    // 0x19eabc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19eabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19eac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19eac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19eac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eac8: 0x3e00008  jr          $ra
    ctx->pc = 0x19EAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAC8u;
        // 0x19eacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EAD0u;
}
