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

// Function: sub_00209018
// Address: 0x209018 - 0x209368
void sub_00209018_0x209018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209018_0x209018");
#endif

    switch (ctx->pc) {
        case 0x209018u: goto label_209018;
        case 0x20901cu: goto label_20901c;
        case 0x209020u: goto label_209020;
        case 0x209024u: goto label_209024;
        case 0x209028u: goto label_209028;
        case 0x20902cu: goto label_20902c;
        case 0x209030u: goto label_209030;
        case 0x209034u: goto label_209034;
        case 0x209038u: goto label_209038;
        case 0x20903cu: goto label_20903c;
        case 0x209040u: goto label_209040;
        case 0x209044u: goto label_209044;
        case 0x209048u: goto label_209048;
        case 0x20904cu: goto label_20904c;
        case 0x209050u: goto label_209050;
        case 0x209054u: goto label_209054;
        case 0x209058u: goto label_209058;
        case 0x20905cu: goto label_20905c;
        case 0x209060u: goto label_209060;
        case 0x209064u: goto label_209064;
        case 0x209068u: goto label_209068;
        case 0x20906cu: goto label_20906c;
        case 0x209070u: goto label_209070;
        case 0x209074u: goto label_209074;
        case 0x209078u: goto label_209078;
        case 0x20907cu: goto label_20907c;
        case 0x209080u: goto label_209080;
        case 0x209084u: goto label_209084;
        case 0x209088u: goto label_209088;
        case 0x20908cu: goto label_20908c;
        case 0x209090u: goto label_209090;
        case 0x209094u: goto label_209094;
        case 0x209098u: goto label_209098;
        case 0x20909cu: goto label_20909c;
        case 0x2090a0u: goto label_2090a0;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090a8u: goto label_2090a8;
        case 0x2090acu: goto label_2090ac;
        case 0x2090b0u: goto label_2090b0;
        case 0x2090b4u: goto label_2090b4;
        case 0x2090b8u: goto label_2090b8;
        case 0x2090bcu: goto label_2090bc;
        case 0x2090c0u: goto label_2090c0;
        case 0x2090c4u: goto label_2090c4;
        case 0x2090c8u: goto label_2090c8;
        case 0x2090ccu: goto label_2090cc;
        case 0x2090d0u: goto label_2090d0;
        case 0x2090d4u: goto label_2090d4;
        case 0x2090d8u: goto label_2090d8;
        case 0x2090dcu: goto label_2090dc;
        case 0x2090e0u: goto label_2090e0;
        case 0x2090e4u: goto label_2090e4;
        case 0x2090e8u: goto label_2090e8;
        case 0x2090ecu: goto label_2090ec;
        case 0x2090f0u: goto label_2090f0;
        case 0x2090f4u: goto label_2090f4;
        case 0x2090f8u: goto label_2090f8;
        case 0x2090fcu: goto label_2090fc;
        case 0x209100u: goto label_209100;
        case 0x209104u: goto label_209104;
        case 0x209108u: goto label_209108;
        case 0x20910cu: goto label_20910c;
        case 0x209110u: goto label_209110;
        case 0x209114u: goto label_209114;
        case 0x209118u: goto label_209118;
        case 0x20911cu: goto label_20911c;
        case 0x209120u: goto label_209120;
        case 0x209124u: goto label_209124;
        case 0x209128u: goto label_209128;
        case 0x20912cu: goto label_20912c;
        case 0x209130u: goto label_209130;
        case 0x209134u: goto label_209134;
        case 0x209138u: goto label_209138;
        case 0x20913cu: goto label_20913c;
        case 0x209140u: goto label_209140;
        case 0x209144u: goto label_209144;
        case 0x209148u: goto label_209148;
        case 0x20914cu: goto label_20914c;
        case 0x209150u: goto label_209150;
        case 0x209154u: goto label_209154;
        case 0x209158u: goto label_209158;
        case 0x20915cu: goto label_20915c;
        case 0x209160u: goto label_209160;
        case 0x209164u: goto label_209164;
        case 0x209168u: goto label_209168;
        case 0x20916cu: goto label_20916c;
        case 0x209170u: goto label_209170;
        case 0x209174u: goto label_209174;
        case 0x209178u: goto label_209178;
        case 0x20917cu: goto label_20917c;
        case 0x209180u: goto label_209180;
        case 0x209184u: goto label_209184;
        case 0x209188u: goto label_209188;
        case 0x20918cu: goto label_20918c;
        case 0x209190u: goto label_209190;
        case 0x209194u: goto label_209194;
        case 0x209198u: goto label_209198;
        case 0x20919cu: goto label_20919c;
        case 0x2091a0u: goto label_2091a0;
        case 0x2091a4u: goto label_2091a4;
        case 0x2091a8u: goto label_2091a8;
        case 0x2091acu: goto label_2091ac;
        case 0x2091b0u: goto label_2091b0;
        case 0x2091b4u: goto label_2091b4;
        case 0x2091b8u: goto label_2091b8;
        case 0x2091bcu: goto label_2091bc;
        case 0x2091c0u: goto label_2091c0;
        case 0x2091c4u: goto label_2091c4;
        case 0x2091c8u: goto label_2091c8;
        case 0x2091ccu: goto label_2091cc;
        case 0x2091d0u: goto label_2091d0;
        case 0x2091d4u: goto label_2091d4;
        case 0x2091d8u: goto label_2091d8;
        case 0x2091dcu: goto label_2091dc;
        case 0x2091e0u: goto label_2091e0;
        case 0x2091e4u: goto label_2091e4;
        case 0x2091e8u: goto label_2091e8;
        case 0x2091ecu: goto label_2091ec;
        case 0x2091f0u: goto label_2091f0;
        case 0x2091f4u: goto label_2091f4;
        case 0x2091f8u: goto label_2091f8;
        case 0x2091fcu: goto label_2091fc;
        case 0x209200u: goto label_209200;
        case 0x209204u: goto label_209204;
        case 0x209208u: goto label_209208;
        case 0x20920cu: goto label_20920c;
        case 0x209210u: goto label_209210;
        case 0x209214u: goto label_209214;
        case 0x209218u: goto label_209218;
        case 0x20921cu: goto label_20921c;
        case 0x209220u: goto label_209220;
        case 0x209224u: goto label_209224;
        case 0x209228u: goto label_209228;
        case 0x20922cu: goto label_20922c;
        case 0x209230u: goto label_209230;
        case 0x209234u: goto label_209234;
        case 0x209238u: goto label_209238;
        case 0x20923cu: goto label_20923c;
        case 0x209240u: goto label_209240;
        case 0x209244u: goto label_209244;
        case 0x209248u: goto label_209248;
        case 0x20924cu: goto label_20924c;
        case 0x209250u: goto label_209250;
        case 0x209254u: goto label_209254;
        case 0x209258u: goto label_209258;
        case 0x20925cu: goto label_20925c;
        case 0x209260u: goto label_209260;
        case 0x209264u: goto label_209264;
        case 0x209268u: goto label_209268;
        case 0x20926cu: goto label_20926c;
        case 0x209270u: goto label_209270;
        case 0x209274u: goto label_209274;
        case 0x209278u: goto label_209278;
        case 0x20927cu: goto label_20927c;
        case 0x209280u: goto label_209280;
        case 0x209284u: goto label_209284;
        case 0x209288u: goto label_209288;
        case 0x20928cu: goto label_20928c;
        case 0x209290u: goto label_209290;
        case 0x209294u: goto label_209294;
        case 0x209298u: goto label_209298;
        case 0x20929cu: goto label_20929c;
        case 0x2092a0u: goto label_2092a0;
        case 0x2092a4u: goto label_2092a4;
        case 0x2092a8u: goto label_2092a8;
        case 0x2092acu: goto label_2092ac;
        case 0x2092b0u: goto label_2092b0;
        case 0x2092b4u: goto label_2092b4;
        case 0x2092b8u: goto label_2092b8;
        case 0x2092bcu: goto label_2092bc;
        case 0x2092c0u: goto label_2092c0;
        case 0x2092c4u: goto label_2092c4;
        case 0x2092c8u: goto label_2092c8;
        case 0x2092ccu: goto label_2092cc;
        case 0x2092d0u: goto label_2092d0;
        case 0x2092d4u: goto label_2092d4;
        case 0x2092d8u: goto label_2092d8;
        case 0x2092dcu: goto label_2092dc;
        case 0x2092e0u: goto label_2092e0;
        case 0x2092e4u: goto label_2092e4;
        case 0x2092e8u: goto label_2092e8;
        case 0x2092ecu: goto label_2092ec;
        case 0x2092f0u: goto label_2092f0;
        case 0x2092f4u: goto label_2092f4;
        case 0x2092f8u: goto label_2092f8;
        case 0x2092fcu: goto label_2092fc;
        case 0x209300u: goto label_209300;
        case 0x209304u: goto label_209304;
        case 0x209308u: goto label_209308;
        case 0x20930cu: goto label_20930c;
        case 0x209310u: goto label_209310;
        case 0x209314u: goto label_209314;
        case 0x209318u: goto label_209318;
        case 0x20931cu: goto label_20931c;
        case 0x209320u: goto label_209320;
        case 0x209324u: goto label_209324;
        case 0x209328u: goto label_209328;
        case 0x20932cu: goto label_20932c;
        case 0x209330u: goto label_209330;
        case 0x209334u: goto label_209334;
        case 0x209338u: goto label_209338;
        case 0x20933cu: goto label_20933c;
        case 0x209340u: goto label_209340;
        case 0x209344u: goto label_209344;
        case 0x209348u: goto label_209348;
        case 0x20934cu: goto label_20934c;
        case 0x209350u: goto label_209350;
        case 0x209354u: goto label_209354;
        case 0x209358u: goto label_209358;
        case 0x20935cu: goto label_20935c;
        case 0x209360u: goto label_209360;
        case 0x209364u: goto label_209364;
        default: break;
    }

    ctx->pc = 0x209018u;

label_209018:
    // 0x209018: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x209018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20901c:
    // 0x20901c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_209020:
    // 0x209020: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x209020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_209024:
    // 0x209024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x209024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209028:
    // 0x209028: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x209028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20902c:
    // 0x20902c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_209030:
    // 0x209030: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x209030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_209034:
    // 0x209034: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x209034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_209038:
    // 0x209038: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x209038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_20903c:
    // 0x20903c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x20903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_209040:
    // 0x209040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_209044:
    // 0x209044: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x209044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_209048:
    // 0x209048: 0x8e740018  lw          $s4, 0x18($s3)
    ctx->pc = 0x209048u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_20904c:
    // 0x20904c: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x20904cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_209050:
    // 0x209050: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_209054:
    if (ctx->pc == 0x209054u) {
        ctx->pc = 0x209054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209050u;
        // 0x209054: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209058u;
        goto label_209058;
    }
    ctx->pc = 0x209050u;
    {
        const bool branch_taken_0x209050 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x209054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209050u;
        // 0x209054: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209050) {
            ctx->pc = 0x209078u;
            goto label_209078;
        }
    }
    ctx->pc = 0x209058u;
label_209058:
    // 0x209058: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x209058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_20905c:
    // 0x20905c: 0x40f809  jalr        $v0
label_209060:
    if (ctx->pc == 0x209060u) {
        ctx->pc = 0x209064u;
        goto label_209064;
    }
    ctx->pc = 0x20905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209064u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20905Cu, 0x209064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209064u;
label_209064:
    // 0x209064: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
label_209068:
    if (ctx->pc == 0x209068u) {
        ctx->pc = 0x209068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209064u;
        // 0x209068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20906Cu;
        goto label_20906c;
    }
    ctx->pc = 0x209064u;
    {
        const bool branch_taken_0x209064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209064u;
        // 0x209068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209064) {
            ctx->pc = 0x209338u;
            goto label_209338;
        }
    }
    ctx->pc = 0x20906Cu;
label_20906c:
    // 0x20906c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x20906cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_209070:
    // 0x209070: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x209070u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_209074:
    // 0x209074: 0x0  nop
    ctx->pc = 0x209074u;
    // NOP
label_209078:
    // 0x209078: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x209078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_20907c:
    // 0x20907c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x20907cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_209080:
    // 0x209080: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x209080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_209084:
    // 0x209084: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_209088:
    if (ctx->pc == 0x209088u) {
        ctx->pc = 0x209088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209084u;
        // 0x209088: 0x2aa00  sll         $s5, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20908Cu;
        goto label_20908c;
    }
    ctx->pc = 0x209084u;
    {
        const bool branch_taken_0x209084 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x209088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209084u;
        // 0x209088: 0x2aa00  sll         $s5, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209084) {
            ctx->pc = 0x2090A8u;
            goto label_2090a8;
        }
    }
    ctx->pc = 0x20908Cu;
label_20908c:
    // 0x20908c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_209090:
    // 0x209090: 0x40f809  jalr        $v0
label_209094:
    if (ctx->pc == 0x209094u) {
        ctx->pc = 0x209094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209090u;
        // 0x209094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209098u;
        goto label_209098;
    }
    ctx->pc = 0x209090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209098u);
        ctx->pc = 0x209094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209090u;
        // 0x209094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209090u, 0x209098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209098u;
label_209098:
    // 0x209098: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_20909c:
    if (ctx->pc == 0x20909Cu) {
        ctx->pc = 0x20909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209098u;
        // 0x20909c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090A0u;
        goto label_2090a0;
    }
    ctx->pc = 0x209098u;
    {
        const bool branch_taken_0x209098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209098u;
        // 0x20909c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209098) {
            ctx->pc = 0x209338u;
            goto label_209338;
        }
    }
    ctx->pc = 0x2090A0u;
label_2090a0:
    // 0x2090a0: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2090a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2090a4:
    // 0x2090a4: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x2090a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2090a8:
    // 0x2090a8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2090a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2090ac:
    // 0x2090ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2090acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2090b0:
    // 0x2090b0: 0x2a2a82d  daddu       $s5, $s5, $v0
    ctx->pc = 0x2090b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 2));
label_2090b4:
    // 0x2090b4: 0x66b5fffe  daddiu      $s5, $s5, -0x2
    ctx->pc = 0x2090b4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967294);
label_2090b8:
    // 0x2090b8: 0x1aa00094  blez        $s5, . + 4 + (0x94 << 2)
label_2090bc:
    if (ctx->pc == 0x2090BCu) {
        ctx->pc = 0x2090BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090B8u;
        // 0x2090bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090C0u;
        goto label_2090c0;
    }
    ctx->pc = 0x2090B8u;
    {
        const bool branch_taken_0x2090b8 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x2090BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090B8u;
        // 0x2090bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090b8) {
            ctx->pc = 0x20930Cu;
            goto label_20930c;
        }
    }
    ctx->pc = 0x2090C0u;
label_2090c0:
    // 0x2090c0: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
label_2090c4:
    if (ctx->pc == 0x2090C4u) {
        ctx->pc = 0x2090C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090C0u;
        // 0x2090c4: 0x92500000  lbu         $s0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090C8u;
        goto label_2090c8;
    }
    ctx->pc = 0x2090C0u;
    {
        const bool branch_taken_0x2090c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2090c0) {
            ctx->pc = 0x2090C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2090C0u;
            // 0x2090c4: 0x92500000  lbu         $s0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2090E8u;
            goto label_2090e8;
        }
    }
    ctx->pc = 0x2090C8u;
label_2090c8:
    // 0x2090c8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2090c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2090cc:
    // 0x2090cc: 0x40f809  jalr        $v0
label_2090d0:
    if (ctx->pc == 0x2090D0u) {
        ctx->pc = 0x2090D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090CCu;
        // 0x2090d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090D4u;
        goto label_2090d4;
    }
    ctx->pc = 0x2090CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2090D4u);
        ctx->pc = 0x2090D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090CCu;
        // 0x2090d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2090CCu, 0x2090D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2090D4u;
label_2090d4:
    // 0x2090d4: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
label_2090d8:
    if (ctx->pc == 0x2090D8u) {
        ctx->pc = 0x2090D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090D4u;
        // 0x2090d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090DCu;
        goto label_2090dc;
    }
    ctx->pc = 0x2090D4u;
    {
        const bool branch_taken_0x2090d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090D4u;
        // 0x2090d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090d4) {
            ctx->pc = 0x209338u;
            goto label_209338;
        }
    }
    ctx->pc = 0x2090DCu;
label_2090dc:
    // 0x2090dc: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2090dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2090e0:
    // 0x2090e0: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2090e4:
    // 0x2090e4: 0x92500000  lbu         $s0, 0x0($s2)
    ctx->pc = 0x2090e4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2090e8:
    // 0x2090e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2090e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2090ec:
    // 0x2090ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2090ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2090f0:
    // 0x2090f0: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x2090f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
label_2090f4:
    // 0x2090f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2090f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2090f8:
    // 0x2090f8: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x2090f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_2090fc:
    // 0x2090fc: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x2090fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_209100:
    // 0x209100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x209100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_209104:
    // 0x209104: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x209104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209108:
    // 0x209108: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x209108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20910c:
    // 0x20910c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209110:
    // 0x209110: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x209110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_209114:
    // 0x209114: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x209114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_209118:
    // 0x209118: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x209118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20911c:
    // 0x20911c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x20911cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_209120:
    // 0x209120: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x209120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209124:
    // 0x209124: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x209124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_209128:
    // 0x209128: 0x60f809  jalr        $v1
label_20912c:
    if (ctx->pc == 0x20912Cu) {
        ctx->pc = 0x20912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209128u;
        // 0x20912c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209130u;
        goto label_209130;
    }
    ctx->pc = 0x209128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209130u);
        ctx->pc = 0x20912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209128u;
        // 0x20912c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209128u, 0x209130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209130u;
label_209130:
    // 0x209130: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x209130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_209134:
    // 0x209134: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_209138:
    if (ctx->pc == 0x209138u) {
        ctx->pc = 0x209138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209134u;
        // 0x209138: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20913Cu;
        goto label_20913c;
    }
    ctx->pc = 0x209134u;
    {
        const bool branch_taken_0x209134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209134u;
        // 0x209138: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209134) {
            ctx->pc = 0x209164u;
            goto label_209164;
        }
    }
    ctx->pc = 0x20913Cu;
label_20913c:
    // 0x20913c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x20913cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209140:
    // 0x209140: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x209140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_209144:
    // 0x209144: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x209144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_209148:
    // 0x209148: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20914c:
    // 0x20914c: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x20914cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_209150:
    // 0x209150: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x209150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209154:
    // 0x209154: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_209158:
    // 0x209158: 0x40f809  jalr        $v0
label_20915c:
    if (ctx->pc == 0x20915Cu) {
        ctx->pc = 0x20915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209158u;
        // 0x20915c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209160u;
        goto label_209160;
    }
    ctx->pc = 0x209158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209160u);
        ctx->pc = 0x20915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209158u;
        // 0x20915c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209158u, 0x209160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209160u;
label_209160:
    // 0x209160: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x209160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_209164:
    // 0x209164: 0x266300a4  addiu       $v1, $s3, 0xA4
    ctx->pc = 0x209164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 164));
label_209168:
    // 0x209168: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x209168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20916c:
    // 0x20916c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209170:
    // 0x209170: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_209174:
    if (ctx->pc == 0x209174u) {
        ctx->pc = 0x209174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209170u;
        // 0x209174: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209178u;
        goto label_209178;
    }
    ctx->pc = 0x209170u;
    {
        const bool branch_taken_0x209170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x209174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209170u;
        // 0x209174: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209170) {
            ctx->pc = 0x209188u;
            goto label_209188;
        }
    }
    ctx->pc = 0x209178u;
label_209178:
    // 0x209178: 0xc087002  jal         func_21C008
label_20917c:
    if (ctx->pc == 0x20917Cu) {
        ctx->pc = 0x20917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209178u;
        // 0x20917c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209180u;
        goto label_209180;
    }
    ctx->pc = 0x209178u;
    SET_GPR_U32(ctx, 31, 0x209180u);
    ctx->pc = 0x20917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209178u;
    // 0x20917c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21C008u, 0x209178u, 0x209180u)) {
        return;
    }
    ctx->pc = 0x209180u;
label_209180:
    // 0x209180: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_209184:
    // 0x209184: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x209184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_209188:
    // 0x209188: 0x8e1e0000  lw          $fp, 0x0($s0)
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20918c:
    // 0x20918c: 0x245756b8  addiu       $s7, $v0, 0x56B8
    ctx->pc = 0x20918cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 22200));
label_209190:
    // 0x209190: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x209190u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209194:
    // 0x209194: 0x0  nop
    ctx->pc = 0x209194u;
    // NOP
label_209198:
    // 0x209198: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x209198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20919c:
    // 0x20919c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_2091a0:
    if (ctx->pc == 0x2091A0u) {
        ctx->pc = 0x2091A4u;
        goto label_2091a4;
    }
    ctx->pc = 0x20919Cu;
    {
        const bool branch_taken_0x20919c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20919c) {
            ctx->pc = 0x209210u;
            goto label_209210;
        }
    }
    ctx->pc = 0x2091A4u;
label_2091a4:
    // 0x2091a4: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
label_2091a8:
    if (ctx->pc == 0x2091A8u) {
        ctx->pc = 0x2091A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091A4u;
        // 0x2091a8: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091ACu;
        goto label_2091ac;
    }
    ctx->pc = 0x2091A4u;
    {
        const bool branch_taken_0x2091a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2091a4) {
            ctx->pc = 0x2091A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091A4u;
            // 0x2091a8: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2091D0u;
            goto label_2091d0;
        }
    }
    ctx->pc = 0x2091ACu;
label_2091ac:
    // 0x2091ac: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2091acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2091b0:
    // 0x2091b0: 0x40f809  jalr        $v0
label_2091b4:
    if (ctx->pc == 0x2091B4u) {
        ctx->pc = 0x2091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091B0u;
        // 0x2091b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091B8u;
        goto label_2091b8;
    }
    ctx->pc = 0x2091B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2091B8u);
        ctx->pc = 0x2091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091B0u;
        // 0x2091b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2091B0u, 0x2091B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2091B8u;
label_2091b8:
    // 0x2091b8: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_2091bc:
    if (ctx->pc == 0x2091BCu) {
        ctx->pc = 0x2091BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091B8u;
        // 0x2091bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091C0u;
        goto label_2091c0;
    }
    ctx->pc = 0x2091B8u;
    {
        const bool branch_taken_0x2091b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2091BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091B8u;
        // 0x2091bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091b8) {
            ctx->pc = 0x209338u;
            goto label_209338;
        }
    }
    ctx->pc = 0x2091C0u;
label_2091c0:
    // 0x2091c0: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2091c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2091c4:
    // 0x2091c4: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x2091c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2091c8:
    // 0x2091c8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2091c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2091cc:
    // 0x2091cc: 0x0  nop
    ctx->pc = 0x2091ccu;
    // NOP
label_2091d0:
    // 0x2091d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2091d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2091d4:
    // 0x2091d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2091d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2091d8:
    // 0x2091d8: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_2091dc:
    if (ctx->pc == 0x2091DCu) {
        ctx->pc = 0x2091DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091D8u;
        // 0x2091dc: 0x28200  sll         $s0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091E0u;
        goto label_2091e0;
    }
    ctx->pc = 0x2091D8u;
    {
        const bool branch_taken_0x2091d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2091DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091D8u;
        // 0x2091dc: 0x28200  sll         $s0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091d8) {
            ctx->pc = 0x2091FCu;
            goto label_2091fc;
        }
    }
    ctx->pc = 0x2091E0u;
label_2091e0:
    // 0x2091e0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2091e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2091e4:
    // 0x2091e4: 0x40f809  jalr        $v0
label_2091e8:
    if (ctx->pc == 0x2091E8u) {
        ctx->pc = 0x2091E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091E4u;
        // 0x2091e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091ECu;
        goto label_2091ec;
    }
    ctx->pc = 0x2091E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2091ECu);
        ctx->pc = 0x2091E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091E4u;
        // 0x2091e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2091E4u, 0x2091ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2091ECu;
label_2091ec:
    // 0x2091ec: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_2091f0:
    if (ctx->pc == 0x2091F0u) {
        ctx->pc = 0x2091F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091ECu;
        // 0x2091f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091F4u;
        goto label_2091f4;
    }
    ctx->pc = 0x2091ECu;
    {
        const bool branch_taken_0x2091ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2091F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091ECu;
        // 0x2091f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091ec) {
            ctx->pc = 0x209338u;
            goto label_209338;
        }
    }
    ctx->pc = 0x2091F4u;
label_2091f4:
    // 0x2091f4: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2091f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2091f8:
    // 0x2091f8: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x2091f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2091fc:
    // 0x2091fc: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2091fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_209200:
    // 0x209200: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x209200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_209204:
    // 0x209204: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x209204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_209208:
    // 0x209208: 0x1000000f  b           . + 4 + (0xF << 2)
label_20920c:
    if (ctx->pc == 0x20920Cu) {
        ctx->pc = 0x20920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209208u;
        // 0x20920c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209210u;
        goto label_209210;
    }
    ctx->pc = 0x209208u;
    {
        const bool branch_taken_0x209208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209208u;
        // 0x20920c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209208) {
            ctx->pc = 0x209248u;
            goto label_209248;
        }
    }
    ctx->pc = 0x209210u;
label_209210:
    // 0x209210: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
label_209214:
    if (ctx->pc == 0x209214u) {
        ctx->pc = 0x209214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209210u;
        // 0x209214: 0x92500000  lbu         $s0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209218u;
        goto label_209218;
    }
    ctx->pc = 0x209210u;
    {
        const bool branch_taken_0x209210 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x209210) {
            ctx->pc = 0x209214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209210u;
            // 0x209214: 0x92500000  lbu         $s0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209240u;
            goto label_209240;
        }
    }
    ctx->pc = 0x209218u;
label_209218:
    // 0x209218: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x209218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_20921c:
    // 0x20921c: 0x40f809  jalr        $v0
label_209220:
    if (ctx->pc == 0x209220u) {
        ctx->pc = 0x209220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20921Cu;
        // 0x209220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209224u;
        goto label_209224;
    }
    ctx->pc = 0x20921Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209224u);
        ctx->pc = 0x209220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20921Cu;
        // 0x209220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20921Cu, 0x209224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209224u;
label_209224:
    // 0x209224: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_209228:
    if (ctx->pc == 0x209228u) {
        ctx->pc = 0x209228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209224u;
        // 0x209228: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20922Cu;
        goto label_20922c;
    }
    ctx->pc = 0x209224u;
    {
        const bool branch_taken_0x209224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209224) {
            ctx->pc = 0x209228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209224u;
            // 0x209228: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209238u;
            goto label_209238;
        }
    }
    ctx->pc = 0x20922Cu;
label_20922c:
    // 0x20922c: 0x10000042  b           . + 4 + (0x42 << 2)
label_209230:
    if (ctx->pc == 0x209230u) {
        ctx->pc = 0x209230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20922Cu;
        // 0x209230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209234u;
        goto label_209234;
    }
    ctx->pc = 0x20922Cu;
    {
        const bool branch_taken_0x20922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20922Cu;
        // 0x209230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20922c) {
            ctx->pc = 0x209338u;
            goto label_209338;
        }
    }
    ctx->pc = 0x209234u;
label_209234:
    // 0x209234: 0x0  nop
    ctx->pc = 0x209234u;
    // NOP
label_209238:
    // 0x209238: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x209238u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_20923c:
    // 0x20923c: 0x92500000  lbu         $s0, 0x0($s2)
    ctx->pc = 0x20923cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_209240:
    // 0x209240: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x209240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_209244:
    // 0x209244: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x209244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_209248:
    // 0x209248: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x209248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20924c:
    // 0x20924c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x20924cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_209250:
    // 0x209250: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x209250u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_209254:
    // 0x209254: 0x2ac30040  slti        $v1, $s6, 0x40
    ctx->pc = 0x209254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)64) ? 1 : 0);
label_209258:
    // 0x209258: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x209258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20925c:
    // 0x20925c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x20925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_209260:
    // 0x209260: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_209264:
    if (ctx->pc == 0x209264u) {
        ctx->pc = 0x209264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209260u;
        // 0x209264: 0xa4500000  sh          $s0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209268u;
        goto label_209268;
    }
    ctx->pc = 0x209260u;
    {
        const bool branch_taken_0x209260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209260u;
        // 0x209264: 0xa4500000  sh          $s0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209260) {
            ctx->pc = 0x209198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209198;
        }
    }
    ctx->pc = 0x209268u;
label_209268:
    // 0x209268: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x209268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20926c:
    // 0x20926c: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x20926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_209270:
    // 0x209270: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x209270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_209274:
    // 0x209274: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_209278:
    if (ctx->pc == 0x209278u) {
        ctx->pc = 0x209278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209274u;
        // 0x209278: 0x66b5ffbf  daddiu      $s5, $s5, -0x41 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967231);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20927Cu;
        goto label_20927c;
    }
    ctx->pc = 0x209274u;
    {
        const bool branch_taken_0x209274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209274u;
        // 0x209278: 0x66b5ffbf  daddiu      $s5, $s5, -0x41 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967231);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209274) {
            ctx->pc = 0x2092F8u;
            goto label_2092f8;
        }
    }
    ctx->pc = 0x20927Cu;
label_20927c:
    // 0x20927c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x20927cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_209280:
    // 0x209280: 0x2417005d  addiu       $s7, $zero, 0x5D
    ctx->pc = 0x209280u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_209284:
    // 0x209284: 0x24160038  addiu       $s6, $zero, 0x38
    ctx->pc = 0x209284u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_209288:
    // 0x209288: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x209288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20928c:
    // 0x20928c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_209290:
    // 0x209290: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x209290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_209294:
    // 0x209294: 0x24e60018  addiu       $a2, $a3, 0x18
    ctx->pc = 0x209294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_209298:
    // 0x209298: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x209298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_20929c:
    // 0x20929c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x20929cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2092a0:
    // 0x2092a0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2092a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2092a4:
    // 0x2092a4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2092a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2092a8:
    // 0x2092a8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2092a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_2092ac:
    // 0x2092ac: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x2092acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2092b0:
    // 0x2092b0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2092b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_2092b4:
    // 0x2092b4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x2092b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2092b8:
    // 0x2092b8: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2092b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_2092bc:
    // 0x2092bc: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x2092bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2092c0:
    // 0x2092c0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2092c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2092c4:
    // 0x2092c4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2092c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2092c8:
    // 0x2092c8: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x2092c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_2092cc:
    // 0x2092cc: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2092ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_2092d0:
    // 0x2092d0: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x2092d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_2092d4:
    // 0x2092d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2092d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2092d8:
    // 0x2092d8: 0xac770014  sw          $s7, 0x14($v1)
    ctx->pc = 0x2092d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 23));
label_2092dc:
    // 0x2092dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2092dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2092e0:
    // 0x2092e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2092e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2092e4:
    // 0x2092e4: 0x60f809  jalr        $v1
label_2092e8:
    if (ctx->pc == 0x2092E8u) {
        ctx->pc = 0x2092E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092E4u;
        // 0x2092e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092ECu;
        goto label_2092ec;
    }
    ctx->pc = 0x2092E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2092ECu);
        ctx->pc = 0x2092E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092E4u;
        // 0x2092e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2092E4u, 0x2092ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2092ECu;
label_2092ec:
    // 0x2092ec: 0x26d6fff8  addiu       $s6, $s6, -0x8
    ctx->pc = 0x2092ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967288));
label_2092f0:
    // 0x2092f0: 0x6c1ffe5  bgez        $s6, . + 4 + (-0x1B << 2)
label_2092f4:
    if (ctx->pc == 0x2092F4u) {
        ctx->pc = 0x2092F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092F0u;
        // 0x2092f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092F8u;
        goto label_2092f8;
    }
    ctx->pc = 0x2092F0u;
    {
        const bool branch_taken_0x2092f0 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x2092F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092F0u;
        // 0x2092f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092f0) {
            ctx->pc = 0x209288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209288;
        }
    }
    ctx->pc = 0x2092F8u;
label_2092f8:
    // 0x2092f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2092f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2092fc:
    // 0x2092fc: 0x66a2ffc0  daddiu      $v0, $s5, -0x40
    ctx->pc = 0x2092fcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967232);
label_209300:
    // 0x209300: 0x43a80b  movn        $s5, $v0, $v1
    ctx->pc = 0x209300u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
label_209304:
    // 0x209304: 0x1ea0ff6e  bgtz        $s5, . + 4 + (-0x92 << 2)
label_209308:
    if (ctx->pc == 0x209308u) {
        ctx->pc = 0x20930Cu;
        goto label_20930c;
    }
    ctx->pc = 0x209304u;
    {
        const bool branch_taken_0x209304 = (GPR_S64(ctx, 21) > 0);
        if (branch_taken_0x209304) {
            ctx->pc = 0x2090C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2090c0;
        }
    }
    ctx->pc = 0x20930Cu;
label_20930c:
    // 0x20930c: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_209310:
    if (ctx->pc == 0x209310u) {
        ctx->pc = 0x209310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20930Cu;
        // 0x209310: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209314u;
        goto label_209314;
    }
    ctx->pc = 0x20930Cu;
    {
        const bool branch_taken_0x20930c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x209310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20930Cu;
        // 0x209310: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20930c) {
            ctx->pc = 0x20932Cu;
            goto label_20932c;
        }
    }
    ctx->pc = 0x209314u;
label_209314:
    // 0x209314: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x209314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209318:
    // 0x209318: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x209318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20931c:
    // 0x20931c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209320:
    // 0x209320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x209320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_209324:
    // 0x209324: 0x60f809  jalr        $v1
label_209328:
    if (ctx->pc == 0x209328u) {
        ctx->pc = 0x209328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209324u;
        // 0x209328: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20932Cu;
        goto label_20932c;
    }
    ctx->pc = 0x209324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20932Cu);
        ctx->pc = 0x209328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209324u;
        // 0x209328: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209324u, 0x20932Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20932Cu;
label_20932c:
    // 0x20932c: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x20932cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
label_209330:
    // 0x209330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209334:
    // 0x209334: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x209334u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_209338:
    // 0x209338: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x209338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20933c:
    // 0x20933c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20933cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_209340:
    // 0x209340: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x209340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_209344:
    // 0x209344: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x209344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_209348:
    // 0x209348: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x209348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20934c:
    // 0x20934c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20934cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_209350:
    // 0x209350: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x209350u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_209354:
    // 0x209354: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x209354u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209358:
    // 0x209358: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x209358u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20935c:
    // 0x20935c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20935cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_209360:
    // 0x209360: 0x3e00008  jr          $ra
label_209364:
    if (ctx->pc == 0x209364u) {
        ctx->pc = 0x209364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209360u;
        // 0x209364: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209368u;
        goto label_fallthrough_0x209360;
    }
    ctx->pc = 0x209360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209360u;
        // 0x209364: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209360:
    ctx->pc = 0x209368u;
}
