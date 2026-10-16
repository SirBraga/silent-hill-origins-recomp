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

// Function: sub_0013D808
// Address: 0x13d808 - 0x13d888
void sub_0013D808_0x13d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D808_0x13d808");
#endif

    switch (ctx->pc) {
        case 0x13d820u: goto label_13d820;
        case 0x13d85cu: goto label_13d85c;
        case 0x13d864u: goto label_13d864;
        case 0x13d86cu: goto label_13d86c;
        default: break;
    }

    ctx->pc = 0x13d808u;

    // 0x13d808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d80c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13d810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d818: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x13D818u;
    SET_GPR_U32(ctx, 31, 0x13D820u);
    ctx->pc = 0x13D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D818u;
    // 0x13d81c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x13D818u, 0x13D820u)) {
        return;
    }
    ctx->pc = 0x13D820u;
label_13d820:
    // 0x13d820: 0x2611004c  addiu       $s1, $s0, 0x4C
    ctx->pc = 0x13d820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x13d824: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13d828: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13d828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13d82c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13d82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13d830: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13d830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13d834: 0x2463fb90  addiu       $v1, $v1, -0x470
    ctx->pc = 0x13d834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966160));
    // 0x13d838: 0x24a5fa30  addiu       $a1, $a1, -0x5D0
    ctx->pc = 0x13d838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965808));
    // 0x13d83c: 0x24c6fbb0  addiu       $a2, $a2, -0x450
    ctx->pc = 0x13d83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966192));
    // 0x13d840: 0x2442fa70  addiu       $v0, $v0, -0x590
    ctx->pc = 0x13d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965872));
    // 0x13d844: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13d844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13d848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d84c: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x13d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x13d850: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x13d850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x13d854: 0xc041f10  jal         func_107C40
    ctx->pc = 0x13D854u;
    SET_GPR_U32(ctx, 31, 0x13D85Cu);
    ctx->pc = 0x13D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D854u;
    // 0x13d858: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x13D854u, 0x13D85Cu)) {
        return;
    }
    ctx->pc = 0x13D85Cu;
label_13d85c:
    // 0x13d85c: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x13D85Cu;
    SET_GPR_U32(ctx, 31, 0x13D864u);
    ctx->pc = 0x13D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D85Cu;
    // 0x13d860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x13D85Cu, 0x13D864u)) {
        return;
    }
    ctx->pc = 0x13D864u;
label_13d864:
    // 0x13d864: 0xc0420a6  jal         func_108298
    ctx->pc = 0x13D864u;
    SET_GPR_U32(ctx, 31, 0x13D86Cu);
    ctx->pc = 0x13D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D864u;
    // 0x13d868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108298u, 0x13D864u, 0x13D86Cu)) {
        return;
    }
    ctx->pc = 0x13D86Cu;
label_13d86c:
    // 0x13d86c: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x13d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x13d870: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13d870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d878: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13d878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d880: 0x3e00008  jr          $ra
    ctx->pc = 0x13D880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D880u;
        // 0x13d884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D888u;
}
