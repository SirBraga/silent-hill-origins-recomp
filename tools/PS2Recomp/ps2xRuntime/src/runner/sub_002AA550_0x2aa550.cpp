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

// Function: sub_002AA550
// Address: 0x2aa550 - 0x2aa760
void sub_002AA550_0x2aa550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA550_0x2aa550");
#endif

    switch (ctx->pc) {
        case 0x2aa72cu: goto label_2aa72c;
        default: break;
    }

    ctx->pc = 0x2aa550u;

    // 0x2aa550: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2aa550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2aa554: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2aa554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2aa558: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2aa558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2aa55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aa55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa560: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2aa560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2aa564: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2aa564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2aa568: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x2aa568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa56c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2aa56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa570: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2aa570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa574: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2aa574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa578: 0x46000b81  sub.s       $f14, $f1, $f0
    ctx->pc = 0x2aa578u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2aa57c: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x2aa57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa580: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2aa580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa584: 0x46022201  sub.s       $f8, $f4, $f2
    ctx->pc = 0x2aa584u;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2aa588: 0x46001a41  sub.s       $f9, $f3, $f0
    ctx->pc = 0x2aa588u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2aa58c: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x2aa58cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2aa590: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2aa590u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aa594: 0xe7a90004  swc1        $f9, 0x4($sp)
    ctx->pc = 0x2aa594u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2aa598: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x2aa598u;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
    // 0x2aa59c: 0xc5120004  lwc1        $f18, 0x4($t0)
    ctx->pc = 0x2aa59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2aa5a0: 0x46004846  mov.s       $f1, $f9
    ctx->pc = 0x2aa5a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[9]);
    // 0x2aa5a4: 0xc5100000  lwc1        $f16, 0x0($t0)
    ctx->pc = 0x2aa5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2aa5a8: 0x460070c6  mov.s       $f3, $f14
    ctx->pc = 0x2aa5a8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[14]);
    // 0x2aa5ac: 0x46120882  mul.s       $f2, $f1, $f18
    ctx->pc = 0x2aa5acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x2aa5b0: 0xc5110008  lwc1        $f17, 0x8($t0)
    ctx->pc = 0x2aa5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2aa5b4: 0x46100102  mul.s       $f4, $f0, $f16
    ctx->pc = 0x2aa5b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x2aa5b8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2aa5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2aa5bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2aa5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2aa5c0: 0x460c62c2  mul.s       $f11, $f12, $f12
    ctx->pc = 0x2aa5c0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2aa5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa5c8: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x2aa5c8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2aa5cc: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2aa5ccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2aa5d0: 0x46111882  mul.s       $f2, $f3, $f17
    ctx->pc = 0x2aa5d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[17]);
    // 0x2aa5d4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2aa5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2aa5d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2aa5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2aa5dc: 0x460223c0  add.s       $f15, $f4, $f2
    ctx->pc = 0x2aa5dcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2aa5e0: 0x460d5940  add.s       $f5, $f11, $f13
    ctx->pc = 0x2aa5e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[11], ctx->f[13]);
    // 0x2aa5e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa5e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa5e8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2aa5e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2aa5ec: 0x46052cc0  add.s       $f19, $f5, $f5
    ctx->pc = 0x2aa5ecu;
    ctx->f[19] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2aa5f0: 0x46157842  mul.s       $f1, $f15, $f21
    ctx->pc = 0x2aa5f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x2aa5f4: 0x46030280  add.s       $f10, $f0, $f3
    ctx->pc = 0x2aa5f4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2aa5f8: 0x460d5b41  sub.s       $f13, $f11, $f13
    ctx->pc = 0x2aa5f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[11], ctx->f[13]);
    // 0x2aa5fc: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2aa5fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2aa600: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x2aa600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x2aa604: 0x460a9882  mul.s       $f2, $f19, $f10
    ctx->pc = 0x2aa604u;
    ctx->f[2] = FPU_MUL_S(ctx->f[19], ctx->f[10]);
    // 0x2aa608: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x2aa608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2aa60c: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x2aa60cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2aa610: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aa610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aa614: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2aa614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa618: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa61c: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x2aa61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2aa620: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2aa620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa624: 0x0  nop
    ctx->pc = 0x2aa624u;
    // NOP
    // 0x2aa628: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA628u;
    {
        const bool branch_taken_0x2aa628 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA628u;
        // 0x2aa62c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa628) {
            ctx->pc = 0x2AA638u;
            goto label_2aa638;
        }
    }
    ctx->pc = 0x2AA630u;
    // 0x2aa630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa634: 0x0  nop
    ctx->pc = 0x2aa634u;
    // NOP
label_2aa638:
    // 0x2aa638: 0x52000044  beql        $s0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AA638u;
    {
        const bool branch_taken_0x2aa638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa638) {
            ctx->pc = 0x2AA63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA638u;
            // 0x2aa63c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA74Cu;
            goto label_2aa74c;
        }
    }
    ctx->pc = 0x2AA640u;
    // 0x2aa640: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA640u;
    {
        const bool branch_taken_0x2aa640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA640u;
        // 0x2aa644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa640) {
            ctx->pc = 0x2AA65Cu;
            goto label_2aa65c;
        }
    }
    ctx->pc = 0x2AA648u;
    // 0x2aa648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa64c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa650: 0xe60c0000  swc1        $f12, 0x0($s0)
    ctx->pc = 0x2aa650u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2aa654: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2AA654u;
    {
        const bool branch_taken_0x2aa654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA654u;
        // 0x2aa658: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa654) {
            ctx->pc = 0x2AA748u;
            goto label_2aa748;
        }
    }
    ctx->pc = 0x2AA65Cu;
label_2aa65c:
    // 0x2aa65c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2aa65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa660: 0x46055181  sub.s       $f6, $f10, $f5
    ctx->pc = 0x2aa660u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x2aa664: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2aa664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa668: 0x460b59c0  add.s       $f7, $f11, $f11
    ctx->pc = 0x2aa668u;
    ctx->f[7] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
    // 0x2aa66c: 0x46081102  mul.s       $f4, $f2, $f8
    ctx->pc = 0x2aa66cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2aa670: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2aa670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa674: 0x46090802  mul.s       $f0, $f1, $f9
    ctx->pc = 0x2aa674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2aa678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa67c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2aa67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2aa680: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x2aa680u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2aa684: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x2aa684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x2aa688: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2aa688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2aa68c: 0x460e1a02  mul.s       $f8, $f3, $f14
    ctx->pc = 0x2aa68cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x2aa690: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2aa690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2aa694: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2aa694u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2aa698: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2aa698u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2aa69c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2aa69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2aa6a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2aa6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aa6a4: 0x46120842  mul.s       $f1, $f1, $f18
    ctx->pc = 0x2aa6a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x2aa6a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2aa6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aa6ac: 0x46101082  mul.s       $f2, $f2, $f16
    ctx->pc = 0x2aa6acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[16]);
    // 0x2aa6b0: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2aa6b0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2aa6b4: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x2aa6b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x2aa6b8: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2aa6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2aa6bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aa6bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aa6c0: 0x461118c2  mul.s       $f3, $f3, $f17
    ctx->pc = 0x2aa6c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[17]);
    // 0x2aa6c4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2aa6c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2aa6c8: 0x46042040  add.s       $f1, $f4, $f4
    ctx->pc = 0x2aa6c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2aa6cc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2aa6ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2aa6d0: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x2aa6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2aa6d4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2aa6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2aa6d8: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x2aa6d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2aa6dc: 0x461510c2  mul.s       $f3, $f2, $f21
    ctx->pc = 0x2aa6dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2aa6e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa6e4: 0x46062182  mul.s       $f6, $f4, $f6
    ctx->pc = 0x2aa6e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2aa6e8: 0x46059842  mul.s       $f1, $f19, $f5
    ctx->pc = 0x2aa6e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[19], ctx->f[5]);
    // 0x2aa6ec: 0x460f39c2  mul.s       $f7, $f7, $f15
    ctx->pc = 0x2aa6ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[15]);
    // 0x2aa6f0: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x2aa6f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x2aa6f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aa6f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aa6f8: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x2aa6f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x2aa6fc: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x2aa6fcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2aa700: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2aa700u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2aa704: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2aa704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2aa708: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2aa708u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2aa70c: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x2aa70cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x2aa710: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2aa710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2aa714: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2aa714u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2aa718: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2aa718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2aa71c: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2aa71cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2aa720: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2aa720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2aa724: 0xc0ace6e  jal         func_2B39B8
    ctx->pc = 0x2AA724u;
    SET_GPR_U32(ctx, 31, 0x2AA72Cu);
    ctx->pc = 0x2AA728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA724u;
    // 0x2aa728: 0xe7a50020  swc1        $f5, 0x20($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B39B8u, 0x2AA724u, 0x2AA72Cu)) {
        return;
    }
    ctx->pc = 0x2AA72Cu;
label_2aa72c:
    // 0x2aa72c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA72Cu;
    {
        const bool branch_taken_0x2aa72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA72Cu;
        // 0x2aa730: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa72c) {
            ctx->pc = 0x2AA744u;
            goto label_2aa744;
        }
    }
    ctx->pc = 0x2AA734u;
    // 0x2aa734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa738: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2aa738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2aa73c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA73Cu;
    {
        const bool branch_taken_0x2aa73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA73Cu;
        // 0x2aa740: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa73c) {
            ctx->pc = 0x2AA748u;
            goto label_2aa748;
        }
    }
    ctx->pc = 0x2AA744u;
label_2aa744:
    // 0x2aa744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa748:
    // 0x2aa748: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2aa748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2aa74c:
    // 0x2aa74c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2aa74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aa750: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2aa750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2aa754: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2aa754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aa758: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA758u;
        // 0x2aa75c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA760u;
}
