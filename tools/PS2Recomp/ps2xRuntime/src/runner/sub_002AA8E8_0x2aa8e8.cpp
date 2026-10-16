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

// Function: sub_002AA8E8
// Address: 0x2aa8e8 - 0x2aa9b8
void sub_002AA8E8_0x2aa8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA8E8_0x2aa8e8");
#endif

    ctx->pc = 0x2aa8e8u;

    // 0x2aa8e8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2aa8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa8ec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2aa8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa8f0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2aa8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa8f4: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2aa8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa8f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2aa8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2aa8fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2aa8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa900: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2aa900u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2aa904: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x2aa904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa908: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2aa908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2aa90c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2aa90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2aa910: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2aa910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2aa914: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa918: 0x460c0141  sub.s       $f5, $f0, $f12
    ctx->pc = 0x2aa918u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2aa91c: 0x46062836  c.le.s      $f5, $f6
    ctx->pc = 0x2aa91cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa920: 0x0  nop
    ctx->pc = 0x2aa920u;
    // NOP
    // 0x2aa924: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA924u;
    {
        const bool branch_taken_0x2aa924 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA924u;
        // 0x2aa928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa924) {
            ctx->pc = 0x2AA930u;
            goto label_2aa930;
        }
    }
    ctx->pc = 0x2AA92Cu;
    // 0x2aa92c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa930:
    // 0x2aa930: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AA930u;
    {
        const bool branch_taken_0x2aa930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa930) {
            ctx->pc = 0x2AA9ACu;
            goto label_2aa9ac;
        }
    }
    ctx->pc = 0x2AA938u;
    // 0x2aa938: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AA938u;
    {
        const bool branch_taken_0x2aa938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa938) {
            ctx->pc = 0x2AA93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA938u;
            // 0x2aa93c: 0xe4860000  swc1        $f6, 0x0($a0) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA99Cu;
            goto label_2aa99c;
        }
    }
    ctx->pc = 0x2AA940u;
    // 0x2aa940: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x2aa940u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2aa944: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2aa944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa948: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2aa948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa94c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2aa94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa950: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2aa950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa954: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa958: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2aa958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa95c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2aa95cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2aa960: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2aa960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa964: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2aa964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2aa968: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2aa968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2aa96c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aa970: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2aa970u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2aa974: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2aa974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa978: 0x0  nop
    ctx->pc = 0x2aa978u;
    // NOP
    // 0x2aa97c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2AA97Cu;
    {
        const bool branch_taken_0x2aa97c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA97Cu;
        // 0x2aa980: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa97c) {
            ctx->pc = 0x2AA9A8u;
            goto label_2aa9a8;
        }
    }
    ctx->pc = 0x2AA984u;
    // 0x2aa984: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2aa984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa988: 0x0  nop
    ctx->pc = 0x2aa988u;
    // NOP
    // 0x2aa98c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA98Cu;
    {
        const bool branch_taken_0x2aa98c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA98Cu;
        // 0x2aa990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa98c) {
            ctx->pc = 0x2AA9ACu;
            goto label_2aa9ac;
        }
    }
    ctx->pc = 0x2AA994u;
    // 0x2aa994: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA994u;
        // 0x2aa998: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA99Cu;
label_2aa99c:
    // 0x2aa99c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa9a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa9a4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2aa9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2aa9a8:
    // 0x2aa9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa9ac:
    // 0x2aa9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA9B4u;
    // 0x2aa9b4: 0x0  nop
    ctx->pc = 0x2aa9b4u;
    // NOP
    ctx->pc = 0x2aa9b8u;
}
