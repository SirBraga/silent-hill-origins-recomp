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

// Function: sub_001AA000
// Address: 0x1aa000 - 0x1aa030
void sub_001AA000_0x1aa000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA000_0x1aa000");
#endif

    switch (ctx->pc) {
        case 0x1aa014u: goto label_1aa014;
        case 0x1aa01cu: goto label_1aa01c;
        default: break;
    }

    ctx->pc = 0x1aa000u;

    // 0x1aa000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa004: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aa008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa00c: 0xc06a81e  jal         func_1AA078
    ctx->pc = 0x1AA00Cu;
    SET_GPR_U32(ctx, 31, 0x1AA014u);
    ctx->pc = 0x1AA010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA00Cu;
    // 0x1aa010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA078u, 0x1AA00Cu, 0x1AA014u)) {
        return;
    }
    ctx->pc = 0x1AA014u;
label_1aa014:
    // 0x1aa014: 0xc06a5a8  jal         func_1A96A0
    ctx->pc = 0x1AA014u;
    SET_GPR_U32(ctx, 31, 0x1AA01Cu);
    ctx->pc = 0x1AA018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA014u;
    // 0x1aa018: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A96A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A96A0u, 0x1AA014u, 0x1AA01Cu)) {
        return;
    }
    ctx->pc = 0x1AA01Cu;
label_1aa01c:
    // 0x1aa01c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa024: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA024u;
        // 0x1aa028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA02Cu;
    // 0x1aa02c: 0x0  nop
    ctx->pc = 0x1aa02cu;
    // NOP
    ctx->pc = 0x1aa030u;
}
