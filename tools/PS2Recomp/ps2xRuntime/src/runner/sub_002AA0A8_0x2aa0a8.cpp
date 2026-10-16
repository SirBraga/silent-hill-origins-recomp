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

// Function: sub_002AA0A8
// Address: 0x2aa0a8 - 0x2aa1c8
void sub_002AA0A8_0x2aa0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA0A8_0x2aa0a8");
#endif

    switch (ctx->pc) {
        case 0x2aa0a8u: goto label_2aa0a8;
        case 0x2aa0acu: goto label_2aa0ac;
        case 0x2aa0b0u: goto label_2aa0b0;
        case 0x2aa0b4u: goto label_2aa0b4;
        case 0x2aa0b8u: goto label_2aa0b8;
        case 0x2aa0bcu: goto label_2aa0bc;
        case 0x2aa0c0u: goto label_2aa0c0;
        case 0x2aa0c4u: goto label_2aa0c4;
        case 0x2aa0c8u: goto label_2aa0c8;
        case 0x2aa0ccu: goto label_2aa0cc;
        case 0x2aa0d0u: goto label_2aa0d0;
        case 0x2aa0d4u: goto label_2aa0d4;
        case 0x2aa0d8u: goto label_2aa0d8;
        case 0x2aa0dcu: goto label_2aa0dc;
        case 0x2aa0e0u: goto label_2aa0e0;
        case 0x2aa0e4u: goto label_2aa0e4;
        case 0x2aa0e8u: goto label_2aa0e8;
        case 0x2aa0ecu: goto label_2aa0ec;
        case 0x2aa0f0u: goto label_2aa0f0;
        case 0x2aa0f4u: goto label_2aa0f4;
        case 0x2aa0f8u: goto label_2aa0f8;
        case 0x2aa0fcu: goto label_2aa0fc;
        case 0x2aa100u: goto label_2aa100;
        case 0x2aa104u: goto label_2aa104;
        case 0x2aa108u: goto label_2aa108;
        case 0x2aa10cu: goto label_2aa10c;
        case 0x2aa110u: goto label_2aa110;
        case 0x2aa114u: goto label_2aa114;
        case 0x2aa118u: goto label_2aa118;
        case 0x2aa11cu: goto label_2aa11c;
        case 0x2aa120u: goto label_2aa120;
        case 0x2aa124u: goto label_2aa124;
        case 0x2aa128u: goto label_2aa128;
        case 0x2aa12cu: goto label_2aa12c;
        case 0x2aa130u: goto label_2aa130;
        case 0x2aa134u: goto label_2aa134;
        case 0x2aa138u: goto label_2aa138;
        case 0x2aa13cu: goto label_2aa13c;
        case 0x2aa140u: goto label_2aa140;
        case 0x2aa144u: goto label_2aa144;
        case 0x2aa148u: goto label_2aa148;
        case 0x2aa14cu: goto label_2aa14c;
        case 0x2aa150u: goto label_2aa150;
        case 0x2aa154u: goto label_2aa154;
        case 0x2aa158u: goto label_2aa158;
        case 0x2aa15cu: goto label_2aa15c;
        case 0x2aa160u: goto label_2aa160;
        case 0x2aa164u: goto label_2aa164;
        case 0x2aa168u: goto label_2aa168;
        case 0x2aa16cu: goto label_2aa16c;
        case 0x2aa170u: goto label_2aa170;
        case 0x2aa174u: goto label_2aa174;
        case 0x2aa178u: goto label_2aa178;
        case 0x2aa17cu: goto label_2aa17c;
        case 0x2aa180u: goto label_2aa180;
        case 0x2aa184u: goto label_2aa184;
        case 0x2aa188u: goto label_2aa188;
        case 0x2aa18cu: goto label_2aa18c;
        case 0x2aa190u: goto label_2aa190;
        case 0x2aa194u: goto label_2aa194;
        case 0x2aa198u: goto label_2aa198;
        case 0x2aa19cu: goto label_2aa19c;
        case 0x2aa1a0u: goto label_2aa1a0;
        case 0x2aa1a4u: goto label_2aa1a4;
        case 0x2aa1a8u: goto label_2aa1a8;
        case 0x2aa1acu: goto label_2aa1ac;
        case 0x2aa1b0u: goto label_2aa1b0;
        case 0x2aa1b4u: goto label_2aa1b4;
        case 0x2aa1b8u: goto label_2aa1b8;
        case 0x2aa1bcu: goto label_2aa1bc;
        case 0x2aa1c0u: goto label_2aa1c0;
        case 0x2aa1c4u: goto label_2aa1c4;
        default: break;
    }

    ctx->pc = 0x2aa0a8u;

label_2aa0a8:
    // 0x2aa0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aa0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2aa0ac:
    // 0x2aa0ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2aa0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2aa0b0:
    // 0x2aa0b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2aa0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2aa0b4:
    // 0x2aa0b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2aa0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0b8:
    // 0x2aa0b8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2aa0b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2aa0bc:
    // 0x2aa0bc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2aa0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0c0:
    // 0x2aa0c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2aa0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2aa0c4:
    // 0x2aa0c4: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
label_2aa0c8:
    if (ctx->pc == 0x2AA0C8u) {
        ctx->pc = 0x2AA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0C4u;
        // 0x2aa0c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA0CCu;
        goto label_2aa0cc;
    }
    ctx->pc = 0x2AA0C4u;
    {
        const bool branch_taken_0x2aa0c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0C4u;
        // 0x2aa0c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0c4) {
            ctx->pc = 0x2AA180u;
            goto label_2aa180;
        }
    }
    ctx->pc = 0x2AA0CCu;
label_2aa0cc:
    // 0x2aa0cc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2aa0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2aa0d0:
    // 0x2aa0d0: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x2aa0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa0d4:
    // 0x2aa0d4: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2aa0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2aa0d8:
    // 0x2aa0d8: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2aa0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa0dc:
    // 0x2aa0dc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2aa0dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2aa0e0:
    // 0x2aa0e0: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x2aa0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2aa0e4:
    // 0x2aa0e4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2aa0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2aa0e8:
    // 0x2aa0e8: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2aa0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa0ec:
    // 0x2aa0ec: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2aa0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_2aa0f0:
    // 0x2aa0f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2aa0f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2aa0f4:
    // 0x2aa0f4: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x2aa0f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2aa0f8:
    // 0x2aa0f8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2aa0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa0fc:
    // 0x2aa0fc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2aa0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa100:
    // 0x2aa100: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2aa100u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2aa104:
    // 0x2aa104: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2aa104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa108:
    // 0x2aa108: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2aa108u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2aa10c:
    // 0x2aa10c: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x2aa10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2aa110:
    // 0x2aa110: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2aa110u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2aa114:
    // 0x2aa114: 0xc4a70014  lwc1        $f7, 0x14($a1)
    ctx->pc = 0x2aa114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2aa118:
    // 0x2aa118: 0xc4a80018  lwc1        $f8, 0x18($a1)
    ctx->pc = 0x2aa118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2aa11c:
    // 0x2aa11c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2aa11cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2aa120:
    // 0x2aa120: 0xc4a90020  lwc1        $f9, 0x20($a1)
    ctx->pc = 0x2aa120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2aa124:
    // 0x2aa124: 0xc4a40024  lwc1        $f4, 0x24($a1)
    ctx->pc = 0x2aa124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2aa128:
    // 0x2aa128: 0xc4aa0028  lwc1        $f10, 0x28($a1)
    ctx->pc = 0x2aa128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2aa12c:
    // 0x2aa12c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2aa12cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_2aa130:
    // 0x2aa130: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2aa130u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2aa134:
    // 0x2aa134: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2aa134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa138:
    // 0x2aa138: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2aa138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa13c:
    // 0x2aa13c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2aa13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2aa140:
    // 0x2aa140: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2aa140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa144:
    // 0x2aa144: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2aa144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_2aa148:
    // 0x2aa148: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2aa148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_2aa14c:
    // 0x2aa14c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa14cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2aa150:
    // 0x2aa150: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2aa154:
    // 0x2aa154: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2aa154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2aa158:
    // 0x2aa158: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2aa158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa15c:
    // 0x2aa15c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2aa15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa160:
    // 0x2aa160: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2aa160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_2aa164:
    // 0x2aa164: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2aa164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa168:
    // 0x2aa168: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2aa168u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2aa16c:
    // 0x2aa16c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2aa16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_2aa170:
    // 0x2aa170: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2aa170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2aa174:
    // 0x2aa174: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2aa174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2aa178:
    // 0x2aa178: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2aa178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2aa17c:
    // 0x2aa17c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2aa17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2aa180:
    // 0x2aa180: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2aa180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2aa184:
    // 0x2aa184: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2aa184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2aa188:
    // 0x2aa188: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aa188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa18c:
    // 0x2aa18c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2aa18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2aa190:
    // 0x2aa190: 0x40f809  jalr        $v0
label_2aa194:
    if (ctx->pc == 0x2AA194u) {
        ctx->pc = 0x2AA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA190u;
        // 0x2aa194: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA198u;
        goto label_2aa198;
    }
    ctx->pc = 0x2AA190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA198u);
        ctx->pc = 0x2AA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA190u;
        // 0x2aa194: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA190u, 0x2AA198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA198u;
label_2aa198:
    // 0x2aa198: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2aa198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa19c:
    // 0x2aa19c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa1a0:
    // 0x2aa1a0: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2aa1a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_2aa1a4:
    // 0x2aa1a4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2aa1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2aa1a8:
    // 0x2aa1a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2aa1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa1ac:
    // 0x2aa1ac: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2aa1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa1b0:
    // 0x2aa1b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2aa1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2aa1b4:
    // 0x2aa1b4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2aa1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2aa1b8:
    // 0x2aa1b8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2aa1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2aa1bc:
    // 0x2aa1bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2aa1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa1c0:
    // 0x2aa1c0: 0x3e00008  jr          $ra
label_2aa1c4:
    if (ctx->pc == 0x2AA1C4u) {
        ctx->pc = 0x2AA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1C0u;
        // 0x2aa1c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1C8u;
        goto label_fallthrough_0x2aa1c0;
    }
    ctx->pc = 0x2AA1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1C0u;
        // 0x2aa1c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2aa1c0:
    ctx->pc = 0x2AA1C8u;
}
