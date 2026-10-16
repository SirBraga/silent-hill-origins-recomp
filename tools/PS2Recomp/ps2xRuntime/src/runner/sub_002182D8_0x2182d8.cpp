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

// Function: sub_002182D8
// Address: 0x2182d8 - 0x218558
void sub_002182D8_0x2182d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002182D8_0x2182d8");
#endif

    switch (ctx->pc) {
        case 0x218300u: goto label_218300;
        case 0x2183c0u: goto label_2183c0;
        case 0x218400u: goto label_218400;
        case 0x2184f0u: goto label_2184f0;
        case 0x21851cu: goto label_21851c;
        case 0x218538u: goto label_218538;
        default: break;
    }

    ctx->pc = 0x2182d8u;

    // 0x2182d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2182d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2182dc: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x2182dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2182e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2182e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2182e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2182e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182e8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2182e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2182ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2182ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2182f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2182f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2182f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2182f8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2182f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2182fc: 0x0  nop
    ctx->pc = 0x2182fcu;
    // NOP
label_218300:
    // 0x218300: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x218300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x218304: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x218304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x218308: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x218308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21830c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x21830cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218310: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x218310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218314: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x218314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218318: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x218318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21831c: 0x46000ac6  mov.s       $f11, $f1
    ctx->pc = 0x21831cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[1]);
    // 0x218320: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x218320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x218324: 0xc4e70008  lwc1        $f7, 0x8($a3)
    ctx->pc = 0x218324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x218328: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x218328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21832c: 0xc4e9000c  lwc1        $f9, 0xC($a3)
    ctx->pc = 0x21832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x218330: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x218330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218334: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x218334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218338: 0x46004b06  mov.s       $f12, $f9
    ctx->pc = 0x218338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[9]);
    // 0x21833c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21833cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x218340: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x218340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218344: 0x46062182  mul.s       $f6, $f4, $f6
    ctx->pc = 0x218344u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x218348: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x218348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21834c: 0x460719c2  mul.s       $f7, $f3, $f7
    ctx->pc = 0x21834cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x218350: 0xc4e50014  lwc1        $f5, 0x14($a3)
    ctx->pc = 0x218350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x218354: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x218354u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x218358: 0xc488000c  lwc1        $f8, 0xC($a0)
    ctx->pc = 0x218358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x21835c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x21835cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x218360: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x218360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x218364: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x218364u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x218368: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x218368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x21836c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x21836cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x218370: 0x460809c0  add.s       $f7, $f1, $f8
    ctx->pc = 0x218370u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x218374: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x218374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x218378: 0x46075034  c.lt.s      $f10, $f7
    ctx->pc = 0x218378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21837c: 0x0  nop
    ctx->pc = 0x21837cu;
    // NOP
    // 0x218380: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x218380u;
    {
        const bool branch_taken_0x218380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218380u;
        // 0x218384: 0x46080000  add.s       $f0, $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218380) {
            ctx->pc = 0x2183C8u;
            goto label_2183c8;
        }
    }
    ctx->pc = 0x218388u;
    // 0x218388: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x218388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21838c: 0x0  nop
    ctx->pc = 0x21838cu;
    // NOP
    // 0x218390: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x218390u;
    {
        const bool branch_taken_0x218390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218390) {
            ctx->pc = 0x218408u;
            goto label_218408;
        }
    }
    ctx->pc = 0x218398u;
    // 0x218398: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x218398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x21839c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21839Cu;
    {
        const bool branch_taken_0x21839c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21839c) {
            ctx->pc = 0x2183A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21839Cu;
            // 0x2183a0: 0x96060004  lhu         $a2, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2183B4u;
            goto label_2183b4;
        }
    }
    ctx->pc = 0x2183A4u;
    // 0x2183a4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2183a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2183a8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2183A8u;
    {
        const bool branch_taken_0x2183a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2183ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183A8u;
        // 0x2183ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183a8) {
            ctx->pc = 0x218408u;
            goto label_218408;
        }
    }
    ctx->pc = 0x2183B0u;
    // 0x2183b0: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2183b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2183b4:
    // 0x2183b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2183b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183b8: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x2183B8u;
    SET_GPR_U32(ctx, 31, 0x2183C0u);
    ctx->pc = 0x2183BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183B8u;
    // 0x2183bc: 0x92050002  lbu         $a1, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217D70u, 0x2183B8u, 0x2183C0u)) {
        return;
    }
    ctx->pc = 0x2183C0u;
label_2183c0:
    // 0x2183c0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2183C0u;
    {
        const bool branch_taken_0x2183c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183C0u;
        // 0x2183c4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183c0) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x2183C8u;
label_2183c8:
    // 0x2183c8: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x2183c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2183cc: 0x0  nop
    ctx->pc = 0x2183ccu;
    // NOP
    // 0x2183d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2183D0u;
    {
        const bool branch_taken_0x2183d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2183d0) {
            ctx->pc = 0x218408u;
            goto label_218408;
        }
    }
    ctx->pc = 0x2183D8u;
    // 0x2183d8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2183d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2183dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2183DCu;
    {
        const bool branch_taken_0x2183dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2183dc) {
            ctx->pc = 0x2183E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2183DCu;
            // 0x2183e0: 0x96060006  lhu         $a2, 0x6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2183F4u;
            goto label_2183f4;
        }
    }
    ctx->pc = 0x2183E4u;
    // 0x2183e4: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x2183e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2183e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2183E8u;
    {
        const bool branch_taken_0x2183e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2183ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183E8u;
        // 0x2183ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183e8) {
            ctx->pc = 0x218408u;
            goto label_218408;
        }
    }
    ctx->pc = 0x2183F0u;
    // 0x2183f0: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x2183f0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2183f4:
    // 0x2183f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2183f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183f8: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x2183F8u;
    SET_GPR_U32(ctx, 31, 0x218400u);
    ctx->pc = 0x2183FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183F8u;
    // 0x2183fc: 0x92050003  lbu         $a1, 0x3($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217D70u, 0x2183F8u, 0x218400u)) {
        return;
    }
    ctx->pc = 0x218400u;
label_218400:
    // 0x218400: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x218400u;
    {
        const bool branch_taken_0x218400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218400u;
        // 0x218404: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218400) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218408u;
label_218408:
    // 0x218408: 0x54c5ffbd  bnel        $a2, $a1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x218408u;
    {
        const bool branch_taken_0x218408 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x218408) {
            ctx->pc = 0x21840Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218408u;
            // 0x21840c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218300;
        }
    }
    ctx->pc = 0x218410u;
    // 0x218410: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x218410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x218414: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x218414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x218418: 0x460038c7  neg.s       $f3, $f7
    ctx->pc = 0x218418u;
    ctx->f[3] = FPU_NEG_S(ctx->f[7]);
    // 0x21841c: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x21841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x218420: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x218420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218424: 0x460b6101  sub.s       $f4, $f12, $f11
    ctx->pc = 0x218424u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x218428: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x218428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21842c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x21842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x218430: 0x0  nop
    ctx->pc = 0x218430u;
    // NOP
    // 0x218434: 0x0  nop
    ctx->pc = 0x218434u;
    // NOP
    // 0x218438: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x218438u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x21843c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x21843cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x218440: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x218440u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x218444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x218444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218448: 0x0  nop
    ctx->pc = 0x218448u;
    // NOP
    // 0x21844c: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x21844cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218450: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x218450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x218454: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x218454u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x218458: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x218458u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x21845c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x21845cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x218460: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x218460u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x218464: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x218464u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x218468: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x218468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21846c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x21846cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x218470: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x218470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x218474: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x218474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218478: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x218478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21847c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x21847cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x218480: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x218480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218484: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x218484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218488: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x218488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x21848c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x21848cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218490: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x218490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x218494: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x218494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218498: 0xb3a30023  sdl         $v1, 0x23($sp)
    ctx->pc = 0x218498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21849c: 0xb7a3001c  sdr         $v1, 0x1C($sp)
    ctx->pc = 0x21849cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2184a0: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2184a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x2184a4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2184a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2184a8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2184a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2184ac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2184acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2184b0: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x2184b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2184b4: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x2184b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2184b8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2184b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2184bc: 0x68e30013  ldl         $v1, 0x13($a3)
    ctx->pc = 0x2184bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2184c0: 0x6ce3000c  ldr         $v1, 0xC($a3)
    ctx->pc = 0x2184c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2184c4: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x2184c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2184c8: 0xb3a30043  sdl         $v1, 0x43($sp)
    ctx->pc = 0x2184c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2184cc: 0xb7a3003c  sdr         $v1, 0x3C($sp)
    ctx->pc = 0x2184ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2184d0: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x2184d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x2184d4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2184D4u;
    {
        const bool branch_taken_0x2184d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2184D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184D4u;
        // 0x2184d8: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184d4) {
            ctx->pc = 0x218508u;
            goto label_218508;
        }
    }
    ctx->pc = 0x2184DCu;
    // 0x2184dc: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2184dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2184e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2184e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184e4: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2184e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2184e8: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x2184E8u;
    SET_GPR_U32(ctx, 31, 0x2184F0u);
    ctx->pc = 0x2184ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184E8u;
    // 0x2184ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217D70u, 0x2184E8u, 0x2184F0u)) {
        return;
    }
    ctx->pc = 0x2184F0u;
label_2184f0:
    // 0x2184f0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2184F0u;
    {
        const bool branch_taken_0x2184f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2184F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184F0u;
        // 0x2184f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184f0) {
            ctx->pc = 0x218540u;
            goto label_218540;
        }
    }
    ctx->pc = 0x2184F8u;
    // 0x2184f8: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x2184f8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2184fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2184fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218500: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x218500u;
    {
        const bool branch_taken_0x218500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218500u;
        // 0x218504: 0x92050003  lbu         $a1, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218500) {
            ctx->pc = 0x218530u;
            goto label_218530;
        }
    }
    ctx->pc = 0x218508u;
label_218508:
    // 0x218508: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x218508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x21850c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x21850cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218510: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x218510u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x218514: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x218514u;
    SET_GPR_U32(ctx, 31, 0x21851Cu);
    ctx->pc = 0x218518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218514u;
    // 0x218518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217D70u, 0x218514u, 0x21851Cu)) {
        return;
    }
    ctx->pc = 0x21851Cu;
label_21851c:
    // 0x21851c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21851Cu;
    {
        const bool branch_taken_0x21851c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21851Cu;
        // 0x218520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21851c) {
            ctx->pc = 0x218540u;
            goto label_218540;
        }
    }
    ctx->pc = 0x218524u;
    // 0x218524: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x218524u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21852c: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x21852cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_218530:
    // 0x218530: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x218530u;
    SET_GPR_U32(ctx, 31, 0x218538u);
    ctx->pc = 0x218534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218530u;
    // 0x218534: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217D70u, 0x218530u, 0x218538u)) {
        return;
    }
    ctx->pc = 0x218538u;
label_218538:
    // 0x218538: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x218538u;
    {
        const bool branch_taken_0x218538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218538u;
        // 0x21853c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218538) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218540u;
label_218540:
    // 0x218540: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x218540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_218544:
    // 0x218544: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x218544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218548: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x218548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21854c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218550: 0x3e00008  jr          $ra
    ctx->pc = 0x218550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218550u;
        // 0x218554: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218558u;
}
