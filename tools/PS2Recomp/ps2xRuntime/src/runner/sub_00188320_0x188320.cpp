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

// Function: sub_00188320
// Address: 0x188320 - 0x188358
void sub_00188320_0x188320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188320_0x188320");
#endif

    switch (ctx->pc) {
        case 0x188340u: goto label_188340;
        default: break;
    }

    ctx->pc = 0x188320u;

    // 0x188320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188324: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x188324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x188328: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x188328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18832c: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
    // 0x188330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188338: 0xc0620ee  jal         func_1883B8
    ctx->pc = 0x188338u;
    SET_GPR_U32(ctx, 31, 0x188340u);
    ctx->pc = 0x18833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188338u;
    // 0x18833c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1883B8u, 0x188338u, 0x188340u)) {
        return;
    }
    ctx->pc = 0x188340u;
label_188340:
    // 0x188340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x188340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x188348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18834c: 0x3e00008  jr          $ra
    ctx->pc = 0x18834Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18834Cu;
        // 0x188350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18834Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188354u;
    // 0x188354: 0x0  nop
    ctx->pc = 0x188354u;
    // NOP
    ctx->pc = 0x188358u;
}
