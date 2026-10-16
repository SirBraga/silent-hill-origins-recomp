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

// Function: sub_003112C8
// Address: 0x3112c8 - 0x311560
void sub_003112C8_0x3112c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003112C8_0x3112c8");
#endif

    switch (ctx->pc) {
        case 0x3112f0u: goto label_3112f0;
        case 0x311330u: goto label_311330;
        case 0x311428u: goto label_311428;
        case 0x311478u: goto label_311478;
        case 0x3114a8u: goto label_3114a8;
        case 0x311508u: goto label_311508;
        default: break;
    }

    ctx->pc = 0x3112c8u;

    // 0x3112c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3112c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3112cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3112ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3112d0: 0xc4413dec  lwc1        $f1, 0x3DEC($v0)
    ctx->pc = 0x3112d0u;
    { uint32_t bits = FAST_READ32(0x6B3DECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3112d4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3112d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3112d8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3112d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3112dc: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x3112dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x3112e0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3112e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3112e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3112E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3112E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112E4u;
        // 0x3112e8: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3112E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3112ECu;
    // 0x3112ec: 0x0  nop
    ctx->pc = 0x3112ecu;
    // NOP
label_3112f0:
    // 0x3112f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3112f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3112f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3112f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3112f8: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x3112f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3112fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3112fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311300: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x311300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x311304: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x311304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x311308: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x311308u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x31130c: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x31130cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x311310: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x311310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x311314: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x311314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x311318: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x311318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x31131c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x31131cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x311320: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x311320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x311324: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x311324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x311328: 0x3e00008  jr          $ra
    ctx->pc = 0x311328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311328u;
        // 0x31132c: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311330u;
label_311330:
    // 0x311330: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x311330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x311334: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x311334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311338: 0xc4403df0  lwc1        $f0, 0x3DF0($v0)
    ctx->pc = 0x311338u;
    { uint32_t bits = FAST_READ32(0x6B3DF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31133c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x31133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x311340: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x311340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x311344: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x311344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x311348: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x311348u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x31134c: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x31134cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x311350: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x311350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x311354: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x311354u;
    {
        const bool branch_taken_0x311354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x311358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311354u;
        // 0x311358: 0xe4e00014  swc1        $f0, 0x14($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311354) {
            ctx->pc = 0x31141Cu;
            goto label_31141c;
        }
    }
    ctx->pc = 0x31135Cu;
    // 0x31135c: 0xc7828360  lwc1        $f2, -0x7CA0($gp)
    ctx->pc = 0x31135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311360: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x311360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311364: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x311364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311368: 0x0  nop
    ctx->pc = 0x311368u;
    // NOP
    // 0x31136c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x31136Cu;
    {
        const bool branch_taken_0x31136c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31136c) {
            ctx->pc = 0x311370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31136Cu;
            // 0x311370: 0x460010c7  neg.s       $f3, $f2 (Delay Slot)
            ctx->f[3] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311388u;
            goto label_311388;
        }
    }
    ctx->pc = 0x311374u;
    // 0x311374: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x311374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x311378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31137c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31137Cu;
    {
        const bool branch_taken_0x31137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31137Cu;
        // 0x311380: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31137c) {
            ctx->pc = 0x311420u;
            goto label_311420;
        }
    }
    ctx->pc = 0x311384u;
    // 0x311384: 0x0  nop
    ctx->pc = 0x311384u;
    // NOP
label_311388:
    // 0x311388: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x311388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31138c: 0x0  nop
    ctx->pc = 0x31138cu;
    // NOP
    // 0x311390: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x311390u;
    {
        const bool branch_taken_0x311390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311390) {
            ctx->pc = 0x311394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311390u;
            // 0x311394: 0xc4a00024  lwc1        $f0, 0x24($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3113A8u;
            goto label_3113a8;
        }
    }
    ctx->pc = 0x311398u;
    // 0x311398: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x311398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31139c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31139cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3113a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3113A0u;
    {
        const bool branch_taken_0x3113a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113A0u;
        // 0x3113a4: 0xe4e00010  swc1        $f0, 0x10($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113a0) {
            ctx->pc = 0x311420u;
            goto label_311420;
        }
    }
    ctx->pc = 0x3113A8u;
label_3113a8:
    // 0x3113a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3113a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3113ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3113ACu;
    {
        const bool branch_taken_0x3113ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3113ac) {
            ctx->pc = 0x3113C4u;
            goto label_3113c4;
        }
    }
    ctx->pc = 0x3113B4u;
    // 0x3113b4: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x3113b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3113b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3113b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3113bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3113BCu;
    {
        const bool branch_taken_0x3113bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113BCu;
        // 0x3113c0: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113bc) {
            ctx->pc = 0x311420u;
            goto label_311420;
        }
    }
    ctx->pc = 0x3113C4u;
label_3113c4:
    // 0x3113c4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3113c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3113c8: 0x0  nop
    ctx->pc = 0x3113c8u;
    // NOP
    // 0x3113cc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3113CCu;
    {
        const bool branch_taken_0x3113cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3113cc) {
            ctx->pc = 0x3113D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3113CCu;
            // 0x3113d0: 0xc4a00028  lwc1        $f0, 0x28($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3113E4u;
            goto label_3113e4;
        }
    }
    ctx->pc = 0x3113D4u;
    // 0x3113d4: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x3113d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3113d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3113d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3113dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3113DCu;
    {
        const bool branch_taken_0x3113dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113DCu;
        // 0x3113e0: 0xe4e00014  swc1        $f0, 0x14($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113dc) {
            ctx->pc = 0x311420u;
            goto label_311420;
        }
    }
    ctx->pc = 0x3113E4u;
label_3113e4:
    // 0x3113e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3113e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3113e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3113E8u;
    {
        const bool branch_taken_0x3113e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3113e8) {
            ctx->pc = 0x311400u;
            goto label_311400;
        }
    }
    ctx->pc = 0x3113F0u;
    // 0x3113f0: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x3113f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3113f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3113f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3113f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3113F8u;
    {
        const bool branch_taken_0x3113f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113F8u;
        // 0x3113fc: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113f8) {
            ctx->pc = 0x311420u;
            goto label_311420;
        }
    }
    ctx->pc = 0x311400u;
label_311400:
    // 0x311400: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x311400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311404: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x311404u;
    {
        const bool branch_taken_0x311404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311404) {
            ctx->pc = 0x311420u;
            goto label_311420;
        }
    }
    ctx->pc = 0x31140Cu;
    // 0x31140c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x31140cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311410: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x311410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x311414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x311414u;
    {
        const bool branch_taken_0x311414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311414u;
        // 0x311418: 0xe4e00018  swc1        $f0, 0x18($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311414) {
            ctx->pc = 0x311420u;
            goto label_311420;
        }
    }
    ctx->pc = 0x31141Cu;
label_31141c:
    // 0x31141c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x31141cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_311420:
    // 0x311420: 0x3e00008  jr          $ra
    ctx->pc = 0x311420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311420u;
        // 0x311424: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311428u;
label_311428:
    // 0x311428: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x311428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31142c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x31142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311430: 0xc4423df4  lwc1        $f2, 0x3DF4($v0)
    ctx->pc = 0x311430u;
    { uint32_t bits = FAST_READ32(0x6B3DF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311434: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x311434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311438: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x311438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31143c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31143cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x311440: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x311440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x311444: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x311444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311448: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x311448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31144c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x31144cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x311450: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x311450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311454: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x311454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311458: 0x0  nop
    ctx->pc = 0x311458u;
    // NOP
    // 0x31145c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x31145Cu;
    {
        const bool branch_taken_0x31145c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31145c) {
            ctx->pc = 0x311460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31145Cu;
            // 0x311460: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31146Cu;
            goto label_31146c;
        }
    }
    ctx->pc = 0x311464u;
    // 0x311464: 0x3e00008  jr          $ra
    ctx->pc = 0x311464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311464u;
        // 0x311468: 0xe4430008  swc1        $f3, 0x8($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31146Cu;
label_31146c:
    // 0x31146c: 0x3e00008  jr          $ra
    ctx->pc = 0x31146Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31146Cu;
        // 0x311470: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31146Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311474u;
    // 0x311474: 0x0  nop
    ctx->pc = 0x311474u;
    // NOP
label_311478:
    // 0x311478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31147c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31147cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311480: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x311480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x311484: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x311484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311488: 0xace30050  sw          $v1, 0x50($a3)
    ctx->pc = 0x311488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
    // 0x31148c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x31148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x311490: 0xa4e00054  sh          $zero, 0x54($a3)
    ctx->pc = 0x311490u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x311494: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x311494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x311498: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x311498u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x31149c: 0x3e00008  jr          $ra
    ctx->pc = 0x31149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3114A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31149Cu;
        // 0x3114a0: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31149Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3114A4u;
    // 0x3114a4: 0x0  nop
    ctx->pc = 0x3114a4u;
    // NOP
label_3114a8:
    // 0x3114a8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3114A8u;
    {
        const bool branch_taken_0x3114a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3114a8) {
            ctx->pc = 0x3114C8u;
            goto label_3114c8;
        }
    }
    ctx->pc = 0x3114B0u;
    // 0x3114b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3114b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3114b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3114b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3114b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3114b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x3114bc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x3114bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3114c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3114C0u;
    {
        const bool branch_taken_0x3114c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3114C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114C0u;
        // 0x3114c4: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114c0) {
            ctx->pc = 0x3114E0u;
            goto label_3114e0;
        }
    }
    ctx->pc = 0x3114C8u;
label_3114c8:
    // 0x3114c8: 0x68a20027  ldl         $v0, 0x27($a1)
    ctx->pc = 0x3114c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3114cc: 0x6ca20020  ldr         $v0, 0x20($a1)
    ctx->pc = 0x3114ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3114d0: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x3114d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3114d4: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x3114d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3114d8: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x3114d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3114dc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3114dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_3114e0:
    // 0x3114e0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3114E0u;
    {
        const bool branch_taken_0x3114e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3114e0) {
            ctx->pc = 0x3114E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3114E0u;
            // 0x3114e4: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114F0u;
            goto label_3114f0;
        }
    }
    ctx->pc = 0x3114E8u;
    // 0x3114e8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x3114e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3114ec: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x3114ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_3114f0:
    // 0x3114f0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3114f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3114f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3114f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3114f8: 0xc4603df8  lwc1        $f0, 0x3DF8($v1)
    ctx->pc = 0x3114f8u;
    { uint32_t bits = FAST_READ32(0x6B3DF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3114fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3114FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114FCu;
        // 0x311500: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3114FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311504u;
    // 0x311504: 0x0  nop
    ctx->pc = 0x311504u;
    // NOP
label_311508:
    // 0x311508: 0xc7818364  lwc1        $f1, -0x7C9C($gp)
    ctx->pc = 0x311508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31150c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x31150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x311510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311514: 0x0  nop
    ctx->pc = 0x311514u;
    // NOP
    // 0x311518: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x311518u;
    {
        const bool branch_taken_0x311518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311518u;
        // 0x31151c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311518) {
            ctx->pc = 0x311528u;
            goto label_311528;
        }
    }
    ctx->pc = 0x311520u;
    // 0x311520: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x311520u;
    {
        const bool branch_taken_0x311520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311520u;
        // 0x311524: 0xc4403dfc  lwc1        $f0, 0x3DFC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311520) {
            ctx->pc = 0x31152Cu;
            goto label_31152c;
        }
    }
    ctx->pc = 0x311528u;
label_311528:
    // 0x311528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31152c:
    // 0x31152c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x31152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x311530: 0xc7818368  lwc1        $f1, -0x7C98($gp)
    ctx->pc = 0x311530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311534: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x311534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311538: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x311538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31153c: 0x0  nop
    ctx->pc = 0x31153cu;
    // NOP
    // 0x311540: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x311540u;
    {
        const bool branch_taken_0x311540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x311544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311540u;
        // 0x311544: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311540) {
            ctx->pc = 0x311550u;
            goto label_311550;
        }
    }
    ctx->pc = 0x311548u;
    // 0x311548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x311548u;
    {
        const bool branch_taken_0x311548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311548u;
        // 0x31154c: 0xc4403e00  lwc1        $f0, 0x3E00($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311548) {
            ctx->pc = 0x311554u;
            goto label_311554;
        }
    }
    ctx->pc = 0x311550u;
label_311550:
    // 0x311550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311554:
    // 0x311554: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x311554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x311558: 0x3e00008  jr          $ra
    ctx->pc = 0x311558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311558u;
        // 0x31155c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311560u;
}
