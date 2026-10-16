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

// Function: sub_00108328
// Address: 0x108328 - 0x1084d0
void sub_00108328_0x108328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108328_0x108328");
#endif

    switch (ctx->pc) {
        case 0x108328u: goto label_108328;
        case 0x10832cu: goto label_10832c;
        case 0x108330u: goto label_108330;
        case 0x108334u: goto label_108334;
        case 0x108338u: goto label_108338;
        case 0x10833cu: goto label_10833c;
        case 0x108340u: goto label_108340;
        case 0x108344u: goto label_108344;
        case 0x108348u: goto label_108348;
        case 0x10834cu: goto label_10834c;
        case 0x108350u: goto label_108350;
        case 0x108354u: goto label_108354;
        case 0x108358u: goto label_108358;
        case 0x10835cu: goto label_10835c;
        case 0x108360u: goto label_108360;
        case 0x108364u: goto label_108364;
        case 0x108368u: goto label_108368;
        case 0x10836cu: goto label_10836c;
        case 0x108370u: goto label_108370;
        case 0x108374u: goto label_108374;
        case 0x108378u: goto label_108378;
        case 0x10837cu: goto label_10837c;
        case 0x108380u: goto label_108380;
        case 0x108384u: goto label_108384;
        case 0x108388u: goto label_108388;
        case 0x10838cu: goto label_10838c;
        case 0x108390u: goto label_108390;
        case 0x108394u: goto label_108394;
        case 0x108398u: goto label_108398;
        case 0x10839cu: goto label_10839c;
        case 0x1083a0u: goto label_1083a0;
        case 0x1083a4u: goto label_1083a4;
        case 0x1083a8u: goto label_1083a8;
        case 0x1083acu: goto label_1083ac;
        case 0x1083b0u: goto label_1083b0;
        case 0x1083b4u: goto label_1083b4;
        case 0x1083b8u: goto label_1083b8;
        case 0x1083bcu: goto label_1083bc;
        case 0x1083c0u: goto label_1083c0;
        case 0x1083c4u: goto label_1083c4;
        case 0x1083c8u: goto label_1083c8;
        case 0x1083ccu: goto label_1083cc;
        case 0x1083d0u: goto label_1083d0;
        case 0x1083d4u: goto label_1083d4;
        case 0x1083d8u: goto label_1083d8;
        case 0x1083dcu: goto label_1083dc;
        case 0x1083e0u: goto label_1083e0;
        case 0x1083e4u: goto label_1083e4;
        case 0x1083e8u: goto label_1083e8;
        case 0x1083ecu: goto label_1083ec;
        case 0x1083f0u: goto label_1083f0;
        case 0x1083f4u: goto label_1083f4;
        case 0x1083f8u: goto label_1083f8;
        case 0x1083fcu: goto label_1083fc;
        case 0x108400u: goto label_108400;
        case 0x108404u: goto label_108404;
        case 0x108408u: goto label_108408;
        case 0x10840cu: goto label_10840c;
        case 0x108410u: goto label_108410;
        case 0x108414u: goto label_108414;
        case 0x108418u: goto label_108418;
        case 0x10841cu: goto label_10841c;
        case 0x108420u: goto label_108420;
        case 0x108424u: goto label_108424;
        case 0x108428u: goto label_108428;
        case 0x10842cu: goto label_10842c;
        case 0x108430u: goto label_108430;
        case 0x108434u: goto label_108434;
        case 0x108438u: goto label_108438;
        case 0x10843cu: goto label_10843c;
        case 0x108440u: goto label_108440;
        case 0x108444u: goto label_108444;
        case 0x108448u: goto label_108448;
        case 0x10844cu: goto label_10844c;
        case 0x108450u: goto label_108450;
        case 0x108454u: goto label_108454;
        case 0x108458u: goto label_108458;
        case 0x10845cu: goto label_10845c;
        case 0x108460u: goto label_108460;
        case 0x108464u: goto label_108464;
        case 0x108468u: goto label_108468;
        case 0x10846cu: goto label_10846c;
        case 0x108470u: goto label_108470;
        case 0x108474u: goto label_108474;
        case 0x108478u: goto label_108478;
        case 0x10847cu: goto label_10847c;
        case 0x108480u: goto label_108480;
        case 0x108484u: goto label_108484;
        case 0x108488u: goto label_108488;
        case 0x10848cu: goto label_10848c;
        case 0x108490u: goto label_108490;
        case 0x108494u: goto label_108494;
        case 0x108498u: goto label_108498;
        case 0x10849cu: goto label_10849c;
        case 0x1084a0u: goto label_1084a0;
        case 0x1084a4u: goto label_1084a4;
        case 0x1084a8u: goto label_1084a8;
        case 0x1084acu: goto label_1084ac;
        case 0x1084b0u: goto label_1084b0;
        case 0x1084b4u: goto label_1084b4;
        case 0x1084b8u: goto label_1084b8;
        case 0x1084bcu: goto label_1084bc;
        case 0x1084c0u: goto label_1084c0;
        case 0x1084c4u: goto label_1084c4;
        case 0x1084c8u: goto label_1084c8;
        case 0x1084ccu: goto label_1084cc;
        default: break;
    }

    ctx->pc = 0x108328u;

label_108328:
    // 0x108328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10832c:
    // 0x10832c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_108330:
    // 0x108330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_108334:
    // 0x108334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108338:
    // 0x108338: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x108338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10833c:
    // 0x10833c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x10833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108340:
    // 0x108340: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x108340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_108344:
    // 0x108344: 0xc6040038  lwc1        $f4, 0x38($s0)
    ctx->pc = 0x108344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_108348:
    // 0x108348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x108348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_10834c:
    // 0x10834c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x10834cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108350:
    // 0x108350: 0x0  nop
    ctx->pc = 0x108350u;
    // NOP
label_108354:
    // 0x108354: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_108358:
    if (ctx->pc == 0x108358u) {
        ctx->pc = 0x108358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108354u;
        // 0x108358: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10835Cu;
        goto label_10835c;
    }
    ctx->pc = 0x108354u;
    {
        const bool branch_taken_0x108354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108354u;
        // 0x108358: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108354) {
            ctx->pc = 0x108394u;
            goto label_108394;
        }
    }
    ctx->pc = 0x10835Cu;
label_10835c:
    // 0x10835c: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x10835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108360:
    // 0x108360: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_108364:
    // 0x108364: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x108364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_108368:
    // 0x108368: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x108368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_10836c:
    // 0x10836c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_108370:
    // 0x108370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_108374:
    // 0x108374: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x108374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_108378:
    // 0x108378: 0x0  nop
    ctx->pc = 0x108378u;
    // NOP
label_10837c:
    // 0x10837c: 0x0  nop
    ctx->pc = 0x10837cu;
    // NOP
label_108380:
    // 0x108380: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x108380u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_108384:
    // 0x108384: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x108384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_108388:
    // 0x108388: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x108388u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_10838c:
    // 0x10838c: 0x10000016  b           . + 4 + (0x16 << 2)
label_108390:
    if (ctx->pc == 0x108390u) {
        ctx->pc = 0x108390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10838Cu;
        // 0x108390: 0xe6020020  swc1        $f2, 0x20($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108394u;
        goto label_108394;
    }
    ctx->pc = 0x10838Cu;
    {
        const bool branch_taken_0x10838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10838Cu;
        // 0x108390: 0xe6020020  swc1        $f2, 0x20($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10838c) {
            ctx->pc = 0x1083E8u;
            goto label_1083e8;
        }
    }
    ctx->pc = 0x108394u;
label_108394:
    // 0x108394: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x108394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108398:
    // 0x108398: 0x0  nop
    ctx->pc = 0x108398u;
    // NOP
label_10839c:
    // 0x10839c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1083a0:
    if (ctx->pc == 0x1083A0u) {
        ctx->pc = 0x1083A4u;
        goto label_1083a4;
    }
    ctx->pc = 0x10839Cu;
    {
        const bool branch_taken_0x10839c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10839c) {
            ctx->pc = 0x1083D8u;
            goto label_1083d8;
        }
    }
    ctx->pc = 0x1083A4u;
label_1083a4:
    // 0x1083a4: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1083a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1083a8:
    // 0x1083a8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1083a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1083ac:
    // 0x1083ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1083acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1083b0:
    // 0x1083b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1083b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1083b4:
    // 0x1083b4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1083b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1083b8:
    // 0x1083b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1083b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1083bc:
    // 0x1083bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1083bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1083c0:
    // 0x1083c0: 0x0  nop
    ctx->pc = 0x1083c0u;
    // NOP
label_1083c4:
    // 0x1083c4: 0x0  nop
    ctx->pc = 0x1083c4u;
    // NOP
label_1083c8:
    // 0x1083c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1083c8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1083cc:
    // 0x1083cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1083ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1083d0:
    // 0x1083d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1083d4:
    if (ctx->pc == 0x1083D4u) {
        ctx->pc = 0x1083D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083D0u;
        // 0x1083d4: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1083D8u;
        goto label_1083d8;
    }
    ctx->pc = 0x1083D0u;
    {
        const bool branch_taken_0x1083d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083D0u;
        // 0x1083d4: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083d0) {
            ctx->pc = 0x1083E0u;
            goto label_1083e0;
        }
    }
    ctx->pc = 0x1083D8u;
label_1083d8:
    // 0x1083d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1083d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1083dc:
    // 0x1083dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1083dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1083e0:
    // 0x1083e0: 0x0  nop
    ctx->pc = 0x1083e0u;
    // NOP
label_1083e4:
    // 0x1083e4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1083e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1083e8:
    // 0x1083e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1083e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1083ec:
    // 0x1083ec: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1083ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1083f0:
    // 0x1083f0: 0xe44001c0  swc1        $f0, 0x1C0($v0)
    ctx->pc = 0x1083f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 448), bits); }
label_1083f4:
    // 0x1083f4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1083f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1083f8:
    // 0x1083f8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1083f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1083fc:
    // 0x1083fc: 0xe46001c0  swc1        $f0, 0x1C0($v1)
    ctx->pc = 0x1083fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 448), bits); }
label_108400:
    // 0x108400: 0xc04094c  jal         func_102530
label_108404:
    if (ctx->pc == 0x108404u) {
        ctx->pc = 0x108404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108400u;
        // 0x108404: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108408u;
        goto label_108408;
    }
    ctx->pc = 0x108400u;
    SET_GPR_U32(ctx, 31, 0x108408u);
    ctx->pc = 0x108404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108400u;
    // 0x108404: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x108400u, 0x108408u)) {
        return;
    }
    ctx->pc = 0x108408u;
label_108408:
    // 0x108408: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x108408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10840c:
    // 0x10840c: 0xc040808  jal         func_102020
label_108410:
    if (ctx->pc == 0x108410u) {
        ctx->pc = 0x108410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10840Cu;
        // 0x108410: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x108414u;
        goto label_108414;
    }
    ctx->pc = 0x10840Cu;
    SET_GPR_U32(ctx, 31, 0x108414u);
    ctx->pc = 0x108410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10840Cu;
    // 0x108410: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x102020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102020u, 0x10840Cu, 0x108414u)) {
        return;
    }
    ctx->pc = 0x108414u;
label_108414:
    // 0x108414: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x108414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108418:
    // 0x108418: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x108418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10841c:
    // 0x10841c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10841cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108420:
    // 0x108420: 0x0  nop
    ctx->pc = 0x108420u;
    // NOP
label_108424:
    // 0x108424: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_108428:
    if (ctx->pc == 0x108428u) {
        ctx->pc = 0x108428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108424u;
        // 0x108428: 0xc600003c  lwc1        $f0, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10842Cu;
        goto label_10842c;
    }
    ctx->pc = 0x108424u;
    {
        const bool branch_taken_0x108424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108424) {
            ctx->pc = 0x108428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108424u;
            // 0x108428: 0xc600003c  lwc1        $f0, 0x3C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108468u;
            goto label_108468;
        }
    }
    ctx->pc = 0x10842Cu;
label_10842c:
    // 0x10842c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x10842cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108430:
    // 0x108430: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x108430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_108434:
    // 0x108434: 0x844401b0  lh          $a0, 0x1B0($v0)
    ctx->pc = 0x108434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_108438:
    // 0x108438: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x108438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
label_10843c:
    // 0x10843c: 0x60f809  jalr        $v1
label_108440:
    if (ctx->pc == 0x108440u) {
        ctx->pc = 0x108440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10843Cu;
        // 0x108440: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108444u;
        goto label_108444;
    }
    ctx->pc = 0x10843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108444u);
        ctx->pc = 0x108440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10843Cu;
        // 0x108440: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10843Cu, 0x108444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108444u;
label_108444:
    // 0x108444: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_108448:
    // 0x108448: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x108448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_10844c:
    // 0x10844c: 0x844401b0  lh          $a0, 0x1B0($v0)
    ctx->pc = 0x10844cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_108450:
    // 0x108450: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x108450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
label_108454:
    // 0x108454: 0x60f809  jalr        $v1
label_108458:
    if (ctx->pc == 0x108458u) {
        ctx->pc = 0x108458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108454u;
        // 0x108458: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10845Cu;
        goto label_10845c;
    }
    ctx->pc = 0x108454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10845Cu);
        ctx->pc = 0x108458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108454u;
        // 0x108458: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108454u, 0x10845Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10845Cu;
label_10845c:
    // 0x10845c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_108460:
    // 0x108460: 0x10000014  b           . + 4 + (0x14 << 2)
label_108464:
    if (ctx->pc == 0x108464u) {
        ctx->pc = 0x108464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108460u;
        // 0x108464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108468u;
        goto label_108468;
    }
    ctx->pc = 0x108460u;
    {
        const bool branch_taken_0x108460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108460u;
        // 0x108464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108460) {
            ctx->pc = 0x1084B4u;
            goto label_1084b4;
        }
    }
    ctx->pc = 0x108468u;
label_108468:
    // 0x108468: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x108468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10846c:
    // 0x10846c: 0x0  nop
    ctx->pc = 0x10846cu;
    // NOP
label_108470:
    // 0x108470: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_108474:
    if (ctx->pc == 0x108474u) {
        ctx->pc = 0x108474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108470u;
        // 0x108474: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108478u;
        goto label_108478;
    }
    ctx->pc = 0x108470u;
    {
        const bool branch_taken_0x108470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108470) {
            ctx->pc = 0x108474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108470u;
            // 0x108474: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108480u;
            goto label_108480;
        }
    }
    ctx->pc = 0x108478u;
label_108478:
    // 0x108478: 0x10000011  b           . + 4 + (0x11 << 2)
label_10847c:
    if (ctx->pc == 0x10847Cu) {
        ctx->pc = 0x10847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108478u;
        // 0x10847c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108480u;
        goto label_108480;
    }
    ctx->pc = 0x108478u;
    {
        const bool branch_taken_0x108478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108478u;
        // 0x10847c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108478) {
            ctx->pc = 0x1084C0u;
            goto label_1084c0;
        }
    }
    ctx->pc = 0x108480u;
label_108480:
    // 0x108480: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_108484:
    // 0x108484: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x108484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_108488:
    // 0x108488: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x108488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_10848c:
    // 0x10848c: 0x60f809  jalr        $v1
label_108490:
    if (ctx->pc == 0x108490u) {
        ctx->pc = 0x108490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10848Cu;
        // 0x108490: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108494u;
        goto label_108494;
    }
    ctx->pc = 0x10848Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108494u);
        ctx->pc = 0x108490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10848Cu;
        // 0x108490: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10848Cu, 0x108494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108494u;
label_108494:
    // 0x108494: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x108494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_108498:
    // 0x108498: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x108498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_10849c:
    // 0x10849c: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x10849cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_1084a0:
    // 0x1084a0: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_1084a4:
    // 0x1084a4: 0x60f809  jalr        $v1
label_1084a8:
    if (ctx->pc == 0x1084A8u) {
        ctx->pc = 0x1084A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084A4u;
        // 0x1084a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084ACu;
        goto label_1084ac;
    }
    ctx->pc = 0x1084A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1084ACu);
        ctx->pc = 0x1084A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084A4u;
        // 0x1084a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1084A4u, 0x1084ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1084ACu;
label_1084ac:
    // 0x1084ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1084acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1084b0:
    // 0x1084b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1084b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1084b4:
    // 0x1084b4: 0xc06ca9e  jal         func_1B2A78
label_1084b8:
    if (ctx->pc == 0x1084B8u) {
        ctx->pc = 0x1084B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084B4u;
        // 0x1084b8: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084BCu;
        goto label_1084bc;
    }
    ctx->pc = 0x1084B4u;
    SET_GPR_U32(ctx, 31, 0x1084BCu);
    ctx->pc = 0x1084B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084B4u;
    // 0x1084b8: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2A78u, 0x1084B4u, 0x1084BCu)) {
        return;
    }
    ctx->pc = 0x1084BCu;
label_1084bc:
    // 0x1084bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1084bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1084c0:
    // 0x1084c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1084c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1084c4:
    // 0x1084c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1084c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1084c8:
    // 0x1084c8: 0x3e00008  jr          $ra
label_1084cc:
    if (ctx->pc == 0x1084CCu) {
        ctx->pc = 0x1084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084C8u;
        // 0x1084cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084D0u;
        goto label_fallthrough_0x1084c8;
    }
    ctx->pc = 0x1084C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084C8u;
        // 0x1084cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1084C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1084c8:
    ctx->pc = 0x1084D0u;
}
