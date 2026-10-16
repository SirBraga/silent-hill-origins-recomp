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

// Function: sub_002601F0
// Address: 0x2601f0 - 0x260438
void sub_002601F0_0x2601f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002601F0_0x2601f0");
#endif

    switch (ctx->pc) {
        case 0x260248u: goto label_260248;
        case 0x260258u: goto label_260258;
        case 0x260288u: goto label_260288;
        case 0x26030cu: goto label_26030c;
        case 0x260320u: goto label_260320;
        case 0x260338u: goto label_260338;
        case 0x260374u: goto label_260374;
        case 0x260380u: goto label_260380;
        case 0x2603f4u: goto label_2603f4;
        default: break;
    }

    ctx->pc = 0x2601f0u;

    // 0x2601f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2601f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2601f4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2601f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2601f8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2601f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2601fc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2601fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x260200: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x260200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x260204: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x260204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x260208: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x260208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x26020c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x26020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x260210: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x260210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x260214: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x260214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x260218: 0x8c930008  lw          $s3, 0x8($a0)
    ctx->pc = 0x260218u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26021c: 0x8e710018  lw          $s1, 0x18($s3)
    ctx->pc = 0x26021cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x260220: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x260220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x260224: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x260224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x260228: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x260228u;
    {
        const bool branch_taken_0x260228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260228u;
        // 0x26022c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260228) {
            ctx->pc = 0x26040Cu;
            goto label_26040c;
        }
    }
    ctx->pc = 0x260230u;
    // 0x260230: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x260230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x260234: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x260234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x260238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x260238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26023c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x26023cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x260240: 0xc08994a  jal         func_226528
    ctx->pc = 0x260240u;
    SET_GPR_U32(ctx, 31, 0x260248u);
    ctx->pc = 0x260244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260240u;
    // 0x260244: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x260240u, 0x260248u)) {
        return;
    }
    ctx->pc = 0x260248u;
label_260248:
    // 0x260248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26024c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x260250: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x260250u;
    SET_GPR_U32(ctx, 31, 0x260258u);
    ctx->pc = 0x260254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260250u;
    // 0x260254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x260250u, 0x260258u)) {
        return;
    }
    ctx->pc = 0x260258u;
label_260258:
    // 0x260258: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x260258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26025c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260260: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x260260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x260264: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x260264u;
    {
        const bool branch_taken_0x260264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260264u;
        // 0x260268: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260264) {
            ctx->pc = 0x2602A0u;
            goto label_2602a0;
        }
    }
    ctx->pc = 0x26026Cu;
    // 0x26026c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x260270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260274: 0x0  nop
    ctx->pc = 0x260274u;
    // NOP
    // 0x260278: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x260278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26027c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26027Cu;
    {
        const bool branch_taken_0x26027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26027Cu;
        // 0x260280: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26027c) {
            ctx->pc = 0x2602E0u;
            goto label_2602e0;
        }
    }
    ctx->pc = 0x260284u;
    // 0x260284: 0x0  nop
    ctx->pc = 0x260284u;
    // NOP
label_260288:
    // 0x260288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26028c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26028cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260290: 0x0  nop
    ctx->pc = 0x260290u;
    // NOP
    // 0x260294: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x260294u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x260298: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x260298u;
    {
        const bool branch_taken_0x260298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260298u;
        // 0x26029c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260298) {
            ctx->pc = 0x2602E0u;
            goto label_2602e0;
        }
    }
    ctx->pc = 0x2602A0u;
label_2602a0:
    // 0x2602a0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2602a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2602a4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2602a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2602a8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2602a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2602ac: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2602acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2602b0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2602b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2602b4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2602b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2602b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2602b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2602bc: 0x46000084  c1          0x84
    ctx->pc = 0x2602bcu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2602c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2602c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2602c4: 0x0  nop
    ctx->pc = 0x2602c4u;
    // NOP
    // 0x2602c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2602c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2602cc: 0x0  nop
    ctx->pc = 0x2602ccu;
    // NOP
    // 0x2602d0: 0x4501ffed  bc1t        . + 4 + (-0x13 << 2)
    ctx->pc = 0x2602D0u;
    {
        const bool branch_taken_0x2602d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2602D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602D0u;
        // 0x2602d4: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602d0) {
            ctx->pc = 0x260288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260288;
        }
    }
    ctx->pc = 0x2602D8u;
    // 0x2602d8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2602d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2602dc: 0x0  nop
    ctx->pc = 0x2602dcu;
    // NOP
label_2602e0:
    // 0x2602e0: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x2602e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2602e4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x2602e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x2602e8: 0x2484fcc0  addiu       $a0, $a0, -0x340
    ctx->pc = 0x2602e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966464));
    // 0x2602ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2602ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2602f0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2602f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2602f4: 0x26750064  addiu       $s5, $s3, 0x64
    ctx->pc = 0x2602f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2602f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2602f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2602fc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2602fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x260300: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x260300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x260304: 0xc09703c  jal         func_25C0F0
    ctx->pc = 0x260304u;
    SET_GPR_U32(ctx, 31, 0x26030Cu);
    ctx->pc = 0x260308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260304u;
    // 0x260308: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C0F0u, 0x260304u, 0x26030Cu)) {
        return;
    }
    ctx->pc = 0x26030Cu;
label_26030c:
    // 0x26030c: 0x8e720064  lw          $s2, 0x64($s3)
    ctx->pc = 0x26030cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x260310: 0x1255003e  beq         $s2, $s5, . + 4 + (0x3E << 2)
    ctx->pc = 0x260310u;
    {
        const bool branch_taken_0x260310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x260314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260310u;
        // 0x260314: 0x3c170073  lui         $s7, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260310) {
            ctx->pc = 0x26040Cu;
            goto label_26040c;
        }
    }
    ctx->pc = 0x260318u;
    // 0x260318: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x260318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26031c: 0x0  nop
    ctx->pc = 0x26031cu;
    // NOP
label_260320:
    // 0x260320: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x260320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x260324: 0x24540040  addiu       $s4, $v0, 0x40
    ctx->pc = 0x260324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x260328: 0x52340036  beql        $s1, $s4, . + 4 + (0x36 << 2)
    ctx->pc = 0x260328u;
    {
        const bool branch_taken_0x260328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x260328) {
            ctx->pc = 0x26032Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260328u;
            // 0x26032c: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260404u;
            goto label_260404;
        }
    }
    ctx->pc = 0x260330u;
    // 0x260330: 0x26f60fc8  addiu       $s6, $s7, 0xFC8
    ctx->pc = 0x260330u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
    // 0x260334: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x260334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_260338:
    // 0x260338: 0x5080002f  beql        $a0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x260338u;
    {
        const bool branch_taken_0x260338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x260338) {
            ctx->pc = 0x26033Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260338u;
            // 0x26033c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2603F8u;
            goto label_2603f8;
        }
    }
    ctx->pc = 0x260340u;
    // 0x260340: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x260340u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x260344: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x260344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x260348: 0x5045002b  beql        $v0, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x260348u;
    {
        const bool branch_taken_0x260348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x260348) {
            ctx->pc = 0x26034Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260348u;
            // 0x26034c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2603F8u;
            goto label_2603f8;
        }
    }
    ctx->pc = 0x260350u;
    // 0x260350: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x260350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x260354: 0x92620062  lbu         $v0, 0x62($s3)
    ctx->pc = 0x260354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 98)));
    // 0x260358: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x260358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26035c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x26035Cu;
    {
        const bool branch_taken_0x26035c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26035c) {
            ctx->pc = 0x260360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26035Cu;
            // 0x260360: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2603F8u;
            goto label_2603f8;
        }
    }
    ctx->pc = 0x260364u;
    // 0x260364: 0xa485003c  sh          $a1, 0x3C($a0)
    ctx->pc = 0x260364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 5));
    // 0x260368: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x260368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26036c: 0xc08994a  jal         func_226528
    ctx->pc = 0x26036Cu;
    SET_GPR_U32(ctx, 31, 0x260374u);
    ctx->pc = 0x260370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26036Cu;
    // 0x260370: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x26036Cu, 0x260374u)) {
        return;
    }
    ctx->pc = 0x260374u;
label_260374:
    // 0x260374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260378: 0xc09533c  jal         func_254CF0
    ctx->pc = 0x260378u;
    SET_GPR_U32(ctx, 31, 0x260380u);
    ctx->pc = 0x26037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260378u;
    // 0x26037c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x260378u, 0x260380u)) {
        return;
    }
    ctx->pc = 0x260380u;
label_260380:
    // 0x260380: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x260380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x260384: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x260384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x260388: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x260388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26038c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x26038cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x260390: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x260390u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x260394: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x260394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260398: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x260398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26039c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x26039cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2603a0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2603a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2603a4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2603a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2603a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2603a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2603ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2603acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2603b0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2603b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2603b4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2603b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2603b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2603b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2603bc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2603bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2603c0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2603c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2603c4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2603c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2603c8: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x2603c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2603cc: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2603ccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2603d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2603d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2603d4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2603d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2603d8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2603d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2603dc: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x2603dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2603e0: 0x0  nop
    ctx->pc = 0x2603e0u;
    // NOP
    // 0x2603e4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2603E4u;
    {
        const bool branch_taken_0x2603e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2603e4) {
            ctx->pc = 0x2603E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2603E4u;
            // 0x2603e8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2603F8u;
            goto label_2603f8;
        }
    }
    ctx->pc = 0x2603ECu;
    // 0x2603ec: 0xc097f50  jal         func_25FD40
    ctx->pc = 0x2603ECu;
    SET_GPR_U32(ctx, 31, 0x2603F4u);
    ctx->pc = 0x2603F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603ECu;
    // 0x2603f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FD40u, 0x2603ECu, 0x2603F4u)) {
        return;
    }
    ctx->pc = 0x2603F4u;
label_2603f4:
    // 0x2603f4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2603f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2603f8:
    // 0x2603f8: 0x5634ffcf  bnel        $s1, $s4, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2603F8u;
    {
        const bool branch_taken_0x2603f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x2603f8) {
            ctx->pc = 0x2603FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2603F8u;
            // 0x2603fc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260338;
        }
    }
    ctx->pc = 0x260400u;
    // 0x260400: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x260400u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_260404:
    // 0x260404: 0x5655ffc6  bnel        $s2, $s5, . + 4 + (-0x3A << 2)
    ctx->pc = 0x260404u;
    {
        const bool branch_taken_0x260404 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x260404) {
            ctx->pc = 0x260408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260404u;
            // 0x260408: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260320;
        }
    }
    ctx->pc = 0x26040Cu;
label_26040c:
    // 0x26040c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x26040cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x260410: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x260410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x260414: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x260414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x260418: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x260418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26041c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x26041cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x260420: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x260420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x260424: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x260424u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x260428: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x260428u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26042c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26042cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x260430: 0x3e00008  jr          $ra
    ctx->pc = 0x260430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260430u;
        // 0x260434: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260438u;
}
