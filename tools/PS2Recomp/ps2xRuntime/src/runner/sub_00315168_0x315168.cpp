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

// Function: sub_00315168
// Address: 0x315168 - 0x3151c8
void sub_00315168_0x315168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315168_0x315168");
#endif

    switch (ctx->pc) {
        case 0x315190u: goto label_315190;
        case 0x3151a0u: goto label_3151a0;
        case 0x3151acu: goto label_3151ac;
        default: break;
    }

    ctx->pc = 0x315168u;

    // 0x315168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x315168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31516c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x315170: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x315170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x315174: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x315174u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x315178: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x315178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31517c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x315180: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x315180u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x315184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x315188: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x315188u;
    SET_GPR_U32(ctx, 31, 0x315190u);
    ctx->pc = 0x31518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315188u;
    // 0x31518c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x315188u, 0x315190u)) {
        return;
    }
    ctx->pc = 0x315190u;
label_315190:
    // 0x315190: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x315190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x315194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x315194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315198: 0xc0c78ac  jal         func_31E2B0
    ctx->pc = 0x315198u;
    SET_GPR_U32(ctx, 31, 0x3151A0u);
    ctx->pc = 0x31519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315198u;
    // 0x31519c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E2B0u, 0x315198u, 0x3151A0u)) {
        return;
    }
    ctx->pc = 0x3151A0u;
label_3151a0:
    // 0x3151a0: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x3151a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x3151a4: 0xc0c5584  jal         func_315610
    ctx->pc = 0x3151A4u;
    SET_GPR_U32(ctx, 31, 0x3151ACu);
    ctx->pc = 0x3151A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151A4u;
    // 0x3151a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x3151A4u, 0x3151ACu)) {
        return;
    }
    ctx->pc = 0x3151ACu;
label_3151ac:
    // 0x3151ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3151acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3151b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3151b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3151b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3151b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3151b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3151b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3151bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3151bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3151c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3151C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3151C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151C0u;
        // 0x3151c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3151C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3151C8u;
}
