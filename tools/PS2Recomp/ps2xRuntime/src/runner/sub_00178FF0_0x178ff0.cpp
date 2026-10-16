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

// Function: sub_00178FF0
// Address: 0x178ff0 - 0x1792e8
void sub_00178FF0_0x178ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178FF0_0x178ff0");
#endif

    switch (ctx->pc) {
        case 0x178ff0u: goto label_178ff0;
        case 0x178ff4u: goto label_178ff4;
        case 0x178ff8u: goto label_178ff8;
        case 0x178ffcu: goto label_178ffc;
        case 0x179000u: goto label_179000;
        case 0x179004u: goto label_179004;
        case 0x179008u: goto label_179008;
        case 0x17900cu: goto label_17900c;
        case 0x179010u: goto label_179010;
        case 0x179014u: goto label_179014;
        case 0x179018u: goto label_179018;
        case 0x17901cu: goto label_17901c;
        case 0x179020u: goto label_179020;
        case 0x179024u: goto label_179024;
        case 0x179028u: goto label_179028;
        case 0x17902cu: goto label_17902c;
        case 0x179030u: goto label_179030;
        case 0x179034u: goto label_179034;
        case 0x179038u: goto label_179038;
        case 0x17903cu: goto label_17903c;
        case 0x179040u: goto label_179040;
        case 0x179044u: goto label_179044;
        case 0x179048u: goto label_179048;
        case 0x17904cu: goto label_17904c;
        case 0x179050u: goto label_179050;
        case 0x179054u: goto label_179054;
        case 0x179058u: goto label_179058;
        case 0x17905cu: goto label_17905c;
        case 0x179060u: goto label_179060;
        case 0x179064u: goto label_179064;
        case 0x179068u: goto label_179068;
        case 0x17906cu: goto label_17906c;
        case 0x179070u: goto label_179070;
        case 0x179074u: goto label_179074;
        case 0x179078u: goto label_179078;
        case 0x17907cu: goto label_17907c;
        case 0x179080u: goto label_179080;
        case 0x179084u: goto label_179084;
        case 0x179088u: goto label_179088;
        case 0x17908cu: goto label_17908c;
        case 0x179090u: goto label_179090;
        case 0x179094u: goto label_179094;
        case 0x179098u: goto label_179098;
        case 0x17909cu: goto label_17909c;
        case 0x1790a0u: goto label_1790a0;
        case 0x1790a4u: goto label_1790a4;
        case 0x1790a8u: goto label_1790a8;
        case 0x1790acu: goto label_1790ac;
        case 0x1790b0u: goto label_1790b0;
        case 0x1790b4u: goto label_1790b4;
        case 0x1790b8u: goto label_1790b8;
        case 0x1790bcu: goto label_1790bc;
        case 0x1790c0u: goto label_1790c0;
        case 0x1790c4u: goto label_1790c4;
        case 0x1790c8u: goto label_1790c8;
        case 0x1790ccu: goto label_1790cc;
        case 0x1790d0u: goto label_1790d0;
        case 0x1790d4u: goto label_1790d4;
        case 0x1790d8u: goto label_1790d8;
        case 0x1790dcu: goto label_1790dc;
        case 0x1790e0u: goto label_1790e0;
        case 0x1790e4u: goto label_1790e4;
        case 0x1790e8u: goto label_1790e8;
        case 0x1790ecu: goto label_1790ec;
        case 0x1790f0u: goto label_1790f0;
        case 0x1790f4u: goto label_1790f4;
        case 0x1790f8u: goto label_1790f8;
        case 0x1790fcu: goto label_1790fc;
        case 0x179100u: goto label_179100;
        case 0x179104u: goto label_179104;
        case 0x179108u: goto label_179108;
        case 0x17910cu: goto label_17910c;
        case 0x179110u: goto label_179110;
        case 0x179114u: goto label_179114;
        case 0x179118u: goto label_179118;
        case 0x17911cu: goto label_17911c;
        case 0x179120u: goto label_179120;
        case 0x179124u: goto label_179124;
        case 0x179128u: goto label_179128;
        case 0x17912cu: goto label_17912c;
        case 0x179130u: goto label_179130;
        case 0x179134u: goto label_179134;
        case 0x179138u: goto label_179138;
        case 0x17913cu: goto label_17913c;
        case 0x179140u: goto label_179140;
        case 0x179144u: goto label_179144;
        case 0x179148u: goto label_179148;
        case 0x17914cu: goto label_17914c;
        case 0x179150u: goto label_179150;
        case 0x179154u: goto label_179154;
        case 0x179158u: goto label_179158;
        case 0x17915cu: goto label_17915c;
        case 0x179160u: goto label_179160;
        case 0x179164u: goto label_179164;
        case 0x179168u: goto label_179168;
        case 0x17916cu: goto label_17916c;
        case 0x179170u: goto label_179170;
        case 0x179174u: goto label_179174;
        case 0x179178u: goto label_179178;
        case 0x17917cu: goto label_17917c;
        case 0x179180u: goto label_179180;
        case 0x179184u: goto label_179184;
        case 0x179188u: goto label_179188;
        case 0x17918cu: goto label_17918c;
        case 0x179190u: goto label_179190;
        case 0x179194u: goto label_179194;
        case 0x179198u: goto label_179198;
        case 0x17919cu: goto label_17919c;
        case 0x1791a0u: goto label_1791a0;
        case 0x1791a4u: goto label_1791a4;
        case 0x1791a8u: goto label_1791a8;
        case 0x1791acu: goto label_1791ac;
        case 0x1791b0u: goto label_1791b0;
        case 0x1791b4u: goto label_1791b4;
        case 0x1791b8u: goto label_1791b8;
        case 0x1791bcu: goto label_1791bc;
        case 0x1791c0u: goto label_1791c0;
        case 0x1791c4u: goto label_1791c4;
        case 0x1791c8u: goto label_1791c8;
        case 0x1791ccu: goto label_1791cc;
        case 0x1791d0u: goto label_1791d0;
        case 0x1791d4u: goto label_1791d4;
        case 0x1791d8u: goto label_1791d8;
        case 0x1791dcu: goto label_1791dc;
        case 0x1791e0u: goto label_1791e0;
        case 0x1791e4u: goto label_1791e4;
        case 0x1791e8u: goto label_1791e8;
        case 0x1791ecu: goto label_1791ec;
        case 0x1791f0u: goto label_1791f0;
        case 0x1791f4u: goto label_1791f4;
        case 0x1791f8u: goto label_1791f8;
        case 0x1791fcu: goto label_1791fc;
        case 0x179200u: goto label_179200;
        case 0x179204u: goto label_179204;
        case 0x179208u: goto label_179208;
        case 0x17920cu: goto label_17920c;
        case 0x179210u: goto label_179210;
        case 0x179214u: goto label_179214;
        case 0x179218u: goto label_179218;
        case 0x17921cu: goto label_17921c;
        case 0x179220u: goto label_179220;
        case 0x179224u: goto label_179224;
        case 0x179228u: goto label_179228;
        case 0x17922cu: goto label_17922c;
        case 0x179230u: goto label_179230;
        case 0x179234u: goto label_179234;
        case 0x179238u: goto label_179238;
        case 0x17923cu: goto label_17923c;
        case 0x179240u: goto label_179240;
        case 0x179244u: goto label_179244;
        case 0x179248u: goto label_179248;
        case 0x17924cu: goto label_17924c;
        case 0x179250u: goto label_179250;
        case 0x179254u: goto label_179254;
        case 0x179258u: goto label_179258;
        case 0x17925cu: goto label_17925c;
        case 0x179260u: goto label_179260;
        case 0x179264u: goto label_179264;
        case 0x179268u: goto label_179268;
        case 0x17926cu: goto label_17926c;
        case 0x179270u: goto label_179270;
        case 0x179274u: goto label_179274;
        case 0x179278u: goto label_179278;
        case 0x17927cu: goto label_17927c;
        case 0x179280u: goto label_179280;
        case 0x179284u: goto label_179284;
        case 0x179288u: goto label_179288;
        case 0x17928cu: goto label_17928c;
        case 0x179290u: goto label_179290;
        case 0x179294u: goto label_179294;
        case 0x179298u: goto label_179298;
        case 0x17929cu: goto label_17929c;
        case 0x1792a0u: goto label_1792a0;
        case 0x1792a4u: goto label_1792a4;
        case 0x1792a8u: goto label_1792a8;
        case 0x1792acu: goto label_1792ac;
        case 0x1792b0u: goto label_1792b0;
        case 0x1792b4u: goto label_1792b4;
        case 0x1792b8u: goto label_1792b8;
        case 0x1792bcu: goto label_1792bc;
        case 0x1792c0u: goto label_1792c0;
        case 0x1792c4u: goto label_1792c4;
        case 0x1792c8u: goto label_1792c8;
        case 0x1792ccu: goto label_1792cc;
        case 0x1792d0u: goto label_1792d0;
        case 0x1792d4u: goto label_1792d4;
        case 0x1792d8u: goto label_1792d8;
        case 0x1792dcu: goto label_1792dc;
        case 0x1792e0u: goto label_1792e0;
        case 0x1792e4u: goto label_1792e4;
        default: break;
    }

    ctx->pc = 0x178ff0u;

label_178ff0:
    // 0x178ff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x178ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_178ff4:
    // 0x178ff4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x178ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_178ff8:
    // 0x178ff8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x178ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_178ffc:
    // 0x178ffc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x178ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_179000:
    // 0x179000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179004:
    // 0x179004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_179008:
    // 0x179008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17900c:
    // 0x17900c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x17900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_179010:
    // 0x179010: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_179014:
    if (ctx->pc == 0x179014u) {
        ctx->pc = 0x179014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179010u;
        // 0x179014: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179018u;
        goto label_179018;
    }
    ctx->pc = 0x179010u;
    {
        const bool branch_taken_0x179010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179010u;
        // 0x179014: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179010) {
            ctx->pc = 0x179074u;
            goto label_179074;
        }
    }
    ctx->pc = 0x179018u;
label_179018:
    // 0x179018: 0xc05e57a  jal         func_1795E8
label_17901c:
    if (ctx->pc == 0x17901Cu) {
        ctx->pc = 0x179020u;
        goto label_179020;
    }
    ctx->pc = 0x179018u;
    SET_GPR_U32(ctx, 31, 0x179020u);
    ctx->pc = 0x1795E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1795E8u, 0x179018u, 0x179020u)) {
        return;
    }
    ctx->pc = 0x179020u;
label_179020:
    // 0x179020: 0xc0773f4  jal         func_1DCFD0
label_179024:
    if (ctx->pc == 0x179024u) {
        ctx->pc = 0x179028u;
        goto label_179028;
    }
    ctx->pc = 0x179020u;
    SET_GPR_U32(ctx, 31, 0x179028u);
    ctx->pc = 0x1DCFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCFD0u, 0x179020u, 0x179028u)) {
        return;
    }
    ctx->pc = 0x179028u;
label_179028:
    // 0x179028: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x179028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_17902c:
    // 0x17902c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x17902cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_179030:
    // 0x179030: 0xc097a9e  jal         func_25EA78
label_179034:
    if (ctx->pc == 0x179034u) {
        ctx->pc = 0x179034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179030u;
        // 0x179034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179038u;
        goto label_179038;
    }
    ctx->pc = 0x179030u;
    SET_GPR_U32(ctx, 31, 0x179038u);
    ctx->pc = 0x179034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179030u;
    // 0x179034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x179030u, 0x179038u)) {
        return;
    }
    ctx->pc = 0x179038u;
label_179038:
    // 0x179038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17903c:
    // 0x17903c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x17903cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_179040:
    // 0x179040: 0xc097b28  jal         func_25ECA0
label_179044:
    if (ctx->pc == 0x179044u) {
        ctx->pc = 0x179044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179040u;
        // 0x179044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179048u;
        goto label_179048;
    }
    ctx->pc = 0x179040u;
    SET_GPR_U32(ctx, 31, 0x179048u);
    ctx->pc = 0x179044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179040u;
    // 0x179044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x179040u, 0x179048u)) {
        return;
    }
    ctx->pc = 0x179048u;
label_179048:
    // 0x179048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17904c:
    // 0x17904c: 0xc056364  jal         func_158D90
label_179050:
    if (ctx->pc == 0x179050u) {
        ctx->pc = 0x179050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17904Cu;
        // 0x179050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179054u;
        goto label_179054;
    }
    ctx->pc = 0x17904Cu;
    SET_GPR_U32(ctx, 31, 0x179054u);
    ctx->pc = 0x179050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17904Cu;
    // 0x179050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158D90u, 0x17904Cu, 0x179054u)) {
        return;
    }
    ctx->pc = 0x179054u;
label_179054:
    // 0x179054: 0xc05e598  jal         func_179660
label_179058:
    if (ctx->pc == 0x179058u) {
        ctx->pc = 0x179058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179054u;
        // 0x179058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17905Cu;
        goto label_17905c;
    }
    ctx->pc = 0x179054u;
    SET_GPR_U32(ctx, 31, 0x17905Cu);
    ctx->pc = 0x179058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179054u;
    // 0x179058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179660u, 0x179054u, 0x17905Cu)) {
        return;
    }
    ctx->pc = 0x17905Cu;
label_17905c:
    // 0x17905c: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x17905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_179060:
    // 0x179060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179064:
    // 0x179064: 0xc097b28  jal         func_25ECA0
label_179068:
    if (ctx->pc == 0x179068u) {
        ctx->pc = 0x179068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179064u;
        // 0x179068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17906Cu;
        goto label_17906c;
    }
    ctx->pc = 0x179064u;
    SET_GPR_U32(ctx, 31, 0x17906Cu);
    ctx->pc = 0x179068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179064u;
    // 0x179068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x179064u, 0x17906Cu)) {
        return;
    }
    ctx->pc = 0x17906Cu;
label_17906c:
    // 0x17906c: 0x10000097  b           . + 4 + (0x97 << 2)
label_179070:
    if (ctx->pc == 0x179070u) {
        ctx->pc = 0x179070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17906Cu;
        // 0x179070: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179074u;
        goto label_179074;
    }
    ctx->pc = 0x17906Cu;
    {
        const bool branch_taken_0x17906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17906Cu;
        // 0x179070: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17906c) {
            ctx->pc = 0x1792CCu;
            goto label_1792cc;
        }
    }
    ctx->pc = 0x179074u;
label_179074:
    // 0x179074: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x179074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_179078:
    // 0x179078: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x179078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_17907c:
    // 0x17907c: 0x24520fd8  addiu       $s2, $v0, 0xFD8
    ctx->pc = 0x17907cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_179080:
    // 0x179080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179084:
    // 0x179084: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x179084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_179088:
    // 0x179088: 0x40f809  jalr        $v0
label_17908c:
    if (ctx->pc == 0x17908Cu) {
        ctx->pc = 0x17908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179088u;
        // 0x17908c: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179090u;
        goto label_179090;
    }
    ctx->pc = 0x179088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179090u);
        ctx->pc = 0x17908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179088u;
        // 0x17908c: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179088u, 0x179090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179090u;
label_179090:
    // 0x179090: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x179090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_179094:
    // 0x179094: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x179094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_179098:
    // 0x179098: 0x40f809  jalr        $v0
label_17909c:
    if (ctx->pc == 0x17909Cu) {
        ctx->pc = 0x17909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179098u;
        // 0x17909c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790A0u;
        goto label_1790a0;
    }
    ctx->pc = 0x179098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1790A0u);
        ctx->pc = 0x17909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179098u;
        // 0x17909c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179098u, 0x1790A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1790A0u;
label_1790a0:
    // 0x1790a0: 0xc0773f4  jal         func_1DCFD0
label_1790a4:
    if (ctx->pc == 0x1790A4u) {
        ctx->pc = 0x1790A8u;
        goto label_1790a8;
    }
    ctx->pc = 0x1790A0u;
    SET_GPR_U32(ctx, 31, 0x1790A8u);
    ctx->pc = 0x1DCFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCFD0u, 0x1790A0u, 0x1790A8u)) {
        return;
    }
    ctx->pc = 0x1790A8u;
label_1790a8:
    // 0x1790a8: 0xc08939a  jal         func_224E68
label_1790ac:
    if (ctx->pc == 0x1790ACu) {
        ctx->pc = 0x1790ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790A8u;
        // 0x1790ac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790B0u;
        goto label_1790b0;
    }
    ctx->pc = 0x1790A8u;
    SET_GPR_U32(ctx, 31, 0x1790B0u);
    ctx->pc = 0x1790ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790A8u;
    // 0x1790ac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x1790A8u, 0x1790B0u)) {
        return;
    }
    ctx->pc = 0x1790B0u;
label_1790b0:
    // 0x1790b0: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1790b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1790b4:
    // 0x1790b4: 0xc097922  jal         func_25E488
label_1790b8:
    if (ctx->pc == 0x1790B8u) {
        ctx->pc = 0x1790B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790B4u;
        // 0x1790b8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790BCu;
        goto label_1790bc;
    }
    ctx->pc = 0x1790B4u;
    SET_GPR_U32(ctx, 31, 0x1790BCu);
    ctx->pc = 0x1790B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790B4u;
    // 0x1790b8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x1790B4u, 0x1790BCu)) {
        return;
    }
    ctx->pc = 0x1790BCu;
label_1790bc:
    // 0x1790bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1790bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1790c0:
    // 0x1790c0: 0xc097910  jal         func_25E440
label_1790c4:
    if (ctx->pc == 0x1790C4u) {
        ctx->pc = 0x1790C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790C0u;
        // 0x1790c4: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790C8u;
        goto label_1790c8;
    }
    ctx->pc = 0x1790C0u;
    SET_GPR_U32(ctx, 31, 0x1790C8u);
    ctx->pc = 0x1790C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790C0u;
    // 0x1790c4: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x1790C0u, 0x1790C8u)) {
        return;
    }
    ctx->pc = 0x1790C8u;
label_1790c8:
    // 0x1790c8: 0xc0893a2  jal         func_224E88
label_1790cc:
    if (ctx->pc == 0x1790CCu) {
        ctx->pc = 0x1790CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790C8u;
        // 0x1790cc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790D0u;
        goto label_1790d0;
    }
    ctx->pc = 0x1790C8u;
    SET_GPR_U32(ctx, 31, 0x1790D0u);
    ctx->pc = 0x1790CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790C8u;
    // 0x1790cc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x1790C8u, 0x1790D0u)) {
        return;
    }
    ctx->pc = 0x1790D0u;
label_1790d0:
    // 0x1790d0: 0xc051a50  jal         func_146940
label_1790d4:
    if (ctx->pc == 0x1790D4u) {
        ctx->pc = 0x1790D8u;
        goto label_1790d8;
    }
    ctx->pc = 0x1790D0u;
    SET_GPR_U32(ctx, 31, 0x1790D8u);
    ctx->pc = 0x146940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146940u, 0x1790D0u, 0x1790D8u)) {
        return;
    }
    ctx->pc = 0x1790D8u;
label_1790d8:
    // 0x1790d8: 0xc07cc06  jal         func_1F3018
label_1790dc:
    if (ctx->pc == 0x1790DCu) {
        ctx->pc = 0x1790DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790D8u;
        // 0x1790dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790E0u;
        goto label_1790e0;
    }
    ctx->pc = 0x1790D8u;
    SET_GPR_U32(ctx, 31, 0x1790E0u);
    ctx->pc = 0x1790DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790D8u;
    // 0x1790dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3018u, 0x1790D8u, 0x1790E0u)) {
        return;
    }
    ctx->pc = 0x1790E0u;
label_1790e0:
    // 0x1790e0: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x1790e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_1790e4:
    // 0x1790e4: 0xc091fdc  jal         func_247F70
label_1790e8:
    if (ctx->pc == 0x1790E8u) {
        ctx->pc = 0x1790ECu;
        goto label_1790ec;
    }
    ctx->pc = 0x1790E4u;
    SET_GPR_U32(ctx, 31, 0x1790ECu);
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x1790E4u, 0x1790ECu)) {
        return;
    }
    ctx->pc = 0x1790ECu;
label_1790ec:
    // 0x1790ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x1790ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1790f0:
    // 0x1790f0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1790f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1790f4:
    // 0x1790f4: 0xc097a9e  jal         func_25EA78
label_1790f8:
    if (ctx->pc == 0x1790F8u) {
        ctx->pc = 0x1790F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790F4u;
        // 0x1790f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790FCu;
        goto label_1790fc;
    }
    ctx->pc = 0x1790F4u;
    SET_GPR_U32(ctx, 31, 0x1790FCu);
    ctx->pc = 0x1790F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790F4u;
    // 0x1790f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x1790F4u, 0x1790FCu)) {
        return;
    }
    ctx->pc = 0x1790FCu;
label_1790fc:
    // 0x1790fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1790fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179100:
    // 0x179100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179104:
    // 0x179104: 0xc097b28  jal         func_25ECA0
label_179108:
    if (ctx->pc == 0x179108u) {
        ctx->pc = 0x179108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179104u;
        // 0x179108: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17910Cu;
        goto label_17910c;
    }
    ctx->pc = 0x179104u;
    SET_GPR_U32(ctx, 31, 0x17910Cu);
    ctx->pc = 0x179108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179104u;
    // 0x179108: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x179104u, 0x17910Cu)) {
        return;
    }
    ctx->pc = 0x17910Cu;
label_17910c:
    // 0x17910c: 0xc091fdc  jal         func_247F70
label_179110:
    if (ctx->pc == 0x179110u) {
        ctx->pc = 0x179110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17910Cu;
        // 0x179110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179114u;
        goto label_179114;
    }
    ctx->pc = 0x17910Cu;
    SET_GPR_U32(ctx, 31, 0x179114u);
    ctx->pc = 0x179110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17910Cu;
    // 0x179110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x17910Cu, 0x179114u)) {
        return;
    }
    ctx->pc = 0x179114u;
label_179114:
    // 0x179114: 0xc051a72  jal         func_1469C8
label_179118:
    if (ctx->pc == 0x179118u) {
        ctx->pc = 0x17911Cu;
        goto label_17911c;
    }
    ctx->pc = 0x179114u;
    SET_GPR_U32(ctx, 31, 0x17911Cu);
    ctx->pc = 0x1469C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1469C8u, 0x179114u, 0x17911Cu)) {
        return;
    }
    ctx->pc = 0x17911Cu;
label_17911c:
    // 0x17911c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17911cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_179120:
    // 0x179120: 0x8c4384a4  lw          $v1, -0x7B5C($v0)
    ctx->pc = 0x179120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935716)));
label_179124:
    // 0x179124: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_179128:
    if (ctx->pc == 0x179128u) {
        ctx->pc = 0x17912Cu;
        goto label_17912c;
    }
    ctx->pc = 0x179124u;
    {
        const bool branch_taken_0x179124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179124) {
            ctx->pc = 0x179134u;
            goto label_179134;
        }
    }
    ctx->pc = 0x17912Cu;
label_17912c:
    // 0x17912c: 0xc079dc0  jal         func_1E7700
label_179130:
    if (ctx->pc == 0x179130u) {
        ctx->pc = 0x179130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17912Cu;
        // 0x179130: 0x8e64e780  lw          $a0, -0x1880($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179134u;
        goto label_179134;
    }
    ctx->pc = 0x17912Cu;
    SET_GPR_U32(ctx, 31, 0x179134u);
    ctx->pc = 0x179130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17912Cu;
    // 0x179130: 0x8e64e780  lw          $a0, -0x1880($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7700u, 0x17912Cu, 0x179134u)) {
        return;
    }
    ctx->pc = 0x179134u;
label_179134:
    // 0x179134: 0xc091eaa  jal         func_247AA8
label_179138:
    if (ctx->pc == 0x179138u) {
        ctx->pc = 0x179138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179134u;
        // 0x179138: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17913Cu;
        goto label_17913c;
    }
    ctx->pc = 0x179134u;
    SET_GPR_U32(ctx, 31, 0x17913Cu);
    ctx->pc = 0x179138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179134u;
    // 0x179138: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247AA8u, 0x179134u, 0x17913Cu)) {
        return;
    }
    ctx->pc = 0x17913Cu;
label_17913c:
    // 0x17913c: 0xc08939a  jal         func_224E68
label_179140:
    if (ctx->pc == 0x179140u) {
        ctx->pc = 0x179140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17913Cu;
        // 0x179140: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179144u;
        goto label_179144;
    }
    ctx->pc = 0x17913Cu;
    SET_GPR_U32(ctx, 31, 0x179144u);
    ctx->pc = 0x179140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17913Cu;
    // 0x179140: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x17913Cu, 0x179144u)) {
        return;
    }
    ctx->pc = 0x179144u;
label_179144:
    // 0x179144: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x179144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_179148:
    // 0x179148: 0xc097922  jal         func_25E488
label_17914c:
    if (ctx->pc == 0x17914Cu) {
        ctx->pc = 0x17914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179148u;
        // 0x17914c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179150u;
        goto label_179150;
    }
    ctx->pc = 0x179148u;
    SET_GPR_U32(ctx, 31, 0x179150u);
    ctx->pc = 0x17914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179148u;
    // 0x17914c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x179148u, 0x179150u)) {
        return;
    }
    ctx->pc = 0x179150u;
label_179150:
    // 0x179150: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x179150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_179154:
    // 0x179154: 0xc097910  jal         func_25E440
label_179158:
    if (ctx->pc == 0x179158u) {
        ctx->pc = 0x179158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179154u;
        // 0x179158: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17915Cu;
        goto label_17915c;
    }
    ctx->pc = 0x179154u;
    SET_GPR_U32(ctx, 31, 0x17915Cu);
    ctx->pc = 0x179158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179154u;
    // 0x179158: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x179154u, 0x17915Cu)) {
        return;
    }
    ctx->pc = 0x17915Cu;
label_17915c:
    // 0x17915c: 0xc0893a2  jal         func_224E88
label_179160:
    if (ctx->pc == 0x179160u) {
        ctx->pc = 0x179160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17915Cu;
        // 0x179160: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179164u;
        goto label_179164;
    }
    ctx->pc = 0x17915Cu;
    SET_GPR_U32(ctx, 31, 0x179164u);
    ctx->pc = 0x179160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17915Cu;
    // 0x179160: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x17915Cu, 0x179164u)) {
        return;
    }
    ctx->pc = 0x179164u;
label_179164:
    // 0x179164: 0xc08ca46  jal         func_232918
label_179168:
    if (ctx->pc == 0x179168u) {
        ctx->pc = 0x179168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179164u;
        // 0x179168: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17916Cu;
        goto label_17916c;
    }
    ctx->pc = 0x179164u;
    SET_GPR_U32(ctx, 31, 0x17916Cu);
    ctx->pc = 0x179168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179164u;
    // 0x179168: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x232918u, 0x179164u, 0x17916Cu)) {
        return;
    }
    ctx->pc = 0x17916Cu;
label_17916c:
    // 0x17916c: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x17916cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_179170:
    // 0x179170: 0xc091fdc  jal         func_247F70
label_179174:
    if (ctx->pc == 0x179174u) {
        ctx->pc = 0x179178u;
        goto label_179178;
    }
    ctx->pc = 0x179170u;
    SET_GPR_U32(ctx, 31, 0x179178u);
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x179170u, 0x179178u)) {
        return;
    }
    ctx->pc = 0x179178u;
label_179178:
    // 0x179178: 0xc05e57a  jal         func_1795E8
label_17917c:
    if (ctx->pc == 0x17917Cu) {
        ctx->pc = 0x17917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179178u;
        // 0x17917c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179180u;
        goto label_179180;
    }
    ctx->pc = 0x179178u;
    SET_GPR_U32(ctx, 31, 0x179180u);
    ctx->pc = 0x17917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179178u;
    // 0x17917c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1795E8u, 0x179178u, 0x179180u)) {
        return;
    }
    ctx->pc = 0x179180u;
label_179180:
    // 0x179180: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x179180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_179184:
    // 0x179184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179188:
    // 0x179188: 0xc097a9e  jal         func_25EA78
label_17918c:
    if (ctx->pc == 0x17918Cu) {
        ctx->pc = 0x17918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179188u;
        // 0x17918c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179190u;
        goto label_179190;
    }
    ctx->pc = 0x179188u;
    SET_GPR_U32(ctx, 31, 0x179190u);
    ctx->pc = 0x17918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179188u;
    // 0x17918c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x179188u, 0x179190u)) {
        return;
    }
    ctx->pc = 0x179190u;
label_179190:
    // 0x179190: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x179190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_179194:
    // 0x179194: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x179194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_179198:
    // 0x179198: 0x40f809  jalr        $v0
label_17919c:
    if (ctx->pc == 0x17919Cu) {
        ctx->pc = 0x17919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179198u;
        // 0x17919c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791A0u;
        goto label_1791a0;
    }
    ctx->pc = 0x179198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1791A0u);
        ctx->pc = 0x17919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179198u;
        // 0x17919c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179198u, 0x1791A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1791A0u;
label_1791a0:
    // 0x1791a0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1791a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1791a4:
    // 0x1791a4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1791a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1791a8:
    // 0x1791a8: 0x40f809  jalr        $v0
label_1791ac:
    if (ctx->pc == 0x1791ACu) {
        ctx->pc = 0x1791ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791A8u;
        // 0x1791ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791B0u;
        goto label_1791b0;
    }
    ctx->pc = 0x1791A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1791B0u);
        ctx->pc = 0x1791ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791A8u;
        // 0x1791ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1791A8u, 0x1791B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1791B0u;
label_1791b0:
    // 0x1791b0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1791b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1791b4:
    // 0x1791b4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1791b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1791b8:
    // 0x1791b8: 0x40f809  jalr        $v0
label_1791bc:
    if (ctx->pc == 0x1791BCu) {
        ctx->pc = 0x1791BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B8u;
        // 0x1791bc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791C0u;
        goto label_1791c0;
    }
    ctx->pc = 0x1791B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1791C0u);
        ctx->pc = 0x1791BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B8u;
        // 0x1791bc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1791B8u, 0x1791C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1791C0u;
label_1791c0:
    // 0x1791c0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1791c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1791c4:
    // 0x1791c4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1791c8:
    // 0x1791c8: 0x40f809  jalr        $v0
label_1791cc:
    if (ctx->pc == 0x1791CCu) {
        ctx->pc = 0x1791CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791C8u;
        // 0x1791cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791D0u;
        goto label_1791d0;
    }
    ctx->pc = 0x1791C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1791D0u);
        ctx->pc = 0x1791CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791C8u;
        // 0x1791cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1791C8u, 0x1791D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1791D0u;
label_1791d0:
    // 0x1791d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1791d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1791d4:
    // 0x1791d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1791d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1791d8:
    // 0x1791d8: 0xc097b28  jal         func_25ECA0
label_1791dc:
    if (ctx->pc == 0x1791DCu) {
        ctx->pc = 0x1791DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791D8u;
        // 0x1791dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791E0u;
        goto label_1791e0;
    }
    ctx->pc = 0x1791D8u;
    SET_GPR_U32(ctx, 31, 0x1791E0u);
    ctx->pc = 0x1791DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1791D8u;
    // 0x1791dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x1791D8u, 0x1791E0u)) {
        return;
    }
    ctx->pc = 0x1791E0u;
label_1791e0:
    // 0x1791e0: 0xc091fdc  jal         func_247F70
label_1791e4:
    if (ctx->pc == 0x1791E4u) {
        ctx->pc = 0x1791E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791E0u;
        // 0x1791e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791E8u;
        goto label_1791e8;
    }
    ctx->pc = 0x1791E0u;
    SET_GPR_U32(ctx, 31, 0x1791E8u);
    ctx->pc = 0x1791E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1791E0u;
    // 0x1791e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x1791E0u, 0x1791E8u)) {
        return;
    }
    ctx->pc = 0x1791E8u;
label_1791e8:
    // 0x1791e8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1791e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1791ec:
    // 0x1791ec: 0x8c6284bc  lw          $v0, -0x7B44($v1)
    ctx->pc = 0x1791ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935740)));
label_1791f0:
    // 0x1791f0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_1791f4:
    if (ctx->pc == 0x1791F4u) {
        ctx->pc = 0x1791F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791F0u;
        // 0x1791f4: 0xac6084bc  sw          $zero, -0x7B44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294935740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791F8u;
        goto label_1791f8;
    }
    ctx->pc = 0x1791F0u;
    {
        const bool branch_taken_0x1791f0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1791f0) {
            ctx->pc = 0x1791F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1791F0u;
            // 0x1791f4: 0xac6084bc  sw          $zero, -0x7B44($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294935740), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1791F8u;
            goto label_1791f8;
        }
    }
    ctx->pc = 0x1791F8u;
label_1791f8:
    // 0x1791f8: 0x8c6284bc  lw          $v0, -0x7B44($v1)
    ctx->pc = 0x1791f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935740)));
label_1791fc:
    // 0x1791fc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1791fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_179200:
    // 0x179200: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_179204:
    if (ctx->pc == 0x179204u) {
        ctx->pc = 0x179204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179200u;
        // 0x179204: 0x8c6584bc  lw          $a1, -0x7B44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179208u;
        goto label_179208;
    }
    ctx->pc = 0x179200u;
    {
        const bool branch_taken_0x179200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179200) {
            ctx->pc = 0x179204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179200u;
            // 0x179204: 0x8c6584bc  lw          $a1, -0x7B44($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179214u;
            goto label_179214;
        }
    }
    ctx->pc = 0x179208u;
label_179208:
    // 0x179208: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17920c:
    // 0x17920c: 0xac6284bc  sw          $v0, -0x7B44($v1)
    ctx->pc = 0x17920cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935740), GPR_U32(ctx, 2));
label_179210:
    // 0x179210: 0x8c6584bc  lw          $a1, -0x7B44($v1)
    ctx->pc = 0x179210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935740)));
label_179214:
    // 0x179214: 0xc079d16  jal         func_1E7458
label_179218:
    if (ctx->pc == 0x179218u) {
        ctx->pc = 0x179218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179214u;
        // 0x179218: 0x8e64e780  lw          $a0, -0x1880($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17921Cu;
        goto label_17921c;
    }
    ctx->pc = 0x179214u;
    SET_GPR_U32(ctx, 31, 0x17921Cu);
    ctx->pc = 0x179218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179214u;
    // 0x179218: 0x8e64e780  lw          $a0, -0x1880($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7458u, 0x179214u, 0x17921Cu)) {
        return;
    }
    ctx->pc = 0x17921Cu;
label_17921c:
    // 0x17921c: 0xc0773f4  jal         func_1DCFD0
label_179220:
    if (ctx->pc == 0x179220u) {
        ctx->pc = 0x179224u;
        goto label_179224;
    }
    ctx->pc = 0x17921Cu;
    SET_GPR_U32(ctx, 31, 0x179224u);
    ctx->pc = 0x1DCFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCFD0u, 0x17921Cu, 0x179224u)) {
        return;
    }
    ctx->pc = 0x179224u;
label_179224:
    // 0x179224: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x179224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_179228:
    // 0x179228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17922c:
    // 0x17922c: 0xc097b28  jal         func_25ECA0
label_179230:
    if (ctx->pc == 0x179230u) {
        ctx->pc = 0x179230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17922Cu;
        // 0x179230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179234u;
        goto label_179234;
    }
    ctx->pc = 0x17922Cu;
    SET_GPR_U32(ctx, 31, 0x179234u);
    ctx->pc = 0x179230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17922Cu;
    // 0x179230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x17922Cu, 0x179234u)) {
        return;
    }
    ctx->pc = 0x179234u;
label_179234:
    // 0x179234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179238:
    // 0x179238: 0xc056364  jal         func_158D90
label_17923c:
    if (ctx->pc == 0x17923Cu) {
        ctx->pc = 0x17923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179238u;
        // 0x17923c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179240u;
        goto label_179240;
    }
    ctx->pc = 0x179238u;
    SET_GPR_U32(ctx, 31, 0x179240u);
    ctx->pc = 0x17923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179238u;
    // 0x17923c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158D90u, 0x179238u, 0x179240u)) {
        return;
    }
    ctx->pc = 0x179240u;
label_179240:
    // 0x179240: 0xc051926  jal         func_146498
label_179244:
    if (ctx->pc == 0x179244u) {
        ctx->pc = 0x179244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179240u;
        // 0x179244: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179248u;
        goto label_179248;
    }
    ctx->pc = 0x179240u;
    SET_GPR_U32(ctx, 31, 0x179248u);
    ctx->pc = 0x179244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179240u;
    // 0x179244: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146498u, 0x179240u, 0x179248u)) {
        return;
    }
    ctx->pc = 0x179248u;
label_179248:
    // 0x179248: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_17924c:
    if (ctx->pc == 0x17924Cu) {
        ctx->pc = 0x17924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179248u;
        // 0x17924c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179250u;
        goto label_179250;
    }
    ctx->pc = 0x179248u;
    {
        const bool branch_taken_0x179248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179248u;
        // 0x17924c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179248) {
            ctx->pc = 0x1792B0u;
            goto label_1792b0;
        }
    }
    ctx->pc = 0x179250u;
label_179250:
    // 0x179250: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x179250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_179254:
    // 0x179254: 0x34a5c002  ori         $a1, $a1, 0xC002
    ctx->pc = 0x179254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49154);
label_179258:
    // 0x179258: 0xdc5034d0  ld          $s0, 0x34D0($v0)
    ctx->pc = 0x179258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 13520)));
label_17925c:
    // 0x17925c: 0xc08c4aa  jal         func_2312A8
label_179260:
    if (ctx->pc == 0x179260u) {
        ctx->pc = 0x179260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17925Cu;
        // 0x179260: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179264u;
        goto label_179264;
    }
    ctx->pc = 0x17925Cu;
    SET_GPR_U32(ctx, 31, 0x179264u);
    ctx->pc = 0x179260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17925Cu;
    // 0x179260: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x17925Cu, 0x179264u)) {
        return;
    }
    ctx->pc = 0x179264u;
label_179264:
    // 0x179264: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x179264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_179268:
    // 0x179268: 0xc091fdc  jal         func_247F70
label_17926c:
    if (ctx->pc == 0x17926Cu) {
        ctx->pc = 0x179270u;
        goto label_179270;
    }
    ctx->pc = 0x179268u;
    SET_GPR_U32(ctx, 31, 0x179270u);
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x179268u, 0x179270u)) {
        return;
    }
    ctx->pc = 0x179270u;
label_179270:
    // 0x179270: 0xc077366  jal         func_1DCD98
label_179274:
    if (ctx->pc == 0x179274u) {
        ctx->pc = 0x179274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179270u;
        // 0x179274: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179278u;
        goto label_179278;
    }
    ctx->pc = 0x179270u;
    SET_GPR_U32(ctx, 31, 0x179278u);
    ctx->pc = 0x179274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179270u;
    // 0x179274: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCD98u, 0x179270u, 0x179278u)) {
        return;
    }
    ctx->pc = 0x179278u;
label_179278:
    // 0x179278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17927c:
    // 0x17927c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17927cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179280:
    // 0x179280: 0xc097b28  jal         func_25ECA0
label_179284:
    if (ctx->pc == 0x179284u) {
        ctx->pc = 0x179284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179280u;
        // 0x179284: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179288u;
        goto label_179288;
    }
    ctx->pc = 0x179280u;
    SET_GPR_U32(ctx, 31, 0x179288u);
    ctx->pc = 0x179284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179280u;
    // 0x179284: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x179280u, 0x179288u)) {
        return;
    }
    ctx->pc = 0x179288u;
label_179288:
    // 0x179288: 0xc077366  jal         func_1DCD98
label_17928c:
    if (ctx->pc == 0x17928Cu) {
        ctx->pc = 0x17928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179288u;
        // 0x17928c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179290u;
        goto label_179290;
    }
    ctx->pc = 0x179288u;
    SET_GPR_U32(ctx, 31, 0x179290u);
    ctx->pc = 0x17928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179288u;
    // 0x17928c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCD98u, 0x179288u, 0x179290u)) {
        return;
    }
    ctx->pc = 0x179290u;
label_179290:
    // 0x179290: 0xc091fdc  jal         func_247F70
label_179294:
    if (ctx->pc == 0x179294u) {
        ctx->pc = 0x179294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179290u;
        // 0x179294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179298u;
        goto label_179298;
    }
    ctx->pc = 0x179290u;
    SET_GPR_U32(ctx, 31, 0x179298u);
    ctx->pc = 0x179294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179290u;
    // 0x179294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x179290u, 0x179298u)) {
        return;
    }
    ctx->pc = 0x179298u;
label_179298:
    // 0x179298: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x179298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_17929c:
    // 0x17929c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x17929cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1792a0:
    // 0x1792a0: 0xc08c4aa  jal         func_2312A8
label_1792a4:
    if (ctx->pc == 0x1792A4u) {
        ctx->pc = 0x1792A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792A0u;
        // 0x1792a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792A8u;
        goto label_1792a8;
    }
    ctx->pc = 0x1792A0u;
    SET_GPR_U32(ctx, 31, 0x1792A8u);
    ctx->pc = 0x1792A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1792A0u;
    // 0x1792a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1792A0u, 0x1792A8u)) {
        return;
    }
    ctx->pc = 0x1792A8u;
label_1792a8:
    // 0x1792a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1792ac:
    if (ctx->pc == 0x1792ACu) {
        ctx->pc = 0x1792B0u;
        goto label_1792b0;
    }
    ctx->pc = 0x1792A8u;
    {
        const bool branch_taken_0x1792a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792a8) {
            ctx->pc = 0x1792C0u;
            goto label_1792c0;
        }
    }
    ctx->pc = 0x1792B0u;
label_1792b0:
    // 0x1792b0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1792b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1792b4:
    // 0x1792b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1792b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1792b8:
    // 0x1792b8: 0xc097b28  jal         func_25ECA0
label_1792bc:
    if (ctx->pc == 0x1792BCu) {
        ctx->pc = 0x1792BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792B8u;
        // 0x1792bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792C0u;
        goto label_1792c0;
    }
    ctx->pc = 0x1792B8u;
    SET_GPR_U32(ctx, 31, 0x1792C0u);
    ctx->pc = 0x1792BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1792B8u;
    // 0x1792bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x1792B8u, 0x1792C0u)) {
        return;
    }
    ctx->pc = 0x1792C0u;
label_1792c0:
    // 0x1792c0: 0xc05e598  jal         func_179660
label_1792c4:
    if (ctx->pc == 0x1792C4u) {
        ctx->pc = 0x1792C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792C0u;
        // 0x1792c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792C8u;
        goto label_1792c8;
    }
    ctx->pc = 0x1792C0u;
    SET_GPR_U32(ctx, 31, 0x1792C8u);
    ctx->pc = 0x1792C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1792C0u;
    // 0x1792c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179660u, 0x1792C0u, 0x1792C8u)) {
        return;
    }
    ctx->pc = 0x1792C8u;
label_1792c8:
    // 0x1792c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1792c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1792cc:
    // 0x1792cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1792ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1792d0:
    // 0x1792d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1792d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1792d4:
    // 0x1792d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1792d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1792d8:
    // 0x1792d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1792d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1792dc:
    // 0x1792dc: 0x3e00008  jr          $ra
label_1792e0:
    if (ctx->pc == 0x1792E0u) {
        ctx->pc = 0x1792E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792DCu;
        // 0x1792e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792E4u;
        goto label_1792e4;
    }
    ctx->pc = 0x1792DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1792E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792DCu;
        // 0x1792e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1792DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1792E4u;
label_1792e4:
    // 0x1792e4: 0x0  nop
    ctx->pc = 0x1792e4u;
    // NOP
    ctx->pc = 0x1792e8u;
}
