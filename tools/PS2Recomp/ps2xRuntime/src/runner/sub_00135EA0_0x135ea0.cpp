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

// Function: sub_00135EA0
// Address: 0x135ea0 - 0x136148
void sub_00135EA0_0x135ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135EA0_0x135ea0");
#endif

    switch (ctx->pc) {
        case 0x135ea0u: goto label_135ea0;
        case 0x135ea4u: goto label_135ea4;
        case 0x135ea8u: goto label_135ea8;
        case 0x135eacu: goto label_135eac;
        case 0x135eb0u: goto label_135eb0;
        case 0x135eb4u: goto label_135eb4;
        case 0x135eb8u: goto label_135eb8;
        case 0x135ebcu: goto label_135ebc;
        case 0x135ec0u: goto label_135ec0;
        case 0x135ec4u: goto label_135ec4;
        case 0x135ec8u: goto label_135ec8;
        case 0x135eccu: goto label_135ecc;
        case 0x135ed0u: goto label_135ed0;
        case 0x135ed4u: goto label_135ed4;
        case 0x135ed8u: goto label_135ed8;
        case 0x135edcu: goto label_135edc;
        case 0x135ee0u: goto label_135ee0;
        case 0x135ee4u: goto label_135ee4;
        case 0x135ee8u: goto label_135ee8;
        case 0x135eecu: goto label_135eec;
        case 0x135ef0u: goto label_135ef0;
        case 0x135ef4u: goto label_135ef4;
        case 0x135ef8u: goto label_135ef8;
        case 0x135efcu: goto label_135efc;
        case 0x135f00u: goto label_135f00;
        case 0x135f04u: goto label_135f04;
        case 0x135f08u: goto label_135f08;
        case 0x135f0cu: goto label_135f0c;
        case 0x135f10u: goto label_135f10;
        case 0x135f14u: goto label_135f14;
        case 0x135f18u: goto label_135f18;
        case 0x135f1cu: goto label_135f1c;
        case 0x135f20u: goto label_135f20;
        case 0x135f24u: goto label_135f24;
        case 0x135f28u: goto label_135f28;
        case 0x135f2cu: goto label_135f2c;
        case 0x135f30u: goto label_135f30;
        case 0x135f34u: goto label_135f34;
        case 0x135f38u: goto label_135f38;
        case 0x135f3cu: goto label_135f3c;
        case 0x135f40u: goto label_135f40;
        case 0x135f44u: goto label_135f44;
        case 0x135f48u: goto label_135f48;
        case 0x135f4cu: goto label_135f4c;
        case 0x135f50u: goto label_135f50;
        case 0x135f54u: goto label_135f54;
        case 0x135f58u: goto label_135f58;
        case 0x135f5cu: goto label_135f5c;
        case 0x135f60u: goto label_135f60;
        case 0x135f64u: goto label_135f64;
        case 0x135f68u: goto label_135f68;
        case 0x135f6cu: goto label_135f6c;
        case 0x135f70u: goto label_135f70;
        case 0x135f74u: goto label_135f74;
        case 0x135f78u: goto label_135f78;
        case 0x135f7cu: goto label_135f7c;
        case 0x135f80u: goto label_135f80;
        case 0x135f84u: goto label_135f84;
        case 0x135f88u: goto label_135f88;
        case 0x135f8cu: goto label_135f8c;
        case 0x135f90u: goto label_135f90;
        case 0x135f94u: goto label_135f94;
        case 0x135f98u: goto label_135f98;
        case 0x135f9cu: goto label_135f9c;
        case 0x135fa0u: goto label_135fa0;
        case 0x135fa4u: goto label_135fa4;
        case 0x135fa8u: goto label_135fa8;
        case 0x135facu: goto label_135fac;
        case 0x135fb0u: goto label_135fb0;
        case 0x135fb4u: goto label_135fb4;
        case 0x135fb8u: goto label_135fb8;
        case 0x135fbcu: goto label_135fbc;
        case 0x135fc0u: goto label_135fc0;
        case 0x135fc4u: goto label_135fc4;
        case 0x135fc8u: goto label_135fc8;
        case 0x135fccu: goto label_135fcc;
        case 0x135fd0u: goto label_135fd0;
        case 0x135fd4u: goto label_135fd4;
        case 0x135fd8u: goto label_135fd8;
        case 0x135fdcu: goto label_135fdc;
        case 0x135fe0u: goto label_135fe0;
        case 0x135fe4u: goto label_135fe4;
        case 0x135fe8u: goto label_135fe8;
        case 0x135fecu: goto label_135fec;
        case 0x135ff0u: goto label_135ff0;
        case 0x135ff4u: goto label_135ff4;
        case 0x135ff8u: goto label_135ff8;
        case 0x135ffcu: goto label_135ffc;
        case 0x136000u: goto label_136000;
        case 0x136004u: goto label_136004;
        case 0x136008u: goto label_136008;
        case 0x13600cu: goto label_13600c;
        case 0x136010u: goto label_136010;
        case 0x136014u: goto label_136014;
        case 0x136018u: goto label_136018;
        case 0x13601cu: goto label_13601c;
        case 0x136020u: goto label_136020;
        case 0x136024u: goto label_136024;
        case 0x136028u: goto label_136028;
        case 0x13602cu: goto label_13602c;
        case 0x136030u: goto label_136030;
        case 0x136034u: goto label_136034;
        case 0x136038u: goto label_136038;
        case 0x13603cu: goto label_13603c;
        case 0x136040u: goto label_136040;
        case 0x136044u: goto label_136044;
        case 0x136048u: goto label_136048;
        case 0x13604cu: goto label_13604c;
        case 0x136050u: goto label_136050;
        case 0x136054u: goto label_136054;
        case 0x136058u: goto label_136058;
        case 0x13605cu: goto label_13605c;
        case 0x136060u: goto label_136060;
        case 0x136064u: goto label_136064;
        case 0x136068u: goto label_136068;
        case 0x13606cu: goto label_13606c;
        case 0x136070u: goto label_136070;
        case 0x136074u: goto label_136074;
        case 0x136078u: goto label_136078;
        case 0x13607cu: goto label_13607c;
        case 0x136080u: goto label_136080;
        case 0x136084u: goto label_136084;
        case 0x136088u: goto label_136088;
        case 0x13608cu: goto label_13608c;
        case 0x136090u: goto label_136090;
        case 0x136094u: goto label_136094;
        case 0x136098u: goto label_136098;
        case 0x13609cu: goto label_13609c;
        case 0x1360a0u: goto label_1360a0;
        case 0x1360a4u: goto label_1360a4;
        case 0x1360a8u: goto label_1360a8;
        case 0x1360acu: goto label_1360ac;
        case 0x1360b0u: goto label_1360b0;
        case 0x1360b4u: goto label_1360b4;
        case 0x1360b8u: goto label_1360b8;
        case 0x1360bcu: goto label_1360bc;
        case 0x1360c0u: goto label_1360c0;
        case 0x1360c4u: goto label_1360c4;
        case 0x1360c8u: goto label_1360c8;
        case 0x1360ccu: goto label_1360cc;
        case 0x1360d0u: goto label_1360d0;
        case 0x1360d4u: goto label_1360d4;
        case 0x1360d8u: goto label_1360d8;
        case 0x1360dcu: goto label_1360dc;
        case 0x1360e0u: goto label_1360e0;
        case 0x1360e4u: goto label_1360e4;
        case 0x1360e8u: goto label_1360e8;
        case 0x1360ecu: goto label_1360ec;
        case 0x1360f0u: goto label_1360f0;
        case 0x1360f4u: goto label_1360f4;
        case 0x1360f8u: goto label_1360f8;
        case 0x1360fcu: goto label_1360fc;
        case 0x136100u: goto label_136100;
        case 0x136104u: goto label_136104;
        case 0x136108u: goto label_136108;
        case 0x13610cu: goto label_13610c;
        case 0x136110u: goto label_136110;
        case 0x136114u: goto label_136114;
        case 0x136118u: goto label_136118;
        case 0x13611cu: goto label_13611c;
        case 0x136120u: goto label_136120;
        case 0x136124u: goto label_136124;
        case 0x136128u: goto label_136128;
        case 0x13612cu: goto label_13612c;
        case 0x136130u: goto label_136130;
        case 0x136134u: goto label_136134;
        case 0x136138u: goto label_136138;
        case 0x13613cu: goto label_13613c;
        case 0x136140u: goto label_136140;
        case 0x136144u: goto label_136144;
        default: break;
    }

    ctx->pc = 0x135ea0u;

label_135ea0:
    // 0x135ea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x135ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_135ea4:
    // 0x135ea4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x135ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_135ea8:
    // 0x135ea8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x135ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_135eac:
    // 0x135eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x135eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135eb0:
    // 0x135eb0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x135eb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_135eb4:
    // 0x135eb4: 0x26110320  addiu       $s1, $s0, 0x320
    ctx->pc = 0x135eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_135eb8:
    // 0x135eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_135ebc:
    // 0x135ebc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_135ec0:
    // 0x135ec0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x135ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_135ec4:
    // 0x135ec4: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x135ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
label_135ec8:
    // 0x135ec8: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x135ec8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_135ecc:
    // 0x135ecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x135eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_135ed0:
    // 0x135ed0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_135ed4:
    if (ctx->pc == 0x135ED4u) {
        ctx->pc = 0x135ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135ED0u;
        // 0x135ed4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x135ED8u;
        goto label_135ed8;
    }
    ctx->pc = 0x135ED0u;
    {
        const bool branch_taken_0x135ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135ED0u;
        // 0x135ed4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ed0) {
            ctx->pc = 0x135F04u;
            goto label_135f04;
        }
    }
    ctx->pc = 0x135ED8u;
label_135ed8:
    // 0x135ed8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x135ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_135edc:
    // 0x135edc: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x135edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
label_135ee0:
    // 0x135ee0: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x135ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_135ee4:
    // 0x135ee4: 0x40f809  jalr        $v0
label_135ee8:
    if (ctx->pc == 0x135EE8u) {
        ctx->pc = 0x135EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EE4u;
        // 0x135ee8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EECu;
        goto label_135eec;
    }
    ctx->pc = 0x135EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135EECu);
        ctx->pc = 0x135EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EE4u;
        // 0x135ee8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EE4u, 0x135EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135EECu;
label_135eec:
    // 0x135eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135ef0:
    // 0x135ef0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135ef4:
    // 0x135ef4: 0xc06826e  jal         func_1A09B8
label_135ef8:
    if (ctx->pc == 0x135EF8u) {
        ctx->pc = 0x135EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EF4u;
        // 0x135ef8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EFCu;
        goto label_135efc;
    }
    ctx->pc = 0x135EF4u;
    SET_GPR_U32(ctx, 31, 0x135EFCu);
    ctx->pc = 0x135EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135EF4u;
    // 0x135ef8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A09B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A09B8u, 0x135EF4u, 0x135EFCu)) {
        return;
    }
    ctx->pc = 0x135EFCu;
label_135efc:
    // 0x135efc: 0x10000005  b           . + 4 + (0x5 << 2)
label_135f00:
    if (ctx->pc == 0x135F00u) {
        ctx->pc = 0x135F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EFCu;
        // 0x135f00: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F04u;
        goto label_135f04;
    }
    ctx->pc = 0x135EFCu;
    {
        const bool branch_taken_0x135efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EFCu;
        // 0x135f00: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135efc) {
            ctx->pc = 0x135F14u;
            goto label_135f14;
        }
    }
    ctx->pc = 0x135F04u;
label_135f04:
    // 0x135f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135f08:
    // 0x135f08: 0xc068230  jal         func_1A08C0
label_135f0c:
    if (ctx->pc == 0x135F0Cu) {
        ctx->pc = 0x135F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F08u;
        // 0x135f0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F10u;
        goto label_135f10;
    }
    ctx->pc = 0x135F08u;
    SET_GPR_U32(ctx, 31, 0x135F10u);
    ctx->pc = 0x135F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F08u;
    // 0x135f0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A08C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A08C0u, 0x135F08u, 0x135F10u)) {
        return;
    }
    ctx->pc = 0x135F10u;
label_135f10:
    // 0x135f10: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x135f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135f14:
    // 0x135f14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x135f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135f18:
    // 0x135f18: 0xc6001be0  lwc1        $f0, 0x1BE0($s0)
    ctx->pc = 0x135f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135f1c:
    // 0x135f1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x135f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135f20:
    // 0x135f20: 0x0  nop
    ctx->pc = 0x135f20u;
    // NOP
label_135f24:
    // 0x135f24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_135f28:
    if (ctx->pc == 0x135F28u) {
        ctx->pc = 0x135F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F24u;
        // 0x135f28: 0xc6141bd0  lwc1        $f20, 0x1BD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F2Cu;
        goto label_135f2c;
    }
    ctx->pc = 0x135F24u;
    {
        const bool branch_taken_0x135f24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F24u;
        // 0x135f28: 0xc6141bd0  lwc1        $f20, 0x1BD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f24) {
            ctx->pc = 0x135F38u;
            goto label_135f38;
        }
    }
    ctx->pc = 0x135F2Cu;
label_135f2c:
    // 0x135f2c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x135f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135f30:
    // 0x135f30: 0x10000006  b           . + 4 + (0x6 << 2)
label_135f34:
    if (ctx->pc == 0x135F34u) {
        ctx->pc = 0x135F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F30u;
        // 0x135f34: 0xc6141bd8  lwc1        $f20, 0x1BD8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F38u;
        goto label_135f38;
    }
    ctx->pc = 0x135F30u;
    {
        const bool branch_taken_0x135f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F30u;
        // 0x135f34: 0xc6141bd8  lwc1        $f20, 0x1BD8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f30) {
            ctx->pc = 0x135F4Cu;
            goto label_135f4c;
        }
    }
    ctx->pc = 0x135F38u;
label_135f38:
    // 0x135f38: 0xc6001bdc  lwc1        $f0, 0x1BDC($s0)
    ctx->pc = 0x135f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135f3c:
    // 0x135f3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x135f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135f40:
    // 0x135f40: 0x0  nop
    ctx->pc = 0x135f40u;
    // NOP
label_135f44:
    // 0x135f44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_135f48:
    if (ctx->pc == 0x135F48u) {
        ctx->pc = 0x135F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F44u;
        // 0x135f48: 0xc6141bd4  lwc1        $f20, 0x1BD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F4Cu;
        goto label_135f4c;
    }
    ctx->pc = 0x135F44u;
    {
        const bool branch_taken_0x135f44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135f44) {
            ctx->pc = 0x135F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135F44u;
            // 0x135f48: 0xc6141bd4  lwc1        $f20, 0x1BD4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x135F4Cu;
            goto label_135f4c;
        }
    }
    ctx->pc = 0x135F4Cu;
label_135f4c:
    // 0x135f4c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x135f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_135f50:
    // 0x135f50: 0x84640178  lh          $a0, 0x178($v1)
    ctx->pc = 0x135f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 376)));
label_135f54:
    // 0x135f54: 0x8c62017c  lw          $v0, 0x17C($v1)
    ctx->pc = 0x135f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
label_135f58:
    // 0x135f58: 0x40f809  jalr        $v0
label_135f5c:
    if (ctx->pc == 0x135F5Cu) {
        ctx->pc = 0x135F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F58u;
        // 0x135f5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F60u;
        goto label_135f60;
    }
    ctx->pc = 0x135F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135F60u);
        ctx->pc = 0x135F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F58u;
        // 0x135f5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F58u, 0x135F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135F60u;
label_135f60:
    // 0x135f60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_135f64:
    if (ctx->pc == 0x135F64u) {
        ctx->pc = 0x135F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F60u;
        // 0x135f64: 0xc6141bd8  lwc1        $f20, 0x1BD8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F68u;
        goto label_135f68;
    }
    ctx->pc = 0x135F60u;
    {
        const bool branch_taken_0x135f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135f60) {
            ctx->pc = 0x135F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135F60u;
            // 0x135f64: 0xc6141bd8  lwc1        $f20, 0x1BD8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x135F68u;
            goto label_135f68;
        }
    }
    ctx->pc = 0x135F68u;
label_135f68:
    // 0x135f68: 0xc6011acc  lwc1        $f1, 0x1ACC($s0)
    ctx->pc = 0x135f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135f6c:
    // 0x135f6c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x135f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_135f70:
    // 0x135f70: 0x0  nop
    ctx->pc = 0x135f70u;
    // NOP
label_135f74:
    // 0x135f74: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x135f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135f78:
    // 0x135f78: 0x0  nop
    ctx->pc = 0x135f78u;
    // NOP
label_135f7c:
    // 0x135f7c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_135f80:
    if (ctx->pc == 0x135F80u) {
        ctx->pc = 0x135F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F7Cu;
        // 0x135f80: 0xc6001ab4  lwc1        $f0, 0x1AB4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F84u;
        goto label_135f84;
    }
    ctx->pc = 0x135F7Cu;
    {
        const bool branch_taken_0x135f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135f7c) {
            ctx->pc = 0x135F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135F7Cu;
            // 0x135f80: 0xc6001ab4  lwc1        $f0, 0x1AB4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x135FACu;
            goto label_135fac;
        }
    }
    ctx->pc = 0x135F84u;
label_135f84:
    // 0x135f84: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x135f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_135f88:
    // 0x135f88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135f88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_135f8c:
    // 0x135f8c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x135f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135f90:
    // 0x135f90: 0x0  nop
    ctx->pc = 0x135f90u;
    // NOP
label_135f94:
    // 0x135f94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_135f98:
    if (ctx->pc == 0x135F98u) {
        ctx->pc = 0x135F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F94u;
        // 0x135f98: 0xe6001acc  swc1        $f0, 0x1ACC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6860), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F9Cu;
        goto label_135f9c;
    }
    ctx->pc = 0x135F94u;
    {
        const bool branch_taken_0x135f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F94u;
        // 0x135f98: 0xe6001acc  swc1        $f0, 0x1ACC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f94) {
            ctx->pc = 0x135FA8u;
            goto label_135fa8;
        }
    }
    ctx->pc = 0x135F9Cu;
label_135f9c:
    // 0x135f9c: 0xc6001ac0  lwc1        $f0, 0x1AC0($s0)
    ctx->pc = 0x135f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135fa0:
    // 0x135fa0: 0xe6021acc  swc1        $f2, 0x1ACC($s0)
    ctx->pc = 0x135fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6860), bits); }
label_135fa4:
    // 0x135fa4: 0xe6001abc  swc1        $f0, 0x1ABC($s0)
    ctx->pc = 0x135fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6844), bits); }
label_135fa8:
    // 0x135fa8: 0xc6001ab4  lwc1        $f0, 0x1AB4($s0)
    ctx->pc = 0x135fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135fac:
    // 0x135fac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x135facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_135fb0:
    // 0x135fb0: 0x0  nop
    ctx->pc = 0x135fb0u;
    // NOP
label_135fb4:
    // 0x135fb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x135fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135fb8:
    // 0x135fb8: 0x0  nop
    ctx->pc = 0x135fb8u;
    // NOP
label_135fbc:
    // 0x135fbc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_135fc0:
    if (ctx->pc == 0x135FC0u) {
        ctx->pc = 0x135FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FBCu;
        // 0x135fc0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135FC4u;
        goto label_135fc4;
    }
    ctx->pc = 0x135FBCu;
    {
        const bool branch_taken_0x135fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FBCu;
        // 0x135fc0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135fbc) {
            ctx->pc = 0x135FCCu;
            goto label_135fcc;
        }
    }
    ctx->pc = 0x135FC4u;
label_135fc4:
    // 0x135fc4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x135fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_135fc8:
    // 0x135fc8: 0xe6001ab4  swc1        $f0, 0x1AB4($s0)
    ctx->pc = 0x135fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6836), bits); }
label_135fcc:
    // 0x135fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_135fd0:
    // 0x135fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_135fd4:
    // 0x135fd4: 0x24434238  addiu       $v1, $v0, 0x4238
    ctx->pc = 0x135fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16952));
label_135fd8:
    // 0x135fd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x135fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135fdc:
    // 0x135fdc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x135fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_135fe0:
    // 0x135fe0: 0xc6001ab4  lwc1        $f0, 0x1AB4($s0)
    ctx->pc = 0x135fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135fe4:
    // 0x135fe4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x135fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135fe8:
    // 0x135fe8: 0x0  nop
    ctx->pc = 0x135fe8u;
    // NOP
label_135fec:
    // 0x135fec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_135ff0:
    if (ctx->pc == 0x135FF0u) {
        ctx->pc = 0x135FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FECu;
        // 0x135ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135FF4u;
        goto label_135ff4;
    }
    ctx->pc = 0x135FECu;
    {
        const bool branch_taken_0x135fec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x135FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FECu;
        // 0x135ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135fec) {
            ctx->pc = 0x135FF8u;
            goto label_135ff8;
        }
    }
    ctx->pc = 0x135FF4u;
label_135ff4:
    // 0x135ff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x135ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135ff8:
    // 0x135ff8: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
label_135ffc:
    if (ctx->pc == 0x135FFCu) {
        ctx->pc = 0x135FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FF8u;
        // 0x135ffc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136000u;
        goto label_136000;
    }
    ctx->pc = 0x135FF8u;
    {
        const bool branch_taken_0x135ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135ff8) {
            ctx->pc = 0x135FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135FF8u;
            // 0x135ffc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136128u;
            goto label_136128;
        }
    }
    ctx->pc = 0x136000u;
label_136000:
    // 0x136000: 0x8e021b84  lw          $v0, 0x1B84($s0)
    ctx->pc = 0x136000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7044)));
label_136004:
    // 0x136004: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x136004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_136008:
    // 0x136008: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_13600c:
    if (ctx->pc == 0x13600Cu) {
        ctx->pc = 0x13600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136008u;
        // 0x13600c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136010u;
        goto label_136010;
    }
    ctx->pc = 0x136008u;
    {
        const bool branch_taken_0x136008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136008) {
            ctx->pc = 0x13600Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136008u;
            // 0x13600c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136128u;
            goto label_136128;
        }
    }
    ctx->pc = 0x136010u;
label_136010:
    // 0x136010: 0xc6001acc  lwc1        $f0, 0x1ACC($s0)
    ctx->pc = 0x136010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136014:
    // 0x136014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x136014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_136018:
    // 0x136018: 0x0  nop
    ctx->pc = 0x136018u;
    // NOP
label_13601c:
    // 0x13601c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_136020:
    if (ctx->pc == 0x136020u) {
        ctx->pc = 0x136020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13601Cu;
        // 0x136020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136024u;
        goto label_136024;
    }
    ctx->pc = 0x13601Cu;
    {
        const bool branch_taken_0x13601c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13601Cu;
        // 0x136020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13601c) {
            ctx->pc = 0x136028u;
            goto label_136028;
        }
    }
    ctx->pc = 0x136024u;
label_136024:
    // 0x136024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136028:
    // 0x136028: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13602c:
    if (ctx->pc == 0x13602Cu) {
        ctx->pc = 0x136030u;
        goto label_136030;
    }
    ctx->pc = 0x136028u;
    {
        const bool branch_taken_0x136028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136028) {
            ctx->pc = 0x13603Cu;
            goto label_13603c;
        }
    }
    ctx->pc = 0x136030u;
label_136030:
    // 0x136030: 0xc6001ad8  lwc1        $f0, 0x1AD8($s0)
    ctx->pc = 0x136030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136034:
    // 0x136034: 0x1000003b  b           . + 4 + (0x3B << 2)
label_136038:
    if (ctx->pc == 0x136038u) {
        ctx->pc = 0x136038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136034u;
        // 0x136038: 0xe4600034  swc1        $f0, 0x34($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13603Cu;
        goto label_13603c;
    }
    ctx->pc = 0x136034u;
    {
        const bool branch_taken_0x136034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136034u;
        // 0x136038: 0xe4600034  swc1        $f0, 0x34($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136034) {
            ctx->pc = 0x136124u;
            goto label_136124;
        }
    }
    ctx->pc = 0x13603Cu;
label_13603c:
    // 0x13603c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_136040:
    if (ctx->pc == 0x136040u) {
        ctx->pc = 0x136040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13603Cu;
        // 0x136040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136044u;
        goto label_136044;
    }
    ctx->pc = 0x13603Cu;
    {
        const bool branch_taken_0x13603c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x136040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13603Cu;
        // 0x136040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13603c) {
            ctx->pc = 0x136058u;
            goto label_136058;
        }
    }
    ctx->pc = 0x136044u;
label_136044:
    // 0x136044: 0xc60c1ac4  lwc1        $f12, 0x1AC4($s0)
    ctx->pc = 0x136044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_136048:
    // 0x136048: 0xc04de54  jal         func_137950
label_13604c:
    if (ctx->pc == 0x13604Cu) {
        ctx->pc = 0x13604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136048u;
        // 0x13604c: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136050u;
        goto label_136050;
    }
    ctx->pc = 0x136048u;
    SET_GPR_U32(ctx, 31, 0x136050u);
    ctx->pc = 0x13604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136048u;
    // 0x13604c: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137950u, 0x136048u, 0x136050u)) {
        return;
    }
    ctx->pc = 0x136050u;
label_136050:
    // 0x136050: 0x1000000a  b           . + 4 + (0xA << 2)
label_136054:
    if (ctx->pc == 0x136054u) {
        ctx->pc = 0x136054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136050u;
        // 0x136054: 0x26234238  addiu       $v1, $s1, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136058u;
        goto label_136058;
    }
    ctx->pc = 0x136050u;
    {
        const bool branch_taken_0x136050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136050u;
        // 0x136054: 0x26234238  addiu       $v1, $s1, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136050) {
            ctx->pc = 0x13607Cu;
            goto label_13607c;
        }
    }
    ctx->pc = 0x136058u;
label_136058:
    // 0x136058: 0xc6001abc  lwc1        $f0, 0x1ABC($s0)
    ctx->pc = 0x136058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13605c:
    // 0x13605c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13605cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_136060:
    // 0x136060: 0x0  nop
    ctx->pc = 0x136060u;
    // NOP
label_136064:
    // 0x136064: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_136068:
    if (ctx->pc == 0x136068u) {
        ctx->pc = 0x136068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136064u;
        // 0x136068: 0x26234238  addiu       $v1, $s1, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13606Cu;
        goto label_13606c;
    }
    ctx->pc = 0x136064u;
    {
        const bool branch_taken_0x136064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136064u;
        // 0x136068: 0x26234238  addiu       $v1, $s1, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136064) {
            ctx->pc = 0x13607Cu;
            goto label_13607c;
        }
    }
    ctx->pc = 0x13606Cu;
label_13606c:
    // 0x13606c: 0xc60c1ac8  lwc1        $f12, 0x1AC8($s0)
    ctx->pc = 0x13606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_136070:
    // 0x136070: 0xc04de68  jal         func_1379A0
label_136074:
    if (ctx->pc == 0x136074u) {
        ctx->pc = 0x136074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136070u;
        // 0x136074: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136078u;
        goto label_136078;
    }
    ctx->pc = 0x136070u;
    SET_GPR_U32(ctx, 31, 0x136078u);
    ctx->pc = 0x136074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136070u;
    // 0x136074: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1379A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1379A0u, 0x136070u, 0x136078u)) {
        return;
    }
    ctx->pc = 0x136078u;
label_136078:
    // 0x136078: 0x26234238  addiu       $v1, $s1, 0x4238
    ctx->pc = 0x136078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16952));
label_13607c:
    // 0x13607c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_136080:
    // 0x136080: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_136084:
    if (ctx->pc == 0x136084u) {
        ctx->pc = 0x136084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136080u;
        // 0x136084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136088u;
        goto label_136088;
    }
    ctx->pc = 0x136080u;
    {
        const bool branch_taken_0x136080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136080u;
        // 0x136084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136080) {
            ctx->pc = 0x13609Cu;
            goto label_13609c;
        }
    }
    ctx->pc = 0x136088u;
label_136088:
    // 0x136088: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x136088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_13608c:
    // 0x13608c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_136090:
    if (ctx->pc == 0x136090u) {
        ctx->pc = 0x136094u;
        goto label_136094;
    }
    ctx->pc = 0x13608Cu;
    {
        const bool branch_taken_0x13608c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13608c) {
            ctx->pc = 0x13609Cu;
            goto label_13609c;
        }
    }
    ctx->pc = 0x136094u;
label_136094:
    // 0x136094: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x136094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_136098:
    // 0x136098: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x136098u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13609c:
    // 0x13609c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1360a0:
    if (ctx->pc == 0x1360A0u) {
        ctx->pc = 0x1360A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13609Cu;
        // 0x1360a0: 0x26224238  addiu       $v0, $s1, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1360A4u;
        goto label_1360a4;
    }
    ctx->pc = 0x13609Cu;
    {
        const bool branch_taken_0x13609c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13609Cu;
        // 0x1360a0: 0x26224238  addiu       $v0, $s1, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13609c) {
            ctx->pc = 0x1360BCu;
            goto label_1360bc;
        }
    }
    ctx->pc = 0x1360A4u;
label_1360a4:
    // 0x1360a4: 0xc6001adc  lwc1        $f0, 0x1ADC($s0)
    ctx->pc = 0x1360a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1360a8:
    // 0x1360a8: 0xc44c002c  lwc1        $f12, 0x2C($v0)
    ctx->pc = 0x1360a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1360ac:
    // 0x1360ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1360acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1360b0:
    // 0x1360b0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1360b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1360b4:
    // 0x1360b4: 0xc04de54  jal         func_137950
label_1360b8:
    if (ctx->pc == 0x1360B8u) {
        ctx->pc = 0x1360B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360B4u;
        // 0x1360b8: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1360BCu;
        goto label_1360bc;
    }
    ctx->pc = 0x1360B4u;
    SET_GPR_U32(ctx, 31, 0x1360BCu);
    ctx->pc = 0x1360B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360B4u;
    // 0x1360b8: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137950u, 0x1360B4u, 0x1360BCu)) {
        return;
    }
    ctx->pc = 0x1360BCu;
label_1360bc:
    // 0x1360bc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1360bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1360c0:
    // 0x1360c0: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x1360c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1360c4:
    // 0x1360c4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1360c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1360c8:
    // 0x1360c8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1360c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1360cc:
    // 0x1360cc: 0x40f809  jalr        $v0
label_1360d0:
    if (ctx->pc == 0x1360D0u) {
        ctx->pc = 0x1360D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360CCu;
        // 0x1360d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1360D4u;
        goto label_1360d4;
    }
    ctx->pc = 0x1360CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1360D4u);
        ctx->pc = 0x1360D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360CCu;
        // 0x1360d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1360CCu, 0x1360D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1360D4u;
label_1360d4:
    // 0x1360d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1360d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1360d8:
    // 0x1360d8: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
label_1360dc:
    if (ctx->pc == 0x1360DCu) {
        ctx->pc = 0x1360DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360D8u;
        // 0x1360dc: 0xae121ab8  sw          $s2, 0x1AB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6840), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1360E0u;
        goto label_1360e0;
    }
    ctx->pc = 0x1360D8u;
    {
        const bool branch_taken_0x1360d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1360d8) {
            ctx->pc = 0x1360DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1360D8u;
            // 0x1360dc: 0xae121ab8  sw          $s2, 0x1AB8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 6840), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136124u;
            goto label_136124;
        }
    }
    ctx->pc = 0x1360E0u;
label_1360e0:
    // 0x1360e0: 0x8e021ab8  lw          $v0, 0x1AB8($s0)
    ctx->pc = 0x1360e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6840)));
label_1360e4:
    // 0x1360e4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_1360e8:
    if (ctx->pc == 0x1360E8u) {
        ctx->pc = 0x1360E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360E4u;
        // 0x1360e8: 0xae121ab8  sw          $s2, 0x1AB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6840), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1360ECu;
        goto label_1360ec;
    }
    ctx->pc = 0x1360E4u;
    {
        const bool branch_taken_0x1360e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1360e4) {
            ctx->pc = 0x1360E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1360E4u;
            // 0x1360e8: 0xae121ab8  sw          $s2, 0x1AB8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 6840), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136124u;
            goto label_136124;
        }
    }
    ctx->pc = 0x1360ECu;
label_1360ec:
    // 0x1360ec: 0xc04dea6  jal         func_137A98
label_1360f0:
    if (ctx->pc == 0x1360F0u) {
        ctx->pc = 0x1360F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360ECu;
        // 0x1360f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1360F4u;
        goto label_1360f4;
    }
    ctx->pc = 0x1360ECu;
    SET_GPR_U32(ctx, 31, 0x1360F4u);
    ctx->pc = 0x1360F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360ECu;
    // 0x1360f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137A98u, 0x1360ECu, 0x1360F4u)) {
        return;
    }
    ctx->pc = 0x1360F4u;
label_1360f4:
    // 0x1360f4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1360f8:
    if (ctx->pc == 0x1360F8u) {
        ctx->pc = 0x1360F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360F4u;
        // 0x1360f8: 0xae121ab8  sw          $s2, 0x1AB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6840), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1360FCu;
        goto label_1360fc;
    }
    ctx->pc = 0x1360F4u;
    {
        const bool branch_taken_0x1360f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1360f4) {
            ctx->pc = 0x1360F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1360F4u;
            // 0x1360f8: 0xae121ab8  sw          $s2, 0x1AB8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 6840), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136124u;
            goto label_136124;
        }
    }
    ctx->pc = 0x1360FCu;
label_1360fc:
    // 0x1360fc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1360fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_136100:
    // 0x136100: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x136100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_136104:
    // 0x136104: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x136104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_136108:
    // 0x136108: 0x60f809  jalr        $v1
label_13610c:
    if (ctx->pc == 0x13610Cu) {
        ctx->pc = 0x13610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136108u;
        // 0x13610c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136110u;
        goto label_136110;
    }
    ctx->pc = 0x136108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136110u);
        ctx->pc = 0x13610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136108u;
        // 0x13610c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136108u, 0x136110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136110u;
label_136110:
    // 0x136110: 0xc60c1ae0  lwc1        $f12, 0x1AE0($s0)
    ctx->pc = 0x136110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_136114:
    // 0x136114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136118:
    // 0x136118: 0xc04de54  jal         func_137950
label_13611c:
    if (ctx->pc == 0x13611Cu) {
        ctx->pc = 0x13611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136118u;
        // 0x13611c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136120u;
        goto label_136120;
    }
    ctx->pc = 0x136118u;
    SET_GPR_U32(ctx, 31, 0x136120u);
    ctx->pc = 0x13611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136118u;
    // 0x13611c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137950u, 0x136118u, 0x136120u)) {
        return;
    }
    ctx->pc = 0x136120u;
label_136120:
    // 0x136120: 0xae121ab8  sw          $s2, 0x1AB8($s0)
    ctx->pc = 0x136120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6840), GPR_U32(ctx, 18));
label_136124:
    // 0x136124: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x136124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_136128:
    // 0x136128: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x136128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13612c:
    // 0x13612c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13612cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_136130:
    // 0x136130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_136134:
    // 0x136134: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x136134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_136138:
    // 0x136138: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x136138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13613c:
    // 0x13613c: 0x3e00008  jr          $ra
label_136140:
    if (ctx->pc == 0x136140u) {
        ctx->pc = 0x136140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13613Cu;
        // 0x136140: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136144u;
        goto label_136144;
    }
    ctx->pc = 0x13613Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13613Cu;
        // 0x136140: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13613Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136144u;
label_136144:
    // 0x136144: 0x0  nop
    ctx->pc = 0x136144u;
    // NOP
    ctx->pc = 0x136148u;
}
