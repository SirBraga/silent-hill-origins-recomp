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

// Function: sub_00151100
// Address: 0x151100 - 0x151268
void sub_00151100_0x151100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151100_0x151100");
#endif

    ctx->pc = 0x151100u;

    // 0x151100: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x151100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x151104: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x151104u;
    {
        const bool branch_taken_0x151104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151104u;
        // 0x151108: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151104) {
            ctx->pc = 0x151260u;
            goto label_151260;
        }
    }
    ctx->pc = 0x15110Cu;
    // 0x15110c: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x15110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151110: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x151110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151114: 0x0  nop
    ctx->pc = 0x151114u;
    // NOP
    // 0x151118: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x151118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15111c: 0x0  nop
    ctx->pc = 0x15111cu;
    // NOP
    // 0x151120: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x151120u;
    {
        const bool branch_taken_0x151120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151120u;
        // 0x151124: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151120) {
            ctx->pc = 0x15123Cu;
            goto label_15123c;
        }
    }
    ctx->pc = 0x151128u;
    // 0x151128: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x151128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x15112c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15112Cu;
    {
        const bool branch_taken_0x15112c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x151130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15112Cu;
        // 0x151130: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15112c) {
            ctx->pc = 0x151160u;
            goto label_151160;
        }
    }
    ctx->pc = 0x151134u;
    // 0x151134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151134u;
    {
        const bool branch_taken_0x151134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151134u;
        // 0x151138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151134) {
            ctx->pc = 0x15114Cu;
            goto label_15114c;
        }
    }
    ctx->pc = 0x15113Cu;
    // 0x15113c: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15113Cu;
    {
        const bool branch_taken_0x15113c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15113c) {
            ctx->pc = 0x151140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15113Cu;
            // 0x151140: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1511ACu;
            goto label_1511ac;
        }
    }
    ctx->pc = 0x151144u;
    // 0x151144: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x151144u;
    {
        const bool branch_taken_0x151144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151144u;
        // 0x151148: 0xc4a10010  lwc1        $f1, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151144) {
            ctx->pc = 0x15120Cu;
            goto label_15120c;
        }
    }
    ctx->pc = 0x15114Cu;
label_15114c:
    // 0x15114c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151150: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x151150u;
    {
        const bool branch_taken_0x151150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x151150) {
            ctx->pc = 0x151154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151150u;
            // 0x151154: 0xc4a30034  lwc1        $f3, 0x34($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1511C0u;
            goto label_1511c0;
        }
    }
    ctx->pc = 0x151158u;
    // 0x151158: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x151158u;
    {
        const bool branch_taken_0x151158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151158u;
        // 0x15115c: 0xc4a10010  lwc1        $f1, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151158) {
            ctx->pc = 0x15120Cu;
            goto label_15120c;
        }
    }
    ctx->pc = 0x151160u;
label_151160:
    // 0x151160: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x151160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151164: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x151164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151168: 0x0  nop
    ctx->pc = 0x151168u;
    // NOP
    // 0x15116c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x15116Cu;
    {
        const bool branch_taken_0x15116c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15116c) {
            ctx->pc = 0x151170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15116Cu;
            // 0x151170: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15118Cu;
            goto label_15118c;
        }
    }
    ctx->pc = 0x151174u;
    // 0x151174: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x151174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151178: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x151178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15117c: 0x0  nop
    ctx->pc = 0x15117cu;
    // NOP
    // 0x151180: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x151180u;
    {
        const bool branch_taken_0x151180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151180) {
            ctx->pc = 0x15120Cu;
            goto label_15120c;
        }
    }
    ctx->pc = 0x151188u;
    // 0x151188: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x151188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15118c:
    // 0x15118c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x15118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151190: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x151190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x151194: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x151194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151198: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x151198u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15119c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15119cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1511a0: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x1511a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1511a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1511A4u;
    {
        const bool branch_taken_0x1511a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1511A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511A4u;
        // 0x1511a8: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511a4) {
            ctx->pc = 0x151208u;
            goto label_151208;
        }
    }
    ctx->pc = 0x1511ACu;
label_1511ac:
    // 0x1511ac: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1511acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1511b0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1511b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1511b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1511b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1511b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1511B8u;
    {
        const bool branch_taken_0x1511b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1511BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511B8u;
        // 0x1511bc: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511b8) {
            ctx->pc = 0x151208u;
            goto label_151208;
        }
    }
    ctx->pc = 0x1511C0u;
label_1511c0:
    // 0x1511c0: 0xc4a40038  lwc1        $f4, 0x38($a1)
    ctx->pc = 0x1511c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1511c4: 0xc4a5003c  lwc1        $f5, 0x3C($a1)
    ctx->pc = 0x1511c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1511c8: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x1511c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1511cc: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x1511ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x1511d0: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x1511d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x1511d4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1511d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1511d8: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1511d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1511dc: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x1511dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1511e0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1511e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1511e4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1511e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1511e8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1511e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1511ec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1511ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1511f0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1511f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1511f4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1511f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1511f8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1511f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1511fc: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1511fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x151200: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x151200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x151204: 0x0  nop
    ctx->pc = 0x151204u;
    // NOP
label_151208:
    // 0x151208: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x151208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15120c:
    // 0x15120c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15120cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151210: 0x0  nop
    ctx->pc = 0x151210u;
    // NOP
    // 0x151214: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x151214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151218: 0x0  nop
    ctx->pc = 0x151218u;
    // NOP
    // 0x15121c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x15121Cu;
    {
        const bool branch_taken_0x15121c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15121c) {
            ctx->pc = 0x151220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15121Cu;
            // 0x151220: 0xc4a00028  lwc1        $f0, 0x28($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15123Cu;
            goto label_15123c;
        }
    }
    ctx->pc = 0x151224u;
    // 0x151224: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x151224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x151228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15122c: 0x0  nop
    ctx->pc = 0x15122cu;
    // NOP
    // 0x151230: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x151230u;
    {
        const bool branch_taken_0x151230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x151230) {
            ctx->pc = 0x151234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151230u;
            // 0x151234: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151238u;
            goto label_151238;
        }
    }
    ctx->pc = 0x151238u;
label_151238:
    // 0x151238: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x151238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15123c:
    // 0x15123c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15123cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151240: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x151240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x151244: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x151244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151248: 0x0  nop
    ctx->pc = 0x151248u;
    // NOP
    // 0x15124c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15124Cu;
    {
        const bool branch_taken_0x15124c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15124Cu;
        // 0x151250: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15124c) {
            ctx->pc = 0x151260u;
            goto label_151260;
        }
    }
    ctx->pc = 0x151254u;
    // 0x151254: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x151258: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151258u;
    {
        const bool branch_taken_0x151258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151258) {
            ctx->pc = 0x15125Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151258u;
            // 0x15125c: 0xaca0004c  sw          $zero, 0x4C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151260u;
            goto label_151260;
        }
    }
    ctx->pc = 0x151260u;
label_151260:
    // 0x151260: 0x3e00008  jr          $ra
    ctx->pc = 0x151260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151260u;
        // 0x151264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151268u;
}
