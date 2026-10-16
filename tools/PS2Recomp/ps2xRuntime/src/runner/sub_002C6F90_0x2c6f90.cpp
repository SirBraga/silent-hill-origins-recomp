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

// Function: sub_002C6F90
// Address: 0x2c6f90 - 0x2c7a40
void sub_002C6F90_0x2c6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6F90_0x2c6f90");
#endif

    switch (ctx->pc) {
        case 0x2c7094u: goto label_2c7094;
        case 0x2c7198u: goto label_2c7198;
        case 0x2c73a0u: goto label_2c73a0;
        case 0x2c7578u: goto label_2c7578;
        case 0x2c75a4u: goto label_2c75a4;
        case 0x2c75c8u: goto label_2c75c8;
        case 0x2c75e0u: goto label_2c75e0;
        case 0x2c75f8u: goto label_2c75f8;
        case 0x2c7610u: goto label_2c7610;
        case 0x2c7634u: goto label_2c7634;
        case 0x2c7670u: goto label_2c7670;
        case 0x2c77dcu: goto label_2c77dc;
        case 0x2c77f0u: goto label_2c77f0;
        case 0x2c7808u: goto label_2c7808;
        case 0x2c7818u: goto label_2c7818;
        case 0x2c7828u: goto label_2c7828;
        case 0x2c7838u: goto label_2c7838;
        case 0x2c784cu: goto label_2c784c;
        case 0x2c78c4u: goto label_2c78c4;
        case 0x2c78fcu: goto label_2c78fc;
        case 0x2c7934u: goto label_2c7934;
        case 0x2c7950u: goto label_2c7950;
        case 0x2c797cu: goto label_2c797c;
        case 0x2c79a4u: goto label_2c79a4;
        case 0x2c79ccu: goto label_2c79cc;
        case 0x2c79f4u: goto label_2c79f4;
        default: break;
    }

    ctx->pc = 0x2c6f90u;

    // 0x2c6f90: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x2c6f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x2c6f94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c6f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f98: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x2c6f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
    // 0x2c6f9c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2c6f9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fa0: 0xe7b402a0  swc1        $f20, 0x2A0($sp)
    ctx->pc = 0x2c6fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2c6fa4: 0x46006c86  mov.s       $f18, $f13
    ctx->pc = 0x2c6fa4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[13]);
    // 0x2c6fa8: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x2c6fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
    // 0x2c6fac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c6facu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6fb0: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x2c6fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
    // 0x2c6fb4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2c6fb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fb8: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x2c6fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
    // 0x2c6fbc: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x2c6fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
    // 0x2c6fc0: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x2c6fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
    // 0x2c6fc4: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x2c6fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
    // 0x2c6fc8: 0xe7b602b0  swc1        $f22, 0x2B0($sp)
    ctx->pc = 0x2c6fc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x2c6fcc: 0xe7b502a8  swc1        $f21, 0x2A8($sp)
    ctx->pc = 0x2c6fccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2c6fd0: 0x10c0028f  beqz        $a2, . + 4 + (0x28F << 2)
    ctx->pc = 0x2C6FD0u;
    {
        const bool branch_taken_0x2c6fd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FD0u;
        // 0x2c6fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fd0) {
            ctx->pc = 0x2C7A10u;
            goto label_2c7a10;
        }
    }
    ctx->pc = 0x2C6FD8u;
    // 0x2c6fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6fdc: 0x14c2002f  bne         $a2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C6FDCu;
    {
        const bool branch_taken_0x2c6fdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FDCu;
        // 0x2c6fe0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fdc) {
            ctx->pc = 0x2C709Cu;
            goto label_2c709c;
        }
    }
    ctx->pc = 0x2C6FE4u;
    // 0x2c6fe4: 0xc4630080  lwc1        $f3, 0x80($v1)
    ctx->pc = 0x2c6fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6fe8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c6fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fec: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2c6fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ff0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c6ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ff4: 0xc4670084  lwc1        $f7, 0x84($v1)
    ctx->pc = 0x2c6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c6ff8: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x2c6ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6ffc: 0x46001b02  mul.s       $f12, $f3, $f0
    ctx->pc = 0x2c6ffcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c7000: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c7000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7004: 0x46023942  mul.s       $f5, $f7, $f2
    ctx->pc = 0x2c7004u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2c7008: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x2c7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c700c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c700cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c7010: 0xc4680088  lwc1        $f8, 0x88($v1)
    ctx->pc = 0x2c7010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c7014: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2c7014u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2c7018: 0xc5440008  lwc1        $f4, 0x8($t2)
    ctx->pc = 0x2c7018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c701c: 0x46056300  add.s       $f12, $f12, $f5
    ctx->pc = 0x2c701cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[5]);
    // 0x2c7020: 0xc4690100  lwc1        $f9, 0x100($v1)
    ctx->pc = 0x2c7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c7024: 0xc46a0104  lwc1        $f10, 0x104($v1)
    ctx->pc = 0x2c7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c7028: 0x46044342  mul.s       $f13, $f8, $f4
    ctx->pc = 0x2c7028u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2c702c: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x2c702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c7030: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c7030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7034: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2c7034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2c7038: 0xc4620108  lwc1        $f2, 0x108($v1)
    ctx->pc = 0x2c7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c703c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2c703cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2c7040: 0xc46e000c  lwc1        $f14, 0xC($v1)
    ctx->pc = 0x2c7040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2c7044: 0x460a3182  mul.s       $f6, $f6, $f10
    ctx->pc = 0x2c7044u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x2c7048: 0xc46b008c  lwc1        $f11, 0x8C($v1)
    ctx->pc = 0x2c7048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2c704c: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x2c704cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x2c7050: 0x460a39c2  mul.s       $f7, $f7, $f10
    ctx->pc = 0x2c7050u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x2c7054: 0x460d6300  add.s       $f12, $f12, $f13
    ctx->pc = 0x2c7054u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x2c7058: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c7058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c705c: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2c705cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2c7060: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2c7060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2c7064: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2c7064u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2c7068: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x2c7068u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2c706c: 0x460b6301  sub.s       $f12, $f12, $f11
    ctx->pc = 0x2c706cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x2c7070: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x2c7070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x2c7074: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2c7074u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2c7078: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2c7078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2c707c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2c707cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c7080: 0x46036303  div.s       $f12, $f12, $f3
    ctx->pc = 0x2c7080u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[3]);
    // 0x2c7084: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2c7084u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2c7088: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c7088u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c708c: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C708Cu;
    SET_GPR_U32(ctx, 31, 0x2C7094u);
    ctx->pc = 0x2C7090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C708Cu;
    // 0x2c7090: 0x46126301  sub.s       $f12, $f12, $f18 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[18]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C708Cu, 0x2C7094u)) {
        return;
    }
    ctx->pc = 0x2C7094u;
label_2c7094:
    // 0x2c7094: 0x1000025f  b           . + 4 + (0x25F << 2)
    ctx->pc = 0x2C7094u;
    {
        const bool branch_taken_0x2c7094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7094u;
        // 0x2c7098: 0x7bb00290  lq          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7094) {
            ctx->pc = 0x2C7A14u;
            goto label_2c7a14;
        }
    }
    ctx->pc = 0x2C709Cu;
label_2c709c:
    // 0x2c709c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2c709cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2c70a0: 0x10c0009b  beqz        $a2, . + 4 + (0x9B << 2)
    ctx->pc = 0x2C70A0u;
    {
        const bool branch_taken_0x2c70a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70A0u;
        // 0x2c70a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c70a0) {
            ctx->pc = 0x2C7310u;
            goto label_2c7310;
        }
    }
    ctx->pc = 0x2C70A8u;
    // 0x2c70a8: 0xc4610100  lwc1        $f1, 0x100($v1)
    ctx->pc = 0x2c70a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c70ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2c70acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70b0: 0xc4630104  lwc1        $f3, 0x104($v1)
    ctx->pc = 0x2c70b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c70b4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c70b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70b8: 0xc46d0080  lwc1        $f13, 0x80($v1)
    ctx->pc = 0x2c70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c70bc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2c70bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70c0: 0xc46c0084  lwc1        $f12, 0x84($v1)
    ctx->pc = 0x2c70c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c70c4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2c70c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2c70c8: 0xc46b0000  lwc1        $f11, 0x0($v1)
    ctx->pc = 0x2c70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2c70cc: 0x46016882  mul.s       $f2, $f13, $f1
    ctx->pc = 0x2c70ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2c70d0: 0xc46a0004  lwc1        $f10, 0x4($v1)
    ctx->pc = 0x2c70d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c70d4: 0x46036142  mul.s       $f5, $f12, $f3
    ctx->pc = 0x2c70d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2c70d8: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x2c70d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c70dc: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2c70dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2c70e0: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x2c70e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2c70e4: 0xc4690088  lwc1        $f9, 0x88($v1)
    ctx->pc = 0x2c70e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c70e8: 0xc4680008  lwc1        $f8, 0x8($v1)
    ctx->pc = 0x2c70e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c70ec: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2c70ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2c70f0: 0x46004902  mul.s       $f4, $f9, $f0
    ctx->pc = 0x2c70f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2c70f4: 0xc471000c  lwc1        $f17, 0xC($v1)
    ctx->pc = 0x2c70f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2c70f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c70f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c70fc: 0xc470008c  lwc1        $f16, 0x8C($v1)
    ctx->pc = 0x2c70fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2c7100: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2c7100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2c7104: 0x460413c0  add.s       $f15, $f2, $f4
    ctx->pc = 0x2c7104u;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2c7108: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7108u;
    {
        const bool branch_taken_0x2c7108 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2C710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7108u;
        // 0x2c710c: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7108) {
            ctx->pc = 0x2C7118u;
            goto label_2c7118;
        }
    }
    ctx->pc = 0x2C7110u;
    // 0x2c7110: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C7110u;
    {
        const bool branch_taken_0x2c7110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7110u;
        // 0x2c7114: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7110) {
            ctx->pc = 0x2C7188u;
            goto label_2c7188;
        }
    }
    ctx->pc = 0x2C7118u;
label_2c7118:
    // 0x2c7118: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2c7118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c711c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c711cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7120: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x2c7120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7124: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2c7124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7128: 0x46005842  mul.s       $f1, $f11, $f0
    ctx->pc = 0x2c7128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2c712c: 0xc5430008  lwc1        $f3, 0x8($t2)
    ctx->pc = 0x2c712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7130: 0x46025142  mul.s       $f5, $f10, $f2
    ctx->pc = 0x2c7130u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x2c7134: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x2c7134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2c7138: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2c7138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c713c: 0x25440010  addiu       $a0, $t2, 0x10
    ctx->pc = 0x2c713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2c7140: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2c7140u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2c7144: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x2c7144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c7148: 0x46034102  mul.s       $f4, $f8, $f3
    ctx->pc = 0x2c7148u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2c714c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2c714cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2c7150: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c7150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7154: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x2c7154u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2c7158: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2c7158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2c715c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c715cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c7160: 0x46110841  sub.s       $f1, $f1, $f17
    ctx->pc = 0x2c7160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[17]);
    // 0x2c7164: 0x46100001  sub.s       $f0, $f0, $f16
    ctx->pc = 0x2c7164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
    // 0x2c7168: 0x460e0843  div.s       $f1, $f1, $f14
    ctx->pc = 0x2c7168u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[14]);
    // 0x2c716c: 0x460f0003  div.s       $f0, $f0, $f15
    ctx->pc = 0x2c716cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[15]);
    // 0x2c7170: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c7170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c7174: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2c7174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2c7178: 0x46120001  sub.s       $f0, $f0, $f18
    ctx->pc = 0x2c7178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[18]);
    // 0x2c717c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2C717Cu;
    {
        const bool branch_taken_0x2c717c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C717Cu;
        // 0x2c7180: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c717c) {
            ctx->pc = 0x2C7310u;
            goto label_2c7310;
        }
    }
    ctx->pc = 0x2C7184u;
    // 0x2c7184: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c7184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7188:
    // 0x2c7188: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2c7188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c718c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c718cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7190: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c7190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7194: 0x0  nop
    ctx->pc = 0x2c7194u;
    // NOP
label_2c7198:
    // 0x2c7198: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x2c7198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c719c: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x2c719cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2c71a0: 0xc5060004  lwc1        $f6, 0x4($t0)
    ctx->pc = 0x2c71a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c71a4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2c71a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2c71a8: 0x46056802  mul.s       $f0, $f13, $f5
    ctx->pc = 0x2c71a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[5]);
    // 0x2c71ac: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x2c71acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c71b0: 0x46066082  mul.s       $f2, $f12, $f6
    ctx->pc = 0x2c71b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2c71b4: 0x46055842  mul.s       $f1, $f11, $f5
    ctx->pc = 0x2c71b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x2c71b8: 0x460650c2  mul.s       $f3, $f10, $f6
    ctx->pc = 0x2c71b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x2c71bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c71bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c71c0: 0x46074902  mul.s       $f4, $f9, $f7
    ctx->pc = 0x2c71c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x2c71c4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c71c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c71c8: 0x46074082  mul.s       $f2, $f8, $f7
    ctx->pc = 0x2c71c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2c71cc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c71ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c71d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c71d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c71d4: 0x46100001  sub.s       $f0, $f0, $f16
    ctx->pc = 0x2c71d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
    // 0x2c71d8: 0x46110841  sub.s       $f1, $f1, $f17
    ctx->pc = 0x2c71d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[17]);
    // 0x2c71dc: 0x460f0003  div.s       $f0, $f0, $f15
    ctx->pc = 0x2c71dcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[15]);
    // 0x2c71e0: 0x460e0843  div.s       $f1, $f1, $f14
    ctx->pc = 0x2c71e0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[14]);
    // 0x2c71e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c71e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c71e8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2c71e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2c71ec: 0x46120001  sub.s       $f0, $f0, $f18
    ctx->pc = 0x2c71ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[18]);
    // 0x2c71f0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2c71f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c71f4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c71f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c71f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c71f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c71fc: 0x0  nop
    ctx->pc = 0x2c71fcu;
    // NOP
    // 0x2c7200: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C7200u;
    {
        const bool branch_taken_0x2c7200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7200) {
            ctx->pc = 0x2C7204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7200u;
            // 0x2c7204: 0x160682d  daddu       $t5, $t3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7208u;
            goto label_2c7208;
        }
    }
    ctx->pc = 0x2C7208u;
label_2c7208:
    // 0x2c7208: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C7208u;
    {
        const bool branch_taken_0x2c7208 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7208) {
            ctx->pc = 0x2C720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7208u;
            // 0x2c720c: 0xc4e50010  lwc1        $f5, 0x10($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7244u;
            goto label_2c7244;
        }
    }
    ctx->pc = 0x2C7210u;
    // 0x2c7210: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2c7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7214: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2c7214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c7218: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c7218u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c721c: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x2c721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7220: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x2c7220u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2c7224: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c7224u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c7228: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x2c7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c722c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x2c722cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2c7230: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c7230u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c7234: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c7234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c723c: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2c723cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2c7240: 0xc4e50010  lwc1        $f5, 0x10($a3)
    ctx->pc = 0x2c7240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2c7244:
    // 0x2c7244: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x2c7244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2c7248: 0xc5060014  lwc1        $f6, 0x14($t0)
    ctx->pc = 0x2c7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c724c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2c724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2c7250: 0x46056842  mul.s       $f1, $f13, $f5
    ctx->pc = 0x2c7250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[5]);
    // 0x2c7254: 0xc4a70018  lwc1        $f7, 0x18($a1)
    ctx->pc = 0x2c7254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c7258: 0x46066082  mul.s       $f2, $f12, $f6
    ctx->pc = 0x2c7258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2c725c: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x2c725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2c7260: 0x46055802  mul.s       $f0, $f11, $f5
    ctx->pc = 0x2c7260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x2c7264: 0x460650c2  mul.s       $f3, $f10, $f6
    ctx->pc = 0x2c7264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x2c7268: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c7268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c726c: 0x46074902  mul.s       $f4, $f9, $f7
    ctx->pc = 0x2c726cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x2c7270: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c7270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c7274: 0x46074082  mul.s       $f2, $f8, $f7
    ctx->pc = 0x2c7274u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2c7278: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2c7278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2c727c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c727cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7280: 0x46100841  sub.s       $f1, $f1, $f16
    ctx->pc = 0x2c7280u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[16]);
    // 0x2c7284: 0x46110001  sub.s       $f0, $f0, $f17
    ctx->pc = 0x2c7284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[17]);
    // 0x2c7288: 0x460f0843  div.s       $f1, $f1, $f15
    ctx->pc = 0x2c7288u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[15]);
    // 0x2c728c: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x2c728cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[14]);
    // 0x2c7290: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c7290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7294: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2c7294u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2c7298: 0x46120841  sub.s       $f1, $f1, $f18
    ctx->pc = 0x2c7298u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[18]);
    // 0x2c729c: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x2c729cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2c72a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c72a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c72a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c72a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c72a8: 0x0  nop
    ctx->pc = 0x2c72a8u;
    // NOP
    // 0x2c72ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C72ACu;
    {
        const bool branch_taken_0x2c72ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72ACu;
        // 0x2c72b0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72ac) {
            ctx->pc = 0x2C72B8u;
            goto label_2c72b8;
        }
    }
    ctx->pc = 0x2C72B4u;
    // 0x2c72b4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2c72b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c72b8:
    // 0x2c72b8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C72B8u;
    {
        const bool branch_taken_0x2c72b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c72b8) {
            ctx->pc = 0x2C72BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C72B8u;
            // 0x2c72bc: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C72F4u;
            goto label_2c72f4;
        }
    }
    ctx->pc = 0x2C72C0u;
    // 0x2c72c0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2c72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c72c4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2c72c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c72c8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c72c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c72cc: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x2c72ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c72d0: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x2c72d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2c72d4: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c72d4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c72d8: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x2c72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c72dc: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x2c72dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2c72e0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c72e0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c72e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c72e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c72e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c72e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c72ec: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2c72ecu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2c72f0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2c72f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2c72f4:
    // 0x2c72f4: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x2c72f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x2c72f8: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c72f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2c72fc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c72fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c7300: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2c7300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2c7304: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x2c7304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c7308: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2C7308u;
    {
        const bool branch_taken_0x2c7308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7308u;
        // 0x2c730c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7308) {
            ctx->pc = 0x2C7198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7198;
        }
    }
    ctx->pc = 0x2C7310u;
label_2c7310:
    // 0x2c7310: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x2c7310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2c7314: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c7314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7318: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2c7318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c731c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c7320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7324: 0x0  nop
    ctx->pc = 0x2c7324u;
    // NOP
    // 0x2c7328: 0x450301b9  bc1tl       . + 4 + (0x1B9 << 2)
    ctx->pc = 0x2C7328u;
    {
        const bool branch_taken_0x2c7328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7328) {
            ctx->pc = 0x2C732Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7328u;
            // 0x2c732c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7A10u;
            goto label_2c7a10;
        }
    }
    ctx->pc = 0x2C7330u;
    // 0x2c7330: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x2c7330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2c7334: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7334u;
    {
        const bool branch_taken_0x2c7334 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2C7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7334u;
        // 0x2c7338: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7334) {
            ctx->pc = 0x2C734Cu;
            goto label_2c734c;
        }
    }
    ctx->pc = 0x2C733Cu;
    // 0x2c733c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c733cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7340: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c7340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c7344: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7344u;
    {
        const bool branch_taken_0x2c7344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7344) {
            ctx->pc = 0x2C7360u;
            goto label_2c7360;
        }
    }
    ctx->pc = 0x2C734Cu;
label_2c734c:
    // 0x2c734c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2c734cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2c7350: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c7350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c7354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c7354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c7358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c735c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c735cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c7360:
    // 0x2c7360: 0xc7808208  lwc1        $f0, -0x7DF8($gp)
    ctx->pc = 0x2c7360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7364: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c7364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7368: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x2c7368u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c736c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c736cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7370: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2c7370u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2c7374: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c7374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7378: 0x10c00067  beqz        $a2, . + 4 + (0x67 << 2)
    ctx->pc = 0x2C7378u;
    {
        const bool branch_taken_0x2c7378 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7378u;
        // 0x2c737c: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7378) {
            ctx->pc = 0x2C7518u;
            goto label_2c7518;
        }
    }
    ctx->pc = 0x2C7380u;
    // 0x2c7380: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2c7380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c7384: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2c7384u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7388: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2c7388u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c738c: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x2c738cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7390: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2c7390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7394: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c7394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c7398: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x2c7398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c739c: 0x0  nop
    ctx->pc = 0x2c739cu;
    // NOP
label_2c73a0:
    // 0x2c73a0: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2c73a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c73a4: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x2c73a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c73a8: 0x0  nop
    ctx->pc = 0x2c73a8u;
    // NOP
    // 0x2c73ac: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x2C73ACu;
    {
        const bool branch_taken_0x2c73ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73ACu;
        // 0x2c73b0: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73ac) {
            ctx->pc = 0x2C7474u;
            goto label_2c7474;
        }
    }
    ctx->pc = 0x2C73B4u;
    // 0x2c73b4: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2c73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c73b8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c73bc: 0x46013834  c.lt.s      $f7, $f1
    ctx->pc = 0x2c73bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c73c0: 0x0  nop
    ctx->pc = 0x2c73c0u;
    // NOP
    // 0x2c73c4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2C73C4u;
    {
        const bool branch_taken_0x2c73c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73C4u;
        // 0x2c73c8: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73c4) {
            ctx->pc = 0x2C7438u;
            goto label_2c7438;
        }
    }
    ctx->pc = 0x2C73CCu;
    // 0x2c73cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c73ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c73d0: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x2c73d0u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2c73d4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2c73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c73d8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2c73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c73dc: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2c73dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c73e0: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2c73e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c73e4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2c73e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c73e8: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x2c73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c73ec: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2c73ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c73f0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2c73f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c73f4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2c73f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c73f8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c73f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c73fc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2c73fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c7400: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2c7400u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2c7404: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2c7404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2c7408: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2c7408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2c740c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2c740cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2c7410: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2c7410u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2c7414: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2c7414u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2c7418: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2c7418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c741c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2c741cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c7420: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x2c7420u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c7424: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2c7424u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2c7428: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2c7428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2c742c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2c742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2c7430: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c7430u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c7434: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c7434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2c7438:
    // 0x2c7438: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2c7438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c743c: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2c743cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c7440: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2c7440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c7444: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2c7444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7448: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2c7448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c744c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2c744cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2c7450: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c7450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c7454: 0x1b21026  xor         $v0, $t5, $s2
    ctx->pc = 0x2c7454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 18));
    // 0x2c7458: 0x12c1821  addu        $v1, $t1, $t4
    ctx->pc = 0x2c7458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x2c745c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2c745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7460: 0x282780a  movz        $t7, $s4, $v0
    ctx->pc = 0x2c7460u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20));
    // 0x2c7464: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2c7464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2c7468: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c7468u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c746c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C746Cu;
    {
        const bool branch_taken_0x2c746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C746Cu;
        // 0x2c7470: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c746c) {
            ctx->pc = 0x2C74F8u;
            goto label_2c74f8;
        }
    }
    ctx->pc = 0x2C7474u;
label_2c7474:
    // 0x2c7474: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2c7474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c7478: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2c7478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2c747c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7480: 0x46070836  c.le.s      $f1, $f7
    ctx->pc = 0x2c7480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7484: 0x0  nop
    ctx->pc = 0x2c7484u;
    // NOP
    // 0x2c7488: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2C7488u;
    {
        const bool branch_taken_0x2c7488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7488u;
        // 0x2c748c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7488) {
            ctx->pc = 0x2C74FCu;
            goto label_2c74fc;
        }
    }
    ctx->pc = 0x2C7490u;
    // 0x2c7490: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7494: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x2c7494u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2c7498: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2c7498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c749c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2c749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c74a0: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2c74a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c74a4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2c74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c74a8: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x2c74a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c74ac: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2c74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c74b0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2c74b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c74b4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2c74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c74b8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c74b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c74bc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2c74bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c74c0: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2c74c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2c74c4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2c74c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2c74c8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2c74c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2c74cc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2c74ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2c74d0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2c74d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2c74d4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2c74d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2c74d8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2c74d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c74dc: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2c74dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c74e0: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x2c74e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c74e4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2c74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2c74e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2c74e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2c74ec: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2c74ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2c74f0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c74f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c74f4: 0x0  nop
    ctx->pc = 0x2c74f4u;
    // NOP
label_2c74f8:
    // 0x2c74f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c74f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2c74fc:
    // 0x2c74fc: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x2c74fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7500: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c7500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c7504: 0x24ae0001  addiu       $t6, $a1, 0x1
    ctx->pc = 0x2c7504u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c7508: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2c7508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2c750c: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x2c750cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c7510: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2C7510u;
    {
        const bool branch_taken_0x2c7510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7510u;
        // 0x2c7514: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7510) {
            ctx->pc = 0x2C73A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c73a0;
        }
    }
    ctx->pc = 0x2C7518u;
label_2c7518:
    // 0x2c7518: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x2c7518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c751c: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C751Cu;
    {
        const bool branch_taken_0x2c751c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c751c) {
            ctx->pc = 0x2C7520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C751Cu;
            // 0x2c7520: 0x2685fffe  addiu       $a1, $s4, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7648u;
            goto label_2c7648;
        }
    }
    ctx->pc = 0x2C7524u;
    // 0x2c7524: 0x12800139  beqz        $s4, . + 4 + (0x139 << 2)
    ctx->pc = 0x2C7524u;
    {
        const bool branch_taken_0x2c7524 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7524u;
        // 0x2c7528: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7524) {
            ctx->pc = 0x2C7A0Cu;
            goto label_2c7a0c;
        }
    }
    ctx->pc = 0x2C752Cu;
    // 0x2c752c: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2c752cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c7530: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2c7530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c7534: 0x1a80001b  blez        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C7534u;
    {
        const bool branch_taken_0x2c7534 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2C7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7534u;
        // 0x2c7538: 0x32830003  andi        $v1, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7534) {
            ctx->pc = 0x2C75A4u;
            goto label_2c75a4;
        }
    }
    ctx->pc = 0x2C753Cu;
    // 0x2c753c: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C753Cu;
    {
        const bool branch_taken_0x2c753c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c753c) {
            ctx->pc = 0x2C7540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C753Cu;
            // 0x2c7540: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C75C8u;
            goto label_2c75c8;
        }
    }
    ctx->pc = 0x2C7544u;
    // 0x2c7544: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c7544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c7548: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C7548u;
    {
        const bool branch_taken_0x2c7548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7548) {
            ctx->pc = 0x2C754Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7548u;
            // 0x2c754c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C75A8u;
            goto label_2c75a8;
        }
    }
    ctx->pc = 0x2C7550u;
    // 0x2c7550: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c7550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c7554: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7554u;
    {
        const bool branch_taken_0x2c7554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7554) {
            ctx->pc = 0x2C7558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7554u;
            // 0x2c7558: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7584u;
            goto label_2c7584;
        }
    }
    ctx->pc = 0x2C755Cu;
    // 0x2c755c: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x2c755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7564: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c7564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7568: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c7568u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c756c: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x2c756cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x2c7570: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C7570u;
    SET_GPR_U32(ctx, 31, 0x2C7578u);
    ctx->pc = 0x2C7574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7570u;
    // 0x2c7574: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C7570u, 0x2C7578u)) {
        return;
    }
    ctx->pc = 0x2C7578u;
label_2c7578:
    // 0x2c7578: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x2c7578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2c757c: 0x27b000ec  addiu       $s0, $sp, 0xEC
    ctx->pc = 0x2c757cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2c7580: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2c7580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c7584:
    // 0x2c7584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7588: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c7588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c758c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c758cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c7590: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x2c7590u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x2c7594: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c7594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c7598: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2c7598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c759c: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C759Cu;
    SET_GPR_U32(ctx, 31, 0x2C75A4u);
    ctx->pc = 0x2C75A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C759Cu;
    // 0x2c75a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C759Cu, 0x2C75A4u)) {
        return;
    }
    ctx->pc = 0x2C75A4u;
label_2c75a4:
    // 0x2c75a4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2c75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c75a8:
    // 0x2c75a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c75a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c75acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75b0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c75b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c75b4: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x2c75b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x2c75b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c75b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c75bc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c75bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c75c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C75C0u;
    {
        const bool branch_taken_0x2c75c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75C0u;
        // 0x2c75c4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75c0) {
            ctx->pc = 0x2C762Cu;
            goto label_2c762c;
        }
    }
    ctx->pc = 0x2C75C8u;
label_2c75c8:
    // 0x2c75c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c75c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c75ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75d0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c75d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c75d4: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x2c75d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x2c75d8: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C75D8u;
    SET_GPR_U32(ctx, 31, 0x2C75E0u);
    ctx->pc = 0x2C75DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C75D8u;
    // 0x2c75dc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C75D8u, 0x2C75E0u)) {
        return;
    }
    ctx->pc = 0x2C75E0u;
label_2c75e0:
    // 0x2c75e0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x2c75e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c75e4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2c75e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c75e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c75e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75ec: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c75ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c75f0: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C75F0u;
    SET_GPR_U32(ctx, 31, 0x2C75F8u);
    ctx->pc = 0x2C75F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C75F0u;
    // 0x2c75f4: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C75F0u, 0x2C75F8u)) {
        return;
    }
    ctx->pc = 0x2C75F8u;
label_2c75f8:
    // 0x2c75f8: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x2c75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c75fc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2c75fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2c7600: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c7600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7604: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c7604u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c7608: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C7608u;
    SET_GPR_U32(ctx, 31, 0x2C7610u);
    ctx->pc = 0x2C760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7608u;
    // 0x2c760c: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C7608u, 0x2C7610u)) {
        return;
    }
    ctx->pc = 0x2C7610u;
label_2c7610:
    // 0x2c7610: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x2c7610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7614: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2c7614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2c7618: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c7618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c761c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c761cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c7620: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x2c7620u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x2c7624: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2c7624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c7628: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2c7628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2c762c:
    // 0x2c762c: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C762Cu;
    SET_GPR_U32(ctx, 31, 0x2C7634u);
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C762Cu, 0x2C7634u)) {
        return;
    }
    ctx->pc = 0x2C7634u;
label_2c7634:
    // 0x2c7634: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x2c7634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c7638: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C7638u;
    {
        const bool branch_taken_0x2c7638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7638) {
            ctx->pc = 0x2C763Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7638u;
            // 0x2c763c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C75C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c75c8;
        }
    }
    ctx->pc = 0x2C7640u;
    // 0x2c7640: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x2C7640u;
    {
        const bool branch_taken_0x2c7640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7640u;
        // 0x2c7644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7640) {
            ctx->pc = 0x2C7A10u;
            goto label_2c7a10;
        }
    }
    ctx->pc = 0x2C7648u;
label_2c7648:
    // 0x2c7648: 0x2692ffff  addiu       $s2, $s4, -0x1
    ctx->pc = 0x2c7648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2c764c: 0x12800051  beqz        $s4, . + 4 + (0x51 << 2)
    ctx->pc = 0x2C764Cu;
    {
        const bool branch_taken_0x2c764c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C764Cu;
        // 0x2c7650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c764c) {
            ctx->pc = 0x2C7794u;
            goto label_2c7794;
        }
    }
    ctx->pc = 0x2C7654u;
    // 0x2c7654: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c7654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c7658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c765c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2c765cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2c7660: 0xc44a3b3c  lwc1        $f10, 0x3B3C($v0)
    ctx->pc = 0x2c7660u;
    { uint32_t bits = FAST_READ32(0x6B3B3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c7664: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x2c7664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c7668: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2c7668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c766c: 0x0  nop
    ctx->pc = 0x2c766cu;
    // NOP
label_2c7670:
    // 0x2c7670: 0x124f003f  beq         $s2, $t7, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C7670u;
    {
        const bool branch_taken_0x2c7670 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        ctx->pc = 0x2C7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7670u;
        // 0x2c7674: 0xa81818  mult        $v1, $a1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7670) {
            ctx->pc = 0x2C7770u;
            goto label_2c7770;
        }
    }
    ctx->pc = 0x2C7678u;
    // 0x2c7678: 0x2482018  mult        $a0, $s2, $t0
    ctx->pc = 0x2c7678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c767c: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x2c767cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c7680: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x2c7680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2c7684: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x2c7684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2c7688: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x2c7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2c768c: 0xbd2021  addu        $a0, $a1, $sp
    ctx->pc = 0x2c768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2c7690: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x2c7690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2c7694: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x2c7694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x2c7698: 0xc4690000  lwc1        $f9, 0x0($v1)
    ctx->pc = 0x2c7698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c769c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c76a0: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x2c76a0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x2c76a4: 0xe7a90210  swc1        $f9, 0x210($sp)
    ctx->pc = 0x2c76a4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x2c76a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c76a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c76ac: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x2c76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c76b0: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2c76b0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c76b4: 0xe7a60214  swc1        $f6, 0x214($sp)
    ctx->pc = 0x2c76b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x2c76b8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2c76b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c76bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c76bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c76c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c76c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c76c4: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x2c76c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x2c76c8: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x2c76c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c76cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c76ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c76d0: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x2c76d0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2c76d4: 0xe7a70220  swc1        $f7, 0x220($sp)
    ctx->pc = 0x2c76d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2c76d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c76dc: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2c76dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c76e0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c76e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c76e4: 0xe7a40224  swc1        $f4, 0x224($sp)
    ctx->pc = 0x2c76e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x2c76e8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2c76e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c76ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c76ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c76f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c76f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c76f4: 0xe7a30228  swc1        $f3, 0x228($sp)
    ctx->pc = 0x2c76f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2c76f8: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x2c76f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2c76fc: 0x46071142  mul.s       $f5, $f2, $f7
    ctx->pc = 0x2c76fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c7700: 0x46044a02  mul.s       $f8, $f9, $f4
    ctx->pc = 0x2c7700u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x2c7704: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2c7704u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2c7708: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2c7708u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2c770c: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x2c770cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2c7710: 0x46064201  sub.s       $f8, $f8, $f6
    ctx->pc = 0x2c7710u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
    // 0x2c7714: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c7714u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c7718: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x2c7718u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x2c771c: 0xe7a80208  swc1        $f8, 0x208($sp)
    ctx->pc = 0x2c771cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x2c7720: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x2c7720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2c7724: 0xe7a50204  swc1        $f5, 0x204($sp)
    ctx->pc = 0x2c7724u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x2c7728: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x2c7728u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2c772c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c772cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c7730: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c7730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c7734: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c7734u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c7738: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2c7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c773c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c773cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c7740: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x2c7740u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x2c7744: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c7744u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c7748: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x2c7748u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2c774c: 0x46033800  add.s       $f0, $f7, $f3
    ctx->pc = 0x2c774cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x2c7750: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2c7750u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2c7754: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c7754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c7758: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x2c7758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x2c775c: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x2c775cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x2c7760: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c7760u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2c7764: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7764u;
    {
        const bool branch_taken_0x2c7764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7764u;
        // 0x2c7768: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7764) {
            ctx->pc = 0x2C777Cu;
            goto label_2c777c;
        }
    }
    ctx->pc = 0x2C776Cu;
    // 0x2c776c: 0x0  nop
    ctx->pc = 0x2c776cu;
    // NOP
label_2c7770:
    // 0x2c7770: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c7770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c7774: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2c7774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c7778: 0xe44a0000  swc1        $f10, 0x0($v0)
    ctx->pc = 0x2c7778u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c777c:
    // 0x2c777c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c777cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7780: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c7780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7784: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x2c7784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c7788: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x2c7788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c778c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x2C778Cu;
    {
        const bool branch_taken_0x2c778c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c778c) {
            ctx->pc = 0x2C7670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7670;
        }
    }
    ctx->pc = 0x2C7794u;
label_2c7794:
    // 0x2c7794: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2c7794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c7798: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x2c7798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c779c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C779Cu;
    {
        const bool branch_taken_0x2c779c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C77A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C779Cu;
        // 0x2c77a0: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c779c) {
            ctx->pc = 0x2C7858u;
            goto label_2c7858;
        }
    }
    ctx->pc = 0x2C77A4u;
    // 0x2c77a4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C77A4u;
    {
        const bool branch_taken_0x2c77a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77A4u;
        // 0x2c77a8: 0x32830003  andi        $v1, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77a4) {
            ctx->pc = 0x2C77F0u;
            goto label_2c77f0;
        }
    }
    ctx->pc = 0x2C77ACu;
    // 0x2c77ac: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C77ACu;
    {
        const bool branch_taken_0x2c77ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77ACu;
        // 0x2c77b0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77ac) {
            ctx->pc = 0x2C7808u;
            goto label_2c7808;
        }
    }
    ctx->pc = 0x2C77B4u;
    // 0x2c77b4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c77b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c77b8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C77B8u;
    {
        const bool branch_taken_0x2c77b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77B8u;
        // 0x2c77bc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77b8) {
            ctx->pc = 0x2C77F8u;
            goto label_2c77f8;
        }
    }
    ctx->pc = 0x2C77C0u;
    // 0x2c77c0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c77c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c77c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C77C4u;
    {
        const bool branch_taken_0x2c77c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C77C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77C4u;
        // 0x2c77c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77c4) {
            ctx->pc = 0x2C77E8u;
            goto label_2c77e8;
        }
    }
    ctx->pc = 0x2C77CCu;
    // 0x2c77cc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c77d0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c77d4: 0xc0b1aa8  jal         func_2C6AA0
    ctx->pc = 0x2C77D4u;
    SET_GPR_U32(ctx, 31, 0x2C77DCu);
    ctx->pc = 0x2C77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C77D4u;
    // 0x2c77d8: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6AA0u, 0x2C77D4u, 0x2C77DCu)) {
        return;
    }
    ctx->pc = 0x2C77DCu;
label_2c77dc:
    // 0x2c77dc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c77dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c77e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c77e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c77e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c77e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c77e8:
    // 0x2c77e8: 0xc0b1aa8  jal         func_2C6AA0
    ctx->pc = 0x2C77E8u;
    SET_GPR_U32(ctx, 31, 0x2C77F0u);
    ctx->pc = 0x2C77ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C77E8u;
    // 0x2c77ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6AA0u, 0x2C77E8u, 0x2C77F0u)) {
        return;
    }
    ctx->pc = 0x2C77F0u;
label_2c77f0:
    // 0x2c77f0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c77f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c77f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c77f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c77f8:
    // 0x2c77f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c77f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C77FCu;
    {
        const bool branch_taken_0x2c77fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77FCu;
        // 0x2c7800: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77fc) {
            ctx->pc = 0x2C7844u;
            goto label_2c7844;
        }
    }
    ctx->pc = 0x2C7804u;
    // 0x2c7804: 0x0  nop
    ctx->pc = 0x2c7804u;
    // NOP
label_2c7808:
    // 0x2c7808: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c7808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c780c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c780cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7810: 0xc0b1aa8  jal         func_2C6AA0
    ctx->pc = 0x2C7810u;
    SET_GPR_U32(ctx, 31, 0x2C7818u);
    ctx->pc = 0x2C7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7810u;
    // 0x2c7814: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6AA0u, 0x2C7810u, 0x2C7818u)) {
        return;
    }
    ctx->pc = 0x2C7818u;
label_2c7818:
    // 0x2c7818: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c7818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c781c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c7820: 0xc0b1aa8  jal         func_2C6AA0
    ctx->pc = 0x2C7820u;
    SET_GPR_U32(ctx, 31, 0x2C7828u);
    ctx->pc = 0x2C7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7820u;
    // 0x2c7824: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6AA0u, 0x2C7820u, 0x2C7828u)) {
        return;
    }
    ctx->pc = 0x2C7828u;
label_2c7828:
    // 0x2c7828: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c7828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c782c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c7830: 0xc0b1aa8  jal         func_2C6AA0
    ctx->pc = 0x2C7830u;
    SET_GPR_U32(ctx, 31, 0x2C7838u);
    ctx->pc = 0x2C7834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7830u;
    // 0x2c7834: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6AA0u, 0x2C7830u, 0x2C7838u)) {
        return;
    }
    ctx->pc = 0x2C7838u;
label_2c7838:
    // 0x2c7838: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c7838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c783c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c7840: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c7840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7844:
    // 0x2c7844: 0xc0b1aa8  jal         func_2C6AA0
    ctx->pc = 0x2C7844u;
    SET_GPR_U32(ctx, 31, 0x2C784Cu);
    ctx->pc = 0x2C6AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6AA0u, 0x2C7844u, 0x2C784Cu)) {
        return;
    }
    ctx->pc = 0x2C784Cu;
label_2c784c:
    // 0x2c784c: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x2c784cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c7850: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2C7850u;
    {
        const bool branch_taken_0x2c7850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7850u;
        // 0x2c7854: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7850) {
            ctx->pc = 0x2C7808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7808;
        }
    }
    ctx->pc = 0x2C7858u;
label_2c7858:
    // 0x2c7858: 0x1280006c  beqz        $s4, . + 4 + (0x6C << 2)
    ctx->pc = 0x2C7858u;
    {
        const bool branch_taken_0x2c7858 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7858u;
        // 0x2c785c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7858) {
            ctx->pc = 0x2C7A0Cu;
            goto label_2c7a0c;
        }
    }
    ctx->pc = 0x2C7860u;
    // 0x2c7860: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c7860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c7864: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c7864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c7868: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c7868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c786c: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2c786cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c7870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7874: 0x1a800024  blez        $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C7874u;
    {
        const bool branch_taken_0x2c7874 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2C7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7874u;
        // 0x2c7878: 0x32830003  andi        $v1, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7874) {
            ctx->pc = 0x2C7908u;
            goto label_2c7908;
        }
    }
    ctx->pc = 0x2C787Cu;
    // 0x2c787c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C787Cu;
    {
        const bool branch_taken_0x2c787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C787Cu;
        // 0x2c7880: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c787c) {
            ctx->pc = 0x2C7948u;
            goto label_2c7948;
        }
    }
    ctx->pc = 0x2C7884u;
    // 0x2c7884: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C7884u;
    {
        const bool branch_taken_0x2c7884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7884) {
            ctx->pc = 0x2C7888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7884u;
            // 0x2c7888: 0xc620ffc0  lwc1        $f0, -0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C790Cu;
            goto label_2c790c;
        }
    }
    ctx->pc = 0x2C788Cu;
    // 0x2c788c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c788cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c7890: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C7890u;
    {
        const bool branch_taken_0x2c7890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7890) {
            ctx->pc = 0x2C7894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7890u;
            // 0x2c7894: 0xc620ffc0  lwc1        $f0, -0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C78D4u;
            goto label_2c78d4;
        }
    }
    ctx->pc = 0x2C7898u;
    // 0x2c7898: 0xc480ffc0  lwc1        $f0, -0x40($a0)
    ctx->pc = 0x2c7898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c789c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2c789cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c78a0: 0x0  nop
    ctx->pc = 0x2c78a0u;
    // NOP
    // 0x2c78a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C78A4u;
    {
        const bool branch_taken_0x2c78a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78A4u;
        // 0x2c78a8: 0x27b10084  addiu       $s1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78a4) {
            ctx->pc = 0x2C78C8u;
            goto label_2c78c8;
        }
    }
    ctx->pc = 0x2C78ACu;
    // 0x2c78ac: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x2c78acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c78b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c78b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c78b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78b8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c78b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c78bc: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C78BCu;
    SET_GPR_U32(ctx, 31, 0x2C78C4u);
    ctx->pc = 0x2C78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C78BCu;
    // 0x2c78c0: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C78BCu, 0x2C78C4u)) {
        return;
    }
    ctx->pc = 0x2C78C4u;
label_2c78c4:
    // 0x2c78c4: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x2c78c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_2c78c8:
    // 0x2c78c8: 0x27b000ec  addiu       $s0, $sp, 0xEC
    ctx->pc = 0x2c78c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2c78cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c78ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c78d0: 0xc620ffc0  lwc1        $f0, -0x40($s1)
    ctx->pc = 0x2c78d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c78d4:
    // 0x2c78d4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2c78d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c78d8: 0x0  nop
    ctx->pc = 0x2c78d8u;
    // NOP
    // 0x2c78dc: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C78DCu;
    {
        const bool branch_taken_0x2c78dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c78dc) {
            ctx->pc = 0x2C78E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C78DCu;
            // 0x2c78e0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7900u;
            goto label_2c7900;
        }
    }
    ctx->pc = 0x2C78E4u;
    // 0x2c78e4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2c78e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c78e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c78e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c78ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78f0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c78f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c78f4: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C78F4u;
    SET_GPR_U32(ctx, 31, 0x2C78FCu);
    ctx->pc = 0x2C78F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C78F4u;
    // 0x2c78f8: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C78F4u, 0x2C78FCu)) {
        return;
    }
    ctx->pc = 0x2C78FCu;
label_2c78fc:
    // 0x2c78fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c78fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2c7900:
    // 0x2c7900: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2c7900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c7904: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c7904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c7908:
    // 0x2c7908: 0xc620ffc0  lwc1        $f0, -0x40($s1)
    ctx->pc = 0x2c7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c790c:
    // 0x2c790c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2c790cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7910: 0x0  nop
    ctx->pc = 0x2c7910u;
    // NOP
    // 0x2c7914: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C7914u;
    {
        const bool branch_taken_0x2c7914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7914) {
            ctx->pc = 0x2C7918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7914u;
            // 0x2c7918: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7938u;
            goto label_2c7938;
        }
    }
    ctx->pc = 0x2C791Cu;
    // 0x2c791c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2c791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7924: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c7924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7928: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c7928u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c792c: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C792Cu;
    SET_GPR_U32(ctx, 31, 0x2C7934u);
    ctx->pc = 0x2C7930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C792Cu;
    // 0x2c7930: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C792Cu, 0x2C7934u)) {
        return;
    }
    ctx->pc = 0x2C7934u;
label_2c7934:
    // 0x2c7934: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c7934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c7938:
    // 0x2c7938: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c7938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c793c: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x2c793cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c7940: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C7940u;
    {
        const bool branch_taken_0x2c7940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7940u;
        // 0x2c7944: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7940) {
            ctx->pc = 0x2C7A0Cu;
            goto label_2c7a0c;
        }
    }
    ctx->pc = 0x2C7948u;
label_2c7948:
    // 0x2c7948: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2c7948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c794c: 0x0  nop
    ctx->pc = 0x2c794cu;
    // NOP
label_2c7950:
    // 0x2c7950: 0xc660ffc0  lwc1        $f0, -0x40($s3)
    ctx->pc = 0x2c7950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7954: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2c7954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7958: 0x0  nop
    ctx->pc = 0x2c7958u;
    // NOP
    // 0x2c795c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C795Cu;
    {
        const bool branch_taken_0x2c795c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c795c) {
            ctx->pc = 0x2C7960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C795Cu;
            // 0x2c7960: 0xc660ffc4  lwc1        $f0, -0x3C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7980u;
            goto label_2c7980;
        }
    }
    ctx->pc = 0x2C7964u;
    // 0x2c7964: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2c7964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c796c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c796cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7970: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c7970u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c7974: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C7974u;
    SET_GPR_U32(ctx, 31, 0x2C797Cu);
    ctx->pc = 0x2C7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7974u;
    // 0x2c7978: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C7974u, 0x2C797Cu)) {
        return;
    }
    ctx->pc = 0x2C797Cu;
label_2c797c:
    // 0x2c797c: 0xc660ffc4  lwc1        $f0, -0x3C($s3)
    ctx->pc = 0x2c797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c7980:
    // 0x2c7980: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2c7980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7984: 0x0  nop
    ctx->pc = 0x2c7984u;
    // NOP
    // 0x2c7988: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7988u;
    {
        const bool branch_taken_0x2c7988 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7988u;
        // 0x2c798c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7988) {
            ctx->pc = 0x2C79A4u;
            goto label_2c79a4;
        }
    }
    ctx->pc = 0x2C7990u;
    // 0x2c7990: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x2c7990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7994: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c7994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7998: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c7998u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c799c: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C799Cu;
    SET_GPR_U32(ctx, 31, 0x2C79A4u);
    ctx->pc = 0x2C79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C799Cu;
    // 0x2c79a0: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C799Cu, 0x2C79A4u)) {
        return;
    }
    ctx->pc = 0x2C79A4u;
label_2c79a4:
    // 0x2c79a4: 0xc660ffc8  lwc1        $f0, -0x38($s3)
    ctx->pc = 0x2c79a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c79a8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2c79a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c79ac: 0x0  nop
    ctx->pc = 0x2c79acu;
    // NOP
    // 0x2c79b0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C79B0u;
    {
        const bool branch_taken_0x2c79b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79B0u;
        // 0x2c79b4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c79b0) {
            ctx->pc = 0x2C79CCu;
            goto label_2c79cc;
        }
    }
    ctx->pc = 0x2C79B8u;
    // 0x2c79b8: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x2c79b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c79bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c79bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79c0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c79c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c79c4: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C79C4u;
    SET_GPR_U32(ctx, 31, 0x2C79CCu);
    ctx->pc = 0x2C79C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C79C4u;
    // 0x2c79c8: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C79C4u, 0x2C79CCu)) {
        return;
    }
    ctx->pc = 0x2C79CCu;
label_2c79cc:
    // 0x2c79cc: 0xc660ffcc  lwc1        $f0, -0x34($s3)
    ctx->pc = 0x2c79ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c79d0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2c79d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c79d4: 0x0  nop
    ctx->pc = 0x2c79d4u;
    // NOP
    // 0x2c79d8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C79D8u;
    {
        const bool branch_taken_0x2c79d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79D8u;
        // 0x2c79dc: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c79d8) {
            ctx->pc = 0x2C79F4u;
            goto label_2c79f4;
        }
    }
    ctx->pc = 0x2C79E0u;
    // 0x2c79e0: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x2c79e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c79e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c79e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79e8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2c79e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2c79ec: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C79ECu;
    SET_GPR_U32(ctx, 31, 0x2C79F4u);
    ctx->pc = 0x2C79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C79ECu;
    // 0x2c79f0: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6990u, 0x2C79ECu, 0x2C79F4u)) {
        return;
    }
    ctx->pc = 0x2C79F4u;
label_2c79f4:
    // 0x2c79f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2c79f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c79f8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2c79f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c79fc: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2c79fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2c7a00: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x2c7a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c7a04: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2C7A04u;
    {
        const bool branch_taken_0x2c7a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A04u;
        // 0x2c7a08: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a04) {
            ctx->pc = 0x2C7950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7950;
        }
    }
    ctx->pc = 0x2C7A0Cu;
label_2c7a0c:
    // 0x2c7a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7a10:
    // 0x2c7a10: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x2c7a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2c7a14:
    // 0x2c7a14: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x2c7a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2c7a18: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x2c7a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c7a1c: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x2c7a1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c7a20: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x2c7a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c7a24: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x2c7a24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c7a28: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x2c7a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c7a2c: 0xc7b602b0  lwc1        $f22, 0x2B0($sp)
    ctx->pc = 0x2c7a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c7a30: 0xc7b502a8  lwc1        $f21, 0x2A8($sp)
    ctx->pc = 0x2c7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c7a34: 0xc7b402a0  lwc1        $f20, 0x2A0($sp)
    ctx->pc = 0x2c7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7a38: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A38u;
        // 0x2c7a3c: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7A40u;
}
