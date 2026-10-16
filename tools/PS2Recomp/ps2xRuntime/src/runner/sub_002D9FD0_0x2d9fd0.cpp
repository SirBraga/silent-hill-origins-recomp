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

// Function: sub_002D9FD0
// Address: 0x2d9fd0 - 0x2da2e0
void sub_002D9FD0_0x2d9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9FD0_0x2d9fd0");
#endif

    switch (ctx->pc) {
        case 0x2d9fd0u: goto label_2d9fd0;
        case 0x2d9fd4u: goto label_2d9fd4;
        case 0x2d9fd8u: goto label_2d9fd8;
        case 0x2d9fdcu: goto label_2d9fdc;
        case 0x2d9fe0u: goto label_2d9fe0;
        case 0x2d9fe4u: goto label_2d9fe4;
        case 0x2d9fe8u: goto label_2d9fe8;
        case 0x2d9fecu: goto label_2d9fec;
        case 0x2d9ff0u: goto label_2d9ff0;
        case 0x2d9ff4u: goto label_2d9ff4;
        case 0x2d9ff8u: goto label_2d9ff8;
        case 0x2d9ffcu: goto label_2d9ffc;
        case 0x2da000u: goto label_2da000;
        case 0x2da004u: goto label_2da004;
        case 0x2da008u: goto label_2da008;
        case 0x2da00cu: goto label_2da00c;
        case 0x2da010u: goto label_2da010;
        case 0x2da014u: goto label_2da014;
        case 0x2da018u: goto label_2da018;
        case 0x2da01cu: goto label_2da01c;
        case 0x2da020u: goto label_2da020;
        case 0x2da024u: goto label_2da024;
        case 0x2da028u: goto label_2da028;
        case 0x2da02cu: goto label_2da02c;
        case 0x2da030u: goto label_2da030;
        case 0x2da034u: goto label_2da034;
        case 0x2da038u: goto label_2da038;
        case 0x2da03cu: goto label_2da03c;
        case 0x2da040u: goto label_2da040;
        case 0x2da044u: goto label_2da044;
        case 0x2da048u: goto label_2da048;
        case 0x2da04cu: goto label_2da04c;
        case 0x2da050u: goto label_2da050;
        case 0x2da054u: goto label_2da054;
        case 0x2da058u: goto label_2da058;
        case 0x2da05cu: goto label_2da05c;
        case 0x2da060u: goto label_2da060;
        case 0x2da064u: goto label_2da064;
        case 0x2da068u: goto label_2da068;
        case 0x2da06cu: goto label_2da06c;
        case 0x2da070u: goto label_2da070;
        case 0x2da074u: goto label_2da074;
        case 0x2da078u: goto label_2da078;
        case 0x2da07cu: goto label_2da07c;
        case 0x2da080u: goto label_2da080;
        case 0x2da084u: goto label_2da084;
        case 0x2da088u: goto label_2da088;
        case 0x2da08cu: goto label_2da08c;
        case 0x2da090u: goto label_2da090;
        case 0x2da094u: goto label_2da094;
        case 0x2da098u: goto label_2da098;
        case 0x2da09cu: goto label_2da09c;
        case 0x2da0a0u: goto label_2da0a0;
        case 0x2da0a4u: goto label_2da0a4;
        case 0x2da0a8u: goto label_2da0a8;
        case 0x2da0acu: goto label_2da0ac;
        case 0x2da0b0u: goto label_2da0b0;
        case 0x2da0b4u: goto label_2da0b4;
        case 0x2da0b8u: goto label_2da0b8;
        case 0x2da0bcu: goto label_2da0bc;
        case 0x2da0c0u: goto label_2da0c0;
        case 0x2da0c4u: goto label_2da0c4;
        case 0x2da0c8u: goto label_2da0c8;
        case 0x2da0ccu: goto label_2da0cc;
        case 0x2da0d0u: goto label_2da0d0;
        case 0x2da0d4u: goto label_2da0d4;
        case 0x2da0d8u: goto label_2da0d8;
        case 0x2da0dcu: goto label_2da0dc;
        case 0x2da0e0u: goto label_2da0e0;
        case 0x2da0e4u: goto label_2da0e4;
        case 0x2da0e8u: goto label_2da0e8;
        case 0x2da0ecu: goto label_2da0ec;
        case 0x2da0f0u: goto label_2da0f0;
        case 0x2da0f4u: goto label_2da0f4;
        case 0x2da0f8u: goto label_2da0f8;
        case 0x2da0fcu: goto label_2da0fc;
        case 0x2da100u: goto label_2da100;
        case 0x2da104u: goto label_2da104;
        case 0x2da108u: goto label_2da108;
        case 0x2da10cu: goto label_2da10c;
        case 0x2da110u: goto label_2da110;
        case 0x2da114u: goto label_2da114;
        case 0x2da118u: goto label_2da118;
        case 0x2da11cu: goto label_2da11c;
        case 0x2da120u: goto label_2da120;
        case 0x2da124u: goto label_2da124;
        case 0x2da128u: goto label_2da128;
        case 0x2da12cu: goto label_2da12c;
        case 0x2da130u: goto label_2da130;
        case 0x2da134u: goto label_2da134;
        case 0x2da138u: goto label_2da138;
        case 0x2da13cu: goto label_2da13c;
        case 0x2da140u: goto label_2da140;
        case 0x2da144u: goto label_2da144;
        case 0x2da148u: goto label_2da148;
        case 0x2da14cu: goto label_2da14c;
        case 0x2da150u: goto label_2da150;
        case 0x2da154u: goto label_2da154;
        case 0x2da158u: goto label_2da158;
        case 0x2da15cu: goto label_2da15c;
        case 0x2da160u: goto label_2da160;
        case 0x2da164u: goto label_2da164;
        case 0x2da168u: goto label_2da168;
        case 0x2da16cu: goto label_2da16c;
        case 0x2da170u: goto label_2da170;
        case 0x2da174u: goto label_2da174;
        case 0x2da178u: goto label_2da178;
        case 0x2da17cu: goto label_2da17c;
        case 0x2da180u: goto label_2da180;
        case 0x2da184u: goto label_2da184;
        case 0x2da188u: goto label_2da188;
        case 0x2da18cu: goto label_2da18c;
        case 0x2da190u: goto label_2da190;
        case 0x2da194u: goto label_2da194;
        case 0x2da198u: goto label_2da198;
        case 0x2da19cu: goto label_2da19c;
        case 0x2da1a0u: goto label_2da1a0;
        case 0x2da1a4u: goto label_2da1a4;
        case 0x2da1a8u: goto label_2da1a8;
        case 0x2da1acu: goto label_2da1ac;
        case 0x2da1b0u: goto label_2da1b0;
        case 0x2da1b4u: goto label_2da1b4;
        case 0x2da1b8u: goto label_2da1b8;
        case 0x2da1bcu: goto label_2da1bc;
        case 0x2da1c0u: goto label_2da1c0;
        case 0x2da1c4u: goto label_2da1c4;
        case 0x2da1c8u: goto label_2da1c8;
        case 0x2da1ccu: goto label_2da1cc;
        case 0x2da1d0u: goto label_2da1d0;
        case 0x2da1d4u: goto label_2da1d4;
        case 0x2da1d8u: goto label_2da1d8;
        case 0x2da1dcu: goto label_2da1dc;
        case 0x2da1e0u: goto label_2da1e0;
        case 0x2da1e4u: goto label_2da1e4;
        case 0x2da1e8u: goto label_2da1e8;
        case 0x2da1ecu: goto label_2da1ec;
        case 0x2da1f0u: goto label_2da1f0;
        case 0x2da1f4u: goto label_2da1f4;
        case 0x2da1f8u: goto label_2da1f8;
        case 0x2da1fcu: goto label_2da1fc;
        case 0x2da200u: goto label_2da200;
        case 0x2da204u: goto label_2da204;
        case 0x2da208u: goto label_2da208;
        case 0x2da20cu: goto label_2da20c;
        case 0x2da210u: goto label_2da210;
        case 0x2da214u: goto label_2da214;
        case 0x2da218u: goto label_2da218;
        case 0x2da21cu: goto label_2da21c;
        case 0x2da220u: goto label_2da220;
        case 0x2da224u: goto label_2da224;
        case 0x2da228u: goto label_2da228;
        case 0x2da22cu: goto label_2da22c;
        case 0x2da230u: goto label_2da230;
        case 0x2da234u: goto label_2da234;
        case 0x2da238u: goto label_2da238;
        case 0x2da23cu: goto label_2da23c;
        case 0x2da240u: goto label_2da240;
        case 0x2da244u: goto label_2da244;
        case 0x2da248u: goto label_2da248;
        case 0x2da24cu: goto label_2da24c;
        case 0x2da250u: goto label_2da250;
        case 0x2da254u: goto label_2da254;
        case 0x2da258u: goto label_2da258;
        case 0x2da25cu: goto label_2da25c;
        case 0x2da260u: goto label_2da260;
        case 0x2da264u: goto label_2da264;
        case 0x2da268u: goto label_2da268;
        case 0x2da26cu: goto label_2da26c;
        case 0x2da270u: goto label_2da270;
        case 0x2da274u: goto label_2da274;
        case 0x2da278u: goto label_2da278;
        case 0x2da27cu: goto label_2da27c;
        case 0x2da280u: goto label_2da280;
        case 0x2da284u: goto label_2da284;
        case 0x2da288u: goto label_2da288;
        case 0x2da28cu: goto label_2da28c;
        case 0x2da290u: goto label_2da290;
        case 0x2da294u: goto label_2da294;
        case 0x2da298u: goto label_2da298;
        case 0x2da29cu: goto label_2da29c;
        case 0x2da2a0u: goto label_2da2a0;
        case 0x2da2a4u: goto label_2da2a4;
        case 0x2da2a8u: goto label_2da2a8;
        case 0x2da2acu: goto label_2da2ac;
        case 0x2da2b0u: goto label_2da2b0;
        case 0x2da2b4u: goto label_2da2b4;
        case 0x2da2b8u: goto label_2da2b8;
        case 0x2da2bcu: goto label_2da2bc;
        case 0x2da2c0u: goto label_2da2c0;
        case 0x2da2c4u: goto label_2da2c4;
        case 0x2da2c8u: goto label_2da2c8;
        case 0x2da2ccu: goto label_2da2cc;
        case 0x2da2d0u: goto label_2da2d0;
        case 0x2da2d4u: goto label_2da2d4;
        case 0x2da2d8u: goto label_2da2d8;
        case 0x2da2dcu: goto label_2da2dc;
        default: break;
    }

    ctx->pc = 0x2d9fd0u;

label_2d9fd0:
    // 0x2d9fd0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x2d9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_2d9fd4:
    // 0x2d9fd4: 0x30c60007  andi        $a2, $a2, 0x7
    ctx->pc = 0x2d9fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_2d9fd8:
    // 0x2d9fd8: 0x7fb002b0  sq          $s0, 0x2B0($sp)
    ctx->pc = 0x2d9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 16));
label_2d9fdc:
    // 0x2d9fdc: 0x7fb102a0  sq          $s1, 0x2A0($sp)
    ctx->pc = 0x2d9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 17));
label_2d9fe0:
    // 0x2d9fe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d9fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9fe4:
    // 0x2d9fe4: 0x7fb30280  sq          $s3, 0x280($sp)
    ctx->pc = 0x2d9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 19));
label_2d9fe8:
    // 0x2d9fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d9fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9fec:
    // 0x2d9fec: 0x7fb40270  sq          $s4, 0x270($sp)
    ctx->pc = 0x2d9fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 20));
label_2d9ff0:
    // 0x2d9ff0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d9ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ff4:
    // 0x2d9ff4: 0x7fb70240  sq          $s7, 0x240($sp)
    ctx->pc = 0x2d9ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 23));
label_2d9ff8:
    // 0x2d9ff8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9ff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ffc:
    // 0x2d9ffc: 0x7fbe0230  sq          $fp, 0x230($sp)
    ctx->pc = 0x2d9ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 30));
label_2da000:
    // 0x2da000: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2da000u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2da004:
    // 0x2da004: 0x8f828b54  lw          $v0, -0x74AC($gp)
    ctx->pc = 0x2da004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
label_2da008:
    // 0x2da008: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2da008u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2da00c:
    // 0x2da00c: 0x7fb20290  sq          $s2, 0x290($sp)
    ctx->pc = 0x2da00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 18));
label_2da010:
    // 0x2da010: 0x7fb50260  sq          $s5, 0x260($sp)
    ctx->pc = 0x2da010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 21));
label_2da014:
    // 0x2da014: 0x7fb60250  sq          $s6, 0x250($sp)
    ctx->pc = 0x2da014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 22));
label_2da018:
    // 0x2da018: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x2da018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
label_2da01c:
    // 0x2da01c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2da020:
    if (ctx->pc == 0x2DA020u) {
        ctx->pc = 0x2DA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA01Cu;
        // 0x2da020: 0xafa60214  sw          $a2, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA024u;
        goto label_2da024;
    }
    ctx->pc = 0x2DA01Cu;
    {
        const bool branch_taken_0x2da01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA01Cu;
        // 0x2da020: 0xafa60214  sw          $a2, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da01c) {
            ctx->pc = 0x2DA04Cu;
            goto label_2da04c;
        }
    }
    ctx->pc = 0x2DA024u;
label_2da024:
    // 0x2da024: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
label_2da028:
    if (ctx->pc == 0x2DA028u) {
        ctx->pc = 0x2DA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA024u;
        // 0x2da028: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA02Cu;
        goto label_2da02c;
    }
    ctx->pc = 0x2DA024u;
    {
        const bool branch_taken_0x2da024 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da024) {
            ctx->pc = 0x2DA028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA024u;
            // 0x2da028: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA03Cu;
            goto label_2da03c;
        }
    }
    ctx->pc = 0x2DA02Cu;
label_2da02c:
    // 0x2da02c: 0xc0b6a96  jal         func_2DAA58
label_2da030:
    if (ctx->pc == 0x2DA030u) {
        ctx->pc = 0x2DA034u;
        goto label_2da034;
    }
    ctx->pc = 0x2DA02Cu;
    SET_GPR_U32(ctx, 31, 0x2DA034u);
    ctx->pc = 0x2DAA58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DAA58u, 0x2DA02Cu, 0x2DA034u)) {
        return;
    }
    ctx->pc = 0x2DA034u;
label_2da034:
    // 0x2da034: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da038:
    // 0x2da038: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2da038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2da03c:
    // 0x2da03c: 0xc0b8fc0  jal         func_2E3F00
label_2da040:
    if (ctx->pc == 0x2DA040u) {
        ctx->pc = 0x2DA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA03Cu;
        // 0x2da040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA044u;
        goto label_2da044;
    }
    ctx->pc = 0x2DA03Cu;
    SET_GPR_U32(ctx, 31, 0x2DA044u);
    ctx->pc = 0x2DA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA03Cu;
    // 0x2da040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3F00u, 0x2DA03Cu, 0x2DA044u)) {
        return;
    }
    ctx->pc = 0x2DA044u;
label_2da044:
    // 0x2da044: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_2da048:
    if (ctx->pc == 0x2DA048u) {
        ctx->pc = 0x2DA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA044u;
        // 0x2da048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA04Cu;
        goto label_2da04c;
    }
    ctx->pc = 0x2DA044u;
    {
        const bool branch_taken_0x2da044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA044u;
        // 0x2da048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da044) {
            ctx->pc = 0x2DA2ACu;
            goto label_2da2ac;
        }
    }
    ctx->pc = 0x2DA04Cu;
label_2da04c:
    // 0x2da04c: 0x16800014  bnez        $s4, . + 4 + (0x14 << 2)
label_2da050:
    if (ctx->pc == 0x2DA050u) {
        ctx->pc = 0x2DA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA04Cu;
        // 0x2da050: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA054u;
        goto label_2da054;
    }
    ctx->pc = 0x2DA04Cu;
    {
        const bool branch_taken_0x2da04c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA04Cu;
        // 0x2da050: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da04c) {
            ctx->pc = 0x2DA0A0u;
            goto label_2da0a0;
        }
    }
    ctx->pc = 0x2DA054u;
label_2da054:
    // 0x2da054: 0x96220044  lhu         $v0, 0x44($s1)
    ctx->pc = 0x2da054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
label_2da058:
    // 0x2da058: 0x2c420201  sltiu       $v0, $v0, 0x201
    ctx->pc = 0x2da058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
label_2da05c:
    // 0x2da05c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2da060:
    if (ctx->pc == 0x2DA060u) {
        ctx->pc = 0x2DA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA05Cu;
        // 0x2da060: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA064u;
        goto label_2da064;
    }
    ctx->pc = 0x2DA05Cu;
    {
        const bool branch_taken_0x2da05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA05Cu;
        // 0x2da060: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da05c) {
            ctx->pc = 0x2DA080u;
            goto label_2da080;
        }
    }
    ctx->pc = 0x2DA064u;
label_2da064:
    // 0x2da064: 0x96240044  lhu         $a0, 0x44($s1)
    ctx->pc = 0x2da064u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
label_2da068:
    // 0x2da068: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2da068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2da06c:
    // 0x2da06c: 0xc0b7076  jal         func_2DC1D8
label_2da070:
    if (ctx->pc == 0x2DA070u) {
        ctx->pc = 0x2DA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA06Cu;
        // 0x2da070: 0x34a5080b  ori         $a1, $a1, 0x80B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2059);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA074u;
        goto label_2da074;
    }
    ctx->pc = 0x2DA06Cu;
    SET_GPR_U32(ctx, 31, 0x2DA074u);
    ctx->pc = 0x2DA070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA06Cu;
    // 0x2da070: 0x34a5080b  ori         $a1, $a1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2DA06Cu, 0x2DA074u)) {
        return;
    }
    ctx->pc = 0x2DA074u;
label_2da074:
    // 0x2da074: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2da074u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da078:
    // 0x2da078: 0x12c0007d  beqz        $s6, . + 4 + (0x7D << 2)
label_2da07c:
    if (ctx->pc == 0x2DA07Cu) {
        ctx->pc = 0x2DA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA078u;
        // 0x2da07c: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA080u;
        goto label_2da080;
    }
    ctx->pc = 0x2DA078u;
    {
        const bool branch_taken_0x2da078 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA078u;
        // 0x2da07c: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da078) {
            ctx->pc = 0x2DA270u;
            goto label_2da270;
        }
    }
    ctx->pc = 0x2DA080u;
label_2da080:
    // 0x2da080: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2da080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2da084:
    // 0x2da084: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2da088:
    if (ctx->pc == 0x2DA088u) {
        ctx->pc = 0x2DA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA084u;
        // 0x2da088: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA08Cu;
        goto label_2da08c;
    }
    ctx->pc = 0x2DA084u;
    {
        const bool branch_taken_0x2da084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da084) {
            ctx->pc = 0x2DA088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA084u;
            // 0x2da088: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA0A0u;
            goto label_2da0a0;
        }
    }
    ctx->pc = 0x2DA08Cu;
label_2da08c:
    // 0x2da08c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2da08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da090:
    // 0x2da090: 0x40f809  jalr        $v0
label_2da094:
    if (ctx->pc == 0x2DA094u) {
        ctx->pc = 0x2DA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA090u;
        // 0x2da094: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA098u;
        goto label_2da098;
    }
    ctx->pc = 0x2DA090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA098u);
        ctx->pc = 0x2DA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA090u;
        // 0x2da094: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA090u, 0x2DA098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA098u;
label_2da098:
    // 0x2da098: 0x10000002  b           . + 4 + (0x2 << 2)
label_2da09c:
    if (ctx->pc == 0x2DA09Cu) {
        ctx->pc = 0x2DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA098u;
        // 0x2da09c: 0x8fa50214  lw          $a1, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA0A0u;
        goto label_2da0a0;
    }
    ctx->pc = 0x2DA098u;
    {
        const bool branch_taken_0x2da098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA098u;
        // 0x2da09c: 0x8fa50214  lw          $a1, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da098) {
            ctx->pc = 0x2DA0A4u;
            goto label_2da0a4;
        }
    }
    ctx->pc = 0x2DA0A0u;
label_2da0a0:
    // 0x2da0a0: 0x8fa50214  lw          $a1, 0x214($sp)
    ctx->pc = 0x2da0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_2da0a4:
    // 0x2da0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da0a8:
    // 0x2da0a8: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x2da0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2da0ac:
    // 0x2da0ac: 0xc0b6a00  jal         func_2DA800
label_2da0b0:
    if (ctx->pc == 0x2DA0B0u) {
        ctx->pc = 0x2DA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0ACu;
        // 0x2da0b0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA0B4u;
        goto label_2da0b4;
    }
    ctx->pc = 0x2DA0ACu;
    SET_GPR_U32(ctx, 31, 0x2DA0B4u);
    ctx->pc = 0x2DA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA0ACu;
    // 0x2da0b0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA800u, 0x2DA0ACu, 0x2DA0B4u)) {
        return;
    }
    ctx->pc = 0x2DA0B4u;
label_2da0b4:
    // 0x2da0b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2da0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2da0b8:
    // 0x2da0b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2da0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da0bc:
    // 0x2da0bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2da0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da0c0:
    // 0x2da0c0: 0x2468efc0  addiu       $t0, $v1, -0x1040
    ctx->pc = 0x2da0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963136));
label_2da0c4:
    // 0x2da0c4: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x2da0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2da0c8:
    // 0x2da0c8: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x2da0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2da0cc:
    // 0x2da0cc: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x2da0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2da0d0:
    // 0x2da0d0: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x2da0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2da0d4:
    // 0x2da0d4: 0xb3a20207  sdl         $v0, 0x207($sp)
    ctx->pc = 0x2da0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2da0d8:
    // 0x2da0d8: 0xb7a20200  sdr         $v0, 0x200($sp)
    ctx->pc = 0x2da0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2da0dc:
    // 0x2da0dc: 0xb3a6020f  sdl         $a2, 0x20F($sp)
    ctx->pc = 0x2da0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2da0e0:
    // 0x2da0e0: 0xb7a60208  sdr         $a2, 0x208($sp)
    ctx->pc = 0x2da0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2da0e4:
    // 0x2da0e4: 0xc0b7d14  jal         func_2DF450
label_2da0e8:
    if (ctx->pc == 0x2DA0E8u) {
        ctx->pc = 0x2DA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0E4u;
        // 0x2da0e8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA0ECu;
        goto label_2da0ec;
    }
    ctx->pc = 0x2DA0E4u;
    SET_GPR_U32(ctx, 31, 0x2DA0ECu);
    ctx->pc = 0x2DA0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA0E4u;
    // 0x2da0e8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DA0E4u, 0x2DA0ECu)) {
        return;
    }
    ctx->pc = 0x2DA0ECu;
label_2da0ec:
    // 0x2da0ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2da0f0:
    if (ctx->pc == 0x2DA0F0u) {
        ctx->pc = 0x2DA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0ECu;
        // 0x2da0f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA0F4u;
        goto label_2da0f4;
    }
    ctx->pc = 0x2DA0ECu;
    {
        const bool branch_taken_0x2da0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0ECu;
        // 0x2da0f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0ec) {
            ctx->pc = 0x2DA104u;
            goto label_2da104;
        }
    }
    ctx->pc = 0x2DA0F4u;
label_2da0f4:
    // 0x2da0f4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2da0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2da0f8:
    // 0x2da0f8: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x2da0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
label_2da0fc:
    // 0x2da0fc: 0x43a804  sllv        $s5, $v1, $v0
    ctx->pc = 0x2da0fcu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2da100:
    // 0x2da100: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x2da100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2da104:
    // 0x2da104: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_2da108:
    if (ctx->pc == 0x2DA108u) {
        ctx->pc = 0x2DA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA104u;
        // 0x2da108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA10Cu;
        goto label_2da10c;
    }
    ctx->pc = 0x2DA104u;
    {
        const bool branch_taken_0x2da104 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA104u;
        // 0x2da108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da104) {
            ctx->pc = 0x2DA130u;
            goto label_2da130;
        }
    }
    ctx->pc = 0x2DA10Cu;
label_2da10c:
    // 0x2da10c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2da10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2da110:
    // 0x2da110: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2da110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2da114:
    // 0x2da114: 0x2e0f809  jalr        $s7
label_2da118:
    if (ctx->pc == 0x2DA118u) {
        ctx->pc = 0x2DA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA114u;
        // 0x2da118: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA11Cu;
        goto label_2da11c;
    }
    ctx->pc = 0x2DA114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x2DA11Cu);
        ctx->pc = 0x2DA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA114u;
        // 0x2da118: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA114u, 0x2DA11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA11Cu;
label_2da11c:
    // 0x2da11c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da120:
    // 0x2da120: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2da124:
    if (ctx->pc == 0x2DA124u) {
        ctx->pc = 0x2DA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA120u;
        // 0x2da124: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA128u;
        goto label_2da128;
    }
    ctx->pc = 0x2DA120u;
    {
        const bool branch_taken_0x2da120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA120u;
        // 0x2da124: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da120) {
            ctx->pc = 0x2DA138u;
            goto label_2da138;
        }
    }
    ctx->pc = 0x2DA128u;
label_2da128:
    // 0x2da128: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2da128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_2da12c:
    // 0x2da12c: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x2da12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_2da130:
    // 0x2da130: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_2da134:
    if (ctx->pc == 0x2DA134u) {
        ctx->pc = 0x2DA138u;
        goto label_2da138;
    }
    ctx->pc = 0x2DA130u;
    {
        const bool branch_taken_0x2da130 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da130) {
            ctx->pc = 0x2DA150u;
            goto label_2da150;
        }
    }
    ctx->pc = 0x2DA138u;
label_2da138:
    // 0x2da138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da13c:
    // 0x2da13c: 0x27a50214  addiu       $a1, $sp, 0x214
    ctx->pc = 0x2da13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_2da140:
    // 0x2da140: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2da140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2da144:
    // 0x2da144: 0xc0b69a8  jal         func_2DA6A0
label_2da148:
    if (ctx->pc == 0x2DA148u) {
        ctx->pc = 0x2DA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA144u;
        // 0x2da148: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA14Cu;
        goto label_2da14c;
    }
    ctx->pc = 0x2DA144u;
    SET_GPR_U32(ctx, 31, 0x2DA14Cu);
    ctx->pc = 0x2DA148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA144u;
    // 0x2da148: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA6A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA6A0u, 0x2DA144u, 0x2DA14Cu)) {
        return;
    }
    ctx->pc = 0x2DA14Cu;
label_2da14c:
    // 0x2da14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da150:
    // 0x2da150: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
label_2da154:
    if (ctx->pc == 0x2DA154u) {
        ctx->pc = 0x2DA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA150u;
        // 0x2da154: 0x26a4ffff  addiu       $a0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA158u;
        goto label_2da158;
    }
    ctx->pc = 0x2DA150u;
    {
        const bool branch_taken_0x2da150 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA150u;
        // 0x2da154: 0x26a4ffff  addiu       $a0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da150) {
            ctx->pc = 0x2DA1A4u;
            goto label_2da1a4;
        }
    }
    ctx->pc = 0x2DA158u;
label_2da158:
    // 0x2da158: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x2da158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_2da15c:
    // 0x2da15c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2da160:
    if (ctx->pc == 0x2DA160u) {
        ctx->pc = 0x2DA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA15Cu;
        // 0x2da160: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA164u;
        goto label_2da164;
    }
    ctx->pc = 0x2DA15Cu;
    {
        const bool branch_taken_0x2da15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA15Cu;
        // 0x2da160: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da15c) {
            ctx->pc = 0x2DA1A4u;
            goto label_2da1a4;
        }
    }
    ctx->pc = 0x2DA164u;
label_2da164:
    // 0x2da164: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2da164u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_2da168:
    // 0x2da168: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2da168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2da16c:
    // 0x2da16c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x2da16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2da170:
    // 0x2da170: 0x901823  subu        $v1, $a0, $s0
    ctx->pc = 0x2da170u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2da174:
    // 0x2da174: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x2da174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2da178:
    // 0x2da178: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2da17c:
    if (ctx->pc == 0x2DA17Cu) {
        ctx->pc = 0x2DA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA178u;
        // 0x2da17c: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA180u;
        goto label_2da180;
    }
    ctx->pc = 0x2DA178u;
    {
        const bool branch_taken_0x2da178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA178u;
        // 0x2da17c: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da178) {
            ctx->pc = 0x2DA190u;
            goto label_2da190;
        }
    }
    ctx->pc = 0x2DA180u;
label_2da180:
    // 0x2da180: 0xac90fffc  sw          $s0, -0x4($a0)
    ctx->pc = 0x2da180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 16));
label_2da184:
    // 0x2da184: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x2da184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_2da188:
    // 0x2da188: 0x10000004  b           . + 4 + (0x4 << 2)
label_2da18c:
    if (ctx->pc == 0x2DA18Cu) {
        ctx->pc = 0x2DA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA188u;
        // 0x2da18c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA190u;
        goto label_2da190;
    }
    ctx->pc = 0x2DA188u;
    {
        const bool branch_taken_0x2da188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA188u;
        // 0x2da18c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da188) {
            ctx->pc = 0x2DA19Cu;
            goto label_2da19c;
        }
    }
    ctx->pc = 0x2DA190u;
label_2da190:
    // 0x2da190: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2da190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2da194:
    // 0x2da194: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x2da194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_2da198:
    // 0x2da198: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2da198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2da19c:
    // 0x2da19c: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x2da19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_2da1a0:
    // 0x2da1a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da1a4:
    // 0x2da1a4: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_2da1a8:
    if (ctx->pc == 0x2DA1A8u) {
        ctx->pc = 0x2DA1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1A4u;
        // 0x2da1a8: 0xae130024  sw          $s3, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA1ACu;
        goto label_2da1ac;
    }
    ctx->pc = 0x2DA1A4u;
    {
        const bool branch_taken_0x2da1a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da1a4) {
            ctx->pc = 0x2DA1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA1A4u;
            // 0x2da1a8: 0xae130024  sw          $s3, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA1C4u;
            goto label_2da1c4;
        }
    }
    ctx->pc = 0x2DA1ACu;
label_2da1ac:
    // 0x2da1ac: 0x12c0003f  beqz        $s6, . + 4 + (0x3F << 2)
label_2da1b0:
    if (ctx->pc == 0x2DA1B0u) {
        ctx->pc = 0x2DA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1ACu;
        // 0x2da1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA1B4u;
        goto label_2da1b4;
    }
    ctx->pc = 0x2DA1ACu;
    {
        const bool branch_taken_0x2da1ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1ACu;
        // 0x2da1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1ac) {
            ctx->pc = 0x2DA2ACu;
            goto label_2da2ac;
        }
    }
    ctx->pc = 0x2DA1B4u;
label_2da1b4:
    // 0x2da1b4: 0xc0b7080  jal         func_2DC200
label_2da1b8:
    if (ctx->pc == 0x2DA1B8u) {
        ctx->pc = 0x2DA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1B4u;
        // 0x2da1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA1BCu;
        goto label_2da1bc;
    }
    ctx->pc = 0x2DA1B4u;
    SET_GPR_U32(ctx, 31, 0x2DA1BCu);
    ctx->pc = 0x2DA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1B4u;
    // 0x2da1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DA1B4u, 0x2DA1BCu)) {
        return;
    }
    ctx->pc = 0x2DA1BCu;
label_2da1bc:
    // 0x2da1bc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2da1c0:
    if (ctx->pc == 0x2DA1C0u) {
        ctx->pc = 0x2DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1BCu;
        // 0x2da1c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA1C4u;
        goto label_2da1c4;
    }
    ctx->pc = 0x2DA1BCu;
    {
        const bool branch_taken_0x2da1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1BCu;
        // 0x2da1c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1bc) {
            ctx->pc = 0x2DA2ACu;
            goto label_2da2ac;
        }
    }
    ctx->pc = 0x2DA1C4u;
label_2da1c4:
    // 0x2da1c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2da1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da1c8:
    // 0x2da1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da1cc:
    // 0x2da1cc: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x2da1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_2da1d0:
    // 0x2da1d0: 0xc0b68b8  jal         func_2DA2E0
label_2da1d4:
    if (ctx->pc == 0x2DA1D4u) {
        ctx->pc = 0x2DA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1D0u;
        // 0x2da1d4: 0x8fa70210  lw          $a3, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA1D8u;
        goto label_2da1d8;
    }
    ctx->pc = 0x2DA1D0u;
    SET_GPR_U32(ctx, 31, 0x2DA1D8u);
    ctx->pc = 0x2DA1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1D0u;
    // 0x2da1d4: 0x8fa70210  lw          $a3, 0x210($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA2E0u, 0x2DA1D0u, 0x2DA1D8u)) {
        return;
    }
    ctx->pc = 0x2DA1D8u;
label_2da1d8:
    // 0x2da1d8: 0x8f828b54  lw          $v0, -0x74AC($gp)
    ctx->pc = 0x2da1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
label_2da1dc:
    // 0x2da1dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2da1e0:
    if (ctx->pc == 0x2DA1E0u) {
        ctx->pc = 0x2DA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1DCu;
        // 0x2da1e0: 0x2662000c  addiu       $v0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA1E4u;
        goto label_2da1e4;
    }
    ctx->pc = 0x2DA1DCu;
    {
        const bool branch_taken_0x2da1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1DCu;
        // 0x2da1e0: 0x2662000c  addiu       $v0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1dc) {
            ctx->pc = 0x2DA200u;
            goto label_2da200;
        }
    }
    ctx->pc = 0x2DA1E4u;
label_2da1e4:
    // 0x2da1e4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2da1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2da1e8:
    // 0x2da1e8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2da1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2da1ec:
    // 0x2da1ec: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x2da1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2da1f0:
    // 0x2da1f0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2da1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_2da1f4:
    // 0x2da1f4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2da1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2da1f8:
    // 0x2da1f8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2da1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2da1fc:
    // 0x2da1fc: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x2da1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_2da200:
    // 0x2da200: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2da200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2da204:
    // 0x2da204: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2da204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2da208:
    // 0x2da208: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2da20c:
    if (ctx->pc == 0x2DA20Cu) {
        ctx->pc = 0x2DA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA208u;
        // 0x2da20c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA210u;
        goto label_2da210;
    }
    ctx->pc = 0x2DA208u;
    {
        const bool branch_taken_0x2da208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA208u;
        // 0x2da20c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da208) {
            ctx->pc = 0x2DA278u;
            goto label_2da278;
        }
    }
    ctx->pc = 0x2DA210u;
label_2da210:
    // 0x2da210: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2da210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2da214:
    // 0x2da214: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2da214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2da218:
    // 0x2da218: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2da218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2da21c:
    // 0x2da21c: 0x40f809  jalr        $v0
label_2da220:
    if (ctx->pc == 0x2DA220u) {
        ctx->pc = 0x2DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA21Cu;
        // 0x2da220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA224u;
        goto label_2da224;
    }
    ctx->pc = 0x2DA21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA224u);
        ctx->pc = 0x2DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA21Cu;
        // 0x2da220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA21Cu, 0x2DA224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA224u;
label_2da224:
    // 0x2da224: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2da228:
    if (ctx->pc == 0x2DA228u) {
        ctx->pc = 0x2DA22Cu;
        goto label_2da22c;
    }
    ctx->pc = 0x2DA224u;
    {
        const bool branch_taken_0x2da224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da224) {
            ctx->pc = 0x2DA278u;
            goto label_2da278;
        }
    }
    ctx->pc = 0x2DA22Cu;
label_2da22c:
    // 0x2da22c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_2da230:
    if (ctx->pc == 0x2DA230u) {
        ctx->pc = 0x2DA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA22Cu;
        // 0x2da230: 0x8f828b54  lw          $v0, -0x74AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA234u;
        goto label_2da234;
    }
    ctx->pc = 0x2DA22Cu;
    {
        const bool branch_taken_0x2da22c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA22Cu;
        // 0x2da230: 0x8f828b54  lw          $v0, -0x74AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da22c) {
            ctx->pc = 0x2DA240u;
            goto label_2da240;
        }
    }
    ctx->pc = 0x2DA234u;
label_2da234:
    // 0x2da234: 0xc0b7080  jal         func_2DC200
label_2da238:
    if (ctx->pc == 0x2DA238u) {
        ctx->pc = 0x2DA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA234u;
        // 0x2da238: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA23Cu;
        goto label_2da23c;
    }
    ctx->pc = 0x2DA234u;
    SET_GPR_U32(ctx, 31, 0x2DA23Cu);
    ctx->pc = 0x2DA238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA234u;
    // 0x2da238: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DA234u, 0x2DA23Cu)) {
        return;
    }
    ctx->pc = 0x2DA23Cu;
label_2da23c:
    // 0x2da23c: 0x8f828b54  lw          $v0, -0x74AC($gp)
    ctx->pc = 0x2da23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
label_2da240:
    // 0x2da240: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2da244:
    if (ctx->pc == 0x2DA244u) {
        ctx->pc = 0x2DA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA240u;
        // 0x2da244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA248u;
        goto label_2da248;
    }
    ctx->pc = 0x2DA240u;
    {
        const bool branch_taken_0x2da240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA240u;
        // 0x2da244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da240) {
            ctx->pc = 0x2DA264u;
            goto label_2da264;
        }
    }
    ctx->pc = 0x2DA248u;
label_2da248:
    // 0x2da248: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2da248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2da24c:
    // 0x2da24c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2da24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2da250:
    // 0x2da250: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2da250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2da254:
    // 0x2da254: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2da254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2da258:
    // 0x2da258: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2da258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2da25c:
    // 0x2da25c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2da25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2da260:
    // 0x2da260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da264:
    // 0x2da264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da268:
    // 0x2da268: 0xc0b9096  jal         func_2E4258
label_2da26c:
    if (ctx->pc == 0x2DA26Cu) {
        ctx->pc = 0x2DA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA268u;
        // 0x2da26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA270u;
        goto label_2da270;
    }
    ctx->pc = 0x2DA268u;
    SET_GPR_U32(ctx, 31, 0x2DA270u);
    ctx->pc = 0x2DA26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA268u;
    // 0x2da26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4258u, 0x2DA268u, 0x2DA270u)) {
        return;
    }
    ctx->pc = 0x2DA270u;
label_2da270:
    // 0x2da270: 0x1000000e  b           . + 4 + (0xE << 2)
label_2da274:
    if (ctx->pc == 0x2DA274u) {
        ctx->pc = 0x2DA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA270u;
        // 0x2da274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA278u;
        goto label_2da278;
    }
    ctx->pc = 0x2DA270u;
    {
        const bool branch_taken_0x2da270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA270u;
        // 0x2da274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da270) {
            ctx->pc = 0x2DA2ACu;
            goto label_2da2ac;
        }
    }
    ctx->pc = 0x2DA278u;
label_2da278:
    // 0x2da278: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_2da27c:
    if (ctx->pc == 0x2DA27Cu) {
        ctx->pc = 0x2DA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA278u;
        // 0x2da27c: 0x8f838fc8  lw          $v1, -0x7038($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA280u;
        goto label_2da280;
    }
    ctx->pc = 0x2DA278u;
    {
        const bool branch_taken_0x2da278 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA278u;
        // 0x2da27c: 0x8f838fc8  lw          $v1, -0x7038($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da278) {
            ctx->pc = 0x2DA28Cu;
            goto label_2da28c;
        }
    }
    ctx->pc = 0x2DA280u;
label_2da280:
    // 0x2da280: 0xc0b7080  jal         func_2DC200
label_2da284:
    if (ctx->pc == 0x2DA284u) {
        ctx->pc = 0x2DA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA280u;
        // 0x2da284: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA288u;
        goto label_2da288;
    }
    ctx->pc = 0x2DA280u;
    SET_GPR_U32(ctx, 31, 0x2DA288u);
    ctx->pc = 0x2DA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA280u;
    // 0x2da284: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DA280u, 0x2DA288u)) {
        return;
    }
    ctx->pc = 0x2DA288u;
label_2da288:
    // 0x2da288: 0x8f838fc8  lw          $v1, -0x7038($gp)
    ctx->pc = 0x2da288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938568)));
label_2da28c:
    // 0x2da28c: 0x27828fc8  addiu       $v0, $gp, -0x7038
    ctx->pc = 0x2da28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938568));
label_2da290:
    // 0x2da290: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2da290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2da294:
    // 0x2da294: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2da294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2da298:
    // 0x2da298: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2da298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2da29c:
    // 0x2da29c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2da29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da2a0:
    // 0x2da2a0: 0x8f838fc8  lw          $v1, -0x7038($gp)
    ctx->pc = 0x2da2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938568)));
label_2da2a4:
    // 0x2da2a4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2da2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2da2a8:
    // 0x2da2a8: 0xaf848fc8  sw          $a0, -0x7038($gp)
    ctx->pc = 0x2da2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938568), GPR_U32(ctx, 4));
label_2da2ac:
    // 0x2da2ac: 0x7bb002b0  lq          $s0, 0x2B0($sp)
    ctx->pc = 0x2da2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_2da2b0:
    // 0x2da2b0: 0x7bb102a0  lq          $s1, 0x2A0($sp)
    ctx->pc = 0x2da2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_2da2b4:
    // 0x2da2b4: 0x7bb20290  lq          $s2, 0x290($sp)
    ctx->pc = 0x2da2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2da2b8:
    // 0x2da2b8: 0x7bb30280  lq          $s3, 0x280($sp)
    ctx->pc = 0x2da2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2da2bc:
    // 0x2da2bc: 0x7bb40270  lq          $s4, 0x270($sp)
    ctx->pc = 0x2da2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_2da2c0:
    // 0x2da2c0: 0x7bb50260  lq          $s5, 0x260($sp)
    ctx->pc = 0x2da2c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_2da2c4:
    // 0x2da2c4: 0x7bb60250  lq          $s6, 0x250($sp)
    ctx->pc = 0x2da2c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_2da2c8:
    // 0x2da2c8: 0x7bb70240  lq          $s7, 0x240($sp)
    ctx->pc = 0x2da2c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_2da2cc:
    // 0x2da2cc: 0x7bbe0230  lq          $fp, 0x230($sp)
    ctx->pc = 0x2da2ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_2da2d0:
    // 0x2da2d0: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x2da2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
label_2da2d4:
    // 0x2da2d4: 0x3e00008  jr          $ra
label_2da2d8:
    if (ctx->pc == 0x2DA2D8u) {
        ctx->pc = 0x2DA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2D4u;
        // 0x2da2d8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA2DCu;
        goto label_2da2dc;
    }
    ctx->pc = 0x2DA2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2D4u;
        // 0x2da2d8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA2DCu;
label_2da2dc:
    // 0x2da2dc: 0x0  nop
    ctx->pc = 0x2da2dcu;
    // NOP
    ctx->pc = 0x2da2e0u;
}
