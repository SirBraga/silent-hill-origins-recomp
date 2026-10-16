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

// Function: sub_001F5080
// Address: 0x1f5080 - 0x1f50e8
void sub_001F5080_0x1f5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5080_0x1f5080");
#endif

    switch (ctx->pc) {
        case 0x1f50b4u: goto label_1f50b4;
        case 0x1f50ccu: goto label_1f50cc;
        default: break;
    }

    ctx->pc = 0x1f5080u;

    // 0x1f5080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f5084: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f5084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f5088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f508c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f5090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f5094: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f5094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5098: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f509c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f509cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f50a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f50a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f50a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50a8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f50a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50ac: 0xc065c40  jal         func_197100
    ctx->pc = 0x1F50ACu;
    SET_GPR_U32(ctx, 31, 0x1F50B4u);
    ctx->pc = 0x1F50B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F50ACu;
    // 0x1f50b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1F50ACu, 0x1F50B4u)) {
        return;
    }
    ctx->pc = 0x1F50B4u;
label_1f50b4:
    // 0x1f50b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f50b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f50b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f50bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f50c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50c4: 0xc07d43a  jal         func_1F50E8
    ctx->pc = 0x1F50C4u;
    SET_GPR_U32(ctx, 31, 0x1F50CCu);
    ctx->pc = 0x1F50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F50C4u;
    // 0x1f50c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F50E8u, 0x1F50C4u, 0x1F50CCu)) {
        return;
    }
    ctx->pc = 0x1F50CCu;
label_1f50cc:
    // 0x1f50cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f50ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f50d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f50d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f50d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f50d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f50d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f50d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f50dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f50dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f50e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F50E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50E0u;
        // 0x1f50e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F50E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F50E8u;
}
