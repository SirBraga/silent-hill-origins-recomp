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

// Function: sub_001CB670
// Address: 0x1cb670 - 0x1cb7c0
void sub_001CB670_0x1cb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB670_0x1cb670");
#endif

    switch (ctx->pc) {
        case 0x1cb6a8u: goto label_1cb6a8;
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb750u: goto label_1cb750;
        default: break;
    }

    ctx->pc = 0x1cb670u;

    // 0x1cb670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1cb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1cb674: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cb674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1cb678: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cb678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cb67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb680: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb684: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cb684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb688: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1cb688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1cb68c: 0x26120274  addiu       $s2, $s0, 0x274
    ctx->pc = 0x1cb68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    // 0x1cb690: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1cb690u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1cb694: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cb694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb69c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1cb69cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1cb6a0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1cb6a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1cb6a4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1cb6a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1cb6a8:
    // 0x1cb6a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb6ac: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1CB6ACu;
    {
        const bool branch_taken_0x1cb6ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1CB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6ACu;
        // 0x1cb6b0: 0x26020350  addiu       $v0, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6ac) {
            ctx->pc = 0x1CB780u;
            goto label_1cb780;
        }
    }
    ctx->pc = 0x1CB6B4u;
    // 0x1cb6b4: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1cb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cb6b8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1cb6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cb6bc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1cb6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb6c0: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x1cb6c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x1cb6c4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1cb6c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1cb6c8: 0xc4600360  lwc1        $f0, 0x360($v1)
    ctx->pc = 0x1cb6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb6cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cb6ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb6d0: 0x0  nop
    ctx->pc = 0x1cb6d0u;
    // NOP
    // 0x1cb6d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB6D4u;
    {
        const bool branch_taken_0x1cb6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb6d4) {
            ctx->pc = 0x1CB6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB6D4u;
            // 0x1cb6d8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB6DCu;
            goto label_1cb6dc;
        }
    }
    ctx->pc = 0x1CB6DCu;
label_1cb6dc:
    // 0x1cb6dc: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1cb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cb6e0: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x1cb6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb6e4: 0xc4400358  lwc1        $f0, 0x358($v0)
    ctx->pc = 0x1cb6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb6e8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1cb6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1cb6ec: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x1cb6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
    // 0x1cb6f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1cb6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1cb6f4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1cb6f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1cb6f8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1cb6f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1cb6fc: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1CB6FCu;
    SET_GPR_U32(ctx, 31, 0x1CB704u);
    ctx->pc = 0x1CB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6FCu;
    // 0x1cb700: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1CB6FCu, 0x1CB704u)) {
        return;
    }
    ctx->pc = 0x1CB704u;
label_1cb704:
    // 0x1cb704: 0x26020354  addiu       $v0, $s0, 0x354
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 852));
    // 0x1cb708: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cb708u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1cb70c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1cb70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cb710: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1cb710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cb714: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1cb714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb718: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x1cb718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x1cb71c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1cb71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1cb720: 0xc4600364  lwc1        $f0, 0x364($v1)
    ctx->pc = 0x1cb720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cb724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb728: 0x0  nop
    ctx->pc = 0x1cb728u;
    // NOP
    // 0x1cb72c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB72Cu;
    {
        const bool branch_taken_0x1cb72c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb72c) {
            ctx->pc = 0x1CB730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB72Cu;
            // 0x1cb730: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB734u;
            goto label_1cb734;
        }
    }
    ctx->pc = 0x1CB734u;
label_1cb734:
    // 0x1cb734: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1cb734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cb738: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x1cb738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb73c: 0xc440035c  lwc1        $f0, 0x35C($v0)
    ctx->pc = 0x1cb73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb740: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1cb740u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1cb744: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1cb744u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1cb748: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1CB748u;
    SET_GPR_U32(ctx, 31, 0x1CB750u);
    ctx->pc = 0x1CB74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB748u;
    // 0x1cb74c: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1CB748u, 0x1CB750u)) {
        return;
    }
    ctx->pc = 0x1CB750u;
label_1cb750:
    // 0x1cb750: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1cb750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb754: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb758: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cb758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cb75c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb760: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1cb760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1cb764: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cb764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb768: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1cb768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1cb76c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1cb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cb770: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1cb770u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
    // 0x1cb774: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1cb774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1cb778: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb77c: 0xe4400368  swc1        $f0, 0x368($v0)
    ctx->pc = 0x1cb77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 872), bits); }
label_1cb780:
    // 0x1cb780: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cb780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cb784: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1cb784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1cb788: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1cb788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cb78c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1CB78Cu;
    {
        const bool branch_taken_0x1cb78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB78Cu;
        // 0x1cb790: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb78c) {
            ctx->pc = 0x1CB6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb6a8;
        }
    }
    ctx->pc = 0x1CB794u;
    // 0x1cb794: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cb794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb798: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cb798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb79c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb79cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb7a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1cb7a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7a8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1cb7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cb7ac: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1cb7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cb7b0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1cb7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7B4u;
        // 0x1cb7b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB7BCu;
    // 0x1cb7bc: 0x0  nop
    ctx->pc = 0x1cb7bcu;
    // NOP
    ctx->pc = 0x1cb7c0u;
}
