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

// Function: sub_00133068
// Address: 0x133068 - 0x133238
void sub_00133068_0x133068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133068_0x133068");
#endif

    switch (ctx->pc) {
        case 0x133210u: goto label_133210;
        case 0x133224u: goto label_133224;
        default: break;
    }

    ctx->pc = 0x133068u;

    // 0x133068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13306c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x13306cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x133070: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x133070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x133074: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x133074u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x133078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13307c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133080: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x133080u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x133084: 0x8e021524  lw          $v0, 0x1524($s0)
    ctx->pc = 0x133084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5412)));
    // 0x133088: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x133088u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13308c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x13308Cu;
    {
        const bool branch_taken_0x13308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13308Cu;
        // 0x133090: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13308c) {
            ctx->pc = 0x1331FCu;
            goto label_1331fc;
        }
    }
    ctx->pc = 0x133094u;
    // 0x133094: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x133094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x133098: 0xc602152c  lwc1        $f2, 0x152C($s0)
    ctx->pc = 0x133098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13309c: 0xc440de10  lwc1        $f0, -0x21F0($v0)
    ctx->pc = 0x13309cu;
    { uint32_t bits = FAST_READ32(0x68DE10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1330a0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1330a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1330a4: 0x0  nop
    ctx->pc = 0x1330a4u;
    // NOP
    // 0x1330a8: 0x45030055  bc1tl       . + 4 + (0x55 << 2)
    ctx->pc = 0x1330A8u;
    {
        const bool branch_taken_0x1330a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1330a8) {
            ctx->pc = 0x1330ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1330A8u;
            // 0x1330ac: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x133200u;
            goto label_133200;
        }
    }
    ctx->pc = 0x1330B0u;
    // 0x1330b0: 0xc601150c  lwc1        $f1, 0x150C($s0)
    ctx->pc = 0x1330b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1330b4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1330b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1330b8: 0x0  nop
    ctx->pc = 0x1330b8u;
    // NOP
    // 0x1330bc: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x1330BCu;
    {
        const bool branch_taken_0x1330bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1330bc) {
            ctx->pc = 0x1330C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1330BCu;
            // 0x1330c0: 0xc600152c  lwc1        $f0, 0x152C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x133158u;
            goto label_133158;
        }
    }
    ctx->pc = 0x1330C4u;
    // 0x1330c4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1330c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1330c8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x1330c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1330cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1330ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1330d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1330d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1330d4: 0x0  nop
    ctx->pc = 0x1330d4u;
    // NOP
    // 0x1330d8: 0x0  nop
    ctx->pc = 0x1330d8u;
    // NOP
    // 0x1330dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1330dcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1330e0: 0x46030100  add.s       $f4, $f0, $f3
    ctx->pc = 0x1330e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1330e4: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x1330e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1330e8: 0x0  nop
    ctx->pc = 0x1330e8u;
    // NOP
    // 0x1330ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1330ECu;
    {
        const bool branch_taken_0x1330ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1330ec) {
            ctx->pc = 0x1330FCu;
            goto label_1330fc;
        }
    }
    ctx->pc = 0x1330F4u;
    // 0x1330f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1330F4u;
    {
        const bool branch_taken_0x1330f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1330F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330F4u;
        // 0x1330f8: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330f4) {
            ctx->pc = 0x13310Cu;
            goto label_13310c;
        }
    }
    ctx->pc = 0x1330FCu;
label_1330fc:
    // 0x1330fc: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x1330fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133100: 0x0  nop
    ctx->pc = 0x133100u;
    // NOP
    // 0x133104: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x133104u;
    {
        const bool branch_taken_0x133104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133104) {
            ctx->pc = 0x133108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133104u;
            // 0x133108: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13310Cu;
            goto label_13310c;
        }
    }
    ctx->pc = 0x13310Cu;
label_13310c:
    // 0x13310c: 0xc6021508  lwc1        $f2, 0x1508($s0)
    ctx->pc = 0x13310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133110: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x133110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x133114: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x133114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x133118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13311c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x13311cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133124: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x133124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x133128: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x133128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13312c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x13312cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x133130: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x133130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x133134: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x133134u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x133138: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x133138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13313c: 0x0  nop
    ctx->pc = 0x13313cu;
    // NOP
    // 0x133140: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x133140u;
    {
        const bool branch_taken_0x133140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133140u;
        // 0x133144: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133140) {
            ctx->pc = 0x13314Cu;
            goto label_13314c;
        }
    }
    ctx->pc = 0x133148u;
    // 0x133148: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x133148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13314c:
    // 0x13314c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133150: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x133150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133154: 0xc600152c  lwc1        $f0, 0x152C($s0)
    ctx->pc = 0x133154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133158:
    // 0x133158: 0xc601151c  lwc1        $f1, 0x151C($s0)
    ctx->pc = 0x133158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13315c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13315cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133160: 0x0  nop
    ctx->pc = 0x133160u;
    // NOP
    // 0x133164: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x133164u;
    {
        const bool branch_taken_0x133164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133164u;
        // 0x133168: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133164) {
            ctx->pc = 0x133200u;
            goto label_133200;
        }
    }
    ctx->pc = 0x13316Cu;
    // 0x13316c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13316cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x133170: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x133170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x133174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x133174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x133178: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x133178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13317c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x13317cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x133180: 0x0  nop
    ctx->pc = 0x133180u;
    // NOP
    // 0x133184: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x133184u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x133188: 0x46020100  add.s       $f4, $f0, $f2
    ctx->pc = 0x133188u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13318c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x13318cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133190: 0x0  nop
    ctx->pc = 0x133190u;
    // NOP
    // 0x133194: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x133194u;
    {
        const bool branch_taken_0x133194 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133194) {
            ctx->pc = 0x1331A4u;
            goto label_1331a4;
        }
    }
    ctx->pc = 0x13319Cu;
    // 0x13319c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13319Cu;
    {
        const bool branch_taken_0x13319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13319Cu;
        // 0x1331a0: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13319c) {
            ctx->pc = 0x1331B4u;
            goto label_1331b4;
        }
    }
    ctx->pc = 0x1331A4u;
label_1331a4:
    // 0x1331a4: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x1331a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1331a8: 0x0  nop
    ctx->pc = 0x1331a8u;
    // NOP
    // 0x1331ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1331ACu;
    {
        const bool branch_taken_0x1331ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1331ac) {
            ctx->pc = 0x1331B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1331ACu;
            // 0x1331b0: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1331B4u;
            goto label_1331b4;
        }
    }
    ctx->pc = 0x1331B4u;
label_1331b4:
    // 0x1331b4: 0xc6021518  lwc1        $f2, 0x1518($s0)
    ctx->pc = 0x1331b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1331b8: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x1331b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1331bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1331bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1331c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1331c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1331c4: 0x37a20008  ori         $v0, $sp, 0x8
    ctx->pc = 0x1331c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1331c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1331c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1331cc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1331ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1331d0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1331d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1331d4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1331d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1331d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1331d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1331dc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1331dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1331e0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1331e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1331e4: 0x0  nop
    ctx->pc = 0x1331e4u;
    // NOP
    // 0x1331e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1331E8u;
    {
        const bool branch_taken_0x1331e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1331ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331E8u;
        // 0x1331ec: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331e8) {
            ctx->pc = 0x1331F4u;
            goto label_1331f4;
        }
    }
    ctx->pc = 0x1331F0u;
    // 0x1331f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1331f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1331f4:
    // 0x1331f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1331f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1331f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1331f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1331fc:
    // 0x1331fc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1331fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_133200:
    // 0x133200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133204: 0x26051504  addiu       $a1, $s0, 0x1504
    ctx->pc = 0x133204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5380));
    // 0x133208: 0xc04dce8  jal         func_1373A0
    ctx->pc = 0x133208u;
    SET_GPR_U32(ctx, 31, 0x133210u);
    ctx->pc = 0x13320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133208u;
    // 0x13320c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1373A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1373A0u, 0x133208u, 0x133210u)) {
        return;
    }
    ctx->pc = 0x133210u;
label_133210:
    // 0x133210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133214: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x133214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133218: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x133218u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x13321c: 0xc04dce8  jal         func_1373A0
    ctx->pc = 0x13321Cu;
    SET_GPR_U32(ctx, 31, 0x133224u);
    ctx->pc = 0x133220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13321Cu;
    // 0x133220: 0x24851514  addiu       $a1, $a0, 0x1514 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1373A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1373A0u, 0x13321Cu, 0x133224u)) {
        return;
    }
    ctx->pc = 0x133224u;
label_133224:
    // 0x133224: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x133224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13322c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x13322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x133230: 0x3e00008  jr          $ra
    ctx->pc = 0x133230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133230u;
        // 0x133234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133238u;
}
