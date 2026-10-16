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

// Function: sub_001E9E08
// Address: 0x1e9e08 - 0x1e9eb8
void sub_001E9E08_0x1e9e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9E08_0x1e9e08");
#endif

    ctx->pc = 0x1e9e08u;

    // 0x1e9e08: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9E08u;
    {
        const bool branch_taken_0x1e9e08 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x1E9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E08u;
        // 0x1e9e0c: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e08) {
            ctx->pc = 0x1E9E24u;
            goto label_1e9e24;
        }
    }
    ctx->pc = 0x1E9E10u;
    // 0x1e9e10: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1e9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e9e14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e9e18: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1e9e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e9e1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9E1Cu;
    {
        const bool branch_taken_0x1e9e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e1c) {
            ctx->pc = 0x1E9E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9E1Cu;
            // 0x1e9e20: 0xc4830000  lwc1        $f3, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9E30u;
            goto label_1e9e30;
        }
    }
    ctx->pc = 0x1E9E24u;
label_1e9e24:
    // 0x1e9e24: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1e9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e9e28: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x1e9e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e9e2c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1e9e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e9e30:
    // 0x1e9e30: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1e9e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1e9e34: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e9e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e38: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x1e9e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1e9e3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1e9e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9e40: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e9e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e9e44: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1e9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e9e48: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e9e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e9e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9e50: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e9e50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e9e54: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e9e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e58: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e9e58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e9e5c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1e9e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9e60: 0x0  nop
    ctx->pc = 0x1e9e60u;
    // NOP
    // 0x1e9e64: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9E64u;
    {
        const bool branch_taken_0x1e9e64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9e64) {
            ctx->pc = 0x1E9EACu;
            goto label_1e9eac;
        }
    }
    ctx->pc = 0x1E9E6Cu;
    // 0x1e9e6c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1e9e6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e9e70: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e9e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9e74: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e7c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1e9e7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e9e80: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1e9e80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1e9e84: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1e9e84u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1e9e88: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1e9e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e9e8c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1e9e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1e9e90: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e9e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e9e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e9e98: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1e9e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1e9e9c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1e9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9ea0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e9ea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e9ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EA4u;
        // 0x1e9ea8: 0xe4a10008  swc1        $f1, 0x8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9EACu;
label_1e9eac:
    // 0x1e9eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EACu;
        // 0x1e9eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9EB4u;
    // 0x1e9eb4: 0x0  nop
    ctx->pc = 0x1e9eb4u;
    // NOP
    ctx->pc = 0x1e9eb8u;
}
