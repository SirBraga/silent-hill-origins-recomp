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

// Function: sub_00224F70
// Address: 0x224f70 - 0x225070
void sub_00224F70_0x224f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224F70_0x224f70");
#endif

    switch (ctx->pc) {
        case 0x224f98u: goto label_224f98;
        default: break;
    }

    ctx->pc = 0x224f70u;

    // 0x224f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224f74: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x224f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x224f78: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x224f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x224f7c: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x224f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x224f80: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x224f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224f84: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224f88: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x224f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224f8c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x224f8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f90: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x224f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x224f94: 0x0  nop
    ctx->pc = 0x224f94u;
    // NOP
label_224f98:
    // 0x224f98: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x224f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224f9c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x224f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224fa0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x224fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x224fa4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x224fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224fa8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x224fa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x224fac: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x224facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224fb0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x224fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x224fb4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x224fb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x224fb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224fbc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x224fbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x224fc0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x224fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224fc4: 0x0  nop
    ctx->pc = 0x224fc4u;
    // NOP
    // 0x224fc8: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
    ctx->pc = 0x224FC8u;
    {
        const bool branch_taken_0x224fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224fc8) {
            ctx->pc = 0x224FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224FC8u;
            // 0x224fcc: 0x8f8383a4  lw          $v1, -0x7C5C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225048u;
            goto label_225048;
        }
    }
    ctx->pc = 0x224FD0u;
    // 0x224fd0: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x224fd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x224fd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224fd8: 0x0  nop
    ctx->pc = 0x224fd8u;
    // NOP
    // 0x224fdc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x224FDCu;
    {
        const bool branch_taken_0x224fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224fdc) {
            ctx->pc = 0x224FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224FDCu;
            // 0x224fe0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224FE4u;
            goto label_224fe4;
        }
    }
    ctx->pc = 0x224FE4u;
label_224fe4:
    // 0x224fe4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x224fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x224fe8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x224fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x224fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x224ff0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x224ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x224ff4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x224FF4u;
    {
        const bool branch_taken_0x224ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FF4u;
        // 0x224ff8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ff4) {
            ctx->pc = 0x224F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224f98;
        }
    }
    ctx->pc = 0x224FFCu;
    // 0x224ffc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x224ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225000: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x225000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x225004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225008: 0x0  nop
    ctx->pc = 0x225008u;
    // NOP
    // 0x22500c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22500cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225010: 0x0  nop
    ctx->pc = 0x225010u;
    // NOP
    // 0x225014: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x225014u;
    {
        const bool branch_taken_0x225014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225014u;
        // 0x225018: 0xc782839c  lwc1        $f2, -0x7C64($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225014) {
            ctx->pc = 0x225058u;
            goto label_225058;
        }
    }
    ctx->pc = 0x22501Cu;
    // 0x22501c: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x22501cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x225020: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x225020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225024: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x225024u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x225028: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x225028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22502c: 0x0  nop
    ctx->pc = 0x22502cu;
    // NOP
    // 0x225030: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x225030u;
    {
        const bool branch_taken_0x225030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225030u;
        // 0x225034: 0x8f8383a8  lw          $v1, -0x7C58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225030) {
            ctx->pc = 0x225058u;
            goto label_225058;
        }
    }
    ctx->pc = 0x225038u;
    // 0x225038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22503c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x225040: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x225040u;
    {
        const bool branch_taken_0x225040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225040u;
        // 0x225044: 0xaf8383a8  sw          $v1, -0x7C58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225040) {
            ctx->pc = 0x225068u;
            goto label_225068;
        }
    }
    ctx->pc = 0x225048u;
label_225048:
    // 0x225048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22504c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x225050: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x225050u;
    {
        const bool branch_taken_0x225050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225050u;
        // 0x225054: 0xaf8383a4  sw          $v1, -0x7C5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225050) {
            ctx->pc = 0x225068u;
            goto label_225068;
        }
    }
    ctx->pc = 0x225058u;
label_225058:
    // 0x225058: 0x8f8383a0  lw          $v1, -0x7C60($gp)
    ctx->pc = 0x225058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x22505c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x22505cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225060: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x225060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x225064: 0xaf8383a0  sw          $v1, -0x7C60($gp)
    ctx->pc = 0x225064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935456), GPR_U32(ctx, 3));
label_225068:
    // 0x225068: 0x3e00008  jr          $ra
    ctx->pc = 0x225068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225068u;
        // 0x22506c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225070u;
}
