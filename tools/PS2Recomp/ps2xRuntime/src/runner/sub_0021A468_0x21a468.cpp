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

// Function: sub_0021A468
// Address: 0x21a468 - 0x21a758
void sub_0021A468_0x21a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A468_0x21a468");
#endif

    switch (ctx->pc) {
        case 0x21a4b4u: goto label_21a4b4;
        case 0x21a4e0u: goto label_21a4e0;
        case 0x21a5b8u: goto label_21a5b8;
        case 0x21a670u: goto label_21a670;
        case 0x21a6ecu: goto label_21a6ec;
        default: break;
    }

    ctx->pc = 0x21a468u;

    // 0x21a468: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21a468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21a46c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x21a46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x21a470: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21a470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21a474: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x21a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x21a478: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21a478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a47c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x21a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x21a480: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x21a480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x21a484: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x21a484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x21a488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a48c: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x21a48cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x21a490: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x21a490u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21a494: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x21a494u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21a498: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x21a498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21a49c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x21a4a0: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x21a4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21a4a4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A4A4u;
    {
        const bool branch_taken_0x21a4a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4A4u;
        // 0x21a4a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4a4) {
            ctx->pc = 0x21A4BCu;
            goto label_21a4bc;
        }
    }
    ctx->pc = 0x21A4ACu;
    // 0x21a4ac: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x21A4ACu;
    {
        const bool branch_taken_0x21a4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4ACu;
        // 0x21a4b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4ac) {
            ctx->pc = 0x21A71Cu;
            goto label_21a71c;
        }
    }
    ctx->pc = 0x21A4B4u;
label_21a4b4:
    // 0x21a4b4: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x21A4B4u;
    {
        const bool branch_taken_0x21a4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4B4u;
        // 0x21a4b8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4b4) {
            ctx->pc = 0x21A71Cu;
            goto label_21a71c;
        }
    }
    ctx->pc = 0x21A4BCu;
label_21a4bc:
    // 0x21a4bc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x21a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x21a4c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21a4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4c4: 0x18400062  blez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x21A4C4u;
    {
        const bool branch_taken_0x21a4c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4C4u;
        // 0x21a4c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4c4) {
            ctx->pc = 0x21A650u;
            goto label_21a650;
        }
    }
    ctx->pc = 0x21A4CCu;
    // 0x21a4cc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x21a4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x21a4d0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x21a4d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x21a4d4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x21a4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x21a4d8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x21a4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x21a4dc: 0x0  nop
    ctx->pc = 0x21a4dcu;
    // NOP
label_21a4e0:
    // 0x21a4e0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x21a4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a4e4: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x21a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21a4e8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x21a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a4ec: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x21a4ecu;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x21a4f0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x21a4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a4f4: 0x46002186  mov.s       $f6, $f4
    ctx->pc = 0x21a4f4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[4]);
    // 0x21a4f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21a4f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21a4fc: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x21a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21a500: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x21a500u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x21a504: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x21a504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a508: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x21a508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21a50c: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x21a50cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
    // 0x21a510: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21a510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21a514: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x21a514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21a518: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21a518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21a51c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21a51cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21a520: 0x46040d40  add.s       $f21, $f1, $f4
    ctx->pc = 0x21a520u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x21a524: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x21a524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x21a528: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x21a528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a52c: 0x0  nop
    ctx->pc = 0x21a52cu;
    // NOP
    // 0x21a530: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21A530u;
    {
        const bool branch_taken_0x21a530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A530u;
        // 0x21a534: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a530) {
            ctx->pc = 0x21A550u;
            goto label_21a550;
        }
    }
    ctx->pc = 0x21A538u;
    // 0x21a538: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x21a538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a53c: 0x0  nop
    ctx->pc = 0x21a53cu;
    // NOP
    // 0x21a540: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x21A540u;
    {
        const bool branch_taken_0x21a540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A540u;
        // 0x21a544: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a540) {
            ctx->pc = 0x21A554u;
            goto label_21a554;
        }
    }
    ctx->pc = 0x21A548u;
    // 0x21a548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21A548u;
    {
        const bool branch_taken_0x21a548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A548u;
        // 0x21a54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a548) {
            ctx->pc = 0x21A554u;
            goto label_21a554;
        }
    }
    ctx->pc = 0x21A550u;
label_21a550:
    // 0x21a550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a554:
    // 0x21a554: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x21a554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a558: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x21a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a55c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x21a55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x21a560: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x21a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a564: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x21a564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x21a568: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x21a568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x21a56c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x21a56cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21a570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21a570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21a574: 0x46030500  add.s       $f20, $f0, $f3
    ctx->pc = 0x21a574u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x21a578: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x21a578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x21a57c: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x21a57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a580: 0x0  nop
    ctx->pc = 0x21a580u;
    // NOP
    // 0x21a584: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21A584u;
    {
        const bool branch_taken_0x21a584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A584u;
        // 0x21a588: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a584) {
            ctx->pc = 0x21A5A0u;
            goto label_21a5a0;
        }
    }
    ctx->pc = 0x21A58Cu;
    // 0x21a58c: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x21a58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a590: 0x0  nop
    ctx->pc = 0x21a590u;
    // NOP
    // 0x21a594: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21A594u;
    {
        const bool branch_taken_0x21a594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A594u;
        // 0x21a598: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a594) {
            ctx->pc = 0x21A5A0u;
            goto label_21a5a0;
        }
    }
    ctx->pc = 0x21A59Cu;
    // 0x21a59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a5a0:
    // 0x21a5a0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x21a5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21a5a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a5a8: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21A5A8u;
    {
        const bool branch_taken_0x21a5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a5a8) {
            ctx->pc = 0x21A5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A5A8u;
            // 0x21a5ac: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A638u;
            goto label_21a638;
        }
    }
    ctx->pc = 0x21A5B0u;
    // 0x21a5b0: 0xc086cd2  jal         func_21B348
    ctx->pc = 0x21A5B0u;
    SET_GPR_U32(ctx, 31, 0x21A5B8u);
    ctx->pc = 0x21B348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B348u, 0x21A5B0u, 0x21A5B8u)) {
        return;
    }
    ctx->pc = 0x21A5B8u;
label_21a5b8:
    // 0x21a5b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5bc: 0x1080ffbd  beqz        $a0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x21A5BCu;
    {
        const bool branch_taken_0x21a5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5BCu;
        // 0x21a5c0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5bc) {
            ctx->pc = 0x21A4B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a4b4;
        }
    }
    ctx->pc = 0x21A5C4u;
    // 0x21a5c4: 0xac900010  sw          $s0, 0x10($a0)
    ctx->pc = 0x21a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 16));
    // 0x21a5c8: 0x4615a0c1  sub.s       $f3, $f20, $f21
    ctx->pc = 0x21a5c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x21a5cc: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x21a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x21a5d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x21a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x21a5d4: 0x0  nop
    ctx->pc = 0x21a5d4u;
    // NOP
    // 0x21a5d8: 0x0  nop
    ctx->pc = 0x21a5d8u;
    // NOP
    // 0x21a5dc: 0x4603a0c3  div.s       $f3, $f20, $f3
    ctx->pc = 0x21a5dcu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[3]);
    // 0x21a5e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a5e4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x21a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x21a5e8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x21a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a5ec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a5f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21a5f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21a5f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21a5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21a5f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21a5f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21a5fc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x21a5fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x21a600: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x21a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a604: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x21a604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a608: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21a608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21a60c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21a60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21a610: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x21a610u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21a614: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x21a614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x21a618: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x21a618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a61c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x21a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a620: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21a620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x21a624: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21a624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21a628: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21a628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21a62c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21a62cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21a630: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x21a630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x21a634: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x21a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_21a638:
    // 0x21a638: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21a638u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21a63c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a63cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a640: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x21a640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a644: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x21A644u;
    {
        const bool branch_taken_0x21a644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A644u;
        // 0x21a648: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a644) {
            ctx->pc = 0x21A4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a4e0;
        }
    }
    ctx->pc = 0x21A64Cu;
    // 0x21a64c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21a64cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a650:
    // 0x21a650: 0x1860002f  blez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x21A650u;
    {
        const bool branch_taken_0x21a650 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x21A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A650u;
        // 0x21a654: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a650) {
            ctx->pc = 0x21A710u;
            goto label_21a710;
        }
    }
    ctx->pc = 0x21A658u;
    // 0x21a658: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x21a658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x21a65c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x21a65cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x21a660: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21a660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x21a664: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x21a664u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a668: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x21a668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21a66c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x21a66cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_21a670:
    // 0x21a670: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x21a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a674: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x21a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21a678: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x21a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a67c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x21a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21a680: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21a680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21a684: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x21a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a688: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x21a688u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x21a68c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x21a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a690: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x21a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21a694: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x21a694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21a698: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x21a698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x21a69c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21a69cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21a6a0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x21a6a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x21a6a4: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x21a6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x21a6a8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x21a6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a6ac: 0x0  nop
    ctx->pc = 0x21a6acu;
    // NOP
    // 0x21a6b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21A6B0u;
    {
        const bool branch_taken_0x21a6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6B0u;
        // 0x21a6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6b0) {
            ctx->pc = 0x21A6D0u;
            goto label_21a6d0;
        }
    }
    ctx->pc = 0x21A6B8u;
    // 0x21a6b8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x21a6b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a6bc: 0x0  nop
    ctx->pc = 0x21a6bcu;
    // NOP
    // 0x21a6c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x21A6C0u;
    {
        const bool branch_taken_0x21a6c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6C0u;
        // 0x21a6c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6c0) {
            ctx->pc = 0x21A6D4u;
            goto label_21a6d4;
        }
    }
    ctx->pc = 0x21A6C8u;
    // 0x21a6c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21A6C8u;
    {
        const bool branch_taken_0x21a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6C8u;
        // 0x21a6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6c8) {
            ctx->pc = 0x21A6D4u;
            goto label_21a6d4;
        }
    }
    ctx->pc = 0x21A6D0u;
label_21a6d0:
    // 0x21a6d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a6d4:
    // 0x21a6d4: 0x5456000a  bnel        $v0, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x21A6D4u;
    {
        const bool branch_taken_0x21a6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x21a6d4) {
            ctx->pc = 0x21A6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A6D4u;
            // 0x21a6d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A700u;
            goto label_21a700;
        }
    }
    ctx->pc = 0x21A6DCu;
    // 0x21a6dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21a6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6e4: 0xc086cde  jal         func_21B378
    ctx->pc = 0x21A6E4u;
    SET_GPR_U32(ctx, 31, 0x21A6ECu);
    ctx->pc = 0x21A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6E4u;
    // 0x21a6e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B378u, 0x21A6E4u, 0x21A6ECu)) {
        return;
    }
    ctx->pc = 0x21A6ECu;
label_21a6ec:
    // 0x21a6ec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x21a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21a6f0: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21A6F0u;
    {
        const bool branch_taken_0x21a6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x21a6f0) {
            ctx->pc = 0x21A6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A6F0u;
            // 0x21a6f4: 0xae710004  sw          $s1, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A6F8u;
            goto label_21a6f8;
        }
    }
    ctx->pc = 0x21A6F8u;
label_21a6f8:
    // 0x21a6f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x21a6f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x21a6fc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x21a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_21a700:
    // 0x21a700: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21a700u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21a704: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x21a704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21a708: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x21A708u;
    {
        const bool branch_taken_0x21a708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a708) {
            ctx->pc = 0x21A70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A708u;
            // 0x21a70c: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a670;
        }
    }
    ctx->pc = 0x21A710u;
label_21a710:
    // 0x21a710: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x21a714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a718: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x21a718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_21a71c:
    // 0x21a71c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21a71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21a720: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21a720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a724: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x21a724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a728: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21a728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a72c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x21a72cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a730: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x21a730u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a734: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x21a734u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a73c: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x21a73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21a740: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x21a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21a744: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x21a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21a748: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x21a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21a74c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A74Cu;
        // 0x21a750: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A754u;
    // 0x21a754: 0x0  nop
    ctx->pc = 0x21a754u;
    // NOP
    ctx->pc = 0x21a758u;
}
