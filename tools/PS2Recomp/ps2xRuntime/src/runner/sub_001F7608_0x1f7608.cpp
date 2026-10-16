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

// Function: sub_001F7608
// Address: 0x1f7608 - 0x1f7660
void sub_001F7608_0x1f7608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7608_0x1f7608");
#endif

    switch (ctx->pc) {
        case 0x1f7628u: goto label_1f7628;
        case 0x1f7638u: goto label_1f7638;
        case 0x1f7648u: goto label_1f7648;
        case 0x1f7650u: goto label_1f7650;
        default: break;
    }

    ctx->pc = 0x1f7608u;

    // 0x1f7608: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f7608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f760c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1f760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1f7610: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1f7610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1f7614: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f7614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f7618: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1f7618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1f761c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f7620: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7620u;
    SET_GPR_U32(ctx, 31, 0x1F7628u);
    ctx->pc = 0x1F7624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7620u;
    // 0x1f7624: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7620u, 0x1F7628u)) {
        return;
    }
    ctx->pc = 0x1F7628u;
label_1f7628:
    // 0x1f7628: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f7628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f762c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1f762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1f7630: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7630u;
    SET_GPR_U32(ctx, 31, 0x1F7638u);
    ctx->pc = 0x1F7634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7630u;
    // 0x1f7634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7630u, 0x1F7638u)) {
        return;
    }
    ctx->pc = 0x1F7638u;
label_1f7638:
    // 0x1f7638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f763c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1f763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7640: 0xc07dcf2  jal         func_1F73C8
    ctx->pc = 0x1F7640u;
    SET_GPR_U32(ctx, 31, 0x1F7648u);
    ctx->pc = 0x1F7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7640u;
    // 0x1f7644: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F73C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F73C8u, 0x1F7640u, 0x1F7648u)) {
        return;
    }
    ctx->pc = 0x1F7648u;
label_1f7648:
    // 0x1f7648: 0xc07dc7e  jal         func_1F71F8
    ctx->pc = 0x1F7648u;
    SET_GPR_U32(ctx, 31, 0x1F7650u);
    ctx->pc = 0x1F764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7648u;
    // 0x1f764c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F71F8u, 0x1F7648u, 0x1F7650u)) {
        return;
    }
    ctx->pc = 0x1F7650u;
label_1f7650:
    // 0x1f7650: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f7650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f7654: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1f7654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7658: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7658u;
        // 0x1f765c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7660u;
}
