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

// Function: sub_001F7660
// Address: 0x1f7660 - 0x1f76c8
void sub_001F7660_0x1f7660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7660_0x1f7660");
#endif

    switch (ctx->pc) {
        case 0x1f7680u: goto label_1f7680;
        case 0x1f7690u: goto label_1f7690;
        case 0x1f76acu: goto label_1f76ac;
        case 0x1f76b4u: goto label_1f76b4;
        default: break;
    }

    ctx->pc = 0x1f7660u;

    // 0x1f7660: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f7664: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1f7664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1f7668: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1f7668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1f766c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f7670: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1f7670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1f7674: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f7674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f7678: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7678u;
    SET_GPR_U32(ctx, 31, 0x1F7680u);
    ctx->pc = 0x1F767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7678u;
    // 0x1f767c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7678u, 0x1F7680u)) {
        return;
    }
    ctx->pc = 0x1F7680u;
label_1f7680:
    // 0x1f7680: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f7680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7684: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1f7684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1f7688: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7688u;
    SET_GPR_U32(ctx, 31, 0x1F7690u);
    ctx->pc = 0x1F768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7688u;
    // 0x1f768c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7688u, 0x1F7690u)) {
        return;
    }
    ctx->pc = 0x1F7690u;
label_1f7690:
    // 0x1f7690: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1f7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f7694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7698: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1f7698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f769c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f76a4: 0xc07dcf2  jal         func_1F73C8
    ctx->pc = 0x1F76A4u;
    SET_GPR_U32(ctx, 31, 0x1F76ACu);
    ctx->pc = 0x1F76A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76A4u;
    // 0x1f76a8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F73C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F73C8u, 0x1F76A4u, 0x1F76ACu)) {
        return;
    }
    ctx->pc = 0x1F76ACu;
label_1f76ac:
    // 0x1f76ac: 0xc07dc7e  jal         func_1F71F8
    ctx->pc = 0x1F76ACu;
    SET_GPR_U32(ctx, 31, 0x1F76B4u);
    ctx->pc = 0x1F76B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76ACu;
    // 0x1f76b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F71F8u, 0x1F76ACu, 0x1F76B4u)) {
        return;
    }
    ctx->pc = 0x1F76B4u;
label_1f76b4:
    // 0x1f76b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f76b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f76b8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1f76b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f76bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F76BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76BCu;
        // 0x1f76c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F76BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F76C4u;
    // 0x1f76c4: 0x0  nop
    ctx->pc = 0x1f76c4u;
    // NOP
    ctx->pc = 0x1f76c8u;
}
