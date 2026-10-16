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

// Function: sub_002D7228
// Address: 0x2d7228 - 0x2d7278
void sub_002D7228_0x2d7228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7228_0x2d7228");
#endif

    switch (ctx->pc) {
        case 0x2d7254u: goto label_2d7254;
        default: break;
    }

    ctx->pc = 0x2d7228u;

    // 0x2d7228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d722c: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2d722cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2d7230: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x2d7230u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x2d7234: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2d7234u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
    // 0x2d7238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d723c: 0x24c67338  addiu       $a2, $a2, 0x7338
    ctx->pc = 0x2d723cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29496));
    // 0x2d7240: 0x24e77350  addiu       $a3, $a3, 0x7350
    ctx->pc = 0x2d7240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29520));
    // 0x2d7244: 0x25087358  addiu       $t0, $t0, 0x7358
    ctx->pc = 0x2d7244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29528));
    // 0x2d7248: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d7248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d724c: 0xc09579e  jal         func_255E78
    ctx->pc = 0x2D724Cu;
    SET_GPR_U32(ctx, 31, 0x2D7254u);
    ctx->pc = 0x2D7250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D724Cu;
    // 0x2d7250: 0x24050901  addiu       $a1, $zero, 0x901 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2305));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x2D724Cu, 0x2D7254u)) {
        return;
    }
    ctx->pc = 0x2D7254u;
label_2d7254:
    // 0x2d7254: 0xaf828b2c  sw          $v0, -0x74D4($gp)
    ctx->pc = 0x2d7254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 2));
    // 0x2d7258: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2d7258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x2d725c: 0x246372f8  addiu       $v1, $v1, 0x72F8
    ctx->pc = 0x2d725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29432));
    // 0x2d7260: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2d7260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2d7264: 0xac434058  sw          $v1, 0x4058($v0)
    ctx->pc = 0x2d7264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x684058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x684058u, _value); } while (0);
    // 0x2d7268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d726c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7270: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7270u;
        // 0x2d7274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7278u;
}
