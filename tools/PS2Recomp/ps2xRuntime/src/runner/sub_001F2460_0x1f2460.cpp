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

// Function: sub_001F2460
// Address: 0x1f2460 - 0x1f24f8
void sub_001F2460_0x1f2460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2460_0x1f2460");
#endif

    switch (ctx->pc) {
        case 0x1f2490u: goto label_1f2490;
        case 0x1f24e8u: goto label_1f24e8;
        default: break;
    }

    ctx->pc = 0x1f2460u;

    // 0x1f2460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f2468: 0x8c822720  lw          $v0, 0x2720($a0)
    ctx->pc = 0x1f2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10016)));
    // 0x1f246c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F246Cu;
    {
        const bool branch_taken_0x1f246c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f246c) {
            ctx->pc = 0x1F24E0u;
            goto label_1f24e0;
        }
    }
    ctx->pc = 0x1F2474u;
    // 0x1f2474: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x1f2474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f2478: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x1f2478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f247c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1f247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f2480: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1f2480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1f2484: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1f2484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1f2488: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f2488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f248c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2490:
    // 0x1f2490: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x1f2490u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x1f2494: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f2494u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f2498: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f2498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f249c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1f249cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1f24a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f24a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f24a4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f24a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f24a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f24a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f24ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f24acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f24b0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1f24b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1f24b4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1f24b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1f24b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1f24b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1f24bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1f24bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f24c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f24c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f24c4: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x1f24c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f24c8: 0x0  nop
    ctx->pc = 0x1f24c8u;
    // NOP
    // 0x1f24cc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F24CCu;
    {
        const bool branch_taken_0x1f24cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24CCu;
        // 0x1f24d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24cc) {
            ctx->pc = 0x1F24ECu;
            goto label_1f24ec;
        }
    }
    ctx->pc = 0x1F24D4u;
    // 0x1f24d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f24d8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F24D8u;
    {
        const bool branch_taken_0x1f24d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f24d8) {
            ctx->pc = 0x1F24DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F24D8u;
            // 0x1f24dc: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2490;
        }
    }
    ctx->pc = 0x1F24E0u;
label_1f24e0:
    // 0x1f24e0: 0xc07c93e  jal         func_1F24F8
    ctx->pc = 0x1F24E0u;
    SET_GPR_U32(ctx, 31, 0x1F24E8u);
    ctx->pc = 0x1F24F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F24F8u, 0x1F24E0u, 0x1F24E8u)) {
        return;
    }
    ctx->pc = 0x1F24E8u;
label_1f24e8:
    // 0x1f24e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f24e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f24ec:
    // 0x1f24ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F24ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24ECu;
        // 0x1f24f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F24ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F24F4u;
    // 0x1f24f4: 0x0  nop
    ctx->pc = 0x1f24f4u;
    // NOP
    ctx->pc = 0x1f24f8u;
}
