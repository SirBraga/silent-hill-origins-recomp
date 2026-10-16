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

// Function: sub_00119788
// Address: 0x119788 - 0x119b88
void sub_00119788_0x119788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119788_0x119788");
#endif

    switch (ctx->pc) {
        case 0x119808u: goto label_119808;
        case 0x119860u: goto label_119860;
        case 0x1198d0u: goto label_1198d0;
        case 0x119940u: goto label_119940;
        case 0x1199b0u: goto label_1199b0;
        case 0x119a0cu: goto label_119a0c;
        case 0x119a60u: goto label_119a60;
        case 0x119a80u: goto label_119a80;
        case 0x119aa8u: goto label_119aa8;
        case 0x119ac8u: goto label_119ac8;
        case 0x119b0cu: goto label_119b0c;
        case 0x119b4cu: goto label_119b4c;
        default: break;
    }

    ctx->pc = 0x119788u;

    // 0x119788: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x119788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x11978c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x11978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x119790: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x119790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x119794: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x119794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x119798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11979c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x11979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1197a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1197a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197a4: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x1197a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1197a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1197a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1197ac: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x1197acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1197b0: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1197b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1197b4: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1197b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1197b8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1197b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1197bc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1197bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1197c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1197c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1197c4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1197c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1197c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1197c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1197cc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1197ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1197d0: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x1197d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1197d4: 0x8e330040  lw          $s3, 0x40($s1)
    ctx->pc = 0x1197d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1197d8: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x1197d8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x1197dc: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1197dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1197e0: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x1197e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
    // 0x1197e4: 0x4600be06  mov.s       $f24, $f23
    ctx->pc = 0x1197e4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[23]);
    // 0x1197e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1197e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1197ec: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1197ECu;
    {
        const bool branch_taken_0x1197ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1197F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197ECu;
        // 0x1197f0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197ec) {
            ctx->pc = 0x119808u;
            goto label_119808;
        }
    }
    ctx->pc = 0x1197F4u;
    // 0x1197f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1197f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1197f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1197F8u;
    {
        const bool branch_taken_0x1197f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197F8u;
        // 0x1197fc: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197f8) {
            ctx->pc = 0x11980Cu;
            goto label_11980c;
        }
    }
    ctx->pc = 0x119800u;
    // 0x119800: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x119800u;
    SET_GPR_U32(ctx, 31, 0x119808u);
    ctx->pc = 0x119804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119800u;
    // 0x119804: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x119800u, 0x119808u)) {
        return;
    }
    ctx->pc = 0x119808u;
label_119808:
    // 0x119808: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x119808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_11980c:
    // 0x11980c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11980Cu;
    {
        const bool branch_taken_0x11980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11980Cu;
        // 0x119810: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11980c) {
            ctx->pc = 0x119838u;
            goto label_119838;
        }
    }
    ctx->pc = 0x119814u;
    // 0x119814: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x119814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
    // 0x119818: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x119818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x11981c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11981cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119820: 0x0  nop
    ctx->pc = 0x119820u;
    // NOP
    // 0x119824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x119824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119828: 0x0  nop
    ctx->pc = 0x119828u;
    // NOP
    // 0x11982c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11982Cu;
    {
        const bool branch_taken_0x11982c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11982Cu;
        // 0x119830: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11982c) {
            ctx->pc = 0x119838u;
            goto label_119838;
        }
    }
    ctx->pc = 0x119834u;
    // 0x119834: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x119834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119838:
    // 0x119838: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x119838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x11983c: 0x8e021a70  lw          $v0, 0x1A70($s0)
    ctx->pc = 0x11983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x119840: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x119840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x119844: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x119844u;
    {
        const bool branch_taken_0x119844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x119848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119844u;
        // 0x119848: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119844) {
            ctx->pc = 0x119860u;
            goto label_119860;
        }
    }
    ctx->pc = 0x11984Cu;
    // 0x11984c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119850: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119850u;
    {
        const bool branch_taken_0x119850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119850u;
        // 0x119854: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119850) {
            ctx->pc = 0x119864u;
            goto label_119864;
        }
    }
    ctx->pc = 0x119858u;
    // 0x119858: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x119858u;
    SET_GPR_U32(ctx, 31, 0x119860u);
    ctx->pc = 0x11985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119858u;
    // 0x11985c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x119858u, 0x119860u)) {
        return;
    }
    ctx->pc = 0x119860u;
label_119860:
    // 0x119860: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x119860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_119864:
    // 0x119864: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x119864u;
    {
        const bool branch_taken_0x119864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119864) {
            ctx->pc = 0x119868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119864u;
            // 0x119868: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1198ACu;
            goto label_1198ac;
        }
    }
    ctx->pc = 0x11986Cu;
    // 0x11986c: 0xc7b60024  lwc1        $f22, 0x24($sp)
    ctx->pc = 0x11986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x119870: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x119870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x119874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119878: 0x0  nop
    ctx->pc = 0x119878u;
    // NOP
    // 0x11987c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x11987cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119880: 0x0  nop
    ctx->pc = 0x119880u;
    // NOP
    // 0x119884: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x119884u;
    {
        const bool branch_taken_0x119884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119884u;
        // 0x119888: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119884) {
            ctx->pc = 0x1198ACu;
            goto label_1198ac;
        }
    }
    ctx->pc = 0x11988Cu;
    // 0x11988c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x11988cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x119890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119894: 0x0  nop
    ctx->pc = 0x119894u;
    // NOP
    // 0x119898: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x119898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11989c: 0x0  nop
    ctx->pc = 0x11989cu;
    // NOP
    // 0x1198a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1198A0u;
    {
        const bool branch_taken_0x1198a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1198a0) {
            ctx->pc = 0x1198ACu;
            goto label_1198ac;
        }
    }
    ctx->pc = 0x1198A8u;
    // 0x1198a8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1198a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1198ac:
    // 0x1198ac: 0x8e021a70  lw          $v0, 0x1A70($s0)
    ctx->pc = 0x1198acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1198b0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1198b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1198b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1198B4u;
    {
        const bool branch_taken_0x1198b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1198B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198B4u;
        // 0x1198b8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198b4) {
            ctx->pc = 0x1198D0u;
            goto label_1198d0;
        }
    }
    ctx->pc = 0x1198BCu;
    // 0x1198bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1198bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1198c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1198C0u;
    {
        const bool branch_taken_0x1198c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198C0u;
        // 0x1198c4: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198c0) {
            ctx->pc = 0x1198D4u;
            goto label_1198d4;
        }
    }
    ctx->pc = 0x1198C8u;
    // 0x1198c8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1198C8u;
    SET_GPR_U32(ctx, 31, 0x1198D0u);
    ctx->pc = 0x1198CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1198C8u;
    // 0x1198cc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1198C8u, 0x1198D0u)) {
        return;
    }
    ctx->pc = 0x1198D0u;
label_1198d0:
    // 0x1198d0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1198d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1198d4:
    // 0x1198d4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1198D4u;
    {
        const bool branch_taken_0x1198d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1198d4) {
            ctx->pc = 0x1198D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1198D4u;
            // 0x1198d8: 0x8e2300a8  lw          $v1, 0xA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11991Cu;
            goto label_11991c;
        }
    }
    ctx->pc = 0x1198DCu;
    // 0x1198dc: 0xc7b50034  lwc1        $f21, 0x34($sp)
    ctx->pc = 0x1198dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1198e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1198e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1198e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1198e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1198e8: 0x0  nop
    ctx->pc = 0x1198e8u;
    // NOP
    // 0x1198ec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1198ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1198f0: 0x0  nop
    ctx->pc = 0x1198f0u;
    // NOP
    // 0x1198f4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1198F4u;
    {
        const bool branch_taken_0x1198f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1198F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198F4u;
        // 0x1198f8: 0x8e2300a8  lw          $v1, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198f4) {
            ctx->pc = 0x11991Cu;
            goto label_11991c;
        }
    }
    ctx->pc = 0x1198FCu;
    // 0x1198fc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1198fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x119900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119904: 0x0  nop
    ctx->pc = 0x119904u;
    // NOP
    // 0x119908: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x119908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11990c: 0x0  nop
    ctx->pc = 0x11990cu;
    // NOP
    // 0x119910: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x119910u;
    {
        const bool branch_taken_0x119910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x119910) {
            ctx->pc = 0x11991Cu;
            goto label_11991c;
        }
    }
    ctx->pc = 0x119918u;
    // 0x119918: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x119918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_11991c:
    // 0x11991c: 0x8e021a70  lw          $v0, 0x1A70($s0)
    ctx->pc = 0x11991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x119920: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x119920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x119924: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x119924u;
    {
        const bool branch_taken_0x119924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x119928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119924u;
        // 0x119928: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119924) {
            ctx->pc = 0x119940u;
            goto label_119940;
        }
    }
    ctx->pc = 0x11992Cu;
    // 0x11992c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119930u;
    {
        const bool branch_taken_0x119930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119930u;
        // 0x119934: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119930) {
            ctx->pc = 0x119944u;
            goto label_119944;
        }
    }
    ctx->pc = 0x119938u;
    // 0x119938: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x119938u;
    SET_GPR_U32(ctx, 31, 0x119940u);
    ctx->pc = 0x11993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119938u;
    // 0x11993c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x119938u, 0x119940u)) {
        return;
    }
    ctx->pc = 0x119940u;
label_119940:
    // 0x119940: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x119940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_119944:
    // 0x119944: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x119944u;
    {
        const bool branch_taken_0x119944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119944) {
            ctx->pc = 0x119948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119944u;
            // 0x119948: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11998Cu;
            goto label_11998c;
        }
    }
    ctx->pc = 0x11994Cu;
    // 0x11994c: 0xc7b70044  lwc1        $f23, 0x44($sp)
    ctx->pc = 0x11994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x119950: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x119950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x119954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119958: 0x0  nop
    ctx->pc = 0x119958u;
    // NOP
    // 0x11995c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x11995cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119960: 0x0  nop
    ctx->pc = 0x119960u;
    // NOP
    // 0x119964: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x119964u;
    {
        const bool branch_taken_0x119964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119964u;
        // 0x119968: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119964) {
            ctx->pc = 0x11998Cu;
            goto label_11998c;
        }
    }
    ctx->pc = 0x11996Cu;
    // 0x11996c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x11996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x119970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119974: 0x0  nop
    ctx->pc = 0x119974u;
    // NOP
    // 0x119978: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x119978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11997c: 0x0  nop
    ctx->pc = 0x11997cu;
    // NOP
    // 0x119980: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x119980u;
    {
        const bool branch_taken_0x119980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x119980) {
            ctx->pc = 0x11998Cu;
            goto label_11998c;
        }
    }
    ctx->pc = 0x119988u;
    // 0x119988: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x119988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_11998c:
    // 0x11998c: 0x8e021a70  lw          $v0, 0x1A70($s0)
    ctx->pc = 0x11998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x119990: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x119990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x119994: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x119994u;
    {
        const bool branch_taken_0x119994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x119998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119994u;
        // 0x119998: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119994) {
            ctx->pc = 0x1199B0u;
            goto label_1199b0;
        }
    }
    ctx->pc = 0x11999Cu;
    // 0x11999c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1199a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1199A0u;
    {
        const bool branch_taken_0x1199a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199A0u;
        // 0x1199a4: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199a0) {
            ctx->pc = 0x1199B4u;
            goto label_1199b4;
        }
    }
    ctx->pc = 0x1199A8u;
    // 0x1199a8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1199A8u;
    SET_GPR_U32(ctx, 31, 0x1199B0u);
    ctx->pc = 0x1199ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199A8u;
    // 0x1199ac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1199A8u, 0x1199B0u)) {
        return;
    }
    ctx->pc = 0x1199B0u;
label_1199b0:
    // 0x1199b0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1199b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1199b4:
    // 0x1199b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1199B4u;
    {
        const bool branch_taken_0x1199b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1199b4) {
            ctx->pc = 0x1199FCu;
            goto label_1199fc;
        }
    }
    ctx->pc = 0x1199BCu;
    // 0x1199bc: 0xc7b80054  lwc1        $f24, 0x54($sp)
    ctx->pc = 0x1199bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1199c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1199c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1199c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1199c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1199c8: 0x0  nop
    ctx->pc = 0x1199c8u;
    // NOP
    // 0x1199cc: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1199ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1199d0: 0x0  nop
    ctx->pc = 0x1199d0u;
    // NOP
    // 0x1199d4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1199D4u;
    {
        const bool branch_taken_0x1199d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1199d4) {
            ctx->pc = 0x1199FCu;
            goto label_1199fc;
        }
    }
    ctx->pc = 0x1199DCu;
    // 0x1199dc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1199e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1199e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1199e4: 0x0  nop
    ctx->pc = 0x1199e4u;
    // NOP
    // 0x1199e8: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x1199e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1199ec: 0x0  nop
    ctx->pc = 0x1199ecu;
    // NOP
    // 0x1199f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1199F0u;
    {
        const bool branch_taken_0x1199f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1199f0) {
            ctx->pc = 0x1199FCu;
            goto label_1199fc;
        }
    }
    ctx->pc = 0x1199F8u;
    // 0x1199f8: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1199f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1199fc:
    // 0x1199fc: 0x12600055  beqz        $s3, . + 4 + (0x55 << 2)
    ctx->pc = 0x1199FCu;
    {
        const bool branch_taken_0x1199fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199FCu;
        // 0x119a00: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199fc) {
            ctx->pc = 0x119B54u;
            goto label_119b54;
        }
    }
    ctx->pc = 0x119A04u;
    // 0x119a04: 0xc08994a  jal         func_226528
    ctx->pc = 0x119A04u;
    SET_GPR_U32(ctx, 31, 0x119A0Cu);
    ctx->pc = 0x119A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A04u;
    // 0x119a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x119A04u, 0x119A0Cu)) {
        return;
    }
    ctx->pc = 0x119A0Cu;
label_119a0c:
    // 0x119a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a10: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x119A10u;
    {
        const bool branch_taken_0x119a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A10u;
        // 0x119a14: 0x26120010  addiu       $s2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a10) {
            ctx->pc = 0x119B50u;
            goto label_119b50;
        }
    }
    ctx->pc = 0x119A18u;
    // 0x119a18: 0x1680001b  bnez        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x119A18u;
    {
        const bool branch_taken_0x119a18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x119A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A18u;
        // 0x119a1c: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a18) {
            ctx->pc = 0x119A88u;
            goto label_119a88;
        }
    }
    ctx->pc = 0x119A20u;
    // 0x119a20: 0x4615a082  mul.s       $f2, $f20, $f21
    ctx->pc = 0x119a20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x119a24: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x119a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119a28: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x119a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119a2c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x119a2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119a30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x119a30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x119a34: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x119a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x119a38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x119a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119a3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x119a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x119a40: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x119a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x119a44: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x119a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119a48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x119a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x119a4c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x119a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x119a50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x119a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a58: 0xc0899d8  jal         func_226760
    ctx->pc = 0x119A58u;
    SET_GPR_U32(ctx, 31, 0x119A60u);
    ctx->pc = 0x119A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A58u;
    // 0x119a5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x119A58u, 0x119A60u)) {
        return;
    }
    ctx->pc = 0x119A60u;
label_119a60:
    // 0x119a60: 0x4616a002  mul.s       $f0, $f20, $f22
    ctx->pc = 0x119a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x119a64: 0xc62c008c  lwc1        $f12, 0x8C($s1)
    ctx->pc = 0x119a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x119a68: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x119a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x119a6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a70: 0x24a5ae10  addiu       $a1, $a1, -0x51F0
    ctx->pc = 0x119a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946320));
    // 0x119a74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x119a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119a78: 0xc0899f6  jal         func_2267D8
    ctx->pc = 0x119A78u;
    SET_GPR_U32(ctx, 31, 0x119A80u);
    ctx->pc = 0x119A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A78u;
    // 0x119a7c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267D8u, 0x119A78u, 0x119A80u)) {
        return;
    }
    ctx->pc = 0x119A80u;
label_119a80:
    // 0x119a80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x119A80u;
    {
        const bool branch_taken_0x119a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A80u;
        // 0x119a84: 0x4618a082  mul.s       $f2, $f20, $f24 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a80) {
            ctx->pc = 0x119AD0u;
            goto label_119ad0;
        }
    }
    ctx->pc = 0x119A88u;
label_119a88:
    // 0x119a88: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x119a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x119a8c: 0xc62c008c  lwc1        $f12, 0x8C($s1)
    ctx->pc = 0x119a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x119a90: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x119a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x119a94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a98: 0x24a5ae20  addiu       $a1, $a1, -0x51E0
    ctx->pc = 0x119a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946336));
    // 0x119a9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x119a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119aa0: 0xc0899f6  jal         func_2267D8
    ctx->pc = 0x119AA0u;
    SET_GPR_U32(ctx, 31, 0x119AA8u);
    ctx->pc = 0x119AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AA0u;
    // 0x119aa4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267D8u, 0x119AA0u, 0x119AA8u)) {
        return;
    }
    ctx->pc = 0x119AA8u;
label_119aa8:
    // 0x119aa8: 0x4616a002  mul.s       $f0, $f20, $f22
    ctx->pc = 0x119aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x119aac: 0xc62c008c  lwc1        $f12, 0x8C($s1)
    ctx->pc = 0x119aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x119ab0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x119ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x119ab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ab8: 0x24a5ae30  addiu       $a1, $a1, -0x51D0
    ctx->pc = 0x119ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946352));
    // 0x119abc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x119abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119ac0: 0xc0899f6  jal         func_2267D8
    ctx->pc = 0x119AC0u;
    SET_GPR_U32(ctx, 31, 0x119AC8u);
    ctx->pc = 0x119AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AC0u;
    // 0x119ac4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267D8u, 0x119AC0u, 0x119AC8u)) {
        return;
    }
    ctx->pc = 0x119AC8u;
label_119ac8:
    // 0x119ac8: 0x4618a082  mul.s       $f2, $f20, $f24
    ctx->pc = 0x119ac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x119acc: 0x0  nop
    ctx->pc = 0x119accu;
    // NOP
label_119ad0:
    // 0x119ad0: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x119ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119ad4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x119ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119ad8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x119ad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119adc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x119adcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x119ae0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x119ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x119ae4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x119ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119ae8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x119ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x119aec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x119aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x119af0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x119af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119af4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x119af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x119af8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x119af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x119afc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x119b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b04: 0xc0899d8  jal         func_226760
    ctx->pc = 0x119B04u;
    SET_GPR_U32(ctx, 31, 0x119B0Cu);
    ctx->pc = 0x119B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B04u;
    // 0x119b08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x119B04u, 0x119B0Cu)) {
        return;
    }
    ctx->pc = 0x119B0Cu;
label_119b0c:
    // 0x119b0c: 0x4617a082  mul.s       $f2, $f20, $f23
    ctx->pc = 0x119b0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x119b10: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x119b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119b14: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x119b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119b18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x119b18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119b1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x119b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x119b20: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x119b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x119b24: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x119b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119b28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x119b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x119b2c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x119b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x119b30: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x119b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119b34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x119b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x119b38: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x119b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x119b3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x119b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b44: 0xc0899d8  jal         func_226760
    ctx->pc = 0x119B44u;
    SET_GPR_U32(ctx, 31, 0x119B4Cu);
    ctx->pc = 0x119B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B44u;
    // 0x119b48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x119B44u, 0x119B4Cu)) {
        return;
    }
    ctx->pc = 0x119B4Cu;
label_119b4c:
    // 0x119b4c: 0x0  nop
    ctx->pc = 0x119b4cu;
    // NOP
label_119b50:
    // 0x119b50: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x119b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_119b54:
    // 0x119b54: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x119b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x119b58: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x119b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119b5c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x119b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119b60: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x119b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119b64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x119b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119b68: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x119b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x119b6c: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x119b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x119b70: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x119b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x119b74: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x119b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x119b78: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x119b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x119B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B7Cu;
        // 0x119b80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119B84u;
    // 0x119b84: 0x0  nop
    ctx->pc = 0x119b84u;
    // NOP
    ctx->pc = 0x119b88u;
}
