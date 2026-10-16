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

// Function: sub_00126248
// Address: 0x126248 - 0x126278
void sub_00126248_0x126248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126248_0x126248");
#endif

    switch (ctx->pc) {
        case 0x126268u: goto label_126268;
        default: break;
    }

    ctx->pc = 0x126248u;

    // 0x126248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12624c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12624cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126258: 0x24440e88  addiu       $a0, $v0, 0xE88
    ctx->pc = 0x126258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3720));
    // 0x12625c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x12625cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x126260: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x126260u;
    SET_GPR_U32(ctx, 31, 0x126268u);
    ctx->pc = 0x126264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126260u;
    // 0x126264: 0xac400ea8  sw          $zero, 0xEA8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 3752), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x126260u, 0x126268u)) {
        return;
    }
    ctx->pc = 0x126268u;
label_126268:
    // 0x126268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12626c: 0x3e00008  jr          $ra
    ctx->pc = 0x12626Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12626Cu;
        // 0x126270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12626Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126274u;
    // 0x126274: 0x0  nop
    ctx->pc = 0x126274u;
    // NOP
    ctx->pc = 0x126278u;
}
