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

// Function: sub_00315008
// Address: 0x315008 - 0x315030
void sub_00315008_0x315008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315008_0x315008");
#endif

    switch (ctx->pc) {
        case 0x315024u: goto label_315024;
        default: break;
    }

    ctx->pc = 0x315008u;

    // 0x315008: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x315008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31500c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x315010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315014: 0x8c446ccc  lw          $a0, 0x6CCC($v0)
    ctx->pc = 0x315014u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x315018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x315018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31501c: 0xc0c540c  jal         func_315030
    ctx->pc = 0x31501Cu;
    SET_GPR_U32(ctx, 31, 0x315024u);
    ctx->pc = 0x315020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31501Cu;
    // 0x315020: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315030u, 0x31501Cu, 0x315024u)) {
        return;
    }
    ctx->pc = 0x315024u;
label_315024:
    // 0x315024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x315024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315028: 0x3e00008  jr          $ra
    ctx->pc = 0x315028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315028u;
        // 0x31502c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315030u;
}
