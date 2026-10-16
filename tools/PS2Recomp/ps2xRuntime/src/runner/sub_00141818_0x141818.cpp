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

// Function: sub_00141818
// Address: 0x141818 - 0x141928
void sub_00141818_0x141818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141818_0x141818");
#endif

    switch (ctx->pc) {
        case 0x141888u: goto label_141888;
        case 0x1418ccu: goto label_1418cc;
        case 0x1418dcu: goto label_1418dc;
        default: break;
    }

    ctx->pc = 0x141818u;

    // 0x141818: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x141818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14181c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14181cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x141820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x141820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x141824: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x141824u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x141828: 0x8c508468  lw          $s0, -0x7B98($v0)
    ctx->pc = 0x141828u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338468u));
    // 0x14182c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14182cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x141830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141834: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x141834u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x141838: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x141838u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14183c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x14183cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x141840: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x141840u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x141844: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x141844u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x141848: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x141848u;
    {
        const bool branch_taken_0x141848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141848u;
        // 0x14184c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141848) {
            ctx->pc = 0x1418F8u;
            goto label_1418f8;
        }
    }
    ctx->pc = 0x141850u;
    // 0x141850: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x141850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x141854: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x141854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x141858: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x141858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x14185c: 0x34219d49  ori         $at, $at, 0x9D49
    ctx->pc = 0x14185cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40265);
    // 0x141860: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x141860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x141864: 0x3c014054  lui         $at, 0x4054
    ctx->pc = 0x141864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16468 << 16));
    // 0x141868: 0x34214d01  ori         $at, $at, 0x4D01
    ctx->pc = 0x141868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19713);
    // 0x14186c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x14186cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x141870: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x141870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x141874: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x141874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x141878: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x141878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14187c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14187cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x141880: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x141880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x141884: 0x0  nop
    ctx->pc = 0x141884u;
    // NOP
label_141888:
    // 0x141888: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x141888u;
    {
        const bool branch_taken_0x141888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141888) {
            ctx->pc = 0x14188Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141888u;
            // 0x14188c: 0x8e1000b4  lw          $s0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1418F0u;
            goto label_1418f0;
        }
    }
    ctx->pc = 0x141890u;
    // 0x141890: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x141894: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x141894u;
    {
        const bool branch_taken_0x141894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141894) {
            ctx->pc = 0x141898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141894u;
            // 0x141898: 0x8e1000b4  lw          $s0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1418F0u;
            goto label_1418f0;
        }
    }
    ctx->pc = 0x14189Cu;
    // 0x14189c: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x14189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1418a0: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x1418a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1418a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1418a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1418a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1418a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1418ac: 0x4601d034  c.lt.s      $f26, $f1
    ctx->pc = 0x1418acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1418b0: 0x0  nop
    ctx->pc = 0x1418b0u;
    // NOP
    // 0x1418b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1418B4u;
    {
        const bool branch_taken_0x1418b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1418B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418B4u;
        // 0x1418b8: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1418b4) {
            ctx->pc = 0x1418C0u;
            goto label_1418c0;
        }
    }
    ctx->pc = 0x1418BCu;
    // 0x1418bc: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1418bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_1418c0:
    // 0x1418c0: 0xc60c00dc  lwc1        $f12, 0xDC($s0)
    ctx->pc = 0x1418c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1418c4: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1418C4u;
    SET_GPR_U32(ctx, 31, 0x1418CCu);
    ctx->pc = 0x1418C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418C4u;
    // 0x1418c8: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1418C4u, 0x1418CCu)) {
        return;
    }
    ctx->pc = 0x1418CCu;
label_1418cc:
    // 0x1418cc: 0xc60c00dc  lwc1        $f12, 0xDC($s0)
    ctx->pc = 0x1418ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1418d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1418d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1418d4: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1418D4u;
    SET_GPR_U32(ctx, 31, 0x1418DCu);
    ctx->pc = 0x1418D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418D4u;
    // 0x1418d8: 0x46186302  mul.s       $f12, $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1418D4u, 0x1418DCu)) {
        return;
    }
    ctx->pc = 0x1418DCu;
label_1418dc:
    // 0x1418dc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1418dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1418e0: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x1418e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x1418e4: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1418e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1418e8: 0xe61400b0  swc1        $f20, 0xB0($s0)
    ctx->pc = 0x1418e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1418ec: 0x8e1000b4  lw          $s0, 0xB4($s0)
    ctx->pc = 0x1418ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1418f0:
    // 0x1418f0: 0x5600ffe5  bnel        $s0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1418F0u;
    {
        const bool branch_taken_0x1418f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1418f0) {
            ctx->pc = 0x1418F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1418F0u;
            // 0x1418f4: 0x8e0200d0  lw          $v0, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141888;
        }
    }
    ctx->pc = 0x1418F8u;
label_1418f8:
    // 0x1418f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1418f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1418fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141900: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x141900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x141904: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x141904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x141908: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x141908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14190c: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x14190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x141910: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x141910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x141914: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x141914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x141918: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x141918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14191c: 0x3e00008  jr          $ra
    ctx->pc = 0x14191Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14191Cu;
        // 0x141920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14191Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141924u;
    // 0x141924: 0x0  nop
    ctx->pc = 0x141924u;
    // NOP
    ctx->pc = 0x141928u;
}
