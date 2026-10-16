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

// Function: sub_001A2370
// Address: 0x1a2370 - 0x1a2400
void sub_001A2370_0x1a2370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2370_0x1a2370");
#endif

    switch (ctx->pc) {
        case 0x1a2394u: goto label_1a2394;
        default: break;
    }

    ctx->pc = 0x1a2370u;

    // 0x1a2370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a2374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a2378: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1a2378u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a237c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a237cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2380: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a2380u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a2384: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a2384u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1a2388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a238c: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1A238Cu;
    SET_GPR_U32(ctx, 31, 0x1A2394u);
    ctx->pc = 0x1A2390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A238Cu;
    // 0x1a2390: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1A238Cu, 0x1A2394u)) {
        return;
    }
    ctx->pc = 0x1A2394u;
label_1a2394:
    // 0x1a2394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2398: 0x0  nop
    ctx->pc = 0x1a2398u;
    // NOP
    // 0x1a239c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a239cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a23a0: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1a23a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x1a23a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a23a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a23a8: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1a23a8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1a23ac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a23acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a23b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a23b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a23b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a23b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a23b8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1a23b8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1a23bc: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x1a23bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a23c0: 0x0  nop
    ctx->pc = 0x1a23c0u;
    // NOP
    // 0x1a23c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A23C4u;
    {
        const bool branch_taken_0x1a23c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a23c4) {
            ctx->pc = 0x1A23C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A23C4u;
            // 0x1a23c8: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A23CCu;
            goto label_1a23cc;
        }
    }
    ctx->pc = 0x1A23CCu;
label_1a23cc:
    // 0x1a23cc: 0xc601134c  lwc1        $f1, 0x134C($s0)
    ctx->pc = 0x1a23ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a23d0: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1a23d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a23d4: 0x0  nop
    ctx->pc = 0x1a23d4u;
    // NOP
    // 0x1a23d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A23D8u;
    {
        const bool branch_taken_0x1a23d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23D8u;
        // 0x1a23dc: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23d8) {
            ctx->pc = 0x1A23E4u;
            goto label_1a23e4;
        }
    }
    ctx->pc = 0x1A23E0u;
    // 0x1a23e0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1a23e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1a23e4:
    // 0x1a23e4: 0xe600134c  swc1        $f0, 0x134C($s0)
    ctx->pc = 0x1a23e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4940), bits); }
    // 0x1a23e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a23e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a23ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a23ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a23f0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1a23f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a23f4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a23f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a23f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A23F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23F8u;
        // 0x1a23fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A23F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2400u;
}
