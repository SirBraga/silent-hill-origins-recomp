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

// Function: sub_00136148
// Address: 0x136148 - 0x1364a0
void sub_00136148_0x136148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136148_0x136148");
#endif

    switch (ctx->pc) {
        case 0x136280u: goto label_136280;
        case 0x1362c8u: goto label_1362c8;
        case 0x136338u: goto label_136338;
        case 0x1363b4u: goto label_1363b4;
        case 0x13646cu: goto label_13646c;
        case 0x136480u: goto label_136480;
        default: break;
    }

    ctx->pc = 0x136148u;

    // 0x136148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x136148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13614c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13614cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x136150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x136154: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x136154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x136158: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x136158u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x13615c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13615cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136160: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x136160u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x136164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136168: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x136168u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13616c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x13616cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x136170: 0xc6010bdc  lwc1        $f1, 0xBDC($s0)
    ctx->pc = 0x136170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136174: 0xc6000bd8  lwc1        $f0, 0xBD8($s0)
    ctx->pc = 0x136174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136178: 0x0  nop
    ctx->pc = 0x136178u;
    // NOP
    // 0x13617c: 0x0  nop
    ctx->pc = 0x13617cu;
    // NOP
    // 0x136180: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x136180u;
    ctx->f[23] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x136184: 0x4602b834  c.lt.s      $f23, $f2
    ctx->pc = 0x136184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136188: 0x0  nop
    ctx->pc = 0x136188u;
    // NOP
    // 0x13618c: 0x450000b9  bc1f        . + 4 + (0xB9 << 2)
    ctx->pc = 0x13618Cu;
    {
        const bool branch_taken_0x13618c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13618Cu;
        // 0x136190: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13618c) {
            ctx->pc = 0x136474u;
            goto label_136474;
        }
    }
    ctx->pc = 0x136194u;
    // 0x136194: 0x4602b801  sub.s       $f0, $f23, $f2
    ctx->pc = 0x136194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x136198: 0xc6031ae4  lwc1        $f3, 0x1AE4($s0)
    ctx->pc = 0x136198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13619c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13619cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1361a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1361a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1361a4: 0xc6041ae8  lwc1        $f4, 0x1AE8($s0)
    ctx->pc = 0x1361a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1361a8: 0x0  nop
    ctx->pc = 0x1361a8u;
    // NOP
    // 0x1361ac: 0x0  nop
    ctx->pc = 0x1361acu;
    // NOP
    // 0x1361b0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1361b0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x1361b4: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1361b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1361b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1361b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1361bc: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1361bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1361c0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1361c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1361c4: 0x0  nop
    ctx->pc = 0x1361c4u;
    // NOP
    // 0x1361c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1361C8u;
    {
        const bool branch_taken_0x1361c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361C8u;
        // 0x1361cc: 0x46001d86  mov.s       $f22, $f3 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361c8) {
            ctx->pc = 0x1361E4u;
            goto label_1361e4;
        }
    }
    ctx->pc = 0x1361D0u;
    // 0x1361d0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1361d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1361d4: 0x0  nop
    ctx->pc = 0x1361d4u;
    // NOP
    // 0x1361d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1361D8u;
    {
        const bool branch_taken_0x1361d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1361DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361D8u;
        // 0x1361dc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361d8) {
            ctx->pc = 0x1361E4u;
            goto label_1361e4;
        }
    }
    ctx->pc = 0x1361E0u;
    // 0x1361e0: 0x46002586  mov.s       $f22, $f4
    ctx->pc = 0x1361e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[4]);
label_1361e4:
    // 0x1361e4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1361e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1361e8: 0x0  nop
    ctx->pc = 0x1361e8u;
    // NOP
    // 0x1361ec: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x1361ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1361f0: 0x0  nop
    ctx->pc = 0x1361f0u;
    // NOP
    // 0x1361f4: 0x45020039  bc1fl       . + 4 + (0x39 << 2)
    ctx->pc = 0x1361F4u;
    {
        const bool branch_taken_0x1361f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1361f4) {
            ctx->pc = 0x1361F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1361F4u;
            // 0x1361f8: 0xc6001b20  lwc1        $f0, 0x1B20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1362DCu;
            goto label_1362dc;
        }
    }
    ctx->pc = 0x1361FCu;
    // 0x1361fc: 0xc6001afc  lwc1        $f0, 0x1AFC($s0)
    ctx->pc = 0x1361fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136200: 0x46150041  sub.s       $f1, $f0, $f21
    ctx->pc = 0x136200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x136204: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x136204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136208: 0x0  nop
    ctx->pc = 0x136208u;
    // NOP
    // 0x13620c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x13620Cu;
    {
        const bool branch_taken_0x13620c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13620Cu;
        // 0x136210: 0xe6011afc  swc1        $f1, 0x1AFC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6908), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13620c) {
            ctx->pc = 0x136288u;
            goto label_136288;
        }
    }
    ctx->pc = 0x136214u;
    // 0x136214: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x136214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x136218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13621c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x136220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136228: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13622c: 0x0  nop
    ctx->pc = 0x13622cu;
    // NOP
    // 0x136230: 0x0  nop
    ctx->pc = 0x136230u;
    // NOP
    // 0x136234: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x136234u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[22]);
    // 0x136238: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x136238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x13623c: 0xe6011afc  swc1        $f1, 0x1AFC($s0)
    ctx->pc = 0x13623cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6908), bits); }
    // 0x136240: 0xc44283c4  lwc1        $f2, -0x7C3C($v0)
    ctx->pc = 0x136240u;
    { uint32_t bits = FAST_READ32(0x3383C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136244: 0xe6001b04  swc1        $f0, 0x1B04($s0)
    ctx->pc = 0x136244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6916), bits); }
    // 0x136248: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x136248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13624c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13624cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x136250: 0xe6001b00  swc1        $f0, 0x1B00($s0)
    ctx->pc = 0x136250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6912), bits); }
    // 0x136254: 0x8c844710  lw          $a0, 0x4710($a0)
    ctx->pc = 0x136254u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4710u));
    // 0x136258: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x136258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x13625c: 0x5082001f  beql        $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13625Cu;
    {
        const bool branch_taken_0x13625c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13625c) {
            ctx->pc = 0x136260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13625Cu;
            // 0x136260: 0xc6001b20  lwc1        $f0, 0x1B20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1362DCu;
            goto label_1362dc;
        }
    }
    ctx->pc = 0x136264u;
    // 0x136264: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x136264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136268: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x136268u;
    {
        const bool branch_taken_0x136268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136268) {
            ctx->pc = 0x13626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136268u;
            // 0x13626c: 0xc6001b20  lwc1        $f0, 0x1B20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1362DCu;
            goto label_1362dc;
        }
    }
    ctx->pc = 0x136270u;
    // 0x136270: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x136270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x136274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x136274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136278: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x136278u;
    SET_GPR_U32(ctx, 31, 0x136280u);
    ctx->pc = 0x13627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136278u;
    // 0x13627c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x136278u, 0x136280u)) {
        return;
    }
    ctx->pc = 0x136280u;
label_136280:
    // 0x136280: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x136280u;
    {
        const bool branch_taken_0x136280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136280u;
        // 0x136284: 0xc6001b20  lwc1        $f0, 0x1B20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136280) {
            ctx->pc = 0x1362DCu;
            goto label_1362dc;
        }
    }
    ctx->pc = 0x136288u;
label_136288:
    // 0x136288: 0xc6001b00  lwc1        $f0, 0x1B00($s0)
    ctx->pc = 0x136288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13628c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13628cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136290: 0x0  nop
    ctx->pc = 0x136290u;
    // NOP
    // 0x136294: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x136294u;
    {
        const bool branch_taken_0x136294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136294u;
        // 0x136298: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136294) {
            ctx->pc = 0x1362D8u;
            goto label_1362d8;
        }
    }
    ctx->pc = 0x13629Cu;
    // 0x13629c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x13629cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1362a0: 0x8c454718  lw          $a1, 0x4718($v0)
    ctx->pc = 0x1362a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18200)));
    // 0x1362a4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1362a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1362a8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1362A8u;
    {
        const bool branch_taken_0x1362a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1362a8) {
            ctx->pc = 0x1362C8u;
            goto label_1362c8;
        }
    }
    ctx->pc = 0x1362B0u;
    // 0x1362b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1362b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1362b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1362B4u;
    {
        const bool branch_taken_0x1362b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B4u;
        // 0x1362b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362b4) {
            ctx->pc = 0x1362C8u;
            goto label_1362c8;
        }
    }
    ctx->pc = 0x1362BCu;
    // 0x1362bc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1362bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1362c0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1362C0u;
    SET_GPR_U32(ctx, 31, 0x1362C8u);
    ctx->pc = 0x1362C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362C0u;
    // 0x1362c4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1362C0u, 0x1362C8u)) {
        return;
    }
    ctx->pc = 0x1362C8u;
label_1362c8:
    // 0x1362c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1362c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1362cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1362ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1362d0: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x1362d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
    // 0x1362d4: 0xe6001b08  swc1        $f0, 0x1B08($s0)
    ctx->pc = 0x1362d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6920), bits); }
label_1362d8:
    // 0x1362d8: 0xc6001b20  lwc1        $f0, 0x1B20($s0)
    ctx->pc = 0x1362d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1362dc:
    // 0x1362dc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1362dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1362e0: 0xc6011b04  lwc1        $f1, 0x1B04($s0)
    ctx->pc = 0x1362e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1362e4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1362e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1362e8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1362e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1362ec: 0x0  nop
    ctx->pc = 0x1362ecu;
    // NOP
    // 0x1362f0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1362F0u;
    {
        const bool branch_taken_0x1362f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1362F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362F0u;
        // 0x1362f4: 0x46160542  mul.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362f0) {
            ctx->pc = 0x136358u;
            goto label_136358;
        }
    }
    ctx->pc = 0x1362F8u;
    // 0x1362f8: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x1362f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x1362fc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1362fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136300: 0x0  nop
    ctx->pc = 0x136300u;
    // NOP
    // 0x136304: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136304u;
    {
        const bool branch_taken_0x136304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136304u;
        // 0x136308: 0xe6001b04  swc1        $f0, 0x1B04($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6916), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136304) {
            ctx->pc = 0x136310u;
            goto label_136310;
        }
    }
    ctx->pc = 0x13630Cu;
    // 0x13630c: 0xe6141b04  swc1        $f20, 0x1B04($s0)
    ctx->pc = 0x13630cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6916), bits); }
label_136310:
    // 0x136310: 0xc60c1b04  lwc1        $f12, 0x1B04($s0)
    ctx->pc = 0x136310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136314: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x136314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x136318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13631c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x13631cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x136320: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x136320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x136324: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136328: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x136328u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x13632c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x13632cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x136330: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x136330u;
    SET_GPR_U32(ctx, 31, 0x136338u);
    ctx->pc = 0x136334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136330u;
    // 0x136334: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x136330u, 0x136338u)) {
        return;
    }
    ctx->pc = 0x136338u;
label_136338:
    // 0x136338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13633c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13633cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136340: 0x0  nop
    ctx->pc = 0x136340u;
    // NOP
    // 0x136344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136348: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x136348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13634c: 0x0  nop
    ctx->pc = 0x13634cu;
    // NOP
    // 0x136350: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x136350u;
    {
        const bool branch_taken_0x136350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136350) {
            ctx->pc = 0x136354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136350u;
            // 0x136354: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x136358u;
            goto label_136358;
        }
    }
    ctx->pc = 0x136358u;
label_136358:
    // 0x136358: 0xc6001b08  lwc1        $f0, 0x1B08($s0)
    ctx->pc = 0x136358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13635c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13635cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136360: 0x0  nop
    ctx->pc = 0x136360u;
    // NOP
    // 0x136364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x136364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136368: 0x0  nop
    ctx->pc = 0x136368u;
    // NOP
    // 0x13636c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x13636Cu;
    {
        const bool branch_taken_0x13636c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13636c) {
            ctx->pc = 0x1363D4u;
            goto label_1363d4;
        }
    }
    ctx->pc = 0x136374u;
    // 0x136374: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x136374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x136378: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x136378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13637c: 0x0  nop
    ctx->pc = 0x13637cu;
    // NOP
    // 0x136380: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136380u;
    {
        const bool branch_taken_0x136380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136380u;
        // 0x136384: 0xe6001b08  swc1        $f0, 0x1B08($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136380) {
            ctx->pc = 0x13638Cu;
            goto label_13638c;
        }
    }
    ctx->pc = 0x136388u;
    // 0x136388: 0xe6011b08  swc1        $f1, 0x1B08($s0)
    ctx->pc = 0x136388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6920), bits); }
label_13638c:
    // 0x13638c: 0xc60c1b08  lwc1        $f12, 0x1B08($s0)
    ctx->pc = 0x13638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136390: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x136390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x136394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136398: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x136398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x13639c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x13639cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1363a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1363a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1363a4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1363a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1363a8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1363a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1363ac: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1363ACu;
    SET_GPR_U32(ctx, 31, 0x1363B4u);
    ctx->pc = 0x1363B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363ACu;
    // 0x1363b0: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1363ACu, 0x1363B4u)) {
        return;
    }
    ctx->pc = 0x1363B4u;
label_1363b4:
    // 0x1363b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1363b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1363b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1363b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1363bc: 0x0  nop
    ctx->pc = 0x1363bcu;
    // NOP
    // 0x1363c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1363c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1363c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1363c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1363c8: 0x0  nop
    ctx->pc = 0x1363c8u;
    // NOP
    // 0x1363cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1363CCu;
    {
        const bool branch_taken_0x1363cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1363cc) {
            ctx->pc = 0x1363D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1363CCu;
            // 0x1363d0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1363D4u;
            goto label_1363d4;
        }
    }
    ctx->pc = 0x1363D4u;
label_1363d4:
    // 0x1363d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1363d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1363d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1363d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1363dc: 0x0  nop
    ctx->pc = 0x1363dcu;
    // NOP
    // 0x1363e0: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1363e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1363e4: 0x0  nop
    ctx->pc = 0x1363e4u;
    // NOP
    // 0x1363e8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1363E8u;
    {
        const bool branch_taken_0x1363e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1363e8) {
            ctx->pc = 0x136438u;
            goto label_136438;
        }
    }
    ctx->pc = 0x1363F0u;
    // 0x1363f0: 0xc6011b1c  lwc1        $f1, 0x1B1C($s0)
    ctx->pc = 0x1363f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1363f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1363f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1363f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1363f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1363fc: 0x46170801  sub.s       $f0, $f1, $f23
    ctx->pc = 0x1363fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x136400: 0x0  nop
    ctx->pc = 0x136400u;
    // NOP
    // 0x136404: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x136404u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x136408: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x136408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13640c: 0x0  nop
    ctx->pc = 0x13640cu;
    // NOP
    // 0x136410: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x136410u;
    {
        const bool branch_taken_0x136410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136410) {
            ctx->pc = 0x136414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136410u;
            // 0x136414: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x136418u;
            goto label_136418;
        }
    }
    ctx->pc = 0x136418u;
label_136418:
    // 0x136418: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x136418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13641c: 0x0  nop
    ctx->pc = 0x13641cu;
    // NOP
    // 0x136420: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x136420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136424: 0x0  nop
    ctx->pc = 0x136424u;
    // NOP
    // 0x136428: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x136428u;
    {
        const bool branch_taken_0x136428 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136428) {
            ctx->pc = 0x13642Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136428u;
            // 0x13642c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x136430u;
            goto label_136430;
        }
    }
    ctx->pc = 0x136430u;
label_136430:
    // 0x136430: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136430u;
    {
        const bool branch_taken_0x136430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136430u;
        // 0x136434: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136430) {
            ctx->pc = 0x13643Cu;
            goto label_13643c;
        }
    }
    ctx->pc = 0x136438u;
label_136438:
    // 0x136438: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x136438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13643c:
    // 0x13643c: 0xc6001b24  lwc1        $f0, 0x1B24($s0)
    ctx->pc = 0x13643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136440: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x136440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x136444: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x136444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x136448: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13644c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13644cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x136450: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x136450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x136454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x136454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x136458: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13645c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13645cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x136460: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x136460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x136464: 0xc07923a  jal         func_1E48E8
    ctx->pc = 0x136464u;
    SET_GPR_U32(ctx, 31, 0x13646Cu);
    ctx->pc = 0x136468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136464u;
    // 0x136468: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48E8u, 0x136464u, 0x13646Cu)) {
        return;
    }
    ctx->pc = 0x13646Cu;
label_13646c:
    // 0x13646c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13646Cu;
    {
        const bool branch_taken_0x13646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13646Cu;
        // 0x136470: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13646c) {
            ctx->pc = 0x136484u;
            goto label_136484;
        }
    }
    ctx->pc = 0x136474u;
label_136474:
    // 0x136474: 0xae001afc  sw          $zero, 0x1AFC($s0)
    ctx->pc = 0x136474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6908), GPR_U32(ctx, 0));
    // 0x136478: 0xc07923a  jal         func_1E48E8
    ctx->pc = 0x136478u;
    SET_GPR_U32(ctx, 31, 0x136480u);
    ctx->pc = 0x13647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136478u;
    // 0x13647c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48E8u, 0x136478u, 0x136480u)) {
        return;
    }
    ctx->pc = 0x136480u;
label_136480:
    // 0x136480: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x136480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_136484:
    // 0x136484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136488: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x136488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x13648c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x13648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x136490: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x136490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x136494: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x136494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136498: 0x3e00008  jr          $ra
    ctx->pc = 0x136498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136498u;
        // 0x13649c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1364A0u;
}
