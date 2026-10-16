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

// Function: sub_00216108
// Address: 0x216108 - 0x216678
void sub_00216108_0x216108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216108_0x216108");
#endif

    switch (ctx->pc) {
        case 0x2161b8u: goto label_2161b8;
        case 0x2161e0u: goto label_2161e0;
        case 0x216218u: goto label_216218;
        case 0x216478u: goto label_216478;
        case 0x2164b4u: goto label_2164b4;
        case 0x2164bcu: goto label_2164bc;
        case 0x2164e0u: goto label_2164e0;
        case 0x216508u: goto label_216508;
        case 0x2165a0u: goto label_2165a0;
        default: break;
    }

    ctx->pc = 0x216108u;

    // 0x216108: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x216108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21610c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x21610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x216110: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x216110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x216114: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x216114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x216118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21611c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x21611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x216120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x216120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216124: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x216124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x216128: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x216128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21612c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21612cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x216130: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x216130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216134: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x216134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x216138: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x216138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21613c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x21613cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x216140: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x216140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216144: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x216144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x216148: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x216148u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x21614c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x21614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x216150: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x216150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x216154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216158: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x216158u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21615c: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x21615cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x216160: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x216160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33830Cu));
    // 0x216164: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x216164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x216168: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x216168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x21616c: 0x94880004  lhu         $t0, 0x4($a0)
    ctx->pc = 0x21616cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216170: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x216170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x216174: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x216174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x216178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21617c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x21617cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216180: 0x0  nop
    ctx->pc = 0x216180u;
    // NOP
    // 0x216184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216188: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x216188u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[0]);
    // 0x21618c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21618Cu;
    {
        const bool branch_taken_0x21618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21618Cu;
        // 0x216190: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21618c) {
            ctx->pc = 0x2161A0u;
            goto label_2161a0;
        }
    }
    ctx->pc = 0x216194u;
    // 0x216194: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x216194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x216198: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x216198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x21619c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21619cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2161a0:
    // 0x2161a0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2161a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2161a4: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x2161a4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2161a8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2161a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2161ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2161acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161b0: 0xc085b1c  jal         func_216C70
    ctx->pc = 0x2161B0u;
    SET_GPR_U32(ctx, 31, 0x2161B8u);
    ctx->pc = 0x2161B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161B0u;
    // 0x2161b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216C70u, 0x2161B0u, 0x2161B8u)) {
        return;
    }
    ctx->pc = 0x2161B8u;
label_2161b8:
    // 0x2161b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2161b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161bc: 0x8e160278  lw          $s6, 0x278($s0)
    ctx->pc = 0x2161bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2161c0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2161c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2161c4: 0x0  nop
    ctx->pc = 0x2161c4u;
    // NOP
    // 0x2161c8: 0x4501011d  bc1t        . + 4 + (0x11D << 2)
    ctx->pc = 0x2161C8u;
    {
        const bool branch_taken_0x2161c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2161CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161C8u;
        // 0x2161cc: 0x8e170284  lw          $s7, 0x284($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2161c8) {
            ctx->pc = 0x216640u;
            goto label_216640;
        }
    }
    ctx->pc = 0x2161D0u;
    // 0x2161d0: 0x5220011a  beql        $s1, $zero, . + 4 + (0x11A << 2)
    ctx->pc = 0x2161D0u;
    {
        const bool branch_taken_0x2161d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2161d0) {
            ctx->pc = 0x2161D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2161D0u;
            // 0x2161d4: 0xae170284  sw          $s7, 0x284($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21663Cu;
            goto label_21663c;
        }
    }
    ctx->pc = 0x2161D8u;
    // 0x2161d8: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x2161d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x2161dc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2161dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2161e0:
    // 0x2161e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2161e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2161e4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2161e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161e8: 0x12200105  beqz        $s1, . + 4 + (0x105 << 2)
    ctx->pc = 0x2161E8u;
    {
        const bool branch_taken_0x2161e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2161ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161E8u;
        // 0x2161ec: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2161e8) {
            ctx->pc = 0x216600u;
            goto label_216600;
        }
    }
    ctx->pc = 0x2161F0u;
    // 0x2161f0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2161f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2161f4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2161f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2161f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2161f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2161fc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2161fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x216200: 0x245902a0  addiu       $t9, $v0, 0x2A0
    ctx->pc = 0x216200u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x216204: 0x246d2d40  addiu       $t5, $v1, 0x2D40
    ctx->pc = 0x216204u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 11584));
    // 0x216208: 0x3c18005c  lui         $t8, 0x5C
    ctx->pc = 0x216208u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)92 << 16));
    // 0x21620c: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x21620cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x216210: 0x3c0e005c  lui         $t6, 0x5C
    ctx->pc = 0x216210u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)92 << 16));
    // 0x216214: 0x0  nop
    ctx->pc = 0x216214u;
    // NOP
label_216218:
    // 0x216218: 0x8f0202ac  lw          $v0, 0x2AC($t8)
    ctx->pc = 0x216218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 684)));
    // 0x21621c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21621Cu;
    {
        const bool branch_taken_0x21621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21621Cu;
        // 0x216220: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21621c) {
            ctx->pc = 0x216244u;
            goto label_216244;
        }
    }
    ctx->pc = 0x216224u;
    // 0x216224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x216224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216228: 0x0  nop
    ctx->pc = 0x216228u;
    // NOP
    // 0x21622c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x21622cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216230: 0x0  nop
    ctx->pc = 0x216230u;
    // NOP
    // 0x216234: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x216234u;
    {
        const bool branch_taken_0x216234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x216234) {
            ctx->pc = 0x216244u;
            goto label_216244;
        }
    }
    ctx->pc = 0x21623Cu;
    // 0x21623c: 0x220602d  daddu       $t4, $s1, $zero
    ctx->pc = 0x21623cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216240: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x216240u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_216244:
    // 0x216244: 0x4600a8c6  mov.s       $f3, $f21
    ctx->pc = 0x216244u;
    ctx->f[3] = FPU_MOV_S(ctx->f[21]);
    // 0x216248: 0x9207025c  lbu         $a3, 0x25C($s0)
    ctx->pc = 0x216248u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x21624c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21624cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216250: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x216250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x216254: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x216254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216258: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x216258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21625c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x21625cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x216260: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x216260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x216264: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x216264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x216268: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x216268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21626c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21626Cu;
    {
        const bool branch_taken_0x21626c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21626Cu;
        // 0x216270: 0xa7a40000  sh          $a0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21626c) {
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x216274u;
    // 0x216274: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x216274u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216278: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x216278u;
    {
        const bool branch_taken_0x216278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216278u;
        // 0x21627c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216278) {
            ctx->pc = 0x21640Cu;
            goto label_21640c;
        }
    }
    ctx->pc = 0x216280u;
label_216280:
    // 0x216280: 0x8e060260  lw          $a2, 0x260($s0)
    ctx->pc = 0x216280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x216284: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x216284u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216288: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x216288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21628c: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x21628Cu;
    {
        const bool branch_taken_0x21628c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x216290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21628Cu;
        // 0x216290: 0x2268821  addu        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21628c) {
            ctx->pc = 0x21629Cu;
            goto label_21629c;
        }
    }
    ctx->pc = 0x216294u;
    // 0x216294: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x216294u;
    {
        const bool branch_taken_0x216294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216294u;
        // 0x216298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216294) {
            ctx->pc = 0x21640Cu;
            goto label_21640c;
        }
    }
    ctx->pc = 0x21629Cu;
label_21629c:
    // 0x21629c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x21629cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2162a0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2162A0u;
    {
        const bool branch_taken_0x2162a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162A0u;
        // 0x2162a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162a0) {
            ctx->pc = 0x2163BCu;
            goto label_2163bc;
        }
    }
    ctx->pc = 0x2162A8u;
    // 0x2162a8: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2162a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2162ac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2162acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2162b0: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x2162b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2162b4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2162b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2162b8: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x2162b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2162bc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2162bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2162c0: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x2162c0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2162c4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2162c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2162c8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2162c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2162cc: 0x10c4001b  beq         $a2, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2162CCu;
    {
        const bool branch_taken_0x2162cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2162D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162CCu;
        // 0x2162d0: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162cc) {
            ctx->pc = 0x21633Cu;
            goto label_21633c;
        }
    }
    ctx->pc = 0x2162D4u;
    // 0x2162d4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2162d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2162d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2162D8u;
    {
        const bool branch_taken_0x2162d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162D8u;
        // 0x2162dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162d8) {
            ctx->pc = 0x2162F0u;
            goto label_2162f0;
        }
    }
    ctx->pc = 0x2162E0u;
    // 0x2162e0: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2162E0u;
    {
        const bool branch_taken_0x2162e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2162E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162E0u;
        // 0x2162e4: 0x97ab0000  lhu         $t3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162e0) {
            ctx->pc = 0x21630Cu;
            goto label_21630c;
        }
    }
    ctx->pc = 0x2162E8u;
    // 0x2162e8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2162E8u;
    {
        const bool branch_taken_0x2162e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162E8u;
        // 0x2162ec: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162e8) {
            ctx->pc = 0x21640Cu;
            goto label_21640c;
        }
    }
    ctx->pc = 0x2162F0u;
label_2162f0:
    // 0x2162f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2162f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2162f4: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2162F4u;
    {
        const bool branch_taken_0x2162f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2162F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162F4u;
        // 0x2162f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162f4) {
            ctx->pc = 0x216344u;
            goto label_216344;
        }
    }
    ctx->pc = 0x2162FCu;
    // 0x2162fc: 0x10c20024  beq         $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2162FCu;
    {
        const bool branch_taken_0x2162fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x216300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162FCu;
        // 0x216300: 0x97ab0000  lhu         $t3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162fc) {
            ctx->pc = 0x216390u;
            goto label_216390;
        }
    }
    ctx->pc = 0x216304u;
    // 0x216304: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x216304u;
    {
        const bool branch_taken_0x216304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216304u;
        // 0x216308: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216304) {
            ctx->pc = 0x21640Cu;
            goto label_21640c;
        }
    }
    ctx->pc = 0x21630Cu;
label_21630c:
    // 0x21630c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21630Cu;
    {
        const bool branch_taken_0x21630c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x216310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21630Cu;
        // 0x216310: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21630c) {
            ctx->pc = 0x216328u;
            goto label_216328;
        }
    }
    ctx->pc = 0x216314u;
    // 0x216314: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x216314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x216318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21631c: 0xae030280  sw          $v1, 0x280($s0)
    ctx->pc = 0x21631cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 3));
    // 0x216320: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x216320u;
    {
        const bool branch_taken_0x216320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216320u;
        // 0x216324: 0xae030284  sw          $v1, 0x284($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216320) {
            ctx->pc = 0x216334u;
            goto label_216334;
        }
    }
    ctx->pc = 0x216328u;
label_216328:
    // 0x216328: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x216328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x21632c: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x21632cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    // 0x216330: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x216330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
label_216334:
    // 0x216334: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x216334u;
    {
        const bool branch_taken_0x216334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216334u;
        // 0x216338: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216334) {
            ctx->pc = 0x216404u;
            goto label_216404;
        }
    }
    ctx->pc = 0x21633Cu;
label_21633c:
    // 0x21633c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21633Cu;
    {
        const bool branch_taken_0x21633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21633Cu;
        // 0x216340: 0xa7a00000  sh          $zero, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21633c) {
            ctx->pc = 0x216404u;
            goto label_216404;
        }
    }
    ctx->pc = 0x216344u;
label_216344:
    // 0x216344: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x216344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x216348: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x216348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21634c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x21634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x216350: 0xae040274  sw          $a0, 0x274($s0)
    ctx->pc = 0x216350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 4));
    // 0x216354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216358: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x216358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x21635c: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x21635cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x216360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216364: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x216364u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216368: 0xae190280  sw          $t9, 0x280($s0)
    ctx->pc = 0x216368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 25));
    // 0x21636c: 0x8ea2830c  lw          $v0, -0x7CF4($s5)
    ctx->pc = 0x21636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935308)));
    // 0x216370: 0x8c430198  lw          $v1, 0x198($v0)
    ctx->pc = 0x216370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x216374: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x216374u;
    {
        const bool branch_taken_0x216374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x216374) {
            ctx->pc = 0x216378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216374u;
            // 0x216378: 0x460028c2  mul.s       $f3, $f5, $f0 (Delay Slot)
            ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x216404u;
            goto label_216404;
        }
    }
    ctx->pc = 0x21637Cu;
    // 0x21637c: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x216380: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x216380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x216384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216388: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x216388u;
    {
        const bool branch_taken_0x216388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216388u;
        // 0x21638c: 0x460028c2  mul.s       $f3, $f5, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216388) {
            ctx->pc = 0x216404u;
            goto label_216404;
        }
    }
    ctx->pc = 0x216390u;
label_216390:
    // 0x216390: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x216390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x216394: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x216394u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C02A8u));
    // 0x216398: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x216398u;
    {
        const bool branch_taken_0x216398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216398u;
        // 0x21639c: 0x8dc202a4  lw          $v0, 0x2A4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216398) {
            ctx->pc = 0x216404u;
            goto label_216404;
        }
    }
    ctx->pc = 0x2163A0u;
    // 0x2163a0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2163A0u;
    {
        const bool branch_taken_0x2163a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2163A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163A0u;
        // 0x2163a4: 0xae020274  sw          $v0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163a0) {
            ctx->pc = 0x2163B0u;
            goto label_2163b0;
        }
    }
    ctx->pc = 0x2163A8u;
    // 0x2163a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2163a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2163ac: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x2163acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_2163b0:
    // 0x2163b0: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x2163b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2163b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2163B4u;
    {
        const bool branch_taken_0x2163b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163B4u;
        // 0x2163b8: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163b4) {
            ctx->pc = 0x216404u;
            goto label_216404;
        }
    }
    ctx->pc = 0x2163BCu;
label_2163bc:
    // 0x2163bc: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x2163bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2163c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2163c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2163c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2163C4u;
    {
        const bool branch_taken_0x2163c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2163C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163C4u;
        // 0x2163c8: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163c4) {
            ctx->pc = 0x2163DCu;
            goto label_2163dc;
        }
    }
    ctx->pc = 0x2163CCu;
    // 0x2163cc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2163ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2163d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2163d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2163d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2163d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2163d8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2163d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2163dc:
    // 0x2163dc: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2163DCu;
    {
        const bool branch_taken_0x2163dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163DCu;
        // 0x2163e0: 0x8dc202a4  lw          $v0, 0x2A4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163dc) {
            ctx->pc = 0x216404u;
            goto label_216404;
        }
    }
    ctx->pc = 0x2163E4u;
    // 0x2163e4: 0x8e030274  lw          $v1, 0x274($s0)
    ctx->pc = 0x2163e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2163e8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2163E8u;
    {
        const bool branch_taken_0x2163e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2163ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163E8u;
        // 0x2163ec: 0x97ab0000  lhu         $t3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163e8) {
            ctx->pc = 0x216408u;
            goto label_216408;
        }
    }
    ctx->pc = 0x2163F0u;
    // 0x2163f0: 0x91020006  lbu         $v0, 0x6($t0)
    ctx->pc = 0x2163f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x2163f4: 0xa1a20006  sb          $v0, 0x6($t5)
    ctx->pc = 0x2163f4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2163f8: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x2163f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2163fc: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2163fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216400: 0xa5a30002  sh          $v1, 0x2($t5)
    ctx->pc = 0x216400u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 3));
label_216404:
    // 0x216404: 0x97ab0000  lhu         $t3, 0x0($sp)
    ctx->pc = 0x216404u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_216408:
    // 0x216408: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x216408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21640c:
    // 0x21640c: 0x3162ffff  andi        $v0, $t3, 0xFFFF
    ctx->pc = 0x21640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x216410: 0x5040007b  beql        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x216410u;
    {
        const bool branch_taken_0x216410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216410) {
            ctx->pc = 0x216414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216410u;
            // 0x216414: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216600u;
            goto label_216600;
        }
    }
    ctx->pc = 0x216418u;
    // 0x216418: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x216418u;
    {
        const bool branch_taken_0x216418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x216418) {
            ctx->pc = 0x216428u;
            goto label_216428;
        }
    }
    ctx->pc = 0x216420u;
    // 0x216420: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x216420u;
    {
        const bool branch_taken_0x216420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216420u;
        // 0x216424: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216420) {
            ctx->pc = 0x216600u;
            goto label_216600;
        }
    }
    ctx->pc = 0x216428u;
label_216428:
    // 0x216428: 0x10a0006b  beqz        $a1, . + 4 + (0x6B << 2)
    ctx->pc = 0x216428u;
    {
        const bool branch_taken_0x216428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216428u;
        // 0x21642c: 0x8f0202ac  lw          $v0, 0x2AC($t8) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216428) {
            ctx->pc = 0x2165D8u;
            goto label_2165d8;
        }
    }
    ctx->pc = 0x216430u;
    // 0x216430: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x216430u;
    {
        const bool branch_taken_0x216430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216430u;
        // 0x216434: 0x3164ffff  andi        $a0, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216430) {
            ctx->pc = 0x216530u;
            goto label_216530;
        }
    }
    ctx->pc = 0x216438u;
    // 0x216438: 0x8e090264  lw          $t1, 0x264($s0)
    ctx->pc = 0x216438u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x21643c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21643cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216440: 0x9208025c  lbu         $t0, 0x25C($s0)
    ctx->pc = 0x216440u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x216444: 0x2291821  addu        $v1, $s1, $t1
    ctx->pc = 0x216444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x216448: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x216448u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21644c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21644cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216450: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x216450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x216454: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x216454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x216458: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x216458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x21645c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x21645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x216460: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x216460u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x216464: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x216464u;
    {
        const bool branch_taken_0x216464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216464u;
        // 0x216468: 0x97aa0000  lhu         $t2, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216464) {
            ctx->pc = 0x2164A4u;
            goto label_2164a4;
        }
    }
    ctx->pc = 0x21646Cu;
    // 0x21646c: 0x8e070260  lw          $a3, 0x260($s0)
    ctx->pc = 0x21646cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x216470: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x216470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x216474: 0x0  nop
    ctx->pc = 0x216474u;
    // NOP
label_216478:
    // 0x216478: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x216478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21647c: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x21647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x216480: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x216480u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x216484: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216488: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x216488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x21648c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x21648cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x216490: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x216490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x216494: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x216494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x216498: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x216498u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21649c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x21649Cu;
    {
        const bool branch_taken_0x21649c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21649c) {
            ctx->pc = 0x2164A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21649Cu;
            // 0x2164a0: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216478;
        }
    }
    ctx->pc = 0x2164A4u;
label_2164a4:
    // 0x2164a4: 0x2542ffd0  addiu       $v0, $t2, -0x30
    ctx->pc = 0x2164a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967248));
    // 0x2164a8: 0x2c42004b  sltiu       $v0, $v0, 0x4B
    ctx->pc = 0x2164a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)75) ? 1 : 0);
    // 0x2164ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2164ACu;
    {
        const bool branch_taken_0x2164ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164ACu;
        // 0x2164b0: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164ac) {
            ctx->pc = 0x2164D0u;
            goto label_2164d0;
        }
    }
    ctx->pc = 0x2164B4u;
label_2164b4:
    // 0x2164b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2164B4u;
    {
        const bool branch_taken_0x2164b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164B4u;
        // 0x2164b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164b4) {
            ctx->pc = 0x216524u;
            goto label_216524;
        }
    }
    ctx->pc = 0x2164BCu;
label_2164bc:
    // 0x2164bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2164bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2164c0: 0x0  nop
    ctx->pc = 0x2164c0u;
    // NOP
    // 0x2164c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2164c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2164c8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2164C8u;
    {
        const bool branch_taken_0x2164c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164C8u;
        // 0x2164cc: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164c8) {
            ctx->pc = 0x2165D0u;
            goto label_2165d0;
        }
    }
    ctx->pc = 0x2164D0u;
label_2164d0:
    // 0x2164d0: 0x94436530  lhu         $v1, 0x6530($v0)
    ctx->pc = 0x2164d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 25904)));
    // 0x2164d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2164D4u;
    {
        const bool branch_taken_0x2164d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164D4u;
        // 0x2164d8: 0x24466530  addiu       $a2, $v0, 0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164d4) {
            ctx->pc = 0x2164F8u;
            goto label_2164f8;
        }
    }
    ctx->pc = 0x2164DCu;
    // 0x2164dc: 0x0  nop
    ctx->pc = 0x2164dcu;
    // NOP
label_2164e0:
    // 0x2164e0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2164e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2164e4: 0x1082fff3  beq         $a0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2164E4u;
    {
        const bool branch_taken_0x2164e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2164E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164E4u;
        // 0x2164e8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164e4) {
            ctx->pc = 0x2164B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2164b4;
        }
    }
    ctx->pc = 0x2164ECu;
    // 0x2164ec: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2164ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2164f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2164F0u;
    {
        const bool branch_taken_0x2164f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2164f0) {
            ctx->pc = 0x2164E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2164e0;
        }
    }
    ctx->pc = 0x2164F8u;
label_2164f8:
    // 0x2164f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2164f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2164fc: 0x94436560  lhu         $v1, 0x6560($v0)
    ctx->pc = 0x2164fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x6A6560u));
    // 0x216500: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x216500u;
    {
        const bool branch_taken_0x216500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216500u;
        // 0x216504: 0x24446560  addiu       $a0, $v0, 0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216500) {
            ctx->pc = 0x216520u;
            goto label_216520;
        }
    }
    ctx->pc = 0x216508u;
label_216508:
    // 0x216508: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x216508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21650c: 0x1142ffe9  beq         $t2, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x21650Cu;
    {
        const bool branch_taken_0x21650c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x216510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21650Cu;
        // 0x216510: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21650c) {
            ctx->pc = 0x2164B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2164b4;
        }
    }
    ctx->pc = 0x216514u;
    // 0x216514: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x216514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216518: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x216518u;
    {
        const bool branch_taken_0x216518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216518) {
            ctx->pc = 0x216508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216508;
        }
    }
    ctx->pc = 0x216520u;
label_216520:
    // 0x216520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216524:
    // 0x216524: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x216524u;
    {
        const bool branch_taken_0x216524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216524) {
            ctx->pc = 0x216528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216524u;
            // 0x216528: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216548u;
            goto label_216548;
        }
    }
    ctx->pc = 0x21652Cu;
    // 0x21652c: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x21652cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_216530:
    // 0x216530: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x216530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x216534: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216534u;
    {
        const bool branch_taken_0x216534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x216538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216534u;
        // 0x216538: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216534) {
            ctx->pc = 0x216544u;
            goto label_216544;
        }
    }
    ctx->pc = 0x21653Cu;
    // 0x21653c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21653Cu;
    {
        const bool branch_taken_0x21653c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21653c) {
            ctx->pc = 0x21654Cu;
            goto label_21654c;
        }
    }
    ctx->pc = 0x216544u;
label_216544:
    // 0x216544: 0x220602d  daddu       $t4, $s1, $zero
    ctx->pc = 0x216544u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216548:
    // 0x216548: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x216548u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_21654c:
    // 0x21654c: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x21654Cu;
    {
        const bool branch_taken_0x21654c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x21654c) {
            ctx->pc = 0x2165D8u;
            goto label_2165d8;
        }
    }
    ctx->pc = 0x216554u;
    // 0x216554: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x216554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x216558: 0x80a30006  lb          $v1, 0x6($a1)
    ctx->pc = 0x216558u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x21655c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21655cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216560: 0x0  nop
    ctx->pc = 0x216560u;
    // NOP
    // 0x216564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216568: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x216568u;
    {
        const bool branch_taken_0x216568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216568u;
        // 0x21656c: 0x46030042  mul.s       $f1, $f0, $f3 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216568) {
            ctx->pc = 0x2165D4u;
            goto label_2165d4;
        }
    }
    ctx->pc = 0x216570u;
    // 0x216570: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x216570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x216574: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x216574u;
    {
        const bool branch_taken_0x216574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216574u;
        // 0x216578: 0x97a60000  lhu         $a2, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216574) {
            ctx->pc = 0x2165C4u;
            goto label_2165c4;
        }
    }
    ctx->pc = 0x21657Cu;
    // 0x21657c: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x21657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x216580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x216580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216584: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x216584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x216588: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x216588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21658c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x21658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x216590: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x216590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216594: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x216594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x216598: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x216598u;
    {
        const bool branch_taken_0x216598 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x21659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216598u;
        // 0x21659c: 0x8c43005c  lw          $v1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216598) {
            ctx->pc = 0x2165C4u;
            goto label_2165c4;
        }
    }
    ctx->pc = 0x2165A0u;
label_2165a0:
    // 0x2165a0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2165a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2165a4: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2165A4u;
    {
        const bool branch_taken_0x2165a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2165A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165A4u;
        // 0x2165a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165a4) {
            ctx->pc = 0x2165B8u;
            goto label_2165b8;
        }
    }
    ctx->pc = 0x2165ACu;
    // 0x2165ac: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2165acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2165b0: 0x5052ffc2  beql        $v0, $s2, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2165B0u;
    {
        const bool branch_taken_0x2165b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2165b0) {
            ctx->pc = 0x2165B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2165B0u;
            // 0x2165b4: 0x84620004  lh          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2164BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2164bc;
        }
    }
    ctx->pc = 0x2165B8u;
label_2165b8:
    // 0x2165b8: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2165b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2165bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2165BCu;
    {
        const bool branch_taken_0x2165bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2165C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165BCu;
        // 0x2165c0: 0x24630006  addiu       $v1, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165bc) {
            ctx->pc = 0x2165A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2165a0;
        }
    }
    ctx->pc = 0x2165C4u;
label_2165c4:
    // 0x2165c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2165c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2165c8: 0x0  nop
    ctx->pc = 0x2165c8u;
    // NOP
    // 0x2165cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2165ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2165d0:
    // 0x2165d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2165d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2165d4:
    // 0x2165d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2165d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2165d8:
    // 0x2165d8: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2165d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2165dc: 0x0  nop
    ctx->pc = 0x2165dcu;
    // NOP
    // 0x2165e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2165E0u;
    {
        const bool branch_taken_0x2165e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2165e0) {
            ctx->pc = 0x2165F8u;
            goto label_2165f8;
        }
    }
    ctx->pc = 0x2165E8u;
    // 0x2165e8: 0x55800005  bnel        $t4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2165E8u;
    {
        const bool branch_taken_0x2165e8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2165e8) {
            ctx->pc = 0x2165ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2165E8u;
            // 0x2165ec: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x216600u;
            goto label_216600;
        }
    }
    ctx->pc = 0x2165F0u;
    // 0x2165f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2165F0u;
    {
        const bool branch_taken_0x2165f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165F0u;
        // 0x2165f4: 0xc6800000  lwc1        $f0, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165f0) {
            ctx->pc = 0x216604u;
            goto label_216604;
        }
    }
    ctx->pc = 0x2165F8u;
label_2165f8:
    // 0x2165f8: 0x1620ff07  bnez        $s1, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x2165F8u;
    {
        const bool branch_taken_0x2165f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2165FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165F8u;
        // 0x2165fc: 0x97b20000  lhu         $s2, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165f8) {
            ctx->pc = 0x216218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216218;
        }
    }
    ctx->pc = 0x216600u;
label_216600:
    // 0x216600: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x216600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216604:
    // 0x216604: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x216604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216608: 0x0  nop
    ctx->pc = 0x216608u;
    // NOP
    // 0x21660c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21660Cu;
    {
        const bool branch_taken_0x21660c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21660c) {
            ctx->pc = 0x216610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21660Cu;
            // 0x216610: 0xe6820000  swc1        $f2, 0x0($s4) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x216614u;
            goto label_216614;
        }
    }
    ctx->pc = 0x216614u;
label_216614:
    // 0x216614: 0x4606b002  mul.s       $f0, $f22, $f6
    ctx->pc = 0x216614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[6]);
    // 0x216618: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x216618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21661c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x21661cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216620: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216624u;
    {
        const bool branch_taken_0x216624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216624u;
        // 0x216628: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216624) {
            ctx->pc = 0x216638u;
            goto label_216638;
        }
    }
    ctx->pc = 0x21662Cu;
    // 0x21662c: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x21662cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216630: 0x1620feeb  bnez        $s1, . + 4 + (-0x115 << 2)
    ctx->pc = 0x216630u;
    {
        const bool branch_taken_0x216630 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x216630) {
            ctx->pc = 0x2161E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2161e0;
        }
    }
    ctx->pc = 0x216638u;
label_216638:
    // 0x216638: 0xae170284  sw          $s7, 0x284($s0)
    ctx->pc = 0x216638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 23));
label_21663c:
    // 0x21663c: 0xae160278  sw          $s6, 0x278($s0)
    ctx->pc = 0x21663cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 22));
label_216640:
    // 0x216640: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x216640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x216644: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x216644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x216648: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x216648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21664c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x21664cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216650: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x216650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216654: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x216654u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216658: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x216658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21665c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x21665cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216664: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x216664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x216668: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x216668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21666c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x21666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x216670: 0x3e00008  jr          $ra
    ctx->pc = 0x216670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216670u;
        // 0x216674: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216678u;
}
