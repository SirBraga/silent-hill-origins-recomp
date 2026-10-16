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

// Function: sub_00184038
// Address: 0x184038 - 0x1843d0
void sub_00184038_0x184038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184038_0x184038");
#endif

    switch (ctx->pc) {
        case 0x184038u: goto label_184038;
        case 0x18403cu: goto label_18403c;
        case 0x184040u: goto label_184040;
        case 0x184044u: goto label_184044;
        case 0x184048u: goto label_184048;
        case 0x18404cu: goto label_18404c;
        case 0x184050u: goto label_184050;
        case 0x184054u: goto label_184054;
        case 0x184058u: goto label_184058;
        case 0x18405cu: goto label_18405c;
        case 0x184060u: goto label_184060;
        case 0x184064u: goto label_184064;
        case 0x184068u: goto label_184068;
        case 0x18406cu: goto label_18406c;
        case 0x184070u: goto label_184070;
        case 0x184074u: goto label_184074;
        case 0x184078u: goto label_184078;
        case 0x18407cu: goto label_18407c;
        case 0x184080u: goto label_184080;
        case 0x184084u: goto label_184084;
        case 0x184088u: goto label_184088;
        case 0x18408cu: goto label_18408c;
        case 0x184090u: goto label_184090;
        case 0x184094u: goto label_184094;
        case 0x184098u: goto label_184098;
        case 0x18409cu: goto label_18409c;
        case 0x1840a0u: goto label_1840a0;
        case 0x1840a4u: goto label_1840a4;
        case 0x1840a8u: goto label_1840a8;
        case 0x1840acu: goto label_1840ac;
        case 0x1840b0u: goto label_1840b0;
        case 0x1840b4u: goto label_1840b4;
        case 0x1840b8u: goto label_1840b8;
        case 0x1840bcu: goto label_1840bc;
        case 0x1840c0u: goto label_1840c0;
        case 0x1840c4u: goto label_1840c4;
        case 0x1840c8u: goto label_1840c8;
        case 0x1840ccu: goto label_1840cc;
        case 0x1840d0u: goto label_1840d0;
        case 0x1840d4u: goto label_1840d4;
        case 0x1840d8u: goto label_1840d8;
        case 0x1840dcu: goto label_1840dc;
        case 0x1840e0u: goto label_1840e0;
        case 0x1840e4u: goto label_1840e4;
        case 0x1840e8u: goto label_1840e8;
        case 0x1840ecu: goto label_1840ec;
        case 0x1840f0u: goto label_1840f0;
        case 0x1840f4u: goto label_1840f4;
        case 0x1840f8u: goto label_1840f8;
        case 0x1840fcu: goto label_1840fc;
        case 0x184100u: goto label_184100;
        case 0x184104u: goto label_184104;
        case 0x184108u: goto label_184108;
        case 0x18410cu: goto label_18410c;
        case 0x184110u: goto label_184110;
        case 0x184114u: goto label_184114;
        case 0x184118u: goto label_184118;
        case 0x18411cu: goto label_18411c;
        case 0x184120u: goto label_184120;
        case 0x184124u: goto label_184124;
        case 0x184128u: goto label_184128;
        case 0x18412cu: goto label_18412c;
        case 0x184130u: goto label_184130;
        case 0x184134u: goto label_184134;
        case 0x184138u: goto label_184138;
        case 0x18413cu: goto label_18413c;
        case 0x184140u: goto label_184140;
        case 0x184144u: goto label_184144;
        case 0x184148u: goto label_184148;
        case 0x18414cu: goto label_18414c;
        case 0x184150u: goto label_184150;
        case 0x184154u: goto label_184154;
        case 0x184158u: goto label_184158;
        case 0x18415cu: goto label_18415c;
        case 0x184160u: goto label_184160;
        case 0x184164u: goto label_184164;
        case 0x184168u: goto label_184168;
        case 0x18416cu: goto label_18416c;
        case 0x184170u: goto label_184170;
        case 0x184174u: goto label_184174;
        case 0x184178u: goto label_184178;
        case 0x18417cu: goto label_18417c;
        case 0x184180u: goto label_184180;
        case 0x184184u: goto label_184184;
        case 0x184188u: goto label_184188;
        case 0x18418cu: goto label_18418c;
        case 0x184190u: goto label_184190;
        case 0x184194u: goto label_184194;
        case 0x184198u: goto label_184198;
        case 0x18419cu: goto label_18419c;
        case 0x1841a0u: goto label_1841a0;
        case 0x1841a4u: goto label_1841a4;
        case 0x1841a8u: goto label_1841a8;
        case 0x1841acu: goto label_1841ac;
        case 0x1841b0u: goto label_1841b0;
        case 0x1841b4u: goto label_1841b4;
        case 0x1841b8u: goto label_1841b8;
        case 0x1841bcu: goto label_1841bc;
        case 0x1841c0u: goto label_1841c0;
        case 0x1841c4u: goto label_1841c4;
        case 0x1841c8u: goto label_1841c8;
        case 0x1841ccu: goto label_1841cc;
        case 0x1841d0u: goto label_1841d0;
        case 0x1841d4u: goto label_1841d4;
        case 0x1841d8u: goto label_1841d8;
        case 0x1841dcu: goto label_1841dc;
        case 0x1841e0u: goto label_1841e0;
        case 0x1841e4u: goto label_1841e4;
        case 0x1841e8u: goto label_1841e8;
        case 0x1841ecu: goto label_1841ec;
        case 0x1841f0u: goto label_1841f0;
        case 0x1841f4u: goto label_1841f4;
        case 0x1841f8u: goto label_1841f8;
        case 0x1841fcu: goto label_1841fc;
        case 0x184200u: goto label_184200;
        case 0x184204u: goto label_184204;
        case 0x184208u: goto label_184208;
        case 0x18420cu: goto label_18420c;
        case 0x184210u: goto label_184210;
        case 0x184214u: goto label_184214;
        case 0x184218u: goto label_184218;
        case 0x18421cu: goto label_18421c;
        case 0x184220u: goto label_184220;
        case 0x184224u: goto label_184224;
        case 0x184228u: goto label_184228;
        case 0x18422cu: goto label_18422c;
        case 0x184230u: goto label_184230;
        case 0x184234u: goto label_184234;
        case 0x184238u: goto label_184238;
        case 0x18423cu: goto label_18423c;
        case 0x184240u: goto label_184240;
        case 0x184244u: goto label_184244;
        case 0x184248u: goto label_184248;
        case 0x18424cu: goto label_18424c;
        case 0x184250u: goto label_184250;
        case 0x184254u: goto label_184254;
        case 0x184258u: goto label_184258;
        case 0x18425cu: goto label_18425c;
        case 0x184260u: goto label_184260;
        case 0x184264u: goto label_184264;
        case 0x184268u: goto label_184268;
        case 0x18426cu: goto label_18426c;
        case 0x184270u: goto label_184270;
        case 0x184274u: goto label_184274;
        case 0x184278u: goto label_184278;
        case 0x18427cu: goto label_18427c;
        case 0x184280u: goto label_184280;
        case 0x184284u: goto label_184284;
        case 0x184288u: goto label_184288;
        case 0x18428cu: goto label_18428c;
        case 0x184290u: goto label_184290;
        case 0x184294u: goto label_184294;
        case 0x184298u: goto label_184298;
        case 0x18429cu: goto label_18429c;
        case 0x1842a0u: goto label_1842a0;
        case 0x1842a4u: goto label_1842a4;
        case 0x1842a8u: goto label_1842a8;
        case 0x1842acu: goto label_1842ac;
        case 0x1842b0u: goto label_1842b0;
        case 0x1842b4u: goto label_1842b4;
        case 0x1842b8u: goto label_1842b8;
        case 0x1842bcu: goto label_1842bc;
        case 0x1842c0u: goto label_1842c0;
        case 0x1842c4u: goto label_1842c4;
        case 0x1842c8u: goto label_1842c8;
        case 0x1842ccu: goto label_1842cc;
        case 0x1842d0u: goto label_1842d0;
        case 0x1842d4u: goto label_1842d4;
        case 0x1842d8u: goto label_1842d8;
        case 0x1842dcu: goto label_1842dc;
        case 0x1842e0u: goto label_1842e0;
        case 0x1842e4u: goto label_1842e4;
        case 0x1842e8u: goto label_1842e8;
        case 0x1842ecu: goto label_1842ec;
        case 0x1842f0u: goto label_1842f0;
        case 0x1842f4u: goto label_1842f4;
        case 0x1842f8u: goto label_1842f8;
        case 0x1842fcu: goto label_1842fc;
        case 0x184300u: goto label_184300;
        case 0x184304u: goto label_184304;
        case 0x184308u: goto label_184308;
        case 0x18430cu: goto label_18430c;
        case 0x184310u: goto label_184310;
        case 0x184314u: goto label_184314;
        case 0x184318u: goto label_184318;
        case 0x18431cu: goto label_18431c;
        case 0x184320u: goto label_184320;
        case 0x184324u: goto label_184324;
        case 0x184328u: goto label_184328;
        case 0x18432cu: goto label_18432c;
        case 0x184330u: goto label_184330;
        case 0x184334u: goto label_184334;
        case 0x184338u: goto label_184338;
        case 0x18433cu: goto label_18433c;
        case 0x184340u: goto label_184340;
        case 0x184344u: goto label_184344;
        case 0x184348u: goto label_184348;
        case 0x18434cu: goto label_18434c;
        case 0x184350u: goto label_184350;
        case 0x184354u: goto label_184354;
        case 0x184358u: goto label_184358;
        case 0x18435cu: goto label_18435c;
        case 0x184360u: goto label_184360;
        case 0x184364u: goto label_184364;
        case 0x184368u: goto label_184368;
        case 0x18436cu: goto label_18436c;
        case 0x184370u: goto label_184370;
        case 0x184374u: goto label_184374;
        case 0x184378u: goto label_184378;
        case 0x18437cu: goto label_18437c;
        case 0x184380u: goto label_184380;
        case 0x184384u: goto label_184384;
        case 0x184388u: goto label_184388;
        case 0x18438cu: goto label_18438c;
        case 0x184390u: goto label_184390;
        case 0x184394u: goto label_184394;
        case 0x184398u: goto label_184398;
        case 0x18439cu: goto label_18439c;
        case 0x1843a0u: goto label_1843a0;
        case 0x1843a4u: goto label_1843a4;
        case 0x1843a8u: goto label_1843a8;
        case 0x1843acu: goto label_1843ac;
        case 0x1843b0u: goto label_1843b0;
        case 0x1843b4u: goto label_1843b4;
        case 0x1843b8u: goto label_1843b8;
        case 0x1843bcu: goto label_1843bc;
        case 0x1843c0u: goto label_1843c0;
        case 0x1843c4u: goto label_1843c4;
        case 0x1843c8u: goto label_1843c8;
        case 0x1843ccu: goto label_1843cc;
        default: break;
    }

    ctx->pc = 0x184038u;

label_184038:
    // 0x184038: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_18403c:
    // 0x18403c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x18403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_184040:
    // 0x184040: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x184040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_184044:
    // 0x184044: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x184044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_184048:
    // 0x184048: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x184048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18404c:
    // 0x18404c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_184050:
    // 0x184050: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x184050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_184054:
    // 0x184054: 0x8c43f948  lw          $v1, -0x6B8($v0)
    ctx->pc = 0x184054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965576)));
label_184058:
    // 0x184058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18405c:
    // 0x18405c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_184060:
    if (ctx->pc == 0x184060u) {
        ctx->pc = 0x184060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18405Cu;
        // 0x184060: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184064u;
        goto label_184064;
    }
    ctx->pc = 0x18405Cu;
    {
        const bool branch_taken_0x18405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x184060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18405Cu;
        // 0x184060: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18405c) {
            ctx->pc = 0x18406Cu;
            goto label_18406c;
        }
    }
    ctx->pc = 0x184064u;
label_184064:
    // 0x184064: 0xc0483e6  jal         func_120F98
label_184068:
    if (ctx->pc == 0x184068u) {
        ctx->pc = 0x18406Cu;
        goto label_18406c;
    }
    ctx->pc = 0x184064u;
    SET_GPR_U32(ctx, 31, 0x18406Cu);
    ctx->pc = 0x120F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120F98u, 0x184064u, 0x18406Cu)) {
        return;
    }
    ctx->pc = 0x18406Cu;
label_18406c:
    // 0x18406c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x18406cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_184070:
    // 0x184070: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x184070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184074:
    // 0x184074: 0x8c62bcf0  lw          $v0, -0x4310($v1)
    ctx->pc = 0x184074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950128)));
label_184078:
    // 0x184078: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
label_18407c:
    if (ctx->pc == 0x18407Cu) {
        ctx->pc = 0x18407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184078u;
        // 0x18407c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184080u;
        goto label_184080;
    }
    ctx->pc = 0x184078u;
    {
        const bool branch_taken_0x184078 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184078u;
        // 0x18407c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184078) {
            ctx->pc = 0x1840B8u;
            goto label_1840b8;
        }
    }
    ctx->pc = 0x184080u;
label_184080:
    // 0x184080: 0x8e2214c0  lw          $v0, 0x14C0($s1)
    ctx->pc = 0x184080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5312)));
label_184084:
    // 0x184084: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
label_184088:
    if (ctx->pc == 0x184088u) {
        ctx->pc = 0x184088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184084u;
        // 0x184088: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18408Cu;
        goto label_18408c;
    }
    ctx->pc = 0x184084u;
    {
        const bool branch_taken_0x184084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184084u;
        // 0x184088: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184084) {
            ctx->pc = 0x1843BCu;
            goto label_1843bc;
        }
    }
    ctx->pc = 0x18408Cu;
label_18408c:
    // 0x18408c: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x18408cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_184090:
    // 0x184090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184094:
    // 0x184094: 0xc04eef0  jal         func_13BBC0
label_184098:
    if (ctx->pc == 0x184098u) {
        ctx->pc = 0x184098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184094u;
        // 0x184098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18409Cu;
        goto label_18409c;
    }
    ctx->pc = 0x184094u;
    SET_GPR_U32(ctx, 31, 0x18409Cu);
    ctx->pc = 0x184098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184094u;
    // 0x184098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x184094u, 0x18409Cu)) {
        return;
    }
    ctx->pc = 0x18409Cu;
label_18409c:
    // 0x18409c: 0x8e240eac  lw          $a0, 0xEAC($s1)
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3756)));
label_1840a0:
    // 0x1840a0: 0x108000c6  beqz        $a0, . + 4 + (0xC6 << 2)
label_1840a4:
    if (ctx->pc == 0x1840A4u) {
        ctx->pc = 0x1840A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840A0u;
        // 0x1840a4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1840A8u;
        goto label_1840a8;
    }
    ctx->pc = 0x1840A0u;
    {
        const bool branch_taken_0x1840a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840A0u;
        // 0x1840a4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840a0) {
            ctx->pc = 0x1843BCu;
            goto label_1843bc;
        }
    }
    ctx->pc = 0x1840A8u;
label_1840a8:
    // 0x1840a8: 0xc059cae  jal         func_1672B8
label_1840ac:
    if (ctx->pc == 0x1840ACu) {
        ctx->pc = 0x1840ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840A8u;
        // 0x1840ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1840B0u;
        goto label_1840b0;
    }
    ctx->pc = 0x1840A8u;
    SET_GPR_U32(ctx, 31, 0x1840B0u);
    ctx->pc = 0x1840ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1840A8u;
    // 0x1840ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1672B8u, 0x1840A8u, 0x1840B0u)) {
        return;
    }
    ctx->pc = 0x1840B0u;
label_1840b0:
    // 0x1840b0: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_1840b4:
    if (ctx->pc == 0x1840B4u) {
        ctx->pc = 0x1840B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840B0u;
        // 0x1840b4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1840B8u;
        goto label_1840b8;
    }
    ctx->pc = 0x1840B0u;
    {
        const bool branch_taken_0x1840b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840B0u;
        // 0x1840b4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840b0) {
            ctx->pc = 0x1843BCu;
            goto label_1843bc;
        }
    }
    ctx->pc = 0x1840B8u;
label_1840b8:
    // 0x1840b8: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x1840b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
label_1840bc:
    // 0x1840bc: 0x14a300bf  bne         $a1, $v1, . + 4 + (0xBF << 2)
label_1840c0:
    if (ctx->pc == 0x1840C0u) {
        ctx->pc = 0x1840C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840BCu;
        // 0x1840c0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1840C4u;
        goto label_1840c4;
    }
    ctx->pc = 0x1840BCu;
    {
        const bool branch_taken_0x1840bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1840C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840BCu;
        // 0x1840c0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840bc) {
            ctx->pc = 0x1843BCu;
            goto label_1843bc;
        }
    }
    ctx->pc = 0x1840C4u;
label_1840c4:
    // 0x1840c4: 0x8e2214c8  lw          $v0, 0x14C8($s1)
    ctx->pc = 0x1840c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5320)));
label_1840c8:
    // 0x1840c8: 0x504000b1  beql        $v0, $zero, . + 4 + (0xB1 << 2)
label_1840cc:
    if (ctx->pc == 0x1840CCu) {
        ctx->pc = 0x1840CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840C8u;
        // 0x1840cc: 0x8e2500c4  lw          $a1, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1840D0u;
        goto label_1840d0;
    }
    ctx->pc = 0x1840C8u;
    {
        const bool branch_taken_0x1840c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1840c8) {
            ctx->pc = 0x1840CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1840C8u;
            // 0x1840cc: 0x8e2500c4  lw          $a1, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184390u;
            goto label_184390;
        }
    }
    ctx->pc = 0x1840D0u;
label_1840d0:
    // 0x1840d0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1840d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1840d4:
    // 0x1840d4: 0x8e2514cc  lw          $a1, 0x14CC($s1)
    ctx->pc = 0x1840d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5324)));
label_1840d8:
    // 0x1840d8: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1840d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1840dc:
    // 0x1840dc: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1840dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1840e0:
    // 0x1840e0: 0x40f809  jalr        $v0
label_1840e4:
    if (ctx->pc == 0x1840E4u) {
        ctx->pc = 0x1840E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840E0u;
        // 0x1840e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1840E8u;
        goto label_1840e8;
    }
    ctx->pc = 0x1840E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1840E8u);
        ctx->pc = 0x1840E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840E0u;
        // 0x1840e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1840E0u, 0x1840E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1840E8u;
label_1840e8:
    // 0x1840e8: 0x8e2314d0  lw          $v1, 0x14D0($s1)
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5328)));
label_1840ec:
    // 0x1840ec: 0x106000b3  beqz        $v1, . + 4 + (0xB3 << 2)
label_1840f0:
    if (ctx->pc == 0x1840F0u) {
        ctx->pc = 0x1840F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840ECu;
        // 0x1840f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1840F4u;
        goto label_1840f4;
    }
    ctx->pc = 0x1840ECu;
    {
        const bool branch_taken_0x1840ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840ECu;
        // 0x1840f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840ec) {
            ctx->pc = 0x1843BCu;
            goto label_1843bc;
        }
    }
    ctx->pc = 0x1840F4u;
label_1840f4:
    // 0x1840f4: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x1840f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_1840f8:
    // 0x1840f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1840fc:
    if (ctx->pc == 0x1840FCu) {
        ctx->pc = 0x1840FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840F8u;
        // 0x1840fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184100u;
        goto label_184100;
    }
    ctx->pc = 0x1840F8u;
    {
        const bool branch_taken_0x1840f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840F8u;
        // 0x1840fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840f8) {
            ctx->pc = 0x184148u;
            goto label_184148;
        }
    }
    ctx->pc = 0x184100u;
label_184100:
    // 0x184100: 0xc040688  jal         func_101A20
label_184104:
    if (ctx->pc == 0x184104u) {
        ctx->pc = 0x184104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184100u;
        // 0x184104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184108u;
        goto label_184108;
    }
    ctx->pc = 0x184100u;
    SET_GPR_U32(ctx, 31, 0x184108u);
    ctx->pc = 0x184104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184100u;
    // 0x184104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x184100u, 0x184108u)) {
        return;
    }
    ctx->pc = 0x184108u;
label_184108:
    // 0x184108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x184108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18410c:
    // 0x18410c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x18410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_184110:
    // 0x184110: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x184110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_184114:
    // 0x184114: 0x5082000d  beql        $a0, $v0, . + 4 + (0xD << 2)
label_184118:
    if (ctx->pc == 0x184118u) {
        ctx->pc = 0x184118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184114u;
        // 0x184118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18411Cu;
        goto label_18411c;
    }
    ctx->pc = 0x184114u;
    {
        const bool branch_taken_0x184114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x184114) {
            ctx->pc = 0x184118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184114u;
            // 0x184118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18414Cu;
            goto label_18414c;
        }
    }
    ctx->pc = 0x18411Cu;
label_18411c:
    // 0x18411c: 0x8e230198  lw          $v1, 0x198($s1)
    ctx->pc = 0x18411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_184120:
    // 0x184120: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x184120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_184124:
    // 0x184124: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x184124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_184128:
    // 0x184128: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x184128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_18412c:
    // 0x18412c: 0x10000007  b           . + 4 + (0x7 << 2)
label_184130:
    if (ctx->pc == 0x184130u) {
        ctx->pc = 0x184130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18412Cu;
        // 0x184130: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184134u;
        goto label_184134;
    }
    ctx->pc = 0x18412Cu;
    {
        const bool branch_taken_0x18412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18412Cu;
        // 0x184130: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18412c) {
            ctx->pc = 0x18414Cu;
            goto label_18414c;
        }
    }
    ctx->pc = 0x184134u;
label_184134:
    // 0x184134: 0x0  nop
    ctx->pc = 0x184134u;
    // NOP
label_184138:
    // 0x184138: 0x0  nop
    ctx->pc = 0x184138u;
    // NOP
label_18413c:
    // 0x18413c: 0x4602a103  div.s       $f4, $f20, $f2
    ctx->pc = 0x18413cu;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[2]);
label_184140:
    // 0x184140: 0x10000065  b           . + 4 + (0x65 << 2)
label_184144:
    if (ctx->pc == 0x184144u) {
        ctx->pc = 0x184144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184140u;
        // 0x184144: 0xc7a20040  lwc1        $f2, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x184148u;
        goto label_184148;
    }
    ctx->pc = 0x184140u;
    {
        const bool branch_taken_0x184140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184140u;
        // 0x184144: 0xc7a20040  lwc1        $f2, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184140) {
            ctx->pc = 0x1842D8u;
            goto label_1842d8;
        }
    }
    ctx->pc = 0x184148u;
label_184148:
    // 0x184148: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x184148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18414c:
    // 0x18414c: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
label_184150:
    if (ctx->pc == 0x184150u) {
        ctx->pc = 0x184150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18414Cu;
        // 0x184150: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184154u;
        goto label_184154;
    }
    ctx->pc = 0x18414Cu;
    {
        const bool branch_taken_0x18414c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18414Cu;
        // 0x184150: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18414c) {
            ctx->pc = 0x1843B8u;
            goto label_1843b8;
        }
    }
    ctx->pc = 0x184154u;
label_184154:
    // 0x184154: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x184154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_184158:
    // 0x184158: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x184158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18415c:
    // 0x18415c: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x18415cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_184160:
    // 0x184160: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x184160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_184164:
    // 0x184164: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x184164u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_184168:
    // 0x184168: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x184168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18416c:
    // 0x18416c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x18416cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_184170:
    // 0x184170: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x184170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_184174:
    // 0x184174: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x184174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_184178:
    // 0x184178: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x184178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_18417c:
    // 0x18417c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x18417cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_184180:
    // 0x184180: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x184180u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_184184:
    // 0x184184: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x184184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_184188:
    // 0x184188: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x184188u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[0]);
label_18418c:
    // 0x18418c: 0x46044a42  mul.s       $f9, $f9, $f4
    ctx->pc = 0x18418cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
label_184190:
    // 0x184190: 0xe7a90040  swc1        $f9, 0x40($sp)
    ctx->pc = 0x184190u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_184194:
    // 0x184194: 0xc468000c  lwc1        $f8, 0xC($v1)
    ctx->pc = 0x184194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_184198:
    // 0x184198: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x184198u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_18419c:
    // 0x18419c: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x18419cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1841a0:
    // 0x1841a0: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1841a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1841a4:
    // 0x1841a4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1841a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_1841a8:
    // 0x1841a8: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1841a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1841ac:
    // 0x1841ac: 0xc4650014  lwc1        $f5, 0x14($v1)
    ctx->pc = 0x1841acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1841b0:
    // 0x1841b0: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x1841b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_1841b4:
    // 0x1841b4: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x1841b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1841b8:
    // 0x1841b8: 0xc4660014  lwc1        $f6, 0x14($v1)
    ctx->pc = 0x1841b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1841bc:
    // 0x1841bc: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x1841bcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_1841c0:
    // 0x1841c0: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x1841c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1841c4:
    // 0x1841c4: 0xc4670014  lwc1        $f7, 0x14($v1)
    ctx->pc = 0x1841c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1841c8:
    // 0x1841c8: 0x460719c2  mul.s       $f7, $f3, $f7
    ctx->pc = 0x1841c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_1841cc:
    // 0x1841cc: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1841ccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1841d0:
    // 0x1841d0: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1841d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1841d4:
    // 0x1841d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1841d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1841d8:
    // 0x1841d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1841d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1841dc:
    // 0x1841dc: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x1841dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_1841e0:
    // 0x1841e0: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x1841e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1841e4:
    // 0x1841e4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1841e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1841e8:
    // 0x1841e8: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x1841e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_1841ec:
    // 0x1841ec: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1841ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1841f0:
    // 0x1841f0: 0x46022280  add.s       $f10, $f4, $f2
    ctx->pc = 0x1841f0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1841f4:
    // 0x1841f4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1841f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1841f8:
    // 0x1841f8: 0x460aa281  sub.s       $f10, $f20, $f10
    ctx->pc = 0x1841f8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[20], ctx->f[10]);
label_1841fc:
    // 0x1841fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1841fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_184200:
    // 0x184200: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x184200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_184204:
    // 0x184204: 0x46040100  add.s       $f4, $f0, $f4
    ctx->pc = 0x184204u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_184208:
    // 0x184208: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x184208u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_18420c:
    // 0x18420c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x18420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_184210:
    // 0x184210: 0x4604a101  sub.s       $f4, $f20, $f4
    ctx->pc = 0x184210u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
label_184214:
    // 0x184214: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x184214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_184218:
    // 0x184218: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x184218u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_18421c:
    // 0x18421c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x18421cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_184220:
    // 0x184220: 0x46050ac1  sub.s       $f11, $f1, $f5
    ctx->pc = 0x184220u;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_184224:
    // 0x184224: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x184224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_184228:
    // 0x184228: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x184228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18422c:
    // 0x18422c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x18422cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_184230:
    // 0x184230: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x184230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_184234:
    // 0x184234: 0x46060140  add.s       $f5, $f0, $f6
    ctx->pc = 0x184234u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_184238:
    // 0x184238: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x184238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_18423c:
    // 0x18423c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x18423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_184240:
    // 0x184240: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x184240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_184244:
    // 0x184244: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x184244u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_184248:
    // 0x184248: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x184248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18424c:
    // 0x18424c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x18424cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_184250:
    // 0x184250: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x184250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_184254:
    // 0x184254: 0x46071801  sub.s       $f0, $f3, $f7
    ctx->pc = 0x184254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_184258:
    // 0x184258: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x184258u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18425c:
    // 0x18425c: 0x460719c0  add.s       $f7, $f3, $f7
    ctx->pc = 0x18425cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_184260:
    // 0x184260: 0xe7ab0024  swc1        $f11, 0x24($sp)
    ctx->pc = 0x184260u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_184264:
    // 0x184264: 0xe7aa0028  swc1        $f10, 0x28($sp)
    ctx->pc = 0x184264u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_184268:
    // 0x184268: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x184268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_18426c:
    // 0x18426c: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x18426cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_184270:
    // 0x184270: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x184270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_184274:
    // 0x184274: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x184274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_184278:
    // 0x184278: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x184278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_18427c:
    // 0x18427c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_184280:
    // 0x184280: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x184280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_184284:
    // 0x184284: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x184284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_184288:
    // 0x184288: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x184288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_18428c:
    // 0x18428c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x18428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_184290:
    // 0x184290: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x184290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_184294:
    // 0x184294: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x184294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_184298:
    // 0x184298: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x184298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_18429c:
    // 0x18429c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1842a0:
    // 0x1842a0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1842a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1842a4:
    // 0x1842a4: 0xc04642c  jal         func_1190B0
label_1842a8:
    if (ctx->pc == 0x1842A8u) {
        ctx->pc = 0x1842A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842A4u;
        // 0x1842a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842ACu;
        goto label_1842ac;
    }
    ctx->pc = 0x1842A4u;
    SET_GPR_U32(ctx, 31, 0x1842ACu);
    ctx->pc = 0x1842A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1842A4u;
    // 0x1842a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1842A4u, 0x1842ACu)) {
        return;
    }
    ctx->pc = 0x1842ACu;
label_1842ac:
    // 0x1842ac: 0x0  nop
    ctx->pc = 0x1842acu;
    // NOP
label_1842b0:
    // 0x1842b0: 0x0  nop
    ctx->pc = 0x1842b0u;
    // NOP
label_1842b4:
    // 0x1842b4: 0x46000084  c1          0x84
    ctx->pc = 0x1842b4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_1842b8:
    // 0x1842b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1842b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1842bc:
    // 0x1842bc: 0x0  nop
    ctx->pc = 0x1842bcu;
    // NOP
label_1842c0:
    // 0x1842c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1842c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1842c4:
    // 0x1842c4: 0x0  nop
    ctx->pc = 0x1842c4u;
    // NOP
label_1842c8:
    // 0x1842c8: 0x4501ff9a  bc1t        . + 4 + (-0x66 << 2)
label_1842cc:
    if (ctx->pc == 0x1842CCu) {
        ctx->pc = 0x1842CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842C8u;
        // 0x1842cc: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842D0u;
        goto label_1842d0;
    }
    ctx->pc = 0x1842C8u;
    {
        const bool branch_taken_0x1842c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1842CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842C8u;
        // 0x1842cc: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842c8) {
            ctx->pc = 0x184134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184134;
        }
    }
    ctx->pc = 0x1842D0u;
label_1842d0:
    // 0x1842d0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1842d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1842d4:
    // 0x1842d4: 0x0  nop
    ctx->pc = 0x1842d4u;
    // NOP
label_1842d8:
    // 0x1842d8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1842d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1842dc:
    // 0x1842dc: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x1842dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1842e0:
    // 0x1842e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1842e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1842e4:
    // 0x1842e4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1842e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1842e8:
    // 0x1842e8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1842e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_1842ec:
    // 0x1842ec: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1842ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1842f0:
    // 0x1842f0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1842f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1842f4:
    // 0x1842f4: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1842f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1842f8:
    // 0x1842f8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1842f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_1842fc:
    // 0x1842fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1842fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_184300:
    // 0x184300: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x184300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_184304:
    // 0x184304: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x184304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_184308:
    // 0x184308: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x184308u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_18430c:
    // 0x18430c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x18430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184310:
    // 0x184310: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x184310u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_184314:
    // 0x184314: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x184314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_184318:
    // 0x184318: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x184318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18431c:
    // 0x18431c: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x18431cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_184320:
    // 0x184320: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x184320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_184324:
    // 0x184324: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x184324u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_184328:
    // 0x184328: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x184328u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_18432c:
    // 0x18432c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18432cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_184330:
    // 0x184330: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x184330u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_184334:
    // 0x184334: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x184334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_184338:
    // 0x184338: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x184338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18433c:
    // 0x18433c: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x18433cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_184340:
    // 0x184340: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x184340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_184344:
    // 0x184344: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x184344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_184348:
    // 0x184348: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x184348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18434c:
    // 0x18434c: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x18434cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
label_184350:
    // 0x184350: 0x6ba50057  ldl         $a1, 0x57($sp)
    ctx->pc = 0x184350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_184354:
    // 0x184354: 0x6fa50050  ldr         $a1, 0x50($sp)
    ctx->pc = 0x184354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_184358:
    // 0x184358: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x184358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18435c:
    // 0x18435c: 0xb0450027  sdl         $a1, 0x27($v0)
    ctx->pc = 0x18435cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_184360:
    // 0x184360: 0xb4450020  sdr         $a1, 0x20($v0)
    ctx->pc = 0x184360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_184364:
    // 0x184364: 0xac460028  sw          $a2, 0x28($v0)
    ctx->pc = 0x184364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 6));
label_184368:
    // 0x184368: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x184368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_18436c:
    // 0x18436c: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x18436cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_184370:
    // 0x184370: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x184370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_184374:
    // 0x184374: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x184374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_184378:
    // 0x184378: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x184378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18437c:
    // 0x18437c: 0xac460038  sw          $a2, 0x38($v0)
    ctx->pc = 0x18437cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
label_184380:
    // 0x184380: 0xc092d94  jal         func_24B650
label_184384:
    if (ctx->pc == 0x184384u) {
        ctx->pc = 0x184384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184380u;
        // 0x184384: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184388u;
        goto label_184388;
    }
    ctx->pc = 0x184380u;
    SET_GPR_U32(ctx, 31, 0x184388u);
    ctx->pc = 0x184384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184380u;
    // 0x184384: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x184380u, 0x184388u)) {
        return;
    }
    ctx->pc = 0x184388u;
label_184388:
    // 0x184388: 0x1000000c  b           . + 4 + (0xC << 2)
label_18438c:
    if (ctx->pc == 0x18438Cu) {
        ctx->pc = 0x18438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184388u;
        // 0x18438c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184390u;
        goto label_184390;
    }
    ctx->pc = 0x184388u;
    {
        const bool branch_taken_0x184388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184388u;
        // 0x18438c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184388) {
            ctx->pc = 0x1843BCu;
            goto label_1843bc;
        }
    }
    ctx->pc = 0x184390u;
label_184390:
    // 0x184390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184394:
    // 0x184394: 0xc04eef0  jal         func_13BBC0
label_184398:
    if (ctx->pc == 0x184398u) {
        ctx->pc = 0x184398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184394u;
        // 0x184398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18439Cu;
        goto label_18439c;
    }
    ctx->pc = 0x184394u;
    SET_GPR_U32(ctx, 31, 0x18439Cu);
    ctx->pc = 0x184398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184394u;
    // 0x184398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x184394u, 0x18439Cu)) {
        return;
    }
    ctx->pc = 0x18439Cu;
label_18439c:
    // 0x18439c: 0x8e240eac  lw          $a0, 0xEAC($s1)
    ctx->pc = 0x18439cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3756)));
label_1843a0:
    // 0x1843a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1843a4:
    if (ctx->pc == 0x1843A4u) {
        ctx->pc = 0x1843A8u;
        goto label_1843a8;
    }
    ctx->pc = 0x1843A0u;
    {
        const bool branch_taken_0x1843a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1843a0) {
            ctx->pc = 0x1843B0u;
            goto label_1843b0;
        }
    }
    ctx->pc = 0x1843A8u;
label_1843a8:
    // 0x1843a8: 0xc059cae  jal         func_1672B8
label_1843ac:
    if (ctx->pc == 0x1843ACu) {
        ctx->pc = 0x1843ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843A8u;
        // 0x1843ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843B0u;
        goto label_1843b0;
    }
    ctx->pc = 0x1843A8u;
    SET_GPR_U32(ctx, 31, 0x1843B0u);
    ctx->pc = 0x1843ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843A8u;
    // 0x1843ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1672B8u, 0x1843A8u, 0x1843B0u)) {
        return;
    }
    ctx->pc = 0x1843B0u;
label_1843b0:
    // 0x1843b0: 0xc04067c  jal         func_1019F0
label_1843b4:
    if (ctx->pc == 0x1843B4u) {
        ctx->pc = 0x1843B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843B0u;
        // 0x1843b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843B8u;
        goto label_1843b8;
    }
    ctx->pc = 0x1843B0u;
    SET_GPR_U32(ctx, 31, 0x1843B8u);
    ctx->pc = 0x1843B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843B0u;
    // 0x1843b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019F0u, 0x1843B0u, 0x1843B8u)) {
        return;
    }
    ctx->pc = 0x1843B8u;
label_1843b8:
    // 0x1843b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1843b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1843bc:
    // 0x1843bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1843bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1843c0:
    // 0x1843c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1843c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1843c4:
    // 0x1843c4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1843c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1843c8:
    // 0x1843c8: 0x3e00008  jr          $ra
label_1843cc:
    if (ctx->pc == 0x1843CCu) {
        ctx->pc = 0x1843CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843C8u;
        // 0x1843cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843D0u;
        goto label_fallthrough_0x1843c8;
    }
    ctx->pc = 0x1843C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1843CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843C8u;
        // 0x1843cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1843C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1843c8:
    ctx->pc = 0x1843D0u;
}
