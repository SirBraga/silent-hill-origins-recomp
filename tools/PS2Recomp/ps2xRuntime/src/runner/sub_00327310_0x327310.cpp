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

// Function: sub_00327310
// Address: 0x327310 - 0x327340
void sub_00327310_0x327310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327310_0x327310");
#endif

    switch (ctx->pc) {
        case 0x327324u: goto label_327324;
        default: break;
    }

    ctx->pc = 0x327310u;

    // 0x327310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32731c: 0xc0c9cc2  jal         func_327308
    ctx->pc = 0x32731Cu;
    SET_GPR_U32(ctx, 31, 0x327324u);
    ctx->pc = 0x327320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32731Cu;
    // 0x327320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327308u, 0x32731Cu, 0x327324u)) {
        return;
    }
    ctx->pc = 0x327324u;
label_327324:
    // 0x327324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32732c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32732cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327330: 0x80c83d0  j           func_320F40
    ctx->pc = 0x327330u;
    ctx->pc = 0x327334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327330u;
    // 0x327334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F40u, 0x327330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327338u;
    // 0x327338: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x327338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32733c: 0x0  nop
    ctx->pc = 0x32733cu;
    // NOP
    ctx->pc = 0x327340u;
}
