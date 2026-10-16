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

// Function: sub_001EF3D0
// Address: 0x1ef3d0 - 0x1ef500
void sub_001EF3D0_0x1ef3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF3D0_0x1ef3d0");
#endif

    switch (ctx->pc) {
        case 0x1ef40cu: goto label_1ef40c;
        case 0x1ef420u: goto label_1ef420;
        case 0x1ef494u: goto label_1ef494;
        case 0x1ef4d4u: goto label_1ef4d4;
        case 0x1ef4ecu: goto label_1ef4ec;
        default: break;
    }

    ctx->pc = 0x1ef3d0u;

    // 0x1ef3d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ef3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ef3d4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ef3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ef3d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ef3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ef3dc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1ef3dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ef3e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3e4: 0x8c43e850  lw          $v1, -0x17B0($v0)
    ctx->pc = 0x1ef3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E850u));
    // 0x1ef3e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ef3e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1ef3ec: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EF3ECu;
    {
        const bool branch_taken_0x1ef3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3ECu;
        // 0x1ef3f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3ec) {
            ctx->pc = 0x1EF4ECu;
            goto label_1ef4ec;
        }
    }
    ctx->pc = 0x1EF3F4u;
    // 0x1ef3f4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ef3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ef3f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF3F8u;
    {
        const bool branch_taken_0x1ef3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3f8) {
            ctx->pc = 0x1EF3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF3F8u;
            // 0x1ef3fc: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF410u;
            goto label_1ef410;
        }
    }
    ctx->pc = 0x1EF400u;
    // 0x1ef400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef404: 0xc07bfa6  jal         func_1EFE98
    ctx->pc = 0x1EF404u;
    SET_GPR_U32(ctx, 31, 0x1EF40Cu);
    ctx->pc = 0x1EF408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF404u;
    // 0x1ef408: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFE98u, 0x1EF404u, 0x1EF40Cu)) {
        return;
    }
    ctx->pc = 0x1EF40Cu;
label_1ef40c:
    // 0x1ef40c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ef40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1ef410:
    // 0x1ef410: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF410u;
    {
        const bool branch_taken_0x1ef410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF410u;
        // 0x1ef414: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef410) {
            ctx->pc = 0x1EF424u;
            goto label_1ef424;
        }
    }
    ctx->pc = 0x1EF418u;
    // 0x1ef418: 0xc075d54  jal         func_1D7550
    ctx->pc = 0x1EF418u;
    SET_GPR_U32(ctx, 31, 0x1EF420u);
    ctx->pc = 0x1D7550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7550u, 0x1EF418u, 0x1EF420u)) {
        return;
    }
    ctx->pc = 0x1EF420u;
label_1ef420:
    // 0x1ef420: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ef420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef424:
    // 0x1ef424: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EF424u;
    {
        const bool branch_taken_0x1ef424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef424) {
            ctx->pc = 0x1EF428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF424u;
            // 0x1ef428: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF4C0u;
            goto label_1ef4c0;
        }
    }
    ctx->pc = 0x1EF42Cu;
    // 0x1ef42c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1ef42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef430: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ef430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef434: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ef434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ef438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef43c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ef43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ef440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ef440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef444: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ef444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef448: 0x0  nop
    ctx->pc = 0x1ef448u;
    // NOP
    // 0x1ef44c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF44Cu;
    {
        const bool branch_taken_0x1ef44c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF44Cu;
        // 0x1ef450: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef44c) {
            ctx->pc = 0x1EF49Cu;
            goto label_1ef49c;
        }
    }
    ctx->pc = 0x1EF454u;
    // 0x1ef454: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1ef454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1ef458: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x1ef458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1ef45c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EF45Cu;
    {
        const bool branch_taken_0x1ef45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF45Cu;
        // 0x1ef460: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef45c) {
            ctx->pc = 0x1EF4BCu;
            goto label_1ef4bc;
        }
    }
    ctx->pc = 0x1EF464u;
    // 0x1ef464: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1ef464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1ef468: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ef468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ef46c: 0x8c45f8c0  lw          $a1, -0x740($v0)
    ctx->pc = 0x1ef46cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BF8C0u));
    // 0x1ef470: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1ef474: 0x50a30011  beql        $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EF474u;
    {
        const bool branch_taken_0x1ef474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef474) {
            ctx->pc = 0x1EF478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF474u;
            // 0x1ef478: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF4BCu;
            goto label_1ef4bc;
        }
    }
    ctx->pc = 0x1EF47Cu;
    // 0x1ef47c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ef47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef480: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF480u;
    {
        const bool branch_taken_0x1ef480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF480u;
        // 0x1ef484: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef480) {
            ctx->pc = 0x1EF494u;
            goto label_1ef494;
        }
    }
    ctx->pc = 0x1EF488u;
    // 0x1ef488: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1ef488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1ef48c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1EF48Cu;
    SET_GPR_U32(ctx, 31, 0x1EF494u);
    ctx->pc = 0x1EF490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF48Cu;
    // 0x1ef490: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1EF48Cu, 0x1EF494u)) {
        return;
    }
    ctx->pc = 0x1EF494u;
label_1ef494:
    // 0x1ef494: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF494u;
    {
        const bool branch_taken_0x1ef494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF494u;
        // 0x1ef498: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef494) {
            ctx->pc = 0x1EF4BCu;
            goto label_1ef4bc;
        }
    }
    ctx->pc = 0x1EF49Cu;
label_1ef49c:
    // 0x1ef49c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ef49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef4a0: 0x0  nop
    ctx->pc = 0x1ef4a0u;
    // NOP
    // 0x1ef4a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ef4a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef4a8: 0x0  nop
    ctx->pc = 0x1ef4a8u;
    // NOP
    // 0x1ef4ac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF4ACu;
    {
        const bool branch_taken_0x1ef4ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef4ac) {
            ctx->pc = 0x1EF4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF4ACu;
            // 0x1ef4b0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF4C0u;
            goto label_1ef4c0;
        }
    }
    ctx->pc = 0x1EF4B4u;
    // 0x1ef4b4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1ef4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1ef4b8: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ef4b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1ef4bc:
    // 0x1ef4bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1ef4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ef4c0:
    // 0x1ef4c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF4C0u;
    {
        const bool branch_taken_0x1ef4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef4c0) {
            ctx->pc = 0x1EF4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF4C0u;
            // 0x1ef4c4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF4D8u;
            goto label_1ef4d8;
        }
    }
    ctx->pc = 0x1EF4C8u;
    // 0x1ef4c8: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x1ef4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef4cc: 0xc07bd40  jal         func_1EF500
    ctx->pc = 0x1EF4CCu;
    SET_GPR_U32(ctx, 31, 0x1EF4D4u);
    ctx->pc = 0x1EF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF4CCu;
    // 0x1ef4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF500u, 0x1EF4CCu, 0x1EF4D4u)) {
        return;
    }
    ctx->pc = 0x1EF4D4u;
label_1ef4d4:
    // 0x1ef4d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ef4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ef4d8:
    // 0x1ef4d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF4D8u;
    {
        const bool branch_taken_0x1ef4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef4d8) {
            ctx->pc = 0x1EF4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF4D8u;
            // 0x1ef4dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF4F0u;
            goto label_1ef4f0;
        }
    }
    ctx->pc = 0x1EF4E0u;
    // 0x1ef4e0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ef4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ef4e4: 0xc07bfc4  jal         func_1EFF10
    ctx->pc = 0x1EF4E4u;
    SET_GPR_U32(ctx, 31, 0x1EF4ECu);
    ctx->pc = 0x1EF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF4E4u;
    // 0x1ef4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFF10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFF10u, 0x1EF4E4u, 0x1EF4ECu)) {
        return;
    }
    ctx->pc = 0x1EF4ECu;
label_1ef4ec:
    // 0x1ef4ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ef4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef4f0:
    // 0x1ef4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef4f4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1ef4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ef4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4F8u;
        // 0x1ef4fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF500u;
}
