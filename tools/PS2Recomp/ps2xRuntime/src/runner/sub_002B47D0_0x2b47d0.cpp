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

// Function: sub_002B47D0
// Address: 0x2b47d0 - 0x2b4830
void sub_002B47D0_0x2b47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B47D0_0x2b47d0");
#endif

    ctx->pc = 0x2b47d0u;

    // 0x2b47d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b47d4: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x2b47d4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x2b47d8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b47dc: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2b47dcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2b47e0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b47e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b47e4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2b47e4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2b47e8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2b47e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b47ec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B47ECu;
    {
        const bool branch_taken_0x2b47ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b47ec) {
            ctx->pc = 0x2B480Cu;
            goto label_2b480c;
        }
    }
    ctx->pc = 0x2B47F4u;
    // 0x2b47f4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2b47f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b47f8: 0x0  nop
    ctx->pc = 0x2b47f8u;
    // NOP
    // 0x2b47fc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2B47FCu;
    {
        const bool branch_taken_0x2b47fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47FCu;
        // 0x2b4800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47fc) {
            ctx->pc = 0x2B4820u;
            goto label_2b4820;
        }
    }
    ctx->pc = 0x2B4804u;
    // 0x2b4804: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4804u;
        // 0x2b4808: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B480Cu;
label_2b480c:
    // 0x2b480c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b480cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4810: 0x0  nop
    ctx->pc = 0x2b4810u;
    // NOP
    // 0x2b4814: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4814u;
    {
        const bool branch_taken_0x2b4814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4814u;
        // 0x2b4818: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4814) {
            ctx->pc = 0x2B4820u;
            goto label_2b4820;
        }
    }
    ctx->pc = 0x2B481Cu;
    // 0x2b481c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4820:
    // 0x2b4820: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4828u;
    // 0x2b4828: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x2b4828u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x2b482c: 0x0  nop
    ctx->pc = 0x2b482cu;
    // NOP
    ctx->pc = 0x2b4830u;
}
