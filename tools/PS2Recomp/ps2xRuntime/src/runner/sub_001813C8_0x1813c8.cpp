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

// Function: sub_001813C8
// Address: 0x1813c8 - 0x181450
void sub_001813C8_0x1813c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001813C8_0x1813c8");
#endif

    switch (ctx->pc) {
        case 0x1813e8u: goto label_1813e8;
        case 0x181404u: goto label_181404;
        case 0x18143cu: goto label_18143c;
        default: break;
    }

    ctx->pc = 0x1813c8u;

    // 0x1813c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1813c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1813cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1813ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1813d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1813d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1813d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1813d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1813d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1813dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1813dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1813e0: 0xc060698  jal         func_181A60
    ctx->pc = 0x1813E0u;
    SET_GPR_U32(ctx, 31, 0x1813E8u);
    ctx->pc = 0x1813E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1813E0u;
    // 0x1813e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181A60u, 0x1813E0u, 0x1813E8u)) {
        return;
    }
    ctx->pc = 0x1813E8u;
label_1813e8:
    // 0x1813e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1813e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1813ec: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x1813ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x1813f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1813f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1813f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1813f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1813f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1813f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813fc: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x1813FCu;
    SET_GPR_U32(ctx, 31, 0x181404u);
    ctx->pc = 0x181400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1813FCu;
    // 0x181400: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x1813FCu, 0x181404u)) {
        return;
    }
    ctx->pc = 0x181404u;
label_181404:
    // 0x181404: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x181404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x181408: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x181408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18140c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18140cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x181410: 0x8e0a0064  lw          $t2, 0x64($s0)
    ctx->pc = 0x181410u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x181414: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x181414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x181418: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x181418u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x18141c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x18141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181420: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x181420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x181424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181428: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x181428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x18142c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181430: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181434: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x181434u;
    SET_GPR_U32(ctx, 31, 0x18143Cu);
    ctx->pc = 0x181438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181434u;
    // 0x181438: 0x24094000  addiu       $t1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x181434u, 0x18143Cu)) {
        return;
    }
    ctx->pc = 0x18143Cu;
label_18143c:
    // 0x18143c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18143cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181444: 0x3e00008  jr          $ra
    ctx->pc = 0x181444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181444u;
        // 0x181448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18144Cu;
    // 0x18144c: 0x0  nop
    ctx->pc = 0x18144cu;
    // NOP
    ctx->pc = 0x181450u;
}
