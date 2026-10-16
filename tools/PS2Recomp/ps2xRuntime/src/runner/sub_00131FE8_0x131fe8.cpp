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

// Function: sub_00131FE8
// Address: 0x131fe8 - 0x132340
void sub_00131FE8_0x131fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131FE8_0x131fe8");
#endif

    switch (ctx->pc) {
        case 0x131fe8u: goto label_131fe8;
        case 0x131fecu: goto label_131fec;
        case 0x131ff0u: goto label_131ff0;
        case 0x131ff4u: goto label_131ff4;
        case 0x131ff8u: goto label_131ff8;
        case 0x131ffcu: goto label_131ffc;
        case 0x132000u: goto label_132000;
        case 0x132004u: goto label_132004;
        case 0x132008u: goto label_132008;
        case 0x13200cu: goto label_13200c;
        case 0x132010u: goto label_132010;
        case 0x132014u: goto label_132014;
        case 0x132018u: goto label_132018;
        case 0x13201cu: goto label_13201c;
        case 0x132020u: goto label_132020;
        case 0x132024u: goto label_132024;
        case 0x132028u: goto label_132028;
        case 0x13202cu: goto label_13202c;
        case 0x132030u: goto label_132030;
        case 0x132034u: goto label_132034;
        case 0x132038u: goto label_132038;
        case 0x13203cu: goto label_13203c;
        case 0x132040u: goto label_132040;
        case 0x132044u: goto label_132044;
        case 0x132048u: goto label_132048;
        case 0x13204cu: goto label_13204c;
        case 0x132050u: goto label_132050;
        case 0x132054u: goto label_132054;
        case 0x132058u: goto label_132058;
        case 0x13205cu: goto label_13205c;
        case 0x132060u: goto label_132060;
        case 0x132064u: goto label_132064;
        case 0x132068u: goto label_132068;
        case 0x13206cu: goto label_13206c;
        case 0x132070u: goto label_132070;
        case 0x132074u: goto label_132074;
        case 0x132078u: goto label_132078;
        case 0x13207cu: goto label_13207c;
        case 0x132080u: goto label_132080;
        case 0x132084u: goto label_132084;
        case 0x132088u: goto label_132088;
        case 0x13208cu: goto label_13208c;
        case 0x132090u: goto label_132090;
        case 0x132094u: goto label_132094;
        case 0x132098u: goto label_132098;
        case 0x13209cu: goto label_13209c;
        case 0x1320a0u: goto label_1320a0;
        case 0x1320a4u: goto label_1320a4;
        case 0x1320a8u: goto label_1320a8;
        case 0x1320acu: goto label_1320ac;
        case 0x1320b0u: goto label_1320b0;
        case 0x1320b4u: goto label_1320b4;
        case 0x1320b8u: goto label_1320b8;
        case 0x1320bcu: goto label_1320bc;
        case 0x1320c0u: goto label_1320c0;
        case 0x1320c4u: goto label_1320c4;
        case 0x1320c8u: goto label_1320c8;
        case 0x1320ccu: goto label_1320cc;
        case 0x1320d0u: goto label_1320d0;
        case 0x1320d4u: goto label_1320d4;
        case 0x1320d8u: goto label_1320d8;
        case 0x1320dcu: goto label_1320dc;
        case 0x1320e0u: goto label_1320e0;
        case 0x1320e4u: goto label_1320e4;
        case 0x1320e8u: goto label_1320e8;
        case 0x1320ecu: goto label_1320ec;
        case 0x1320f0u: goto label_1320f0;
        case 0x1320f4u: goto label_1320f4;
        case 0x1320f8u: goto label_1320f8;
        case 0x1320fcu: goto label_1320fc;
        case 0x132100u: goto label_132100;
        case 0x132104u: goto label_132104;
        case 0x132108u: goto label_132108;
        case 0x13210cu: goto label_13210c;
        case 0x132110u: goto label_132110;
        case 0x132114u: goto label_132114;
        case 0x132118u: goto label_132118;
        case 0x13211cu: goto label_13211c;
        case 0x132120u: goto label_132120;
        case 0x132124u: goto label_132124;
        case 0x132128u: goto label_132128;
        case 0x13212cu: goto label_13212c;
        case 0x132130u: goto label_132130;
        case 0x132134u: goto label_132134;
        case 0x132138u: goto label_132138;
        case 0x13213cu: goto label_13213c;
        case 0x132140u: goto label_132140;
        case 0x132144u: goto label_132144;
        case 0x132148u: goto label_132148;
        case 0x13214cu: goto label_13214c;
        case 0x132150u: goto label_132150;
        case 0x132154u: goto label_132154;
        case 0x132158u: goto label_132158;
        case 0x13215cu: goto label_13215c;
        case 0x132160u: goto label_132160;
        case 0x132164u: goto label_132164;
        case 0x132168u: goto label_132168;
        case 0x13216cu: goto label_13216c;
        case 0x132170u: goto label_132170;
        case 0x132174u: goto label_132174;
        case 0x132178u: goto label_132178;
        case 0x13217cu: goto label_13217c;
        case 0x132180u: goto label_132180;
        case 0x132184u: goto label_132184;
        case 0x132188u: goto label_132188;
        case 0x13218cu: goto label_13218c;
        case 0x132190u: goto label_132190;
        case 0x132194u: goto label_132194;
        case 0x132198u: goto label_132198;
        case 0x13219cu: goto label_13219c;
        case 0x1321a0u: goto label_1321a0;
        case 0x1321a4u: goto label_1321a4;
        case 0x1321a8u: goto label_1321a8;
        case 0x1321acu: goto label_1321ac;
        case 0x1321b0u: goto label_1321b0;
        case 0x1321b4u: goto label_1321b4;
        case 0x1321b8u: goto label_1321b8;
        case 0x1321bcu: goto label_1321bc;
        case 0x1321c0u: goto label_1321c0;
        case 0x1321c4u: goto label_1321c4;
        case 0x1321c8u: goto label_1321c8;
        case 0x1321ccu: goto label_1321cc;
        case 0x1321d0u: goto label_1321d0;
        case 0x1321d4u: goto label_1321d4;
        case 0x1321d8u: goto label_1321d8;
        case 0x1321dcu: goto label_1321dc;
        case 0x1321e0u: goto label_1321e0;
        case 0x1321e4u: goto label_1321e4;
        case 0x1321e8u: goto label_1321e8;
        case 0x1321ecu: goto label_1321ec;
        case 0x1321f0u: goto label_1321f0;
        case 0x1321f4u: goto label_1321f4;
        case 0x1321f8u: goto label_1321f8;
        case 0x1321fcu: goto label_1321fc;
        case 0x132200u: goto label_132200;
        case 0x132204u: goto label_132204;
        case 0x132208u: goto label_132208;
        case 0x13220cu: goto label_13220c;
        case 0x132210u: goto label_132210;
        case 0x132214u: goto label_132214;
        case 0x132218u: goto label_132218;
        case 0x13221cu: goto label_13221c;
        case 0x132220u: goto label_132220;
        case 0x132224u: goto label_132224;
        case 0x132228u: goto label_132228;
        case 0x13222cu: goto label_13222c;
        case 0x132230u: goto label_132230;
        case 0x132234u: goto label_132234;
        case 0x132238u: goto label_132238;
        case 0x13223cu: goto label_13223c;
        case 0x132240u: goto label_132240;
        case 0x132244u: goto label_132244;
        case 0x132248u: goto label_132248;
        case 0x13224cu: goto label_13224c;
        case 0x132250u: goto label_132250;
        case 0x132254u: goto label_132254;
        case 0x132258u: goto label_132258;
        case 0x13225cu: goto label_13225c;
        case 0x132260u: goto label_132260;
        case 0x132264u: goto label_132264;
        case 0x132268u: goto label_132268;
        case 0x13226cu: goto label_13226c;
        case 0x132270u: goto label_132270;
        case 0x132274u: goto label_132274;
        case 0x132278u: goto label_132278;
        case 0x13227cu: goto label_13227c;
        case 0x132280u: goto label_132280;
        case 0x132284u: goto label_132284;
        case 0x132288u: goto label_132288;
        case 0x13228cu: goto label_13228c;
        case 0x132290u: goto label_132290;
        case 0x132294u: goto label_132294;
        case 0x132298u: goto label_132298;
        case 0x13229cu: goto label_13229c;
        case 0x1322a0u: goto label_1322a0;
        case 0x1322a4u: goto label_1322a4;
        case 0x1322a8u: goto label_1322a8;
        case 0x1322acu: goto label_1322ac;
        case 0x1322b0u: goto label_1322b0;
        case 0x1322b4u: goto label_1322b4;
        case 0x1322b8u: goto label_1322b8;
        case 0x1322bcu: goto label_1322bc;
        case 0x1322c0u: goto label_1322c0;
        case 0x1322c4u: goto label_1322c4;
        case 0x1322c8u: goto label_1322c8;
        case 0x1322ccu: goto label_1322cc;
        case 0x1322d0u: goto label_1322d0;
        case 0x1322d4u: goto label_1322d4;
        case 0x1322d8u: goto label_1322d8;
        case 0x1322dcu: goto label_1322dc;
        case 0x1322e0u: goto label_1322e0;
        case 0x1322e4u: goto label_1322e4;
        case 0x1322e8u: goto label_1322e8;
        case 0x1322ecu: goto label_1322ec;
        case 0x1322f0u: goto label_1322f0;
        case 0x1322f4u: goto label_1322f4;
        case 0x1322f8u: goto label_1322f8;
        case 0x1322fcu: goto label_1322fc;
        case 0x132300u: goto label_132300;
        case 0x132304u: goto label_132304;
        case 0x132308u: goto label_132308;
        case 0x13230cu: goto label_13230c;
        case 0x132310u: goto label_132310;
        case 0x132314u: goto label_132314;
        case 0x132318u: goto label_132318;
        case 0x13231cu: goto label_13231c;
        case 0x132320u: goto label_132320;
        case 0x132324u: goto label_132324;
        case 0x132328u: goto label_132328;
        case 0x13232cu: goto label_13232c;
        case 0x132330u: goto label_132330;
        case 0x132334u: goto label_132334;
        case 0x132338u: goto label_132338;
        case 0x13233cu: goto label_13233c;
        default: break;
    }

    ctx->pc = 0x131fe8u;

label_131fe8:
    // 0x131fe8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x131fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_131fec:
    // 0x131fec: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x131fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_131ff0:
    // 0x131ff0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x131ff0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_131ff4:
    // 0x131ff4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131ff8:
    // 0x131ff8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x131ff8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_131ffc:
    // 0x131ffc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x131ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_132000:
    // 0x132000: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x132000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_132004:
    // 0x132004: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x132004u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
label_132008:
    // 0x132008: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x132008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_13200c:
    // 0x13200c: 0x3c17006b  lui         $s7, 0x6B
    ctx->pc = 0x13200cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
label_132010:
    // 0x132010: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x132010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_132014:
    // 0x132014: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x132014u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
label_132018:
    // 0x132018: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x132018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_13201c:
    // 0x13201c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x13201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_132020:
    // 0x132020: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x132020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_132024:
    // 0x132024: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x132024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_132028:
    // 0x132028: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_13202c:
    // 0x13202c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x13202cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_132030:
    // 0x132030: 0xc049af6  jal         func_126BD8
label_132034:
    if (ctx->pc == 0x132034u) {
        ctx->pc = 0x132034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132030u;
        // 0x132034: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132038u;
        goto label_132038;
    }
    ctx->pc = 0x132030u;
    SET_GPR_U32(ctx, 31, 0x132038u);
    ctx->pc = 0x132034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132030u;
    // 0x132034: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126BD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126BD8u, 0x132030u, 0x132038u)) {
        return;
    }
    ctx->pc = 0x132038u;
label_132038:
    // 0x132038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13203c:
    // 0x13203c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13203cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132040:
    // 0x132040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132044:
    // 0x132044: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x132044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_132048:
    // 0x132048: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x132048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13204c:
    // 0x13204c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x13204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_132050:
    // 0x132050: 0xc049a1e  jal         func_126878
label_132054:
    if (ctx->pc == 0x132054u) {
        ctx->pc = 0x132054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132050u;
        // 0x132054: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132058u;
        goto label_132058;
    }
    ctx->pc = 0x132050u;
    SET_GPR_U32(ctx, 31, 0x132058u);
    ctx->pc = 0x132054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132050u;
    // 0x132054: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126878u, 0x132050u, 0x132058u)) {
        return;
    }
    ctx->pc = 0x132058u;
label_132058:
    // 0x132058: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_13205c:
    if (ctx->pc == 0x13205Cu) {
        ctx->pc = 0x13205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132058u;
        // 0x13205c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132060u;
        goto label_132060;
    }
    ctx->pc = 0x132058u;
    {
        const bool branch_taken_0x132058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132058u;
        // 0x13205c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132058) {
            ctx->pc = 0x1321C8u;
            goto label_1321c8;
        }
    }
    ctx->pc = 0x132060u;
label_132060:
    // 0x132060: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x132060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_132064:
    // 0x132064: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_132068:
    if (ctx->pc == 0x132068u) {
        ctx->pc = 0x132068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132064u;
        // 0x132068: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13206Cu;
        goto label_13206c;
    }
    ctx->pc = 0x132064u;
    {
        const bool branch_taken_0x132064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132064u;
        // 0x132068: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132064) {
            ctx->pc = 0x1320B4u;
            goto label_1320b4;
        }
    }
    ctx->pc = 0x13206Cu;
label_13206c:
    // 0x13206c: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x13206cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_132070:
    // 0x132070: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x132070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_132074:
    // 0x132074: 0x2651021c  addiu       $s1, $s2, 0x21C
    ctx->pc = 0x132074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 540));
label_132078:
    // 0x132078: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x132078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13207c:
    // 0x13207c: 0x8e848668  lw          $a0, -0x7998($s4)
    ctx->pc = 0x13207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936168)));
label_132080:
    // 0x132080: 0xc0595cc  jal         func_165730
label_132084:
    if (ctx->pc == 0x132084u) {
        ctx->pc = 0x132084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132080u;
        // 0x132084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132088u;
        goto label_132088;
    }
    ctx->pc = 0x132080u;
    SET_GPR_U32(ctx, 31, 0x132088u);
    ctx->pc = 0x132084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132080u;
    // 0x132084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165730u, 0x132080u, 0x132088u)) {
        return;
    }
    ctx->pc = 0x132088u;
label_132088:
    // 0x132088: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
label_13208c:
    if (ctx->pc == 0x13208Cu) {
        ctx->pc = 0x13208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132088u;
        // 0x13208c: 0x8e42025c  lw          $v0, 0x25C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132090u;
        goto label_132090;
    }
    ctx->pc = 0x132088u;
    {
        const bool branch_taken_0x132088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x132088) {
            ctx->pc = 0x13208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132088u;
            // 0x13208c: 0x8e42025c  lw          $v0, 0x25C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1320A4u;
            goto label_1320a4;
        }
    }
    ctx->pc = 0x132090u;
label_132090:
    // 0x132090: 0x8e848668  lw          $a0, -0x7998($s4)
    ctx->pc = 0x132090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936168)));
label_132094:
    // 0x132094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132098:
    // 0x132098: 0xc05961e  jal         func_165878
label_13209c:
    if (ctx->pc == 0x13209Cu) {
        ctx->pc = 0x13209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132098u;
        // 0x13209c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1320A0u;
        goto label_1320a0;
    }
    ctx->pc = 0x132098u;
    SET_GPR_U32(ctx, 31, 0x1320A0u);
    ctx->pc = 0x13209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132098u;
    // 0x13209c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165878u, 0x132098u, 0x1320A0u)) {
        return;
    }
    ctx->pc = 0x1320A0u;
label_1320a0:
    // 0x1320a0: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x1320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_1320a4:
    // 0x1320a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1320a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1320a8:
    // 0x1320a8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1320a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1320ac:
    // 0x1320ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1320b0:
    if (ctx->pc == 0x1320B0u) {
        ctx->pc = 0x1320B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320ACu;
        // 0x1320b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1320B4u;
        goto label_1320b4;
    }
    ctx->pc = 0x1320ACu;
    {
        const bool branch_taken_0x1320ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1320B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320ACu;
        // 0x1320b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320ac) {
            ctx->pc = 0x132078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132078;
        }
    }
    ctx->pc = 0x1320B4u;
label_1320b4:
    // 0x1320b4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1320b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1320b8:
    // 0x1320b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1320b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1320bc:
    // 0x1320bc: 0xc04642c  jal         func_1190B0
label_1320c0:
    if (ctx->pc == 0x1320C0u) {
        ctx->pc = 0x1320C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320BCu;
        // 0x1320c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1320C4u;
        goto label_1320c4;
    }
    ctx->pc = 0x1320BCu;
    SET_GPR_U32(ctx, 31, 0x1320C4u);
    ctx->pc = 0x1320C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1320BCu;
    // 0x1320c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1320BCu, 0x1320C4u)) {
        return;
    }
    ctx->pc = 0x1320C4u;
label_1320c4:
    // 0x1320c4: 0x0  nop
    ctx->pc = 0x1320c4u;
    // NOP
label_1320c8:
    // 0x1320c8: 0x0  nop
    ctx->pc = 0x1320c8u;
    // NOP
label_1320cc:
    // 0x1320cc: 0x46000044  c1          0x44
    ctx->pc = 0x1320ccu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1320d0:
    // 0x1320d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1320d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1320d4:
    // 0x1320d4: 0x0  nop
    ctx->pc = 0x1320d4u;
    // NOP
label_1320d8:
    // 0x1320d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1320d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1320dc:
    // 0x1320dc: 0x0  nop
    ctx->pc = 0x1320dcu;
    // NOP
label_1320e0:
    // 0x1320e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1320e4:
    if (ctx->pc == 0x1320E4u) {
        ctx->pc = 0x1320E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320E0u;
        // 0x1320e4: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1320E8u;
        goto label_1320e8;
    }
    ctx->pc = 0x1320E0u;
    {
        const bool branch_taken_0x1320e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1320E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320E0u;
        // 0x1320e4: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320e0) {
            ctx->pc = 0x132100u;
            goto label_132100;
        }
    }
    ctx->pc = 0x1320E8u;
label_1320e8:
    // 0x1320e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1320e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1320ec:
    // 0x1320ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1320ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1320f0:
    // 0x1320f0: 0x0  nop
    ctx->pc = 0x1320f0u;
    // NOP
label_1320f4:
    // 0x1320f4: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1320f4u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1320f8:
    // 0x1320f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1320fc:
    if (ctx->pc == 0x1320FCu) {
        ctx->pc = 0x1320FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320F8u;
        // 0x1320fc: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132100u;
        goto label_132100;
    }
    ctx->pc = 0x1320F8u;
    {
        const bool branch_taken_0x1320f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1320FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320F8u;
        // 0x1320fc: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320f8) {
            ctx->pc = 0x132108u;
            goto label_132108;
        }
    }
    ctx->pc = 0x132100u;
label_132100:
    // 0x132100: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x132100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132104:
    // 0x132104: 0x0  nop
    ctx->pc = 0x132104u;
    // NOP
label_132108:
    // 0x132108: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x132108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13210c:
    // 0x13210c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x13210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132110:
    // 0x132110: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x132110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_132114:
    // 0x132114: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x132114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_132118:
    // 0x132118: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x132118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_13211c:
    // 0x13211c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x13211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_132120:
    // 0x132120: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x132120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_132124:
    // 0x132124: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x132124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_132128:
    // 0x132128: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x132128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13212c:
    // 0x13212c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x13212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132130:
    // 0x132130: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x132130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132134:
    // 0x132134: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x132134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_132138:
    // 0x132138: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x132138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13213c:
    // 0x13213c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x13213cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_132140:
    // 0x132140: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x132140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_132144:
    // 0x132144: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x132144u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_132148:
    // 0x132148: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x132148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_13214c:
    // 0x13214c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x13214cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_132150:
    // 0x132150: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x132150u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_132154:
    // 0x132154: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x132154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_132158:
    // 0x132158: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x132158u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_13215c:
    // 0x13215c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x13215cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_132160:
    // 0x132160: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x132160u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_132164:
    // 0x132164: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x132164u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_132168:
    // 0x132168: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x132168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_13216c:
    // 0x13216c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x13216cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_132170:
    // 0x132170: 0xc04f0f0  jal         func_13C3C0
label_132174:
    if (ctx->pc == 0x132174u) {
        ctx->pc = 0x132174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132170u;
        // 0x132174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132178u;
        goto label_132178;
    }
    ctx->pc = 0x132170u;
    SET_GPR_U32(ctx, 31, 0x132178u);
    ctx->pc = 0x132174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132170u;
    // 0x132174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x132170u, 0x132178u)) {
        return;
    }
    ctx->pc = 0x132178u;
label_132178:
    // 0x132178: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x132178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_13217c:
    // 0x13217c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x13217cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_132180:
    // 0x132180: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x132180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_132184:
    // 0x132184: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x132184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132188:
    // 0x132188: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x132188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13218c:
    // 0x13218c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132190:
    // 0x132190: 0xc04f0d4  jal         func_13C350
label_132194:
    if (ctx->pc == 0x132194u) {
        ctx->pc = 0x132194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132190u;
        // 0x132194: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132198u;
        goto label_132198;
    }
    ctx->pc = 0x132190u;
    SET_GPR_U32(ctx, 31, 0x132198u);
    ctx->pc = 0x132194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132190u;
    // 0x132194: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x132190u, 0x132198u)) {
        return;
    }
    ctx->pc = 0x132198u;
label_132198:
    // 0x132198: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x132198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_13219c:
    // 0x13219c: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x13219cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1321a0:
    // 0x1321a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1321a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1321a4:
    // 0x1321a4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1321a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1321a8:
    // 0x1321a8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1321a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1321ac:
    // 0x1321ac: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1321acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_1321b0:
    // 0x1321b0: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1321b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1321b4:
    // 0x1321b4: 0xc092d94  jal         func_24B650
label_1321b8:
    if (ctx->pc == 0x1321B8u) {
        ctx->pc = 0x1321B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321B4u;
        // 0x1321b8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1321BCu;
        goto label_1321bc;
    }
    ctx->pc = 0x1321B4u;
    SET_GPR_U32(ctx, 31, 0x1321BCu);
    ctx->pc = 0x1321B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1321B4u;
    // 0x1321b8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1321B4u, 0x1321BCu)) {
        return;
    }
    ctx->pc = 0x1321BCu;
label_1321bc:
    // 0x1321bc: 0xc08992e  jal         func_2264B8
label_1321c0:
    if (ctx->pc == 0x1321C0u) {
        ctx->pc = 0x1321C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321BCu;
        // 0x1321c0: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1321C4u;
        goto label_1321c4;
    }
    ctx->pc = 0x1321BCu;
    SET_GPR_U32(ctx, 31, 0x1321C4u);
    ctx->pc = 0x1321C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1321BCu;
    // 0x1321c0: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1321BCu, 0x1321C4u)) {
        return;
    }
    ctx->pc = 0x1321C4u;
label_1321c4:
    // 0x1321c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1321c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1321c8:
    // 0x1321c8: 0xc0486bc  jal         func_121AF0
label_1321cc:
    if (ctx->pc == 0x1321CCu) {
        ctx->pc = 0x1321CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321C8u;
        // 0x1321cc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1321D0u;
        goto label_1321d0;
    }
    ctx->pc = 0x1321C8u;
    SET_GPR_U32(ctx, 31, 0x1321D0u);
    ctx->pc = 0x1321CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1321C8u;
    // 0x1321cc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x121AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x121AF0u, 0x1321C8u, 0x1321D0u)) {
        return;
    }
    ctx->pc = 0x1321D0u;
label_1321d0:
    // 0x1321d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1321d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1321d4:
    // 0x1321d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1321d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1321d8:
    // 0x1321d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1321d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1321dc:
    // 0x1321dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1321dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1321e0:
    // 0x1321e0: 0xc048d20  jal         func_123480
label_1321e4:
    if (ctx->pc == 0x1321E4u) {
        ctx->pc = 0x1321E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321E0u;
        // 0x1321e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1321E8u;
        goto label_1321e8;
    }
    ctx->pc = 0x1321E0u;
    SET_GPR_U32(ctx, 31, 0x1321E8u);
    ctx->pc = 0x1321E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1321E0u;
    // 0x1321e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123480u, 0x1321E0u, 0x1321E8u)) {
        return;
    }
    ctx->pc = 0x1321E8u;
label_1321e8:
    // 0x1321e8: 0xc6401ba4  lwc1        $f0, 0x1BA4($s2)
    ctx->pc = 0x1321e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1321ec:
    // 0x1321ec: 0xc6411ba0  lwc1        $f1, 0x1BA0($s2)
    ctx->pc = 0x1321ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1321f0:
    // 0x1321f0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1321f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1321f4:
    // 0x1321f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1321f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1321f8:
    // 0x1321f8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1321f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1321fc:
    // 0x1321fc: 0x0  nop
    ctx->pc = 0x1321fcu;
    // NOP
label_132200:
    // 0x132200: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_132204:
    if (ctx->pc == 0x132204u) {
        ctx->pc = 0x132204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132200u;
        // 0x132204: 0xe6411ba0  swc1        $f1, 0x1BA0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7072), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132208u;
        goto label_132208;
    }
    ctx->pc = 0x132200u;
    {
        const bool branch_taken_0x132200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132200u;
        // 0x132204: 0xe6411ba0  swc1        $f1, 0x1BA0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7072), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132200) {
            ctx->pc = 0x13220Cu;
            goto label_13220c;
        }
    }
    ctx->pc = 0x132208u;
label_132208:
    // 0x132208: 0xe6551ba0  swc1        $f21, 0x1BA0($s2)
    ctx->pc = 0x132208u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7072), bits); }
label_13220c:
    // 0x13220c: 0xc6401bac  lwc1        $f0, 0x1BAC($s2)
    ctx->pc = 0x13220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132210:
    // 0x132210: 0xc6411ba8  lwc1        $f1, 0x1BA8($s2)
    ctx->pc = 0x132210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132214:
    // 0x132214: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x132214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_132218:
    // 0x132218: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x132218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13221c:
    // 0x13221c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x13221cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132220:
    // 0x132220: 0x0  nop
    ctx->pc = 0x132220u;
    // NOP
label_132224:
    // 0x132224: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_132228:
    if (ctx->pc == 0x132228u) {
        ctx->pc = 0x132228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132224u;
        // 0x132228: 0xe6411ba8  swc1        $f1, 0x1BA8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7080), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13222Cu;
        goto label_13222c;
    }
    ctx->pc = 0x132224u;
    {
        const bool branch_taken_0x132224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132224u;
        // 0x132228: 0xe6411ba8  swc1        $f1, 0x1BA8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7080), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132224) {
            ctx->pc = 0x132230u;
            goto label_132230;
        }
    }
    ctx->pc = 0x13222Cu;
label_13222c:
    // 0x13222c: 0xe6551ba8  swc1        $f21, 0x1BA8($s2)
    ctx->pc = 0x13222cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7080), bits); }
label_132230:
    // 0x132230: 0xc05a2a4  jal         func_168A90
label_132234:
    if (ctx->pc == 0x132234u) {
        ctx->pc = 0x132234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132230u;
        // 0x132234: 0xc64c1ba8  lwc1        $f12, 0x1BA8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132238u;
        goto label_132238;
    }
    ctx->pc = 0x132230u;
    SET_GPR_U32(ctx, 31, 0x132238u);
    ctx->pc = 0x132234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132230u;
    // 0x132234: 0xc64c1ba8  lwc1        $f12, 0x1BA8($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x168A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168A90u, 0x132230u, 0x132238u)) {
        return;
    }
    ctx->pc = 0x132238u;
label_132238:
    // 0x132238: 0xc04dd42  jal         func_137508
label_13223c:
    if (ctx->pc == 0x13223Cu) {
        ctx->pc = 0x13223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132238u;
        // 0x13223c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132240u;
        goto label_132240;
    }
    ctx->pc = 0x132238u;
    SET_GPR_U32(ctx, 31, 0x132240u);
    ctx->pc = 0x13223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132238u;
    // 0x13223c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137508u, 0x132238u, 0x132240u)) {
        return;
    }
    ctx->pc = 0x132240u;
label_132240:
    // 0x132240: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x132240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_132244:
    // 0x132244: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x132244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_132248:
    // 0x132248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x132248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13224c:
    // 0x13224c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13224cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_132250:
    // 0x132250: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x132250u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_132254:
    // 0x132254: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x132254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132258:
    // 0x132258: 0x0  nop
    ctx->pc = 0x132258u;
    // NOP
label_13225c:
    // 0x13225c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_132260:
    if (ctx->pc == 0x132260u) {
        ctx->pc = 0x132260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13225Cu;
        // 0x132260: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132264u;
        goto label_132264;
    }
    ctx->pc = 0x13225Cu;
    {
        const bool branch_taken_0x13225c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13225c) {
            ctx->pc = 0x132260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13225Cu;
            // 0x132260: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132264u;
            goto label_132264;
        }
    }
    ctx->pc = 0x132264u;
label_132264:
    // 0x132264: 0xc05a27c  jal         func_1689F0
label_132268:
    if (ctx->pc == 0x132268u) {
        ctx->pc = 0x13226Cu;
        goto label_13226c;
    }
    ctx->pc = 0x132264u;
    SET_GPR_U32(ctx, 31, 0x13226Cu);
    ctx->pc = 0x1689F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1689F0u, 0x132264u, 0x13226Cu)) {
        return;
    }
    ctx->pc = 0x13226Cu;
label_13226c:
    // 0x13226c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x13226cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_132270:
    // 0x132270: 0xc6401ba0  lwc1        $f0, 0x1BA0($s2)
    ctx->pc = 0x132270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132274:
    // 0x132274: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x132274u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_132278:
    // 0x132278: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x132278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13227c:
    // 0x13227c: 0x0  nop
    ctx->pc = 0x13227cu;
    // NOP
label_132280:
    // 0x132280: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_132284:
    if (ctx->pc == 0x132284u) {
        ctx->pc = 0x132284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132280u;
        // 0x132284: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132288u;
        goto label_132288;
    }
    ctx->pc = 0x132280u;
    {
        const bool branch_taken_0x132280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132280) {
            ctx->pc = 0x132284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132280u;
            // 0x132284: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132288u;
            goto label_132288;
        }
    }
    ctx->pc = 0x132288u;
label_132288:
    // 0x132288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13228c:
    // 0x13228c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13228cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_132290:
    // 0x132290: 0xc04cc8e  jal         func_133238
label_132294:
    if (ctx->pc == 0x132294u) {
        ctx->pc = 0x132294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132290u;
        // 0x132294: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132298u;
        goto label_132298;
    }
    ctx->pc = 0x132290u;
    SET_GPR_U32(ctx, 31, 0x132298u);
    ctx->pc = 0x132294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132290u;
    // 0x132294: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x133238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x133238u, 0x132290u, 0x132298u)) {
        return;
    }
    ctx->pc = 0x132298u;
label_132298:
    // 0x132298: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x132298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_13229c:
    // 0x13229c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x13229cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1322a0:
    // 0x1322a0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1322a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1322a4:
    // 0x1322a4: 0x40f809  jalr        $v0
label_1322a8:
    if (ctx->pc == 0x1322A8u) {
        ctx->pc = 0x1322A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322A4u;
        // 0x1322a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322ACu;
        goto label_1322ac;
    }
    ctx->pc = 0x1322A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1322ACu);
        ctx->pc = 0x1322A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322A4u;
        // 0x1322a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322A4u, 0x1322ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1322ACu;
label_1322ac:
    // 0x1322ac: 0x8ee344c8  lw          $v1, 0x44C8($s7)
    ctx->pc = 0x1322acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17608)));
label_1322b0:
    // 0x1322b0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1322b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1322b4:
    // 0x1322b4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1322b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1322b8:
    // 0x1322b8: 0x8ec21a70  lw          $v0, 0x1A70($s6)
    ctx->pc = 0x1322b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6768)));
label_1322bc:
    // 0x1322bc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1322c0:
    if (ctx->pc == 0x1322C0u) {
        ctx->pc = 0x1322C4u;
        goto label_1322c4;
    }
    ctx->pc = 0x1322BCu;
    {
        const bool branch_taken_0x1322bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1322bc) {
            ctx->pc = 0x1322D8u;
            goto label_1322d8;
        }
    }
    ctx->pc = 0x1322C4u;
label_1322c4:
    // 0x1322c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1322c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1322c8:
    // 0x1322c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1322cc:
    if (ctx->pc == 0x1322CCu) {
        ctx->pc = 0x1322D0u;
        goto label_1322d0;
    }
    ctx->pc = 0x1322C8u;
    {
        const bool branch_taken_0x1322c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1322c8) {
            ctx->pc = 0x1322D8u;
            goto label_1322d8;
        }
    }
    ctx->pc = 0x1322D0u;
label_1322d0:
    // 0x1322d0: 0xc07fd18  jal         func_1FF460
label_1322d4:
    if (ctx->pc == 0x1322D4u) {
        ctx->pc = 0x1322D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322D0u;
        // 0x1322d4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322D8u;
        goto label_1322d8;
    }
    ctx->pc = 0x1322D0u;
    SET_GPR_U32(ctx, 31, 0x1322D8u);
    ctx->pc = 0x1322D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322D0u;
    // 0x1322d4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1322D0u, 0x1322D8u)) {
        return;
    }
    ctx->pc = 0x1322D8u;
label_1322d8:
    // 0x1322d8: 0xc04c00a  jal         func_130028
label_1322dc:
    if (ctx->pc == 0x1322DCu) {
        ctx->pc = 0x1322DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322D8u;
        // 0x1322dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322E0u;
        goto label_1322e0;
    }
    ctx->pc = 0x1322D8u;
    SET_GPR_U32(ctx, 31, 0x1322E0u);
    ctx->pc = 0x1322DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322D8u;
    // 0x1322dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x130028u, 0x1322D8u, 0x1322E0u)) {
        return;
    }
    ctx->pc = 0x1322E0u;
label_1322e0:
    // 0x1322e0: 0xc068218  jal         func_1A0860
label_1322e4:
    if (ctx->pc == 0x1322E4u) {
        ctx->pc = 0x1322E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322E0u;
        // 0x1322e4: 0x26440320  addiu       $a0, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322E8u;
        goto label_1322e8;
    }
    ctx->pc = 0x1322E0u;
    SET_GPR_U32(ctx, 31, 0x1322E8u);
    ctx->pc = 0x1322E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322E0u;
    // 0x1322e4: 0x26440320  addiu       $a0, $s2, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x1322E0u, 0x1322E8u)) {
        return;
    }
    ctx->pc = 0x1322E8u;
label_1322e8:
    // 0x1322e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1322e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1322ec:
    // 0x1322ec: 0xc0c4a1f  jal         func_31287C
label_1322f0:
    if (ctx->pc == 0x1322F0u) {
        ctx->pc = 0x1322F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322ECu;
        // 0x1322f0: 0x27c5dd28  addiu       $a1, $fp, -0x22D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322F4u;
        goto label_1322f4;
    }
    ctx->pc = 0x1322ECu;
    SET_GPR_U32(ctx, 31, 0x1322F4u);
    ctx->pc = 0x1322F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322ECu;
    // 0x1322f0: 0x27c5dd28  addiu       $a1, $fp, -0x22D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1322ECu, 0x1322F4u)) {
        return;
    }
    ctx->pc = 0x1322F4u;
label_1322f4:
    // 0x1322f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1322f8:
    if (ctx->pc == 0x1322F8u) {
        ctx->pc = 0x1322F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322F4u;
        // 0x1322f8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322FCu;
        goto label_1322fc;
    }
    ctx->pc = 0x1322F4u;
    {
        const bool branch_taken_0x1322f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1322F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322F4u;
        // 0x1322f8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322f4) {
            ctx->pc = 0x132308u;
            goto label_132308;
        }
    }
    ctx->pc = 0x1322FCu;
label_1322fc:
    // 0x1322fc: 0xc049a70  jal         func_1269C0
label_132300:
    if (ctx->pc == 0x132300u) {
        ctx->pc = 0x132300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322FCu;
        // 0x132300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132304u;
        goto label_132304;
    }
    ctx->pc = 0x1322FCu;
    SET_GPR_U32(ctx, 31, 0x132304u);
    ctx->pc = 0x132300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322FCu;
    // 0x132300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1269C0u, 0x1322FCu, 0x132304u)) {
        return;
    }
    ctx->pc = 0x132304u;
label_132304:
    // 0x132304: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x132304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_132308:
    // 0x132308: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x132308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_13230c:
    // 0x13230c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x13230cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_132310:
    // 0x132310: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x132310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_132314:
    // 0x132314: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x132314u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_132318:
    // 0x132318: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x132318u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13231c:
    // 0x13231c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13231cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_132320:
    // 0x132320: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x132320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_132324:
    // 0x132324: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x132324u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_132328:
    // 0x132328: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13232c:
    // 0x13232c: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x13232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_132330:
    // 0x132330: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x132330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_132334:
    // 0x132334: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x132334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_132338:
    // 0x132338: 0x3e00008  jr          $ra
label_13233c:
    if (ctx->pc == 0x13233Cu) {
        ctx->pc = 0x13233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132338u;
        // 0x13233c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132340u;
        goto label_fallthrough_0x132338;
    }
    ctx->pc = 0x132338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132338u;
        // 0x13233c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132338:
    ctx->pc = 0x132340u;
}
