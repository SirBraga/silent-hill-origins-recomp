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

// Function: sub_00171B68
// Address: 0x171b68 - 0x171c10
void sub_00171B68_0x171b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171B68_0x171b68");
#endif

    switch (ctx->pc) {
        case 0x171b80u: goto label_171b80;
        default: break;
    }

    ctx->pc = 0x171b68u;

    // 0x171b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171b6c: 0x24870090  addiu       $a3, $a0, 0x90
    ctx->pc = 0x171b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x171b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171b74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b78: 0xc093afa  jal         func_24EBE8
    ctx->pc = 0x171B78u;
    SET_GPR_U32(ctx, 31, 0x171B80u);
    ctx->pc = 0x171B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B78u;
    // 0x171b7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x171B78u, 0x171B80u)) {
        return;
    }
    ctx->pc = 0x171B80u;
label_171b80:
    // 0x171b80: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x171b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171b84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x171b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x171b88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x171b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x171b8c: 0x0  nop
    ctx->pc = 0x171b8cu;
    // NOP
    // 0x171b90: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x171b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171b94: 0x0  nop
    ctx->pc = 0x171b94u;
    // NOP
    // 0x171b98: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x171B98u;
    {
        const bool branch_taken_0x171b98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B98u;
        // 0x171b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b98) {
            ctx->pc = 0x171C00u;
            goto label_171c00;
        }
    }
    ctx->pc = 0x171BA0u;
    // 0x171ba0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x171ba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x171ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171ba8: 0x0  nop
    ctx->pc = 0x171ba8u;
    // NOP
    // 0x171bac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171bb0: 0x0  nop
    ctx->pc = 0x171bb0u;
    // NOP
    // 0x171bb4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x171BB4u;
    {
        const bool branch_taken_0x171bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BB4u;
        // 0x171bb8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bb4) {
            ctx->pc = 0x171C00u;
            goto label_171c00;
        }
    }
    ctx->pc = 0x171BBCu;
    // 0x171bbc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x171bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171bc0: 0x0  nop
    ctx->pc = 0x171bc0u;
    // NOP
    // 0x171bc4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x171BC4u;
    {
        const bool branch_taken_0x171bc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BC4u;
        // 0x171bc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bc4) {
            ctx->pc = 0x171C04u;
            goto label_171c04;
        }
    }
    ctx->pc = 0x171BCCu;
    // 0x171bcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171bd0: 0x0  nop
    ctx->pc = 0x171bd0u;
    // NOP
    // 0x171bd4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x171BD4u;
    {
        const bool branch_taken_0x171bd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BD4u;
        // 0x171bd8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bd4) {
            ctx->pc = 0x171C04u;
            goto label_171c04;
        }
    }
    ctx->pc = 0x171BDCu;
    // 0x171bdc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x171bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171be0: 0x0  nop
    ctx->pc = 0x171be0u;
    // NOP
    // 0x171be4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x171BE4u;
    {
        const bool branch_taken_0x171be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171be4) {
            ctx->pc = 0x171C04u;
            goto label_171c04;
        }
    }
    ctx->pc = 0x171BECu;
    // 0x171bec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171bf0: 0x0  nop
    ctx->pc = 0x171bf0u;
    // NOP
    // 0x171bf4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x171BF4u;
    {
        const bool branch_taken_0x171bf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x171BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BF4u;
        // 0x171bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bf4) {
            ctx->pc = 0x171C04u;
            goto label_171c04;
        }
    }
    ctx->pc = 0x171BFCu;
    // 0x171bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171c00:
    // 0x171c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171c04:
    // 0x171c04: 0x3e00008  jr          $ra
    ctx->pc = 0x171C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C04u;
        // 0x171c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C0Cu;
    // 0x171c0c: 0x0  nop
    ctx->pc = 0x171c0cu;
    // NOP
    ctx->pc = 0x171c10u;
}
