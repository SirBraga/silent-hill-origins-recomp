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

// Function: sub_0029AAE8
// Address: 0x29aae8 - 0x29ab18
void sub_0029AAE8_0x29aae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AAE8_0x29aae8");
#endif

    switch (ctx->pc) {
        case 0x29ab0cu: goto label_29ab0c;
        default: break;
    }

    ctx->pc = 0x29aae8u;

    // 0x29aae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29aae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29aaec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29aaf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29aaf4: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x29aaf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29aaf8: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x29aaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x29aafc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AAFCu;
    {
        const bool branch_taken_0x29aafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAFCu;
        // 0x29ab00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aafc) {
            ctx->pc = 0x29AB10u;
            goto label_29ab10;
        }
    }
    ctx->pc = 0x29AB04u;
    // 0x29ab04: 0xc0a6658  jal         func_299960
    ctx->pc = 0x29AB04u;
    SET_GPR_U32(ctx, 31, 0x29AB0Cu);
    ctx->pc = 0x299960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299960u, 0x29AB04u, 0x29AB0Cu)) {
        return;
    }
    ctx->pc = 0x29AB0Cu;
label_29ab0c:
    // 0x29ab0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ab0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ab10:
    // 0x29ab10: 0x3e00008  jr          $ra
    ctx->pc = 0x29AB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB10u;
        // 0x29ab14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AB18u;
}
