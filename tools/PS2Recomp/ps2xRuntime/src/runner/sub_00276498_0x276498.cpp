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

// Function: sub_00276498
// Address: 0x276498 - 0x2764e0
void sub_00276498_0x276498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276498_0x276498");
#endif

    switch (ctx->pc) {
        case 0x2764c0u: goto label_2764c0;
        case 0x2764d0u: goto label_2764d0;
        default: break;
    }

    ctx->pc = 0x276498u;

    // 0x276498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27649c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27649cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2764a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2764a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2764a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2764a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2764a8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2764a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2764ac: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x2764acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2764b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2764B0u;
    {
        const bool branch_taken_0x2764b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2764b0) {
            ctx->pc = 0x2764C8u;
            goto label_2764c8;
        }
    }
    ctx->pc = 0x2764B8u;
    // 0x2764b8: 0xc09d5d0  jal         func_275740
    ctx->pc = 0x2764B8u;
    SET_GPR_U32(ctx, 31, 0x2764C0u);
    ctx->pc = 0x2764BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2764B8u;
    // 0x2764bc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275740u, 0x2764B8u, 0x2764C0u)) {
        return;
    }
    ctx->pc = 0x2764C0u;
label_2764c0:
    // 0x2764c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2764C0u;
    {
        const bool branch_taken_0x2764c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2764C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764C0u;
        // 0x2764c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764c0) {
            ctx->pc = 0x2764D4u;
            goto label_2764d4;
        }
    }
    ctx->pc = 0x2764C8u;
label_2764c8:
    // 0x2764c8: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2764C8u;
    SET_GPR_U32(ctx, 31, 0x2764D0u);
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2764C8u, 0x2764D0u)) {
        return;
    }
    ctx->pc = 0x2764D0u;
label_2764d0:
    // 0x2764d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2764d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2764d4:
    // 0x2764d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2764d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2764d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2764D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2764DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764D8u;
        // 0x2764dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2764D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2764E0u;
}
