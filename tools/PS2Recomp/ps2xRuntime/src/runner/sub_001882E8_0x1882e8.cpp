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

// Function: sub_001882E8
// Address: 0x1882e8 - 0x188320
void sub_001882E8_0x1882e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001882E8_0x1882e8");
#endif

    switch (ctx->pc) {
        case 0x18830cu: goto label_18830c;
        default: break;
    }

    ctx->pc = 0x1882e8u;

    // 0x1882e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1882e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1882ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1882ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1882f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1882f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1882f4: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x1882f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
    // 0x1882f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1882f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1882fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1882fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188300: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x188300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x188304: 0xc0620ee  jal         func_1883B8
    ctx->pc = 0x188304u;
    SET_GPR_U32(ctx, 31, 0x18830Cu);
    ctx->pc = 0x188308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188304u;
    // 0x188308: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1883B8u, 0x188304u, 0x18830Cu)) {
        return;
    }
    ctx->pc = 0x18830Cu;
label_18830c:
    // 0x18830c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18830cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188314: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x188314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188318: 0x3e00008  jr          $ra
    ctx->pc = 0x188318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188318u;
        // 0x18831c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188320u;
}
