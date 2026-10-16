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

// Function: sub_001B2350
// Address: 0x1b2350 - 0x1b23a0
void sub_001B2350_0x1b2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2350_0x1b2350");
#endif

    switch (ctx->pc) {
        case 0x1b236cu: goto label_1b236c;
        case 0x1b2374u: goto label_1b2374;
        default: break;
    }

    ctx->pc = 0x1b2350u;

    // 0x1b2350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2354: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b2354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2358: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b235c: 0x2404024c  addiu       $a0, $zero, 0x24C
    ctx->pc = 0x1b235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
    // 0x1b2360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2364: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B2364u;
    SET_GPR_U32(ctx, 31, 0x1B236Cu);
    ctx->pc = 0x1B2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2364u;
    // 0x1b2368: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B2364u, 0x1B236Cu)) {
        return;
    }
    ctx->pc = 0x1B236Cu;
label_1b236c:
    // 0x1b236c: 0xc06bd8e  jal         func_1AF638
    ctx->pc = 0x1B236Cu;
    SET_GPR_U32(ctx, 31, 0x1B2374u);
    ctx->pc = 0x1B2370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B236Cu;
    // 0x1b2370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF638u, 0x1B236Cu, 0x1B2374u)) {
        return;
    }
    ctx->pc = 0x1B2374u;
label_1b2374:
    // 0x1b2374: 0xae029168  sw          $v0, -0x6E98($s0)
    ctx->pc = 0x1b2374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294938984), GPR_U32(ctx, 2));
    // 0x1b2378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b237c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b237cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2380: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2380u;
        // 0x1b2384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2388u;
    // 0x1b2388: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b2388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b238c: 0x0  nop
    ctx->pc = 0x1b238cu;
    // NOP
    // 0x1b2390: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b2394: 0x0  nop
    ctx->pc = 0x1b2394u;
    // NOP
    // 0x1b2398: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b2398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b239c: 0x0  nop
    ctx->pc = 0x1b239cu;
    // NOP
    ctx->pc = 0x1b23a0u;
}
