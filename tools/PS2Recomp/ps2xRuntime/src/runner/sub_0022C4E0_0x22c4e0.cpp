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

// Function: sub_0022C4E0
// Address: 0x22c4e0 - 0x22c548
void sub_0022C4E0_0x22c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C4E0_0x22c4e0");
#endif

    switch (ctx->pc) {
        case 0x22c514u: goto label_22c514;
        case 0x22c52cu: goto label_22c52c;
        default: break;
    }

    ctx->pc = 0x22c4e0u;

    // 0x22c4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c4e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22c4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22c4e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22c4ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c4f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22c4f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22c4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c4f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22c4fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22c4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c500: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22c500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x22c504: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x22c504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x22c508: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x22c508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x22c50c: 0xc08adae  jal         func_22B6B8
    ctx->pc = 0x22C50Cu;
    SET_GPR_U32(ctx, 31, 0x22C514u);
    ctx->pc = 0x22C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C50Cu;
    // 0x22c510: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B6B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B6B8u, 0x22C50Cu, 0x22C514u)) {
        return;
    }
    ctx->pc = 0x22C514u;
label_22c514:
    // 0x22c514: 0x8f8683f8  lw          $a2, -0x7C08($gp)
    ctx->pc = 0x22c514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22c518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c51c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22c51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c520: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x22c520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c524: 0xc08b0aa  jal         func_22C2A8
    ctx->pc = 0x22C524u;
    SET_GPR_U32(ctx, 31, 0x22C52Cu);
    ctx->pc = 0x22C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C524u;
    // 0x22c528: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C2A8u, 0x22C524u, 0x22C52Cu)) {
        return;
    }
    ctx->pc = 0x22C52Cu;
label_22c52c:
    // 0x22c52c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22c52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c530: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22c530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c534: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22c534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c53c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c540: 0x3e00008  jr          $ra
    ctx->pc = 0x22C540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C540u;
        // 0x22c544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C548u;
}
