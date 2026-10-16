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

// Function: sub_0010F248
// Address: 0x10f248 - 0x10f280
void sub_0010F248_0x10f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F248_0x10f248");
#endif

    switch (ctx->pc) {
        case 0x10f268u: goto label_10f268;
        default: break;
    }

    ctx->pc = 0x10f248u;

    // 0x10f248: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10f248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f24c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x10f250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f254: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x10f254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f258: 0x8c6482f0  lw          $a0, -0x7D10($v1)
    ctx->pc = 0x10f258u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x10f25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f260: 0xc043232  jal         func_10C8C8
    ctx->pc = 0x10F260u;
    SET_GPR_U32(ctx, 31, 0x10F268u);
    ctx->pc = 0x10F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F260u;
    // 0x10f264: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10C8C8u, 0x10F260u, 0x10F268u)) {
        return;
    }
    ctx->pc = 0x10F268u;
label_10f268:
    // 0x10f268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f26c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F26Cu;
        // 0x10f270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F274u;
    // 0x10f274: 0x0  nop
    ctx->pc = 0x10f274u;
    // NOP
    // 0x10f278: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10f27c: 0x0  nop
    ctx->pc = 0x10f27cu;
    // NOP
    ctx->pc = 0x10f280u;
}
