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

// Function: sub_00124FF0
// Address: 0x124ff0 - 0x1250f0
void sub_00124FF0_0x124ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124FF0_0x124ff0");
#endif

    switch (ctx->pc) {
        case 0x12508cu: goto label_12508c;
        case 0x1250a4u: goto label_1250a4;
        case 0x1250bcu: goto label_1250bc;
        case 0x1250dcu: goto label_1250dc;
        default: break;
    }

    ctx->pc = 0x124ff0u;

    // 0x124ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124ff4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x124ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x124ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x124ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x124ffc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125008: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x125008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x12500c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x125010: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x125010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x125014: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x125014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x125018: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x125018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12501c: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x12501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125020: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x125020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x125024: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x125024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x125028: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x125028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x12502c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x12502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125030: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x125030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x125034: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x125034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x125038: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12503c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x12503cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x125040: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x125040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125044: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x125044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125048: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x125048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x12504c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x12504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125050: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x125050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x125054: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x125054u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x125058: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x125058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12505c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12505cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x125060: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x125060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x125064: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x125064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125068: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x125068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12506c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x12506cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x125070: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x125070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125074: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x125074u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x125078: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x125078u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x12507c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x12507cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x125080: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x125080u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x125084: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x125084u;
    SET_GPR_U32(ctx, 31, 0x12508Cu);
    ctx->pc = 0x125088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125084u;
    // 0x125088: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x125084u, 0x12508Cu)) {
        return;
    }
    ctx->pc = 0x12508Cu;
label_12508c:
    // 0x12508c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125094: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x125094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125098: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12509c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x12509Cu;
    SET_GPR_U32(ctx, 31, 0x1250A4u);
    ctx->pc = 0x1250A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12509Cu;
    // 0x1250a0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12509Cu, 0x1250A4u)) {
        return;
    }
    ctx->pc = 0x1250A4u;
label_1250a4:
    // 0x1250a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1250a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1250a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1250a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250ac: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1250acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1250b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1250b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1250b4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1250B4u;
    SET_GPR_U32(ctx, 31, 0x1250BCu);
    ctx->pc = 0x1250B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1250B4u;
    // 0x1250b8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1250B4u, 0x1250BCu)) {
        return;
    }
    ctx->pc = 0x1250BCu;
label_1250bc:
    // 0x1250bc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1250bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1250c0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1250c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1250c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1250c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1250c8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1250c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1250cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1250ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1250d0: 0x8c4484fc  lw          $a0, -0x7B04($v0)
    ctx->pc = 0x1250d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3384FCu));
    // 0x1250d4: 0xc05435a  jal         func_150D68
    ctx->pc = 0x1250D4u;
    SET_GPR_U32(ctx, 31, 0x1250DCu);
    ctx->pc = 0x1250D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1250D4u;
    // 0x1250d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150D68u, 0x1250D4u, 0x1250DCu)) {
        return;
    }
    ctx->pc = 0x1250DCu;
label_1250dc:
    // 0x1250dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1250dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1250e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1250e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1250e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1250e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1250e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1250E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E8u;
        // 0x1250ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1250E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1250F0u;
}
