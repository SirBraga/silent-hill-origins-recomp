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

// Function: sub_00253DD8
// Address: 0x253dd8 - 0x2542c0
void sub_00253DD8_0x253dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253DD8_0x253dd8");
#endif

    switch (ctx->pc) {
        case 0x253dd8u: goto label_253dd8;
        case 0x253ddcu: goto label_253ddc;
        case 0x253de0u: goto label_253de0;
        case 0x253de4u: goto label_253de4;
        case 0x253de8u: goto label_253de8;
        case 0x253decu: goto label_253dec;
        case 0x253df0u: goto label_253df0;
        case 0x253df4u: goto label_253df4;
        case 0x253df8u: goto label_253df8;
        case 0x253dfcu: goto label_253dfc;
        case 0x253e00u: goto label_253e00;
        case 0x253e04u: goto label_253e04;
        case 0x253e08u: goto label_253e08;
        case 0x253e0cu: goto label_253e0c;
        case 0x253e10u: goto label_253e10;
        case 0x253e14u: goto label_253e14;
        case 0x253e18u: goto label_253e18;
        case 0x253e1cu: goto label_253e1c;
        case 0x253e20u: goto label_253e20;
        case 0x253e24u: goto label_253e24;
        case 0x253e28u: goto label_253e28;
        case 0x253e2cu: goto label_253e2c;
        case 0x253e30u: goto label_253e30;
        case 0x253e34u: goto label_253e34;
        case 0x253e38u: goto label_253e38;
        case 0x253e3cu: goto label_253e3c;
        case 0x253e40u: goto label_253e40;
        case 0x253e44u: goto label_253e44;
        case 0x253e48u: goto label_253e48;
        case 0x253e4cu: goto label_253e4c;
        case 0x253e50u: goto label_253e50;
        case 0x253e54u: goto label_253e54;
        case 0x253e58u: goto label_253e58;
        case 0x253e5cu: goto label_253e5c;
        case 0x253e60u: goto label_253e60;
        case 0x253e64u: goto label_253e64;
        case 0x253e68u: goto label_253e68;
        case 0x253e6cu: goto label_253e6c;
        case 0x253e70u: goto label_253e70;
        case 0x253e74u: goto label_253e74;
        case 0x253e78u: goto label_253e78;
        case 0x253e7cu: goto label_253e7c;
        case 0x253e80u: goto label_253e80;
        case 0x253e84u: goto label_253e84;
        case 0x253e88u: goto label_253e88;
        case 0x253e8cu: goto label_253e8c;
        case 0x253e90u: goto label_253e90;
        case 0x253e94u: goto label_253e94;
        case 0x253e98u: goto label_253e98;
        case 0x253e9cu: goto label_253e9c;
        case 0x253ea0u: goto label_253ea0;
        case 0x253ea4u: goto label_253ea4;
        case 0x253ea8u: goto label_253ea8;
        case 0x253eacu: goto label_253eac;
        case 0x253eb0u: goto label_253eb0;
        case 0x253eb4u: goto label_253eb4;
        case 0x253eb8u: goto label_253eb8;
        case 0x253ebcu: goto label_253ebc;
        case 0x253ec0u: goto label_253ec0;
        case 0x253ec4u: goto label_253ec4;
        case 0x253ec8u: goto label_253ec8;
        case 0x253eccu: goto label_253ecc;
        case 0x253ed0u: goto label_253ed0;
        case 0x253ed4u: goto label_253ed4;
        case 0x253ed8u: goto label_253ed8;
        case 0x253edcu: goto label_253edc;
        case 0x253ee0u: goto label_253ee0;
        case 0x253ee4u: goto label_253ee4;
        case 0x253ee8u: goto label_253ee8;
        case 0x253eecu: goto label_253eec;
        case 0x253ef0u: goto label_253ef0;
        case 0x253ef4u: goto label_253ef4;
        case 0x253ef8u: goto label_253ef8;
        case 0x253efcu: goto label_253efc;
        case 0x253f00u: goto label_253f00;
        case 0x253f04u: goto label_253f04;
        case 0x253f08u: goto label_253f08;
        case 0x253f0cu: goto label_253f0c;
        case 0x253f10u: goto label_253f10;
        case 0x253f14u: goto label_253f14;
        case 0x253f18u: goto label_253f18;
        case 0x253f1cu: goto label_253f1c;
        case 0x253f20u: goto label_253f20;
        case 0x253f24u: goto label_253f24;
        case 0x253f28u: goto label_253f28;
        case 0x253f2cu: goto label_253f2c;
        case 0x253f30u: goto label_253f30;
        case 0x253f34u: goto label_253f34;
        case 0x253f38u: goto label_253f38;
        case 0x253f3cu: goto label_253f3c;
        case 0x253f40u: goto label_253f40;
        case 0x253f44u: goto label_253f44;
        case 0x253f48u: goto label_253f48;
        case 0x253f4cu: goto label_253f4c;
        case 0x253f50u: goto label_253f50;
        case 0x253f54u: goto label_253f54;
        case 0x253f58u: goto label_253f58;
        case 0x253f5cu: goto label_253f5c;
        case 0x253f60u: goto label_253f60;
        case 0x253f64u: goto label_253f64;
        case 0x253f68u: goto label_253f68;
        case 0x253f6cu: goto label_253f6c;
        case 0x253f70u: goto label_253f70;
        case 0x253f74u: goto label_253f74;
        case 0x253f78u: goto label_253f78;
        case 0x253f7cu: goto label_253f7c;
        case 0x253f80u: goto label_253f80;
        case 0x253f84u: goto label_253f84;
        case 0x253f88u: goto label_253f88;
        case 0x253f8cu: goto label_253f8c;
        case 0x253f90u: goto label_253f90;
        case 0x253f94u: goto label_253f94;
        case 0x253f98u: goto label_253f98;
        case 0x253f9cu: goto label_253f9c;
        case 0x253fa0u: goto label_253fa0;
        case 0x253fa4u: goto label_253fa4;
        case 0x253fa8u: goto label_253fa8;
        case 0x253facu: goto label_253fac;
        case 0x253fb0u: goto label_253fb0;
        case 0x253fb4u: goto label_253fb4;
        case 0x253fb8u: goto label_253fb8;
        case 0x253fbcu: goto label_253fbc;
        case 0x253fc0u: goto label_253fc0;
        case 0x253fc4u: goto label_253fc4;
        case 0x253fc8u: goto label_253fc8;
        case 0x253fccu: goto label_253fcc;
        case 0x253fd0u: goto label_253fd0;
        case 0x253fd4u: goto label_253fd4;
        case 0x253fd8u: goto label_253fd8;
        case 0x253fdcu: goto label_253fdc;
        case 0x253fe0u: goto label_253fe0;
        case 0x253fe4u: goto label_253fe4;
        case 0x253fe8u: goto label_253fe8;
        case 0x253fecu: goto label_253fec;
        case 0x253ff0u: goto label_253ff0;
        case 0x253ff4u: goto label_253ff4;
        case 0x253ff8u: goto label_253ff8;
        case 0x253ffcu: goto label_253ffc;
        case 0x254000u: goto label_254000;
        case 0x254004u: goto label_254004;
        case 0x254008u: goto label_254008;
        case 0x25400cu: goto label_25400c;
        case 0x254010u: goto label_254010;
        case 0x254014u: goto label_254014;
        case 0x254018u: goto label_254018;
        case 0x25401cu: goto label_25401c;
        case 0x254020u: goto label_254020;
        case 0x254024u: goto label_254024;
        case 0x254028u: goto label_254028;
        case 0x25402cu: goto label_25402c;
        case 0x254030u: goto label_254030;
        case 0x254034u: goto label_254034;
        case 0x254038u: goto label_254038;
        case 0x25403cu: goto label_25403c;
        case 0x254040u: goto label_254040;
        case 0x254044u: goto label_254044;
        case 0x254048u: goto label_254048;
        case 0x25404cu: goto label_25404c;
        case 0x254050u: goto label_254050;
        case 0x254054u: goto label_254054;
        case 0x254058u: goto label_254058;
        case 0x25405cu: goto label_25405c;
        case 0x254060u: goto label_254060;
        case 0x254064u: goto label_254064;
        case 0x254068u: goto label_254068;
        case 0x25406cu: goto label_25406c;
        case 0x254070u: goto label_254070;
        case 0x254074u: goto label_254074;
        case 0x254078u: goto label_254078;
        case 0x25407cu: goto label_25407c;
        case 0x254080u: goto label_254080;
        case 0x254084u: goto label_254084;
        case 0x254088u: goto label_254088;
        case 0x25408cu: goto label_25408c;
        case 0x254090u: goto label_254090;
        case 0x254094u: goto label_254094;
        case 0x254098u: goto label_254098;
        case 0x25409cu: goto label_25409c;
        case 0x2540a0u: goto label_2540a0;
        case 0x2540a4u: goto label_2540a4;
        case 0x2540a8u: goto label_2540a8;
        case 0x2540acu: goto label_2540ac;
        case 0x2540b0u: goto label_2540b0;
        case 0x2540b4u: goto label_2540b4;
        case 0x2540b8u: goto label_2540b8;
        case 0x2540bcu: goto label_2540bc;
        case 0x2540c0u: goto label_2540c0;
        case 0x2540c4u: goto label_2540c4;
        case 0x2540c8u: goto label_2540c8;
        case 0x2540ccu: goto label_2540cc;
        case 0x2540d0u: goto label_2540d0;
        case 0x2540d4u: goto label_2540d4;
        case 0x2540d8u: goto label_2540d8;
        case 0x2540dcu: goto label_2540dc;
        case 0x2540e0u: goto label_2540e0;
        case 0x2540e4u: goto label_2540e4;
        case 0x2540e8u: goto label_2540e8;
        case 0x2540ecu: goto label_2540ec;
        case 0x2540f0u: goto label_2540f0;
        case 0x2540f4u: goto label_2540f4;
        case 0x2540f8u: goto label_2540f8;
        case 0x2540fcu: goto label_2540fc;
        case 0x254100u: goto label_254100;
        case 0x254104u: goto label_254104;
        case 0x254108u: goto label_254108;
        case 0x25410cu: goto label_25410c;
        case 0x254110u: goto label_254110;
        case 0x254114u: goto label_254114;
        case 0x254118u: goto label_254118;
        case 0x25411cu: goto label_25411c;
        case 0x254120u: goto label_254120;
        case 0x254124u: goto label_254124;
        case 0x254128u: goto label_254128;
        case 0x25412cu: goto label_25412c;
        case 0x254130u: goto label_254130;
        case 0x254134u: goto label_254134;
        case 0x254138u: goto label_254138;
        case 0x25413cu: goto label_25413c;
        case 0x254140u: goto label_254140;
        case 0x254144u: goto label_254144;
        case 0x254148u: goto label_254148;
        case 0x25414cu: goto label_25414c;
        case 0x254150u: goto label_254150;
        case 0x254154u: goto label_254154;
        case 0x254158u: goto label_254158;
        case 0x25415cu: goto label_25415c;
        case 0x254160u: goto label_254160;
        case 0x254164u: goto label_254164;
        case 0x254168u: goto label_254168;
        case 0x25416cu: goto label_25416c;
        case 0x254170u: goto label_254170;
        case 0x254174u: goto label_254174;
        case 0x254178u: goto label_254178;
        case 0x25417cu: goto label_25417c;
        case 0x254180u: goto label_254180;
        case 0x254184u: goto label_254184;
        case 0x254188u: goto label_254188;
        case 0x25418cu: goto label_25418c;
        case 0x254190u: goto label_254190;
        case 0x254194u: goto label_254194;
        case 0x254198u: goto label_254198;
        case 0x25419cu: goto label_25419c;
        case 0x2541a0u: goto label_2541a0;
        case 0x2541a4u: goto label_2541a4;
        case 0x2541a8u: goto label_2541a8;
        case 0x2541acu: goto label_2541ac;
        case 0x2541b0u: goto label_2541b0;
        case 0x2541b4u: goto label_2541b4;
        case 0x2541b8u: goto label_2541b8;
        case 0x2541bcu: goto label_2541bc;
        case 0x2541c0u: goto label_2541c0;
        case 0x2541c4u: goto label_2541c4;
        case 0x2541c8u: goto label_2541c8;
        case 0x2541ccu: goto label_2541cc;
        case 0x2541d0u: goto label_2541d0;
        case 0x2541d4u: goto label_2541d4;
        case 0x2541d8u: goto label_2541d8;
        case 0x2541dcu: goto label_2541dc;
        case 0x2541e0u: goto label_2541e0;
        case 0x2541e4u: goto label_2541e4;
        case 0x2541e8u: goto label_2541e8;
        case 0x2541ecu: goto label_2541ec;
        case 0x2541f0u: goto label_2541f0;
        case 0x2541f4u: goto label_2541f4;
        case 0x2541f8u: goto label_2541f8;
        case 0x2541fcu: goto label_2541fc;
        case 0x254200u: goto label_254200;
        case 0x254204u: goto label_254204;
        case 0x254208u: goto label_254208;
        case 0x25420cu: goto label_25420c;
        case 0x254210u: goto label_254210;
        case 0x254214u: goto label_254214;
        case 0x254218u: goto label_254218;
        case 0x25421cu: goto label_25421c;
        case 0x254220u: goto label_254220;
        case 0x254224u: goto label_254224;
        case 0x254228u: goto label_254228;
        case 0x25422cu: goto label_25422c;
        case 0x254230u: goto label_254230;
        case 0x254234u: goto label_254234;
        case 0x254238u: goto label_254238;
        case 0x25423cu: goto label_25423c;
        case 0x254240u: goto label_254240;
        case 0x254244u: goto label_254244;
        case 0x254248u: goto label_254248;
        case 0x25424cu: goto label_25424c;
        case 0x254250u: goto label_254250;
        case 0x254254u: goto label_254254;
        case 0x254258u: goto label_254258;
        case 0x25425cu: goto label_25425c;
        case 0x254260u: goto label_254260;
        case 0x254264u: goto label_254264;
        case 0x254268u: goto label_254268;
        case 0x25426cu: goto label_25426c;
        case 0x254270u: goto label_254270;
        case 0x254274u: goto label_254274;
        case 0x254278u: goto label_254278;
        case 0x25427cu: goto label_25427c;
        case 0x254280u: goto label_254280;
        case 0x254284u: goto label_254284;
        case 0x254288u: goto label_254288;
        case 0x25428cu: goto label_25428c;
        case 0x254290u: goto label_254290;
        case 0x254294u: goto label_254294;
        case 0x254298u: goto label_254298;
        case 0x25429cu: goto label_25429c;
        case 0x2542a0u: goto label_2542a0;
        case 0x2542a4u: goto label_2542a4;
        case 0x2542a8u: goto label_2542a8;
        case 0x2542acu: goto label_2542ac;
        case 0x2542b0u: goto label_2542b0;
        case 0x2542b4u: goto label_2542b4;
        case 0x2542b8u: goto label_2542b8;
        case 0x2542bcu: goto label_2542bc;
        default: break;
    }

    ctx->pc = 0x253dd8u;

label_253dd8:
    // 0x253dd8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x253dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_253ddc:
    // 0x253ddc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253de0:
    // 0x253de0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x253de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_253de4:
    // 0x253de4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_253de8:
    // 0x253de8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x253de8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_253dec:
    // 0x253dec: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x253decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_253df0:
    // 0x253df0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x253df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_253df4:
    // 0x253df4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x253df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_253df8:
    // 0x253df8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x253df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_253dfc:
    // 0x253dfc: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x253dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_253e00:
    // 0x253e00: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x253e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_253e04:
    // 0x253e04: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x253e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_253e08:
    // 0x253e08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x253e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_253e0c:
    // 0x253e0c: 0xc09270a  jal         func_249C28
label_253e10:
    if (ctx->pc == 0x253E10u) {
        ctx->pc = 0x253E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E0Cu;
        // 0x253e10: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E14u;
        goto label_253e14;
    }
    ctx->pc = 0x253E0Cu;
    SET_GPR_U32(ctx, 31, 0x253E14u);
    ctx->pc = 0x253E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E0Cu;
    // 0x253e10: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x253E0Cu, 0x253E14u)) {
        return;
    }
    ctx->pc = 0x253E14u;
label_253e14:
    // 0x253e14: 0x1040011a  beqz        $v0, . + 4 + (0x11A << 2)
label_253e18:
    if (ctx->pc == 0x253E18u) {
        ctx->pc = 0x253E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E14u;
        // 0x253e18: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E1Cu;
        goto label_253e1c;
    }
    ctx->pc = 0x253E14u;
    {
        const bool branch_taken_0x253e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E14u;
        // 0x253e18: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e14) {
            ctx->pc = 0x254280u;
            goto label_254280;
        }
    }
    ctx->pc = 0x253E1Cu;
label_253e1c:
    // 0x253e1c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x253e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_253e20:
    // 0x253e20: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x253e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_253e24:
    // 0x253e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_253e28:
    // 0x253e28: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x253e28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_253e2c:
    // 0x253e2c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_253e30:
    if (ctx->pc == 0x253E30u) {
        ctx->pc = 0x253E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E2Cu;
        // 0x253e30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E34u;
        goto label_253e34;
    }
    ctx->pc = 0x253E2Cu;
    {
        const bool branch_taken_0x253e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x253e2c) {
            ctx->pc = 0x253E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E2Cu;
            // 0x253e30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253E60u;
            goto label_253e60;
        }
    }
    ctx->pc = 0x253E34u;
label_253e34:
    // 0x253e34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_253e38:
    // 0x253e38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_253e3c:
    // 0x253e3c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x253e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_253e40:
    // 0x253e40: 0xc092848  jal         func_24A120
label_253e44:
    if (ctx->pc == 0x253E44u) {
        ctx->pc = 0x253E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E40u;
        // 0x253e44: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E48u;
        goto label_253e48;
    }
    ctx->pc = 0x253E40u;
    SET_GPR_U32(ctx, 31, 0x253E48u);
    ctx->pc = 0x253E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E40u;
    // 0x253e44: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253E40u, 0x253E48u)) {
        return;
    }
    ctx->pc = 0x253E48u;
label_253e48:
    // 0x253e48: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x253e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_253e4c:
    // 0x253e4c: 0xc09281a  jal         func_24A068
label_253e50:
    if (ctx->pc == 0x253E50u) {
        ctx->pc = 0x253E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E4Cu;
        // 0x253e50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E54u;
        goto label_253e54;
    }
    ctx->pc = 0x253E4Cu;
    SET_GPR_U32(ctx, 31, 0x253E54u);
    ctx->pc = 0x253E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E4Cu;
    // 0x253e50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253E4Cu, 0x253E54u)) {
        return;
    }
    ctx->pc = 0x253E54u;
label_253e54:
    // 0x253e54: 0x1000010b  b           . + 4 + (0x10B << 2)
label_253e58:
    if (ctx->pc == 0x253E58u) {
        ctx->pc = 0x253E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E54u;
        // 0x253e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E5Cu;
        goto label_253e5c;
    }
    ctx->pc = 0x253E54u;
    {
        const bool branch_taken_0x253e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E54u;
        // 0x253e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e54) {
            ctx->pc = 0x254284u;
            goto label_254284;
        }
    }
    ctx->pc = 0x253E5Cu;
label_253e5c:
    // 0x253e5c: 0x0  nop
    ctx->pc = 0x253e5cu;
    // NOP
label_253e60:
    // 0x253e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253e64:
    // 0x253e64: 0xc0c493d  jal         func_3124F4
label_253e68:
    if (ctx->pc == 0x253E68u) {
        ctx->pc = 0x253E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E64u;
        // 0x253e68: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E6Cu;
        goto label_253e6c;
    }
    ctx->pc = 0x253E64u;
    SET_GPR_U32(ctx, 31, 0x253E6Cu);
    ctx->pc = 0x253E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E64u;
    // 0x253e68: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x253E64u, 0x253E6Cu)) {
        return;
    }
    ctx->pc = 0x253E6Cu;
label_253e6c:
    // 0x253e6c: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x253e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_253e70:
    // 0x253e70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x253e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_253e74:
    // 0x253e74: 0xc093546  jal         func_24D518
label_253e78:
    if (ctx->pc == 0x253E78u) {
        ctx->pc = 0x253E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E74u;
        // 0x253e78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E7Cu;
        goto label_253e7c;
    }
    ctx->pc = 0x253E74u;
    SET_GPR_U32(ctx, 31, 0x253E7Cu);
    ctx->pc = 0x253E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E74u;
    // 0x253e78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x253E74u, 0x253E7Cu)) {
        return;
    }
    ctx->pc = 0x253E7Cu;
label_253e7c:
    // 0x253e7c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x253e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_253e80:
    // 0x253e80: 0x14430100  bne         $v0, $v1, . + 4 + (0x100 << 2)
label_253e84:
    if (ctx->pc == 0x253E84u) {
        ctx->pc = 0x253E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E80u;
        // 0x253e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E88u;
        goto label_253e88;
    }
    ctx->pc = 0x253E80u;
    {
        const bool branch_taken_0x253e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x253E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E80u;
        // 0x253e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e80) {
            ctx->pc = 0x254284u;
            goto label_254284;
        }
    }
    ctx->pc = 0x253E88u;
label_253e88:
    // 0x253e88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x253e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_253e8c:
    // 0x253e8c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_253e90:
    if (ctx->pc == 0x253E90u) {
        ctx->pc = 0x253E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E8Cu;
        // 0x253e90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E94u;
        goto label_253e94;
    }
    ctx->pc = 0x253E8Cu;
    {
        const bool branch_taken_0x253e8c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x253E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E8Cu;
        // 0x253e90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e8c) {
            ctx->pc = 0x253EB8u;
            goto label_253eb8;
        }
    }
    ctx->pc = 0x253E94u;
label_253e94:
    // 0x253e94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_253e98:
    // 0x253e98: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x253e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_253e9c:
    // 0x253e9c: 0xc092848  jal         func_24A120
label_253ea0:
    if (ctx->pc == 0x253EA0u) {
        ctx->pc = 0x253EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E9Cu;
        // 0x253ea0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EA4u;
        goto label_253ea4;
    }
    ctx->pc = 0x253E9Cu;
    SET_GPR_U32(ctx, 31, 0x253EA4u);
    ctx->pc = 0x253EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E9Cu;
    // 0x253ea0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253E9Cu, 0x253EA4u)) {
        return;
    }
    ctx->pc = 0x253EA4u;
label_253ea4:
    // 0x253ea4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x253ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_253ea8:
    // 0x253ea8: 0xc09281a  jal         func_24A068
label_253eac:
    if (ctx->pc == 0x253EACu) {
        ctx->pc = 0x253EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EA8u;
        // 0x253eac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EB0u;
        goto label_253eb0;
    }
    ctx->pc = 0x253EA8u;
    SET_GPR_U32(ctx, 31, 0x253EB0u);
    ctx->pc = 0x253EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EA8u;
    // 0x253eac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253EA8u, 0x253EB0u)) {
        return;
    }
    ctx->pc = 0x253EB0u;
label_253eb0:
    // 0x253eb0: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_253eb4:
    if (ctx->pc == 0x253EB4u) {
        ctx->pc = 0x253EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EB0u;
        // 0x253eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EB8u;
        goto label_253eb8;
    }
    ctx->pc = 0x253EB0u;
    {
        const bool branch_taken_0x253eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EB0u;
        // 0x253eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253eb0) {
            ctx->pc = 0x254284u;
            goto label_254284;
        }
    }
    ctx->pc = 0x253EB8u;
label_253eb8:
    // 0x253eb8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x253eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_253ebc:
    // 0x253ebc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x253ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_253ec0:
    // 0x253ec0: 0x8c471280  lw          $a3, 0x1280($v0)
    ctx->pc = 0x253ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4736)));
label_253ec4:
    // 0x253ec4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x253ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_253ec8:
    // 0x253ec8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x253ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_253ecc:
    // 0x253ecc: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x253eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_253ed0:
    // 0x253ed0: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x253ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_253ed4:
    // 0x253ed4: 0x8fb30024  lw          $s3, 0x24($sp)
    ctx->pc = 0x253ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_253ed8:
    // 0x253ed8: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x253ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_253edc:
    // 0x253edc: 0x8cb11298  lw          $s1, 0x1298($a1)
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4760)));
label_253ee0:
    // 0x253ee0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_253ee4:
    // 0x253ee4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x253ee4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_253ee8:
    // 0x253ee8: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x253ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_253eec:
    // 0x253eec: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x253eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_253ef0:
    // 0x253ef0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_253ef4:
    if (ctx->pc == 0x253EF4u) {
        ctx->pc = 0x253EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EF0u;
        // 0x253ef4: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EF8u;
        goto label_253ef8;
    }
    ctx->pc = 0x253EF0u;
    {
        const bool branch_taken_0x253ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EF0u;
        // 0x253ef4: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ef0) {
            ctx->pc = 0x253F00u;
            goto label_253f00;
        }
    }
    ctx->pc = 0x253EF8u;
label_253ef8:
    // 0x253ef8: 0x10000006  b           . + 4 + (0x6 << 2)
label_253efc:
    if (ctx->pc == 0x253EFCu) {
        ctx->pc = 0x253EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EF8u;
        // 0x253efc: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F00u;
        goto label_253f00;
    }
    ctx->pc = 0x253EF8u;
    {
        const bool branch_taken_0x253ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EF8u;
        // 0x253efc: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ef8) {
            ctx->pc = 0x253F14u;
            goto label_253f14;
        }
    }
    ctx->pc = 0x253F00u;
label_253f00:
    // 0x253f00: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x253f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_253f04:
    // 0x253f04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_253f08:
    if (ctx->pc == 0x253F08u) {
        ctx->pc = 0x253F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F04u;
        // 0x253f08: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F0Cu;
        goto label_253f0c;
    }
    ctx->pc = 0x253F04u;
    {
        const bool branch_taken_0x253f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253f04) {
            ctx->pc = 0x253F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F04u;
            // 0x253f08: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253F14u;
            goto label_253f14;
        }
    }
    ctx->pc = 0x253F0Cu;
label_253f0c:
    // 0x253f0c: 0x139083  sra         $s2, $s3, 2
    ctx->pc = 0x253f0cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 2));
label_253f10:
    // 0x253f10: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x253f10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_253f14:
    // 0x253f14: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x253f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_253f18:
    // 0x253f18: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x253f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_253f1c:
    // 0x253f1c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_253f20:
    if (ctx->pc == 0x253F20u) {
        ctx->pc = 0x253F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F1Cu;
        // 0x253f20: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F24u;
        goto label_253f24;
    }
    ctx->pc = 0x253F1Cu;
    {
        const bool branch_taken_0x253f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F1Cu;
        // 0x253f20: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f1c) {
            ctx->pc = 0x253F74u;
            goto label_253f74;
        }
    }
    ctx->pc = 0x253F24u;
label_253f24:
    // 0x253f24: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x253f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_253f28:
    // 0x253f28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x253f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_253f2c:
    // 0x253f2c: 0x32630010  andi        $v1, $s3, 0x10
    ctx->pc = 0x253f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_253f30:
    // 0x253f30: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x253f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_253f34:
    // 0x253f34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_253f38:
    if (ctx->pc == 0x253F38u) {
        ctx->pc = 0x253F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F34u;
        // 0x253f38: 0xb18821  addu        $s1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F3Cu;
        goto label_253f3c;
    }
    ctx->pc = 0x253F34u;
    {
        const bool branch_taken_0x253f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F34u;
        // 0x253f38: 0xb18821  addu        $s1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f34) {
            ctx->pc = 0x253F44u;
            goto label_253f44;
        }
    }
    ctx->pc = 0x253F3Cu;
label_253f3c:
    // 0x253f3c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x253f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_253f40:
    // 0x253f40: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x253f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_253f44:
    // 0x253f44: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x253f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_253f48:
    // 0x253f48: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_253f4c:
    if (ctx->pc == 0x253F4Cu) {
        ctx->pc = 0x253F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F48u;
        // 0x253f4c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F50u;
        goto label_253f50;
    }
    ctx->pc = 0x253F48u;
    {
        const bool branch_taken_0x253f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F48u;
        // 0x253f4c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f48) {
            ctx->pc = 0x253F54u;
            goto label_253f54;
        }
    }
    ctx->pc = 0x253F50u;
label_253f50:
    // 0x253f50: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x253f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_253f54:
    // 0x253f54: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_253f58:
    if (ctx->pc == 0x253F58u) {
        ctx->pc = 0x253F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F54u;
        // 0x253f58: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F5Cu;
        goto label_253f5c;
    }
    ctx->pc = 0x253F54u;
    {
        const bool branch_taken_0x253f54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F54u;
        // 0x253f58: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f54) {
            ctx->pc = 0x253F64u;
            goto label_253f64;
        }
    }
    ctx->pc = 0x253F5Cu;
label_253f5c:
    // 0x253f5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x253f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_253f60:
    // 0x253f60: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x253f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_253f64:
    // 0x253f64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_253f68:
    // 0x253f68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x253f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_253f6c:
    // 0x253f6c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x253f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_253f70:
    // 0x253f70: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x253f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_253f74:
    // 0x253f74: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x253f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_253f78:
    // 0x253f78: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x253f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_253f7c:
    // 0x253f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_253f80:
    // 0x253f80: 0x40f809  jalr        $v0
label_253f84:
    if (ctx->pc == 0x253F84u) {
        ctx->pc = 0x253F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F80u;
        // 0x253f84: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F88u;
        goto label_253f88;
    }
    ctx->pc = 0x253F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x253F88u);
        ctx->pc = 0x253F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F80u;
        // 0x253f84: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253F80u, 0x253F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253F88u;
label_253f88:
    // 0x253f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_253f8c:
    // 0x253f8c: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_253f90:
    if (ctx->pc == 0x253F90u) {
        ctx->pc = 0x253F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F8Cu;
        // 0x253f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F94u;
        goto label_253f94;
    }
    ctx->pc = 0x253F8Cu;
    {
        const bool branch_taken_0x253f8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x253f8c) {
            ctx->pc = 0x253F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F8Cu;
            // 0x253f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253FC0u;
            goto label_253fc0;
        }
    }
    ctx->pc = 0x253F94u;
label_253f94:
    // 0x253f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_253f98:
    // 0x253f98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_253f9c:
    // 0x253f9c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x253f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_253fa0:
    // 0x253fa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_253fa4:
    // 0x253fa4: 0xc092848  jal         func_24A120
label_253fa8:
    if (ctx->pc == 0x253FA8u) {
        ctx->pc = 0x253FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FA4u;
        // 0x253fa8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FACu;
        goto label_253fac;
    }
    ctx->pc = 0x253FA4u;
    SET_GPR_U32(ctx, 31, 0x253FACu);
    ctx->pc = 0x253FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FA4u;
    // 0x253fa8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253FA4u, 0x253FACu)) {
        return;
    }
    ctx->pc = 0x253FACu;
label_253fac:
    // 0x253fac: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x253facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_253fb0:
    // 0x253fb0: 0xc09281a  jal         func_24A068
label_253fb4:
    if (ctx->pc == 0x253FB4u) {
        ctx->pc = 0x253FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FB0u;
        // 0x253fb4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FB8u;
        goto label_253fb8;
    }
    ctx->pc = 0x253FB0u;
    SET_GPR_U32(ctx, 31, 0x253FB8u);
    ctx->pc = 0x253FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FB0u;
    // 0x253fb4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253FB0u, 0x253FB8u)) {
        return;
    }
    ctx->pc = 0x253FB8u;
label_253fb8:
    // 0x253fb8: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_253fbc:
    if (ctx->pc == 0x253FBCu) {
        ctx->pc = 0x253FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FB8u;
        // 0x253fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FC0u;
        goto label_253fc0;
    }
    ctx->pc = 0x253FB8u;
    {
        const bool branch_taken_0x253fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FB8u;
        // 0x253fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fb8) {
            ctx->pc = 0x254284u;
            goto label_254284;
        }
    }
    ctx->pc = 0x253FC0u;
label_253fc0:
    // 0x253fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253fc4:
    // 0x253fc4: 0xc0c493d  jal         func_3124F4
label_253fc8:
    if (ctx->pc == 0x253FC8u) {
        ctx->pc = 0x253FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FC4u;
        // 0x253fc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FCCu;
        goto label_253fcc;
    }
    ctx->pc = 0x253FC4u;
    SET_GPR_U32(ctx, 31, 0x253FCCu);
    ctx->pc = 0x253FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FC4u;
    // 0x253fc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x253FC4u, 0x253FCCu)) {
        return;
    }
    ctx->pc = 0x253FCCu;
label_253fcc:
    // 0x253fcc: 0x8ee31298  lw          $v1, 0x1298($s7)
    ctx->pc = 0x253fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4760)));
label_253fd0:
    // 0x253fd0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x253fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_253fd4:
    // 0x253fd4: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x253fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_253fd8:
    // 0x253fd8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x253fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_253fdc:
    // 0x253fdc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x253fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_253fe0:
    // 0x253fe0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x253fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_253fe4:
    // 0x253fe4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x253fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_253fe8:
    // 0x253fe8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x253fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_253fec:
    // 0x253fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253ff0:
    // 0x253ff0: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x253ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_253ff4:
    // 0x253ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_253ff8:
    // 0x253ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253ffc:
    // 0x253ffc: 0xc0970d2  jal         func_25C348
label_254000:
    if (ctx->pc == 0x254000u) {
        ctx->pc = 0x254000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FFCu;
        // 0x254000: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254004u;
        goto label_254004;
    }
    ctx->pc = 0x253FFCu;
    SET_GPR_U32(ctx, 31, 0x254004u);
    ctx->pc = 0x254000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FFCu;
    // 0x254000: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C348u, 0x253FFCu, 0x254004u)) {
        return;
    }
    ctx->pc = 0x254004u;
label_254004:
    // 0x254004: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x254004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_254008:
    // 0x254008: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x254008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_25400c:
    // 0x25400c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x25400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254010:
    // 0x254010: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x254010u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_254014:
    // 0x254014: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x254014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_254018:
    // 0x254018: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x254018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25401c:
    // 0x25401c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25401cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_254020:
    // 0x254020: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x254020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_254024:
    // 0x254024: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x254024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254028:
    // 0x254028: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x254028u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25402c:
    // 0x25402c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x25402cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_254030:
    // 0x254030: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x254030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
label_254034:
    // 0x254034: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x254034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_254038:
    // 0x254038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x254038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25403c:
    // 0x25403c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x25403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_254040:
    // 0x254040: 0x26080034  addiu       $t0, $s0, 0x34
    ctx->pc = 0x254040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_254044:
    // 0x254044: 0x2603003c  addiu       $v1, $s0, 0x3C
    ctx->pc = 0x254044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_254048:
    // 0x254048: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x254048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_25404c:
    // 0x25404c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x25404cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_254050:
    // 0x254050: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x254050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_254054:
    // 0x254054: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x254054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_254058:
    // 0x254058: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25405c:
    // 0x25405c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x25405cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_254060:
    // 0x254060: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x254060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_254064:
    // 0x254064: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x254064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_254068:
    // 0x254068: 0xae080038  sw          $t0, 0x38($s0)
    ctx->pc = 0x254068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 8));
label_25406c:
    // 0x25406c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x25406cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_254070:
    // 0x254070: 0xae080034  sw          $t0, 0x34($s0)
    ctx->pc = 0x254070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
label_254074:
    // 0x254074: 0xc09270a  jal         func_249C28
label_254078:
    if (ctx->pc == 0x254078u) {
        ctx->pc = 0x254078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254074u;
        // 0x254078: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25407Cu;
        goto label_25407c;
    }
    ctx->pc = 0x254074u;
    SET_GPR_U32(ctx, 31, 0x25407Cu);
    ctx->pc = 0x254078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254074u;
    // 0x254078: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x254074u, 0x25407Cu)) {
        return;
    }
    ctx->pc = 0x25407Cu;
label_25407c:
    // 0x25407c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_254080:
    if (ctx->pc == 0x254080u) {
        ctx->pc = 0x254080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25407Cu;
        // 0x254080: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254084u;
        goto label_254084;
    }
    ctx->pc = 0x25407Cu;
    {
        const bool branch_taken_0x25407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25407Cu;
        // 0x254080: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25407c) {
            ctx->pc = 0x254278u;
            goto label_254278;
        }
    }
    ctx->pc = 0x254084u;
label_254084:
    // 0x254084: 0x3c11fffc  lui         $s1, 0xFFFC
    ctx->pc = 0x254084u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65532 << 16));
label_254088:
    // 0x254088: 0x3631b000  ori         $s1, $s1, 0xB000
    ctx->pc = 0x254088u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)45056);
label_25408c:
    // 0x25408c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_254090:
    // 0x254090: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x254090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_254094:
    // 0x254094: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_254098:
    if (ctx->pc == 0x254098u) {
        ctx->pc = 0x254098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254094u;
        // 0x254098: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25409Cu;
        goto label_25409c;
    }
    ctx->pc = 0x254094u;
    {
        const bool branch_taken_0x254094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254094u;
        // 0x254098: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254094) {
            ctx->pc = 0x2540C0u;
            goto label_2540c0;
        }
    }
    ctx->pc = 0x25409Cu;
label_25409c:
    // 0x25409c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25409cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2540a0:
    // 0x2540a0: 0xafb40040  sw          $s4, 0x40($sp)
    ctx->pc = 0x2540a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
label_2540a4:
    // 0x2540a4: 0xc092848  jal         func_24A120
label_2540a8:
    if (ctx->pc == 0x2540A8u) {
        ctx->pc = 0x2540A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540A4u;
        // 0x2540a8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540ACu;
        goto label_2540ac;
    }
    ctx->pc = 0x2540A4u;
    SET_GPR_U32(ctx, 31, 0x2540ACu);
    ctx->pc = 0x2540A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540A4u;
    // 0x2540a8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2540A4u, 0x2540ACu)) {
        return;
    }
    ctx->pc = 0x2540ACu;
label_2540ac:
    // 0x2540ac: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2540acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2540b0:
    // 0x2540b0: 0xc09281a  jal         func_24A068
label_2540b4:
    if (ctx->pc == 0x2540B4u) {
        ctx->pc = 0x2540B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540B0u;
        // 0x2540b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540B8u;
        goto label_2540b8;
    }
    ctx->pc = 0x2540B0u;
    SET_GPR_U32(ctx, 31, 0x2540B8u);
    ctx->pc = 0x2540B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540B0u;
    // 0x2540b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2540B0u, 0x2540B8u)) {
        return;
    }
    ctx->pc = 0x2540B8u;
label_2540b8:
    // 0x2540b8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2540bc:
    if (ctx->pc == 0x2540BCu) {
        ctx->pc = 0x2540C0u;
        goto label_2540c0;
    }
    ctx->pc = 0x2540B8u;
    {
        const bool branch_taken_0x2540b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540b8) {
            ctx->pc = 0x254278u;
            goto label_254278;
        }
    }
    ctx->pc = 0x2540C0u;
label_2540c0:
    // 0x2540c0: 0xc0960f0  jal         func_2583C0
label_2540c4:
    if (ctx->pc == 0x2540C4u) {
        ctx->pc = 0x2540C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540C0u;
        // 0x2540c4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540C8u;
        goto label_2540c8;
    }
    ctx->pc = 0x2540C0u;
    SET_GPR_U32(ctx, 31, 0x2540C8u);
    ctx->pc = 0x2540C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540C0u;
    // 0x2540c4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2583C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2583C0u, 0x2540C0u, 0x2540C8u)) {
        return;
    }
    ctx->pc = 0x2540C8u;
label_2540c8:
    // 0x2540c8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_2540cc:
    if (ctx->pc == 0x2540CCu) {
        ctx->pc = 0x2540CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540C8u;
        // 0x2540cc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540D0u;
        goto label_2540d0;
    }
    ctx->pc = 0x2540C8u;
    {
        const bool branch_taken_0x2540c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540C8u;
        // 0x2540cc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540c8) {
            ctx->pc = 0x254278u;
            goto label_254278;
        }
    }
    ctx->pc = 0x2540D0u;
label_2540d0:
    // 0x2540d0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2540d4:
    if (ctx->pc == 0x2540D4u) {
        ctx->pc = 0x2540D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540D0u;
        // 0x2540d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540D8u;
        goto label_2540d8;
    }
    ctx->pc = 0x2540D0u;
    {
        const bool branch_taken_0x2540d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540D0u;
        // 0x2540d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540d0) {
            ctx->pc = 0x254144u;
            goto label_254144;
        }
    }
    ctx->pc = 0x2540D8u;
label_2540d8:
    // 0x2540d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2540d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2540dc:
    // 0x2540dc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2540dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2540e0:
    // 0x2540e0: 0xc09270a  jal         func_249C28
label_2540e4:
    if (ctx->pc == 0x2540E4u) {
        ctx->pc = 0x2540E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540E0u;
        // 0x2540e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540E8u;
        goto label_2540e8;
    }
    ctx->pc = 0x2540E0u;
    SET_GPR_U32(ctx, 31, 0x2540E8u);
    ctx->pc = 0x2540E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540E0u;
    // 0x2540e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2540E0u, 0x2540E8u)) {
        return;
    }
    ctx->pc = 0x2540E8u;
label_2540e8:
    // 0x2540e8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_2540ec:
    if (ctx->pc == 0x2540ECu) {
        ctx->pc = 0x2540ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540E8u;
        // 0x2540ec: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540F0u;
        goto label_2540f0;
    }
    ctx->pc = 0x2540E8u;
    {
        const bool branch_taken_0x2540e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540E8u;
        // 0x2540ec: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540e8) {
            ctx->pc = 0x254278u;
            goto label_254278;
        }
    }
    ctx->pc = 0x2540F0u;
label_2540f0:
    // 0x2540f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2540f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2540f4:
    // 0x2540f4: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x2540f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_2540f8:
    // 0x2540f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2540fc:
    if (ctx->pc == 0x2540FCu) {
        ctx->pc = 0x2540FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540F8u;
        // 0x2540fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254100u;
        goto label_254100;
    }
    ctx->pc = 0x2540F8u;
    {
        const bool branch_taken_0x2540f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2540FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540F8u;
        // 0x2540fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540f8) {
            ctx->pc = 0x254124u;
            goto label_254124;
        }
    }
    ctx->pc = 0x254100u;
label_254100:
    // 0x254100: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x254100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_254104:
    // 0x254104: 0xafb40050  sw          $s4, 0x50($sp)
    ctx->pc = 0x254104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 20));
label_254108:
    // 0x254108: 0xc092848  jal         func_24A120
label_25410c:
    if (ctx->pc == 0x25410Cu) {
        ctx->pc = 0x25410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254108u;
        // 0x25410c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254110u;
        goto label_254110;
    }
    ctx->pc = 0x254108u;
    SET_GPR_U32(ctx, 31, 0x254110u);
    ctx->pc = 0x25410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254108u;
    // 0x25410c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x254108u, 0x254110u)) {
        return;
    }
    ctx->pc = 0x254110u;
label_254110:
    // 0x254110: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x254110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_254114:
    // 0x254114: 0xc09281a  jal         func_24A068
label_254118:
    if (ctx->pc == 0x254118u) {
        ctx->pc = 0x254118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254114u;
        // 0x254118: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25411Cu;
        goto label_25411c;
    }
    ctx->pc = 0x254114u;
    SET_GPR_U32(ctx, 31, 0x25411Cu);
    ctx->pc = 0x254118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254114u;
    // 0x254118: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x254114u, 0x25411Cu)) {
        return;
    }
    ctx->pc = 0x25411Cu;
label_25411c:
    // 0x25411c: 0x10000056  b           . + 4 + (0x56 << 2)
label_254120:
    if (ctx->pc == 0x254120u) {
        ctx->pc = 0x254124u;
        goto label_254124;
    }
    ctx->pc = 0x25411Cu;
    {
        const bool branch_taken_0x25411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25411c) {
            ctx->pc = 0x254278u;
            goto label_254278;
        }
    }
    ctx->pc = 0x254124u;
label_254124:
    // 0x254124: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_254128:
    // 0x254128: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x254128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_25412c:
    // 0x25412c: 0xc094d40  jal         func_253500
label_254130:
    if (ctx->pc == 0x254130u) {
        ctx->pc = 0x254130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25412Cu;
        // 0x254130: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254134u;
        goto label_254134;
    }
    ctx->pc = 0x25412Cu;
    SET_GPR_U32(ctx, 31, 0x254134u);
    ctx->pc = 0x254130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25412Cu;
    // 0x254130: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x253500u, 0x25412Cu, 0x254134u)) {
        return;
    }
    ctx->pc = 0x254134u;
label_254134:
    // 0x254134: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_254138:
    if (ctx->pc == 0x254138u) {
        ctx->pc = 0x254138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254134u;
        // 0x254138: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25413Cu;
        goto label_25413c;
    }
    ctx->pc = 0x254134u;
    {
        const bool branch_taken_0x254134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254134u;
        // 0x254138: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254134) {
            ctx->pc = 0x254188u;
            goto label_254188;
        }
    }
    ctx->pc = 0x25413Cu;
label_25413c:
    // 0x25413c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_254140:
    if (ctx->pc == 0x254140u) {
        ctx->pc = 0x254144u;
        goto label_254144;
    }
    ctx->pc = 0x25413Cu;
    {
        const bool branch_taken_0x25413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25413c) {
            ctx->pc = 0x254278u;
            goto label_254278;
        }
    }
    ctx->pc = 0x254144u;
label_254144:
    // 0x254144: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_254148:
    // 0x254148: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x254148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_25414c:
    // 0x25414c: 0xc09270a  jal         func_249C28
label_254150:
    if (ctx->pc == 0x254150u) {
        ctx->pc = 0x254150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25414Cu;
        // 0x254150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254154u;
        goto label_254154;
    }
    ctx->pc = 0x25414Cu;
    SET_GPR_U32(ctx, 31, 0x254154u);
    ctx->pc = 0x254150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25414Cu;
    // 0x254150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x25414Cu, 0x254154u)) {
        return;
    }
    ctx->pc = 0x254154u;
label_254154:
    // 0x254154: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_254158:
    if (ctx->pc == 0x254158u) {
        ctx->pc = 0x254158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254154u;
        // 0x254158: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25415Cu;
        goto label_25415c;
    }
    ctx->pc = 0x254154u;
    {
        const bool branch_taken_0x254154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254154u;
        // 0x254158: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254154) {
            ctx->pc = 0x254278u;
            goto label_254278;
        }
    }
    ctx->pc = 0x25415Cu;
label_25415c:
    // 0x25415c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_254160:
    // 0x254160: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x254160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_254164:
    // 0x254164: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
label_254168:
    if (ctx->pc == 0x254168u) {
        ctx->pc = 0x254168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254164u;
        // 0x254168: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25416Cu;
        goto label_25416c;
    }
    ctx->pc = 0x254164u;
    {
        const bool branch_taken_0x254164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254164u;
        // 0x254168: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254164) {
            ctx->pc = 0x254100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254100;
        }
    }
    ctx->pc = 0x25416Cu;
label_25416c:
    // 0x25416c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25416cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_254170:
    // 0x254170: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x254170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_254174:
    // 0x254174: 0xc094e8c  jal         func_253A30
label_254178:
    if (ctx->pc == 0x254178u) {
        ctx->pc = 0x254178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254174u;
        // 0x254178: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25417Cu;
        goto label_25417c;
    }
    ctx->pc = 0x254174u;
    SET_GPR_U32(ctx, 31, 0x25417Cu);
    ctx->pc = 0x254178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254174u;
    // 0x254178: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x253A30u, 0x254174u, 0x25417Cu)) {
        return;
    }
    ctx->pc = 0x25417Cu;
label_25417c:
    // 0x25417c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_254180:
    if (ctx->pc == 0x254180u) {
        ctx->pc = 0x254184u;
        goto label_254184;
    }
    ctx->pc = 0x25417Cu;
    {
        const bool branch_taken_0x25417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25417c) {
            ctx->pc = 0x254134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254134;
        }
    }
    ctx->pc = 0x254184u;
label_254184:
    // 0x254184: 0x0  nop
    ctx->pc = 0x254184u;
    // NOP
label_254188:
    // 0x254188: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x254188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
label_25418c:
    // 0x25418c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254190:
    // 0x254190: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x254190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_254194:
    // 0x254194: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x254194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_254198:
    // 0x254198: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x254198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_25419c:
    // 0x25419c: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x25419cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2541a0:
    // 0x2541a0: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x2541a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2541a4:
    // 0x2541a4: 0x6ba3003f  ldl         $v1, 0x3F($sp)
    ctx->pc = 0x2541a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2541a8:
    // 0x2541a8: 0x6fa30038  ldr         $v1, 0x38($sp)
    ctx->pc = 0x2541a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2541ac:
    // 0x2541ac: 0xb2060057  sdl         $a2, 0x57($s0)
    ctx->pc = 0x2541acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2541b0:
    // 0x2541b0: 0xb6060050  sdr         $a2, 0x50($s0)
    ctx->pc = 0x2541b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2541b4:
    // 0x2541b4: 0xb202005f  sdl         $v0, 0x5F($s0)
    ctx->pc = 0x2541b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2541b8:
    // 0x2541b8: 0xb6020058  sdr         $v0, 0x58($s0)
    ctx->pc = 0x2541b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2541bc:
    // 0x2541bc: 0xb2030067  sdl         $v1, 0x67($s0)
    ctx->pc = 0x2541bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2541c0:
    // 0x2541c0: 0xb6030060  sdr         $v1, 0x60($s0)
    ctx->pc = 0x2541c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2541c4:
    // 0x2541c4: 0xc09707e  jal         func_25C1F8
label_2541c8:
    if (ctx->pc == 0x2541C8u) {
        ctx->pc = 0x2541C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541C4u;
        // 0x2541c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541CCu;
        goto label_2541cc;
    }
    ctx->pc = 0x2541C4u;
    SET_GPR_U32(ctx, 31, 0x2541CCu);
    ctx->pc = 0x2541C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541C4u;
    // 0x2541c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C1F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C1F8u, 0x2541C4u, 0x2541CCu)) {
        return;
    }
    ctx->pc = 0x2541CCu;
label_2541cc:
    // 0x2541cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2541ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2541d0:
    // 0x2541d0: 0xc0971f8  jal         func_25C7E0
label_2541d4:
    if (ctx->pc == 0x2541D4u) {
        ctx->pc = 0x2541D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541D0u;
        // 0x2541d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541D8u;
        goto label_2541d8;
    }
    ctx->pc = 0x2541D0u;
    SET_GPR_U32(ctx, 31, 0x2541D8u);
    ctx->pc = 0x2541D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541D0u;
    // 0x2541d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C7E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C7E0u, 0x2541D0u, 0x2541D8u)) {
        return;
    }
    ctx->pc = 0x2541D8u;
label_2541d8:
    // 0x2541d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2541d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2541dc:
    // 0x2541dc: 0x58600010  blezl       $v1, . + 4 + (0x10 << 2)
label_2541e0:
    if (ctx->pc == 0x2541E0u) {
        ctx->pc = 0x2541E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541DCu;
        // 0x2541e0: 0x26f11298  addiu       $s1, $s7, 0x1298 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541E4u;
        goto label_2541e4;
    }
    ctx->pc = 0x2541DCu;
    {
        const bool branch_taken_0x2541dc = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2541dc) {
            ctx->pc = 0x2541E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2541DCu;
            // 0x2541e0: 0x26f11298  addiu       $s1, $s7, 0x1298 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4760));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254220u;
            goto label_254220;
        }
    }
    ctx->pc = 0x2541E4u;
label_2541e4:
    // 0x2541e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2541e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2541e8:
    // 0x2541e8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2541e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2541ec:
    // 0x2541ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2541f0:
    // 0x2541f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2541f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2541f4:
    // 0x2541f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2541f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2541f8:
    // 0x2541f8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_2541fc:
    if (ctx->pc == 0x2541FCu) {
        ctx->pc = 0x2541FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541F8u;
        // 0x2541fc: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254200u;
        goto label_254200;
    }
    ctx->pc = 0x2541F8u;
    {
        const bool branch_taken_0x2541f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2541f8) {
            ctx->pc = 0x2541FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2541F8u;
            // 0x2541fc: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25420Cu;
            goto label_25420c;
        }
    }
    ctx->pc = 0x254200u;
label_254200:
    // 0x254200: 0xc095f6a  jal         func_257DA8
label_254204:
    if (ctx->pc == 0x254204u) {
        ctx->pc = 0x254208u;
        goto label_254208;
    }
    ctx->pc = 0x254200u;
    SET_GPR_U32(ctx, 31, 0x254208u);
    ctx->pc = 0x257DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257DA8u, 0x254200u, 0x254208u)) {
        return;
    }
    ctx->pc = 0x254208u;
label_254208:
    // 0x254208: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x254208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_25420c:
    // 0x25420c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25420cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_254210:
    // 0x254210: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x254210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_254214:
    // 0x254214: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_254218:
    if (ctx->pc == 0x254218u) {
        ctx->pc = 0x254218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254214u;
        // 0x254218: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25421Cu;
        goto label_25421c;
    }
    ctx->pc = 0x254214u;
    {
        const bool branch_taken_0x254214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254214) {
            ctx->pc = 0x254218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254214u;
            // 0x254218: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2541E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2541e8;
        }
    }
    ctx->pc = 0x25421Cu;
label_25421c:
    // 0x25421c: 0x26f11298  addiu       $s1, $s7, 0x1298
    ctx->pc = 0x25421cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4760));
label_254220:
    // 0x254220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254224:
    // 0x254224: 0xc093958  jal         func_24E560
label_254228:
    if (ctx->pc == 0x254228u) {
        ctx->pc = 0x254228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254224u;
        // 0x254228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25422Cu;
        goto label_25422c;
    }
    ctx->pc = 0x254224u;
    SET_GPR_U32(ctx, 31, 0x25422Cu);
    ctx->pc = 0x254228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254224u;
    // 0x254228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x254224u, 0x25422Cu)) {
        return;
    }
    ctx->pc = 0x25422Cu;
label_25422c:
    // 0x25422c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25422cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_254230:
    // 0x254230: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x254230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_254234:
    // 0x254234: 0xac203f98  sw          $zero, 0x3F98($at)
    ctx->pc = 0x254234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16280), GPR_U32(ctx, 0));
label_254238:
    // 0x254238: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x254238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_25423c:
    // 0x25423c: 0xac203f9c  sw          $zero, 0x3F9C($at)
    ctx->pc = 0x25423cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16284), GPR_U32(ctx, 0));
label_254240:
    // 0x254240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_254244:
    // 0x254244: 0xc093708  jal         func_24DC20
label_254248:
    if (ctx->pc == 0x254248u) {
        ctx->pc = 0x254248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254244u;
        // 0x254248: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25424Cu;
        goto label_25424c;
    }
    ctx->pc = 0x254244u;
    SET_GPR_U32(ctx, 31, 0x25424Cu);
    ctx->pc = 0x254248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254244u;
    // 0x254248: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x254244u, 0x25424Cu)) {
        return;
    }
    ctx->pc = 0x25424Cu;
label_25424c:
    // 0x25424c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_254250:
    if (ctx->pc == 0x254250u) {
        ctx->pc = 0x254250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25424Cu;
        // 0x254250: 0x8f858f28  lw          $a1, -0x70D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254254u;
        goto label_254254;
    }
    ctx->pc = 0x25424Cu;
    {
        const bool branch_taken_0x25424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25424Cu;
        // 0x254250: 0x8f858f28  lw          $a1, -0x70D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25424c) {
            ctx->pc = 0x254278u;
            goto label_254278;
        }
    }
    ctx->pc = 0x254254u;
label_254254:
    // 0x254254: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_254258:
    if (ctx->pc == 0x254258u) {
        ctx->pc = 0x254258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254254u;
        // 0x254258: 0x8f878f2c  lw          $a3, -0x70D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25425Cu;
        goto label_25425c;
    }
    ctx->pc = 0x254254u;
    {
        const bool branch_taken_0x254254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x254258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254254u;
        // 0x254258: 0x8f878f2c  lw          $a3, -0x70D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254254) {
            ctx->pc = 0x254268u;
            goto label_254268;
        }
    }
    ctx->pc = 0x25425Cu;
label_25425c:
    // 0x25425c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_254260:
    // 0x254260: 0xc09376c  jal         func_24DDB0
label_254264:
    if (ctx->pc == 0x254264u) {
        ctx->pc = 0x254264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254260u;
        // 0x254264: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254268u;
        goto label_254268;
    }
    ctx->pc = 0x254260u;
    SET_GPR_U32(ctx, 31, 0x254268u);
    ctx->pc = 0x254264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254260u;
    // 0x254264: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DDB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DDB0u, 0x254260u, 0x254268u)) {
        return;
    }
    ctx->pc = 0x254268u;
label_254268:
    // 0x254268: 0xc097150  jal         func_25C540
label_25426c:
    if (ctx->pc == 0x25426Cu) {
        ctx->pc = 0x25426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254268u;
        // 0x25426c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254270u;
        goto label_254270;
    }
    ctx->pc = 0x254268u;
    SET_GPR_U32(ctx, 31, 0x254270u);
    ctx->pc = 0x25426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254268u;
    // 0x25426c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C540u, 0x254268u, 0x254270u)) {
        return;
    }
    ctx->pc = 0x254270u;
label_254270:
    // 0x254270: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_254274:
    if (ctx->pc == 0x254274u) {
        ctx->pc = 0x254274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254270u;
        // 0x254274: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254278u;
        goto label_254278;
    }
    ctx->pc = 0x254270u;
    {
        const bool branch_taken_0x254270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254270u;
        // 0x254274: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254270) {
            ctx->pc = 0x254284u;
            goto label_254284;
        }
    }
    ctx->pc = 0x254278u;
label_254278:
    // 0x254278: 0xc0971cc  jal         func_25C730
label_25427c:
    if (ctx->pc == 0x25427Cu) {
        ctx->pc = 0x25427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254278u;
        // 0x25427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254280u;
        goto label_254280;
    }
    ctx->pc = 0x254278u;
    SET_GPR_U32(ctx, 31, 0x254280u);
    ctx->pc = 0x25427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254278u;
    // 0x25427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C730u, 0x254278u, 0x254280u)) {
        return;
    }
    ctx->pc = 0x254280u;
label_254280:
    // 0x254280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254284:
    // 0x254284: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x254284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_254288:
    // 0x254288: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x254288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_25428c:
    // 0x25428c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x25428cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_254290:
    // 0x254290: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x254290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_254294:
    // 0x254294: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x254294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_254298:
    // 0x254298: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x254298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25429c:
    // 0x25429c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x25429cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2542a0:
    // 0x2542a0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2542a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2542a4:
    // 0x2542a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2542a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2542a8:
    // 0x2542a8: 0x3e00008  jr          $ra
label_2542ac:
    if (ctx->pc == 0x2542ACu) {
        ctx->pc = 0x2542ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542A8u;
        // 0x2542ac: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2542B0u;
        goto label_2542b0;
    }
    ctx->pc = 0x2542A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2542ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542A8u;
        // 0x2542ac: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2542A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2542B0u;
label_2542b0:
    // 0x2542b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2542b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2542b4:
    // 0x2542b4: 0x0  nop
    ctx->pc = 0x2542b4u;
    // NOP
label_2542b8:
    // 0x2542b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2542b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2542bc:
    // 0x2542bc: 0x0  nop
    ctx->pc = 0x2542bcu;
    // NOP
    ctx->pc = 0x2542c0u;
}
