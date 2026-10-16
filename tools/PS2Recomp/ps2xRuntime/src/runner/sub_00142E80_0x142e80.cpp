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

// Function: sub_00142E80
// Address: 0x142e80 - 0x143268
void sub_00142E80_0x142e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142E80_0x142e80");
#endif

    switch (ctx->pc) {
        case 0x142e80u: goto label_142e80;
        case 0x142e84u: goto label_142e84;
        case 0x142e88u: goto label_142e88;
        case 0x142e8cu: goto label_142e8c;
        case 0x142e90u: goto label_142e90;
        case 0x142e94u: goto label_142e94;
        case 0x142e98u: goto label_142e98;
        case 0x142e9cu: goto label_142e9c;
        case 0x142ea0u: goto label_142ea0;
        case 0x142ea4u: goto label_142ea4;
        case 0x142ea8u: goto label_142ea8;
        case 0x142eacu: goto label_142eac;
        case 0x142eb0u: goto label_142eb0;
        case 0x142eb4u: goto label_142eb4;
        case 0x142eb8u: goto label_142eb8;
        case 0x142ebcu: goto label_142ebc;
        case 0x142ec0u: goto label_142ec0;
        case 0x142ec4u: goto label_142ec4;
        case 0x142ec8u: goto label_142ec8;
        case 0x142eccu: goto label_142ecc;
        case 0x142ed0u: goto label_142ed0;
        case 0x142ed4u: goto label_142ed4;
        case 0x142ed8u: goto label_142ed8;
        case 0x142edcu: goto label_142edc;
        case 0x142ee0u: goto label_142ee0;
        case 0x142ee4u: goto label_142ee4;
        case 0x142ee8u: goto label_142ee8;
        case 0x142eecu: goto label_142eec;
        case 0x142ef0u: goto label_142ef0;
        case 0x142ef4u: goto label_142ef4;
        case 0x142ef8u: goto label_142ef8;
        case 0x142efcu: goto label_142efc;
        case 0x142f00u: goto label_142f00;
        case 0x142f04u: goto label_142f04;
        case 0x142f08u: goto label_142f08;
        case 0x142f0cu: goto label_142f0c;
        case 0x142f10u: goto label_142f10;
        case 0x142f14u: goto label_142f14;
        case 0x142f18u: goto label_142f18;
        case 0x142f1cu: goto label_142f1c;
        case 0x142f20u: goto label_142f20;
        case 0x142f24u: goto label_142f24;
        case 0x142f28u: goto label_142f28;
        case 0x142f2cu: goto label_142f2c;
        case 0x142f30u: goto label_142f30;
        case 0x142f34u: goto label_142f34;
        case 0x142f38u: goto label_142f38;
        case 0x142f3cu: goto label_142f3c;
        case 0x142f40u: goto label_142f40;
        case 0x142f44u: goto label_142f44;
        case 0x142f48u: goto label_142f48;
        case 0x142f4cu: goto label_142f4c;
        case 0x142f50u: goto label_142f50;
        case 0x142f54u: goto label_142f54;
        case 0x142f58u: goto label_142f58;
        case 0x142f5cu: goto label_142f5c;
        case 0x142f60u: goto label_142f60;
        case 0x142f64u: goto label_142f64;
        case 0x142f68u: goto label_142f68;
        case 0x142f6cu: goto label_142f6c;
        case 0x142f70u: goto label_142f70;
        case 0x142f74u: goto label_142f74;
        case 0x142f78u: goto label_142f78;
        case 0x142f7cu: goto label_142f7c;
        case 0x142f80u: goto label_142f80;
        case 0x142f84u: goto label_142f84;
        case 0x142f88u: goto label_142f88;
        case 0x142f8cu: goto label_142f8c;
        case 0x142f90u: goto label_142f90;
        case 0x142f94u: goto label_142f94;
        case 0x142f98u: goto label_142f98;
        case 0x142f9cu: goto label_142f9c;
        case 0x142fa0u: goto label_142fa0;
        case 0x142fa4u: goto label_142fa4;
        case 0x142fa8u: goto label_142fa8;
        case 0x142facu: goto label_142fac;
        case 0x142fb0u: goto label_142fb0;
        case 0x142fb4u: goto label_142fb4;
        case 0x142fb8u: goto label_142fb8;
        case 0x142fbcu: goto label_142fbc;
        case 0x142fc0u: goto label_142fc0;
        case 0x142fc4u: goto label_142fc4;
        case 0x142fc8u: goto label_142fc8;
        case 0x142fccu: goto label_142fcc;
        case 0x142fd0u: goto label_142fd0;
        case 0x142fd4u: goto label_142fd4;
        case 0x142fd8u: goto label_142fd8;
        case 0x142fdcu: goto label_142fdc;
        case 0x142fe0u: goto label_142fe0;
        case 0x142fe4u: goto label_142fe4;
        case 0x142fe8u: goto label_142fe8;
        case 0x142fecu: goto label_142fec;
        case 0x142ff0u: goto label_142ff0;
        case 0x142ff4u: goto label_142ff4;
        case 0x142ff8u: goto label_142ff8;
        case 0x142ffcu: goto label_142ffc;
        case 0x143000u: goto label_143000;
        case 0x143004u: goto label_143004;
        case 0x143008u: goto label_143008;
        case 0x14300cu: goto label_14300c;
        case 0x143010u: goto label_143010;
        case 0x143014u: goto label_143014;
        case 0x143018u: goto label_143018;
        case 0x14301cu: goto label_14301c;
        case 0x143020u: goto label_143020;
        case 0x143024u: goto label_143024;
        case 0x143028u: goto label_143028;
        case 0x14302cu: goto label_14302c;
        case 0x143030u: goto label_143030;
        case 0x143034u: goto label_143034;
        case 0x143038u: goto label_143038;
        case 0x14303cu: goto label_14303c;
        case 0x143040u: goto label_143040;
        case 0x143044u: goto label_143044;
        case 0x143048u: goto label_143048;
        case 0x14304cu: goto label_14304c;
        case 0x143050u: goto label_143050;
        case 0x143054u: goto label_143054;
        case 0x143058u: goto label_143058;
        case 0x14305cu: goto label_14305c;
        case 0x143060u: goto label_143060;
        case 0x143064u: goto label_143064;
        case 0x143068u: goto label_143068;
        case 0x14306cu: goto label_14306c;
        case 0x143070u: goto label_143070;
        case 0x143074u: goto label_143074;
        case 0x143078u: goto label_143078;
        case 0x14307cu: goto label_14307c;
        case 0x143080u: goto label_143080;
        case 0x143084u: goto label_143084;
        case 0x143088u: goto label_143088;
        case 0x14308cu: goto label_14308c;
        case 0x143090u: goto label_143090;
        case 0x143094u: goto label_143094;
        case 0x143098u: goto label_143098;
        case 0x14309cu: goto label_14309c;
        case 0x1430a0u: goto label_1430a0;
        case 0x1430a4u: goto label_1430a4;
        case 0x1430a8u: goto label_1430a8;
        case 0x1430acu: goto label_1430ac;
        case 0x1430b0u: goto label_1430b0;
        case 0x1430b4u: goto label_1430b4;
        case 0x1430b8u: goto label_1430b8;
        case 0x1430bcu: goto label_1430bc;
        case 0x1430c0u: goto label_1430c0;
        case 0x1430c4u: goto label_1430c4;
        case 0x1430c8u: goto label_1430c8;
        case 0x1430ccu: goto label_1430cc;
        case 0x1430d0u: goto label_1430d0;
        case 0x1430d4u: goto label_1430d4;
        case 0x1430d8u: goto label_1430d8;
        case 0x1430dcu: goto label_1430dc;
        case 0x1430e0u: goto label_1430e0;
        case 0x1430e4u: goto label_1430e4;
        case 0x1430e8u: goto label_1430e8;
        case 0x1430ecu: goto label_1430ec;
        case 0x1430f0u: goto label_1430f0;
        case 0x1430f4u: goto label_1430f4;
        case 0x1430f8u: goto label_1430f8;
        case 0x1430fcu: goto label_1430fc;
        case 0x143100u: goto label_143100;
        case 0x143104u: goto label_143104;
        case 0x143108u: goto label_143108;
        case 0x14310cu: goto label_14310c;
        case 0x143110u: goto label_143110;
        case 0x143114u: goto label_143114;
        case 0x143118u: goto label_143118;
        case 0x14311cu: goto label_14311c;
        case 0x143120u: goto label_143120;
        case 0x143124u: goto label_143124;
        case 0x143128u: goto label_143128;
        case 0x14312cu: goto label_14312c;
        case 0x143130u: goto label_143130;
        case 0x143134u: goto label_143134;
        case 0x143138u: goto label_143138;
        case 0x14313cu: goto label_14313c;
        case 0x143140u: goto label_143140;
        case 0x143144u: goto label_143144;
        case 0x143148u: goto label_143148;
        case 0x14314cu: goto label_14314c;
        case 0x143150u: goto label_143150;
        case 0x143154u: goto label_143154;
        case 0x143158u: goto label_143158;
        case 0x14315cu: goto label_14315c;
        case 0x143160u: goto label_143160;
        case 0x143164u: goto label_143164;
        case 0x143168u: goto label_143168;
        case 0x14316cu: goto label_14316c;
        case 0x143170u: goto label_143170;
        case 0x143174u: goto label_143174;
        case 0x143178u: goto label_143178;
        case 0x14317cu: goto label_14317c;
        case 0x143180u: goto label_143180;
        case 0x143184u: goto label_143184;
        case 0x143188u: goto label_143188;
        case 0x14318cu: goto label_14318c;
        case 0x143190u: goto label_143190;
        case 0x143194u: goto label_143194;
        case 0x143198u: goto label_143198;
        case 0x14319cu: goto label_14319c;
        case 0x1431a0u: goto label_1431a0;
        case 0x1431a4u: goto label_1431a4;
        case 0x1431a8u: goto label_1431a8;
        case 0x1431acu: goto label_1431ac;
        case 0x1431b0u: goto label_1431b0;
        case 0x1431b4u: goto label_1431b4;
        case 0x1431b8u: goto label_1431b8;
        case 0x1431bcu: goto label_1431bc;
        case 0x1431c0u: goto label_1431c0;
        case 0x1431c4u: goto label_1431c4;
        case 0x1431c8u: goto label_1431c8;
        case 0x1431ccu: goto label_1431cc;
        case 0x1431d0u: goto label_1431d0;
        case 0x1431d4u: goto label_1431d4;
        case 0x1431d8u: goto label_1431d8;
        case 0x1431dcu: goto label_1431dc;
        case 0x1431e0u: goto label_1431e0;
        case 0x1431e4u: goto label_1431e4;
        case 0x1431e8u: goto label_1431e8;
        case 0x1431ecu: goto label_1431ec;
        case 0x1431f0u: goto label_1431f0;
        case 0x1431f4u: goto label_1431f4;
        case 0x1431f8u: goto label_1431f8;
        case 0x1431fcu: goto label_1431fc;
        case 0x143200u: goto label_143200;
        case 0x143204u: goto label_143204;
        case 0x143208u: goto label_143208;
        case 0x14320cu: goto label_14320c;
        case 0x143210u: goto label_143210;
        case 0x143214u: goto label_143214;
        case 0x143218u: goto label_143218;
        case 0x14321cu: goto label_14321c;
        case 0x143220u: goto label_143220;
        case 0x143224u: goto label_143224;
        case 0x143228u: goto label_143228;
        case 0x14322cu: goto label_14322c;
        case 0x143230u: goto label_143230;
        case 0x143234u: goto label_143234;
        case 0x143238u: goto label_143238;
        case 0x14323cu: goto label_14323c;
        case 0x143240u: goto label_143240;
        case 0x143244u: goto label_143244;
        case 0x143248u: goto label_143248;
        case 0x14324cu: goto label_14324c;
        case 0x143250u: goto label_143250;
        case 0x143254u: goto label_143254;
        case 0x143258u: goto label_143258;
        case 0x14325cu: goto label_14325c;
        case 0x143260u: goto label_143260;
        case 0x143264u: goto label_143264;
        default: break;
    }

    ctx->pc = 0x142e80u;

label_142e80:
    // 0x142e80: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x142e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_142e84:
    // 0x142e84: 0x7fb20200  sq          $s2, 0x200($sp)
    ctx->pc = 0x142e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 18));
label_142e88:
    // 0x142e88: 0x7fb401e0  sq          $s4, 0x1E0($sp)
    ctx->pc = 0x142e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 20));
label_142e8c:
    // 0x142e8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x142e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_142e90:
    // 0x142e90: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x142e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
label_142e94:
    // 0x142e94: 0x7fb10210  sq          $s1, 0x210($sp)
    ctx->pc = 0x142e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 17));
label_142e98:
    // 0x142e98: 0x7fb301f0  sq          $s3, 0x1F0($sp)
    ctx->pc = 0x142e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 19));
label_142e9c:
    // 0x142e9c: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x142e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
label_142ea0:
    // 0x142ea0: 0xe7b50238  swc1        $f21, 0x238($sp)
    ctx->pc = 0x142ea0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_142ea4:
    // 0x142ea4: 0xe7b40230  swc1        $f20, 0x230($sp)
    ctx->pc = 0x142ea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_142ea8:
    // 0x142ea8: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x142ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_142eac:
    // 0x142eac: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
label_142eb0:
    if (ctx->pc == 0x142EB0u) {
        ctx->pc = 0x142EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EACu;
        // 0x142eb0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142EB4u;
        goto label_142eb4;
    }
    ctx->pc = 0x142EACu;
    {
        const bool branch_taken_0x142eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EACu;
        // 0x142eb0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142eac) {
            ctx->pc = 0x143240u;
            goto label_143240;
        }
    }
    ctx->pc = 0x142EB4u;
label_142eb4:
    // 0x142eb4: 0x8e44011c  lw          $a0, 0x11C($s2)
    ctx->pc = 0x142eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_142eb8:
    // 0x142eb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x142eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_142ebc:
    // 0x142ebc: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x142ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_142ec0:
    // 0x142ec0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x142ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_142ec4:
    // 0x142ec4: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x142ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_142ec8:
    // 0x142ec8: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x142ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
label_142ecc:
    // 0x142ecc: 0xc08941c  jal         func_225070
label_142ed0:
    if (ctx->pc == 0x142ED0u) {
        ctx->pc = 0x142ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142ECCu;
        // 0x142ed0: 0xa3a00003  sb          $zero, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142ED4u;
        goto label_142ed4;
    }
    ctx->pc = 0x142ECCu;
    SET_GPR_U32(ctx, 31, 0x142ED4u);
    ctx->pc = 0x142ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142ECCu;
    // 0x142ed0: 0xa3a00003  sb          $zero, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225070u, 0x142ECCu, 0x142ED4u)) {
        return;
    }
    ctx->pc = 0x142ED4u;
label_142ed4:
    // 0x142ed4: 0xc0893a2  jal         func_224E88
label_142ed8:
    if (ctx->pc == 0x142ED8u) {
        ctx->pc = 0x142ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142ED4u;
        // 0x142ed8: 0x8e44011c  lw          $a0, 0x11C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142EDCu;
        goto label_142edc;
    }
    ctx->pc = 0x142ED4u;
    SET_GPR_U32(ctx, 31, 0x142EDCu);
    ctx->pc = 0x142ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142ED4u;
    // 0x142ed8: 0x8e44011c  lw          $a0, 0x11C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x142ED4u, 0x142EDCu)) {
        return;
    }
    ctx->pc = 0x142EDCu;
label_142edc:
    // 0x142edc: 0xc0760d0  jal         func_1D8340
label_142ee0:
    if (ctx->pc == 0x142EE0u) {
        ctx->pc = 0x142EE4u;
        goto label_142ee4;
    }
    ctx->pc = 0x142EDCu;
    SET_GPR_U32(ctx, 31, 0x142EE4u);
    ctx->pc = 0x1D8340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8340u, 0x142EDCu, 0x142EE4u)) {
        return;
    }
    ctx->pc = 0x142EE4u;
label_142ee4:
    // 0x142ee4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x142ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_142ee8:
    // 0x142ee8: 0x8c6284b0  lw          $v0, -0x7B50($v1)
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935728)));
label_142eec:
    // 0x142eec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_142ef0:
    if (ctx->pc == 0x142EF0u) {
        ctx->pc = 0x142EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EECu;
        // 0x142ef0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142EF4u;
        goto label_142ef4;
    }
    ctx->pc = 0x142EECu;
    {
        const bool branch_taken_0x142eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EECu;
        // 0x142ef0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142eec) {
            ctx->pc = 0x142F00u;
            goto label_142f00;
        }
    }
    ctx->pc = 0x142EF4u;
label_142ef4:
    // 0x142ef4: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x142ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_142ef8:
    // 0x142ef8: 0x10000004  b           . + 4 + (0x4 << 2)
label_142efc:
    if (ctx->pc == 0x142EFCu) {
        ctx->pc = 0x142EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EF8u;
        // 0x142efc: 0xa0400002  sb          $zero, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F00u;
        goto label_142f00;
    }
    ctx->pc = 0x142EF8u;
    {
        const bool branch_taken_0x142ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EF8u;
        // 0x142efc: 0xa0400002  sb          $zero, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ef8) {
            ctx->pc = 0x142F0Cu;
            goto label_142f0c;
        }
    }
    ctx->pc = 0x142F00u;
label_142f00:
    // 0x142f00: 0x8e430118  lw          $v1, 0x118($s2)
    ctx->pc = 0x142f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_142f04:
    // 0x142f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142f08:
    // 0x142f08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x142f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_142f0c:
    // 0x142f0c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x142f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_142f10:
    // 0x142f10: 0x8e45012c  lw          $a1, 0x12C($s2)
    ctx->pc = 0x142f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
label_142f14:
    // 0x142f14: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x142f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_142f18:
    // 0x142f18: 0xc092e7c  jal         func_24B9F0
label_142f1c:
    if (ctx->pc == 0x142F1Cu) {
        ctx->pc = 0x142F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F18u;
        // 0x142f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F20u;
        goto label_142f20;
    }
    ctx->pc = 0x142F18u;
    SET_GPR_U32(ctx, 31, 0x142F20u);
    ctx->pc = 0x142F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F18u;
    // 0x142f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x142F18u, 0x142F20u)) {
        return;
    }
    ctx->pc = 0x142F20u;
label_142f20:
    // 0x142f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x142f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_142f24:
    // 0x142f24: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x142f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_142f28:
    // 0x142f28: 0xc64c0174  lwc1        $f12, 0x174($s2)
    ctx->pc = 0x142f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_142f2c:
    // 0x142f2c: 0xe7b4007c  swc1        $f20, 0x7C($sp)
    ctx->pc = 0x142f2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_142f30:
    // 0x142f30: 0xe7b4006c  swc1        $f20, 0x6C($sp)
    ctx->pc = 0x142f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_142f34:
    // 0x142f34: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x142f34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_142f38:
    // 0x142f38: 0xc09b1a0  jal         func_26C680
label_142f3c:
    if (ctx->pc == 0x142F3Cu) {
        ctx->pc = 0x142F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F38u;
        // 0x142f3c: 0xe7b5008c  swc1        $f21, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F40u;
        goto label_142f40;
    }
    ctx->pc = 0x142F38u;
    SET_GPR_U32(ctx, 31, 0x142F40u);
    ctx->pc = 0x142F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F38u;
    // 0x142f3c: 0xe7b5008c  swc1        $f21, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x142F38u, 0x142F40u)) {
        return;
    }
    ctx->pc = 0x142F40u;
label_142f40:
    // 0x142f40: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x142f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_142f44:
    // 0x142f44: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x142f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_142f48:
    // 0x142f48: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x142f48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_142f4c:
    // 0x142f4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x142f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_142f50:
    // 0x142f50: 0xe7b400cc  swc1        $f20, 0xCC($sp)
    ctx->pc = 0x142f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_142f54:
    // 0x142f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_142f58:
    // 0x142f58: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x142f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_142f5c:
    // 0x142f5c: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x142f5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_142f60:
    // 0x142f60: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x142f60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_142f64:
    // 0x142f64: 0xe7b4009c  swc1        $f20, 0x9C($sp)
    ctx->pc = 0x142f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_142f68:
    // 0x142f68: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x142f68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_142f6c:
    // 0x142f6c: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x142f6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_142f70:
    // 0x142f70: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x142f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_142f74:
    // 0x142f74: 0xe7b400ac  swc1        $f20, 0xAC($sp)
    ctx->pc = 0x142f74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_142f78:
    // 0x142f78: 0xe7b500b0  swc1        $f21, 0xB0($sp)
    ctx->pc = 0x142f78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_142f7c:
    // 0x142f7c: 0xe7b400b4  swc1        $f20, 0xB4($sp)
    ctx->pc = 0x142f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_142f80:
    // 0x142f80: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x142f80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_142f84:
    // 0x142f84: 0xe7b400bc  swc1        $f20, 0xBC($sp)
    ctx->pc = 0x142f84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_142f88:
    // 0x142f88: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x142f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_142f8c:
    // 0x142f8c: 0xc0a5dfc  jal         func_2977F0
label_142f90:
    if (ctx->pc == 0x142F90u) {
        ctx->pc = 0x142F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F8Cu;
        // 0x142f90: 0xe7b400c4  swc1        $f20, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F94u;
        goto label_142f94;
    }
    ctx->pc = 0x142F8Cu;
    SET_GPR_U32(ctx, 31, 0x142F94u);
    ctx->pc = 0x142F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F8Cu;
    // 0x142f90: 0xe7b400c4  swc1        $f20, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2977F0u, 0x142F8Cu, 0x142F94u)) {
        return;
    }
    ctx->pc = 0x142F94u;
label_142f94:
    // 0x142f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142f98:
    // 0x142f98: 0xc07cc0a  jal         func_1F3028
label_142f9c:
    if (ctx->pc == 0x142F9Cu) {
        ctx->pc = 0x142F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F98u;
        // 0x142f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142FA0u;
        goto label_142fa0;
    }
    ctx->pc = 0x142F98u;
    SET_GPR_U32(ctx, 31, 0x142FA0u);
    ctx->pc = 0x142F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F98u;
    // 0x142f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3028u, 0x142F98u, 0x142FA0u)) {
        return;
    }
    ctx->pc = 0x142FA0u;
label_142fa0:
    // 0x142fa0: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_142fa4:
    // 0x142fa4: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_142fa8:
    // 0x142fa8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142fac:
    // 0x142fac: 0xc094ac0  jal         func_252B00
label_142fb0:
    if (ctx->pc == 0x142FB0u) {
        ctx->pc = 0x142FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FACu;
        // 0x142fb0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142FB4u;
        goto label_142fb4;
    }
    ctx->pc = 0x142FACu;
    SET_GPR_U32(ctx, 31, 0x142FB4u);
    ctx->pc = 0x142FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FACu;
    // 0x142fb0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252B00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252B00u, 0x142FACu, 0x142FB4u)) {
        return;
    }
    ctx->pc = 0x142FB4u;
label_142fb4:
    // 0x142fb4: 0x8e6384b0  lw          $v1, -0x7B50($s3)
    ctx->pc = 0x142fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935728)));
label_142fb8:
    // 0x142fb8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_142fbc:
    if (ctx->pc == 0x142FBCu) {
        ctx->pc = 0x142FC0u;
        goto label_142fc0;
    }
    ctx->pc = 0x142FB8u;
    {
        const bool branch_taken_0x142fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142fb8) {
            ctx->pc = 0x142FE0u;
            goto label_142fe0;
        }
    }
    ctx->pc = 0x142FC0u;
label_142fc0:
    // 0x142fc0: 0xc07cc06  jal         func_1F3018
label_142fc4:
    if (ctx->pc == 0x142FC4u) {
        ctx->pc = 0x142FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FC0u;
        // 0x142fc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142FC8u;
        goto label_142fc8;
    }
    ctx->pc = 0x142FC0u;
    SET_GPR_U32(ctx, 31, 0x142FC8u);
    ctx->pc = 0x142FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FC0u;
    // 0x142fc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3018u, 0x142FC0u, 0x142FC8u)) {
        return;
    }
    ctx->pc = 0x142FC8u;
label_142fc8:
    // 0x142fc8: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x142fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_142fcc:
    // 0x142fcc: 0x2405032b  addiu       $a1, $zero, 0x32B
    ctx->pc = 0x142fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 811));
label_142fd0:
    // 0x142fd0: 0xc097a9e  jal         func_25EA78
label_142fd4:
    if (ctx->pc == 0x142FD4u) {
        ctx->pc = 0x142FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FD0u;
        // 0x142fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142FD8u;
        goto label_142fd8;
    }
    ctx->pc = 0x142FD0u;
    SET_GPR_U32(ctx, 31, 0x142FD8u);
    ctx->pc = 0x142FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FD0u;
    // 0x142fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x142FD0u, 0x142FD8u)) {
        return;
    }
    ctx->pc = 0x142FD8u;
label_142fd8:
    // 0x142fd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_142fdc:
    if (ctx->pc == 0x142FDCu) {
        ctx->pc = 0x142FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FD8u;
        // 0x142fdc: 0x8e6284b0  lw          $v0, -0x7B50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142FE0u;
        goto label_142fe0;
    }
    ctx->pc = 0x142FD8u;
    {
        const bool branch_taken_0x142fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FD8u;
        // 0x142fdc: 0x8e6284b0  lw          $v0, -0x7B50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fd8) {
            ctx->pc = 0x142FFCu;
            goto label_142ffc;
        }
    }
    ctx->pc = 0x142FE0u;
label_142fe0:
    // 0x142fe0: 0xc07cc06  jal         func_1F3018
label_142fe4:
    if (ctx->pc == 0x142FE4u) {
        ctx->pc = 0x142FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FE0u;
        // 0x142fe4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142FE8u;
        goto label_142fe8;
    }
    ctx->pc = 0x142FE0u;
    SET_GPR_U32(ctx, 31, 0x142FE8u);
    ctx->pc = 0x142FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FE0u;
    // 0x142fe4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3018u, 0x142FE0u, 0x142FE8u)) {
        return;
    }
    ctx->pc = 0x142FE8u;
label_142fe8:
    // 0x142fe8: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x142fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_142fec:
    // 0x142fec: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x142fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_142ff0:
    // 0x142ff0: 0xc097a9e  jal         func_25EA78
label_142ff4:
    if (ctx->pc == 0x142FF4u) {
        ctx->pc = 0x142FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FF0u;
        // 0x142ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142FF8u;
        goto label_142ff8;
    }
    ctx->pc = 0x142FF0u;
    SET_GPR_U32(ctx, 31, 0x142FF8u);
    ctx->pc = 0x142FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FF0u;
    // 0x142ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x142FF0u, 0x142FF8u)) {
        return;
    }
    ctx->pc = 0x142FF8u;
label_142ff8:
    // 0x142ff8: 0x8e6284b0  lw          $v0, -0x7B50($s3)
    ctx->pc = 0x142ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935728)));
label_142ffc:
    // 0x142ffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_143000:
    if (ctx->pc == 0x143000u) {
        ctx->pc = 0x143000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FFCu;
        // 0x143000: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143004u;
        goto label_143004;
    }
    ctx->pc = 0x142FFCu;
    {
        const bool branch_taken_0x142ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FFCu;
        // 0x143000: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ffc) {
            ctx->pc = 0x143018u;
            goto label_143018;
        }
    }
    ctx->pc = 0x143004u;
label_143004:
    // 0x143004: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x143004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_143008:
    // 0x143008: 0xc097b28  jal         func_25ECA0
label_14300c:
    if (ctx->pc == 0x14300Cu) {
        ctx->pc = 0x14300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143008u;
        // 0x14300c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143010u;
        goto label_143010;
    }
    ctx->pc = 0x143008u;
    SET_GPR_U32(ctx, 31, 0x143010u);
    ctx->pc = 0x14300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143008u;
    // 0x14300c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x143008u, 0x143010u)) {
        return;
    }
    ctx->pc = 0x143010u;
label_143010:
    // 0x143010: 0x1000000e  b           . + 4 + (0xE << 2)
label_143014:
    if (ctx->pc == 0x143014u) {
        ctx->pc = 0x143014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143010u;
        // 0x143014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143018u;
        goto label_143018;
    }
    ctx->pc = 0x143010u;
    {
        const bool branch_taken_0x143010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143010u;
        // 0x143014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143010) {
            ctx->pc = 0x14304Cu;
            goto label_14304c;
        }
    }
    ctx->pc = 0x143018u;
label_143018:
    // 0x143018: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x143018u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
label_14301c:
    // 0x14301c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_143020:
    // 0x143020: 0xde023510  ld          $v0, 0x3510($s0)
    ctx->pc = 0x143020u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 13584)));
label_143024:
    // 0x143024: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x143024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_143028:
    // 0x143028: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14302c:
    // 0x14302c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_143030:
    // 0x143030: 0xc097b28  jal         func_25ECA0
label_143034:
    if (ctx->pc == 0x143034u) {
        ctx->pc = 0x143034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143030u;
        // 0x143034: 0xfe023510  sd          $v0, 0x3510($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 13584), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143038u;
        goto label_143038;
    }
    ctx->pc = 0x143030u;
    SET_GPR_U32(ctx, 31, 0x143038u);
    ctx->pc = 0x143034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143030u;
    // 0x143034: 0xfe023510  sd          $v0, 0x3510($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 13584), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x143030u, 0x143038u)) {
        return;
    }
    ctx->pc = 0x143038u;
label_143038:
    // 0x143038: 0xde023510  ld          $v0, 0x3510($s0)
    ctx->pc = 0x143038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 13584)));
label_14303c:
    // 0x14303c: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_143040:
    // 0x143040: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x143040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_143044:
    // 0x143044: 0xfe023510  sd          $v0, 0x3510($s0)
    ctx->pc = 0x143044u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 13584), GPR_U64(ctx, 2));
label_143048:
    // 0x143048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x143048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14304c:
    // 0x14304c: 0xc07cc0a  jal         func_1F3028
label_143050:
    if (ctx->pc == 0x143050u) {
        ctx->pc = 0x143050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14304Cu;
        // 0x143050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143054u;
        goto label_143054;
    }
    ctx->pc = 0x14304Cu;
    SET_GPR_U32(ctx, 31, 0x143054u);
    ctx->pc = 0x143050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14304Cu;
    // 0x143050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3028u, 0x14304Cu, 0x143054u)) {
        return;
    }
    ctx->pc = 0x143054u;
label_143054:
    // 0x143054: 0x8e6284b0  lw          $v0, -0x7B50($s3)
    ctx->pc = 0x143054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935728)));
label_143058:
    // 0x143058: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
label_14305c:
    if (ctx->pc == 0x14305Cu) {
        ctx->pc = 0x14305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143058u;
        // 0x14305c: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143060u;
        goto label_143060;
    }
    ctx->pc = 0x143058u;
    {
        const bool branch_taken_0x143058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143058u;
        // 0x14305c: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143058) {
            ctx->pc = 0x143228u;
            goto label_143228;
        }
    }
    ctx->pc = 0x143060u;
label_143060:
    // 0x143060: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x143060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_143064:
    // 0x143064: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_143068:
    // 0x143068: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x143068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14306c:
    // 0x14306c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x14306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_143070:
    // 0x143070: 0xc4620080  lwc1        $f2, 0x80($v1)
    ctx->pc = 0x143070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143074:
    // 0x143074: 0x8c828488  lw          $v0, -0x7B78($a0)
    ctx->pc = 0x143074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935688)));
label_143078:
    // 0x143078: 0x0  nop
    ctx->pc = 0x143078u;
    // NOP
label_14307c:
    // 0x14307c: 0x0  nop
    ctx->pc = 0x14307cu;
    // NOP
label_143080:
    // 0x143080: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x143080u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[2]);
label_143084:
    // 0x143084: 0x8e5101b8  lw          $s1, 0x1B8($s2)
    ctx->pc = 0x143084u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_143088:
    // 0x143088: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x143088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_14308c:
    // 0x14308c: 0x42880b  movn        $s1, $v0, $v0
    ctx->pc = 0x14308cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
label_143090:
    // 0x143090: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x143090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_143094:
    // 0x143094: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x143094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_143098:
    // 0x143098: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x143098u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_14309c:
    // 0x14309c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x14309cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_1430a0:
    // 0x1430a0: 0xe4c40018  swc1        $f4, 0x18($a2)
    ctx->pc = 0x1430a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_1430a4:
    // 0x1430a4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1430a8:
    // 0x1430a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1430a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1430ac:
    // 0x1430ac: 0x0  nop
    ctx->pc = 0x1430acu;
    // NOP
label_1430b0:
    // 0x1430b0: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x1430b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_1430b4:
    // 0x1430b4: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1430b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_1430b8:
    // 0x1430b8: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1430b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_1430bc:
    // 0x1430bc: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x1430bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_1430c0:
    // 0x1430c0: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1430c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1430c4:
    // 0x1430c4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1430c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_1430c8:
    // 0x1430c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1430c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1430cc:
    // 0x1430cc: 0x0  nop
    ctx->pc = 0x1430ccu;
    // NOP
label_1430d0:
    // 0x1430d0: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x1430d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1430d4:
    // 0x1430d4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1430d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1430d8:
    // 0x1430d8: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x1430d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1430dc:
    // 0x1430dc: 0xe4c40018  swc1        $f4, 0x18($a2)
    ctx->pc = 0x1430dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_1430e0:
    // 0x1430e0: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x1430e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_1430e4:
    // 0x1430e4: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1430e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_1430e8:
    // 0x1430e8: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1430e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_1430ec:
    // 0x1430ec: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x1430ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_1430f0:
    // 0x1430f0: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1430f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_1430f4:
    // 0x1430f4: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x1430f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_1430f8:
    // 0x1430f8: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1430f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1430fc:
    // 0x1430fc: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x1430fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_143100:
    // 0x143100: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x143100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_143104:
    // 0x143104: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x143104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_143108:
    // 0x143108: 0xe4c40018  swc1        $f4, 0x18($a2)
    ctx->pc = 0x143108u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_14310c:
    // 0x14310c: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x14310cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_143110:
    // 0x143110: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x143110u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_143114:
    // 0x143114: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x143114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_143118:
    // 0x143118: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x143118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_14311c:
    // 0x14311c: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x14311cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_143120:
    // 0x143120: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x143120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_143124:
    // 0x143124: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x143124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_143128:
    // 0x143128: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x143128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
label_14312c:
    // 0x14312c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x14312cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_143130:
    // 0x143130: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x143130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_143134:
    // 0x143134: 0xe4c40018  swc1        $f4, 0x18($a2)
    ctx->pc = 0x143134u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_143138:
    // 0x143138: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x143138u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_14313c:
    // 0x14313c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x14313cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_143140:
    // 0x143140: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x143140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_143144:
    // 0x143144: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x143144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_143148:
    // 0x143148: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x143148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_14314c:
    // 0x14314c: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x14314cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_143150:
    // 0x143150: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x143150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_143154:
    // 0x143154: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x143154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_143158:
    // 0x143158: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x143158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14315c:
    // 0x14315c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143160:
    // 0x143160: 0x40f809  jalr        $v0
label_143164:
    if (ctx->pc == 0x143164u) {
        ctx->pc = 0x143164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143160u;
        // 0x143164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143168u;
        goto label_143168;
    }
    ctx->pc = 0x143160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143168u);
        ctx->pc = 0x143164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143160u;
        // 0x143164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143160u, 0x143168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143168u;
label_143168:
    // 0x143168: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14316c:
    // 0x14316c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_143170:
    // 0x143170: 0x40f809  jalr        $v0
label_143174:
    if (ctx->pc == 0x143174u) {
        ctx->pc = 0x143174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143170u;
        // 0x143174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143178u;
        goto label_143178;
    }
    ctx->pc = 0x143170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143178u);
        ctx->pc = 0x143174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143170u;
        // 0x143174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143170u, 0x143178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143178u;
label_143178:
    // 0x143178: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14317c:
    // 0x14317c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_143180:
    // 0x143180: 0x40f809  jalr        $v0
label_143184:
    if (ctx->pc == 0x143184u) {
        ctx->pc = 0x143184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143180u;
        // 0x143184: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143188u;
        goto label_143188;
    }
    ctx->pc = 0x143180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143188u);
        ctx->pc = 0x143184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143180u;
        // 0x143184: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143180u, 0x143188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143188u;
label_143188:
    // 0x143188: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14318c:
    // 0x14318c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x14318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_143190:
    // 0x143190: 0x40f809  jalr        $v0
label_143194:
    if (ctx->pc == 0x143194u) {
        ctx->pc = 0x143194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143190u;
        // 0x143194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143198u;
        goto label_143198;
    }
    ctx->pc = 0x143190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143198u);
        ctx->pc = 0x143194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143190u;
        // 0x143194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143190u, 0x143198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143198u;
label_143198:
    // 0x143198: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14319c:
    // 0x14319c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x14319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1431a0:
    // 0x1431a0: 0x40f809  jalr        $v0
label_1431a4:
    if (ctx->pc == 0x1431A4u) {
        ctx->pc = 0x1431A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431A0u;
        // 0x1431a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431A8u;
        goto label_1431a8;
    }
    ctx->pc = 0x1431A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1431A8u);
        ctx->pc = 0x1431A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431A0u;
        // 0x1431a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431A0u, 0x1431A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1431A8u;
label_1431a8:
    // 0x1431a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1431ac:
    // 0x1431ac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1431acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1431b0:
    // 0x1431b0: 0x40f809  jalr        $v0
label_1431b4:
    if (ctx->pc == 0x1431B4u) {
        ctx->pc = 0x1431B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431B0u;
        // 0x1431b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431B8u;
        goto label_1431b8;
    }
    ctx->pc = 0x1431B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1431B8u);
        ctx->pc = 0x1431B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431B0u;
        // 0x1431b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431B0u, 0x1431B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1431B8u;
label_1431b8:
    // 0x1431b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1431b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1431bc:
    // 0x1431bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1431bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1431c0:
    // 0x1431c0: 0x40f809  jalr        $v0
label_1431c4:
    if (ctx->pc == 0x1431C4u) {
        ctx->pc = 0x1431C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431C0u;
        // 0x1431c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431C8u;
        goto label_1431c8;
    }
    ctx->pc = 0x1431C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1431C8u);
        ctx->pc = 0x1431C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431C0u;
        // 0x1431c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431C0u, 0x1431C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1431C8u;
label_1431c8:
    // 0x1431c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1431c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1431cc:
    // 0x1431cc: 0xc08c4aa  jal         func_2312A8
label_1431d0:
    if (ctx->pc == 0x1431D0u) {
        ctx->pc = 0x1431D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431CCu;
        // 0x1431d0: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431D4u;
        goto label_1431d4;
    }
    ctx->pc = 0x1431CCu;
    SET_GPR_U32(ctx, 31, 0x1431D4u);
    ctx->pc = 0x1431D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431CCu;
    // 0x1431d0: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1431CCu, 0x1431D4u)) {
        return;
    }
    ctx->pc = 0x1431D4u;
label_1431d4:
    // 0x1431d4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1431d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1431d8:
    // 0x1431d8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1431d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1431dc:
    // 0x1431dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1431dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1431e0:
    // 0x1431e0: 0x40f809  jalr        $v0
label_1431e4:
    if (ctx->pc == 0x1431E4u) {
        ctx->pc = 0x1431E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431E0u;
        // 0x1431e4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431E8u;
        goto label_1431e8;
    }
    ctx->pc = 0x1431E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1431E8u);
        ctx->pc = 0x1431E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431E0u;
        // 0x1431e4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431E0u, 0x1431E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1431E8u;
label_1431e8:
    // 0x1431e8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1431e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1431ec:
    // 0x1431ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1431ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1431f0:
    // 0x1431f0: 0x40f809  jalr        $v0
label_1431f4:
    if (ctx->pc == 0x1431F4u) {
        ctx->pc = 0x1431F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431F0u;
        // 0x1431f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431F8u;
        goto label_1431f8;
    }
    ctx->pc = 0x1431F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1431F8u);
        ctx->pc = 0x1431F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431F0u;
        // 0x1431f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431F0u, 0x1431F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1431F8u;
label_1431f8:
    // 0x1431f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1431f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1431fc:
    // 0x1431fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1431fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_143200:
    // 0x143200: 0x40f809  jalr        $v0
label_143204:
    if (ctx->pc == 0x143204u) {
        ctx->pc = 0x143204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143200u;
        // 0x143204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143208u;
        goto label_143208;
    }
    ctx->pc = 0x143200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143208u);
        ctx->pc = 0x143204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143200u;
        // 0x143204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143200u, 0x143208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143208u;
label_143208:
    // 0x143208: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14320c:
    // 0x14320c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_143210:
    // 0x143210: 0x40f809  jalr        $v0
label_143214:
    if (ctx->pc == 0x143214u) {
        ctx->pc = 0x143214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143210u;
        // 0x143214: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143218u;
        goto label_143218;
    }
    ctx->pc = 0x143210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143218u);
        ctx->pc = 0x143214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143210u;
        // 0x143214: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143210u, 0x143218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143218u;
label_143218:
    // 0x143218: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14321c:
    // 0x14321c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x14321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_143220:
    // 0x143220: 0x40f809  jalr        $v0
label_143224:
    if (ctx->pc == 0x143224u) {
        ctx->pc = 0x143224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143220u;
        // 0x143224: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143228u;
        goto label_143228;
    }
    ctx->pc = 0x143220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143228u);
        ctx->pc = 0x143224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143220u;
        // 0x143224: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143220u, 0x143228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143228u;
label_143228:
    // 0x143228: 0xc091eaa  jal         func_247AA8
label_14322c:
    if (ctx->pc == 0x14322Cu) {
        ctx->pc = 0x14322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143228u;
        // 0x14322c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143230u;
        goto label_143230;
    }
    ctx->pc = 0x143228u;
    SET_GPR_U32(ctx, 31, 0x143230u);
    ctx->pc = 0x14322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143228u;
    // 0x14322c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247AA8u, 0x143228u, 0x143230u)) {
        return;
    }
    ctx->pc = 0x143230u;
label_143230:
    // 0x143230: 0xc08939a  jal         func_224E68
label_143234:
    if (ctx->pc == 0x143234u) {
        ctx->pc = 0x143234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143230u;
        // 0x143234: 0x8e44011c  lw          $a0, 0x11C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143238u;
        goto label_143238;
    }
    ctx->pc = 0x143230u;
    SET_GPR_U32(ctx, 31, 0x143238u);
    ctx->pc = 0x143234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143230u;
    // 0x143234: 0x8e44011c  lw          $a0, 0x11C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x143230u, 0x143238u)) {
        return;
    }
    ctx->pc = 0x143238u;
label_143238:
    // 0x143238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14323c:
    // 0x14323c: 0xae4301a0  sw          $v1, 0x1A0($s2)
    ctx->pc = 0x14323cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 3));
label_143240:
    // 0x143240: 0x7bb00220  lq          $s0, 0x220($sp)
    ctx->pc = 0x143240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_143244:
    // 0x143244: 0x7bb10210  lq          $s1, 0x210($sp)
    ctx->pc = 0x143244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_143248:
    // 0x143248: 0x7bb20200  lq          $s2, 0x200($sp)
    ctx->pc = 0x143248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_14324c:
    // 0x14324c: 0x7bb301f0  lq          $s3, 0x1F0($sp)
    ctx->pc = 0x14324cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_143250:
    // 0x143250: 0x7bb401e0  lq          $s4, 0x1E0($sp)
    ctx->pc = 0x143250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_143254:
    // 0x143254: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x143254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_143258:
    // 0x143258: 0xc7b50238  lwc1        $f21, 0x238($sp)
    ctx->pc = 0x143258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14325c:
    // 0x14325c: 0xc7b40230  lwc1        $f20, 0x230($sp)
    ctx->pc = 0x14325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143260:
    // 0x143260: 0x3e00008  jr          $ra
label_143264:
    if (ctx->pc == 0x143264u) {
        ctx->pc = 0x143264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143260u;
        // 0x143264: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143268u;
        goto label_fallthrough_0x143260;
    }
    ctx->pc = 0x143260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143260u;
        // 0x143264: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x143260:
    ctx->pc = 0x143268u;
}
