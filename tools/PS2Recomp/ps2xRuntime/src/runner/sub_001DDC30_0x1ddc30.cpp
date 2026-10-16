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

// Function: sub_001DDC30
// Address: 0x1ddc30 - 0x1ddca0
void sub_001DDC30_0x1ddc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDC30_0x1ddc30");
#endif

    switch (ctx->pc) {
        case 0x1ddc54u: goto label_1ddc54;
        case 0x1ddc7cu: goto label_1ddc7c;
        default: break;
    }

    ctx->pc = 0x1ddc30u;

    // 0x1ddc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ddc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ddc34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ddc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ddc38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ddc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ddc3c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1ddc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1ddc40: 0x2610e690  addiu       $s0, $s0, -0x1970
    ctx->pc = 0x1ddc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960784));
    // 0x1ddc44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ddc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddc4c: 0xc0bba02  jal         func_2EE808
    ctx->pc = 0x1DDC4Cu;
    SET_GPR_U32(ctx, 31, 0x1DDC54u);
    ctx->pc = 0x1DDC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC4Cu;
    // 0x1ddc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE808u, 0x1DDC4Cu, 0x1DDC54u)) {
        return;
    }
    ctx->pc = 0x1DDC54u;
label_1ddc54:
    // 0x1ddc54: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ddc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1ddc58: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1ddc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1ddc5c: 0x8c87e688  lw          $a3, -0x1978($a0)
    ctx->pc = 0x1ddc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x33E688u));
    // 0x1ddc60: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x1ddc64: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ddc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ddc68: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1ddc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ddc6c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1ddc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1ddc70: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ddc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ddc74: 0xc0928de  jal         func_24A378
    ctx->pc = 0x1DDC74u;
    SET_GPR_U32(ctx, 31, 0x1DDC7Cu);
    ctx->pc = 0x1DDC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC74u;
    // 0x1ddc78: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x1DDC74u, 0x1DDC7Cu)) {
        return;
    }
    ctx->pc = 0x1DDC7Cu;
label_1ddc7c:
    // 0x1ddc7c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1ddc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ddc80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ddc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ddc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddc88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ddc88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddc90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ddc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ddc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC94u;
        // 0x1ddc98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDC9Cu;
    // 0x1ddc9c: 0x0  nop
    ctx->pc = 0x1ddc9cu;
    // NOP
    ctx->pc = 0x1ddca0u;
}
