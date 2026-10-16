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

// Function: sub_0013D210
// Address: 0x13d210 - 0x13d410
void sub_0013D210_0x13d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D210_0x13d210");
#endif

    switch (ctx->pc) {
        case 0x13d23cu: goto label_13d23c;
        case 0x13d24cu: goto label_13d24c;
        default: break;
    }

    ctx->pc = 0x13d210u;

    // 0x13d210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13d214: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x13d218: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x13d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x13d21c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d220: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x13d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x13d224: 0x26500100  addiu       $s0, $s2, 0x100
    ctx->pc = 0x13d224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x13d228: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13d228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d22c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13d22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d230: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d234: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x13D234u;
    SET_GPR_U32(ctx, 31, 0x13D23Cu);
    ctx->pc = 0x13D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D234u;
    // 0x13d238: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x13D234u, 0x13D23Cu)) {
        return;
    }
    ctx->pc = 0x13D23Cu;
label_13d23c:
    // 0x13d23c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d240: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d244: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x13D244u;
    SET_GPR_U32(ctx, 31, 0x13D24Cu);
    ctx->pc = 0x13D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D244u;
    // 0x13d248: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x13D244u, 0x13D24Cu)) {
        return;
    }
    ctx->pc = 0x13D24Cu;
label_13d24c:
    // 0x13d24c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13d24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d250: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x13d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13d254: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d258: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x13d258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x13d25c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d25cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d260: 0x0  nop
    ctx->pc = 0x13d260u;
    // NOP
    // 0x13d264: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x13D264u;
    {
        const bool branch_taken_0x13d264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D264u;
        // 0x13d268: 0xc7a50004  lwc1        $f5, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d264) {
            ctx->pc = 0x13D2D8u;
            goto label_13d2d8;
        }
    }
    ctx->pc = 0x13D26Cu;
    // 0x13d26c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x13d26cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x13d270: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x13d270u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x13d274: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x13d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d278: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x13d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13d27c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x13d27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x13d280: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x13d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d284: 0x0  nop
    ctx->pc = 0x13d284u;
    // NOP
    // 0x13d288: 0x0  nop
    ctx->pc = 0x13d288u;
    // NOP
    // 0x13d28c: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x13d28cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[4]);
    // 0x13d290: 0xc6460158  lwc1        $f6, 0x158($s2)
    ctx->pc = 0x13d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13d294: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13d294u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13d298: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13d298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13d29c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13d29cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x13d2a0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x13d2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x13d2a4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13d2a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13d2a8: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x13d2a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x13d2ac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x13d2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x13d2b0: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x13d2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d2b4: 0x0  nop
    ctx->pc = 0x13d2b4u;
    // NOP
    // 0x13d2b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13D2B8u;
    {
        const bool branch_taken_0x13d2b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2B8u;
        // 0x13d2bc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2b8) {
            ctx->pc = 0x13D2D8u;
            goto label_13d2d8;
        }
    }
    ctx->pc = 0x13D2C0u;
    // 0x13d2c0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13d2c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13d2c4: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x13d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d2c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13d2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d2cc: 0x0  nop
    ctx->pc = 0x13d2ccu;
    // NOP
    // 0x13d2d0: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x13D2D0u;
    {
        const bool branch_taken_0x13d2d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2D0u;
        // 0x13d2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2d0) {
            ctx->pc = 0x13D3F4u;
            goto label_13d3f4;
        }
    }
    ctx->pc = 0x13D2D8u;
label_13d2d8:
    // 0x13d2d8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x13d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d2dc: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x13d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13d2e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d2e4: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x13d2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x13d2e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d2ec: 0x0  nop
    ctx->pc = 0x13d2ecu;
    // NOP
    // 0x13d2f0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x13D2F0u;
    {
        const bool branch_taken_0x13d2f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2F0u;
        // 0x13d2f4: 0xc7a50000  lwc1        $f5, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2f0) {
            ctx->pc = 0x13D364u;
            goto label_13d364;
        }
    }
    ctx->pc = 0x13D2F8u;
    // 0x13d2f8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x13d2f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x13d2fc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x13d2fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x13d300: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x13d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d304: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x13d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13d308: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x13d308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x13d30c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x13d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d310: 0x0  nop
    ctx->pc = 0x13d310u;
    // NOP
    // 0x13d314: 0x0  nop
    ctx->pc = 0x13d314u;
    // NOP
    // 0x13d318: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x13d318u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[4]);
    // 0x13d31c: 0xc6460154  lwc1        $f6, 0x154($s2)
    ctx->pc = 0x13d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13d320: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13d320u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13d324: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13d324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13d328: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13d328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x13d32c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x13d32cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x13d330: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13d330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13d334: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x13d334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x13d338: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x13d338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x13d33c: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x13d33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d340: 0x0  nop
    ctx->pc = 0x13d340u;
    // NOP
    // 0x13d344: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13D344u;
    {
        const bool branch_taken_0x13d344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D344u;
        // 0x13d348: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d344) {
            ctx->pc = 0x13D364u;
            goto label_13d364;
        }
    }
    ctx->pc = 0x13D34Cu;
    // 0x13d34c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13d34cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13d350: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x13d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13d354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d358: 0x0  nop
    ctx->pc = 0x13d358u;
    // NOP
    // 0x13d35c: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x13D35Cu;
    {
        const bool branch_taken_0x13d35c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D35Cu;
        // 0x13d360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d35c) {
            ctx->pc = 0x13D3F4u;
            goto label_13d3f4;
        }
    }
    ctx->pc = 0x13D364u;
label_13d364:
    // 0x13d364: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x13d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d368: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x13d368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13d36c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d370: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x13d370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x13d374: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d378: 0x0  nop
    ctx->pc = 0x13d378u;
    // NOP
    // 0x13d37c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x13D37Cu;
    {
        const bool branch_taken_0x13d37c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D37Cu;
        // 0x13d380: 0xc7a50000  lwc1        $f5, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d37c) {
            ctx->pc = 0x13D3F0u;
            goto label_13d3f0;
        }
    }
    ctx->pc = 0x13D384u;
    // 0x13d384: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x13d384u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x13d388: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x13d388u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x13d38c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x13d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d390: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x13d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13d394: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x13d394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x13d398: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x13d398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d39c: 0x0  nop
    ctx->pc = 0x13d39cu;
    // NOP
    // 0x13d3a0: 0x0  nop
    ctx->pc = 0x13d3a0u;
    // NOP
    // 0x13d3a4: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x13d3a4u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[4]);
    // 0x13d3a8: 0xc6460154  lwc1        $f6, 0x154($s2)
    ctx->pc = 0x13d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13d3ac: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13d3acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13d3b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13d3b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13d3b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13d3b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x13d3b8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x13d3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x13d3bc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13d3bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13d3c0: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x13d3c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x13d3c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x13d3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x13d3c8: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x13d3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d3cc: 0x0  nop
    ctx->pc = 0x13d3ccu;
    // NOP
    // 0x13d3d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13D3D0u;
    {
        const bool branch_taken_0x13d3d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3D0u;
        // 0x13d3d4: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d3d0) {
            ctx->pc = 0x13D3F0u;
            goto label_13d3f0;
        }
    }
    ctx->pc = 0x13D3D8u;
    // 0x13d3d8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13d3d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13d3dc: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x13d3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d3e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13d3e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d3e4: 0x0  nop
    ctx->pc = 0x13d3e4u;
    // NOP
    // 0x13d3e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13D3E8u;
    {
        const bool branch_taken_0x13d3e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3E8u;
        // 0x13d3ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d3e8) {
            ctx->pc = 0x13D3F4u;
            goto label_13d3f4;
        }
    }
    ctx->pc = 0x13D3F0u;
label_13d3f0:
    // 0x13d3f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d3f4:
    // 0x13d3f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x13d3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d3f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13d3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d3fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13d3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d400: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d404: 0x3e00008  jr          $ra
    ctx->pc = 0x13D404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D404u;
        // 0x13d408: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D40Cu;
    // 0x13d40c: 0x0  nop
    ctx->pc = 0x13d40cu;
    // NOP
    ctx->pc = 0x13d410u;
}
