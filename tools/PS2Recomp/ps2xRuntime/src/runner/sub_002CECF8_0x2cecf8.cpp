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

// Function: sub_002CECF8
// Address: 0x2cecf8 - 0x2cfda0
void sub_002CECF8_0x2cecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CECF8_0x2cecf8");
#endif

    switch (ctx->pc) {
        case 0x2ceec0u: goto label_2ceec0;
        case 0x2cf048u: goto label_2cf048;
        case 0x2cf1a8u: goto label_2cf1a8;
        case 0x2cf330u: goto label_2cf330;
        case 0x2cf5d0u: goto label_2cf5d0;
        case 0x2cf758u: goto label_2cf758;
        case 0x2cf8b8u: goto label_2cf8b8;
        case 0x2cfa40u: goto label_2cfa40;
        default: break;
    }

    ctx->pc = 0x2cecf8u;

    // 0x2cecf8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2cecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2cecfc: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x2cecfcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced00: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2ced00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2ced04: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2ced04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2ced08: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2ced08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced0c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2ced0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2ced10: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2ced10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2ced14: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2ced14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2ced18: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2ced18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2ced1c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ced1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ced20: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2ced20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2ced24: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x2ced24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ced28: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2ced28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ced2c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2ced2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2ced30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ced30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ced34: 0x8d2c0010  lw          $t4, 0x10($t1)
    ctx->pc = 0x2ced34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2ced38: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x2ced38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ced3c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2ced3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2ced40: 0x8c680040  lw          $t0, 0x40($v1)
    ctx->pc = 0x2ced40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2ced44: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x2ced44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ced48: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x2ced48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ced4c: 0x460030c7  neg.s       $f3, $f6
    ctx->pc = 0x2ced4cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[6]);
    // 0x2ced50: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x2ced50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ced54: 0x46004107  neg.s       $f4, $f8
    ctx->pc = 0x2ced54u;
    ctx->f[4] = FPU_NEG_S(ctx->f[8]);
    // 0x2ced58: 0x46003947  neg.s       $f5, $f7
    ctx->pc = 0x2ced58u;
    ctx->f[5] = FPU_NEG_S(ctx->f[7]);
    // 0x2ced5c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2ced5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ced60: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2ced60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ced64: 0x18c001c5  blez        $a2, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x2CED64u;
    {
        const bool branch_taken_0x2ced64 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2CED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED64u;
        // 0x2ced68: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced64) {
            ctx->pc = 0x2CF47Cu;
            goto label_2cf47c;
        }
    }
    ctx->pc = 0x2CED6Cu;
    // 0x2ced6c: 0x1160001c  beqz        $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CED6Cu;
    {
        const bool branch_taken_0x2ced6c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced6c) {
            ctx->pc = 0x2CEDE0u;
            goto label_2cede0;
        }
    }
    ctx->pc = 0x2CED74u;
    // 0x2ced74: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2ced74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ced78: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x2ced78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ced7c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2ced7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2ced80: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x2ced80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ced84: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2ced84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2ced88: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2ced88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2ced8c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ced8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ced90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ced90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ced94: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2ced94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ced98: 0xc5610010  lwc1        $f1, 0x10($t3)
    ctx->pc = 0x2ced98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ced9c: 0xc5620014  lwc1        $f2, 0x14($t3)
    ctx->pc = 0x2ced9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ceda0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2ceda0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2ceda4: 0xc5600018  lwc1        $f0, 0x18($t3)
    ctx->pc = 0x2ceda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ceda8: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2ceda8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2cedac: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2cedacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cedb0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cedb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cedb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cedb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cedb8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2cedb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2cedbc: 0xc5600020  lwc1        $f0, 0x20($t3)
    ctx->pc = 0x2cedbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cedc0: 0xc5620024  lwc1        $f2, 0x24($t3)
    ctx->pc = 0x2cedc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cedc4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2cedc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2cedc8: 0xc5610028  lwc1        $f1, 0x28($t3)
    ctx->pc = 0x2cedc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cedcc: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2cedccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2cedd0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2cedd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2cedd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cedd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cedd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cedd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ceddc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2ceddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2cede0:
    // 0x2cede0: 0x1180001f  beqz        $t4, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CEDE0u;
    {
        const bool branch_taken_0x2cede0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEDE0u;
        // 0x2cede4: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cede0) {
            ctx->pc = 0x2CEE60u;
            goto label_2cee60;
        }
    }
    ctx->pc = 0x2CEDE8u;
    // 0x2cede8: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x2cede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cedec: 0xc5820004  lwc1        $f2, 0x4($t4)
    ctx->pc = 0x2cedecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cedf0: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2cedf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cedf4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2cedf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cedf8: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x2cedf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cedfc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cedfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cee00: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2cee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cee04: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2cee04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2cee08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cee08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cee0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cee0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cee10: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2cee10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cee14: 0xc5800010  lwc1        $f0, 0x10($t4)
    ctx->pc = 0x2cee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cee18: 0xc5820014  lwc1        $f2, 0x14($t4)
    ctx->pc = 0x2cee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cee1c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2cee1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cee20: 0xc5810018  lwc1        $f1, 0x18($t4)
    ctx->pc = 0x2cee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cee24: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cee24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cee28: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2cee28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2cee2c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cee2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cee30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cee30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cee34: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cee38: 0xc5810020  lwc1        $f1, 0x20($t4)
    ctx->pc = 0x2cee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cee3c: 0xc5820024  lwc1        $f2, 0x24($t4)
    ctx->pc = 0x2cee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cee40: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cee40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cee44: 0xc5800028  lwc1        $f0, 0x28($t4)
    ctx->pc = 0x2cee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cee48: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cee48u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cee4c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2cee4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2cee50: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2cee50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2cee54: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2cee54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2cee58: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2cee58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cee5c: 0x0  nop
    ctx->pc = 0x2cee5cu;
    // NOP
label_2cee60:
    // 0x2cee60: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x2cee60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cee64: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2cee64u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee68: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x2cee68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2cee6c: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x2cee6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cee70: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x2cee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2cee74: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x2cee74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee78: 0xc7a90018  lwc1        $f9, 0x18($sp)
    ctx->pc = 0x2cee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2cee7c: 0x46006c06  mov.s       $f16, $f13
    ctx->pc = 0x2cee7cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x2cee80: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x2cee80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cee84: 0x46005bc6  mov.s       $f15, $f11
    ctx->pc = 0x2cee84u;
    ctx->f[15] = FPU_MOV_S(ctx->f[11]);
    // 0x2cee88: 0x8c530018  lw          $s3, 0x18($v0)
    ctx->pc = 0x2cee88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2cee8c: 0x46004b86  mov.s       $f14, $f9
    ctx->pc = 0x2cee8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[9]);
    // 0x2cee90: 0x8c4d0014  lw          $t5, 0x14($v0)
    ctx->pc = 0x2cee90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cee94: 0xc5710000  lwc1        $f17, 0x0($t3)
    ctx->pc = 0x2cee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2cee98: 0xc5720010  lwc1        $f18, 0x10($t3)
    ctx->pc = 0x2cee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2cee9c: 0xc5730020  lwc1        $f19, 0x20($t3)
    ctx->pc = 0x2cee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2ceea0: 0x8d0e0004  lw          $t6, 0x4($t0)
    ctx->pc = 0x2ceea0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2ceea4: 0x8d120018  lw          $s2, 0x18($t0)
    ctx->pc = 0x2ceea4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2ceea8: 0x8d0f0014  lw          $t7, 0x14($t0)
    ctx->pc = 0x2ceea8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2ceeac: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2ceeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ceeb0: 0xc7aa0024  lwc1        $f10, 0x24($sp)
    ctx->pc = 0x2ceeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2ceeb4: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x2ceeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ceeb8: 0x8d110008  lw          $s1, 0x8($t0)
    ctx->pc = 0x2ceeb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2ceebc: 0x0  nop
    ctx->pc = 0x2ceebcu;
    // NOP
label_2ceec0:
    // 0x2ceec0: 0x3361018  mult        $v0, $t9, $s6
    ctx->pc = 0x2ceec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ceec4: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x2ceec4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceec8: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x2ceec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2ceecc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ceeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ceed0: 0x191040  sll         $v0, $t9, 1
    ctx->pc = 0x2ceed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x2ceed4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2ceed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ceed8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ceed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ceedc: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x2ceedcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x2ceee0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ceee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ceee4: 0x46027882  mul.s       $f2, $f15, $f2
    ctx->pc = 0x2ceee4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x2ceee8: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2ceee8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2ceeec: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x2ceeecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2ceef0: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x2ceef0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ceef4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ceef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ceef8: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2ceef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ceefc: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2CEEFCu;
    {
        const bool branch_taken_0x2ceefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEFCu;
        // 0x2cef00: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceefc) {
            ctx->pc = 0x2CF184u;
            goto label_2cf184;
        }
    }
    ctx->pc = 0x2CEF04u;
    // 0x2cef04: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2cef04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cef08: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2cef08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cef0c: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x2cef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cef10: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cef14: 0x71023  negu        $v0, $a3
    ctx->pc = 0x2cef14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2cef18: 0x460069c6  mov.s       $f7, $f13
    ctx->pc = 0x2cef18u;
    ctx->f[7] = FPU_MOV_S(ctx->f[13]);
    // 0x2cef1c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2cef1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cef20: 0x46005986  mov.s       $f6, $f11
    ctx->pc = 0x2cef20u;
    ctx->f[6] = FPU_MOV_S(ctx->f[11]);
    // 0x2cef24: 0x46004946  mov.s       $f5, $f9
    ctx->pc = 0x2cef24u;
    ctx->f[5] = FPU_MOV_S(ctx->f[9]);
    // 0x2cef28: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CEF28u;
    {
        const bool branch_taken_0x2cef28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF28u;
        // 0x2cef2c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef28) {
            ctx->pc = 0x2CF044u;
            goto label_2cf044;
        }
    }
    ctx->pc = 0x2CEF30u;
    // 0x2cef30: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2cef30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cef34: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CEF34u;
    {
        const bool branch_taken_0x2cef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF34u;
        // 0x2cef38: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef34) {
            ctx->pc = 0x2CEFECu;
            goto label_2cefec;
        }
    }
    ctx->pc = 0x2CEF3Cu;
    // 0x2cef3c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CEF3Cu;
    {
        const bool branch_taken_0x2cef3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef3c) {
            ctx->pc = 0x2CEF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEF3Cu;
            // 0x2cef40: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEF9Cu;
            goto label_2cef9c;
        }
    }
    ctx->pc = 0x2CEF44u;
    // 0x2cef44: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2cef44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cef48: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cef48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cef4c: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cef50: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cef50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cef54: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cef54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cef58: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cef5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cef60: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cef64: 0x46006902  mul.s       $f4, $f13, $f0
    ctx->pc = 0x2cef64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2cef68: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cef6c: 0x46035802  mul.s       $f0, $f11, $f3
    ctx->pc = 0x2cef6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x2cef70: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x2cef70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x2cef74: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cef74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cef78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cef78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cef7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cef7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cef80: 0x0  nop
    ctx->pc = 0x2cef80u;
    // NOP
    // 0x2cef84: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEF84u;
    {
        const bool branch_taken_0x2cef84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF84u;
        // 0x2cef88: 0x24660002  addiu       $a2, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef84) {
            ctx->pc = 0x2CEF94u;
            goto label_2cef94;
        }
    }
    ctx->pc = 0x2CEF8Cu;
    // 0x2cef8c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cef8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cef90: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cef90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cef94:
    // 0x2cef94: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2cef94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2cef98: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2cef98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2cef9c:
    // 0x2cef9c: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2cef9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cefa0: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x2cefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2cefa4: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cefa4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cefa8: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2cefa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cefac: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2cefacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2cefb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cefb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cefb4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cefb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cefb8: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cefb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cefbc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cefbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cefc0: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cefc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cefc4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cefc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cefc8: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cefc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cefcc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cefccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cefd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cefd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cefd4: 0x0  nop
    ctx->pc = 0x2cefd4u;
    // NOP
    // 0x2cefd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEFD8u;
    {
        const bool branch_taken_0x2cefd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFD8u;
        // 0x2cefdc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefd8) {
            ctx->pc = 0x2CEFE8u;
            goto label_2cefe8;
        }
    }
    ctx->pc = 0x2CEFE0u;
    // 0x2cefe0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cefe0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cefe4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cefe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cefe8:
    // 0x2cefe8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2cefe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2cefec:
    // 0x2cefec: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2cefecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ceff0: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2ceff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ceff4: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x2ceff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2ceff8: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2ceff8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ceffc: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2ceffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf000: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2cf000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2cf004: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf008: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf00c: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf00cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf010: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf014: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf018: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf01c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf020: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf028: 0x0  nop
    ctx->pc = 0x2cf028u;
    // NOP
    // 0x2cf02c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF02Cu;
    {
        const bool branch_taken_0x2cf02c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF02Cu;
        // 0x2cf030: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf02c) {
            ctx->pc = 0x2CF03Cu;
            goto label_2cf03c;
        }
    }
    ctx->pc = 0x2CF034u;
    // 0x2cf034: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf034u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf038: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf03c:
    // 0x2cf03c: 0x10e00051  beqz        $a3, . + 4 + (0x51 << 2)
    ctx->pc = 0x2CF03Cu;
    {
        const bool branch_taken_0x2cf03c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF03Cu;
        // 0x2cf040: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf03c) {
            ctx->pc = 0x2CF184u;
            goto label_2cf184;
        }
    }
    ctx->pc = 0x2CF044u;
label_2cf044:
    // 0x2cf044: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2cf044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cf048:
    // 0x2cf048: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2cf048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf04c: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf050: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf054: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf054u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf058: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf05c: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf060: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf064: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf068: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf068u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf06c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf070: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf074: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf074u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf078: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf07c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf080: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf084: 0x0  nop
    ctx->pc = 0x2cf084u;
    // NOP
    // 0x2cf088: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF088u;
    {
        const bool branch_taken_0x2cf088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF088u;
        // 0x2cf08c: 0x94620002  lhu         $v0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf088) {
            ctx->pc = 0x2CF098u;
            goto label_2cf098;
        }
    }
    ctx->pc = 0x2CF090u;
    // 0x2cf090: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf090u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf094: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf098:
    // 0x2cf098: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf09c: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf0a0: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf0a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf0a4: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf0a8: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf0ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf0b0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf0b4: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf0b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf0b8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf0bc: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf0c0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf0c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf0c4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf0c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf0cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf0ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf0d0: 0x0  nop
    ctx->pc = 0x2cf0d0u;
    // NOP
    // 0x2cf0d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF0D4u;
    {
        const bool branch_taken_0x2cf0d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0D4u;
        // 0x2cf0d8: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0d4) {
            ctx->pc = 0x2CF0E4u;
            goto label_2cf0e4;
        }
    }
    ctx->pc = 0x2CF0DCu;
    // 0x2cf0dc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf0dcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf0e0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf0e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf0e4:
    // 0x2cf0e4: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf0e8: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf0ec: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf0ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf0f0: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf0f4: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf0f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf0fc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf100: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf100u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf104: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf108: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf10c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf10cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf110: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf114: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf11c: 0x0  nop
    ctx->pc = 0x2cf11cu;
    // NOP
    // 0x2cf120: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF120u;
    {
        const bool branch_taken_0x2cf120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF120u;
        // 0x2cf124: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf120) {
            ctx->pc = 0x2CF130u;
            goto label_2cf130;
        }
    }
    ctx->pc = 0x2CF128u;
    // 0x2cf128: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf128u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf12c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf12cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf130:
    // 0x2cf130: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf134: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf138: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf138u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf13c: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf140: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf144: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf148: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf14c: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf14cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf150: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf154: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf158: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf158u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf15c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf160: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf164: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf168: 0x0  nop
    ctx->pc = 0x2cf168u;
    // NOP
    // 0x2cf16c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF16Cu;
    {
        const bool branch_taken_0x2cf16c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF16Cu;
        // 0x2cf170: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf16c) {
            ctx->pc = 0x2CF17Cu;
            goto label_2cf17c;
        }
    }
    ctx->pc = 0x2CF174u;
    // 0x2cf174: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf174u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf178: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf17c:
    // 0x2cf17c: 0x14e0ffb2  bnez        $a3, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2CF17Cu;
    {
        const bool branch_taken_0x2cf17c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF17Cu;
        // 0x2cf180: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf17c) {
            ctx->pc = 0x2CF048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf048;
        }
    }
    ctx->pc = 0x2CF184u;
label_2cf184:
    // 0x2cf184: 0x51590003  beql        $t2, $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF184u;
    {
        const bool branch_taken_0x2cf184 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 25));
        if (branch_taken_0x2cf184) {
            ctx->pc = 0x2CF188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF184u;
            // 0x2cf188: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF194u;
            goto label_2cf194;
        }
    }
    ctx->pc = 0x2CF18Cu;
    // 0x2cf18c: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x2CF18Cu;
    {
        const bool branch_taken_0x2cf18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF18Cu;
        // 0x2cf190: 0x140c82d  daddu       $t9, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf18c) {
            ctx->pc = 0x2CEEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ceec0;
        }
    }
    ctx->pc = 0x2CF194u;
label_2cf194:
    // 0x2cf194: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x2cf194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cf198: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cf198u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2cf19c: 0x460052c6  mov.s       $f11, $f10
    ctx->pc = 0x2cf19cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[10]);
    // 0x2cf1a0: 0x46004246  mov.s       $f9, $f8
    ctx->pc = 0x2cf1a0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[8]);
    // 0x2cf1a4: 0x0  nop
    ctx->pc = 0x2cf1a4u;
    // NOP
label_2cf1a8:
    // 0x2cf1a8: 0x1b31018  mult        $v0, $t5, $s3
    ctx->pc = 0x2cf1a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cf1ac: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x2cf1acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1b0: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x2cf1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2cf1b4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2cf1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf1b8: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x2cf1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2cf1bc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2cf1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf1c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2cf1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2cf1c4: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x2cf1c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2cf1c8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2cf1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf1cc: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x2cf1ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x2cf1d0: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2cf1d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2cf1d4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2cf1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2cf1d8: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x2cf1d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf1dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cf1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cf1e0: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2cf1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cf1e4: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2CF1E4u;
    {
        const bool branch_taken_0x2cf1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1E4u;
        // 0x2cf1e8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf1e4) {
            ctx->pc = 0x2CF46Cu;
            goto label_2cf46c;
        }
    }
    ctx->pc = 0x2CF1ECu;
    // 0x2cf1ec: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2cf1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cf1f0: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2cf1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cf1f4: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x2cf1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cf1f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2cf1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cf1fc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x2cf1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2cf200: 0x460061c6  mov.s       $f7, $f12
    ctx->pc = 0x2cf200u;
    ctx->f[7] = FPU_MOV_S(ctx->f[12]);
    // 0x2cf204: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2cf204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cf208: 0x46005186  mov.s       $f6, $f10
    ctx->pc = 0x2cf208u;
    ctx->f[6] = FPU_MOV_S(ctx->f[10]);
    // 0x2cf20c: 0x46004146  mov.s       $f5, $f8
    ctx->pc = 0x2cf20cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[8]);
    // 0x2cf210: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CF210u;
    {
        const bool branch_taken_0x2cf210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF210u;
        // 0x2cf214: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf210) {
            ctx->pc = 0x2CF32Cu;
            goto label_2cf32c;
        }
    }
    ctx->pc = 0x2CF218u;
    // 0x2cf218: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2cf218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cf21c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CF21Cu;
    {
        const bool branch_taken_0x2cf21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF21Cu;
        // 0x2cf220: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf21c) {
            ctx->pc = 0x2CF2D4u;
            goto label_2cf2d4;
        }
    }
    ctx->pc = 0x2CF224u;
    // 0x2cf224: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CF224u;
    {
        const bool branch_taken_0x2cf224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf224) {
            ctx->pc = 0x2CF228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF224u;
            // 0x2cf228: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF284u;
            goto label_2cf284;
        }
    }
    ctx->pc = 0x2CF22Cu;
    // 0x2cf22c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2cf22cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf230: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf234: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cf234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cf238: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf238u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf23c: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf23cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf240: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cf240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cf244: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf248: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf24c: 0x46006102  mul.s       $f4, $f12, $f0
    ctx->pc = 0x2cf24cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2cf250: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf254: 0x46035002  mul.s       $f0, $f10, $f3
    ctx->pc = 0x2cf254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2cf258: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2cf258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2cf25c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf260: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf268: 0x0  nop
    ctx->pc = 0x2cf268u;
    // NOP
    // 0x2cf26c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF26Cu;
    {
        const bool branch_taken_0x2cf26c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF26Cu;
        // 0x2cf270: 0x24660002  addiu       $a2, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf26c) {
            ctx->pc = 0x2CF27Cu;
            goto label_2cf27c;
        }
    }
    ctx->pc = 0x2CF274u;
    // 0x2cf274: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf274u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf278: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf27c:
    // 0x2cf27c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2cf27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2cf280: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2cf280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf284:
    // 0x2cf284: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2cf284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf288: 0x6f1021  addu        $v0, $v1, $t7
    ctx->pc = 0x2cf288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2cf28c: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf28cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf290: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2cf290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf294: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x2cf294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2cf298: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf29c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf2a0: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf2a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf2a4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf2a8: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf2a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf2ac: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf2acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf2b0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf2b4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf2b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf2b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf2bc: 0x0  nop
    ctx->pc = 0x2cf2bcu;
    // NOP
    // 0x2cf2c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF2C0u;
    {
        const bool branch_taken_0x2cf2c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2C0u;
        // 0x2cf2c4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf2c0) {
            ctx->pc = 0x2CF2D0u;
            goto label_2cf2d0;
        }
    }
    ctx->pc = 0x2CF2C8u;
    // 0x2cf2c8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf2c8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf2cc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf2ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf2d0:
    // 0x2cf2d0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2cf2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2cf2d4:
    // 0x2cf2d4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2cf2d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf2d8: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2cf2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf2dc: 0x6f1021  addu        $v0, $v1, $t7
    ctx->pc = 0x2cf2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2cf2e0: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf2e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf2e4: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2cf2e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf2e8: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x2cf2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2cf2ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf2f0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf2f4: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf2f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf2f8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf2fc: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf2fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf300: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf304: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf308: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf30c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf310: 0x0  nop
    ctx->pc = 0x2cf310u;
    // NOP
    // 0x2cf314: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF314u;
    {
        const bool branch_taken_0x2cf314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF314u;
        // 0x2cf318: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf314) {
            ctx->pc = 0x2CF324u;
            goto label_2cf324;
        }
    }
    ctx->pc = 0x2CF31Cu;
    // 0x2cf31c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf31cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf320: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf324:
    // 0x2cf324: 0x10e00051  beqz        $a3, . + 4 + (0x51 << 2)
    ctx->pc = 0x2CF324u;
    {
        const bool branch_taken_0x2cf324 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF324u;
        // 0x2cf328: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf324) {
            ctx->pc = 0x2CF46Cu;
            goto label_2cf46c;
        }
    }
    ctx->pc = 0x2CF32Cu;
label_2cf32c:
    // 0x2cf32c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2cf32cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cf330:
    // 0x2cf330: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2cf330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf334: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf338: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cf338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cf33c: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf33cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf340: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf344: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cf344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cf348: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf34c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf350: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf350u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf354: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf358: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf35c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf35cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf360: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf364: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf36c: 0x0  nop
    ctx->pc = 0x2cf36cu;
    // NOP
    // 0x2cf370: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF370u;
    {
        const bool branch_taken_0x2cf370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF370u;
        // 0x2cf374: 0x94620002  lhu         $v0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf370) {
            ctx->pc = 0x2CF380u;
            goto label_2cf380;
        }
    }
    ctx->pc = 0x2CF378u;
    // 0x2cf378: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf378u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf37c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf37cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf380:
    // 0x2cf380: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf384: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cf384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cf388: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf388u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf38c: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf390: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cf390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cf394: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf398: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf39c: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf39cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf3a0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf3a4: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf3a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf3a8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf3a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf3ac: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf3acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf3b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf3b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf3b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf3b8: 0x0  nop
    ctx->pc = 0x2cf3b8u;
    // NOP
    // 0x2cf3bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF3BCu;
    {
        const bool branch_taken_0x2cf3bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3BCu;
        // 0x2cf3c0: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3bc) {
            ctx->pc = 0x2CF3CCu;
            goto label_2cf3cc;
        }
    }
    ctx->pc = 0x2CF3C4u;
    // 0x2cf3c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf3c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf3c8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf3c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf3cc:
    // 0x2cf3cc: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf3d0: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cf3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cf3d4: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf3d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf3d8: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf3dc: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cf3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cf3e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf3e4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf3e8: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf3e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf3ec: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf3f0: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf3f4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf3f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf3f8: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf3f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf3fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf3fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf404: 0x0  nop
    ctx->pc = 0x2cf404u;
    // NOP
    // 0x2cf408: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF408u;
    {
        const bool branch_taken_0x2cf408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF408u;
        // 0x2cf40c: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf408) {
            ctx->pc = 0x2CF418u;
            goto label_2cf418;
        }
    }
    ctx->pc = 0x2CF410u;
    // 0x2cf410: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf410u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf414: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf414u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf418:
    // 0x2cf418: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf41c: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cf41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cf420: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf420u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf424: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf428: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cf428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cf42c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf430: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf434: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf434u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf438: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf43c: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf440: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf440u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf444: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf448: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf450: 0x0  nop
    ctx->pc = 0x2cf450u;
    // NOP
    // 0x2cf454: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF454u;
    {
        const bool branch_taken_0x2cf454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF454u;
        // 0x2cf458: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf454) {
            ctx->pc = 0x2CF464u;
            goto label_2cf464;
        }
    }
    ctx->pc = 0x2CF45Cu;
    // 0x2cf45c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf45cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf460: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf464:
    // 0x2cf464: 0x14e0ffb2  bnez        $a3, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2CF464u;
    {
        const bool branch_taken_0x2cf464 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF464u;
        // 0x2cf468: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf464) {
            ctx->pc = 0x2CF330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf330;
        }
    }
    ctx->pc = 0x2CF46Cu;
label_2cf46c:
    // 0x2cf46c: 0x114d01c8  beq         $t2, $t5, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x2CF46Cu;
    {
        const bool branch_taken_0x2cf46c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x2CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF46Cu;
        // 0x2cf470: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf46c) {
            ctx->pc = 0x2CFB90u;
            goto label_2cfb90;
        }
    }
    ctx->pc = 0x2CF474u;
    // 0x2cf474: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x2CF474u;
    {
        const bool branch_taken_0x2cf474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF474u;
        // 0x2cf478: 0x140682d  daddu       $t5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf474) {
            ctx->pc = 0x2CF1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf1a8;
        }
    }
    ctx->pc = 0x2CF47Cu;
label_2cf47c:
    // 0x2cf47c: 0x1160001c  beqz        $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CF47Cu;
    {
        const bool branch_taken_0x2cf47c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf47c) {
            ctx->pc = 0x2CF4F0u;
            goto label_2cf4f0;
        }
    }
    ctx->pc = 0x2CF484u;
    // 0x2cf484: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2cf484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf488: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x2cf488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf48c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2cf48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cf490: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x2cf490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf494: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2cf494u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2cf498: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2cf498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2cf49c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf49cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf4a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cf4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cf4a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cf4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cf4a8: 0xc5610010  lwc1        $f1, 0x10($t3)
    ctx->pc = 0x2cf4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf4ac: 0xc5620014  lwc1        $f2, 0x14($t3)
    ctx->pc = 0x2cf4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf4b0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2cf4b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cf4b4: 0xc5600018  lwc1        $f0, 0x18($t3)
    ctx->pc = 0x2cf4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf4b8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2cf4b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2cf4bc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2cf4bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2cf4c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cf4c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cf4c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cf4c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cf4c8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2cf4c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cf4cc: 0xc5600020  lwc1        $f0, 0x20($t3)
    ctx->pc = 0x2cf4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf4d0: 0xc5620024  lwc1        $f2, 0x24($t3)
    ctx->pc = 0x2cf4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf4d4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2cf4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cf4d8: 0xc5610028  lwc1        $f1, 0x28($t3)
    ctx->pc = 0x2cf4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf4dc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2cf4dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2cf4e0: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2cf4e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2cf4e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf4e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cf4e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cf4ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cf4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2cf4f0:
    // 0x2cf4f0: 0x51800021  beql        $t4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CF4F0u;
    {
        const bool branch_taken_0x2cf4f0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4f0) {
            ctx->pc = 0x2CF4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF4F0u;
            // 0x2cf4f4: 0x8c570004  lw          $s7, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF578u;
            goto label_2cf578;
        }
    }
    ctx->pc = 0x2CF4F8u;
    // 0x2cf4f8: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2cf4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cf4fc: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x2cf4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf500: 0xc5820004  lwc1        $f2, 0x4($t4)
    ctx->pc = 0x2cf500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf504: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2cf504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf508: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf50c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2cf50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cf510: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2cf510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cf514: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x2cf514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf518: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2cf518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2cf51c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cf51cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cf520: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cf520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cf524: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2cf524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cf528: 0xc5800010  lwc1        $f0, 0x10($t4)
    ctx->pc = 0x2cf528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf52c: 0xc5820014  lwc1        $f2, 0x14($t4)
    ctx->pc = 0x2cf52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf530: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2cf530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cf534: 0xc5810018  lwc1        $f1, 0x18($t4)
    ctx->pc = 0x2cf534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf538: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf53c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2cf53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2cf540: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cf544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cf548: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2cf548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2cf54c: 0xc5810020  lwc1        $f1, 0x20($t4)
    ctx->pc = 0x2cf54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf550: 0xc5820024  lwc1        $f2, 0x24($t4)
    ctx->pc = 0x2cf550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf554: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cf554u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cf558: 0xc5800028  lwc1        $f0, 0x28($t4)
    ctx->pc = 0x2cf558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf55c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cf55cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf560: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2cf560u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2cf564: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2cf564u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2cf568: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2cf568u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2cf56c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2cf56cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cf570: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x2cf570u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cf574: 0x0  nop
    ctx->pc = 0x2cf574u;
    // NOP
label_2cf578:
    // 0x2cf578: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2cf578u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf57c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2cf57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cf580: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x2cf580u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cf584: 0xc7aa0024  lwc1        $f10, 0x24($sp)
    ctx->pc = 0x2cf584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2cf588: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x2cf588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf58c: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x2cf58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2cf590: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x2cf590u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x2cf594: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x2cf594u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cf598: 0x460053c6  mov.s       $f15, $f10
    ctx->pc = 0x2cf598u;
    ctx->f[15] = FPU_MOV_S(ctx->f[10]);
    // 0x2cf59c: 0x8c530018  lw          $s3, 0x18($v0)
    ctx->pc = 0x2cf59cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2cf5a0: 0x46004386  mov.s       $f14, $f8
    ctx->pc = 0x2cf5a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[8]);
    // 0x2cf5a4: 0x8c4d0014  lw          $t5, 0x14($v0)
    ctx->pc = 0x2cf5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cf5a8: 0xc5710000  lwc1        $f17, 0x0($t3)
    ctx->pc = 0x2cf5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2cf5ac: 0xc5720010  lwc1        $f18, 0x10($t3)
    ctx->pc = 0x2cf5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2cf5b0: 0xc5730020  lwc1        $f19, 0x20($t3)
    ctx->pc = 0x2cf5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2cf5b4: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x2cf5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2cf5b8: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x2cf5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2cf5bc: 0xc7a90018  lwc1        $f9, 0x18($sp)
    ctx->pc = 0x2cf5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2cf5c0: 0x8d0e0004  lw          $t6, 0x4($t0)
    ctx->pc = 0x2cf5c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2cf5c4: 0x8d120018  lw          $s2, 0x18($t0)
    ctx->pc = 0x2cf5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2cf5c8: 0x8d0f0014  lw          $t7, 0x14($t0)
    ctx->pc = 0x2cf5c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2cf5cc: 0x8d110008  lw          $s1, 0x8($t0)
    ctx->pc = 0x2cf5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2cf5d0:
    // 0x2cf5d0: 0x3361018  mult        $v0, $t9, $s6
    ctx->pc = 0x2cf5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cf5d4: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x2cf5d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5d8: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x2cf5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2cf5dc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2cf5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf5e0: 0x191040  sll         $v0, $t9, 1
    ctx->pc = 0x2cf5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x2cf5e4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2cf5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf5e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2cf5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2cf5ec: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x2cf5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x2cf5f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2cf5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf5f4: 0x46027882  mul.s       $f2, $f15, $f2
    ctx->pc = 0x2cf5f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x2cf5f8: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2cf5f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2cf5fc: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x2cf5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2cf600: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x2cf600u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf604: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cf604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cf608: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2cf608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cf60c: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2CF60Cu;
    {
        const bool branch_taken_0x2cf60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF60Cu;
        // 0x2cf610: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf60c) {
            ctx->pc = 0x2CF894u;
            goto label_2cf894;
        }
    }
    ctx->pc = 0x2CF614u;
    // 0x2cf614: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2cf614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cf618: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2cf618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cf61c: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x2cf61cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cf620: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cf620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cf624: 0x71023  negu        $v0, $a3
    ctx->pc = 0x2cf624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2cf628: 0x460061c6  mov.s       $f7, $f12
    ctx->pc = 0x2cf628u;
    ctx->f[7] = FPU_MOV_S(ctx->f[12]);
    // 0x2cf62c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2cf62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cf630: 0x46005186  mov.s       $f6, $f10
    ctx->pc = 0x2cf630u;
    ctx->f[6] = FPU_MOV_S(ctx->f[10]);
    // 0x2cf634: 0x46004146  mov.s       $f5, $f8
    ctx->pc = 0x2cf634u;
    ctx->f[5] = FPU_MOV_S(ctx->f[8]);
    // 0x2cf638: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CF638u;
    {
        const bool branch_taken_0x2cf638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF638u;
        // 0x2cf63c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf638) {
            ctx->pc = 0x2CF754u;
            goto label_2cf754;
        }
    }
    ctx->pc = 0x2CF640u;
    // 0x2cf640: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2cf640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cf644: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CF644u;
    {
        const bool branch_taken_0x2cf644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF644u;
        // 0x2cf648: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf644) {
            ctx->pc = 0x2CF6FCu;
            goto label_2cf6fc;
        }
    }
    ctx->pc = 0x2CF64Cu;
    // 0x2cf64c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CF64Cu;
    {
        const bool branch_taken_0x2cf64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf64c) {
            ctx->pc = 0x2CF650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF64Cu;
            // 0x2cf650: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF6ACu;
            goto label_2cf6ac;
        }
    }
    ctx->pc = 0x2CF654u;
    // 0x2cf654: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2cf654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf658: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf65c: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf660: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf660u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf664: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf668: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf66c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf670: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf674: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf674u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf678: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf67c: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf680: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf680u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf684: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf688: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf68c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf68cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf690: 0x0  nop
    ctx->pc = 0x2cf690u;
    // NOP
    // 0x2cf694: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF694u;
    {
        const bool branch_taken_0x2cf694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF694u;
        // 0x2cf698: 0x24660002  addiu       $a2, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf694) {
            ctx->pc = 0x2CF6A4u;
            goto label_2cf6a4;
        }
    }
    ctx->pc = 0x2CF69Cu;
    // 0x2cf69c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf69cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf6a0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf6a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf6a4:
    // 0x2cf6a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2cf6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2cf6a8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2cf6a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf6ac:
    // 0x2cf6ac: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2cf6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf6b0: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x2cf6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2cf6b4: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf6b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf6b8: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2cf6b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf6bc: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2cf6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2cf6c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf6c4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf6c8: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf6c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf6cc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf6d0: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf6d4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf6d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf6d8: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf6dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf6e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf6e4: 0x0  nop
    ctx->pc = 0x2cf6e4u;
    // NOP
    // 0x2cf6e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF6E8u;
    {
        const bool branch_taken_0x2cf6e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6E8u;
        // 0x2cf6ec: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6e8) {
            ctx->pc = 0x2CF6F8u;
            goto label_2cf6f8;
        }
    }
    ctx->pc = 0x2CF6F0u;
    // 0x2cf6f0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf6f0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf6f4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf6f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf6f8:
    // 0x2cf6f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2cf6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2cf6fc:
    // 0x2cf6fc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2cf6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf700: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2cf700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf704: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x2cf704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2cf708: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf708u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf70c: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2cf70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf710: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2cf710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2cf714: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf718: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf71c: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf71cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf720: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf724: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf728: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf728u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf72c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf72cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf730: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf738: 0x0  nop
    ctx->pc = 0x2cf738u;
    // NOP
    // 0x2cf73c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF73Cu;
    {
        const bool branch_taken_0x2cf73c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF73Cu;
        // 0x2cf740: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf73c) {
            ctx->pc = 0x2CF74Cu;
            goto label_2cf74c;
        }
    }
    ctx->pc = 0x2CF744u;
    // 0x2cf744: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf744u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf748: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf748u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf74c:
    // 0x2cf74c: 0x10e00051  beqz        $a3, . + 4 + (0x51 << 2)
    ctx->pc = 0x2CF74Cu;
    {
        const bool branch_taken_0x2cf74c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF74Cu;
        // 0x2cf750: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf74c) {
            ctx->pc = 0x2CF894u;
            goto label_2cf894;
        }
    }
    ctx->pc = 0x2CF754u;
label_2cf754:
    // 0x2cf754: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2cf754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cf758:
    // 0x2cf758: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2cf758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf75c: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf760: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf764: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf764u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf768: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf76c: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf770: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf774: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf778: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf778u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf77c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf780: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf784: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf788: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf78c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf794: 0x0  nop
    ctx->pc = 0x2cf794u;
    // NOP
    // 0x2cf798: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF798u;
    {
        const bool branch_taken_0x2cf798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF798u;
        // 0x2cf79c: 0x94620002  lhu         $v0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf798) {
            ctx->pc = 0x2CF7A8u;
            goto label_2cf7a8;
        }
    }
    ctx->pc = 0x2CF7A0u;
    // 0x2cf7a0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf7a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf7a4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf7a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf7a8:
    // 0x2cf7a8: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf7ac: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf7b0: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf7b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf7b4: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf7b8: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf7bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf7c0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf7c4: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf7c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf7c8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf7cc: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf7d0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf7d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf7d4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf7d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf7dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf7dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf7e0: 0x0  nop
    ctx->pc = 0x2cf7e0u;
    // NOP
    // 0x2cf7e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF7E4u;
    {
        const bool branch_taken_0x2cf7e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7E4u;
        // 0x2cf7e8: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7e4) {
            ctx->pc = 0x2CF7F4u;
            goto label_2cf7f4;
        }
    }
    ctx->pc = 0x2CF7ECu;
    // 0x2cf7ec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf7ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf7f0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf7f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf7f4:
    // 0x2cf7f4: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf7f8: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf7fc: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf7fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf800: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf804: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf808: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf80c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf810: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf810u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf814: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf818: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf81c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf81cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf820: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf824: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf82c: 0x0  nop
    ctx->pc = 0x2cf82cu;
    // NOP
    // 0x2cf830: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF830u;
    {
        const bool branch_taken_0x2cf830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF830u;
        // 0x2cf834: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf830) {
            ctx->pc = 0x2CF840u;
            goto label_2cf840;
        }
    }
    ctx->pc = 0x2CF838u;
    // 0x2cf838: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf838u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf83c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf83cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf840:
    // 0x2cf840: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf844: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x2cf844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x2cf848: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf848u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf84c: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf84cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf850: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x2cf850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2cf854: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf858: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf85c: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf85cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf860: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf864: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf868: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf86c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf870: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf878: 0x0  nop
    ctx->pc = 0x2cf878u;
    // NOP
    // 0x2cf87c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF87Cu;
    {
        const bool branch_taken_0x2cf87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF87Cu;
        // 0x2cf880: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf87c) {
            ctx->pc = 0x2CF88Cu;
            goto label_2cf88c;
        }
    }
    ctx->pc = 0x2CF884u;
    // 0x2cf884: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf884u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf888: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf88c:
    // 0x2cf88c: 0x14e0ffb2  bnez        $a3, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2CF88Cu;
    {
        const bool branch_taken_0x2cf88c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF88Cu;
        // 0x2cf890: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf88c) {
            ctx->pc = 0x2CF758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf758;
        }
    }
    ctx->pc = 0x2CF894u;
label_2cf894:
    // 0x2cf894: 0x51590003  beql        $t2, $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF894u;
    {
        const bool branch_taken_0x2cf894 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 25));
        if (branch_taken_0x2cf894) {
            ctx->pc = 0x2CF898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF894u;
            // 0x2cf898: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF8A4u;
            goto label_2cf8a4;
        }
    }
    ctx->pc = 0x2CF89Cu;
    // 0x2cf89c: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x2CF89Cu;
    {
        const bool branch_taken_0x2cf89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF89Cu;
        // 0x2cf8a0: 0x140c82d  daddu       $t9, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf89c) {
            ctx->pc = 0x2CF5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf5d0;
        }
    }
    ctx->pc = 0x2CF8A4u;
label_2cf8a4:
    // 0x2cf8a4: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x2cf8a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cf8a8: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x2cf8a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x2cf8ac: 0x46005a86  mov.s       $f10, $f11
    ctx->pc = 0x2cf8acu;
    ctx->f[10] = FPU_MOV_S(ctx->f[11]);
    // 0x2cf8b0: 0x46004a06  mov.s       $f8, $f9
    ctx->pc = 0x2cf8b0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[9]);
    // 0x2cf8b4: 0x0  nop
    ctx->pc = 0x2cf8b4u;
    // NOP
label_2cf8b8:
    // 0x2cf8b8: 0x1b31018  mult        $v0, $t5, $s3
    ctx->pc = 0x2cf8b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cf8bc: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x2cf8bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8c0: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x2cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2cf8c4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2cf8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf8c8: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x2cf8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2cf8cc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2cf8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf8d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2cf8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2cf8d4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2cf8d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2cf8d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2cf8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf8dc: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x2cf8dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x2cf8e0: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2cf8e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2cf8e4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2cf8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2cf8e8: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x2cf8e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf8ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cf8ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cf8f0: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2cf8f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cf8f4: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2CF8F4u;
    {
        const bool branch_taken_0x2cf8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8F4u;
        // 0x2cf8f8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf8f4) {
            ctx->pc = 0x2CFB7Cu;
            goto label_2cfb7c;
        }
    }
    ctx->pc = 0x2CF8FCu;
    // 0x2cf8fc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2cf8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cf900: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2cf900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cf904: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x2cf904u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cf908: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2cf908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cf90c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x2cf90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2cf910: 0x460069c6  mov.s       $f7, $f13
    ctx->pc = 0x2cf910u;
    ctx->f[7] = FPU_MOV_S(ctx->f[13]);
    // 0x2cf914: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2cf914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cf918: 0x46005986  mov.s       $f6, $f11
    ctx->pc = 0x2cf918u;
    ctx->f[6] = FPU_MOV_S(ctx->f[11]);
    // 0x2cf91c: 0x46004946  mov.s       $f5, $f9
    ctx->pc = 0x2cf91cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[9]);
    // 0x2cf920: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CF920u;
    {
        const bool branch_taken_0x2cf920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF920u;
        // 0x2cf924: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf920) {
            ctx->pc = 0x2CFA3Cu;
            goto label_2cfa3c;
        }
    }
    ctx->pc = 0x2CF928u;
    // 0x2cf928: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2cf928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cf92c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CF92Cu;
    {
        const bool branch_taken_0x2cf92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF92Cu;
        // 0x2cf930: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf92c) {
            ctx->pc = 0x2CF9E4u;
            goto label_2cf9e4;
        }
    }
    ctx->pc = 0x2CF934u;
    // 0x2cf934: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CF934u;
    {
        const bool branch_taken_0x2cf934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf934) {
            ctx->pc = 0x2CF938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF934u;
            // 0x2cf938: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF994u;
            goto label_2cf994;
        }
    }
    ctx->pc = 0x2CF93Cu;
    // 0x2cf93c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2cf93cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf940: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cf940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf944: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cf944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cf948: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf948u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf94c: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cf94cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cf950: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cf950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cf954: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf958: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf95c: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf95cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf960: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf964: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf968: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf968u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf96c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf970: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf978: 0x0  nop
    ctx->pc = 0x2cf978u;
    // NOP
    // 0x2cf97c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF97Cu;
    {
        const bool branch_taken_0x2cf97c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF97Cu;
        // 0x2cf980: 0x24660002  addiu       $a2, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf97c) {
            ctx->pc = 0x2CF98Cu;
            goto label_2cf98c;
        }
    }
    ctx->pc = 0x2CF984u;
    // 0x2cf984: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf984u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf988: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf98c:
    // 0x2cf98c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2cf98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2cf990: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2cf990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf994:
    // 0x2cf994: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2cf994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf998: 0x6f1021  addu        $v0, $v1, $t7
    ctx->pc = 0x2cf998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2cf99c: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf99cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf9a0: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2cf9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf9a4: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x2cf9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2cf9a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf9ac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cf9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf9b0: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cf9b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cf9b4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cf9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf9b8: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cf9b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cf9bc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cf9bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cf9c0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cf9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf9c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cf9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cf9c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf9cc: 0x0  nop
    ctx->pc = 0x2cf9ccu;
    // NOP
    // 0x2cf9d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF9D0u;
    {
        const bool branch_taken_0x2cf9d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9D0u;
        // 0x2cf9d4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf9d0) {
            ctx->pc = 0x2CF9E0u;
            goto label_2cf9e0;
        }
    }
    ctx->pc = 0x2CF9D8u;
    // 0x2cf9d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf9d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf9dc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cf9dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf9e0:
    // 0x2cf9e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2cf9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2cf9e4:
    // 0x2cf9e4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2cf9e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf9e8: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2cf9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf9ec: 0x6f1021  addu        $v0, $v1, $t7
    ctx->pc = 0x2cf9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2cf9f0: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cf9f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cf9f4: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2cf9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf9f8: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x2cf9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2cf9fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfa00: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cfa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfa04: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cfa04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cfa08: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cfa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfa0c: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cfa0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cfa10: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cfa10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cfa14: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cfa14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cfa18: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cfa18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cfa1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cfa1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfa20: 0x0  nop
    ctx->pc = 0x2cfa20u;
    // NOP
    // 0x2cfa24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFA24u;
    {
        const bool branch_taken_0x2cfa24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA24u;
        // 0x2cfa28: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa24) {
            ctx->pc = 0x2CFA34u;
            goto label_2cfa34;
        }
    }
    ctx->pc = 0x2CFA2Cu;
    // 0x2cfa2c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cfa2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cfa30: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cfa30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa34:
    // 0x2cfa34: 0x10e00051  beqz        $a3, . + 4 + (0x51 << 2)
    ctx->pc = 0x2CFA34u;
    {
        const bool branch_taken_0x2cfa34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA34u;
        // 0x2cfa38: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa34) {
            ctx->pc = 0x2CFB7Cu;
            goto label_2cfb7c;
        }
    }
    ctx->pc = 0x2CFA3Cu;
label_2cfa3c:
    // 0x2cfa3c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2cfa3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa40:
    // 0x2cfa40: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2cfa40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cfa44: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cfa44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cfa48: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cfa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cfa4c: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cfa4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cfa50: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cfa50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cfa54: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cfa58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cfa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfa5c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cfa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfa60: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cfa60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cfa64: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cfa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfa68: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cfa68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cfa6c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cfa6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cfa70: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cfa70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cfa74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cfa74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cfa78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cfa78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfa7c: 0x0  nop
    ctx->pc = 0x2cfa7cu;
    // NOP
    // 0x2cfa80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFA80u;
    {
        const bool branch_taken_0x2cfa80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA80u;
        // 0x2cfa84: 0x94620002  lhu         $v0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa80) {
            ctx->pc = 0x2CFA90u;
            goto label_2cfa90;
        }
    }
    ctx->pc = 0x2CFA88u;
    // 0x2cfa88: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cfa88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cfa8c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cfa8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa90:
    // 0x2cfa90: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cfa90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cfa94: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cfa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cfa98: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cfa98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cfa9c: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cfa9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cfaa0: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cfaa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cfaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfaa8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cfaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfaac: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cfaacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cfab0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cfab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfab4: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cfab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cfab8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cfab8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cfabc: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cfabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cfac0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cfac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cfac4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cfac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfac8: 0x0  nop
    ctx->pc = 0x2cfac8u;
    // NOP
    // 0x2cfacc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFACCu;
    {
        const bool branch_taken_0x2cfacc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFACCu;
        // 0x2cfad0: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfacc) {
            ctx->pc = 0x2CFADCu;
            goto label_2cfadc;
        }
    }
    ctx->pc = 0x2CFAD4u;
    // 0x2cfad4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cfad4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cfad8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cfad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfadc:
    // 0x2cfadc: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cfadcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cfae0: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cfae4: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cfae4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cfae8: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cfae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cfaec: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cfaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cfaf0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cfaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfaf4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cfaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfaf8: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cfaf8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cfafc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cfafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfb00: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cfb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cfb04: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cfb04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cfb08: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cfb08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cfb0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cfb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cfb10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cfb10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfb14: 0x0  nop
    ctx->pc = 0x2cfb14u;
    // NOP
    // 0x2cfb18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFB18u;
    {
        const bool branch_taken_0x2cfb18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB18u;
        // 0x2cfb1c: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb18) {
            ctx->pc = 0x2CFB28u;
            goto label_2cfb28;
        }
    }
    ctx->pc = 0x2CFB20u;
    // 0x2cfb20: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cfb20u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cfb24: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cfb24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb28:
    // 0x2cfb28: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x2cfb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cfb2c: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2cfb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2cfb30: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2cfb30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cfb34: 0x893018  mult        $a2, $a0, $t1
    ctx->pc = 0x2cfb34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cfb38: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2cfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2cfb3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cfb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfb40: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2cfb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfb44: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x2cfb44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cfb48: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2cfb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfb4c: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2cfb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2cfb50: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cfb50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cfb54: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2cfb54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cfb58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cfb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cfb5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cfb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfb60: 0x0  nop
    ctx->pc = 0x2cfb60u;
    // NOP
    // 0x2cfb64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFB64u;
    {
        const bool branch_taken_0x2cfb64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB64u;
        // 0x2cfb68: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb64) {
            ctx->pc = 0x2CFB74u;
            goto label_2cfb74;
        }
    }
    ctx->pc = 0x2CFB6Cu;
    // 0x2cfb6c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cfb6cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cfb70: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cfb70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb74:
    // 0x2cfb74: 0x14e0ffb2  bnez        $a3, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2CFB74u;
    {
        const bool branch_taken_0x2cfb74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB74u;
        // 0x2cfb78: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb74) {
            ctx->pc = 0x2CFA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfa40;
        }
    }
    ctx->pc = 0x2CFB7Cu;
label_2cfb7c:
    // 0x2cfb7c: 0x114d0003  beq         $t2, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFB7Cu;
    {
        const bool branch_taken_0x2cfb7c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x2CFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB7Cu;
        // 0x2cfb80: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb7c) {
            ctx->pc = 0x2CFB8Cu;
            goto label_2cfb8c;
        }
    }
    ctx->pc = 0x2CFB84u;
    // 0x2cfb84: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x2CFB84u;
    {
        const bool branch_taken_0x2cfb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB84u;
        // 0x2cfb88: 0x140682d  daddu       $t5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb84) {
            ctx->pc = 0x2CF8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf8b8;
        }
    }
    ctx->pc = 0x2CFB8Cu;
label_2cfb8c:
    // 0x2cfb8c: 0x0  nop
    ctx->pc = 0x2cfb8cu;
    // NOP
label_2cfb90:
    // 0x2cfb90: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cfb94: 0x3233018  mult        $a2, $t9, $v1
    ctx->pc = 0x2cfb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cfb98: 0xd51021  addu        $v0, $a2, $s5
    ctx->pc = 0x2cfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x2cfb9c: 0xc4490000  lwc1        $f9, 0x0($v0)
    ctx->pc = 0x2cfb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2cfba0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2cfba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfba4: 0x46114a42  mul.s       $f9, $f9, $f17
    ctx->pc = 0x2cfba4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[17]);
    // 0x2cfba8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2cfba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfbac: 0x46120842  mul.s       $f1, $f1, $f18
    ctx->pc = 0x2cfbacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x2cfbb0: 0x46130002  mul.s       $f0, $f0, $f19
    ctx->pc = 0x2cfbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x2cfbb4: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x2cfbb4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2cfbb8: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x2cfbb8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2cfbbc: 0xe7a90040  swc1        $f9, 0x40($sp)
    ctx->pc = 0x2cfbbcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2cfbc0: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2cfbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfbc4: 0xc5630014  lwc1        $f3, 0x14($t3)
    ctx->pc = 0x2cfbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfbc8: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x2cfbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2cfbcc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2cfbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfbd0: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2cfbd0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2cfbd4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2cfbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfbd8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2cfbd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2cfbdc: 0xc5600024  lwc1        $f0, 0x24($t3)
    ctx->pc = 0x2cfbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfbe0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfbe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfbe4: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x2cfbe4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x2cfbe8: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x2cfbe8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2cfbec: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x2cfbecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2cfbf0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x2cfbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfbf4: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x2cfbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2cfbf8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2cfbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfbfc: 0xc5630018  lwc1        $f3, 0x18($t3)
    ctx->pc = 0x2cfbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfc00: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2cfc00u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cfc04: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2cfc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfc08: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2cfc08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2cfc0c: 0xc5600028  lwc1        $f0, 0x28($t3)
    ctx->pc = 0x2cfc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfc10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfc10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfc14: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2cfc14u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x2cfc18: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x2cfc18u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x2cfc1c: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x2cfc1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2cfc20: 0xc5600030  lwc1        $f0, 0x30($t3)
    ctx->pc = 0x2cfc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfc24: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x2cfc24u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2cfc28: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x2cfc28u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cfc2c: 0xc5600034  lwc1        $f0, 0x34($t3)
    ctx->pc = 0x2cfc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfc30: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x2cfc30u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2cfc34: 0xe7a80034  swc1        $f8, 0x34($sp)
    ctx->pc = 0x2cfc34u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2cfc38: 0xc5600038  lwc1        $f0, 0x38($t3)
    ctx->pc = 0x2cfc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfc3c: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x2cfc3cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x2cfc40: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x2cfc40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cfc44: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2cfc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2cfc48: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2cfc48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cfc4c: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x2cfc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfc50: 0xc5830010  lwc1        $f3, 0x10($t4)
    ctx->pc = 0x2cfc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfc54: 0xc5840020  lwc1        $f4, 0x20($t4)
    ctx->pc = 0x2cfc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cfc58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cfc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cfc5c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2cfc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cfc60: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2cfc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfc64: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cfc64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cfc68: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2cfc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfc6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2cfc6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2cfc70: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2cfc70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2cfc74: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2cfc74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2cfc78: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2cfc78u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2cfc7c: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x2cfc7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2cfc80: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x2cfc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfc84: 0xc5840014  lwc1        $f4, 0x14($t4)
    ctx->pc = 0x2cfc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cfc88: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2cfc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfc8c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2cfc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfc90: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2cfc90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cfc94: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2cfc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfc98: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2cfc98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2cfc9c: 0xc5800024  lwc1        $f0, 0x24($t4)
    ctx->pc = 0x2cfc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfca0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfca4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2cfca4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2cfca8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2cfca8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2cfcac: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x2cfcacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2cfcb0: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x2cfcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfcb4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2cfcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfcb8: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2cfcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cfcbc: 0xc5860018  lwc1        $f6, 0x18($t4)
    ctx->pc = 0x2cfcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cfcc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfcc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfcc4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2cfcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfcc8: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2cfcc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2cfccc: 0xc5800028  lwc1        $f0, 0x28($t4)
    ctx->pc = 0x2cfcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfcd0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2cfcd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cfcd4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2cfcd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2cfcd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cfcd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cfcdc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2cfcdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2cfce0: 0xc5800030  lwc1        $f0, 0x30($t4)
    ctx->pc = 0x2cfce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfce4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2cfce4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2cfce8: 0xe705000c  swc1        $f5, 0xC($t8)
    ctx->pc = 0x2cfce8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 12), bits); }
    // 0x2cfcec: 0xc5800034  lwc1        $f0, 0x34($t4)
    ctx->pc = 0x2cfcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfcf0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2cfcf0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2cfcf4: 0xe7030010  swc1        $f3, 0x10($t8)
    ctx->pc = 0x2cfcf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 16), bits); }
    // 0x2cfcf8: 0xc5800038  lwc1        $f0, 0x38($t4)
    ctx->pc = 0x2cfcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfcfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cfcfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cfd00: 0xe7010014  swc1        $f1, 0x14($t8)
    ctx->pc = 0x2cfd00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 20), bits); }
    // 0x2cfd04: 0x46054a41  sub.s       $f9, $f9, $f5
    ctx->pc = 0x2cfd04u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x2cfd08: 0x46034201  sub.s       $f8, $f8, $f3
    ctx->pc = 0x2cfd08u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x2cfd0c: 0xe7090000  swc1        $f9, 0x0($t8)
    ctx->pc = 0x2cfd0cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x2cfd10: 0x46013881  sub.s       $f2, $f7, $f1
    ctx->pc = 0x2cfd10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2cfd14: 0xe7080004  swc1        $f8, 0x4($t8)
    ctx->pc = 0x2cfd14u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    // 0x2cfd18: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CFD18u;
    {
        const bool branch_taken_0x2cfd18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD18u;
        // 0x2cfd1c: 0xe7020008  swc1        $f2, 0x8($t8) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd18) {
            ctx->pc = 0x2CFD48u;
            goto label_2cfd48;
        }
    }
    ctx->pc = 0x2CFD20u;
    // 0x2cfd20: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2cfd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfd24: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x2cfd24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2cfd28: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x2cfd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x2cfd2c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2cfd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfd30: 0x46014040  add.s       $f1, $f8, $f1
    ctx->pc = 0x2cfd30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2cfd34: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x2cfd34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    // 0x2cfd38: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cfd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfd3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2cfd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cfd40: 0xe7000008  swc1        $f0, 0x8($t8)
    ctx->pc = 0x2cfd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
    // 0x2cfd44: 0x0  nop
    ctx->pc = 0x2cfd44u;
    // NOP
label_2cfd48:
    // 0x2cfd48: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2cfd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfd4c: 0xc7020000  lwc1        $f2, 0x0($t8)
    ctx->pc = 0x2cfd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cfd50: 0xc7030004  lwc1        $f3, 0x4($t8)
    ctx->pc = 0x2cfd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cfd54: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2cfd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cfd58: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2cfd58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cfd5c: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x2cfd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfd60: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2cfd60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2cfd64: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2cfd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfd68: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2cfd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2cfd6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cfd6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cfd70: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2cfd70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cfd74: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2cfd74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2cfd78: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2cfd78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2cfd7c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2cfd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cfd80: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2cfd80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cfd84: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2cfd84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cfd88: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2cfd88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cfd8c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2cfd8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cfd90: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2cfd90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cfd94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD94u;
        // 0x2cfd98: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD9Cu;
    // 0x2cfd9c: 0x0  nop
    ctx->pc = 0x2cfd9cu;
    // NOP
    ctx->pc = 0x2cfda0u;
}
