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

// Function: sub_002A81F8
// Address: 0x2a81f8 - 0x2a8240
void sub_002A81F8_0x2a81f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A81F8_0x2a81f8");
#endif

    switch (ctx->pc) {
        case 0x2a821cu: goto label_2a821c;
        case 0x2a8228u: goto label_2a8228;
        default: break;
    }

    ctx->pc = 0x2a81f8u;

    // 0x2a81f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a81f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a81fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a8200: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a8204: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a820c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2a820cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2a8210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8214: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x2A8214u;
    SET_GPR_U32(ctx, 31, 0x2A821Cu);
    ctx->pc = 0x2A8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8214u;
    // 0x2a8218: 0x24a5e300  addiu       $a1, $a1, -0x1D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x2A8214u, 0x2A821Cu)) {
        return;
    }
    ctx->pc = 0x2A821Cu;
label_2a821c:
    // 0x2a821c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a821cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8220: 0xc0aa098  jal         func_2A8260
    ctx->pc = 0x2A8220u;
    SET_GPR_U32(ctx, 31, 0x2A8228u);
    ctx->pc = 0x2A8224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8220u;
    // 0x2a8224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8260u, 0x2A8220u, 0x2A8228u)) {
        return;
    }
    ctx->pc = 0x2A8228u;
label_2a8228:
    // 0x2a8228: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a8228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a822c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a822cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8230: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a8230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8238: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8238u;
        // 0x2a823c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8240u;
}
