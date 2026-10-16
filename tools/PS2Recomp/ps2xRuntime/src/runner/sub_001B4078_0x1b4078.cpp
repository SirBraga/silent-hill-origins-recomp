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

// Function: sub_001B4078
// Address: 0x1b4078 - 0x1b40b8
void sub_001B4078_0x1b4078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4078_0x1b4078");
#endif

    ctx->pc = 0x1b4078u;

    // 0x1b4078: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b4078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b407c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4080: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1b4080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1b4084: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x1b4084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4088: 0x0  nop
    ctx->pc = 0x1b4088u;
    // NOP
    // 0x1b408c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B408Cu;
    {
        const bool branch_taken_0x1b408c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B408Cu;
        // 0x1b4090: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b408c) {
            ctx->pc = 0x1B409Cu;
            goto label_1b409c;
        }
    }
    ctx->pc = 0x1B4094u;
    // 0x1b4094: 0xe48d0000  swc1        $f13, 0x0($a0)
    ctx->pc = 0x1b4094u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b4098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b409c:
    // 0x1b409c: 0x460f8001  sub.s       $f0, $f16, $f15
    ctx->pc = 0x1b409cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x1b40a0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1b40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b40a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b40a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b40a8: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x1b40a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1b40ac: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x1b40acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1b40b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B40B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40B0u;
        // 0x1b40b4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B40B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B40B8u;
}
