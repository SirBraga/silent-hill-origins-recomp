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

// Function: sub_0024B710
// Address: 0x24b710 - 0x24b8c8
void sub_0024B710_0x24b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B710_0x24b710");
#endif

    switch (ctx->pc) {
        case 0x24b868u: goto label_24b868;
        case 0x24b8a0u: goto label_24b8a0;
        case 0x24b8acu: goto label_24b8ac;
        default: break;
    }

    ctx->pc = 0x24b710u;

    // 0x24b710: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x24b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x24b714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b718: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x24b718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x24b71c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x24b71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x24b720: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x24b720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x24b724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b728: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x24b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b72c: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x24b72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24b730: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x24b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b734: 0x460529c2  mul.s       $f7, $f5, $f5
    ctx->pc = 0x24b734u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x24b738: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x24b738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x24b73c: 0x46042182  mul.s       $f6, $f4, $f4
    ctx->pc = 0x24b73cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x24b740: 0x460749c1  sub.s       $f7, $f9, $f7
    ctx->pc = 0x24b740u;
    ctx->f[7] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x24b744: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x24b744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x24b748: 0x46064981  sub.s       $f6, $f9, $f6
    ctx->pc = 0x24b748u;
    ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x24b74c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x24b74cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x24b750: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x24b750u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x24b754: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24b754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24b758: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x24b758u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x24b75c: 0xe7a60084  swc1        $f6, 0x84($sp)
    ctx->pc = 0x24b75cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24b760: 0xe7a70088  swc1        $f7, 0x88($sp)
    ctx->pc = 0x24b760u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24b764: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24b764u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24b768: 0x46082882  mul.s       $f2, $f5, $f8
    ctx->pc = 0x24b768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x24b76c: 0x46044042  mul.s       $f1, $f8, $f4
    ctx->pc = 0x24b76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x24b770: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x24b770u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x24b774: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x24b774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x24b778: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x24b778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x24b77c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x24b77cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x24b780: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x24b780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x24b784: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x24b784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x24b788: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x24b788u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x24b78c: 0x460d2942  mul.s       $f5, $f5, $f13
    ctx->pc = 0x24b78cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x24b790: 0xe7a80090  swc1        $f8, 0x90($sp)
    ctx->pc = 0x24b790u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24b794: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x24b794u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x24b798: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x24b798u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24b79c: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x24b79cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24b7a0: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x24b7a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x24b7a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b7a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b7ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24b7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24b7b0: 0x46050a81  sub.s       $f10, $f1, $f5
    ctx->pc = 0x24b7b0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x24b7b4: 0x460412c0  add.s       $f11, $f2, $f4
    ctx->pc = 0x24b7b4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x24b7b8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x24b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x24b7bc: 0x46081801  sub.s       $f0, $f3, $f8
    ctx->pc = 0x24b7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x24b7c0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x24b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x24b7c4: 0x460749c1  sub.s       $f7, $f9, $f7
    ctx->pc = 0x24b7c4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x24b7c8: 0xe7aa0010  swc1        $f10, 0x10($sp)
    ctx->pc = 0x24b7c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24b7cc: 0x46064a41  sub.s       $f9, $f9, $f6
    ctx->pc = 0x24b7ccu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x24b7d0: 0xe7ab0020  swc1        $f11, 0x20($sp)
    ctx->pc = 0x24b7d0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24b7d4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x24b7d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x24b7d8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24b7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24b7dc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x24b7dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x24b7e0: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x24b7e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24b7e4: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x24b7e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x24b7e8: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x24b7e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24b7ec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24b7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24b7f0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24b7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24b7f4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x24b7f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24b7f8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x24b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x24b7fc: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24B7FCu;
    {
        const bool branch_taken_0x24b7fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x24B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7FCu;
        // 0x24b800: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7fc) {
            ctx->pc = 0x24B844u;
            goto label_24b844;
        }
    }
    ctx->pc = 0x24B804u;
    // 0x24b804: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B804u;
    {
        const bool branch_taken_0x24b804 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B804u;
        // 0x24b808: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b804) {
            ctx->pc = 0x24B820u;
            goto label_24b820;
        }
    }
    ctx->pc = 0x24B80Cu;
    // 0x24b80c: 0x10c20011  beq         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24B80Cu;
    {
        const bool branch_taken_0x24b80c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B80Cu;
        // 0x24b810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b80c) {
            ctx->pc = 0x24B854u;
            goto label_24b854;
        }
    }
    ctx->pc = 0x24B814u;
    // 0x24b814: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x24B814u;
    {
        const bool branch_taken_0x24b814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B814u;
        // 0x24b818: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b814) {
            ctx->pc = 0x24B88Cu;
            goto label_24b88c;
        }
    }
    ctx->pc = 0x24B81Cu;
    // 0x24b81c: 0x0  nop
    ctx->pc = 0x24b81cu;
    // NOP
label_24b820:
    // 0x24b820: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x24b820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b824: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x24b824u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x24b828: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x24b828u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b82c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x24b82cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x24b830: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x24b830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b834: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x24b834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x24b838: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x24b838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b83c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24B83Cu;
    {
        const bool branch_taken_0x24b83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B83Cu;
        // 0x24b840: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b83c) {
            ctx->pc = 0x24B8B0u;
            goto label_24b8b0;
        }
    }
    ctx->pc = 0x24B844u;
label_24b844:
    // 0x24b844: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24b848: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24b848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b84c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B84Cu;
    {
        const bool branch_taken_0x24b84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B84Cu;
        // 0x24b850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b84c) {
            ctx->pc = 0x24B860u;
            goto label_24b860;
        }
    }
    ctx->pc = 0x24B854u;
label_24b854:
    // 0x24b854: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24b854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24b858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24b858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b85c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x24b85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24b860:
    // 0x24b860: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x24B860u;
    SET_GPR_U32(ctx, 31, 0x24B868u);
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x24B860u, 0x24B868u)) {
        return;
    }
    ctx->pc = 0x24B868u;
label_24b868:
    // 0x24b868: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x24b868u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b86c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x24b86cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x24b870: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x24b870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b874: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x24b874u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x24b878: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x24b878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b87c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x24b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x24b880: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x24b880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24b884: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24B884u;
    {
        const bool branch_taken_0x24b884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B884u;
        // 0x24b888: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b884) {
            ctx->pc = 0x24B8B0u;
            goto label_24b8b0;
        }
    }
    ctx->pc = 0x24B88Cu;
label_24b88c:
    // 0x24b88c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24b890: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24b890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24b894: 0x24a5b7a0  addiu       $a1, $a1, -0x4860
    ctx->pc = 0x24b894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948768));
    // 0x24b898: 0xc092848  jal         func_24A120
    ctx->pc = 0x24B898u;
    SET_GPR_U32(ctx, 31, 0x24B8A0u);
    ctx->pc = 0x24B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B898u;
    // 0x24b89c: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24B898u, 0x24B8A0u)) {
        return;
    }
    ctx->pc = 0x24B8A0u;
label_24b8a0:
    // 0x24b8a0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x24b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x24b8a4: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24B8A4u;
    SET_GPR_U32(ctx, 31, 0x24B8ACu);
    ctx->pc = 0x24B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8A4u;
    // 0x24b8a8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24B8A4u, 0x24B8ACu)) {
        return;
    }
    ctx->pc = 0x24B8ACu;
label_24b8ac:
    // 0x24b8ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24b8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b8b0:
    // 0x24b8b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24b8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8b4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x24b8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24b8b8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x24b8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24b8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x24B8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8BCu;
        // 0x24b8c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B8C4u;
    // 0x24b8c4: 0x0  nop
    ctx->pc = 0x24b8c4u;
    // NOP
    ctx->pc = 0x24b8c8u;
}
