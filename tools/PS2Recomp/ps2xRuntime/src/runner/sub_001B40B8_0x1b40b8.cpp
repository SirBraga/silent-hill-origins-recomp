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

// Function: sub_001B40B8
// Address: 0x1b40b8 - 0x1b4198
void sub_001B40B8_0x1b40b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B40B8_0x1b40b8");
#endif

    switch (ctx->pc) {
        case 0x1b4134u: goto label_1b4134;
        case 0x1b4144u: goto label_1b4144;
        default: break;
    }

    ctx->pc = 0x1b40b8u;

    // 0x1b40b8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b40bc: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b40bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b40c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b40c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b40c4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1b40c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1b40c8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1b40c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1b40cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b40ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b40d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b40d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b40d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b40d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b40d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b40d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b40dc: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x1b40dcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b40e0: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x1b40e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b40e4: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x1b40e4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x1b40e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b40ec: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x1b40ecu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x1b40f0: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1b40f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b40f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b40f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40f8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1b40f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b40fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B40FCu;
    {
        const bool branch_taken_0x1b40fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40FCu;
        // 0x1b4100: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40fc) {
            ctx->pc = 0x1B410Cu;
            goto label_1b410c;
        }
    }
    ctx->pc = 0x1B4104u;
    // 0x1b4104: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x1b4104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b4108: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b4108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b410c:
    // 0x1b410c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4110: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b4110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b4114: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b4114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b4118: 0x0  nop
    ctx->pc = 0x1b4118u;
    // NOP
    // 0x1b411c: 0x0  nop
    ctx->pc = 0x1b411cu;
    // NOP
    // 0x1b4120: 0x46140583  div.s       $f22, $f0, $f20
    ctx->pc = 0x1b4120u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x1b4124: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b4128: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b4128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b412c: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x1B412Cu;
    SET_GPR_U32(ctx, 31, 0x1B4134u);
    ctx->pc = 0x1B4130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B412Cu;
    // 0x1b4130: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x1B412Cu, 0x1B4134u)) {
        return;
    }
    ctx->pc = 0x1B4134u;
label_1b4134:
    // 0x1b4134: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1b4134u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1b4138: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1b4138u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1b413c: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x1B413Cu;
    SET_GPR_U32(ctx, 31, 0x1B4144u);
    ctx->pc = 0x1B4140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B413Cu;
    // 0x1b4140: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x1B413Cu, 0x1B4144u)) {
        return;
    }
    ctx->pc = 0x1B4144u;
label_1b4144:
    // 0x1b4144: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x1b4144u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1b4148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b414c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b414cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4150: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b4150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1b4154: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b4154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4158: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b4158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b415c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b415cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4160: 0x4600a581  sub.s       $f22, $f20, $f0
    ctx->pc = 0x1b4160u;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b4164: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1b4164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b4168: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b4168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b416c: 0x46160841  sub.s       $f1, $f1, $f22
    ctx->pc = 0x1b416cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x1b4170: 0x4617b002  mul.s       $f0, $f22, $f23
    ctx->pc = 0x1b4170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x1b4174: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x1b4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b4178: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x1b4178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x1b417c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1b417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b4180: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x1b4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1b4184: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4184u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4188: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b4188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b418c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b418cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4190: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4190u;
        // 0x1b4194: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4198u;
}
