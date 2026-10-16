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

// Function: sub_001B3680
// Address: 0x1b3680 - 0x1b3748
void sub_001B3680_0x1b3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3680_0x1b3680");
#endif

    switch (ctx->pc) {
        case 0x1b36acu: goto label_1b36ac;
        default: break;
    }

    ctx->pc = 0x1b3680u;

    // 0x1b3680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3684: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b3684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b3688: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b3688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b368c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b368cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b3690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3694: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b3694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3698: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b3698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b369c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b369cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b36a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b36a4: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B36A4u;
    SET_GPR_U32(ctx, 31, 0x1B36ACu);
    ctx->pc = 0x1B36A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36A4u;
    // 0x1b36a8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B36A4u, 0x1B36ACu)) {
        return;
    }
    ctx->pc = 0x1B36ACu;
label_1b36ac:
    // 0x1b36ac: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B36ACu;
    {
        const bool branch_taken_0x1b36ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b36ac) {
            ctx->pc = 0x1B36B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B36ACu;
            // 0x1b36b0: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B36E0u;
            goto label_1b36e0;
        }
    }
    ctx->pc = 0x1B36B4u;
    // 0x1b36b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b36b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b36b8: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1b36b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x1b36bc: 0x34210901  ori         $at, $at, 0x901
    ctx->pc = 0x1b36bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2305);
    // 0x1b36c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b36c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b36c4: 0x0  nop
    ctx->pc = 0x1b36c4u;
    // NOP
    // 0x1b36c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b36c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b36cc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b36ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b36d0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1b36d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b36d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b36d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b36d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B36D8u;
    {
        const bool branch_taken_0x1b36d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36D8u;
        // 0x1b36dc: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36d8) {
            ctx->pc = 0x1B370Cu;
            goto label_1b370c;
        }
    }
    ctx->pc = 0x1B36E0u;
label_1b36e0:
    // 0x1b36e0: 0x3c0142e4  lui         $at, 0x42E4
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17124 << 16));
    // 0x1b36e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b36e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b36e8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b36e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1b36ec: 0x3421300c  ori         $at, $at, 0x300C
    ctx->pc = 0x1b36ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12300);
    // 0x1b36f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b36f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b36f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b36f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b36f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b36f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b36fc: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1b36fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b3700: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b3700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3704: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b3704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b3708: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b3708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b370c:
    // 0x1b370c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1b370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3710: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1b3710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1b3714: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3718: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b3718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b371c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b371cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b3720: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b3720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3728: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1b3728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1b372c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b372cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3730: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1b3730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3734: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b3734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b3738: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x1b3738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1b373c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b373cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3740: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3740u;
        // 0x1b3744: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3748u;
}
