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

// Function: sub_001373A0
// Address: 0x1373a0 - 0x137508
void sub_001373A0_0x1373a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001373A0_0x1373a0");
#endif

    switch (ctx->pc) {
        case 0x1373dcu: goto label_1373dc;
        case 0x1373ecu: goto label_1373ec;
        case 0x1373fcu: goto label_1373fc;
        case 0x137408u: goto label_137408;
        case 0x137474u: goto label_137474;
        case 0x1374a0u: goto label_1374a0;
        case 0x1374c8u: goto label_1374c8;
        case 0x1374d8u: goto label_1374d8;
        case 0x1374e8u: goto label_1374e8;
        default: break;
    }

    ctx->pc = 0x1373a0u;

    // 0x1373a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1373a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1373a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1373a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1373a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1373a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1373ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1373acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1373b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1373b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1373b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373b8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1373b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1373bc: 0x26320310  addiu       $s2, $s1, 0x310
    ctx->pc = 0x1373bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x1373c0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1373c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1373c4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1373c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1373c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1373c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1373cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1373ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1373d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1373d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373d4: 0xc043cb4  jal         func_10F2D0
    ctx->pc = 0x1373D4u;
    SET_GPR_U32(ctx, 31, 0x1373DCu);
    ctx->pc = 0x1373D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373D4u;
    // 0x1373d8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F2D0u, 0x1373D4u, 0x1373DCu)) {
        return;
    }
    ctx->pc = 0x1373DCu;
label_1373dc:
    // 0x1373dc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1373DCu;
    {
        const bool branch_taken_0x1373dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373dc) {
            ctx->pc = 0x1374A8u;
            goto label_1374a8;
        }
    }
    ctx->pc = 0x1373E4u;
    // 0x1373e4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1373E4u;
    SET_GPR_U32(ctx, 31, 0x1373ECu);
    ctx->pc = 0x1373E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373E4u;
    // 0x1373e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1373E4u, 0x1373ECu)) {
        return;
    }
    ctx->pc = 0x1373ECu;
label_1373ec:
    // 0x1373ec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1373ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1373f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1373f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373f4: 0xc043c92  jal         func_10F248
    ctx->pc = 0x1373F4u;
    SET_GPR_U32(ctx, 31, 0x1373FCu);
    ctx->pc = 0x1373F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373F4u;
    // 0x1373f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F248u, 0x1373F4u, 0x1373FCu)) {
        return;
    }
    ctx->pc = 0x1373FCu;
label_1373fc:
    // 0x1373fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1373fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137400: 0xc043ccc  jal         func_10F330
    ctx->pc = 0x137400u;
    SET_GPR_U32(ctx, 31, 0x137408u);
    ctx->pc = 0x137404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137400u;
    // 0x137404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F330u, 0x137400u, 0x137408u)) {
        return;
    }
    ctx->pc = 0x137408u;
label_137408:
    // 0x137408: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x137408u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x13740c: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x13740cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137410: 0x0  nop
    ctx->pc = 0x137410u;
    // NOP
    // 0x137414: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x137414u;
    {
        const bool branch_taken_0x137414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137414) {
            ctx->pc = 0x137438u;
            goto label_137438;
        }
    }
    ctx->pc = 0x13741Cu;
    // 0x13741c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x13741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137420: 0x0  nop
    ctx->pc = 0x137420u;
    // NOP
    // 0x137424: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x137424u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x137428: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x137428u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x13742c: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x13742cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137430: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x137430u;
    {
        const bool branch_taken_0x137430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137430) {
            ctx->pc = 0x13745Cu;
            goto label_13745c;
        }
    }
    ctx->pc = 0x137438u;
label_137438:
    // 0x137438: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x137438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13743c: 0x0  nop
    ctx->pc = 0x13743cu;
    // NOP
    // 0x137440: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x137440u;
    {
        const bool branch_taken_0x137440 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137440) {
            ctx->pc = 0x13747Cu;
            goto label_13747c;
        }
    }
    ctx->pc = 0x137448u;
    // 0x137448: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x137448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13744c: 0x0  nop
    ctx->pc = 0x13744cu;
    // NOP
    // 0x137450: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x137450u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x137454: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x137454u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x137458: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x137458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13745c:
    // 0x13745c: 0x0  nop
    ctx->pc = 0x13745cu;
    // NOP
    // 0x137460: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x137460u;
    {
        const bool branch_taken_0x137460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137460) {
            ctx->pc = 0x137464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137460u;
            // 0x137464: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x137468u;
            goto label_137468;
        }
    }
    ctx->pc = 0x137468u;
label_137468:
    // 0x137468: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x137468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13746c: 0xc043caa  jal         func_10F2A8
    ctx->pc = 0x13746Cu;
    SET_GPR_U32(ctx, 31, 0x137474u);
    ctx->pc = 0x137470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13746Cu;
    // 0x137470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F2A8u, 0x13746Cu, 0x137474u)) {
        return;
    }
    ctx->pc = 0x137474u;
label_137474:
    // 0x137474: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x137474u;
    {
        const bool branch_taken_0x137474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137474u;
        // 0x137478: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137474) {
            ctx->pc = 0x1374ECu;
            goto label_1374ec;
        }
    }
    ctx->pc = 0x13747Cu;
label_13747c:
    // 0x13747c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13747cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137480: 0x0  nop
    ctx->pc = 0x137480u;
    // NOP
    // 0x137484: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x137484u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137488: 0x0  nop
    ctx->pc = 0x137488u;
    // NOP
    // 0x13748c: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x13748Cu;
    {
        const bool branch_taken_0x13748c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13748c) {
            ctx->pc = 0x137490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13748Cu;
            // 0x137490: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1374ECu;
            goto label_1374ec;
        }
    }
    ctx->pc = 0x137494u;
    // 0x137494: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x137494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137498: 0xc043c88  jal         func_10F220
    ctx->pc = 0x137498u;
    SET_GPR_U32(ctx, 31, 0x1374A0u);
    ctx->pc = 0x13749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137498u;
    // 0x13749c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x137498u, 0x1374A0u)) {
        return;
    }
    ctx->pc = 0x1374A0u;
label_1374a0:
    // 0x1374a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1374A0u;
    {
        const bool branch_taken_0x1374a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1374A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374A0u;
        // 0x1374a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374a0) {
            ctx->pc = 0x1374ECu;
            goto label_1374ec;
        }
    }
    ctx->pc = 0x1374A8u;
label_1374a8:
    // 0x1374a8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1374a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1374ac: 0x0  nop
    ctx->pc = 0x1374acu;
    // NOP
    // 0x1374b0: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1374b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1374b4: 0x0  nop
    ctx->pc = 0x1374b4u;
    // NOP
    // 0x1374b8: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1374B8u;
    {
        const bool branch_taken_0x1374b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1374b8) {
            ctx->pc = 0x1374BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1374B8u;
            // 0x1374bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1374ECu;
            goto label_1374ec;
        }
    }
    ctx->pc = 0x1374C0u;
    // 0x1374c0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1374C0u;
    SET_GPR_U32(ctx, 31, 0x1374C8u);
    ctx->pc = 0x1374C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1374C0u;
    // 0x1374c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1374C0u, 0x1374C8u)) {
        return;
    }
    ctx->pc = 0x1374C8u;
label_1374c8:
    // 0x1374c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1374c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1374cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1374ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374d0: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x1374D0u;
    SET_GPR_U32(ctx, 31, 0x1374D8u);
    ctx->pc = 0x1374D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1374D0u;
    // 0x1374d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x1374D0u, 0x1374D8u)) {
        return;
    }
    ctx->pc = 0x1374D8u;
label_1374d8:
    // 0x1374d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1374d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1374dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1374dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374e0: 0xc043caa  jal         func_10F2A8
    ctx->pc = 0x1374E0u;
    SET_GPR_U32(ctx, 31, 0x1374E8u);
    ctx->pc = 0x1374E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1374E0u;
    // 0x1374e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F2A8u, 0x1374E0u, 0x1374E8u)) {
        return;
    }
    ctx->pc = 0x1374E8u;
label_1374e8:
    // 0x1374e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1374e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1374ec:
    // 0x1374ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1374ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1374f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1374f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1374f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1374f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1374f8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1374f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1374fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1374fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137500: 0x3e00008  jr          $ra
    ctx->pc = 0x137500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137500u;
        // 0x137504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137508u;
}
