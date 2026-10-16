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

// Function: sub_00175858
// Address: 0x175858 - 0x1758b8
void sub_00175858_0x175858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175858_0x175858");
#endif

    switch (ctx->pc) {
        case 0x17586cu: goto label_17586c;
        case 0x175894u: goto label_175894;
        case 0x1758a4u: goto label_1758a4;
        default: break;
    }

    ctx->pc = 0x175858u;

    // 0x175858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17585c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175864: 0xc05d80c  jal         func_176030
    ctx->pc = 0x175864u;
    SET_GPR_U32(ctx, 31, 0x17586Cu);
    ctx->pc = 0x175868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175864u;
    // 0x175868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x175864u, 0x17586Cu)) {
        return;
    }
    ctx->pc = 0x17586Cu;
label_17586c:
    // 0x17586c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17586cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x175870: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x175870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x175874: 0x24636158  addiu       $v1, $v1, 0x6158
    ctx->pc = 0x175874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24920));
    // 0x175878: 0x24426138  addiu       $v0, $v0, 0x6138
    ctx->pc = 0x175878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24888));
    // 0x17587c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x17587cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x175880: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x175880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x175884: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x175884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x175888: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x175888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x17588c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x17588Cu;
    SET_GPR_U32(ctx, 31, 0x175894u);
    ctx->pc = 0x175890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17588Cu;
    // 0x175890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x17588Cu, 0x175894u)) {
        return;
    }
    ctx->pc = 0x175894u;
label_175894:
    // 0x175894: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x175898: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17589c: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x17589Cu;
    SET_GPR_U32(ctx, 31, 0x1758A4u);
    ctx->pc = 0x1758A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17589Cu;
    // 0x1758a0: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x17589Cu, 0x1758A4u)) {
        return;
    }
    ctx->pc = 0x1758A4u;
label_1758a4:
    // 0x1758a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1758a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1758a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1758ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1758acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1758b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1758B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758B0u;
        // 0x1758b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1758B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1758B8u;
}
