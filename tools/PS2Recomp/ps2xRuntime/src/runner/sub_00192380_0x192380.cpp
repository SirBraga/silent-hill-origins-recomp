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

// Function: sub_00192380
// Address: 0x192380 - 0x192468
void sub_00192380_0x192380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192380_0x192380");
#endif

    switch (ctx->pc) {
        case 0x1923acu: goto label_1923ac;
        default: break;
    }

    ctx->pc = 0x192380u;

    // 0x192380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192388: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x192388u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19238c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19238cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192390: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x192390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x192394: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x192394u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x192398: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x192398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19239c: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x19239cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1923a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1923a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1923a4: 0xc05fd8e  jal         func_17F638
    ctx->pc = 0x1923A4u;
    SET_GPR_U32(ctx, 31, 0x1923ACu);
    ctx->pc = 0x1923A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1923A4u;
    // 0x1923a8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F638u, 0x1923A4u, 0x1923ACu)) {
        return;
    }
    ctx->pc = 0x1923ACu;
label_1923ac:
    // 0x1923ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1923ACu;
    {
        const bool branch_taken_0x1923ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1923ac) {
            ctx->pc = 0x1923CCu;
            goto label_1923cc;
        }
    }
    ctx->pc = 0x1923B4u;
    // 0x1923b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1923b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1923b8: 0x0  nop
    ctx->pc = 0x1923b8u;
    // NOP
    // 0x1923bc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1923bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1923c0: 0x0  nop
    ctx->pc = 0x1923c0u;
    // NOP
    // 0x1923c4: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x1923C4u;
    {
        const bool branch_taken_0x1923c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1923c4) {
            ctx->pc = 0x1923C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1923C4u;
            // 0x1923c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192450u;
            goto label_192450;
        }
    }
    ctx->pc = 0x1923CCu;
label_1923cc:
    // 0x1923cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1923ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1923d0: 0x0  nop
    ctx->pc = 0x1923d0u;
    // NOP
    // 0x1923d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1923d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1923d8: 0x0  nop
    ctx->pc = 0x1923d8u;
    // NOP
    // 0x1923dc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1923DCu;
    {
        const bool branch_taken_0x1923dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1923dc) {
            ctx->pc = 0x192404u;
            goto label_192404;
        }
    }
    ctx->pc = 0x1923E4u;
    // 0x1923e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1923e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1923e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1923e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1923ec: 0x0  nop
    ctx->pc = 0x1923ecu;
    // NOP
    // 0x1923f0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1923f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1923f4: 0x0  nop
    ctx->pc = 0x1923f4u;
    // NOP
    // 0x1923f8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1923F8u;
    {
        const bool branch_taken_0x1923f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1923f8) {
            ctx->pc = 0x1923FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1923F8u;
            // 0x1923fc: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x192414u;
            goto label_192414;
        }
    }
    ctx->pc = 0x192400u;
    // 0x192400: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x192400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192404:
    // 0x192404: 0x0  nop
    ctx->pc = 0x192404u;
    // NOP
    // 0x192408: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x192408u;
    {
        const bool branch_taken_0x192408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192408) {
            ctx->pc = 0x19240Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192408u;
            // 0x19240c: 0xe6140000  swc1        $f20, 0x0($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x192414u;
            goto label_192414;
        }
    }
    ctx->pc = 0x192410u;
    // 0x192410: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x192410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_192414:
    // 0x192414: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x192414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x192418: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x192418u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x19241c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x19241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192420: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x192420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192424: 0x0  nop
    ctx->pc = 0x192424u;
    // NOP
    // 0x192428: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x192428u;
    {
        const bool branch_taken_0x192428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192428u;
        // 0x19242c: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192428) {
            ctx->pc = 0x192444u;
            goto label_192444;
        }
    }
    ctx->pc = 0x192430u;
    // 0x192430: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x192430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192434: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192438: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x192438u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[21]);
    // 0x19243c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19243Cu;
    {
        const bool branch_taken_0x19243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19243Cu;
        // 0x192440: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19243c) {
            ctx->pc = 0x19244Cu;
            goto label_19244c;
        }
    }
    ctx->pc = 0x192444u;
label_192444:
    // 0x192444: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x192444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x192448: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x192448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_19244c:
    // 0x19244c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19244cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_192450:
    // 0x192450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192454: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x192454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x192458: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x192458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19245c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192460: 0x3e00008  jr          $ra
    ctx->pc = 0x192460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192460u;
        // 0x192464: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192468u;
}
