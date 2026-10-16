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

// Function: sub_0020BFE0
// Address: 0x20bfe0 - 0x20c340
void sub_0020BFE0_0x20bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BFE0_0x20bfe0");
#endif

    switch (ctx->pc) {
        case 0x20bfe0u: goto label_20bfe0;
        case 0x20bfe4u: goto label_20bfe4;
        case 0x20bfe8u: goto label_20bfe8;
        case 0x20bfecu: goto label_20bfec;
        case 0x20bff0u: goto label_20bff0;
        case 0x20bff4u: goto label_20bff4;
        case 0x20bff8u: goto label_20bff8;
        case 0x20bffcu: goto label_20bffc;
        case 0x20c000u: goto label_20c000;
        case 0x20c004u: goto label_20c004;
        case 0x20c008u: goto label_20c008;
        case 0x20c00cu: goto label_20c00c;
        case 0x20c010u: goto label_20c010;
        case 0x20c014u: goto label_20c014;
        case 0x20c018u: goto label_20c018;
        case 0x20c01cu: goto label_20c01c;
        case 0x20c020u: goto label_20c020;
        case 0x20c024u: goto label_20c024;
        case 0x20c028u: goto label_20c028;
        case 0x20c02cu: goto label_20c02c;
        case 0x20c030u: goto label_20c030;
        case 0x20c034u: goto label_20c034;
        case 0x20c038u: goto label_20c038;
        case 0x20c03cu: goto label_20c03c;
        case 0x20c040u: goto label_20c040;
        case 0x20c044u: goto label_20c044;
        case 0x20c048u: goto label_20c048;
        case 0x20c04cu: goto label_20c04c;
        case 0x20c050u: goto label_20c050;
        case 0x20c054u: goto label_20c054;
        case 0x20c058u: goto label_20c058;
        case 0x20c05cu: goto label_20c05c;
        case 0x20c060u: goto label_20c060;
        case 0x20c064u: goto label_20c064;
        case 0x20c068u: goto label_20c068;
        case 0x20c06cu: goto label_20c06c;
        case 0x20c070u: goto label_20c070;
        case 0x20c074u: goto label_20c074;
        case 0x20c078u: goto label_20c078;
        case 0x20c07cu: goto label_20c07c;
        case 0x20c080u: goto label_20c080;
        case 0x20c084u: goto label_20c084;
        case 0x20c088u: goto label_20c088;
        case 0x20c08cu: goto label_20c08c;
        case 0x20c090u: goto label_20c090;
        case 0x20c094u: goto label_20c094;
        case 0x20c098u: goto label_20c098;
        case 0x20c09cu: goto label_20c09c;
        case 0x20c0a0u: goto label_20c0a0;
        case 0x20c0a4u: goto label_20c0a4;
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0acu: goto label_20c0ac;
        case 0x20c0b0u: goto label_20c0b0;
        case 0x20c0b4u: goto label_20c0b4;
        case 0x20c0b8u: goto label_20c0b8;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c0u: goto label_20c0c0;
        case 0x20c0c4u: goto label_20c0c4;
        case 0x20c0c8u: goto label_20c0c8;
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0d0u: goto label_20c0d0;
        case 0x20c0d4u: goto label_20c0d4;
        case 0x20c0d8u: goto label_20c0d8;
        case 0x20c0dcu: goto label_20c0dc;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c0e4u: goto label_20c0e4;
        case 0x20c0e8u: goto label_20c0e8;
        case 0x20c0ecu: goto label_20c0ec;
        case 0x20c0f0u: goto label_20c0f0;
        case 0x20c0f4u: goto label_20c0f4;
        case 0x20c0f8u: goto label_20c0f8;
        case 0x20c0fcu: goto label_20c0fc;
        case 0x20c100u: goto label_20c100;
        case 0x20c104u: goto label_20c104;
        case 0x20c108u: goto label_20c108;
        case 0x20c10cu: goto label_20c10c;
        case 0x20c110u: goto label_20c110;
        case 0x20c114u: goto label_20c114;
        case 0x20c118u: goto label_20c118;
        case 0x20c11cu: goto label_20c11c;
        case 0x20c120u: goto label_20c120;
        case 0x20c124u: goto label_20c124;
        case 0x20c128u: goto label_20c128;
        case 0x20c12cu: goto label_20c12c;
        case 0x20c130u: goto label_20c130;
        case 0x20c134u: goto label_20c134;
        case 0x20c138u: goto label_20c138;
        case 0x20c13cu: goto label_20c13c;
        case 0x20c140u: goto label_20c140;
        case 0x20c144u: goto label_20c144;
        case 0x20c148u: goto label_20c148;
        case 0x20c14cu: goto label_20c14c;
        case 0x20c150u: goto label_20c150;
        case 0x20c154u: goto label_20c154;
        case 0x20c158u: goto label_20c158;
        case 0x20c15cu: goto label_20c15c;
        case 0x20c160u: goto label_20c160;
        case 0x20c164u: goto label_20c164;
        case 0x20c168u: goto label_20c168;
        case 0x20c16cu: goto label_20c16c;
        case 0x20c170u: goto label_20c170;
        case 0x20c174u: goto label_20c174;
        case 0x20c178u: goto label_20c178;
        case 0x20c17cu: goto label_20c17c;
        case 0x20c180u: goto label_20c180;
        case 0x20c184u: goto label_20c184;
        case 0x20c188u: goto label_20c188;
        case 0x20c18cu: goto label_20c18c;
        case 0x20c190u: goto label_20c190;
        case 0x20c194u: goto label_20c194;
        case 0x20c198u: goto label_20c198;
        case 0x20c19cu: goto label_20c19c;
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1a4u: goto label_20c1a4;
        case 0x20c1a8u: goto label_20c1a8;
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b0u: goto label_20c1b0;
        case 0x20c1b4u: goto label_20c1b4;
        case 0x20c1b8u: goto label_20c1b8;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c0u: goto label_20c1c0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1ccu: goto label_20c1cc;
        case 0x20c1d0u: goto label_20c1d0;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c1d8u: goto label_20c1d8;
        case 0x20c1dcu: goto label_20c1dc;
        case 0x20c1e0u: goto label_20c1e0;
        case 0x20c1e4u: goto label_20c1e4;
        case 0x20c1e8u: goto label_20c1e8;
        case 0x20c1ecu: goto label_20c1ec;
        case 0x20c1f0u: goto label_20c1f0;
        case 0x20c1f4u: goto label_20c1f4;
        case 0x20c1f8u: goto label_20c1f8;
        case 0x20c1fcu: goto label_20c1fc;
        case 0x20c200u: goto label_20c200;
        case 0x20c204u: goto label_20c204;
        case 0x20c208u: goto label_20c208;
        case 0x20c20cu: goto label_20c20c;
        case 0x20c210u: goto label_20c210;
        case 0x20c214u: goto label_20c214;
        case 0x20c218u: goto label_20c218;
        case 0x20c21cu: goto label_20c21c;
        case 0x20c220u: goto label_20c220;
        case 0x20c224u: goto label_20c224;
        case 0x20c228u: goto label_20c228;
        case 0x20c22cu: goto label_20c22c;
        case 0x20c230u: goto label_20c230;
        case 0x20c234u: goto label_20c234;
        case 0x20c238u: goto label_20c238;
        case 0x20c23cu: goto label_20c23c;
        case 0x20c240u: goto label_20c240;
        case 0x20c244u: goto label_20c244;
        case 0x20c248u: goto label_20c248;
        case 0x20c24cu: goto label_20c24c;
        case 0x20c250u: goto label_20c250;
        case 0x20c254u: goto label_20c254;
        case 0x20c258u: goto label_20c258;
        case 0x20c25cu: goto label_20c25c;
        case 0x20c260u: goto label_20c260;
        case 0x20c264u: goto label_20c264;
        case 0x20c268u: goto label_20c268;
        case 0x20c26cu: goto label_20c26c;
        case 0x20c270u: goto label_20c270;
        case 0x20c274u: goto label_20c274;
        case 0x20c278u: goto label_20c278;
        case 0x20c27cu: goto label_20c27c;
        case 0x20c280u: goto label_20c280;
        case 0x20c284u: goto label_20c284;
        case 0x20c288u: goto label_20c288;
        case 0x20c28cu: goto label_20c28c;
        case 0x20c290u: goto label_20c290;
        case 0x20c294u: goto label_20c294;
        case 0x20c298u: goto label_20c298;
        case 0x20c29cu: goto label_20c29c;
        case 0x20c2a0u: goto label_20c2a0;
        case 0x20c2a4u: goto label_20c2a4;
        case 0x20c2a8u: goto label_20c2a8;
        case 0x20c2acu: goto label_20c2ac;
        case 0x20c2b0u: goto label_20c2b0;
        case 0x20c2b4u: goto label_20c2b4;
        case 0x20c2b8u: goto label_20c2b8;
        case 0x20c2bcu: goto label_20c2bc;
        case 0x20c2c0u: goto label_20c2c0;
        case 0x20c2c4u: goto label_20c2c4;
        case 0x20c2c8u: goto label_20c2c8;
        case 0x20c2ccu: goto label_20c2cc;
        case 0x20c2d0u: goto label_20c2d0;
        case 0x20c2d4u: goto label_20c2d4;
        case 0x20c2d8u: goto label_20c2d8;
        case 0x20c2dcu: goto label_20c2dc;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2e4u: goto label_20c2e4;
        case 0x20c2e8u: goto label_20c2e8;
        case 0x20c2ecu: goto label_20c2ec;
        case 0x20c2f0u: goto label_20c2f0;
        case 0x20c2f4u: goto label_20c2f4;
        case 0x20c2f8u: goto label_20c2f8;
        case 0x20c2fcu: goto label_20c2fc;
        case 0x20c300u: goto label_20c300;
        case 0x20c304u: goto label_20c304;
        case 0x20c308u: goto label_20c308;
        case 0x20c30cu: goto label_20c30c;
        case 0x20c310u: goto label_20c310;
        case 0x20c314u: goto label_20c314;
        case 0x20c318u: goto label_20c318;
        case 0x20c31cu: goto label_20c31c;
        case 0x20c320u: goto label_20c320;
        case 0x20c324u: goto label_20c324;
        case 0x20c328u: goto label_20c328;
        case 0x20c32cu: goto label_20c32c;
        case 0x20c330u: goto label_20c330;
        case 0x20c334u: goto label_20c334;
        case 0x20c338u: goto label_20c338;
        case 0x20c33cu: goto label_20c33c;
        default: break;
    }

    ctx->pc = 0x20bfe0u;

label_20bfe0:
    // 0x20bfe0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x20bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_20bfe4:
    // 0x20bfe4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x20bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_20bfe8:
    // 0x20bfe8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x20bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_20bfec:
    // 0x20bfec: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x20bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_20bff0:
    // 0x20bff0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20bff0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20bff4:
    // 0x20bff4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x20bff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_20bff8:
    // 0x20bff8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x20bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_20bffc:
    // 0x20bffc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20bffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_20c000:
    // 0x20c000: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20c000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_20c004:
    // 0x20c004: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x20c004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_20c008:
    // 0x20c008: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x20c008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_20c00c:
    // 0x20c00c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20c010:
    // 0x20c010: 0x8e82019c  lw          $v0, 0x19C($s4)
    ctx->pc = 0x20c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
label_20c014:
    // 0x20c014: 0x8e9501bc  lw          $s5, 0x1BC($s4)
    ctx->pc = 0x20c014u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
label_20c018:
    // 0x20c018: 0x8e9e0194  lw          $fp, 0x194($s4)
    ctx->pc = 0x20c018u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 404)));
label_20c01c:
    // 0x20c01c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_20c020:
    // 0x20c020: 0x8e820114  lw          $v0, 0x114($s4)
    ctx->pc = 0x20c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
label_20c024:
    // 0x20c024: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_20c028:
    if (ctx->pc == 0x20C028u) {
        ctx->pc = 0x20C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C024u;
        // 0x20c028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C02Cu;
        goto label_20c02c;
    }
    ctx->pc = 0x20C024u;
    {
        const bool branch_taken_0x20c024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C024u;
        // 0x20c028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c024) {
            ctx->pc = 0x20C0D4u;
            goto label_20c0d4;
        }
    }
    ctx->pc = 0x20C02Cu;
label_20c02c:
    // 0x20c02c: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x20c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_20c030:
    // 0x20c030: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_20c034:
    if (ctx->pc == 0x20C034u) {
        ctx->pc = 0x20C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C030u;
        // 0x20c034: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C038u;
        goto label_20c038;
    }
    ctx->pc = 0x20C030u;
    {
        const bool branch_taken_0x20c030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c030) {
            ctx->pc = 0x20C034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C030u;
            // 0x20c034: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C0D8u;
            goto label_20c0d8;
        }
    }
    ctx->pc = 0x20C038u;
label_20c038:
    // 0x20c038: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x20c038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_20c03c:
    // 0x20c03c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20c040:
    // 0x20c040: 0x8e8701b8  lw          $a3, 0x1B8($s4)
    ctx->pc = 0x20c040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_20c044:
    // 0x20c044: 0xa6282a  slt         $a1, $a1, $a2
    ctx->pc = 0x20c044u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20c048:
    // 0x20c048: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x20c048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_20c04c:
    // 0x20c04c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x20c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_20c050:
    // 0x20c050: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x20c050u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
label_20c054:
    // 0x20c054: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x20c054u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_20c058:
    // 0x20c058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c05c:
    // 0x20c05c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x20c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_20c060:
    // 0x20c060: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x20c060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
label_20c064:
    // 0x20c064: 0x8e8301b8  lw          $v1, 0x1B8($s4)
    ctx->pc = 0x20c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_20c068:
    // 0x20c068: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20c06c:
    // 0x20c06c: 0x40f809  jalr        $v0
label_20c070:
    if (ctx->pc == 0x20C070u) {
        ctx->pc = 0x20C074u;
        goto label_20c074;
    }
    ctx->pc = 0x20C06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C06Cu, 0x20C074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C074u;
label_20c074:
    // 0x20c074: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_20c078:
    if (ctx->pc == 0x20C078u) {
        ctx->pc = 0x20C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C074u;
        // 0x20c078: 0x8e820148  lw          $v0, 0x148($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C07Cu;
        goto label_20c07c;
    }
    ctx->pc = 0x20C074u;
    {
        const bool branch_taken_0x20c074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c074) {
            ctx->pc = 0x20C078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C074u;
            // 0x20c078: 0x8e820148  lw          $v0, 0x148($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C084u;
            goto label_20c084;
        }
    }
    ctx->pc = 0x20C07Cu;
label_20c07c:
    // 0x20c07c: 0x10000011  b           . + 4 + (0x11 << 2)
label_20c080:
    if (ctx->pc == 0x20C080u) {
        ctx->pc = 0x20C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C07Cu;
        // 0x20c080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C084u;
        goto label_20c084;
    }
    ctx->pc = 0x20C07Cu;
    {
        const bool branch_taken_0x20c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C07Cu;
        // 0x20c080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c07c) {
            ctx->pc = 0x20C0C4u;
            goto label_20c0c4;
        }
    }
    ctx->pc = 0x20C084u;
label_20c084:
    // 0x20c084: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_20c088:
    if (ctx->pc == 0x20C088u) {
        ctx->pc = 0x20C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C084u;
        // 0x20c088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C08Cu;
        goto label_20c08c;
    }
    ctx->pc = 0x20C084u;
    {
        const bool branch_taken_0x20c084 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C084u;
        // 0x20c088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c084) {
            ctx->pc = 0x20C0A8u;
            goto label_20c0a8;
        }
    }
    ctx->pc = 0x20C08Cu;
label_20c08c:
    // 0x20c08c: 0x26a30024  addiu       $v1, $s5, 0x24
    ctx->pc = 0x20c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
label_20c090:
    // 0x20c090: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20c090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20c094:
    // 0x20c094: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20c094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20c098:
    // 0x20c098: 0x8e820148  lw          $v0, 0x148($s4)
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
label_20c09c:
    // 0x20c09c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20c09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20c0a0:
    // 0x20c0a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_20c0a4:
    if (ctx->pc == 0x20C0A4u) {
        ctx->pc = 0x20C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0A0u;
        // 0x20c0a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0A8u;
        goto label_20c0a8;
    }
    ctx->pc = 0x20C0A0u;
    {
        const bool branch_taken_0x20c0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0A0u;
        // 0x20c0a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0a0) {
            ctx->pc = 0x20C090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c090;
        }
    }
    ctx->pc = 0x20C0A8u;
label_20c0a8:
    // 0x20c0a8: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x20c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_20c0ac:
    // 0x20c0ac: 0x8e820114  lw          $v0, 0x114($s4)
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
label_20c0b0:
    // 0x20c0b0: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x20c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
label_20c0b4:
    // 0x20c0b4: 0x8e8301a0  lw          $v1, 0x1A0($s4)
    ctx->pc = 0x20c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
label_20c0b8:
    // 0x20c0b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_20c0bc:
    if (ctx->pc == 0x20C0BCu) {
        ctx->pc = 0x20C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0B8u;
        // 0x20c0bc: 0xaea00008  sw          $zero, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0C0u;
        goto label_20c0c0;
    }
    ctx->pc = 0x20C0B8u;
    {
        const bool branch_taken_0x20c0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c0b8) {
            ctx->pc = 0x20C0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0B8u;
            // 0x20c0bc: 0xaea00008  sw          $zero, 0x8($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C0C0u;
            goto label_20c0c0;
        }
    }
    ctx->pc = 0x20C0C0u;
label_20c0c0:
    // 0x20c0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c0c4:
    // 0x20c0c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_20c0c8:
    if (ctx->pc == 0x20C0C8u) {
        ctx->pc = 0x20C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0C4u;
        // 0x20c0c8: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0CCu;
        goto label_20c0cc;
    }
    ctx->pc = 0x20C0C4u;
    {
        const bool branch_taken_0x20c0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c0c4) {
            ctx->pc = 0x20C0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0C4u;
            // 0x20c0c8: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C0D8u;
            goto label_20c0d8;
        }
    }
    ctx->pc = 0x20C0CCu;
label_20c0cc:
    // 0x20c0cc: 0x1000008f  b           . + 4 + (0x8F << 2)
label_20c0d0:
    if (ctx->pc == 0x20C0D0u) {
        ctx->pc = 0x20C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0CCu;
        // 0x20c0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0D4u;
        goto label_20c0d4;
    }
    ctx->pc = 0x20C0CCu;
    {
        const bool branch_taken_0x20c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0CCu;
        // 0x20c0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0cc) {
            ctx->pc = 0x20C30Cu;
            goto label_20c30c;
        }
    }
    ctx->pc = 0x20C0D4u;
label_20c0d4:
    // 0x20c0d4: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x20c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_20c0d8:
    // 0x20c0d8: 0x54400089  bnel        $v0, $zero, . + 4 + (0x89 << 2)
label_20c0dc:
    if (ctx->pc == 0x20C0DCu) {
        ctx->pc = 0x20C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0D8u;
        // 0x20c0dc: 0x8ea30034  lw          $v1, 0x34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0E0u;
        goto label_20c0e0;
    }
    ctx->pc = 0x20C0D8u;
    {
        const bool branch_taken_0x20c0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c0d8) {
            ctx->pc = 0x20C0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0D8u;
            // 0x20c0dc: 0x8ea30034  lw          $v1, 0x34($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C300u;
            goto label_20c300;
        }
    }
    ctx->pc = 0x20C0E0u;
label_20c0e0:
    // 0x20c0e0: 0x8eb30020  lw          $s3, 0x20($s5)
    ctx->pc = 0x20c0e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_20c0e4:
    // 0x20c0e4: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_20c0e8:
    if (ctx->pc == 0x20C0E8u) {
        ctx->pc = 0x20C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0E4u;
        // 0x20c0e8: 0xafb40014  sw          $s4, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0ECu;
        goto label_20c0ec;
    }
    ctx->pc = 0x20C0E4u;
    {
        const bool branch_taken_0x20c0e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c0e4) {
            ctx->pc = 0x20C0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0E4u;
            // 0x20c0e8: 0xafb40014  sw          $s4, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C0F4u;
            goto label_20c0f4;
        }
    }
    ctx->pc = 0x20C0ECu;
label_20c0ec:
    // 0x20c0ec: 0x10000082  b           . + 4 + (0x82 << 2)
label_20c0f0:
    if (ctx->pc == 0x20C0F0u) {
        ctx->pc = 0x20C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0ECu;
        // 0x20c0f0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C0F4u;
        goto label_20c0f4;
    }
    ctx->pc = 0x20C0ECu;
    {
        const bool branch_taken_0x20c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0ECu;
        // 0x20c0f0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0ec) {
            ctx->pc = 0x20C2F8u;
            goto label_20c2f8;
        }
    }
    ctx->pc = 0x20C0F4u;
label_20c0f4:
    // 0x20c0f4: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x20c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_20c0f8:
    // 0x20c0f8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x20c0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c0fc:
    // 0x20c0fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20c100:
    // 0x20c100: 0x8e920190  lw          $s2, 0x190($s4)
    ctx->pc = 0x20c100u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 400)));
label_20c104:
    // 0x20c104: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x20c104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_20c108:
    // 0x20c108: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20c108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_20c10c:
    // 0x20c10c: 0x3d2282a  slt         $a1, $fp, $s2
    ctx->pc = 0x20c10cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_20c110:
    // 0x20c110: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20c114:
    // 0x20c114: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20c114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20c118:
    // 0x20c118: 0x8eb60048  lw          $s6, 0x48($s5)
    ctx->pc = 0x20c118u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_20c11c:
    // 0x20c11c: 0xdea70010  ld          $a3, 0x10($s5)
    ctx->pc = 0x20c11cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 21), 16)));
label_20c120:
    // 0x20c120: 0x14a0006d  bnez        $a1, . + 4 + (0x6D << 2)
label_20c124:
    if (ctx->pc == 0x20C124u) {
        ctx->pc = 0x20C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C120u;
        // 0x20c124: 0x8ea60018  lw          $a2, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C128u;
        goto label_20c128;
    }
    ctx->pc = 0x20C120u;
    {
        const bool branch_taken_0x20c120 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C120u;
        // 0x20c124: 0x8ea60018  lw          $a2, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c120) {
            ctx->pc = 0x20C2D8u;
            goto label_20c2d8;
        }
    }
    ctx->pc = 0x20C128u;
label_20c128:
    // 0x20c128: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x20c128u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c12c:
    // 0x20c12c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x20c12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_20c130:
    // 0x20c130: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20c134:
    if (ctx->pc == 0x20C134u) {
        ctx->pc = 0x20C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C130u;
        // 0x20c134: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C138u;
        goto label_20c138;
    }
    ctx->pc = 0x20C130u;
    {
        const bool branch_taken_0x20c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C130u;
        // 0x20c134: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c130) {
            ctx->pc = 0x20C160u;
            goto label_20c160;
        }
    }
    ctx->pc = 0x20C138u;
label_20c138:
    // 0x20c138: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c13c:
    // 0x20c13c: 0xc087e18  jal         func_21F860
label_20c140:
    if (ctx->pc == 0x20C140u) {
        ctx->pc = 0x20C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C13Cu;
        // 0x20c140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C144u;
        goto label_20c144;
    }
    ctx->pc = 0x20C13Cu;
    SET_GPR_U32(ctx, 31, 0x20C144u);
    ctx->pc = 0x20C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C13Cu;
    // 0x20c140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C13Cu, 0x20C144u)) {
        return;
    }
    ctx->pc = 0x20C144u;
label_20c144:
    // 0x20c144: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
label_20c148:
    if (ctx->pc == 0x20C148u) {
        ctx->pc = 0x20C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C144u;
        // 0x20c148: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C14Cu;
        goto label_20c14c;
    }
    ctx->pc = 0x20C144u;
    {
        const bool branch_taken_0x20c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C144u;
        // 0x20c148: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c144) {
            ctx->pc = 0x20C0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c0cc;
        }
    }
    ctx->pc = 0x20C14Cu;
label_20c14c:
    // 0x20c14c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x20c14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_20c150:
    // 0x20c150: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20c154:
    if (ctx->pc == 0x20C154u) {
        ctx->pc = 0x20C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C150u;
        // 0x20c154: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C158u;
        goto label_20c158;
    }
    ctx->pc = 0x20C150u;
    {
        const bool branch_taken_0x20c150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C150u;
        // 0x20c154: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c150) {
            ctx->pc = 0x20C160u;
            goto label_20c160;
        }
    }
    ctx->pc = 0x20C158u;
label_20c158:
    // 0x20c158: 0x1000000f  b           . + 4 + (0xF << 2)
label_20c15c:
    if (ctx->pc == 0x20C15Cu) {
        ctx->pc = 0x20C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C158u;
        // 0x20c15c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C160u;
        goto label_20c160;
    }
    ctx->pc = 0x20C158u;
    {
        const bool branch_taken_0x20c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C158u;
        // 0x20c15c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c158) {
            ctx->pc = 0x20C198u;
            goto label_20c198;
        }
    }
    ctx->pc = 0x20C160u;
label_20c160:
    // 0x20c160: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x20c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_20c164:
    // 0x20c164: 0x471017  dsrav       $v0, $a3, $v0
    ctx->pc = 0x20c164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 2) & 0x3F));
label_20c168:
    // 0x20c168: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c16c:
    // 0x20c16c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c16cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c170:
    // 0x20c170: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20c174:
    // 0x20c174: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20c174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20c178:
    // 0x20c178: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x20c178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_20c17c:
    // 0x20c17c: 0x8c68011c  lw          $t0, 0x11C($v1)
    ctx->pc = 0x20c17cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_20c180:
    // 0x20c180: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_20c184:
    if (ctx->pc == 0x20C184u) {
        ctx->pc = 0x20C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C180u;
        // 0x20c184: 0x2c21021  addu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C188u;
        goto label_20c188;
    }
    ctx->pc = 0x20C180u;
    {
        const bool branch_taken_0x20c180 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C180u;
        // 0x20c184: 0x2c21021  addu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c180) {
            ctx->pc = 0x20C194u;
            goto label_20c194;
        }
    }
    ctx->pc = 0x20C188u;
label_20c188:
    // 0x20c188: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x20c188u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_20c18c:
    // 0x20c18c: 0x1000000a  b           . + 4 + (0xA << 2)
label_20c190:
    if (ctx->pc == 0x20C190u) {
        ctx->pc = 0x20C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C18Cu;
        // 0x20c190: 0x9050051c  lbu         $s0, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C194u;
        goto label_20c194;
    }
    ctx->pc = 0x20C18Cu;
    {
        const bool branch_taken_0x20c18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C18Cu;
        // 0x20c190: 0x9050051c  lbu         $s0, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c18c) {
            ctx->pc = 0x20C1B8u;
            goto label_20c1b8;
        }
    }
    ctx->pc = 0x20C194u;
label_20c194:
    // 0x20c194: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x20c194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20c198:
    // 0x20c198: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x20c198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20c19c:
    // 0x20c19c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c1a0:
    // 0x20c1a0: 0xc0879b4  jal         func_21E6D0
label_20c1a4:
    if (ctx->pc == 0x20C1A4u) {
        ctx->pc = 0x20C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1A0u;
        // 0x20c1a4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1A8u;
        goto label_20c1a8;
    }
    ctx->pc = 0x20C1A0u;
    SET_GPR_U32(ctx, 31, 0x20C1A8u);
    ctx->pc = 0x20C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C1A0u;
    // 0x20c1a4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E6D0u, 0x20C1A0u, 0x20C1A8u)) {
        return;
    }
    ctx->pc = 0x20C1A8u;
label_20c1a8:
    // 0x20c1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c1ac:
    // 0x20c1ac: 0x600ffc7  bltz        $s0, . + 4 + (-0x39 << 2)
label_20c1b0:
    if (ctx->pc == 0x20C1B0u) {
        ctx->pc = 0x20C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1ACu;
        // 0x20c1b0: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1B4u;
        goto label_20c1b4;
    }
    ctx->pc = 0x20C1ACu;
    {
        const bool branch_taken_0x20c1ac = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x20C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1ACu;
        // 0x20c1b0: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1ac) {
            ctx->pc = 0x20C0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c0cc;
        }
    }
    ctx->pc = 0x20C1B4u;
label_20c1b4:
    // 0x20c1b4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x20c1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c1b8:
    // 0x20c1b8: 0x108903  sra         $s1, $s0, 4
    ctx->pc = 0x20c1b8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 4));
label_20c1bc:
    // 0x20c1bc: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x20c1bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_20c1c0:
    // 0x20c1c0: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_20c1c4:
    if (ctx->pc == 0x20C1C4u) {
        ctx->pc = 0x20C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1C0u;
        // 0x20c1c4: 0xd0102a  slt         $v0, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1C8u;
        goto label_20c1c8;
    }
    ctx->pc = 0x20C1C0u;
    {
        const bool branch_taken_0x20c1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1C0u;
        // 0x20c1c4: 0xd0102a  slt         $v0, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1c0) {
            ctx->pc = 0x20C26Cu;
            goto label_20c26c;
        }
    }
    ctx->pc = 0x20C1C8u;
label_20c1c8:
    // 0x20c1c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20c1cc:
    if (ctx->pc == 0x20C1CCu) {
        ctx->pc = 0x20C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1C8u;
        // 0x20c1cc: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1D0u;
        goto label_20c1d0;
    }
    ctx->pc = 0x20C1C8u;
    {
        const bool branch_taken_0x20c1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1C8u;
        // 0x20c1cc: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1c8) {
            ctx->pc = 0x20C1ECu;
            goto label_20c1ec;
        }
    }
    ctx->pc = 0x20C1D0u;
label_20c1d0:
    // 0x20c1d0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x20c1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20c1d4:
    // 0x20c1d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c1d8:
    // 0x20c1d8: 0xc087e18  jal         func_21F860
label_20c1dc:
    if (ctx->pc == 0x20C1DCu) {
        ctx->pc = 0x20C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1D8u;
        // 0x20c1dc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1E0u;
        goto label_20c1e0;
    }
    ctx->pc = 0x20C1D8u;
    SET_GPR_U32(ctx, 31, 0x20C1E0u);
    ctx->pc = 0x20C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C1D8u;
    // 0x20c1dc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C1D8u, 0x20C1E0u)) {
        return;
    }
    ctx->pc = 0x20C1E0u;
label_20c1e0:
    // 0x20c1e0: 0x1040ffba  beqz        $v0, . + 4 + (-0x46 << 2)
label_20c1e4:
    if (ctx->pc == 0x20C1E4u) {
        ctx->pc = 0x20C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1E0u;
        // 0x20c1e4: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1E8u;
        goto label_20c1e8;
    }
    ctx->pc = 0x20C1E0u;
    {
        const bool branch_taken_0x20c1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1E0u;
        // 0x20c1e4: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1e0) {
            ctx->pc = 0x20C0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c0cc;
        }
    }
    ctx->pc = 0x20C1E8u;
label_20c1e8:
    // 0x20c1e8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x20c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c1ec:
    // 0x20c1ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c1f0:
    // 0x20c1f0: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x20c1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20c1f4:
    // 0x20c1f4: 0x24423fa0  addiu       $v0, $v0, 0x3FA0
    ctx->pc = 0x20c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16288));
label_20c1f8:
    // 0x20c1f8: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x20c1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_20c1fc:
    // 0x20c1fc: 0xc72017  dsrav       $a0, $a3, $a2
    ctx->pc = 0x20c1fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 6) & 0x3F));
label_20c200:
    // 0x20c200: 0x2171804  sllv        $v1, $s7, $s0
    ctx->pc = 0x20c200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 16) & 0x1F));
label_20c204:
    // 0x20c204: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x20c204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_20c208:
    // 0x20c208: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20c208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_20c20c:
    // 0x20c20c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20c20cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_20c210:
    // 0x20c210: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20c214:
    // 0x20c214: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c218:
    // 0x20c218: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x20c218u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_20c21c:
    // 0x20c21c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x20c21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20c220:
    // 0x20c220: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20c224:
    if (ctx->pc == 0x20C224u) {
        ctx->pc = 0x20C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C220u;
        // 0x20c224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C228u;
        goto label_20c228;
    }
    ctx->pc = 0x20C220u;
    {
        const bool branch_taken_0x20c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C220u;
        // 0x20c224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c220) {
            ctx->pc = 0x20C23Cu;
            goto label_20c23c;
        }
    }
    ctx->pc = 0x20C228u;
label_20c228:
    // 0x20c228: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20c228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20c22c:
    // 0x20c22c: 0x24633fe0  addiu       $v1, $v1, 0x3FE0
    ctx->pc = 0x20c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16352));
label_20c230:
    // 0x20c230: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x20c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_20c234:
    // 0x20c234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c238:
    // 0x20c238: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x20c238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_20c23c:
    // 0x20c23c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_20c240:
    // 0x20c240: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x20c240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_20c244:
    // 0x20c244: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x20c244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_20c248:
    // 0x20c248: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20c248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20c24c:
    // 0x20c24c: 0x246356b8  addiu       $v1, $v1, 0x56B8
    ctx->pc = 0x20c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22200));
label_20c250:
    // 0x20c250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c254:
    // 0x20c254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c258:
    // 0x20c258: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x20c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_20c25c:
    // 0x20c25c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20c260:
    // 0x20c260: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c264:
    // 0x20c264: 0x10000018  b           . + 4 + (0x18 << 2)
label_20c268:
    if (ctx->pc == 0x20C268u) {
        ctx->pc = 0x20C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C264u;
        // 0x20c268: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C26Cu;
        goto label_20c26c;
    }
    ctx->pc = 0x20C264u;
    {
        const bool branch_taken_0x20c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C264u;
        // 0x20c268: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c264) {
            ctx->pc = 0x20C2C8u;
            goto label_20c2c8;
        }
    }
    ctx->pc = 0x20C26Cu;
label_20c26c:
    // 0x20c26c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20c270:
    // 0x20c270: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
label_20c274:
    if (ctx->pc == 0x20C274u) {
        ctx->pc = 0x20C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C270u;
        // 0x20c274: 0x2652000f  addiu       $s2, $s2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C278u;
        goto label_20c278;
    }
    ctx->pc = 0x20C270u;
    {
        const bool branch_taken_0x20c270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C270u;
        // 0x20c274: 0x2652000f  addiu       $s2, $s2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c270) {
            ctx->pc = 0x20C2C8u;
            goto label_20c2c8;
        }
    }
    ctx->pc = 0x20C278u;
label_20c278:
    // 0x20c278: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_20c27c:
    if (ctx->pc == 0x20C27Cu) {
        ctx->pc = 0x20C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C278u;
        // 0x20c27c: 0x2379804  sllv        $s3, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C280u;
        goto label_20c280;
    }
    ctx->pc = 0x20C278u;
    {
        const bool branch_taken_0x20c278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C278u;
        // 0x20c27c: 0x2379804  sllv        $s3, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c278) {
            ctx->pc = 0x20C2C0u;
            goto label_20c2c0;
        }
    }
    ctx->pc = 0x20C280u;
label_20c280:
    // 0x20c280: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x20c280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_20c284:
    // 0x20c284: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20c288:
    if (ctx->pc == 0x20C288u) {
        ctx->pc = 0x20C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C284u;
        // 0x20c288: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C28Cu;
        goto label_20c28c;
    }
    ctx->pc = 0x20C284u;
    {
        const bool branch_taken_0x20c284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C284u;
        // 0x20c288: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c284) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C28Cu;
label_20c28c:
    // 0x20c28c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c290:
    // 0x20c290: 0xc087e18  jal         func_21F860
label_20c294:
    if (ctx->pc == 0x20C294u) {
        ctx->pc = 0x20C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C290u;
        // 0x20c294: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C298u;
        goto label_20c298;
    }
    ctx->pc = 0x20C290u;
    SET_GPR_U32(ctx, 31, 0x20C298u);
    ctx->pc = 0x20C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C290u;
    // 0x20c294: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C290u, 0x20C298u)) {
        return;
    }
    ctx->pc = 0x20C298u;
label_20c298:
    // 0x20c298: 0x1040ff8c  beqz        $v0, . + 4 + (-0x74 << 2)
label_20c29c:
    if (ctx->pc == 0x20C29Cu) {
        ctx->pc = 0x20C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C298u;
        // 0x20c29c: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C2A0u;
        goto label_20c2a0;
    }
    ctx->pc = 0x20C298u;
    {
        const bool branch_taken_0x20c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C298u;
        // 0x20c29c: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c298) {
            ctx->pc = 0x20C0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c0cc;
        }
    }
    ctx->pc = 0x20C2A0u;
label_20c2a0:
    // 0x20c2a0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x20c2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c2a4:
    // 0x20c2a4: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x20c2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_20c2a8:
    // 0x20c2a8: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x20c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_20c2ac:
    // 0x20c2ac: 0xc71017  dsrav       $v0, $a3, $a2
    ctx->pc = 0x20c2acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 6) & 0x3F));
label_20c2b0:
    // 0x20c2b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c2b4:
    // 0x20c2b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c2b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c2b8:
    // 0x20c2b8: 0x438824  and         $s1, $v0, $v1
    ctx->pc = 0x20c2b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20c2bc:
    // 0x20c2bc: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x20c2bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_20c2c0:
    // 0x20c2c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_20c2c4:
    if (ctx->pc == 0x20C2C4u) {
        ctx->pc = 0x20C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C0u;
        // 0x20c2c4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C2C8u;
        goto label_20c2c8;
    }
    ctx->pc = 0x20C2C0u;
    {
        const bool branch_taken_0x20c2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C0u;
        // 0x20c2c4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2c0) {
            ctx->pc = 0x20C2D8u;
            goto label_20c2d8;
        }
    }
    ctx->pc = 0x20C2C8u;
label_20c2c8:
    // 0x20c2c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20c2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20c2cc:
    // 0x20c2cc: 0x3d2102a  slt         $v0, $fp, $s2
    ctx->pc = 0x20c2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_20c2d0:
    // 0x20c2d0: 0x1040ff97  beqz        $v0, . + 4 + (-0x69 << 2)
label_20c2d4:
    if (ctx->pc == 0x20C2D4u) {
        ctx->pc = 0x20C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2D0u;
        // 0x20c2d4: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C2D8u;
        goto label_20c2d8;
    }
    ctx->pc = 0x20C2D0u;
    {
        const bool branch_taken_0x20c2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2D0u;
        // 0x20c2d4: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2d0) {
            ctx->pc = 0x20C130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c130;
        }
    }
    ctx->pc = 0x20C2D8u;
label_20c2d8:
    // 0x20c2d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20c2dc:
    // 0x20c2dc: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_20c2e0:
    // 0x20c2e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20c2e4:
    // 0x20c2e4: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x20c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_20c2e8:
    // 0x20c2e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20c2ec:
    // 0x20c2ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x20c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_20c2f0:
    // 0x20c2f0: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x20c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_20c2f4:
    // 0x20c2f4: 0xaea60018  sw          $a2, 0x18($s5)
    ctx->pc = 0x20c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 6));
label_20c2f8:
    // 0x20c2f8: 0xaeb30020  sw          $s3, 0x20($s5)
    ctx->pc = 0x20c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 19));
label_20c2fc:
    // 0x20c2fc: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x20c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_20c300:
    // 0x20c300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c304:
    // 0x20c304: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20c304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20c308:
    // 0x20c308: 0xaea30034  sw          $v1, 0x34($s5)
    ctx->pc = 0x20c308u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 3));
label_20c30c:
    // 0x20c30c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x20c30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20c310:
    // 0x20c310: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x20c310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20c314:
    // 0x20c314: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x20c314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20c318:
    // 0x20c318: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x20c318u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20c31c:
    // 0x20c31c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x20c31cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20c320:
    // 0x20c320: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20c320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20c324:
    // 0x20c324: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20c324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20c328:
    // 0x20c328: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x20c328u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20c32c:
    // 0x20c32c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x20c32cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20c330:
    // 0x20c330: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20c330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20c334:
    // 0x20c334: 0x3e00008  jr          $ra
label_20c338:
    if (ctx->pc == 0x20C338u) {
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C33Cu;
        goto label_20c33c;
    }
    ctx->pc = 0x20C334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C33Cu;
label_20c33c:
    // 0x20c33c: 0x0  nop
    ctx->pc = 0x20c33cu;
    // NOP
    ctx->pc = 0x20c340u;
}
