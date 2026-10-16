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

// Function: sub_001CD410
// Address: 0x1cd410 - 0x1cd478
void sub_001CD410_0x1cd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD410_0x1cd410");
#endif

    switch (ctx->pc) {
        case 0x1cd460u: goto label_1cd460;
        default: break;
    }

    ctx->pc = 0x1cd410u;

    // 0x1cd410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd420: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x1cd420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x1cd424: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD424u;
    {
        const bool branch_taken_0x1cd424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd424) {
            ctx->pc = 0x1CD428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD424u;
            // 0x1cd428: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD468u;
            goto label_1cd468;
        }
    }
    ctx->pc = 0x1CD42Cu;
    // 0x1cd42c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1cd42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd430: 0xc601029c  lwc1        $f1, 0x29C($s0)
    ctx->pc = 0x1cd430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd434: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1cd434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1cd438: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd43c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cd43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cd440: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1cd440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd444: 0x0  nop
    ctx->pc = 0x1cd444u;
    // NOP
    // 0x1cd448: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD448u;
    {
        const bool branch_taken_0x1cd448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD448u;
        // 0x1cd44c: 0xe601029c  swc1        $f1, 0x29C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd448) {
            ctx->pc = 0x1CD464u;
            goto label_1cd464;
        }
    }
    ctx->pc = 0x1CD450u;
    // 0x1cd450: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1cd450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cd454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd458: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CD458u;
    SET_GPR_U32(ctx, 31, 0x1CD460u);
    ctx->pc = 0x1CD45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD458u;
    // 0x1cd45c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CD458u, 0x1CD460u)) {
        return;
    }
    ctx->pc = 0x1CD460u;
label_1cd460:
    // 0x1cd460: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1cd460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
label_1cd464:
    // 0x1cd464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd468:
    // 0x1cd468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd46c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD46Cu;
        // 0x1cd470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD474u;
    // 0x1cd474: 0x0  nop
    ctx->pc = 0x1cd474u;
    // NOP
    ctx->pc = 0x1cd478u;
}
