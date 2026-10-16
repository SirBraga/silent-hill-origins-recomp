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

// Function: sub_00316060
// Address: 0x316060 - 0x3160c0
void sub_00316060_0x316060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316060_0x316060");
#endif

    switch (ctx->pc) {
        case 0x316088u: goto label_316088;
        case 0x316098u: goto label_316098;
        case 0x3160a4u: goto label_3160a4;
        default: break;
    }

    ctx->pc = 0x316060u;

    // 0x316060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x316060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x316064: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x316064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x316068: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x316068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31606c: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x31606cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x316070: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x316070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316074: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x316074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x316078: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x31607c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316080: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x316080u;
    SET_GPR_U32(ctx, 31, 0x316088u);
    ctx->pc = 0x316084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316080u;
    // 0x316084: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x316080u, 0x316088u)) {
        return;
    }
    ctx->pc = 0x316088u;
label_316088:
    // 0x316088: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x316088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x31608c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31608cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316090: 0xc0c771c  jal         func_31DC70
    ctx->pc = 0x316090u;
    SET_GPR_U32(ctx, 31, 0x316098u);
    ctx->pc = 0x316094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316090u;
    // 0x316094: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31DC70u, 0x316090u, 0x316098u)) {
        return;
    }
    ctx->pc = 0x316098u;
label_316098:
    // 0x316098: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x316098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x31609c: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31609Cu;
    SET_GPR_U32(ctx, 31, 0x3160A4u);
    ctx->pc = 0x3160A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31609Cu;
    // 0x3160a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31609Cu, 0x3160A4u)) {
        return;
    }
    ctx->pc = 0x3160A4u;
label_3160a4:
    // 0x3160a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3160a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3160a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3160ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3160acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3160b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3160b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3160b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3160b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3160b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3160B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3160BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160B8u;
        // 0x3160bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3160B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3160C0u;
}
