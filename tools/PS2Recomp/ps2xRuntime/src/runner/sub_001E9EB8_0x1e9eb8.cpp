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

// Function: sub_001E9EB8
// Address: 0x1e9eb8 - 0x1e9f70
void sub_001E9EB8_0x1e9eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9EB8_0x1e9eb8");
#endif

    ctx->pc = 0x1e9eb8u;

    // 0x1e9eb8: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9EB8u;
    {
        const bool branch_taken_0x1e9eb8 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x1E9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EB8u;
        // 0x1e9ebc: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9eb8) {
            ctx->pc = 0x1E9ED4u;
            goto label_1e9ed4;
        }
    }
    ctx->pc = 0x1E9EC0u;
    // 0x1e9ec0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e9ec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e9ec8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1e9ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e9ecc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9ECCu;
    {
        const bool branch_taken_0x1e9ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ecc) {
            ctx->pc = 0x1E9ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9ECCu;
            // 0x1e9ed0: 0xc4830000  lwc1        $f3, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9EE0u;
            goto label_1e9ee0;
        }
    }
    ctx->pc = 0x1E9ED4u;
label_1e9ed4:
    // 0x1e9ed4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1e9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e9ed8: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x1e9ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e9edc: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1e9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e9ee0:
    // 0x1e9ee0: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1e9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1e9ee4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e9ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ee8: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x1e9ee8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1e9eec: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1e9eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9ef0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e9ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e9ef4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1e9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e9ef8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e9ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e9efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9f00: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e9f00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e9f04: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e9f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9f08: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e9f08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e9f0c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1e9f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9f10: 0x0  nop
    ctx->pc = 0x1e9f10u;
    // NOP
    // 0x1e9f14: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9F14u;
    {
        const bool branch_taken_0x1e9f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9f14) {
            ctx->pc = 0x1E9F64u;
            goto label_1e9f64;
        }
    }
    ctx->pc = 0x1E9F1Cu;
    // 0x1e9f1c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1e9f1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e9f20: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9f24: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e9f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f2c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1e9f2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e9f30: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1e9f30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1e9f34: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1e9f34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e9f38: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1e9f38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1e9f3c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e9f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9f40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e9f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e9f44: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1e9f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1e9f48: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1e9f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9f4c: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x1e9f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1e9f50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e9f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e9f54: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1e9f58: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1e9f58u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1e9f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F5Cu;
        // 0x1e9f60: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9F64u;
label_1e9f64:
    // 0x1e9f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F64u;
        // 0x1e9f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9F6Cu;
    // 0x1e9f6c: 0x0  nop
    ctx->pc = 0x1e9f6cu;
    // NOP
    ctx->pc = 0x1e9f70u;
}
