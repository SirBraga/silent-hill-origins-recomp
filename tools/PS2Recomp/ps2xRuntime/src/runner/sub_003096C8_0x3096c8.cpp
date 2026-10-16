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

// Function: sub_003096C8
// Address: 0x3096c8 - 0x309738
void sub_003096C8_0x3096c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003096C8_0x3096c8");
#endif

    switch (ctx->pc) {
        case 0x3096f8u: goto label_3096f8;
        case 0x309714u: goto label_309714;
        default: break;
    }

    ctx->pc = 0x3096c8u;

    // 0x3096c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3096c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3096cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3096ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3096d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3096d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3096d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3096d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3096d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3096dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3096dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3096e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3096e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3096e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3096e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3096ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3096ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3096f0: 0xc0ab558  jal         func_2AD560
    ctx->pc = 0x3096F0u;
    SET_GPR_U32(ctx, 31, 0x3096F8u);
    ctx->pc = 0x3096F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3096F0u;
    // 0x3096f4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD560u, 0x3096F0u, 0x3096F8u)) {
        return;
    }
    ctx->pc = 0x3096F8u;
label_3096f8:
    // 0x3096f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3096f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3096fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309700: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x309700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309704: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x309704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309708: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x309708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30970c: 0xc0c25dc  jal         func_309770
    ctx->pc = 0x30970Cu;
    SET_GPR_U32(ctx, 31, 0x309714u);
    ctx->pc = 0x309710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30970Cu;
    // 0x309710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309770u, 0x30970Cu, 0x309714u)) {
        return;
    }
    ctx->pc = 0x309714u;
label_309714:
    // 0x309714: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x309714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309718: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x309718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30971c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30971cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309720: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x309720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309724: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x309724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309728: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x309728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30972c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30972cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309730: 0x3e00008  jr          $ra
    ctx->pc = 0x309730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309730u;
        // 0x309734: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309738u;
}
