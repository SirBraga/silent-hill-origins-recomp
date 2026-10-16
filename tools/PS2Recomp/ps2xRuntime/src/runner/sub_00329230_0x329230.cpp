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

// Function: sub_00329230
// Address: 0x329230 - 0x329270
void sub_00329230_0x329230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329230_0x329230");
#endif

    switch (ctx->pc) {
        case 0x329250u: goto label_329250;
        case 0x329260u: goto label_329260;
        default: break;
    }

    ctx->pc = 0x329230u;

    // 0x329230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x329230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329234: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329238: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x329238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32923c: 0x0  nop
    ctx->pc = 0x32923cu;
    // NOP
    // 0x329240: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x329240u;
    {
        const bool branch_taken_0x329240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329240u;
        // 0x329244: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329240) {
            ctx->pc = 0x329258u;
            goto label_329258;
        }
    }
    ctx->pc = 0x329248u;
    // 0x329248: 0xc07da6c  jal         func_1F69B0
    ctx->pc = 0x329248u;
    SET_GPR_U32(ctx, 31, 0x329250u);
    ctx->pc = 0x32924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329248u;
    // 0x32924c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F69B0u, 0x329248u, 0x329250u)) {
        return;
    }
    ctx->pc = 0x329250u;
label_329250:
    // 0x329250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x329250u;
    {
        const bool branch_taken_0x329250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329250u;
        // 0x329254: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329250) {
            ctx->pc = 0x329260u;
            goto label_329260;
        }
    }
    ctx->pc = 0x329258u;
label_329258:
    // 0x329258: 0xc07da6c  jal         func_1F69B0
    ctx->pc = 0x329258u;
    SET_GPR_U32(ctx, 31, 0x329260u);
    ctx->pc = 0x1F69B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F69B0u, 0x329258u, 0x329260u)) {
        return;
    }
    ctx->pc = 0x329260u;
label_329260:
    // 0x329260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329264: 0x3e00008  jr          $ra
    ctx->pc = 0x329264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329264u;
        // 0x329268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32926Cu;
    // 0x32926c: 0x0  nop
    ctx->pc = 0x32926cu;
    // NOP
    ctx->pc = 0x329270u;
}
