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

// Function: sub_0030F7E8
// Address: 0x30f7e8 - 0x30f838
void sub_0030F7E8_0x30f7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F7E8_0x30f7e8");
#endif

    switch (ctx->pc) {
        case 0x30f80cu: goto label_30f80c;
        case 0x30f81cu: goto label_30f81c;
        default: break;
    }

    ctx->pc = 0x30f7e8u;

    // 0x30f7e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f7ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f7f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30f7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30f7f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30f7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f7f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30f7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f7fc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x30f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x30f800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f804: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x30F804u;
    SET_GPR_U32(ctx, 31, 0x30F80Cu);
    ctx->pc = 0x30F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F804u;
    // 0x30f808: 0x24a50f88  addiu       $a1, $a1, 0xF88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x30F804u, 0x30F80Cu)) {
        return;
    }
    ctx->pc = 0x30F80Cu;
label_30f80c:
    // 0x30f80c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x30f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x30f810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30f810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f814: 0xc0c3e10  jal         func_30F840
    ctx->pc = 0x30F814u;
    SET_GPR_U32(ctx, 31, 0x30F81Cu);
    ctx->pc = 0x30F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F814u;
    // 0x30f818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30F840u, 0x30F814u, 0x30F81Cu)) {
        return;
    }
    ctx->pc = 0x30F81Cu;
label_30f81c:
    // 0x30f81c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30f81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f824: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30f824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f82c: 0x3e00008  jr          $ra
    ctx->pc = 0x30F82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F82Cu;
        // 0x30f830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F834u;
    // 0x30f834: 0x0  nop
    ctx->pc = 0x30f834u;
    // NOP
    ctx->pc = 0x30f838u;
}
