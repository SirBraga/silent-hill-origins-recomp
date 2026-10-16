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

// Function: sub_0011C0A0
// Address: 0x11c0a0 - 0x11c0e8
void sub_0011C0A0_0x11c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C0A0_0x11c0a0");
#endif

    switch (ctx->pc) {
        case 0x11c0b8u: goto label_11c0b8;
        default: break;
    }

    ctx->pc = 0x11c0a0u;

    // 0x11c0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c0a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11c0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c0a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11c0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c0b0: 0xc044624  jal         func_111890
    ctx->pc = 0x11C0B0u;
    SET_GPR_U32(ctx, 31, 0x11C0B8u);
    ctx->pc = 0x11C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0B0u;
    // 0x11c0b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x11C0B0u, 0x11C0B8u)) {
        return;
    }
    ctx->pc = 0x11C0B8u;
label_11c0b8:
    // 0x11c0b8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11c0bc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11c0c0: 0x2463b170  addiu       $v1, $v1, -0x4E90
    ctx->pc = 0x11c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947184));
    // 0x11c0c4: 0x2484b190  addiu       $a0, $a0, -0x4E70
    ctx->pc = 0x11c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947216));
    // 0x11c0c8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x11c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x11c0cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0d0: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x11c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x11c0d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11c0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0DCu;
        // 0x11c0e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C0E4u;
    // 0x11c0e4: 0x0  nop
    ctx->pc = 0x11c0e4u;
    // NOP
    ctx->pc = 0x11c0e8u;
}
