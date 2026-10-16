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

// Function: sub_002B4250
// Address: 0x2b4250 - 0x2b42e0
void sub_002B4250_0x2b4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4250_0x2b4250");
#endif

    ctx->pc = 0x2b4250u;

    // 0x2b4250: 0x1085001f  beq         $a0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B4250u;
    {
        const bool branch_taken_0x2b4250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4250u;
        // 0x2b4254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4250) {
            ctx->pc = 0x2B42D0u;
            goto label_2b42d0;
        }
    }
    ctx->pc = 0x2B4258u;
    // 0x2b4258: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2b4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b425c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4260: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b4260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4264: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2B4264u;
    {
        const bool branch_taken_0x2b4264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4264) {
            ctx->pc = 0x2B42D4u;
            goto label_2b42d4;
        }
    }
    ctx->pc = 0x2B426Cu;
    // 0x2b426c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2b426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4270: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b4270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4274: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b4274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4278: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2B4278u;
    {
        const bool branch_taken_0x2b4278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4278) {
            ctx->pc = 0x2B42D4u;
            goto label_2b42d4;
        }
    }
    ctx->pc = 0x2B4280u;
    // 0x2b4280: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2b4280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4284: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b4284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4288: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b4288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b428c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2B428Cu;
    {
        const bool branch_taken_0x2b428c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b428c) {
            ctx->pc = 0x2B42D4u;
            goto label_2b42d4;
        }
    }
    ctx->pc = 0x2B4294u;
    // 0x2b4294: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2b4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4298: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2b4298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b429c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b429cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b42a0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2B42A0u;
    {
        const bool branch_taken_0x2b42a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b42a0) {
            ctx->pc = 0x2B42D4u;
            goto label_2b42d4;
        }
    }
    ctx->pc = 0x2B42A8u;
    // 0x2b42a8: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2b42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b42ac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b42b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b42b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b42b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B42B4u;
    {
        const bool branch_taken_0x2b42b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b42b4) {
            ctx->pc = 0x2B42D4u;
            goto label_2b42d4;
        }
    }
    ctx->pc = 0x2B42BCu;
    // 0x2b42bc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2b42bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b42c0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b42c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b42c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b42c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b42c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B42C8u;
    {
        const bool branch_taken_0x2b42c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b42c8) {
            ctx->pc = 0x2B42D4u;
            goto label_2b42d4;
        }
    }
    ctx->pc = 0x2B42D0u;
label_2b42d0:
    // 0x2b42d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b42d4:
    // 0x2b42d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B42D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B42D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B42DCu;
    // 0x2b42dc: 0x0  nop
    ctx->pc = 0x2b42dcu;
    // NOP
    ctx->pc = 0x2b42e0u;
}
