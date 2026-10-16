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

// Function: sub_00281290
// Address: 0x281290 - 0x2812f8
void sub_00281290_0x281290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281290_0x281290");
#endif

    switch (ctx->pc) {
        case 0x2812c4u: goto label_2812c4;
        case 0x2812d8u: goto label_2812d8;
        default: break;
    }

    ctx->pc = 0x281290u;

    // 0x281290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281294: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x281294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x281298: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x281298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28129c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2812a0: 0x2470e690  addiu       $s0, $v1, -0x1970
    ctx->pc = 0x2812a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960784));
    // 0x2812a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2812a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2812a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2812a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2812acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E694u));
    // 0x2812b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2812b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2812b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2812B4u;
    {
        const bool branch_taken_0x2812b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2812B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812B4u;
        // 0x2812b8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812b4) {
            ctx->pc = 0x2812C4u;
            goto label_2812c4;
        }
    }
    ctx->pc = 0x2812BCu;
    // 0x2812bc: 0xc0a060e  jal         func_281838
    ctx->pc = 0x2812BCu;
    SET_GPR_U32(ctx, 31, 0x2812C4u);
    ctx->pc = 0x281838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281838u, 0x2812BCu, 0x2812C4u)) {
        return;
    }
    ctx->pc = 0x2812C4u;
label_2812c4:
    // 0x2812c4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2812c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2812c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2812C8u;
    {
        const bool branch_taken_0x2812c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2812CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812C8u;
        // 0x2812cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812c8) {
            ctx->pc = 0x2812E0u;
            goto label_2812e0;
        }
    }
    ctx->pc = 0x2812D0u;
    // 0x2812d0: 0xc093106  jal         func_24C418
    ctx->pc = 0x2812D0u;
    SET_GPR_U32(ctx, 31, 0x2812D8u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x2812D0u, 0x2812D8u)) {
        return;
    }
    ctx->pc = 0x2812D8u;
label_2812d8:
    // 0x2812d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2812d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2812dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2812dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2812e0:
    // 0x2812e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2812e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2812e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2812e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2812e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2812e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2812ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2812ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2812F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812ECu;
        // 0x2812f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2812ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2812F4u;
    // 0x2812f4: 0x0  nop
    ctx->pc = 0x2812f4u;
    // NOP
    ctx->pc = 0x2812f8u;
}
