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

// Function: sub_0021C008
// Address: 0x21c008 - 0x21c038
void sub_0021C008_0x21c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C008_0x21c008");
#endif

    switch (ctx->pc) {
        case 0x21c008u: goto label_21c008;
        case 0x21c00cu: goto label_21c00c;
        case 0x21c010u: goto label_21c010;
        case 0x21c014u: goto label_21c014;
        case 0x21c018u: goto label_21c018;
        case 0x21c01cu: goto label_21c01c;
        case 0x21c020u: goto label_21c020;
        case 0x21c024u: goto label_21c024;
        case 0x21c028u: goto label_21c028;
        case 0x21c02cu: goto label_21c02c;
        case 0x21c030u: goto label_21c030;
        case 0x21c034u: goto label_21c034;
        default: break;
    }

    ctx->pc = 0x21c008u;

label_21c008:
    // 0x21c008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21c00c:
    // 0x21c00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c010:
    // 0x21c010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c014:
    // 0x21c014: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21c018:
    // 0x21c018: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21c01c:
    // 0x21c01c: 0x40f809  jalr        $v0
label_21c020:
    if (ctx->pc == 0x21C020u) {
        ctx->pc = 0x21C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C01Cu;
        // 0x21c020: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C024u;
        goto label_21c024;
    }
    ctx->pc = 0x21C01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C024u);
        ctx->pc = 0x21C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C01Cu;
        // 0x21c020: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C01Cu, 0x21C024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C024u;
label_21c024:
    // 0x21c024: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21c024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c028:
    // 0x21c028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c02c:
    // 0x21c02c: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x21c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
label_21c030:
    // 0x21c030: 0x3e00008  jr          $ra
label_21c034:
    if (ctx->pc == 0x21C034u) {
        ctx->pc = 0x21C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C030u;
        // 0x21c034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C038u;
        goto label_fallthrough_0x21c030;
    }
    ctx->pc = 0x21C030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C030u;
        // 0x21c034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21c030:
    ctx->pc = 0x21C038u;
}
