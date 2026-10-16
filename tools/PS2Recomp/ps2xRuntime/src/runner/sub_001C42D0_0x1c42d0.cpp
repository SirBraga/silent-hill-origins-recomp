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

// Function: sub_001C42D0
// Address: 0x1c42d0 - 0x1c4348
void sub_001C42D0_0x1c42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C42D0_0x1c42d0");
#endif

    ctx->pc = 0x1c42d0u;

    // 0x1c42d0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C42D0u;
    {
        const bool branch_taken_0x1c42d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42D0u;
        // 0x1c42d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42d0) {
            ctx->pc = 0x1C4310u;
            goto label_1c4310;
        }
    }
    ctx->pc = 0x1C42D8u;
    // 0x1c42d8: 0xc48002d0  lwc1        $f0, 0x2D0($a0)
    ctx->pc = 0x1c42d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c42dc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c42dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c42e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c42e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c42e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c42e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c42e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c42e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c42ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c42ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c42f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c42f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c42f4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c42f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c42f8: 0x0  nop
    ctx->pc = 0x1c42f8u;
    // NOP
    // 0x1c42fc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1C42FCu;
    {
        const bool branch_taken_0x1c42fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42FCu;
        // 0x1c4300: 0xe48002d0  swc1        $f0, 0x2D0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42fc) {
            ctx->pc = 0x1C4340u;
            goto label_1c4340;
        }
    }
    ctx->pc = 0x1C4304u;
    // 0x1c4304: 0xe48202d0  swc1        $f2, 0x2D0($a0)
    ctx->pc = 0x1c4304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x1c4308: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4308u;
        // 0x1c430c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4310u;
label_1c4310:
    // 0x1c4310: 0xc48002d0  lwc1        $f0, 0x2D0($a0)
    ctx->pc = 0x1c4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4314: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c4314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c4318: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c4318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c431c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c431cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4320: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c4320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4324: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c4324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c4328: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c4328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c432c: 0x0  nop
    ctx->pc = 0x1c432cu;
    // NOP
    // 0x1c4330: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4330u;
    {
        const bool branch_taken_0x1c4330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4330u;
        // 0x1c4334: 0xe48002d0  swc1        $f0, 0x2D0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4330) {
            ctx->pc = 0x1C4340u;
            goto label_1c4340;
        }
    }
    ctx->pc = 0x1C4338u;
    // 0x1c4338: 0xe48202d0  swc1        $f2, 0x2D0($a0)
    ctx->pc = 0x1c4338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x1c433c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c433cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4340:
    // 0x1c4340: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4348u;
}
