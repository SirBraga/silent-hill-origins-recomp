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

// Function: sub_0012BF50
// Address: 0x12bf50 - 0x12bfc0
void sub_0012BF50_0x12bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BF50_0x12bf50");
#endif

    switch (ctx->pc) {
        case 0x12bf64u: goto label_12bf64;
        default: break;
    }

    ctx->pc = 0x12bf50u;

    // 0x12bf50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bf54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12bf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bf5c: 0xc049dc6  jal         func_127718
    ctx->pc = 0x12BF5Cu;
    SET_GPR_U32(ctx, 31, 0x12BF64u);
    ctx->pc = 0x12BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF5Cu;
    // 0x12bf60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127718u, 0x12BF5Cu, 0x12BF64u)) {
        return;
    }
    ctx->pc = 0x12BF64u;
label_12bf64:
    // 0x12bf64: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x12bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x12bf68: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x12bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x12bf6c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12bf70: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12bf70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12bf74: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x12bf74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x12bf78: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x12bf7c: 0x2463d198  addiu       $v1, $v1, -0x2E68
    ctx->pc = 0x12bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955416));
    // 0x12bf80: 0x2484d078  addiu       $a0, $a0, -0x2F88
    ctx->pc = 0x12bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955128));
    // 0x12bf84: 0x24a5d038  addiu       $a1, $a1, -0x2FC8
    ctx->pc = 0x12bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955064));
    // 0x12bf88: 0x24c6d020  addiu       $a2, $a2, -0x2FE0
    ctx->pc = 0x12bf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955040));
    // 0x12bf8c: 0x24e7d1b8  addiu       $a3, $a3, -0x2E48
    ctx->pc = 0x12bf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955448));
    // 0x12bf90: 0x2508d478  addiu       $t0, $t0, -0x2B88
    ctx->pc = 0x12bf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956152));
    // 0x12bf94: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x12bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x12bf98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12bf98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf9c: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x12bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
    // 0x12bfa0: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x12bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
    // 0x12bfa4: 0xae060354  sw          $a2, 0x354($s0)
    ctx->pc = 0x12bfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 6));
    // 0x12bfa8: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x12bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x12bfac: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x12bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x12bfb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bfb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFB8u;
        // 0x12bfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BFC0u;
}
