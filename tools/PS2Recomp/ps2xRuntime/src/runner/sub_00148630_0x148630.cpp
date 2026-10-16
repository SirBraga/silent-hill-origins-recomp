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

// Function: sub_00148630
// Address: 0x148630 - 0x1486b0
void sub_00148630_0x148630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148630_0x148630");
#endif

    ctx->pc = 0x148630u;

    // 0x148630: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x148630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x148634: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148638: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x148638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x14863c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x148640: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148644: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x148644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x148648: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x148648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14864c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x14864cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x148650: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x148650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x148654: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x148654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148658: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x148658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14865c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x14865cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x148660: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x148660u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x148664: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x148664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148668: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x148668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14866c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14866cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x148670: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x148670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x148674: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x148674u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x148678: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x148678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x14867c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x14867cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x148680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148684: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x148684u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x148688: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x148688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x14868c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x14868cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x148690: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x148690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x148694: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x148694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148698: 0x0  nop
    ctx->pc = 0x148698u;
    // NOP
    // 0x14869c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14869Cu;
    {
        const bool branch_taken_0x14869c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1486A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14869Cu;
        // 0x1486a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14869c) {
            ctx->pc = 0x1486A8u;
            goto label_1486a8;
        }
    }
    ctx->pc = 0x1486A4u;
    // 0x1486a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1486a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1486a8:
    // 0x1486a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1486A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1486ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486A8u;
        // 0x1486ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1486A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1486B0u;
}
