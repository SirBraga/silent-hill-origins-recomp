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

// Function: sub_001CC5A8
// Address: 0x1cc5a8 - 0x1cc640
void sub_001CC5A8_0x1cc5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC5A8_0x1cc5a8");
#endif

    ctx->pc = 0x1cc5a8u;

    // 0x1cc5a8: 0x8c8302a0  lw          $v1, 0x2A0($a0)
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 672)));
    // 0x1cc5ac: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1cc5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cc5b0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CC5B0u;
    {
        const bool branch_taken_0x1cc5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5b0) {
            ctx->pc = 0x1CC638u;
            goto label_1cc638;
        }
    }
    ctx->pc = 0x1CC5B8u;
    // 0x1cc5b8: 0x8c820294  lw          $v0, 0x294($a0)
    ctx->pc = 0x1cc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 660)));
    // 0x1cc5bc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC5BCu;
    {
        const bool branch_taken_0x1cc5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5bc) {
            ctx->pc = 0x1CC5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC5BCu;
            // 0x1cc5c0: 0xc480029c  lwc1        $f0, 0x29C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC604u;
            goto label_1cc604;
        }
    }
    ctx->pc = 0x1CC5C4u;
    // 0x1cc5c4: 0xc4800298  lwc1        $f0, 0x298($a0)
    ctx->pc = 0x1cc5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc5c8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1cc5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1cc5cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cc5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cc5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc5d4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1cc5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1cc5d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc5d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc5dc: 0x0  nop
    ctx->pc = 0x1cc5dcu;
    // NOP
    // 0x1cc5e0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1CC5E0u;
    {
        const bool branch_taken_0x1cc5e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5E0u;
        // 0x1cc5e4: 0xe4800298  swc1        $f0, 0x298($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5e0) {
            ctx->pc = 0x1CC638u;
            goto label_1cc638;
        }
    }
    ctx->pc = 0x1CC5E8u;
    // 0x1cc5e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc5e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc5ec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1cc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cc5f0: 0xac8202a0  sw          $v0, 0x2A0($a0)
    ctx->pc = 0x1cc5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 672), GPR_U32(ctx, 2));
    // 0x1cc5f4: 0xe4800298  swc1        $f0, 0x298($a0)
    ctx->pc = 0x1cc5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
    // 0x1cc5f8: 0xe480029c  swc1        $f0, 0x29C($a0)
    ctx->pc = 0x1cc5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 668), bits); }
    // 0x1cc5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5FCu;
        // 0x1cc600: 0xac800294  sw          $zero, 0x294($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC604u;
label_1cc604:
    // 0x1cc604: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x1cc604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x1cc608: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cc608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cc60c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc610: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1cc610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1cc614: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc618: 0x0  nop
    ctx->pc = 0x1cc618u;
    // NOP
    // 0x1cc61c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC61Cu;
    {
        const bool branch_taken_0x1cc61c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC61Cu;
        // 0x1cc620: 0xe480029c  swc1        $f0, 0x29C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc61c) {
            ctx->pc = 0x1CC638u;
            goto label_1cc638;
        }
    }
    ctx->pc = 0x1CC624u;
    // 0x1cc624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc62c: 0xac820294  sw          $v0, 0x294($a0)
    ctx->pc = 0x1cc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 660), GPR_U32(ctx, 2));
    // 0x1cc630: 0xe4800298  swc1        $f0, 0x298($a0)
    ctx->pc = 0x1cc630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
    // 0x1cc634: 0xe480029c  swc1        $f0, 0x29C($a0)
    ctx->pc = 0x1cc634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 668), bits); }
label_1cc638:
    // 0x1cc638: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC640u;
}
