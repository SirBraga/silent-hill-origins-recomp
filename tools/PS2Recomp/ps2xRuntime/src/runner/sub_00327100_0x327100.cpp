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

// Function: sub_00327100
// Address: 0x327100 - 0x327158
void sub_00327100_0x327100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327100_0x327100");
#endif

    switch (ctx->pc) {
        case 0x327110u: goto label_327110;
        case 0x327118u: goto label_327118;
        case 0x327120u: goto label_327120;
        case 0x327128u: goto label_327128;
        case 0x327130u: goto label_327130;
        case 0x327138u: goto label_327138;
        case 0x327140u: goto label_327140;
        case 0x327148u: goto label_327148;
        default: break;
    }

    ctx->pc = 0x327100u;

    // 0x327100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327108: 0xc0c9bbe  jal         func_326EF8
    ctx->pc = 0x327108u;
    SET_GPR_U32(ctx, 31, 0x327110u);
    ctx->pc = 0x326EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EF8u, 0x327108u, 0x327110u)) {
        return;
    }
    ctx->pc = 0x327110u;
label_327110:
    // 0x327110: 0xc0c9bfc  jal         func_326FF0
    ctx->pc = 0x327110u;
    SET_GPR_U32(ctx, 31, 0x327118u);
    ctx->pc = 0x326FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326FF0u, 0x327110u, 0x327118u)) {
        return;
    }
    ctx->pc = 0x327118u;
label_327118:
    // 0x327118: 0xc0c9cea  jal         func_3273A8
    ctx->pc = 0x327118u;
    SET_GPR_U32(ctx, 31, 0x327120u);
    ctx->pc = 0x3273A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3273A8u, 0x327118u, 0x327120u)) {
        return;
    }
    ctx->pc = 0x327120u;
label_327120:
    // 0x327120: 0xc0c9d48  jal         func_327520
    ctx->pc = 0x327120u;
    SET_GPR_U32(ctx, 31, 0x327128u);
    ctx->pc = 0x327124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327120u;
    // 0x327124: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327520u, 0x327120u, 0x327128u)) {
        return;
    }
    ctx->pc = 0x327128u;
label_327128:
    // 0x327128: 0xc0c9da0  jal         func_327680
    ctx->pc = 0x327128u;
    SET_GPR_U32(ctx, 31, 0x327130u);
    ctx->pc = 0x327680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327680u, 0x327128u, 0x327130u)) {
        return;
    }
    ctx->pc = 0x327130u;
label_327130:
    // 0x327130: 0xc0c87f4  jal         func_321FD0
    ctx->pc = 0x327130u;
    SET_GPR_U32(ctx, 31, 0x327138u);
    ctx->pc = 0x321FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321FD0u, 0x327130u, 0x327138u)) {
        return;
    }
    ctx->pc = 0x327138u;
label_327138:
    // 0x327138: 0xc0c9c8a  jal         func_327228
    ctx->pc = 0x327138u;
    SET_GPR_U32(ctx, 31, 0x327140u);
    ctx->pc = 0x327228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327228u, 0x327138u, 0x327140u)) {
        return;
    }
    ctx->pc = 0x327140u;
label_327140:
    // 0x327140: 0xc0ca192  jal         func_328648
    ctx->pc = 0x327140u;
    SET_GPR_U32(ctx, 31, 0x327148u);
    ctx->pc = 0x328648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328648u, 0x327140u, 0x327148u)) {
        return;
    }
    ctx->pc = 0x327148u;
label_327148:
    // 0x327148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32714c: 0x80ca0e8  j           func_3283A0
    ctx->pc = 0x32714Cu;
    ctx->pc = 0x327150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32714Cu;
    // 0x327150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283A0u, 0x32714Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327154u;
    // 0x327154: 0x0  nop
    ctx->pc = 0x327154u;
    // NOP
    ctx->pc = 0x327158u;
}
