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

// Function: sub_003120A0
// Address: 0x3120a0 - 0x3120e8
void sub_003120A0_0x3120a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003120A0_0x3120a0");
#endif

    switch (ctx->pc) {
        case 0x3120c0u: goto label_3120c0;
        default: break;
    }

    ctx->pc = 0x3120a0u;

    // 0x3120a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3120a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3120a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3120a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3120a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3120a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3120acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3120b0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x3120b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x3120b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3120b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120b8: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x3120B8u;
    SET_GPR_U32(ctx, 31, 0x3120C0u);
    ctx->pc = 0x3120BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3120B8u;
    // 0x3120bc: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x3120B8u, 0x3120C0u)) {
        return;
    }
    ctx->pc = 0x3120C0u;
label_3120c0:
    // 0x3120c0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3120c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3120c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3120c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3120c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3120c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3120ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3120d0: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x3120d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
    // 0x3120d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3120d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3120d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3120D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3120DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120D8u;
        // 0x3120dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3120D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3120E0u;
    // 0x3120e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3120e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3120e4: 0x0  nop
    ctx->pc = 0x3120e4u;
    // NOP
    ctx->pc = 0x3120e8u;
}
