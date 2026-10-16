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

// Function: sub_00307E88
// Address: 0x307e88 - 0x3082f0
void sub_00307E88_0x307e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307E88_0x307e88");
#endif

    switch (ctx->pc) {
        case 0x307e88u: goto label_307e88;
        case 0x307e8cu: goto label_307e8c;
        case 0x307e90u: goto label_307e90;
        case 0x307e94u: goto label_307e94;
        case 0x307e98u: goto label_307e98;
        case 0x307e9cu: goto label_307e9c;
        case 0x307ea0u: goto label_307ea0;
        case 0x307ea4u: goto label_307ea4;
        case 0x307ea8u: goto label_307ea8;
        case 0x307eacu: goto label_307eac;
        case 0x307eb0u: goto label_307eb0;
        case 0x307eb4u: goto label_307eb4;
        case 0x307eb8u: goto label_307eb8;
        case 0x307ebcu: goto label_307ebc;
        case 0x307ec0u: goto label_307ec0;
        case 0x307ec4u: goto label_307ec4;
        case 0x307ec8u: goto label_307ec8;
        case 0x307eccu: goto label_307ecc;
        case 0x307ed0u: goto label_307ed0;
        case 0x307ed4u: goto label_307ed4;
        case 0x307ed8u: goto label_307ed8;
        case 0x307edcu: goto label_307edc;
        case 0x307ee0u: goto label_307ee0;
        case 0x307ee4u: goto label_307ee4;
        case 0x307ee8u: goto label_307ee8;
        case 0x307eecu: goto label_307eec;
        case 0x307ef0u: goto label_307ef0;
        case 0x307ef4u: goto label_307ef4;
        case 0x307ef8u: goto label_307ef8;
        case 0x307efcu: goto label_307efc;
        case 0x307f00u: goto label_307f00;
        case 0x307f04u: goto label_307f04;
        case 0x307f08u: goto label_307f08;
        case 0x307f0cu: goto label_307f0c;
        case 0x307f10u: goto label_307f10;
        case 0x307f14u: goto label_307f14;
        case 0x307f18u: goto label_307f18;
        case 0x307f1cu: goto label_307f1c;
        case 0x307f20u: goto label_307f20;
        case 0x307f24u: goto label_307f24;
        case 0x307f28u: goto label_307f28;
        case 0x307f2cu: goto label_307f2c;
        case 0x307f30u: goto label_307f30;
        case 0x307f34u: goto label_307f34;
        case 0x307f38u: goto label_307f38;
        case 0x307f3cu: goto label_307f3c;
        case 0x307f40u: goto label_307f40;
        case 0x307f44u: goto label_307f44;
        case 0x307f48u: goto label_307f48;
        case 0x307f4cu: goto label_307f4c;
        case 0x307f50u: goto label_307f50;
        case 0x307f54u: goto label_307f54;
        case 0x307f58u: goto label_307f58;
        case 0x307f5cu: goto label_307f5c;
        case 0x307f60u: goto label_307f60;
        case 0x307f64u: goto label_307f64;
        case 0x307f68u: goto label_307f68;
        case 0x307f6cu: goto label_307f6c;
        case 0x307f70u: goto label_307f70;
        case 0x307f74u: goto label_307f74;
        case 0x307f78u: goto label_307f78;
        case 0x307f7cu: goto label_307f7c;
        case 0x307f80u: goto label_307f80;
        case 0x307f84u: goto label_307f84;
        case 0x307f88u: goto label_307f88;
        case 0x307f8cu: goto label_307f8c;
        case 0x307f90u: goto label_307f90;
        case 0x307f94u: goto label_307f94;
        case 0x307f98u: goto label_307f98;
        case 0x307f9cu: goto label_307f9c;
        case 0x307fa0u: goto label_307fa0;
        case 0x307fa4u: goto label_307fa4;
        case 0x307fa8u: goto label_307fa8;
        case 0x307facu: goto label_307fac;
        case 0x307fb0u: goto label_307fb0;
        case 0x307fb4u: goto label_307fb4;
        case 0x307fb8u: goto label_307fb8;
        case 0x307fbcu: goto label_307fbc;
        case 0x307fc0u: goto label_307fc0;
        case 0x307fc4u: goto label_307fc4;
        case 0x307fc8u: goto label_307fc8;
        case 0x307fccu: goto label_307fcc;
        case 0x307fd0u: goto label_307fd0;
        case 0x307fd4u: goto label_307fd4;
        case 0x307fd8u: goto label_307fd8;
        case 0x307fdcu: goto label_307fdc;
        case 0x307fe0u: goto label_307fe0;
        case 0x307fe4u: goto label_307fe4;
        case 0x307fe8u: goto label_307fe8;
        case 0x307fecu: goto label_307fec;
        case 0x307ff0u: goto label_307ff0;
        case 0x307ff4u: goto label_307ff4;
        case 0x307ff8u: goto label_307ff8;
        case 0x307ffcu: goto label_307ffc;
        case 0x308000u: goto label_308000;
        case 0x308004u: goto label_308004;
        case 0x308008u: goto label_308008;
        case 0x30800cu: goto label_30800c;
        case 0x308010u: goto label_308010;
        case 0x308014u: goto label_308014;
        case 0x308018u: goto label_308018;
        case 0x30801cu: goto label_30801c;
        case 0x308020u: goto label_308020;
        case 0x308024u: goto label_308024;
        case 0x308028u: goto label_308028;
        case 0x30802cu: goto label_30802c;
        case 0x308030u: goto label_308030;
        case 0x308034u: goto label_308034;
        case 0x308038u: goto label_308038;
        case 0x30803cu: goto label_30803c;
        case 0x308040u: goto label_308040;
        case 0x308044u: goto label_308044;
        case 0x308048u: goto label_308048;
        case 0x30804cu: goto label_30804c;
        case 0x308050u: goto label_308050;
        case 0x308054u: goto label_308054;
        case 0x308058u: goto label_308058;
        case 0x30805cu: goto label_30805c;
        case 0x308060u: goto label_308060;
        case 0x308064u: goto label_308064;
        case 0x308068u: goto label_308068;
        case 0x30806cu: goto label_30806c;
        case 0x308070u: goto label_308070;
        case 0x308074u: goto label_308074;
        case 0x308078u: goto label_308078;
        case 0x30807cu: goto label_30807c;
        case 0x308080u: goto label_308080;
        case 0x308084u: goto label_308084;
        case 0x308088u: goto label_308088;
        case 0x30808cu: goto label_30808c;
        case 0x308090u: goto label_308090;
        case 0x308094u: goto label_308094;
        case 0x308098u: goto label_308098;
        case 0x30809cu: goto label_30809c;
        case 0x3080a0u: goto label_3080a0;
        case 0x3080a4u: goto label_3080a4;
        case 0x3080a8u: goto label_3080a8;
        case 0x3080acu: goto label_3080ac;
        case 0x3080b0u: goto label_3080b0;
        case 0x3080b4u: goto label_3080b4;
        case 0x3080b8u: goto label_3080b8;
        case 0x3080bcu: goto label_3080bc;
        case 0x3080c0u: goto label_3080c0;
        case 0x3080c4u: goto label_3080c4;
        case 0x3080c8u: goto label_3080c8;
        case 0x3080ccu: goto label_3080cc;
        case 0x3080d0u: goto label_3080d0;
        case 0x3080d4u: goto label_3080d4;
        case 0x3080d8u: goto label_3080d8;
        case 0x3080dcu: goto label_3080dc;
        case 0x3080e0u: goto label_3080e0;
        case 0x3080e4u: goto label_3080e4;
        case 0x3080e8u: goto label_3080e8;
        case 0x3080ecu: goto label_3080ec;
        case 0x3080f0u: goto label_3080f0;
        case 0x3080f4u: goto label_3080f4;
        case 0x3080f8u: goto label_3080f8;
        case 0x3080fcu: goto label_3080fc;
        case 0x308100u: goto label_308100;
        case 0x308104u: goto label_308104;
        case 0x308108u: goto label_308108;
        case 0x30810cu: goto label_30810c;
        case 0x308110u: goto label_308110;
        case 0x308114u: goto label_308114;
        case 0x308118u: goto label_308118;
        case 0x30811cu: goto label_30811c;
        case 0x308120u: goto label_308120;
        case 0x308124u: goto label_308124;
        case 0x308128u: goto label_308128;
        case 0x30812cu: goto label_30812c;
        case 0x308130u: goto label_308130;
        case 0x308134u: goto label_308134;
        case 0x308138u: goto label_308138;
        case 0x30813cu: goto label_30813c;
        case 0x308140u: goto label_308140;
        case 0x308144u: goto label_308144;
        case 0x308148u: goto label_308148;
        case 0x30814cu: goto label_30814c;
        case 0x308150u: goto label_308150;
        case 0x308154u: goto label_308154;
        case 0x308158u: goto label_308158;
        case 0x30815cu: goto label_30815c;
        case 0x308160u: goto label_308160;
        case 0x308164u: goto label_308164;
        case 0x308168u: goto label_308168;
        case 0x30816cu: goto label_30816c;
        case 0x308170u: goto label_308170;
        case 0x308174u: goto label_308174;
        case 0x308178u: goto label_308178;
        case 0x30817cu: goto label_30817c;
        case 0x308180u: goto label_308180;
        case 0x308184u: goto label_308184;
        case 0x308188u: goto label_308188;
        case 0x30818cu: goto label_30818c;
        case 0x308190u: goto label_308190;
        case 0x308194u: goto label_308194;
        case 0x308198u: goto label_308198;
        case 0x30819cu: goto label_30819c;
        case 0x3081a0u: goto label_3081a0;
        case 0x3081a4u: goto label_3081a4;
        case 0x3081a8u: goto label_3081a8;
        case 0x3081acu: goto label_3081ac;
        case 0x3081b0u: goto label_3081b0;
        case 0x3081b4u: goto label_3081b4;
        case 0x3081b8u: goto label_3081b8;
        case 0x3081bcu: goto label_3081bc;
        case 0x3081c0u: goto label_3081c0;
        case 0x3081c4u: goto label_3081c4;
        case 0x3081c8u: goto label_3081c8;
        case 0x3081ccu: goto label_3081cc;
        case 0x3081d0u: goto label_3081d0;
        case 0x3081d4u: goto label_3081d4;
        case 0x3081d8u: goto label_3081d8;
        case 0x3081dcu: goto label_3081dc;
        case 0x3081e0u: goto label_3081e0;
        case 0x3081e4u: goto label_3081e4;
        case 0x3081e8u: goto label_3081e8;
        case 0x3081ecu: goto label_3081ec;
        case 0x3081f0u: goto label_3081f0;
        case 0x3081f4u: goto label_3081f4;
        case 0x3081f8u: goto label_3081f8;
        case 0x3081fcu: goto label_3081fc;
        case 0x308200u: goto label_308200;
        case 0x308204u: goto label_308204;
        case 0x308208u: goto label_308208;
        case 0x30820cu: goto label_30820c;
        case 0x308210u: goto label_308210;
        case 0x308214u: goto label_308214;
        case 0x308218u: goto label_308218;
        case 0x30821cu: goto label_30821c;
        case 0x308220u: goto label_308220;
        case 0x308224u: goto label_308224;
        case 0x308228u: goto label_308228;
        case 0x30822cu: goto label_30822c;
        case 0x308230u: goto label_308230;
        case 0x308234u: goto label_308234;
        case 0x308238u: goto label_308238;
        case 0x30823cu: goto label_30823c;
        case 0x308240u: goto label_308240;
        case 0x308244u: goto label_308244;
        case 0x308248u: goto label_308248;
        case 0x30824cu: goto label_30824c;
        case 0x308250u: goto label_308250;
        case 0x308254u: goto label_308254;
        case 0x308258u: goto label_308258;
        case 0x30825cu: goto label_30825c;
        case 0x308260u: goto label_308260;
        case 0x308264u: goto label_308264;
        case 0x308268u: goto label_308268;
        case 0x30826cu: goto label_30826c;
        case 0x308270u: goto label_308270;
        case 0x308274u: goto label_308274;
        case 0x308278u: goto label_308278;
        case 0x30827cu: goto label_30827c;
        case 0x308280u: goto label_308280;
        case 0x308284u: goto label_308284;
        case 0x308288u: goto label_308288;
        case 0x30828cu: goto label_30828c;
        case 0x308290u: goto label_308290;
        case 0x308294u: goto label_308294;
        case 0x308298u: goto label_308298;
        case 0x30829cu: goto label_30829c;
        case 0x3082a0u: goto label_3082a0;
        case 0x3082a4u: goto label_3082a4;
        case 0x3082a8u: goto label_3082a8;
        case 0x3082acu: goto label_3082ac;
        case 0x3082b0u: goto label_3082b0;
        case 0x3082b4u: goto label_3082b4;
        case 0x3082b8u: goto label_3082b8;
        case 0x3082bcu: goto label_3082bc;
        case 0x3082c0u: goto label_3082c0;
        case 0x3082c4u: goto label_3082c4;
        case 0x3082c8u: goto label_3082c8;
        case 0x3082ccu: goto label_3082cc;
        case 0x3082d0u: goto label_3082d0;
        case 0x3082d4u: goto label_3082d4;
        case 0x3082d8u: goto label_3082d8;
        case 0x3082dcu: goto label_3082dc;
        case 0x3082e0u: goto label_3082e0;
        case 0x3082e4u: goto label_3082e4;
        case 0x3082e8u: goto label_3082e8;
        case 0x3082ecu: goto label_3082ec;
        default: break;
    }

    ctx->pc = 0x307e88u;

label_307e88:
    // 0x307e88: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x307e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_307e8c:
    // 0x307e8c: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x307e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
label_307e90:
    // 0x307e90: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x307e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
label_307e94:
    // 0x307e94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307e98:
    // 0x307e98: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x307e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
label_307e9c:
    // 0x307e9c: 0xc0c10d6  jal         func_304358
label_307ea0:
    if (ctx->pc == 0x307EA0u) {
        ctx->pc = 0x307EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E9Cu;
        // 0x307ea0: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EA4u;
        goto label_307ea4;
    }
    ctx->pc = 0x307E9Cu;
    SET_GPR_U32(ctx, 31, 0x307EA4u);
    ctx->pc = 0x307EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E9Cu;
    // 0x307ea0: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x307E9Cu, 0x307EA4u)) {
        return;
    }
    ctx->pc = 0x307EA4u;
label_307ea4:
    // 0x307ea4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x307ea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307ea8:
    // 0x307ea8: 0x512000e7  beql        $t1, $zero, . + 4 + (0xE7 << 2)
label_307eac:
    if (ctx->pc == 0x307EACu) {
        ctx->pc = 0x307EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EA8u;
        // 0x307eac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EB0u;
        goto label_307eb0;
    }
    ctx->pc = 0x307EA8u;
    {
        const bool branch_taken_0x307ea8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ea8) {
            ctx->pc = 0x307EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307EA8u;
            // 0x307eac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308248u;
            goto label_308248;
        }
    }
    ctx->pc = 0x307EB0u;
label_307eb0:
    // 0x307eb0: 0x91220038  lbu         $v0, 0x38($t1)
    ctx->pc = 0x307eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 56)));
label_307eb4:
    // 0x307eb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x307eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307eb8:
    // 0x307eb8: 0xa20200b6  sb          $v0, 0xB6($s0)
    ctx->pc = 0x307eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 2));
label_307ebc:
    // 0x307ebc: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
label_307ec0:
    if (ctx->pc == 0x307EC0u) {
        ctx->pc = 0x307EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EBCu;
        // 0x307ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EC4u;
        goto label_307ec4;
    }
    ctx->pc = 0x307EBCu;
    {
        const bool branch_taken_0x307ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x307EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EBCu;
        // 0x307ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ebc) {
            ctx->pc = 0x3082DCu;
            goto label_3082dc;
        }
    }
    ctx->pc = 0x307EC4u;
label_307ec4:
    // 0x307ec4: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x307ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_307ec8:
    // 0x307ec8: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x307ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_307ecc:
    // 0x307ecc: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x307eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_307ed0:
    // 0x307ed0: 0xae0301f4  sw          $v1, 0x1F4($s0)
    ctx->pc = 0x307ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 3));
label_307ed4:
    // 0x307ed4: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x307ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
label_307ed8:
    // 0x307ed8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_307edc:
    if (ctx->pc == 0x307EDCu) {
        ctx->pc = 0x307EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307ED8u;
        // 0x307edc: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307EE0u;
        goto label_307ee0;
    }
    ctx->pc = 0x307ED8u;
    {
        const bool branch_taken_0x307ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307ED8u;
        // 0x307edc: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ed8) {
            ctx->pc = 0x307EE8u;
            goto label_307ee8;
        }
    }
    ctx->pc = 0x307EE0u;
label_307ee0:
    // 0x307ee0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x307ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_307ee4:
    // 0x307ee4: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x307ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_307ee8:
    // 0x307ee8: 0xa20000b5  sb          $zero, 0xB5($s0)
    ctx->pc = 0x307ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 0));
label_307eec:
    // 0x307eec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x307eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307ef0:
    // 0x307ef0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x307ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_307ef4:
    // 0x307ef4: 0x0  nop
    ctx->pc = 0x307ef4u;
    // NOP
label_307ef8:
    // 0x307ef8: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x307ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_307efc:
    // 0x307efc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x307efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_307f00:
    // 0x307f00: 0x10c000c9  beqz        $a2, . + 4 + (0xC9 << 2)
label_307f04:
    if (ctx->pc == 0x307F04u) {
        ctx->pc = 0x307F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F00u;
        // 0x307f04: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F08u;
        goto label_307f08;
    }
    ctx->pc = 0x307F00u;
    {
        const bool branch_taken_0x307f00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F00u;
        // 0x307f04: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f00) {
            ctx->pc = 0x308228u;
            goto label_308228;
        }
    }
    ctx->pc = 0x307F08u;
label_307f08:
    // 0x307f08: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x307f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_307f0c:
    // 0x307f0c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x307f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_307f10:
    // 0x307f10: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_307f14:
    if (ctx->pc == 0x307F14u) {
        ctx->pc = 0x307F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F10u;
        // 0x307f14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F18u;
        goto label_307f18;
    }
    ctx->pc = 0x307F10u;
    {
        const bool branch_taken_0x307f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F10u;
        // 0x307f14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f10) {
            ctx->pc = 0x308038u;
            goto label_308038;
        }
    }
    ctx->pc = 0x307F18u;
label_307f18:
    // 0x307f18: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x307f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_307f1c:
    // 0x307f1c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x307f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_307f20:
    // 0x307f20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x307f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307f24:
    // 0x307f24: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x307f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_307f28:
    // 0x307f28: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x307f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_307f2c:
    // 0x307f2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x307f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_307f30:
    // 0x307f30: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
label_307f34:
    if (ctx->pc == 0x307F34u) {
        ctx->pc = 0x307F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F30u;
        // 0x307f34: 0x3c046800  lui         $a0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F38u;
        goto label_307f38;
    }
    ctx->pc = 0x307F30u;
    {
        const bool branch_taken_0x307f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F30u;
        // 0x307f34: 0x3c046800  lui         $a0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f30) {
            ctx->pc = 0x30827Cu;
            goto label_30827c;
        }
    }
    ctx->pc = 0x307F38u;
label_307f38:
    // 0x307f38: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x307f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_307f3c:
    // 0x307f3c: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x307f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_307f40:
    // 0x307f40: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
label_307f44:
    if (ctx->pc == 0x307F44u) {
        ctx->pc = 0x307F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F40u;
        // 0x307f44: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F48u;
        goto label_307f48;
    }
    ctx->pc = 0x307F40u;
    {
        const bool branch_taken_0x307f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x307F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F40u;
        // 0x307f44: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f40) {
            ctx->pc = 0x307FB8u;
            goto label_307fb8;
        }
    }
    ctx->pc = 0x307F48u;
label_307f48:
    // 0x307f48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_307f4c:
    if (ctx->pc == 0x307F4Cu) {
        ctx->pc = 0x307F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F48u;
        // 0x307f4c: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F50u;
        goto label_307f50;
    }
    ctx->pc = 0x307F48u;
    {
        const bool branch_taken_0x307f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F48u;
        // 0x307f4c: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f48) {
            ctx->pc = 0x307F88u;
            goto label_307f88;
        }
    }
    ctx->pc = 0x307F50u;
label_307f50:
    // 0x307f50: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x307f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_307f54:
    // 0x307f54: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_307f58:
    if (ctx->pc == 0x307F58u) {
        ctx->pc = 0x307F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F54u;
        // 0x307f58: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F5Cu;
        goto label_307f5c;
    }
    ctx->pc = 0x307F54u;
    {
        const bool branch_taken_0x307f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F54u;
        // 0x307f58: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f54) {
            ctx->pc = 0x307FACu;
            goto label_307fac;
        }
    }
    ctx->pc = 0x307F5Cu;
label_307f5c:
    // 0x307f5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_307f60:
    if (ctx->pc == 0x307F60u) {
        ctx->pc = 0x307F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F5Cu;
        // 0x307f60: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F64u;
        goto label_307f64;
    }
    ctx->pc = 0x307F5Cu;
    {
        const bool branch_taken_0x307f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F5Cu;
        // 0x307f60: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f5c) {
            ctx->pc = 0x307F78u;
            goto label_307f78;
        }
    }
    ctx->pc = 0x307F64u;
label_307f64:
    // 0x307f64: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_307f68:
    // 0x307f68: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_307f6c:
    if (ctx->pc == 0x307F6Cu) {
        ctx->pc = 0x307F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F68u;
        // 0x307f6c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F70u;
        goto label_307f70;
    }
    ctx->pc = 0x307F68u;
    {
        const bool branch_taken_0x307f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F68u;
        // 0x307f6c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f68) {
            ctx->pc = 0x307FA0u;
            goto label_307fa0;
        }
    }
    ctx->pc = 0x307F70u;
label_307f70:
    // 0x307f70: 0x10000016  b           . + 4 + (0x16 << 2)
label_307f74:
    if (ctx->pc == 0x307F74u) {
        ctx->pc = 0x307F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F70u;
        // 0x307f74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F78u;
        goto label_307f78;
    }
    ctx->pc = 0x307F70u;
    {
        const bool branch_taken_0x307f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F70u;
        // 0x307f74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f70) {
            ctx->pc = 0x307FCCu;
            goto label_307fcc;
        }
    }
    ctx->pc = 0x307F78u;
label_307f78:
    // 0x307f78: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_307f7c:
    if (ctx->pc == 0x307F7Cu) {
        ctx->pc = 0x307F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F78u;
        // 0x307f7c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F80u;
        goto label_307f80;
    }
    ctx->pc = 0x307F78u;
    {
        const bool branch_taken_0x307f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F78u;
        // 0x307f7c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f78) {
            ctx->pc = 0x307FA0u;
            goto label_307fa0;
        }
    }
    ctx->pc = 0x307F80u;
label_307f80:
    // 0x307f80: 0x10000012  b           . + 4 + (0x12 << 2)
label_307f84:
    if (ctx->pc == 0x307F84u) {
        ctx->pc = 0x307F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F80u;
        // 0x307f84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F88u;
        goto label_307f88;
    }
    ctx->pc = 0x307F80u;
    {
        const bool branch_taken_0x307f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F80u;
        // 0x307f84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f80) {
            ctx->pc = 0x307FCCu;
            goto label_307fcc;
        }
    }
    ctx->pc = 0x307F88u;
label_307f88:
    // 0x307f88: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_307f8c:
    if (ctx->pc == 0x307F8Cu) {
        ctx->pc = 0x307F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F88u;
        // 0x307f8c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F90u;
        goto label_307f90;
    }
    ctx->pc = 0x307F88u;
    {
        const bool branch_taken_0x307f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F88u;
        // 0x307f8c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f88) {
            ctx->pc = 0x307FACu;
            goto label_307fac;
        }
    }
    ctx->pc = 0x307F90u;
label_307f90:
    // 0x307f90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_307f94:
    if (ctx->pc == 0x307F94u) {
        ctx->pc = 0x307F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F90u;
        // 0x307f94: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307F98u;
        goto label_307f98;
    }
    ctx->pc = 0x307F90u;
    {
        const bool branch_taken_0x307f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F90u;
        // 0x307f94: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f90) {
            ctx->pc = 0x307FC4u;
            goto label_307fc4;
        }
    }
    ctx->pc = 0x307F98u;
label_307f98:
    // 0x307f98: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_307f9c:
    if (ctx->pc == 0x307F9Cu) {
        ctx->pc = 0x307F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F98u;
        // 0x307f9c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307FA0u;
        goto label_307fa0;
    }
    ctx->pc = 0x307F98u;
    {
        const bool branch_taken_0x307f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x307F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F98u;
        // 0x307f9c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f98) {
            ctx->pc = 0x307FC8u;
            goto label_307fc8;
        }
    }
    ctx->pc = 0x307FA0u;
label_307fa0:
    // 0x307fa0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x307fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_307fa4:
    // 0x307fa4: 0x10000009  b           . + 4 + (0x9 << 2)
label_307fa8:
    if (ctx->pc == 0x307FA8u) {
        ctx->pc = 0x307FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FA4u;
        // 0x307fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307FACu;
        goto label_307fac;
    }
    ctx->pc = 0x307FA4u;
    {
        const bool branch_taken_0x307fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FA4u;
        // 0x307fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fa4) {
            ctx->pc = 0x307FCCu;
            goto label_307fcc;
        }
    }
    ctx->pc = 0x307FACu;
label_307fac:
    // 0x307fac: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x307facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_307fb0:
    // 0x307fb0: 0x10000006  b           . + 4 + (0x6 << 2)
label_307fb4:
    if (ctx->pc == 0x307FB4u) {
        ctx->pc = 0x307FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FB0u;
        // 0x307fb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307FB8u;
        goto label_307fb8;
    }
    ctx->pc = 0x307FB0u;
    {
        const bool branch_taken_0x307fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FB0u;
        // 0x307fb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fb0) {
            ctx->pc = 0x307FCCu;
            goto label_307fcc;
        }
    }
    ctx->pc = 0x307FB8u;
label_307fb8:
    // 0x307fb8: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x307fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_307fbc:
    // 0x307fbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_307fc0:
    if (ctx->pc == 0x307FC0u) {
        ctx->pc = 0x307FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FBCu;
        // 0x307fc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307FC4u;
        goto label_307fc4;
    }
    ctx->pc = 0x307FBCu;
    {
        const bool branch_taken_0x307fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FBCu;
        // 0x307fc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fbc) {
            ctx->pc = 0x307FCCu;
            goto label_307fcc;
        }
    }
    ctx->pc = 0x307FC4u;
label_307fc4:
    // 0x307fc4: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x307fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_307fc8:
    // 0x307fc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x307fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_307fcc:
    // 0x307fcc: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x307fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_307fd0:
    // 0x307fd0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x307fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_307fd4:
    // 0x307fd4: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x307fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
label_307fd8:
    // 0x307fd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_307fdc:
    if (ctx->pc == 0x307FDCu) {
        ctx->pc = 0x307FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FD8u;
        // 0x307fdc: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307FE0u;
        goto label_307fe0;
    }
    ctx->pc = 0x307FD8u;
    {
        const bool branch_taken_0x307fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FD8u;
        // 0x307fdc: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fd8) {
            ctx->pc = 0x308008u;
            goto label_308008;
        }
    }
    ctx->pc = 0x307FE0u;
label_307fe0:
    // 0x307fe0: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
label_307fe4:
    if (ctx->pc == 0x307FE4u) {
        ctx->pc = 0x307FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FE0u;
        // 0x307fe4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307FE8u;
        goto label_307fe8;
    }
    ctx->pc = 0x307FE0u;
    {
        const bool branch_taken_0x307fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FE0u;
        // 0x307fe4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fe0) {
            ctx->pc = 0x308298u;
            goto label_308298;
        }
    }
    ctx->pc = 0x307FE8u;
label_307fe8:
    // 0x307fe8: 0x920200b5  lbu         $v0, 0xB5($s0)
    ctx->pc = 0x307fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_307fec:
    // 0x307fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x307fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_307ff0:
    // 0x307ff0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x307ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_307ff4:
    // 0x307ff4: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x307ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_307ff8:
    // 0x307ff8: 0x920300b5  lbu         $v1, 0xB5($s0)
    ctx->pc = 0x307ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_307ffc:
    // 0x307ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_308000:
    // 0x308000: 0x1000008b  b           . + 4 + (0x8B << 2)
label_308004:
    if (ctx->pc == 0x308004u) {
        ctx->pc = 0x308004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308000u;
        // 0x308004: 0xa20300b5  sb          $v1, 0xB5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308008u;
        goto label_308008;
    }
    ctx->pc = 0x308000u;
    {
        const bool branch_taken_0x308000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308000u;
        // 0x308004: 0xa20300b5  sb          $v1, 0xB5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308000) {
            ctx->pc = 0x308230u;
            goto label_308230;
        }
    }
    ctx->pc = 0x308008u;
label_308008:
    // 0x308008: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x308008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_30800c:
    // 0x30800c: 0x504000a8  beql        $v0, $zero, . + 4 + (0xA8 << 2)
label_308010:
    if (ctx->pc == 0x308010u) {
        ctx->pc = 0x308010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30800Cu;
        // 0x308010: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308014u;
        goto label_308014;
    }
    ctx->pc = 0x30800Cu;
    {
        const bool branch_taken_0x30800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30800c) {
            ctx->pc = 0x308010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30800Cu;
            // 0x308010: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3082B0u;
            goto label_3082b0;
        }
    }
    ctx->pc = 0x308014u;
label_308014:
    // 0x308014: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x308014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_308018:
    // 0x308018: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_30801c:
    if (ctx->pc == 0x30801Cu) {
        ctx->pc = 0x30801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308018u;
        // 0x30801c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308020u;
        goto label_308020;
    }
    ctx->pc = 0x308018u;
    {
        const bool branch_taken_0x308018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308018u;
        // 0x30801c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308018) {
            ctx->pc = 0x308230u;
            goto label_308230;
        }
    }
    ctx->pc = 0x308020u;
label_308020:
    // 0x308020: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x308020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_308024:
    // 0x308024: 0x8c62108c  lw          $v0, 0x108C($v1)
    ctx->pc = 0x308024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4236)));
label_308028:
    // 0x308028: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x308028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_30802c:
    // 0x30802c: 0x24a50cc0  addiu       $a1, $a1, 0xCC0
    ctx->pc = 0x30802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
label_308030:
    // 0x308030: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_308034:
    if (ctx->pc == 0x308034u) {
        ctx->pc = 0x308034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308030u;
        // 0x308034: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308038u;
        goto label_308038;
    }
    ctx->pc = 0x308030u;
    {
        const bool branch_taken_0x308030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308030u;
        // 0x308034: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308030) {
            ctx->pc = 0x3082C4u;
            goto label_3082c4;
        }
    }
    ctx->pc = 0x308038u;
label_308038:
    // 0x308038: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x308038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_30803c:
    // 0x30803c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_308040:
    if (ctx->pc == 0x308040u) {
        ctx->pc = 0x308040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30803Cu;
        // 0x308040: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308044u;
        goto label_308044;
    }
    ctx->pc = 0x30803Cu;
    {
        const bool branch_taken_0x30803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30803Cu;
        // 0x308040: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30803c) {
            ctx->pc = 0x3080FCu;
            goto label_3080fc;
        }
    }
    ctx->pc = 0x308044u;
label_308044:
    // 0x308044: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x308044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_308048:
    // 0x308048: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x308048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30804c:
    // 0x30804c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30804cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308050:
    // 0x308050: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x308050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_308054:
    // 0x308054: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x308054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
label_308058:
    // 0x308058: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_30805c:
    if (ctx->pc == 0x30805Cu) {
        ctx->pc = 0x30805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308058u;
        // 0x30805c: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308060u;
        goto label_308060;
    }
    ctx->pc = 0x308058u;
    {
        const bool branch_taken_0x308058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308058u;
        // 0x30805c: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308058) {
            ctx->pc = 0x3080DCu;
            goto label_3080dc;
        }
    }
    ctx->pc = 0x308060u;
label_308060:
    // 0x308060: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x308060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_308064:
    // 0x308064: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_308068:
    if (ctx->pc == 0x308068u) {
        ctx->pc = 0x308068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308064u;
        // 0x308068: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30806Cu;
        goto label_30806c;
    }
    ctx->pc = 0x308064u;
    {
        const bool branch_taken_0x308064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308064u;
        // 0x308068: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308064) {
            ctx->pc = 0x3080A4u;
            goto label_3080a4;
        }
    }
    ctx->pc = 0x30806Cu;
label_30806c:
    // 0x30806c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x30806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_308070:
    // 0x308070: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_308074:
    if (ctx->pc == 0x308074u) {
        ctx->pc = 0x308074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308070u;
        // 0x308074: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x308078u;
        goto label_308078;
    }
    ctx->pc = 0x308070u;
    {
        const bool branch_taken_0x308070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x308074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308070u;
        // 0x308074: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308070) {
            ctx->pc = 0x3080CCu;
            goto label_3080cc;
        }
    }
    ctx->pc = 0x308078u;
label_308078:
    // 0x308078: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_30807c:
    if (ctx->pc == 0x30807Cu) {
        ctx->pc = 0x30807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308078u;
        // 0x30807c: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308080u;
        goto label_308080;
    }
    ctx->pc = 0x308078u;
    {
        const bool branch_taken_0x308078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308078u;
        // 0x30807c: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308078) {
            ctx->pc = 0x308094u;
            goto label_308094;
        }
    }
    ctx->pc = 0x308080u;
label_308080:
    // 0x308080: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x308080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_308084:
    // 0x308084: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_308088:
    if (ctx->pc == 0x308088u) {
        ctx->pc = 0x308088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308084u;
        // 0x308088: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30808Cu;
        goto label_30808c;
    }
    ctx->pc = 0x308084u;
    {
        const bool branch_taken_0x308084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x308088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308084u;
        // 0x308088: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308084) {
            ctx->pc = 0x3080BCu;
            goto label_3080bc;
        }
    }
    ctx->pc = 0x30808Cu;
label_30808c:
    // 0x30808c: 0x10000019  b           . + 4 + (0x19 << 2)
label_308090:
    if (ctx->pc == 0x308090u) {
        ctx->pc = 0x308090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30808Cu;
        // 0x308090: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308094u;
        goto label_308094;
    }
    ctx->pc = 0x30808Cu;
    {
        const bool branch_taken_0x30808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30808Cu;
        // 0x308090: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30808c) {
            ctx->pc = 0x3080F4u;
            goto label_3080f4;
        }
    }
    ctx->pc = 0x308094u;
label_308094:
    // 0x308094: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_308098:
    if (ctx->pc == 0x308098u) {
        ctx->pc = 0x308098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308094u;
        // 0x308098: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30809Cu;
        goto label_30809c;
    }
    ctx->pc = 0x308094u;
    {
        const bool branch_taken_0x308094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x308098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308094u;
        // 0x308098: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308094) {
            ctx->pc = 0x3080BCu;
            goto label_3080bc;
        }
    }
    ctx->pc = 0x30809Cu;
label_30809c:
    // 0x30809c: 0x10000015  b           . + 4 + (0x15 << 2)
label_3080a0:
    if (ctx->pc == 0x3080A0u) {
        ctx->pc = 0x3080A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30809Cu;
        // 0x3080a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3080A4u;
        goto label_3080a4;
    }
    ctx->pc = 0x30809Cu;
    {
        const bool branch_taken_0x30809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30809Cu;
        // 0x3080a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30809c) {
            ctx->pc = 0x3080F4u;
            goto label_3080f4;
        }
    }
    ctx->pc = 0x3080A4u;
label_3080a4:
    // 0x3080a4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3080a8:
    if (ctx->pc == 0x3080A8u) {
        ctx->pc = 0x3080A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080A4u;
        // 0x3080a8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3080ACu;
        goto label_3080ac;
    }
    ctx->pc = 0x3080A4u;
    {
        const bool branch_taken_0x3080a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3080A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080A4u;
        // 0x3080a8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080a4) {
            ctx->pc = 0x3080CCu;
            goto label_3080cc;
        }
    }
    ctx->pc = 0x3080ACu;
label_3080ac:
    // 0x3080ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3080b0:
    if (ctx->pc == 0x3080B0u) {
        ctx->pc = 0x3080B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080ACu;
        // 0x3080b0: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3080B4u;
        goto label_3080b4;
    }
    ctx->pc = 0x3080ACu;
    {
        const bool branch_taken_0x3080ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080ACu;
        // 0x3080b0: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080ac) {
            ctx->pc = 0x3080ECu;
            goto label_3080ec;
        }
    }
    ctx->pc = 0x3080B4u;
label_3080b4:
    // 0x3080b4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_3080b8:
    if (ctx->pc == 0x3080B8u) {
        ctx->pc = 0x3080B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080B4u;
        // 0x3080b8: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3080BCu;
        goto label_3080bc;
    }
    ctx->pc = 0x3080B4u;
    {
        const bool branch_taken_0x3080b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3080B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080B4u;
        // 0x3080b8: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080b4) {
            ctx->pc = 0x3080F0u;
            goto label_3080f0;
        }
    }
    ctx->pc = 0x3080BCu;
label_3080bc:
    // 0x3080bc: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3080bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3080c0:
    // 0x3080c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3080c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3080c4:
    // 0x3080c4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3080c8:
    if (ctx->pc == 0x3080C8u) {
        ctx->pc = 0x3080C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080C4u;
        // 0x3080c8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3080CCu;
        goto label_3080cc;
    }
    ctx->pc = 0x3080C4u;
    {
        const bool branch_taken_0x3080c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080C4u;
        // 0x3080c8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080c4) {
            ctx->pc = 0x308230u;
            goto label_308230;
        }
    }
    ctx->pc = 0x3080CCu;
label_3080cc:
    // 0x3080cc: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3080ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3080d0:
    // 0x3080d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3080d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3080d4:
    // 0x3080d4: 0x10000056  b           . + 4 + (0x56 << 2)
label_3080d8:
    if (ctx->pc == 0x3080D8u) {
        ctx->pc = 0x3080D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080D4u;
        // 0x3080d8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3080DCu;
        goto label_3080dc;
    }
    ctx->pc = 0x3080D4u;
    {
        const bool branch_taken_0x3080d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080D4u;
        // 0x3080d8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080d4) {
            ctx->pc = 0x308230u;
            goto label_308230;
        }
    }
    ctx->pc = 0x3080DCu;
label_3080dc:
    // 0x3080dc: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3080dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3080e0:
    // 0x3080e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3080e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3080e4:
    // 0x3080e4: 0x10000052  b           . + 4 + (0x52 << 2)
label_3080e8:
    if (ctx->pc == 0x3080E8u) {
        ctx->pc = 0x3080E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080E4u;
        // 0x3080e8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3080ECu;
        goto label_3080ec;
    }
    ctx->pc = 0x3080E4u;
    {
        const bool branch_taken_0x3080e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080E4u;
        // 0x3080e8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080e4) {
            ctx->pc = 0x308230u;
            goto label_308230;
        }
    }
    ctx->pc = 0x3080ECu;
label_3080ec:
    // 0x3080ec: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3080ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3080f0:
    // 0x3080f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3080f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3080f4:
    // 0x3080f4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_3080f8:
    if (ctx->pc == 0x3080F8u) {
        ctx->pc = 0x3080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080F4u;
        // 0x3080f8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3080FCu;
        goto label_3080fc;
    }
    ctx->pc = 0x3080F4u;
    {
        const bool branch_taken_0x3080f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080F4u;
        // 0x3080f8: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080f4) {
            ctx->pc = 0x308230u;
            goto label_308230;
        }
    }
    ctx->pc = 0x3080FCu;
label_3080fc:
    // 0x3080fc: 0x2d02000a  sltiu       $v0, $t0, 0xA
    ctx->pc = 0x3080fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_308100:
    // 0x308100: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_308104:
    if (ctx->pc == 0x308104u) {
        ctx->pc = 0x308104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308100u;
        // 0x308104: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308108u;
        goto label_308108;
    }
    ctx->pc = 0x308100u;
    {
        const bool branch_taken_0x308100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308100u;
        // 0x308104: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308100) {
            ctx->pc = 0x3081F8u;
            goto label_3081f8;
        }
    }
    ctx->pc = 0x308108u;
label_308108:
    // 0x308108: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x308108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_30810c:
    // 0x30810c: 0x24420de0  addiu       $v0, $v0, 0xDE0
    ctx->pc = 0x30810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3552));
label_308110:
    // 0x308110: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x308110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308114:
    // 0x308114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x308114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_308118:
    // 0x308118: 0x600008  jr          $v1
label_30811c:
    if (ctx->pc == 0x30811Cu) {
        ctx->pc = 0x308120u;
        goto label_308120;
    }
    ctx->pc = 0x308118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308120u: goto label_308120;
            case 0x308130u: goto label_308130;
            case 0x308140u: goto label_308140;
            case 0x30815Cu: goto label_30815c;
            case 0x30816Cu: goto label_30816c;
            case 0x308188u: goto label_308188;
            case 0x3081ACu: goto label_3081ac;
            case 0x3081BCu: goto label_3081bc;
            case 0x3081CCu: goto label_3081cc;
            case 0x3081DCu: goto label_3081dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308118u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x308120u;
label_308120:
    // 0x308120: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x308120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_308124:
    // 0x308124: 0x8c433d80  lw          $v1, 0x3D80($v0)
    ctx->pc = 0x308124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15744)));
label_308128:
    // 0x308128: 0x10000038  b           . + 4 + (0x38 << 2)
label_30812c:
    if (ctx->pc == 0x30812Cu) {
        ctx->pc = 0x30812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308128u;
        // 0x30812c: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308130u;
        goto label_308130;
    }
    ctx->pc = 0x308128u;
    {
        const bool branch_taken_0x308128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308128u;
        // 0x30812c: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308128) {
            ctx->pc = 0x30820Cu;
            goto label_30820c;
        }
    }
    ctx->pc = 0x308130u;
label_308130:
    // 0x308130: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x308130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_308134:
    // 0x308134: 0x24433d88  addiu       $v1, $v0, 0x3D88
    ctx->pc = 0x308134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15752));
label_308138:
    // 0x308138: 0x1000000f  b           . + 4 + (0xF << 2)
label_30813c:
    if (ctx->pc == 0x30813Cu) {
        ctx->pc = 0x30813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308138u;
        // 0x30813c: 0x8c443d88  lw          $a0, 0x3D88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308140u;
        goto label_308140;
    }
    ctx->pc = 0x308138u;
    {
        const bool branch_taken_0x308138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308138u;
        // 0x30813c: 0x8c443d88  lw          $a0, 0x3D88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308138) {
            ctx->pc = 0x308178u;
            goto label_308178;
        }
    }
    ctx->pc = 0x308140u;
label_308140:
    // 0x308140: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x308140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_308144:
    // 0x308144: 0x24433d90  addiu       $v1, $v0, 0x3D90
    ctx->pc = 0x308144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15760));
label_308148:
    // 0x308148: 0x94443d90  lhu         $a0, 0x3D90($v0)
    ctx->pc = 0x308148u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 15760)));
label_30814c:
    // 0x30814c: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x30814cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_308150:
    // 0x308150: 0xa7a40100  sh          $a0, 0x100($sp)
    ctx->pc = 0x308150u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 4));
label_308154:
    // 0x308154: 0x1000002d  b           . + 4 + (0x2D << 2)
label_308158:
    if (ctx->pc == 0x308158u) {
        ctx->pc = 0x308158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308154u;
        // 0x308158: 0xa3a50102  sb          $a1, 0x102($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 258), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30815Cu;
        goto label_30815c;
    }
    ctx->pc = 0x308154u;
    {
        const bool branch_taken_0x308154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308154u;
        // 0x308158: 0xa3a50102  sb          $a1, 0x102($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 258), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308154) {
            ctx->pc = 0x30820Cu;
            goto label_30820c;
        }
    }
    ctx->pc = 0x30815Cu;
label_30815c:
    // 0x30815c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x30815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_308160:
    // 0x308160: 0x8c433d98  lw          $v1, 0x3D98($v0)
    ctx->pc = 0x308160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15768)));
label_308164:
    // 0x308164: 0x10000029  b           . + 4 + (0x29 << 2)
label_308168:
    if (ctx->pc == 0x308168u) {
        ctx->pc = 0x308168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308164u;
        // 0x308168: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30816Cu;
        goto label_30816c;
    }
    ctx->pc = 0x308164u;
    {
        const bool branch_taken_0x308164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308164u;
        // 0x308168: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308164) {
            ctx->pc = 0x30820Cu;
            goto label_30820c;
        }
    }
    ctx->pc = 0x30816Cu;
label_30816c:
    // 0x30816c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x30816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_308170:
    // 0x308170: 0x24433da0  addiu       $v1, $v0, 0x3DA0
    ctx->pc = 0x308170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15776));
label_308174:
    // 0x308174: 0x8c443da0  lw          $a0, 0x3DA0($v0)
    ctx->pc = 0x308174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_308178:
    // 0x308178: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x308178u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_30817c:
    // 0x30817c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x30817cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_308180:
    // 0x308180: 0x10000022  b           . + 4 + (0x22 << 2)
label_308184:
    if (ctx->pc == 0x308184u) {
        ctx->pc = 0x308184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308180u;
        // 0x308184: 0xa3a50104  sb          $a1, 0x104($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 260), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308188u;
        goto label_308188;
    }
    ctx->pc = 0x308180u;
    {
        const bool branch_taken_0x308180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308180u;
        // 0x308184: 0xa3a50104  sb          $a1, 0x104($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 260), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308180) {
            ctx->pc = 0x30820Cu;
            goto label_30820c;
        }
    }
    ctx->pc = 0x308188u;
label_308188:
    // 0x308188: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x308188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_30818c:
    // 0x30818c: 0x24433da8  addiu       $v1, $v0, 0x3DA8
    ctx->pc = 0x30818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15784));
label_308190:
    // 0x308190: 0x8c443da8  lw          $a0, 0x3DA8($v0)
    ctx->pc = 0x308190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15784)));
label_308194:
    // 0x308194: 0x90650006  lbu         $a1, 0x6($v1)
    ctx->pc = 0x308194u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
label_308198:
    // 0x308198: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x308198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_30819c:
    // 0x30819c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x30819cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_3081a0:
    // 0x3081a0: 0xa7a20104  sh          $v0, 0x104($sp)
    ctx->pc = 0x3081a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 2));
label_3081a4:
    // 0x3081a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_3081a8:
    if (ctx->pc == 0x3081A8u) {
        ctx->pc = 0x3081A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081A4u;
        // 0x3081a8: 0xa3a50106  sb          $a1, 0x106($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 262), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3081ACu;
        goto label_3081ac;
    }
    ctx->pc = 0x3081A4u;
    {
        const bool branch_taken_0x3081a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081A4u;
        // 0x3081a8: 0xa3a50106  sb          $a1, 0x106($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 262), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081a4) {
            ctx->pc = 0x30820Cu;
            goto label_30820c;
        }
    }
    ctx->pc = 0x3081ACu;
label_3081ac:
    // 0x3081ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3081acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3081b0:
    // 0x3081b0: 0x24433db0  addiu       $v1, $v0, 0x3DB0
    ctx->pc = 0x3081b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15792));
label_3081b4:
    // 0x3081b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3081b8:
    if (ctx->pc == 0x3081B8u) {
        ctx->pc = 0x3081B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081B4u;
        // 0x3081b8: 0x8c443db0  lw          $a0, 0x3DB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3081BCu;
        goto label_3081bc;
    }
    ctx->pc = 0x3081B4u;
    {
        const bool branch_taken_0x3081b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081B4u;
        // 0x3081b8: 0x8c443db0  lw          $a0, 0x3DB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081b4) {
            ctx->pc = 0x3081E8u;
            goto label_3081e8;
        }
    }
    ctx->pc = 0x3081BCu;
label_3081bc:
    // 0x3081bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3081bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3081c0:
    // 0x3081c0: 0x24433db8  addiu       $v1, $v0, 0x3DB8
    ctx->pc = 0x3081c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15800));
label_3081c4:
    // 0x3081c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3081c8:
    if (ctx->pc == 0x3081C8u) {
        ctx->pc = 0x3081C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081C4u;
        // 0x3081c8: 0x8c443db8  lw          $a0, 0x3DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3081CCu;
        goto label_3081cc;
    }
    ctx->pc = 0x3081C4u;
    {
        const bool branch_taken_0x3081c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081C4u;
        // 0x3081c8: 0x8c443db8  lw          $a0, 0x3DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081c4) {
            ctx->pc = 0x3081E8u;
            goto label_3081e8;
        }
    }
    ctx->pc = 0x3081CCu;
label_3081cc:
    // 0x3081cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3081ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3081d0:
    // 0x3081d0: 0x24433dc0  addiu       $v1, $v0, 0x3DC0
    ctx->pc = 0x3081d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15808));
label_3081d4:
    // 0x3081d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3081d8:
    if (ctx->pc == 0x3081D8u) {
        ctx->pc = 0x3081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081D4u;
        // 0x3081d8: 0x8c443dc0  lw          $a0, 0x3DC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3081DCu;
        goto label_3081dc;
    }
    ctx->pc = 0x3081D4u;
    {
        const bool branch_taken_0x3081d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081D4u;
        // 0x3081d8: 0x8c443dc0  lw          $a0, 0x3DC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081d4) {
            ctx->pc = 0x3081E8u;
            goto label_3081e8;
        }
    }
    ctx->pc = 0x3081DCu;
label_3081dc:
    // 0x3081dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3081dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3081e0:
    // 0x3081e0: 0x24433dc8  addiu       $v1, $v0, 0x3DC8
    ctx->pc = 0x3081e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15816));
label_3081e4:
    // 0x3081e4: 0x8c443dc8  lw          $a0, 0x3DC8($v0)
    ctx->pc = 0x3081e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15816)));
label_3081e8:
    // 0x3081e8: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x3081e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_3081ec:
    // 0x3081ec: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x3081ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_3081f0:
    // 0x3081f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3081f4:
    if (ctx->pc == 0x3081F4u) {
        ctx->pc = 0x3081F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081F0u;
        // 0x3081f4: 0xa7a50104  sh          $a1, 0x104($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3081F8u;
        goto label_3081f8;
    }
    ctx->pc = 0x3081F0u;
    {
        const bool branch_taken_0x3081f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081F0u;
        // 0x3081f4: 0xa7a50104  sh          $a1, 0x104($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081f0) {
            ctx->pc = 0x30820Cu;
            goto label_30820c;
        }
    }
    ctx->pc = 0x3081F8u;
label_3081f8:
    // 0x3081f8: 0x24430d88  addiu       $v1, $v0, 0xD88
    ctx->pc = 0x3081f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3464));
label_3081fc:
    // 0x3081fc: 0xdc440d88  ld          $a0, 0xD88($v0)
    ctx->pc = 0x3081fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 3464)));
label_308200:
    // 0x308200: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x308200u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_308204:
    // 0x308204: 0xffa40100  sd          $a0, 0x100($sp)
    ctx->pc = 0x308204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 4));
label_308208:
    // 0x308208: 0xa7a50108  sh          $a1, 0x108($sp)
    ctx->pc = 0x308208u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 5));
label_30820c:
    // 0x30820c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x30820cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_308210:
    // 0x308210: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x308210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_308214:
    // 0x308214: 0x8c62108c  lw          $v0, 0x108C($v1)
    ctx->pc = 0x308214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4236)));
label_308218:
    // 0x308218: 0x24a50d98  addiu       $a1, $a1, 0xD98
    ctx->pc = 0x308218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3480));
label_30821c:
    // 0x30821c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30821cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_308220:
    // 0x308220: 0x10000028  b           . + 4 + (0x28 << 2)
label_308224:
    if (ctx->pc == 0x308224u) {
        ctx->pc = 0x308224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308220u;
        // 0x308224: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308228u;
        goto label_308228;
    }
    ctx->pc = 0x308220u;
    {
        const bool branch_taken_0x308220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308220u;
        // 0x308224: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308220) {
            ctx->pc = 0x3082C4u;
            goto label_3082c4;
        }
    }
    ctx->pc = 0x308228u;
label_308228:
    // 0x308228: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x308228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30822c:
    // 0x30822c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x30822cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_308230:
    // 0x308230: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x308230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_308234:
    // 0x308234: 0x2d02000a  sltiu       $v0, $t0, 0xA
    ctx->pc = 0x308234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_308238:
    // 0x308238: 0x1440ff2f  bnez        $v0, . + 4 + (-0xD1 << 2)
label_30823c:
    if (ctx->pc == 0x30823Cu) {
        ctx->pc = 0x30823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308238u;
        // 0x30823c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308240u;
        goto label_308240;
    }
    ctx->pc = 0x308238u;
    {
        const bool branch_taken_0x308238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308238u;
        // 0x30823c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308238) {
            ctx->pc = 0x307EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307ef8;
        }
    }
    ctx->pc = 0x308240u;
label_308240:
    // 0x308240: 0x10000008  b           . + 4 + (0x8 << 2)
label_308244:
    if (ctx->pc == 0x308244u) {
        ctx->pc = 0x308248u;
        goto label_308248;
    }
    ctx->pc = 0x308240u;
    {
        const bool branch_taken_0x308240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308240) {
            ctx->pc = 0x308264u;
            goto label_308264;
        }
    }
    ctx->pc = 0x308248u;
label_308248:
    // 0x308248: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x308248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_30824c:
    // 0x30824c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x30824cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_308250:
    // 0x308250: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x308250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_308254:
    // 0x308254: 0xa20200b6  sb          $v0, 0xB6($s0)
    ctx->pc = 0x308254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 2));
label_308258:
    // 0x308258: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x308258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_30825c:
    // 0x30825c: 0xae0401f4  sw          $a0, 0x1F4($s0)
    ctx->pc = 0x30825cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 4));
label_308260:
    // 0x308260: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x308260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_308264:
    // 0x308264: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
label_308268:
    if (ctx->pc == 0x308268u) {
        ctx->pc = 0x308268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308264u;
        // 0x308268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30826Cu;
        goto label_30826c;
    }
    ctx->pc = 0x308264u;
    {
        const bool branch_taken_0x308264 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x308268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308264u;
        // 0x308268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308264) {
            ctx->pc = 0x3082DCu;
            goto label_3082dc;
        }
    }
    ctx->pc = 0x30826Cu;
label_30826c:
    // 0x30826c: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_308270:
    if (ctx->pc == 0x308270u) {
        ctx->pc = 0x308274u;
        goto label_308274;
    }
    ctx->pc = 0x30826Cu;
    {
        const bool branch_taken_0x30826c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x30826c) {
            ctx->pc = 0x3082D4u;
            goto label_3082d4;
        }
    }
    ctx->pc = 0x308274u;
label_308274:
    // 0x308274: 0x1000001a  b           . + 4 + (0x1A << 2)
label_308278:
    if (ctx->pc == 0x308278u) {
        ctx->pc = 0x308278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308274u;
        // 0x308278: 0x7bb00420  lq          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30827Cu;
        goto label_30827c;
    }
    ctx->pc = 0x308274u;
    {
        const bool branch_taken_0x308274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308274u;
        // 0x308278: 0x7bb00420  lq          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308274) {
            ctx->pc = 0x3082E0u;
            goto label_3082e0;
        }
    }
    ctx->pc = 0x30827Cu;
label_30827c:
    // 0x30827c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x30827cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_308280:
    // 0x308280: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x308280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_308284:
    // 0x308284: 0x8c62108c  lw          $v0, 0x108C($v1)
    ctx->pc = 0x308284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4236)));
label_308288:
    // 0x308288: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x308288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_30828c:
    // 0x30828c: 0x24a50b20  addiu       $a1, $a1, 0xB20
    ctx->pc = 0x30828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2848));
label_308290:
    // 0x308290: 0x1000000c  b           . + 4 + (0xC << 2)
label_308294:
    if (ctx->pc == 0x308294u) {
        ctx->pc = 0x308294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308290u;
        // 0x308294: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308298u;
        goto label_308298;
    }
    ctx->pc = 0x308290u;
    {
        const bool branch_taken_0x308290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308290u;
        // 0x308294: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308290) {
            ctx->pc = 0x3082C4u;
            goto label_3082c4;
        }
    }
    ctx->pc = 0x308298u;
label_308298:
    // 0x308298: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x308298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30829c:
    // 0x30829c: 0x8c62108c  lw          $v0, 0x108C($v1)
    ctx->pc = 0x30829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4236)));
label_3082a0:
    // 0x3082a0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3082a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_3082a4:
    // 0x3082a4: 0x24a50ba0  addiu       $a1, $a1, 0xBA0
    ctx->pc = 0x3082a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2976));
label_3082a8:
    // 0x3082a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3082ac:
    if (ctx->pc == 0x3082ACu) {
        ctx->pc = 0x3082ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082A8u;
        // 0x3082ac: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082B0u;
        goto label_3082b0;
    }
    ctx->pc = 0x3082A8u;
    {
        const bool branch_taken_0x3082a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3082ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082A8u;
        // 0x3082ac: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082a8) {
            ctx->pc = 0x3082C4u;
            goto label_3082c4;
        }
    }
    ctx->pc = 0x3082B0u;
label_3082b0:
    // 0x3082b0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3082b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3082b4:
    // 0x3082b4: 0x8c62108c  lw          $v0, 0x108C($v1)
    ctx->pc = 0x3082b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4236)));
label_3082b8:
    // 0x3082b8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3082b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_3082bc:
    // 0x3082bc: 0x24a50c30  addiu       $a1, $a1, 0xC30
    ctx->pc = 0x3082bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3120));
label_3082c0:
    // 0x3082c0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x3082c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3082c4:
    // 0x3082c4: 0x40f809  jalr        $v0
label_3082c8:
    if (ctx->pc == 0x3082C8u) {
        ctx->pc = 0x3082CCu;
        goto label_3082cc;
    }
    ctx->pc = 0x3082C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3082CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3082C4u, 0x3082CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3082CCu;
label_3082cc:
    // 0x3082cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3082d0:
    if (ctx->pc == 0x3082D0u) {
        ctx->pc = 0x3082D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082CCu;
        // 0x3082d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082D4u;
        goto label_3082d4;
    }
    ctx->pc = 0x3082CCu;
    {
        const bool branch_taken_0x3082cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3082D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082CCu;
        // 0x3082d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082cc) {
            ctx->pc = 0x3082DCu;
            goto label_3082dc;
        }
    }
    ctx->pc = 0x3082D4u;
label_3082d4:
    // 0x3082d4: 0xc098e2e  jal         func_2638B8
label_3082d8:
    if (ctx->pc == 0x3082D8u) {
        ctx->pc = 0x3082D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082D4u;
        // 0x3082d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082DCu;
        goto label_3082dc;
    }
    ctx->pc = 0x3082D4u;
    SET_GPR_U32(ctx, 31, 0x3082DCu);
    ctx->pc = 0x3082D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082D4u;
    // 0x3082d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2638B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2638B8u, 0x3082D4u, 0x3082DCu)) {
        return;
    }
    ctx->pc = 0x3082DCu;
label_3082dc:
    // 0x3082dc: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x3082dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3082e0:
    // 0x3082e0: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x3082e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3082e4:
    // 0x3082e4: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x3082e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_3082e8:
    // 0x3082e8: 0x3e00008  jr          $ra
label_3082ec:
    if (ctx->pc == 0x3082ECu) {
        ctx->pc = 0x3082ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082E8u;
        // 0x3082ec: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082F0u;
        goto label_fallthrough_0x3082e8;
    }
    ctx->pc = 0x3082E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3082ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082E8u;
        // 0x3082ec: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3082E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3082e8:
    ctx->pc = 0x3082F0u;
}
