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

// Function: sub_0011A530
// Address: 0x11a530 - 0x11af38
void sub_0011A530_0x11a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A530_0x11a530");
#endif

    switch (ctx->pc) {
        case 0x11a64cu: goto label_11a64c;
        case 0x11a670u: goto label_11a670;
        case 0x11a684u: goto label_11a684;
        case 0x11ab38u: goto label_11ab38;
        case 0x11ab58u: goto label_11ab58;
        case 0x11ab84u: goto label_11ab84;
        case 0x11abe8u: goto label_11abe8;
        case 0x11ac64u: goto label_11ac64;
        case 0x11ac7cu: goto label_11ac7c;
        case 0x11ac94u: goto label_11ac94;
        case 0x11acacu: goto label_11acac;
        case 0x11acd0u: goto label_11acd0;
        case 0x11acf4u: goto label_11acf4;
        case 0x11ad1cu: goto label_11ad1c;
        case 0x11ae10u: goto label_11ae10;
        case 0x11ae30u: goto label_11ae30;
        case 0x11ae5cu: goto label_11ae5c;
        case 0x11aec0u: goto label_11aec0;
        case 0x11af10u: goto label_11af10;
        default: break;
    }

    ctx->pc = 0x11a530u;

    // 0x11a530: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x11a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11a534: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x11a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x11a538: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x11a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x11a53c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11a53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a540: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x11a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x11a544: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11a548: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x11a548u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x11a54c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x11a54cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x11a550: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x11a550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x11a554: 0x8e4300a8  lw          $v1, 0xA8($s2)
    ctx->pc = 0x11a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x11a558: 0x1060026d  beqz        $v1, . + 4 + (0x26D << 2)
    ctx->pc = 0x11A558u;
    {
        const bool branch_taken_0x11a558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A558u;
        // 0x11a55c: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a558) {
            ctx->pc = 0x11AF10u;
            goto label_11af10;
        }
    }
    ctx->pc = 0x11A560u;
    // 0x11a560: 0xc64000b0  lwc1        $f0, 0xB0($s2)
    ctx->pc = 0x11a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a564: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x11a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x11a568: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11a568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a56c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11a56cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11a570: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x11a570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11a574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11a574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a578: 0x0  nop
    ctx->pc = 0x11a578u;
    // NOP
    // 0x11a57c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11A57Cu;
    {
        const bool branch_taken_0x11a57c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A57Cu;
        // 0x11a580: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a57c) {
            ctx->pc = 0x11A588u;
            goto label_11a588;
        }
    }
    ctx->pc = 0x11A584u;
    // 0x11a584: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a588:
    // 0x11a588: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a58c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11a58cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a590: 0x0  nop
    ctx->pc = 0x11a590u;
    // NOP
    // 0x11a594: 0x450001e3  bc1f        . + 4 + (0x1E3 << 2)
    ctx->pc = 0x11A594u;
    {
        const bool branch_taken_0x11a594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A594u;
        // 0x11a598: 0xe64000b0  swc1        $f0, 0xB0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a594) {
            ctx->pc = 0x11AD24u;
            goto label_11ad24;
        }
    }
    ctx->pc = 0x11A59Cu;
    // 0x11a59c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x11a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x11a5a0: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x11a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a5a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11A5A4u;
    {
        const bool branch_taken_0x11a5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5A4u;
        // 0x11a5a8: 0xc64300c4  lwc1        $f3, 0xC4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5a4) {
            ctx->pc = 0x11A5D8u;
            goto label_11a5d8;
        }
    }
    ctx->pc = 0x11A5ACu;
    // 0x11a5ac: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x11a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x11a5b0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11A5B0u;
    {
        const bool branch_taken_0x11a5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a5b0) {
            ctx->pc = 0x11A5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A5B0u;
            // 0x11a5b4: 0x460c1002  mul.s       $f0, $f2, $f12 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A5DCu;
            goto label_11a5dc;
        }
    }
    ctx->pc = 0x11A5B8u;
    // 0x11a5b8: 0xc64100c0  lwc1        $f1, 0xC0($s2)
    ctx->pc = 0x11a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a5bc: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x11a5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a5c0: 0x0  nop
    ctx->pc = 0x11a5c0u;
    // NOP
    // 0x11a5c4: 0x0  nop
    ctx->pc = 0x11a5c4u;
    // NOP
    // 0x11a5c8: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x11a5c8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[1]);
    // 0x11a5cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11a5ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11a5d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a5d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a5d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11a5d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_11a5d8:
    // 0x11a5d8: 0x460c1002  mul.s       $f0, $f2, $f12
    ctx->pc = 0x11a5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_11a5dc:
    // 0x11a5dc: 0xc64100c0  lwc1        $f1, 0xC0($s2)
    ctx->pc = 0x11a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a5e0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x11a5e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11a5e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11a5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a5e8: 0x0  nop
    ctx->pc = 0x11a5e8u;
    // NOP
    // 0x11a5ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11A5ECu;
    {
        const bool branch_taken_0x11a5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5ECu;
        // 0x11a5f0: 0xe64000c4  swc1        $f0, 0xC4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5ec) {
            ctx->pc = 0x11A5F8u;
            goto label_11a5f8;
        }
    }
    ctx->pc = 0x11A5F4u;
    // 0x11a5f4: 0xe64100c4  swc1        $f1, 0xC4($s2)
    ctx->pc = 0x11a5f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
label_11a5f8:
    // 0x11a5f8: 0xc64c00c0  lwc1        $f12, 0xC0($s2)
    ctx->pc = 0x11a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11a5fc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x11a5fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x11a600: 0x0  nop
    ctx->pc = 0x11a600u;
    // NOP
    // 0x11a604: 0x46166032  c.eq.s      $f12, $f22
    ctx->pc = 0x11a604u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a608: 0x0  nop
    ctx->pc = 0x11a608u;
    // NOP
    // 0x11a60c: 0x4503009d  bc1tl       . + 4 + (0x9D << 2)
    ctx->pc = 0x11A60Cu;
    {
        const bool branch_taken_0x11a60c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a60c) {
            ctx->pc = 0x11A610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A60Cu;
            // 0x11a610: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A884u;
            goto label_11a884;
        }
    }
    ctx->pc = 0x11A614u;
    // 0x11a614: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x11a618: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x11A618u;
    {
        const bool branch_taken_0x11a618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A618u;
        // 0x11a61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a618) {
            ctx->pc = 0x11A880u;
            goto label_11a880;
        }
    }
    ctx->pc = 0x11A620u;
    // 0x11a620: 0xc64000c4  lwc1        $f0, 0xC4($s2)
    ctx->pc = 0x11a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a624: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x11a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x11a628: 0x0  nop
    ctx->pc = 0x11a628u;
    // NOP
    // 0x11a62c: 0x0  nop
    ctx->pc = 0x11a62cu;
    // NOP
    // 0x11a630: 0x460c0503  div.s       $f20, $f0, $f12
    ctx->pc = 0x11a630u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x11a634: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x11a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a638: 0xc46c0064  lwc1        $f12, 0x64($v1)
    ctx->pc = 0x11a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11a63c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x11a63cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11a640: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x11a640u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x11a644: 0xc0446c6  jal         func_111B18
    ctx->pc = 0x11A644u;
    SET_GPR_U32(ctx, 31, 0x11A64Cu);
    ctx->pc = 0x11A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A644u;
    // 0x11a648: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B18u, 0x11A644u, 0x11A64Cu)) {
        return;
    }
    ctx->pc = 0x11A64Cu;
label_11a64c:
    // 0x11a64c: 0xc64c00e8  lwc1        $f12, 0xE8($s2)
    ctx->pc = 0x11a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11a650: 0x46166032  c.eq.s      $f12, $f22
    ctx->pc = 0x11a650u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a654: 0x0  nop
    ctx->pc = 0x11a654u;
    // NOP
    // 0x11a658: 0x4503008a  bc1tl       . + 4 + (0x8A << 2)
    ctx->pc = 0x11A658u;
    {
        const bool branch_taken_0x11a658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a658) {
            ctx->pc = 0x11A65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A658u;
            // 0x11a65c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A884u;
            goto label_11a884;
        }
    }
    ctx->pc = 0x11A660u;
    // 0x11a660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a664: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11a664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11a668: 0xc09b164  jal         func_26C590
    ctx->pc = 0x11A668u;
    SET_GPR_U32(ctx, 31, 0x11A670u);
    ctx->pc = 0x11A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A668u;
    // 0x11a66c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x11A668u, 0x11A670u)) {
        return;
    }
    ctx->pc = 0x11A670u;
label_11a670:
    // 0x11a670: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x11a670u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x11a674: 0xc64c00e8  lwc1        $f12, 0xE8($s2)
    ctx->pc = 0x11a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11a678: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11a678u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11a67c: 0xc09b164  jal         func_26C590
    ctx->pc = 0x11A67Cu;
    SET_GPR_U32(ctx, 31, 0x11A684u);
    ctx->pc = 0x11A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A67Cu;
    // 0x11a680: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x11A67Cu, 0x11A684u)) {
        return;
    }
    ctx->pc = 0x11A684u;
label_11a684:
    // 0x11a684: 0xc64400d4  lwc1        $f4, 0xD4($s2)
    ctx->pc = 0x11a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11a688: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x11a688u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a68c: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x11a68cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11a690: 0xc64700c8  lwc1        $f7, 0xC8($s2)
    ctx->pc = 0x11a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11a694: 0xc64600cc  lwc1        $f6, 0xCC($s2)
    ctx->pc = 0x11a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11a698: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x11a698u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x11a69c: 0xc64500d0  lwc1        $f5, 0xD0($s2)
    ctx->pc = 0x11a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11a6a0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x11a6a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11a6a4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x11a6a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11a6a8: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x11a6a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11a6ac: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x11a6acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11a6b0: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x11a6b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11a6b4: 0xc64300e4  lwc1        $f3, 0xE4($s2)
    ctx->pc = 0x11a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a6b8: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x11a6b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x11a6bc: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x11a6bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x11a6c0: 0xc64000d8  lwc1        $f0, 0xD8($s2)
    ctx->pc = 0x11a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a6c4: 0xc64200dc  lwc1        $f2, 0xDC($s2)
    ctx->pc = 0x11a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a6c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x11a6c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x11a6cc: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x11a6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a6d0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x11a6d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x11a6d4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x11a6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x11a6d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x11a6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11a6dc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x11a6dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11a6e0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x11a6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11a6e4: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x11a6e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x11a6e8: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x11a6e8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x11a6ec: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x11a6ecu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x11a6f0: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x11a6f0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x11a6f4: 0xc64000ec  lwc1        $f0, 0xEC($s2)
    ctx->pc = 0x11a6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a6f8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x11a6f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a6fc: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x11a6fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x11a700: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x11a700u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x11a704: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x11a704u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11a708: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x11a708u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11a70c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x11a70cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11a710: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x11a710u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11a714: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x11a714u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11a718: 0x46042202  mul.s       $f8, $f4, $f4
    ctx->pc = 0x11a718u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x11a71c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11a71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11a720: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11a720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11a724: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x11a724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x11a728: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x11a728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x11a72c: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x11a72cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x11a730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a734: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a738: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x11a738u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x11a73c: 0x460818c3  div.s       $f3, $f3, $f8
    ctx->pc = 0x11a73cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[8]);
    // 0x11a740: 0x46033a42  mul.s       $f9, $f7, $f3
    ctx->pc = 0x11a740u;
    ctx->f[9] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x11a744: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x11a744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x11a748: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x11a748u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11a74c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x11a74cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x11a750: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x11a750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11a754: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x11a754u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11a758: 0x46044802  mul.s       $f0, $f9, $f4
    ctx->pc = 0x11a758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x11a75c: 0x46041042  mul.s       $f1, $f2, $f4
    ctx->pc = 0x11a75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11a760: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11a760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11a764: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x11a764u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x11a768: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x11a768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11a76c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x11a76cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x11a770: 0x46093a02  mul.s       $f8, $f7, $f9
    ctx->pc = 0x11a770u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x11a774: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11a774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a778: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x11a778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x11a77c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a780: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x11a780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x11a784: 0xe7a80050  swc1        $f8, 0x50($sp)
    ctx->pc = 0x11a784u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11a788: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x11a788u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x11a78c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x11a78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x11a790: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x11a790u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x11a794: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11a794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11a798: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x11a798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11a79c: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x11a79cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x11a7a0: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x11a7a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11a7a4: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x11a7a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x11a7a8: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x11a7a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x11a7ac: 0xe7a70068  swc1        $f7, 0x68($sp)
    ctx->pc = 0x11a7acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11a7b0: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x11a7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x11a7b4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x11a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a7b8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a7bc: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a7c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a7c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a7c4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x11a7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x11a7c8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x11a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a7cc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x11a7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a7d0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a7d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11a7d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11a7d8: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x11a7d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x11a7dc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x11a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a7e0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x11a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a7e4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a7e8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11a7e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11a7ec: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x11a7ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x11a7f0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x11a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a7f4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x11a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a7f8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a7fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a800: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x11a800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x11a804: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x11a804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x11a808: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x11a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a80c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x11a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a810: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a814: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11a814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11a818: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x11a818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x11a81c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x11a81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a820: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x11a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a824: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a828: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a82c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x11a82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x11a830: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x11a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a834: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x11a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a838: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a83c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11a83cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11a840: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x11a840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x11a844: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x11a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a848: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x11a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a84c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x11a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a850: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a854: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x11a854u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x11a858: 0xe4750038  swc1        $f21, 0x38($v1)
    ctx->pc = 0x11a858u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x11a85c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a860: 0xe4560040  swc1        $f22, 0x40($v0)
    ctx->pc = 0x11a860u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x11a864: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x11a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a868: 0xe4760044  swc1        $f22, 0x44($v1)
    ctx->pc = 0x11a868u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x11a86c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a870: 0xe4560048  swc1        $f22, 0x48($v0)
    ctx->pc = 0x11a870u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x11a874: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x11a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11a878: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x11a878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x11a87c: 0x0  nop
    ctx->pc = 0x11a87cu;
    // NOP
label_11a880:
    // 0x11a880: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x11a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_11a884:
    // 0x11a884: 0x504000ec  beql        $v0, $zero, . + 4 + (0xEC << 2)
    ctx->pc = 0x11A884u;
    {
        const bool branch_taken_0x11a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a884) {
            ctx->pc = 0x11A888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A884u;
            // 0x11a888: 0xc64000c4  lwc1        $f0, 0xC4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AC38u;
            goto label_11ac38;
        }
    }
    ctx->pc = 0x11A88Cu;
    // 0x11a88c: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x11a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x11a890: 0x1080010d  beqz        $a0, . + 4 + (0x10D << 2)
    ctx->pc = 0x11A890u;
    {
        const bool branch_taken_0x11a890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a890) {
            ctx->pc = 0x11ACC8u;
            goto label_11acc8;
        }
    }
    ctx->pc = 0x11A898u;
    // 0x11a898: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x11a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x11a89c: 0x1060010a  beqz        $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x11A89Cu;
    {
        const bool branch_taken_0x11a89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a89c) {
            ctx->pc = 0x11ACC8u;
            goto label_11acc8;
        }
    }
    ctx->pc = 0x11A8A4u;
    // 0x11a8a4: 0xc64000c0  lwc1        $f0, 0xC0($s2)
    ctx->pc = 0x11a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a8a8: 0xc64100c4  lwc1        $f1, 0xC4($s2)
    ctx->pc = 0x11a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a8ac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11a8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11a8b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11a8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a8b4: 0x0  nop
    ctx->pc = 0x11a8b4u;
    // NOP
    // 0x11a8b8: 0x0  nop
    ctx->pc = 0x11a8b8u;
    // NOP
    // 0x11a8bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11a8bcu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x11a8c0: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x11a8c4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11a8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11a8c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a8cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11a8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11a8d0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x11a8d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x11a8d4: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x11a8d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a8d8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x11a8d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11a8dc: 0x46000280  add.s       $f10, $f0, $f0
    ctx->pc = 0x11a8dcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11a8e0: 0x46052900  add.s       $f4, $f5, $f5
    ctx->pc = 0x11a8e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x11a8e4: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x11a8e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x11a8e8: 0x460a2a81  sub.s       $f10, $f5, $f10
    ctx->pc = 0x11a8e8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[5], ctx->f[10]);
    // 0x11a8ec: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x11a8ecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x11a8f0: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x11a8f0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x11a8f4: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x11a8f4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x11a8f8: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x11a8f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x11a8fc: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x11a8fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x11a900: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x11a900u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11a904: 0xe7aa0028  swc1        $f10, 0x28($sp)
    ctx->pc = 0x11a904u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11a908: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x11a908u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11a90c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x11a90cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x11a910: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x11a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x11a914: 0xc4490040  lwc1        $f9, 0x40($v0)
    ctx->pc = 0x11a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x11a918: 0x46044a42  mul.s       $f9, $f9, $f4
    ctx->pc = 0x11a918u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x11a91c: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x11a91cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11a920: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x11a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x11a924: 0xc4480044  lwc1        $f8, 0x44($v0)
    ctx->pc = 0x11a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11a928: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x11a928u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x11a92c: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x11a92cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11a930: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x11a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x11a934: 0xc4470048  lwc1        $f7, 0x48($v0)
    ctx->pc = 0x11a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11a938: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x11a938u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x11a93c: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x11a93cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11a940: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x11a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a944: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x11a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a948: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a94c: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x11a94cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x11a950: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x11a950u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11a954: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x11a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a958: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x11a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a95c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a960: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x11a960u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x11a964: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x11a964u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11a968: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x11a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a96c: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x11a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a970: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a974: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x11a974u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x11a978: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x11a978u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11a97c: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x11a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a980: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11a980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11a984: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x11a984u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x11a988: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x11a988u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11a98c: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x11a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a990: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11a990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11a994: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x11a994u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x11a998: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x11a998u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11a99c: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x11a99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a9a0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11a9a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11a9a4: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x11a9a4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x11a9a8: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x11a9a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11a9ac: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x11a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a9b0: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x11a9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x11a9b4: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x11a9b4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x11a9b8: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x11a9b8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11a9bc: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x11a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a9c0: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x11a9c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x11a9c4: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x11a9c4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x11a9c8: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x11a9c8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11a9cc: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x11a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a9d0: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x11a9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x11a9d4: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x11a9d4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x11a9d8: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x11a9d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11a9dc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x11a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x11a9e0: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x11a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a9e4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x11a9e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x11a9e8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x11a9e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11a9ec: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x11a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x11a9f0: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x11a9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a9f4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11a9f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11a9f8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x11a9f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11a9fc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x11a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x11aa00: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x11aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11aa04: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11aa04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x11aa08: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x11aa08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11aa0c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x11aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11aa10: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x11aa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa14: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11aa14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11aa18: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11aa18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11aa1c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x11aa1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11aa20: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x11aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11aa24: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x11aa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa28: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11aa28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11aa2c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11aa2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11aa30: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x11aa30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11aa34: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x11aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11aa38: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x11aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa3c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11aa3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11aa40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11aa40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11aa44: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x11aa44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11aa48: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x11aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa4c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11aa4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11aa50: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11aa50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11aa54: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x11aa54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11aa58: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x11aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa5c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11aa5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11aa60: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11aa60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11aa64: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x11aa64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11aa68: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x11aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa6c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11aa6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11aa70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11aa70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11aa74: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x11aa74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11aa78: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x11aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa7c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x11aa7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x11aa80: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11aa80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11aa84: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x11aa84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11aa88: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x11aa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa8c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x11aa8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x11aa90: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11aa90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11aa94: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x11aa94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11aa98: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x11aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa9c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x11aa9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x11aaa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11aaa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11aaa4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x11aaa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11aaa8: 0xc64400f8  lwc1        $f4, 0xF8($s2)
    ctx->pc = 0x11aaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11aaac: 0xc64500fc  lwc1        $f5, 0xFC($s2)
    ctx->pc = 0x11aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11aab0: 0x46044a41  sub.s       $f9, $f9, $f4
    ctx->pc = 0x11aab0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[4]);
    // 0x11aab4: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x11aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aab8: 0x46054201  sub.s       $f8, $f8, $f5
    ctx->pc = 0x11aab8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[5]);
    // 0x11aabc: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x11aabcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x11aac0: 0xc64600f4  lwc1        $f6, 0xF4($s2)
    ctx->pc = 0x11aac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11aac4: 0x46064a42  mul.s       $f9, $f9, $f6
    ctx->pc = 0x11aac4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x11aac8: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x11aac8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x11aacc: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x11aaccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x11aad0: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x11aad0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x11aad4: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x11aad4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x11aad8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11aad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11aadc: 0xe64400f8  swc1        $f4, 0xF8($s2)
    ctx->pc = 0x11aadcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x11aae0: 0xe64500fc  swc1        $f5, 0xFC($s2)
    ctx->pc = 0x11aae0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
    // 0x11aae4: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x11aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x11aae8: 0xc6440104  lwc1        $f4, 0x104($s2)
    ctx->pc = 0x11aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11aaec: 0xc6450108  lwc1        $f5, 0x108($s2)
    ctx->pc = 0x11aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11aaf0: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x11aaf0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x11aaf4: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x11aaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aaf8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x11aaf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x11aafc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11aafcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11ab00: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x11ab00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11ab04: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x11ab04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11ab08: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x11ab08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11ab0c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x11ab0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x11ab10: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x11ab10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x11ab14: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x11ab14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x11ab18: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x11ab18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x11ab1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ab1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ab20: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x11ab20u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x11ab24: 0xe6440104  swc1        $f4, 0x104($s2)
    ctx->pc = 0x11ab24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x11ab28: 0xe640010c  swc1        $f0, 0x10C($s2)
    ctx->pc = 0x11ab28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 268), bits); }
    // 0x11ab2c: 0xe6450108  swc1        $f5, 0x108($s2)
    ctx->pc = 0x11ab2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
    // 0x11ab30: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x11AB30u;
    SET_GPR_U32(ctx, 31, 0x11AB38u);
    ctx->pc = 0x11AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB30u;
    // 0x11ab34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11AB30u, 0x11AB38u)) {
        return;
    }
    ctx->pc = 0x11AB38u;
label_11ab38:
    // 0x11ab38: 0x6a4300ff  ldl         $v1, 0xFF($s2)
    ctx->pc = 0x11ab38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11ab3c: 0x6e4300f8  ldr         $v1, 0xF8($s2)
    ctx->pc = 0x11ab3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11ab40: 0x8e450100  lw          $a1, 0x100($s2)
    ctx->pc = 0x11ab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x11ab44: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x11ab44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ab48: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x11ab48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ab4c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x11ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x11ab50: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x11AB50u;
    SET_GPR_U32(ctx, 31, 0x11AB58u);
    ctx->pc = 0x11AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB50u;
    // 0x11ab54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x11AB50u, 0x11AB58u)) {
        return;
    }
    ctx->pc = 0x11AB58u;
label_11ab58:
    // 0x11ab58: 0x6a43010b  ldl         $v1, 0x10B($s2)
    ctx->pc = 0x11ab58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11ab5c: 0x6e430104  ldr         $v1, 0x104($s2)
    ctx->pc = 0x11ab5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11ab60: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x11ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x11ab64: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x11ab64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ab68: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x11ab68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ab6c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x11ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x11ab70: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x11ab70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11ab74: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x11ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x11ab78: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x11ab78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x11ab7c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11AB7Cu;
    SET_GPR_U32(ctx, 31, 0x11AB84u);
    ctx->pc = 0x11AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB7Cu;
    // 0x11ab80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11AB7Cu, 0x11AB84u)) {
        return;
    }
    ctx->pc = 0x11AB84u;
label_11ab84:
    // 0x11ab84: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x11ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ab88: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x11ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ab8c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x11ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ab90: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x11ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ab94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11ab94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11ab98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11ab98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11ab9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11ab9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11aba0: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x11aba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x11aba4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x11aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11aba8: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x11aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11abac: 0xc6050020  lwc1        $f5, 0x20($s0)
    ctx->pc = 0x11abacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11abb0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x11abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11abb4: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x11abb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11abb8: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x11abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11abbc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x11abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11abc0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x11abc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x11abc4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11abc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11abc8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11abc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11abcc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11abccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11abd0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11abd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11abd4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x11abd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x11abd8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x11abd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x11abdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11abdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abe0: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11ABE0u;
    SET_GPR_U32(ctx, 31, 0x11ABE8u);
    ctx->pc = 0x11ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABE0u;
    // 0x11abe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11ABE0u, 0x11ABE8u)) {
        return;
    }
    ctx->pc = 0x11ABE8u;
label_11abe8:
    // 0x11abe8: 0xc6050024  lwc1        $f5, 0x24($s0)
    ctx->pc = 0x11abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11abec: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x11abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11abf0: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x11abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11abf4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x11abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11abf8: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x11abf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x11abfc: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x11abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ac00: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x11ac00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x11ac04: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x11ac04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11ac08: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x11ac08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x11ac0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11ac0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11ac10: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x11ac10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x11ac14: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x11ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac18: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x11ac18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11ac1c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x11ac1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11ac20: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x11ac20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x11ac24: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x11ac24u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x11ac28: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x11ac28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x11ac2c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11AC2Cu;
    {
        const bool branch_taken_0x11ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC2Cu;
        // 0x11ac30: 0xe6040014  swc1        $f4, 0x14($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac2c) {
            ctx->pc = 0x11ACC8u;
            goto label_11acc8;
        }
    }
    ctx->pc = 0x11AC34u;
    // 0x11ac34: 0x0  nop
    ctx->pc = 0x11ac34u;
    // NOP
label_11ac38:
    // 0x11ac38: 0xc64100b4  lwc1        $f1, 0xB4($s2)
    ctx->pc = 0x11ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ac3c: 0xc64200b8  lwc1        $f2, 0xB8($s2)
    ctx->pc = 0x11ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ac40: 0xc64300bc  lwc1        $f3, 0xBC($s2)
    ctx->pc = 0x11ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ac44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11ac44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11ac48: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11ac48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11ac4c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11ac4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11ac50: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x11ac50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11ac54: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x11ac54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11ac58: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x11ac58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11ac5c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x11AC5Cu;
    SET_GPR_U32(ctx, 31, 0x11AC64u);
    ctx->pc = 0x11AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC5Cu;
    // 0x11ac60: 0x8e4400a8  lw          $a0, 0xA8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11AC5Cu, 0x11AC64u)) {
        return;
    }
    ctx->pc = 0x11AC64u;
label_11ac64:
    // 0x11ac64: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ac68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac6c: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x11ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x11ac70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ac70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ac74: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x11AC74u;
    SET_GPR_U32(ctx, 31, 0x11AC7Cu);
    ctx->pc = 0x11AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC74u;
    // 0x11ac78: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11AC74u, 0x11AC7Cu)) {
        return;
    }
    ctx->pc = 0x11AC7Cu;
label_11ac7c:
    // 0x11ac7c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac80: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x11ac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ac84: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x11ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x11ac88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ac88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ac8c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x11AC8Cu;
    SET_GPR_U32(ctx, 31, 0x11AC94u);
    ctx->pc = 0x11AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC8Cu;
    // 0x11ac90: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11AC8Cu, 0x11AC94u)) {
        return;
    }
    ctx->pc = 0x11AC94u;
label_11ac94:
    // 0x11ac94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac98: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11ac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ac9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ac9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11aca0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x11aca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11aca4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x11ACA4u;
    SET_GPR_U32(ctx, 31, 0x11ACACu);
    ctx->pc = 0x11ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACA4u;
    // 0x11aca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11ACA4u, 0x11ACACu)) {
        return;
    }
    ctx->pc = 0x11ACACu;
label_11acac:
    // 0x11acac: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x11acacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11acb0: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x11acb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11acb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11acb8: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x11acb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11acbc: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x11acbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11acc0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x11acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x11acc4: 0x0  nop
    ctx->pc = 0x11acc4u;
    // NOP
label_11acc8:
    // 0x11acc8: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x11ACC8u;
    SET_GPR_U32(ctx, 31, 0x11ACD0u);
    ctx->pc = 0x11ACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACC8u;
    // 0x11accc: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x11ACC8u, 0x11ACD0u)) {
        return;
    }
    ctx->pc = 0x11ACD0u;
label_11acd0:
    // 0x11acd0: 0xc64100c4  lwc1        $f1, 0xC4($s2)
    ctx->pc = 0x11acd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11acd4: 0xc64000c0  lwc1        $f0, 0xC0($s2)
    ctx->pc = 0x11acd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11acd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x11acd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11acdc: 0x0  nop
    ctx->pc = 0x11acdcu;
    // NOP
    // 0x11ace0: 0x4500008c  bc1f        . + 4 + (0x8C << 2)
    ctx->pc = 0x11ACE0u;
    {
        const bool branch_taken_0x11ace0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACE0u;
        // 0x11ace4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ace0) {
            ctx->pc = 0x11AF14u;
            goto label_11af14;
        }
    }
    ctx->pc = 0x11ACE8u;
    // 0x11ace8: 0x8e4500ac  lw          $a1, 0xAC($s2)
    ctx->pc = 0x11ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x11acec: 0xc046ce0  jal         func_11B380
    ctx->pc = 0x11ACECu;
    SET_GPR_U32(ctx, 31, 0x11ACF4u);
    ctx->pc = 0x11ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ACECu;
    // 0x11acf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11B380u, 0x11ACECu, 0x11ACF4u)) {
        return;
    }
    ctx->pc = 0x11ACF4u;
label_11acf4:
    // 0x11acf4: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x11acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x11acf8: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x11ACF8u;
    {
        const bool branch_taken_0x11acf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACF8u;
        // 0x11acfc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acf8) {
            ctx->pc = 0x11AF14u;
            goto label_11af14;
        }
    }
    ctx->pc = 0x11AD00u;
    // 0x11ad00: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x11ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x11ad04: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x11ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x11ad08: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11ad0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11ad14: 0xc07fc26  jal         func_1FF098
    ctx->pc = 0x11AD14u;
    SET_GPR_U32(ctx, 31, 0x11AD1Cu);
    ctx->pc = 0x11AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD14u;
    // 0x11ad18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF098u, 0x11AD14u, 0x11AD1Cu)) {
        return;
    }
    ctx->pc = 0x11AD1Cu;
label_11ad1c:
    // 0x11ad1c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x11AD1Cu;
    {
        const bool branch_taken_0x11ad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD1Cu;
        // 0x11ad20: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad1c) {
            ctx->pc = 0x11AF14u;
            goto label_11af14;
        }
    }
    ctx->pc = 0x11AD24u;
label_11ad24:
    // 0x11ad24: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x11ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x11ad28: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x11AD28u;
    {
        const bool branch_taken_0x11ad28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD28u;
        // 0x11ad2c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad28) {
            ctx->pc = 0x11AF14u;
            goto label_11af14;
        }
    }
    ctx->pc = 0x11AD30u;
    // 0x11ad30: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x11ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11ad34: 0x68460047  ldl         $a2, 0x47($v0)
    ctx->pc = 0x11ad34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11ad38: 0x6c460040  ldr         $a2, 0x40($v0)
    ctx->pc = 0x11ad38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11ad3c: 0x8c470048  lw          $a3, 0x48($v0)
    ctx->pc = 0x11ad3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ad40: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x11ad40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ad44: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x11ad44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ad48: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x11ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x11ad4c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x11ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11ad50: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x11ad50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11ad54: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x11ad54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11ad58: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x11ad58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x11ad5c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x11ad5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ad60: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x11ad60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ad64: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x11ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x11ad68: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x11ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ad6c: 0xc64500f8  lwc1        $f5, 0xF8($s2)
    ctx->pc = 0x11ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11ad70: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x11ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad74: 0xc64400fc  lwc1        $f4, 0xFC($s2)
    ctx->pc = 0x11ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11ad78: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x11ad78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x11ad7c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ad80: 0xc6430100  lwc1        $f3, 0x100($s2)
    ctx->pc = 0x11ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ad84: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11ad84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x11ad88: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11ad88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11ad8c: 0xc64600f4  lwc1        $f6, 0xF4($s2)
    ctx->pc = 0x11ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11ad90: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x11ad90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x11ad94: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x11ad94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x11ad98: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11ad98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11ad9c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x11ad9cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x11ada0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x11ada0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x11ada4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11ada4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11ada8: 0xe64500f8  swc1        $f5, 0xF8($s2)
    ctx->pc = 0x11ada8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x11adac: 0xe64400fc  swc1        $f4, 0xFC($s2)
    ctx->pc = 0x11adacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
    // 0x11adb0: 0xe6430100  swc1        $f3, 0x100($s2)
    ctx->pc = 0x11adb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x11adb4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x11adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11adb8: 0xc6440104  lwc1        $f4, 0x104($s2)
    ctx->pc = 0x11adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11adbc: 0xc6450108  lwc1        $f5, 0x108($s2)
    ctx->pc = 0x11adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11adc0: 0xc643010c  lwc1        $f3, 0x10C($s2)
    ctx->pc = 0x11adc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11adc4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11adc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x11adc8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x11adc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11adcc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x11adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11add0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x11add0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x11add4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x11add4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11add8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11add8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11addc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x11addcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11ade0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x11ade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11ade4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x11ade4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x11ade8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11ade8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11adec: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x11adecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x11adf0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x11adf0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x11adf4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11adf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11adf8: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x11adf8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x11adfc: 0xe6440104  swc1        $f4, 0x104($s2)
    ctx->pc = 0x11adfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x11ae00: 0xe643010c  swc1        $f3, 0x10C($s2)
    ctx->pc = 0x11ae00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 268), bits); }
    // 0x11ae04: 0xe6450108  swc1        $f5, 0x108($s2)
    ctx->pc = 0x11ae04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
    // 0x11ae08: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x11AE08u;
    SET_GPR_U32(ctx, 31, 0x11AE10u);
    ctx->pc = 0x11AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE08u;
    // 0x11ae0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11AE08u, 0x11AE10u)) {
        return;
    }
    ctx->pc = 0x11AE10u;
label_11ae10:
    // 0x11ae10: 0x6a4500ff  ldl         $a1, 0xFF($s2)
    ctx->pc = 0x11ae10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11ae14: 0x6e4500f8  ldr         $a1, 0xF8($s2)
    ctx->pc = 0x11ae14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11ae18: 0x8e460100  lw          $a2, 0x100($s2)
    ctx->pc = 0x11ae18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x11ae1c: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x11ae1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ae20: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x11ae20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ae24: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x11ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x11ae28: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x11AE28u;
    SET_GPR_U32(ctx, 31, 0x11AE30u);
    ctx->pc = 0x11AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE28u;
    // 0x11ae2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x11AE28u, 0x11AE30u)) {
        return;
    }
    ctx->pc = 0x11AE30u;
label_11ae30:
    // 0x11ae30: 0x6a44010b  ldl         $a0, 0x10B($s2)
    ctx->pc = 0x11ae30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11ae34: 0x6e440104  ldr         $a0, 0x104($s2)
    ctx->pc = 0x11ae34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11ae38: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x11ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x11ae3c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x11ae3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ae40: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x11ae40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ae44: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x11ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x11ae48: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x11ae48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11ae4c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x11ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x11ae50: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x11ae50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x11ae54: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11AE54u;
    SET_GPR_U32(ctx, 31, 0x11AE5Cu);
    ctx->pc = 0x11AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE54u;
    // 0x11ae58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11AE54u, 0x11AE5Cu)) {
        return;
    }
    ctx->pc = 0x11AE5Cu;
label_11ae5c:
    // 0x11ae5c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x11ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ae60: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x11ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ae64: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x11ae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ae68: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x11ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ae6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11ae6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11ae70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11ae70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11ae74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11ae74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11ae78: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x11ae78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x11ae7c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x11ae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ae80: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x11ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ae84: 0xc6050020  lwc1        $f5, 0x20($s0)
    ctx->pc = 0x11ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11ae88: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x11ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ae8c: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x11ae8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11ae90: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x11ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11ae94: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x11ae94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ae98: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x11ae98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x11ae9c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11ae9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11aea0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11aea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11aea4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11aea4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11aea8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11aea8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11aeac: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x11aeacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x11aeb0: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x11aeb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x11aeb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aeb8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11AEB8u;
    SET_GPR_U32(ctx, 31, 0x11AEC0u);
    ctx->pc = 0x11AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEB8u;
    // 0x11aebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11AEB8u, 0x11AEC0u)) {
        return;
    }
    ctx->pc = 0x11AEC0u;
label_11aec0:
    // 0x11aec0: 0xc6050024  lwc1        $f5, 0x24($s0)
    ctx->pc = 0x11aec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11aec4: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x11aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11aec8: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x11aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11aecc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x11aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11aed0: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x11aed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x11aed4: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x11aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11aed8: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x11aed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x11aedc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x11aedcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11aee0: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x11aee0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x11aee4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11aee4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11aee8: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x11aee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x11aeec: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x11aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aef0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x11aef0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11aef4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x11aef4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11aef8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x11aef8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x11aefc: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x11aefcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x11af00: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x11af00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x11af04: 0xe6040014  swc1        $f4, 0x14($s0)
    ctx->pc = 0x11af04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x11af08: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x11AF08u;
    SET_GPR_U32(ctx, 31, 0x11AF10u);
    ctx->pc = 0x11AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF08u;
    // 0x11af0c: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x11AF08u, 0x11AF10u)) {
        return;
    }
    ctx->pc = 0x11AF10u;
label_11af10:
    // 0x11af10: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x11af10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_11af14:
    // 0x11af14: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x11af14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11af18: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x11af18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11af1c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11af20: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x11af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11af24: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x11af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11af28: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x11af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11af2c: 0x3e00008  jr          $ra
    ctx->pc = 0x11AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF2Cu;
        // 0x11af30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AF34u;
    // 0x11af34: 0x0  nop
    ctx->pc = 0x11af34u;
    // NOP
    ctx->pc = 0x11af38u;
}
