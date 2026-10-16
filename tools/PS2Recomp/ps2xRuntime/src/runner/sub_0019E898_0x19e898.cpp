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

// Function: sub_0019E898
// Address: 0x19e898 - 0x19e908
void sub_0019E898_0x19e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E898_0x19e898");
#endif

    switch (ctx->pc) {
        case 0x19e8e8u: goto label_19e8e8;
        case 0x19e8f4u: goto label_19e8f4;
        default: break;
    }

    ctx->pc = 0x19e898u;

    // 0x19e898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e89c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19e8a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e8a4: 0x2442a7e8  addiu       $v0, $v0, -0x5818
    ctx->pc = 0x19e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944744));
    // 0x19e8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e8b4: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19e8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x19e8b8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x19e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x19e8bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19e8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8c0: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x19e8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19e8c4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19e8c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19e8cc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e8d0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x19e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x19e8d4: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x19e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x19e8d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e8dc: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x19e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
    // 0x19e8e0: 0xc065bc0  jal         func_196F00
    ctx->pc = 0x19E8E0u;
    SET_GPR_U32(ctx, 31, 0x19E8E8u);
    ctx->pc = 0x19E8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8E0u;
    // 0x19e8e4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196F00u, 0x19E8E0u, 0x19E8E8u)) {
        return;
    }
    ctx->pc = 0x19E8E8u;
label_19e8e8:
    // 0x19e8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8ec: 0xc080596  jal         func_201658
    ctx->pc = 0x19E8ECu;
    SET_GPR_U32(ctx, 31, 0x19E8F4u);
    ctx->pc = 0x19E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8ECu;
    // 0x19e8f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19E8ECu, 0x19E8F4u)) {
        return;
    }
    ctx->pc = 0x19E8F4u;
label_19e8f4:
    // 0x19e8f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e900: 0x3e00008  jr          $ra
    ctx->pc = 0x19E900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E900u;
        // 0x19e904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E908u;
}
