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

// Function: sub_0011C170
// Address: 0x11c170 - 0x11c3c8
void sub_0011C170_0x11c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C170_0x11c170");
#endif

    switch (ctx->pc) {
        case 0x11c1c0u: goto label_11c1c0;
        case 0x11c1fcu: goto label_11c1fc;
        case 0x11c22cu: goto label_11c22c;
        case 0x11c258u: goto label_11c258;
        case 0x11c374u: goto label_11c374;
        case 0x11c390u: goto label_11c390;
        case 0x11c3a4u: goto label_11c3a4;
        default: break;
    }

    ctx->pc = 0x11c170u;

    // 0x11c170: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11c174: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x11c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x11c178: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11c17c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11c17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11c180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c184: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11c184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11c188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11c188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c18c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c190: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x11c190u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x11c194: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11c194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11c198: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x11c19c: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x11c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11c1a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11c1a4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C1A4u;
    {
        const bool branch_taken_0x11c1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1A4u;
        // 0x11c1a8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1a4) {
            ctx->pc = 0x11C1C0u;
            goto label_11c1c0;
        }
    }
    ctx->pc = 0x11C1ACu;
    // 0x11c1ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c1b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C1B0u;
    {
        const bool branch_taken_0x11c1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1B0u;
        // 0x11c1b4: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1b0) {
            ctx->pc = 0x11C1C4u;
            goto label_11c1c4;
        }
    }
    ctx->pc = 0x11C1B8u;
    // 0x11c1b8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11C1B8u;
    SET_GPR_U32(ctx, 31, 0x11C1C0u);
    ctx->pc = 0x11C1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1B8u;
    // 0x11c1bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11C1B8u, 0x11C1C0u)) {
        return;
    }
    ctx->pc = 0x11C1C0u;
label_11c1c0:
    // 0x11c1c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x11c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11c1c4:
    // 0x11c1c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11c1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11c1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c1cc: 0x0  nop
    ctx->pc = 0x11c1ccu;
    // NOP
    // 0x11c1d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11c1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11c1d4: 0x0  nop
    ctx->pc = 0x11c1d4u;
    // NOP
    // 0x11c1d8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x11C1D8u;
    {
        const bool branch_taken_0x11c1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1D8u;
        // 0x11c1dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1d8) {
            ctx->pc = 0x11C204u;
            goto label_11c204;
        }
    }
    ctx->pc = 0x11C1E0u;
    // 0x11c1e0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x11c1e4: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x11c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x11c1e8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x11c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x11c1ec: 0x24a58908  addiu       $a1, $a1, -0x76F8
    ctx->pc = 0x11c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936840));
    // 0x11c1f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1f4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11C1F4u;
    SET_GPR_U32(ctx, 31, 0x11C1FCu);
    ctx->pc = 0x11C1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1F4u;
    // 0x11c1f8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11C1F4u, 0x11C1FCu)) {
        return;
    }
    ctx->pc = 0x11C1FCu;
label_11c1fc:
    // 0x11c1fc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x11C1FCu;
    {
        const bool branch_taken_0x11c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1FCu;
        // 0x11c200: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1fc) {
            ctx->pc = 0x11C3B0u;
            goto label_11c3b0;
        }
    }
    ctx->pc = 0x11C204u;
label_11c204:
    // 0x11c204: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x11c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11c208: 0x8e221a70  lw          $v0, 0x1A70($s1)
    ctx->pc = 0x11c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x11c20c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x11c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x11c210: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C210u;
    {
        const bool branch_taken_0x11c210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C210u;
        // 0x11c214: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c210) {
            ctx->pc = 0x11C22Cu;
            goto label_11c22c;
        }
    }
    ctx->pc = 0x11C218u;
    // 0x11c218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c21c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C21Cu;
    {
        const bool branch_taken_0x11c21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c21c) {
            ctx->pc = 0x11C220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C21Cu;
            // 0x11c220: 0x8e0300d8  lw          $v1, 0xD8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C230u;
            goto label_11c230;
        }
    }
    ctx->pc = 0x11C224u;
    // 0x11c224: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11C224u;
    SET_GPR_U32(ctx, 31, 0x11C22Cu);
    ctx->pc = 0x11C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C224u;
    // 0x11c228: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11C224u, 0x11C22Cu)) {
        return;
    }
    ctx->pc = 0x11C22Cu;
label_11c22c:
    // 0x11c22c: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x11c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_11c230:
    // 0x11c230: 0x8e221a70  lw          $v0, 0x1A70($s1)
    ctx->pc = 0x11c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x11c234: 0xc7b40014  lwc1        $f20, 0x14($sp)
    ctx->pc = 0x11c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c238: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x11c238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x11c23c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C23Cu;
    {
        const bool branch_taken_0x11c23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C23Cu;
        // 0x11c240: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c23c) {
            ctx->pc = 0x11C258u;
            goto label_11c258;
        }
    }
    ctx->pc = 0x11C244u;
    // 0x11c244: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c248: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C248u;
    {
        const bool branch_taken_0x11c248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c248) {
            ctx->pc = 0x11C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C248u;
            // 0x11c24c: 0xc60300f4  lwc1        $f3, 0xF4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C25Cu;
            goto label_11c25c;
        }
    }
    ctx->pc = 0x11C250u;
    // 0x11c250: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11C250u;
    SET_GPR_U32(ctx, 31, 0x11C258u);
    ctx->pc = 0x11C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C250u;
    // 0x11c254: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11C250u, 0x11C258u)) {
        return;
    }
    ctx->pc = 0x11C258u;
label_11c258:
    // 0x11c258: 0xc60300f4  lwc1        $f3, 0xF4($s0)
    ctx->pc = 0x11c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11c25c:
    // 0x11c25c: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x11c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c260: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x11c260u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x11c264: 0xc60400f8  lwc1        $f4, 0xF8($s0)
    ctx->pc = 0x11c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11c268: 0x4601ab02  mul.s       $f12, $f21, $f1
    ctx->pc = 0x11c268u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11c26c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x11c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c270: 0x4602a542  mul.s       $f21, $f20, $f2
    ctx->pc = 0x11c270u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x11c274: 0x4604a841  sub.s       $f1, $f21, $f4
    ctx->pc = 0x11c274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[4]);
    // 0x11c278: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x11c278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11c27c: 0x0  nop
    ctx->pc = 0x11c27cu;
    // NOP
    // 0x11c280: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x11C280u;
    {
        const bool branch_taken_0x11c280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C280u;
        // 0x11c284: 0x46030502  mul.s       $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c280) {
            ctx->pc = 0x11C290u;
            goto label_11c290;
        }
    }
    ctx->pc = 0x11C288u;
    // 0x11c288: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11C288u;
    {
        const bool branch_taken_0x11c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C288u;
        // 0x11c28c: 0x460c2540  add.s       $f21, $f4, $f12 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c288) {
            ctx->pc = 0x11C2A4u;
            goto label_11c2a4;
        }
    }
    ctx->pc = 0x11C290u;
label_11c290:
    // 0x11c290: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x11c290u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x11c294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11c294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11c298: 0x0  nop
    ctx->pc = 0x11c298u;
    // NOP
    // 0x11c29c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11C29Cu;
    {
        const bool branch_taken_0x11c29c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11c29c) {
            ctx->pc = 0x11C2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C29Cu;
            // 0x11c2a0: 0x460c2541  sub.s       $f21, $f4, $f12 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C2A4u;
            goto label_11c2a4;
        }
    }
    ctx->pc = 0x11C2A4u;
label_11c2a4:
    // 0x11c2a4: 0xc60200fc  lwc1        $f2, 0xFC($s0)
    ctx->pc = 0x11c2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11c2a8: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x11c2a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x11c2ac: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x11c2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11c2b0: 0x0  nop
    ctx->pc = 0x11c2b0u;
    // NOP
    // 0x11c2b4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x11C2B4u;
    {
        const bool branch_taken_0x11c2b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11c2b4) {
            ctx->pc = 0x11C2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C2B4u;
            // 0x11c2b8: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C2C4u;
            goto label_11c2c4;
        }
    }
    ctx->pc = 0x11C2BCu;
    // 0x11c2bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11C2BCu;
    {
        const bool branch_taken_0x11c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2BCu;
        // 0x11c2c0: 0x460c1500  add.s       $f20, $f2, $f12 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2bc) {
            ctx->pc = 0x11C2D4u;
            goto label_11c2d4;
        }
    }
    ctx->pc = 0x11C2C4u;
label_11c2c4:
    // 0x11c2c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11c2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11c2c8: 0x0  nop
    ctx->pc = 0x11c2c8u;
    // NOP
    // 0x11c2cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11C2CCu;
    {
        const bool branch_taken_0x11c2cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11c2cc) {
            ctx->pc = 0x11C2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C2CCu;
            // 0x11c2d0: 0x460c1501  sub.s       $f20, $f2, $f12 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C2D4u;
            goto label_11c2d4;
        }
    }
    ctx->pc = 0x11C2D4u;
label_11c2d4:
    // 0x11c2d4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x11c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c2d8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11c2dc: 0x24a5b398  addiu       $a1, $a1, -0x4C68
    ctx->pc = 0x11c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947736));
    // 0x11c2e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11c2e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x11c2e4: 0x6a030097  ldl         $v1, 0x97($s0)
    ctx->pc = 0x11c2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11c2e8: 0x6e030090  ldr         $v1, 0x90($s0)
    ctx->pc = 0x11c2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11c2ec: 0x6a04009f  ldl         $a0, 0x9F($s0)
    ctx->pc = 0x11c2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11c2f0: 0x6e040098  ldr         $a0, 0x98($s0)
    ctx->pc = 0x11c2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11c2f4: 0x6a0600a7  ldl         $a2, 0xA7($s0)
    ctx->pc = 0x11c2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11c2f8: 0x6e0600a0  ldr         $a2, 0xA0($s0)
    ctx->pc = 0x11c2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11c2fc: 0x6a0700af  ldl         $a3, 0xAF($s0)
    ctx->pc = 0x11c2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11c300: 0x6e0700a8  ldr         $a3, 0xA8($s0)
    ctx->pc = 0x11c300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11c304: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x11c304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c308: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x11c308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c30c: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x11c30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c310: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x11c310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c314: 0xb0460027  sdl         $a2, 0x27($v0)
    ctx->pc = 0x11c314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c318: 0xb4460020  sdr         $a2, 0x20($v0)
    ctx->pc = 0x11c318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c31c: 0xb047002f  sdl         $a3, 0x2F($v0)
    ctx->pc = 0x11c31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c320: 0xb4470028  sdr         $a3, 0x28($v0)
    ctx->pc = 0x11c320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c324: 0x6a0300b7  ldl         $v1, 0xB7($s0)
    ctx->pc = 0x11c324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11c328: 0x6e0300b0  ldr         $v1, 0xB0($s0)
    ctx->pc = 0x11c328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11c32c: 0x6a0400bf  ldl         $a0, 0xBF($s0)
    ctx->pc = 0x11c32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11c330: 0x6e0400b8  ldr         $a0, 0xB8($s0)
    ctx->pc = 0x11c330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11c334: 0x6a0600c7  ldl         $a2, 0xC7($s0)
    ctx->pc = 0x11c334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11c338: 0x6e0600c0  ldr         $a2, 0xC0($s0)
    ctx->pc = 0x11c338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11c33c: 0x6a0700cf  ldl         $a3, 0xCF($s0)
    ctx->pc = 0x11c33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11c340: 0x6e0700c8  ldr         $a3, 0xC8($s0)
    ctx->pc = 0x11c340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11c344: 0xb0430037  sdl         $v1, 0x37($v0)
    ctx->pc = 0x11c344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c348: 0xb4430030  sdr         $v1, 0x30($v0)
    ctx->pc = 0x11c348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c34c: 0xb044003f  sdl         $a0, 0x3F($v0)
    ctx->pc = 0x11c34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c350: 0xb4440038  sdr         $a0, 0x38($v0)
    ctx->pc = 0x11c350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c354: 0xb0460047  sdl         $a2, 0x47($v0)
    ctx->pc = 0x11c354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c358: 0xb4460040  sdr         $a2, 0x40($v0)
    ctx->pc = 0x11c358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c35c: 0xb047004f  sdl         $a3, 0x4F($v0)
    ctx->pc = 0x11c35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c360: 0xb4470048  sdr         $a3, 0x48($v0)
    ctx->pc = 0x11c360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c364: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11c364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c368: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x11c368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c36c: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x11C36Cu;
    SET_GPR_U32(ctx, 31, 0x11C374u);
    ctx->pc = 0x11C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C36Cu;
    // 0x11c370: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x11C36Cu, 0x11C374u)) {
        return;
    }
    ctx->pc = 0x11C374u;
label_11c374:
    // 0x11c374: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x11c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c378: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11c378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11c37c: 0x24a5b3a8  addiu       $a1, $a1, -0x4C58
    ctx->pc = 0x11c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947752));
    // 0x11c380: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c380u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c384: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x11c384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x11c388: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x11C388u;
    SET_GPR_U32(ctx, 31, 0x11C390u);
    ctx->pc = 0x11C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C388u;
    // 0x11c38c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x11C388u, 0x11C390u)) {
        return;
    }
    ctx->pc = 0x11C390u;
label_11c390:
    // 0x11c390: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x11c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c394: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x11c394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x11c398: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11c398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c39c: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x11C39Cu;
    SET_GPR_U32(ctx, 31, 0x11C3A4u);
    ctx->pc = 0x11C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C39Cu;
    // 0x11c3a0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x11C39Cu, 0x11C3A4u)) {
        return;
    }
    ctx->pc = 0x11C3A4u;
label_11c3a4:
    // 0x11c3a4: 0xe61400fc  swc1        $f20, 0xFC($s0)
    ctx->pc = 0x11c3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x11c3a8: 0xe61500f8  swc1        $f21, 0xF8($s0)
    ctx->pc = 0x11c3a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x11c3ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11c3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11c3b0:
    // 0x11c3b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11c3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c3b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c3b8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11c3bc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3C0u;
        // 0x11c3c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C3C8u;
}
