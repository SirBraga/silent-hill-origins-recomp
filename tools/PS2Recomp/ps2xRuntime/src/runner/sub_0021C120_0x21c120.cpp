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

// Function: sub_0021C120
// Address: 0x21c120 - 0x21c450
void sub_0021C120_0x21c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C120_0x21c120");
#endif

    switch (ctx->pc) {
        case 0x21c120u: goto label_21c120;
        case 0x21c124u: goto label_21c124;
        case 0x21c128u: goto label_21c128;
        case 0x21c12cu: goto label_21c12c;
        case 0x21c130u: goto label_21c130;
        case 0x21c134u: goto label_21c134;
        case 0x21c138u: goto label_21c138;
        case 0x21c13cu: goto label_21c13c;
        case 0x21c140u: goto label_21c140;
        case 0x21c144u: goto label_21c144;
        case 0x21c148u: goto label_21c148;
        case 0x21c14cu: goto label_21c14c;
        case 0x21c150u: goto label_21c150;
        case 0x21c154u: goto label_21c154;
        case 0x21c158u: goto label_21c158;
        case 0x21c15cu: goto label_21c15c;
        case 0x21c160u: goto label_21c160;
        case 0x21c164u: goto label_21c164;
        case 0x21c168u: goto label_21c168;
        case 0x21c16cu: goto label_21c16c;
        case 0x21c170u: goto label_21c170;
        case 0x21c174u: goto label_21c174;
        case 0x21c178u: goto label_21c178;
        case 0x21c17cu: goto label_21c17c;
        case 0x21c180u: goto label_21c180;
        case 0x21c184u: goto label_21c184;
        case 0x21c188u: goto label_21c188;
        case 0x21c18cu: goto label_21c18c;
        case 0x21c190u: goto label_21c190;
        case 0x21c194u: goto label_21c194;
        case 0x21c198u: goto label_21c198;
        case 0x21c19cu: goto label_21c19c;
        case 0x21c1a0u: goto label_21c1a0;
        case 0x21c1a4u: goto label_21c1a4;
        case 0x21c1a8u: goto label_21c1a8;
        case 0x21c1acu: goto label_21c1ac;
        case 0x21c1b0u: goto label_21c1b0;
        case 0x21c1b4u: goto label_21c1b4;
        case 0x21c1b8u: goto label_21c1b8;
        case 0x21c1bcu: goto label_21c1bc;
        case 0x21c1c0u: goto label_21c1c0;
        case 0x21c1c4u: goto label_21c1c4;
        case 0x21c1c8u: goto label_21c1c8;
        case 0x21c1ccu: goto label_21c1cc;
        case 0x21c1d0u: goto label_21c1d0;
        case 0x21c1d4u: goto label_21c1d4;
        case 0x21c1d8u: goto label_21c1d8;
        case 0x21c1dcu: goto label_21c1dc;
        case 0x21c1e0u: goto label_21c1e0;
        case 0x21c1e4u: goto label_21c1e4;
        case 0x21c1e8u: goto label_21c1e8;
        case 0x21c1ecu: goto label_21c1ec;
        case 0x21c1f0u: goto label_21c1f0;
        case 0x21c1f4u: goto label_21c1f4;
        case 0x21c1f8u: goto label_21c1f8;
        case 0x21c1fcu: goto label_21c1fc;
        case 0x21c200u: goto label_21c200;
        case 0x21c204u: goto label_21c204;
        case 0x21c208u: goto label_21c208;
        case 0x21c20cu: goto label_21c20c;
        case 0x21c210u: goto label_21c210;
        case 0x21c214u: goto label_21c214;
        case 0x21c218u: goto label_21c218;
        case 0x21c21cu: goto label_21c21c;
        case 0x21c220u: goto label_21c220;
        case 0x21c224u: goto label_21c224;
        case 0x21c228u: goto label_21c228;
        case 0x21c22cu: goto label_21c22c;
        case 0x21c230u: goto label_21c230;
        case 0x21c234u: goto label_21c234;
        case 0x21c238u: goto label_21c238;
        case 0x21c23cu: goto label_21c23c;
        case 0x21c240u: goto label_21c240;
        case 0x21c244u: goto label_21c244;
        case 0x21c248u: goto label_21c248;
        case 0x21c24cu: goto label_21c24c;
        case 0x21c250u: goto label_21c250;
        case 0x21c254u: goto label_21c254;
        case 0x21c258u: goto label_21c258;
        case 0x21c25cu: goto label_21c25c;
        case 0x21c260u: goto label_21c260;
        case 0x21c264u: goto label_21c264;
        case 0x21c268u: goto label_21c268;
        case 0x21c26cu: goto label_21c26c;
        case 0x21c270u: goto label_21c270;
        case 0x21c274u: goto label_21c274;
        case 0x21c278u: goto label_21c278;
        case 0x21c27cu: goto label_21c27c;
        case 0x21c280u: goto label_21c280;
        case 0x21c284u: goto label_21c284;
        case 0x21c288u: goto label_21c288;
        case 0x21c28cu: goto label_21c28c;
        case 0x21c290u: goto label_21c290;
        case 0x21c294u: goto label_21c294;
        case 0x21c298u: goto label_21c298;
        case 0x21c29cu: goto label_21c29c;
        case 0x21c2a0u: goto label_21c2a0;
        case 0x21c2a4u: goto label_21c2a4;
        case 0x21c2a8u: goto label_21c2a8;
        case 0x21c2acu: goto label_21c2ac;
        case 0x21c2b0u: goto label_21c2b0;
        case 0x21c2b4u: goto label_21c2b4;
        case 0x21c2b8u: goto label_21c2b8;
        case 0x21c2bcu: goto label_21c2bc;
        case 0x21c2c0u: goto label_21c2c0;
        case 0x21c2c4u: goto label_21c2c4;
        case 0x21c2c8u: goto label_21c2c8;
        case 0x21c2ccu: goto label_21c2cc;
        case 0x21c2d0u: goto label_21c2d0;
        case 0x21c2d4u: goto label_21c2d4;
        case 0x21c2d8u: goto label_21c2d8;
        case 0x21c2dcu: goto label_21c2dc;
        case 0x21c2e0u: goto label_21c2e0;
        case 0x21c2e4u: goto label_21c2e4;
        case 0x21c2e8u: goto label_21c2e8;
        case 0x21c2ecu: goto label_21c2ec;
        case 0x21c2f0u: goto label_21c2f0;
        case 0x21c2f4u: goto label_21c2f4;
        case 0x21c2f8u: goto label_21c2f8;
        case 0x21c2fcu: goto label_21c2fc;
        case 0x21c300u: goto label_21c300;
        case 0x21c304u: goto label_21c304;
        case 0x21c308u: goto label_21c308;
        case 0x21c30cu: goto label_21c30c;
        case 0x21c310u: goto label_21c310;
        case 0x21c314u: goto label_21c314;
        case 0x21c318u: goto label_21c318;
        case 0x21c31cu: goto label_21c31c;
        case 0x21c320u: goto label_21c320;
        case 0x21c324u: goto label_21c324;
        case 0x21c328u: goto label_21c328;
        case 0x21c32cu: goto label_21c32c;
        case 0x21c330u: goto label_21c330;
        case 0x21c334u: goto label_21c334;
        case 0x21c338u: goto label_21c338;
        case 0x21c33cu: goto label_21c33c;
        case 0x21c340u: goto label_21c340;
        case 0x21c344u: goto label_21c344;
        case 0x21c348u: goto label_21c348;
        case 0x21c34cu: goto label_21c34c;
        case 0x21c350u: goto label_21c350;
        case 0x21c354u: goto label_21c354;
        case 0x21c358u: goto label_21c358;
        case 0x21c35cu: goto label_21c35c;
        case 0x21c360u: goto label_21c360;
        case 0x21c364u: goto label_21c364;
        case 0x21c368u: goto label_21c368;
        case 0x21c36cu: goto label_21c36c;
        case 0x21c370u: goto label_21c370;
        case 0x21c374u: goto label_21c374;
        case 0x21c378u: goto label_21c378;
        case 0x21c37cu: goto label_21c37c;
        case 0x21c380u: goto label_21c380;
        case 0x21c384u: goto label_21c384;
        case 0x21c388u: goto label_21c388;
        case 0x21c38cu: goto label_21c38c;
        case 0x21c390u: goto label_21c390;
        case 0x21c394u: goto label_21c394;
        case 0x21c398u: goto label_21c398;
        case 0x21c39cu: goto label_21c39c;
        case 0x21c3a0u: goto label_21c3a0;
        case 0x21c3a4u: goto label_21c3a4;
        case 0x21c3a8u: goto label_21c3a8;
        case 0x21c3acu: goto label_21c3ac;
        case 0x21c3b0u: goto label_21c3b0;
        case 0x21c3b4u: goto label_21c3b4;
        case 0x21c3b8u: goto label_21c3b8;
        case 0x21c3bcu: goto label_21c3bc;
        case 0x21c3c0u: goto label_21c3c0;
        case 0x21c3c4u: goto label_21c3c4;
        case 0x21c3c8u: goto label_21c3c8;
        case 0x21c3ccu: goto label_21c3cc;
        case 0x21c3d0u: goto label_21c3d0;
        case 0x21c3d4u: goto label_21c3d4;
        case 0x21c3d8u: goto label_21c3d8;
        case 0x21c3dcu: goto label_21c3dc;
        case 0x21c3e0u: goto label_21c3e0;
        case 0x21c3e4u: goto label_21c3e4;
        case 0x21c3e8u: goto label_21c3e8;
        case 0x21c3ecu: goto label_21c3ec;
        case 0x21c3f0u: goto label_21c3f0;
        case 0x21c3f4u: goto label_21c3f4;
        case 0x21c3f8u: goto label_21c3f8;
        case 0x21c3fcu: goto label_21c3fc;
        case 0x21c400u: goto label_21c400;
        case 0x21c404u: goto label_21c404;
        case 0x21c408u: goto label_21c408;
        case 0x21c40cu: goto label_21c40c;
        case 0x21c410u: goto label_21c410;
        case 0x21c414u: goto label_21c414;
        case 0x21c418u: goto label_21c418;
        case 0x21c41cu: goto label_21c41c;
        case 0x21c420u: goto label_21c420;
        case 0x21c424u: goto label_21c424;
        case 0x21c428u: goto label_21c428;
        case 0x21c42cu: goto label_21c42c;
        case 0x21c430u: goto label_21c430;
        case 0x21c434u: goto label_21c434;
        case 0x21c438u: goto label_21c438;
        case 0x21c43cu: goto label_21c43c;
        case 0x21c440u: goto label_21c440;
        case 0x21c444u: goto label_21c444;
        case 0x21c448u: goto label_21c448;
        case 0x21c44cu: goto label_21c44c;
        default: break;
    }

    ctx->pc = 0x21c120u;

label_21c120:
    // 0x21c120: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x21c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_21c124:
    // 0x21c124: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x21c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_21c128:
    // 0x21c128: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x21c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_21c12c:
    // 0x21c12c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x21c12cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c130:
    // 0x21c130: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x21c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_21c134:
    // 0x21c134: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x21c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_21c138:
    // 0x21c138: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x21c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_21c13c:
    // 0x21c13c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x21c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_21c140:
    // 0x21c140: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x21c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_21c144:
    // 0x21c144: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x21c144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_21c148:
    // 0x21c148: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x21c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_21c14c:
    // 0x21c14c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_21c150:
    // 0x21c150: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x21c150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_21c154:
    // 0x21c154: 0x8ec2015c  lw          $v0, 0x15C($s6)
    ctx->pc = 0x21c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
label_21c158:
    // 0x21c158: 0x8ecb01ac  lw          $t3, 0x1AC($s6)
    ctx->pc = 0x21c158u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 428)));
label_21c15c:
    // 0x21c15c: 0x8ec30140  lw          $v1, 0x140($s6)
    ctx->pc = 0x21c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
label_21c160:
    // 0x21c160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21c164:
    // 0x21c164: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_21c168:
    // 0x21c168: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21c168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21c16c:
    // 0x21c16c: 0x8d6c0018  lw          $t4, 0x18($t3)
    ctx->pc = 0x21c16cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
label_21c170:
    // 0x21c170: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x21c170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_21c174:
    // 0x21c174: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x21c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
label_21c178:
    // 0x21c178: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x21c178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c17c:
    // 0x21c17c: 0x50400084  beql        $v0, $zero, . + 4 + (0x84 << 2)
label_21c180:
    if (ctx->pc == 0x21C180u) {
        ctx->pc = 0x21C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C17Cu;
        // 0x21c180: 0x8ec2009c  lw          $v0, 0x9C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C184u;
        goto label_21c184;
    }
    ctx->pc = 0x21C17Cu;
    {
        const bool branch_taken_0x21c17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c17c) {
            ctx->pc = 0x21C180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C17Cu;
            // 0x21c180: 0x8ec2009c  lw          $v0, 0x9C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C390u;
            goto label_21c390;
        }
    }
    ctx->pc = 0x21C184u;
label_21c184:
    // 0x21c184: 0x0  nop
    ctx->pc = 0x21c184u;
    // NOP
label_21c188:
    // 0x21c188: 0x8d7e0014  lw          $fp, 0x14($t3)
    ctx->pc = 0x21c188u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_21c18c:
    // 0x21c18c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c190:
    // 0x21c190: 0x7e102b  sltu        $v0, $v1, $fp
    ctx->pc = 0x21c190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_21c194:
    // 0x21c194: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
label_21c198:
    if (ctx->pc == 0x21C198u) {
        ctx->pc = 0x21C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C194u;
        // 0x21c198: 0x8d62001c  lw          $v0, 0x1C($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C19Cu;
        goto label_21c19c;
    }
    ctx->pc = 0x21C194u;
    {
        const bool branch_taken_0x21c194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c194) {
            ctx->pc = 0x21C198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C194u;
            // 0x21c198: 0x8d62001c  lw          $v0, 0x1C($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C37Cu;
            goto label_21c37c;
        }
    }
    ctx->pc = 0x21C19Cu;
label_21c19c:
    // 0x21c19c: 0x25640020  addiu       $a0, $t3, 0x20
    ctx->pc = 0x21c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_21c1a0:
    // 0x21c1a0: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x21c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_21c1a4:
    // 0x21c1a4: 0x8ec50164  lw          $a1, 0x164($s6)
    ctx->pc = 0x21c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 356)));
label_21c1a8:
    // 0x21c1a8: 0x8d640020  lw          $a0, 0x20($t3)
    ctx->pc = 0x21c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
label_21c1ac:
    // 0x21c1ac: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x21c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_21c1b0:
    // 0x21c1b0: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x21c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
label_21c1b4:
    // 0x21c1b4: 0xc08489c  jal         func_212270
label_21c1b8:
    if (ctx->pc == 0x21C1B8u) {
        ctx->pc = 0x21C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1B4u;
        // 0x21c1b8: 0x7fac0040  sq          $t4, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C1BCu;
        goto label_21c1bc;
    }
    ctx->pc = 0x21C1B4u;
    SET_GPR_U32(ctx, 31, 0x21C1BCu);
    ctx->pc = 0x21C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C1B4u;
    // 0x21c1b8: 0x7fac0040  sq          $t4, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212270u, 0x21C1B4u, 0x21C1BCu)) {
        return;
    }
    ctx->pc = 0x21C1BCu;
label_21c1bc:
    // 0x21c1bc: 0x8ec301bc  lw          $v1, 0x1BC($s6)
    ctx->pc = 0x21c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 444)));
label_21c1c0:
    // 0x21c1c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21c1c4:
    // 0x21c1c4: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x21c1c4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c1c8:
    // 0x21c1c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21c1cc:
    // 0x21c1cc: 0x40f809  jalr        $v0
label_21c1d0:
    if (ctx->pc == 0x21C1D0u) {
        ctx->pc = 0x21C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1CCu;
        // 0x21c1d0: 0x25650020  addiu       $a1, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C1D4u;
        goto label_21c1d4;
    }
    ctx->pc = 0x21C1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C1D4u);
        ctx->pc = 0x21C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1CCu;
        // 0x21c1d0: 0x25650020  addiu       $a1, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C1CCu, 0x21C1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C1D4u;
label_21c1d4:
    // 0x21c1d4: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x21c1d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c1d8:
    // 0x21c1d8: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_21c1dc:
    if (ctx->pc == 0x21C1DCu) {
        ctx->pc = 0x21C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1D8u;
        // 0x21c1dc: 0x7bac0040  lq          $t4, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C1E0u;
        goto label_21c1e0;
    }
    ctx->pc = 0x21C1D8u;
    {
        const bool branch_taken_0x21c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1D8u;
        // 0x21c1dc: 0x7bac0040  lq          $t4, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1d8) {
            ctx->pc = 0x21C3FCu;
            goto label_21c3fc;
        }
    }
    ctx->pc = 0x21C1E0u;
label_21c1e0:
    // 0x21c1e0: 0x8ec20148  lw          $v0, 0x148($s6)
    ctx->pc = 0x21c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 328)));
label_21c1e4:
    // 0x21c1e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21c1e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c1e8:
    // 0x21c1e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c1ec:
    // 0x21c1ec: 0x1840005d  blez        $v0, . + 4 + (0x5D << 2)
label_21c1f0:
    if (ctx->pc == 0x21C1F0u) {
        ctx->pc = 0x21C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1ECu;
        // 0x21c1f0: 0x27d90001  addiu       $t9, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C1F4u;
        goto label_21c1f4;
    }
    ctx->pc = 0x21C1ECu;
    {
        const bool branch_taken_0x21c1ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1ECu;
        // 0x21c1f0: 0x27d90001  addiu       $t9, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1ec) {
            ctx->pc = 0x21C364u;
            goto label_21c364;
        }
    }
    ctx->pc = 0x21C1F4u;
label_21c1f4:
    // 0x21c1f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c1f8:
    // 0x21c1f8: 0x3c2782b  sltu        $t7, $fp, $v0
    ctx->pc = 0x21c1f8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c1fc:
    // 0x21c1fc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x21c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c200:
    // 0x21c200: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x21c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_21c204:
    // 0x21c204: 0x8c52014c  lw          $s2, 0x14C($v0)
    ctx->pc = 0x21c204u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_21c208:
    // 0x21c208: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x21c208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_21c20c:
    // 0x21c20c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_21c210:
    if (ctx->pc == 0x21C210u) {
        ctx->pc = 0x21C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C20Cu;
        // 0x21c210: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C214u;
        goto label_21c214;
    }
    ctx->pc = 0x21C20Cu;
    {
        const bool branch_taken_0x21c20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c20c) {
            ctx->pc = 0x21C210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C20Cu;
            // 0x21c210: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C224u;
            goto label_21c224;
        }
    }
    ctx->pc = 0x21C214u;
label_21c214:
    // 0x21c214: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x21c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_21c218:
    // 0x21c218: 0x24c90001  addiu       $t1, $a2, 0x1
    ctx->pc = 0x21c218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21c21c:
    // 0x21c21c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_21c220:
    if (ctx->pc == 0x21C220u) {
        ctx->pc = 0x21C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C21Cu;
        // 0x21c220: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C224u;
        goto label_21c224;
    }
    ctx->pc = 0x21C21Cu;
    {
        const bool branch_taken_0x21c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C21Cu;
        // 0x21c220: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c21c) {
            ctx->pc = 0x21C350u;
            goto label_21c350;
        }
    }
    ctx->pc = 0x21C224u;
label_21c224:
    // 0x21c224: 0x8ec301c0  lw          $v1, 0x1C0($s6)
    ctx->pc = 0x21c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 448)));
label_21c228:
    // 0x21c228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21c228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c22c:
    // 0x21c22c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21c230:
    // 0x21c230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21c234:
    // 0x21c234: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
label_21c238:
    if (ctx->pc == 0x21C238u) {
        ctx->pc = 0x21C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C234u;
        // 0x21c238: 0x8c6e0004  lw          $t6, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C23Cu;
        goto label_21c23c;
    }
    ctx->pc = 0x21C234u;
    {
        const bool branch_taken_0x21c234 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C234u;
        // 0x21c238: 0x8c6e0004  lw          $t6, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c234) {
            ctx->pc = 0x21C244u;
            goto label_21c244;
        }
    }
    ctx->pc = 0x21C23Cu;
label_21c23c:
    // 0x21c23c: 0x10000002  b           . + 4 + (0x2 << 2)
label_21c240:
    if (ctx->pc == 0x21C240u) {
        ctx->pc = 0x21C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C23Cu;
        // 0x21c240: 0x8e570034  lw          $s7, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C244u;
        goto label_21c244;
    }
    ctx->pc = 0x21C23Cu;
    {
        const bool branch_taken_0x21c23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C23Cu;
        // 0x21c240: 0x8e570034  lw          $s7, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c23c) {
            ctx->pc = 0x21C248u;
            goto label_21c248;
        }
    }
    ctx->pc = 0x21C244u;
label_21c244:
    // 0x21c244: 0x8e570044  lw          $s7, 0x44($s2)
    ctx->pc = 0x21c244u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_21c248:
    // 0x21c248: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x21c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_21c24c:
    // 0x21c24c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21c250:
    // 0x21c250: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21c250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21c254:
    // 0x21c254: 0x24c90001  addiu       $t1, $a2, 0x1
    ctx->pc = 0x21c254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21c258:
    // 0x21c258: 0x1831818  mult        $v1, $t4, $v1
    ctx->pc = 0x21c258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21c25c:
    // 0x21c25c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c260:
    // 0x21c260: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21c264:
    // 0x21c264: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21c264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c268:
    // 0x21c268: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x21c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_21c26c:
    // 0x21c26c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21c270:
    // 0x21c270: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x21c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_21c274:
    // 0x21c274: 0x3c46818  mult        $t5, $fp, $a0
    ctx->pc = 0x21c274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_21c278:
    // 0x21c278: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
label_21c27c:
    if (ctx->pc == 0x21C27Cu) {
        ctx->pc = 0x21C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C278u;
        // 0x21c27c: 0xa3a021  addu        $s4, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C280u;
        goto label_21c280;
    }
    ctx->pc = 0x21C278u;
    {
        const bool branch_taken_0x21c278 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C278u;
        // 0x21c27c: 0xa3a021  addu        $s4, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c278) {
            ctx->pc = 0x21C350u;
            goto label_21c350;
        }
    }
    ctx->pc = 0x21C280u;
label_21c280:
    // 0x21c280: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x21c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
label_21c284:
    // 0x21c284: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21c284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_21c288:
    // 0x21c288: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21c288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_21c28c:
    // 0x21c28c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_21c290:
    if (ctx->pc == 0x21C290u) {
        ctx->pc = 0x21C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C28Cu;
        // 0x21c290: 0x24d50001  addiu       $s5, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C294u;
        goto label_21c294;
    }
    ctx->pc = 0x21C28Cu;
    {
        const bool branch_taken_0x21c28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C28Cu;
        // 0x21c290: 0x24d50001  addiu       $s5, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c28c) {
            ctx->pc = 0x21C2A8u;
            goto label_21c2a8;
        }
    }
    ctx->pc = 0x21C294u;
label_21c294:
    // 0x21c294: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x21c294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_21c298:
    // 0x21c298: 0x1861021  addu        $v0, $t4, $a2
    ctx->pc = 0x21c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_21c29c:
    // 0x21c29c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21c29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21c2a0:
    // 0x21c2a0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_21c2a4:
    if (ctx->pc == 0x21C2A4u) {
        ctx->pc = 0x21C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2A0u;
        // 0x21c2a4: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C2A8u;
        goto label_21c2a8;
    }
    ctx->pc = 0x21C2A0u;
    {
        const bool branch_taken_0x21c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c2a0) {
            ctx->pc = 0x21C2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C2A0u;
            // 0x21c2a4: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C330u;
            goto label_21c330;
        }
    }
    ctx->pc = 0x21C2A8u;
label_21c2a8:
    // 0x21c2a8: 0x1ae00020  blez        $s7, . + 4 + (0x20 << 2)
label_21c2ac:
    if (ctx->pc == 0x21C2ACu) {
        ctx->pc = 0x21C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2A8u;
        // 0x21c2ac: 0x1a0982d  daddu       $s3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C2B0u;
        goto label_21c2b0;
    }
    ctx->pc = 0x21C2A8u;
    {
        const bool branch_taken_0x21c2a8 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x21C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2A8u;
        // 0x21c2ac: 0x1a0982d  daddu       $s3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2a8) {
            ctx->pc = 0x21C32Cu;
            goto label_21c32c;
        }
    }
    ctx->pc = 0x21C2B0u;
label_21c2b0:
    // 0x21c2b0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x21c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_21c2b4:
    // 0x21c2b4: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x21c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_21c2b8:
    // 0x21c2b8: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x21c2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21c2bc:
    // 0x21c2bc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x21c2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21c2c0:
    // 0x21c2c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x21c2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c2c4:
    // 0x21c2c4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x21c2c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21c2c8:
    // 0x21c2c8: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x21c2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
label_21c2cc:
    // 0x21c2cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21c2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21c2d0:
    // 0x21c2d0: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x21c2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
label_21c2d4:
    // 0x21c2d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c2d8:
    // 0x21c2d8: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x21c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
label_21c2dc:
    // 0x21c2dc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x21c2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21c2e0:
    // 0x21c2e0: 0x7fac0040  sq          $t4, 0x40($sp)
    ctx->pc = 0x21c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
label_21c2e4:
    // 0x21c2e4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x21c2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21c2e8:
    // 0x21c2e8: 0x7fad0050  sq          $t5, 0x50($sp)
    ctx->pc = 0x21c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
label_21c2ec:
    // 0x21c2ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21c2f0:
    // 0x21c2f0: 0x7fae0060  sq          $t6, 0x60($sp)
    ctx->pc = 0x21c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 14));
label_21c2f4:
    // 0x21c2f4: 0x7faf0070  sq          $t7, 0x70($sp)
    ctx->pc = 0x21c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 15));
label_21c2f8:
    // 0x21c2f8: 0x1c0f809  jalr        $t6
label_21c2fc:
    if (ctx->pc == 0x21C2FCu) {
        ctx->pc = 0x21C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2F8u;
        // 0x21c2fc: 0x7fb90080  sq          $t9, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C300u;
        goto label_21c300;
    }
    ctx->pc = 0x21C2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 14);
        SET_GPR_U32(ctx, 31, 0x21C300u);
        ctx->pc = 0x21C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2F8u;
        // 0x21c2fc: 0x7fb90080  sq          $t9, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C2F8u, 0x21C300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C300u;
label_21c300:
    // 0x21c300: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x21c300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_21c304:
    // 0x21c304: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x21c304u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c308:
    // 0x21c308: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x21c308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_21c30c:
    // 0x21c30c: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x21c30cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c310:
    // 0x21c310: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x21c310u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c314:
    // 0x21c314: 0x7bac0040  lq          $t4, 0x40($sp)
    ctx->pc = 0x21c314u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21c318:
    // 0x21c318: 0x7bad0050  lq          $t5, 0x50($sp)
    ctx->pc = 0x21c318u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21c31c:
    // 0x21c31c: 0x7bae0060  lq          $t6, 0x60($sp)
    ctx->pc = 0x21c31cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21c320:
    // 0x21c320: 0x7baf0070  lq          $t7, 0x70($sp)
    ctx->pc = 0x21c320u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21c324:
    // 0x21c324: 0x1620ffe6  bnez        $s1, . + 4 + (-0x1A << 2)
label_21c328:
    if (ctx->pc == 0x21C328u) {
        ctx->pc = 0x21C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C324u;
        // 0x21c328: 0x7bb90080  lq          $t9, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C32Cu;
        goto label_21c32c;
    }
    ctx->pc = 0x21C324u;
    {
        const bool branch_taken_0x21c324 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C324u;
        // 0x21c328: 0x7bb90080  lq          $t9, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c324) {
            ctx->pc = 0x21C2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c2c0;
        }
    }
    ctx->pc = 0x21C32Cu;
label_21c32c:
    // 0x21c32c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x21c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_21c330:
    // 0x21c330: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21c330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21c334:
    // 0x21c334: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x21c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_21c338:
    // 0x21c338: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x21c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_21c33c:
    // 0x21c33c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21c340:
    // 0x21c340: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x21c340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_21c344:
    // 0x21c344: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x21c344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21c348:
    // 0x21c348: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_21c34c:
    if (ctx->pc == 0x21C34Cu) {
        ctx->pc = 0x21C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C348u;
        // 0x21c34c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C350u;
        goto label_21c350;
    }
    ctx->pc = 0x21C348u;
    {
        const bool branch_taken_0x21c348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C348u;
        // 0x21c34c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c348) {
            ctx->pc = 0x21C280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c280;
        }
    }
    ctx->pc = 0x21C350u;
label_21c350:
    // 0x21c350: 0x8ec20148  lw          $v0, 0x148($s6)
    ctx->pc = 0x21c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 328)));
label_21c354:
    // 0x21c354: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x21c354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21c358:
    // 0x21c358: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x21c358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c35c:
    // 0x21c35c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_21c360:
    if (ctx->pc == 0x21C360u) {
        ctx->pc = 0x21C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C35Cu;
        // 0x21c360: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C364u;
        goto label_21c364;
    }
    ctx->pc = 0x21C35Cu;
    {
        const bool branch_taken_0x21c35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C35Cu;
        // 0x21c360: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c35c) {
            ctx->pc = 0x21C200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c200;
        }
    }
    ctx->pc = 0x21C364u;
label_21c364:
    // 0x21c364: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c368:
    // 0x21c368: 0x320f02d  daddu       $fp, $t9, $zero
    ctx->pc = 0x21c368u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_21c36c:
    // 0x21c36c: 0x7e102b  sltu        $v0, $v1, $fp
    ctx->pc = 0x21c36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_21c370:
    // 0x21c370: 0x5040ff8d  beql        $v0, $zero, . + 4 + (-0x73 << 2)
label_21c374:
    if (ctx->pc == 0x21C374u) {
        ctx->pc = 0x21C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C370u;
        // 0x21c374: 0x8ec50164  lw          $a1, 0x164($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C378u;
        goto label_21c378;
    }
    ctx->pc = 0x21C370u;
    {
        const bool branch_taken_0x21c370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c370) {
            ctx->pc = 0x21C374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C370u;
            // 0x21c374: 0x8ec50164  lw          $a1, 0x164($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c1a8;
        }
    }
    ctx->pc = 0x21C378u;
label_21c378:
    // 0x21c378: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x21c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
label_21c37c:
    // 0x21c37c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x21c37cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_21c380:
    // 0x21c380: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x21c380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c384:
    // 0x21c384: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
label_21c388:
    if (ctx->pc == 0x21C388u) {
        ctx->pc = 0x21C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C384u;
        // 0x21c388: 0xad600014  sw          $zero, 0x14($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C38Cu;
        goto label_21c38c;
    }
    ctx->pc = 0x21C384u;
    {
        const bool branch_taken_0x21c384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C384u;
        // 0x21c388: 0xad600014  sw          $zero, 0x14($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c384) {
            ctx->pc = 0x21C188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c188;
        }
    }
    ctx->pc = 0x21C38Cu;
label_21c38c:
    // 0x21c38c: 0x8ec2009c  lw          $v0, 0x9C($s6)
    ctx->pc = 0x21c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 156)));
label_21c390:
    // 0x21c390: 0x8ec30094  lw          $v1, 0x94($s6)
    ctx->pc = 0x21c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
label_21c394:
    // 0x21c394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21c398:
    // 0x21c398: 0x8ec50140  lw          $a1, 0x140($s6)
    ctx->pc = 0x21c398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
label_21c39c:
    // 0x21c39c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21c3a0:
    // 0x21c3a0: 0xaec2009c  sw          $v0, 0x9C($s6)
    ctx->pc = 0x21c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 156), GPR_U32(ctx, 2));
label_21c3a4:
    // 0x21c3a4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x21c3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_21c3a8:
    // 0x21c3a8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_21c3ac:
    if (ctx->pc == 0x21C3ACu) {
        ctx->pc = 0x21C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3A8u;
        // 0x21c3ac: 0xaec30094  sw          $v1, 0x94($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3B0u;
        goto label_21c3b0;
    }
    ctx->pc = 0x21C3A8u;
    {
        const bool branch_taken_0x21c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3A8u;
        // 0x21c3ac: 0xaec30094  sw          $v1, 0x94($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3a8) {
            ctx->pc = 0x21C40Cu;
            goto label_21c40c;
        }
    }
    ctx->pc = 0x21C3B0u;
label_21c3b0:
    // 0x21c3b0: 0x8ec20148  lw          $v0, 0x148($s6)
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 328)));
label_21c3b4:
    // 0x21c3b4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x21c3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_21c3b8:
    // 0x21c3b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21c3bc:
    if (ctx->pc == 0x21C3BCu) {
        ctx->pc = 0x21C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3B8u;
        // 0x21c3bc: 0x8ec401ac  lw          $a0, 0x1AC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3C0u;
        goto label_21c3c0;
    }
    ctx->pc = 0x21C3B8u;
    {
        const bool branch_taken_0x21c3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3B8u;
        // 0x21c3bc: 0x8ec401ac  lw          $a0, 0x1AC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3b8) {
            ctx->pc = 0x21C3CCu;
            goto label_21c3cc;
        }
    }
    ctx->pc = 0x21C3C0u;
label_21c3c0:
    // 0x21c3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c3c4:
    // 0x21c3c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_21c3c8:
    if (ctx->pc == 0x21C3C8u) {
        ctx->pc = 0x21C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3C4u;
        // 0x21c3c8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3CCu;
        goto label_21c3cc;
    }
    ctx->pc = 0x21C3C4u;
    {
        const bool branch_taken_0x21c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3C4u;
        // 0x21c3c8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3c4) {
            ctx->pc = 0x21C3ECu;
            goto label_21c3ec;
        }
    }
    ctx->pc = 0x21C3CCu;
label_21c3cc:
    // 0x21c3cc: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x21c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_21c3d0:
    // 0x21c3d0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x21c3d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c3d4:
    // 0x21c3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21c3d8:
    if (ctx->pc == 0x21C3D8u) {
        ctx->pc = 0x21C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3D4u;
        // 0x21c3d8: 0x8ec2014c  lw          $v0, 0x14C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3DCu;
        goto label_21c3dc;
    }
    ctx->pc = 0x21C3D4u;
    {
        const bool branch_taken_0x21c3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3D4u;
        // 0x21c3d8: 0x8ec2014c  lw          $v0, 0x14C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3d4) {
            ctx->pc = 0x21C3E4u;
            goto label_21c3e4;
        }
    }
    ctx->pc = 0x21C3DCu;
label_21c3dc:
    // 0x21c3dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_21c3e0:
    if (ctx->pc == 0x21C3E0u) {
        ctx->pc = 0x21C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3DCu;
        // 0x21c3e0: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3E4u;
        goto label_21c3e4;
    }
    ctx->pc = 0x21C3DCu;
    {
        const bool branch_taken_0x21c3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3DCu;
        // 0x21c3e0: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3dc) {
            ctx->pc = 0x21C3E8u;
            goto label_21c3e8;
        }
    }
    ctx->pc = 0x21C3E4u;
label_21c3e4:
    // 0x21c3e4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_21c3e8:
    // 0x21c3e8: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x21c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_21c3ec:
    // 0x21c3ec: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x21c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_21c3f0:
    // 0x21c3f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21c3f4:
    // 0x21c3f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_21c3f8:
    if (ctx->pc == 0x21C3F8u) {
        ctx->pc = 0x21C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3F4u;
        // 0x21c3f8: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3FCu;
        goto label_21c3fc;
    }
    ctx->pc = 0x21C3F4u;
    {
        const bool branch_taken_0x21c3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3F4u;
        // 0x21c3f8: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3f4) {
            ctx->pc = 0x21C420u;
            goto label_21c420;
        }
    }
    ctx->pc = 0x21C3FCu;
label_21c3fc:
    // 0x21c3fc: 0xad7e0014  sw          $fp, 0x14($t3)
    ctx->pc = 0x21c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 30));
label_21c400:
    // 0x21c400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c404:
    // 0x21c404: 0x10000006  b           . + 4 + (0x6 << 2)
label_21c408:
    if (ctx->pc == 0x21C408u) {
        ctx->pc = 0x21C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C404u;
        // 0x21c408: 0xad6c0018  sw          $t4, 0x18($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C40Cu;
        goto label_21c40c;
    }
    ctx->pc = 0x21C404u;
    {
        const bool branch_taken_0x21c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C404u;
        // 0x21c408: 0xad6c0018  sw          $t4, 0x18($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c404) {
            ctx->pc = 0x21C420u;
            goto label_21c420;
        }
    }
    ctx->pc = 0x21C40Cu;
label_21c40c:
    // 0x21c40c: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x21c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
label_21c410:
    // 0x21c410: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21c414:
    // 0x21c414: 0x40f809  jalr        $v0
label_21c418:
    if (ctx->pc == 0x21C418u) {
        ctx->pc = 0x21C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C414u;
        // 0x21c418: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C41Cu;
        goto label_21c41c;
    }
    ctx->pc = 0x21C414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C41Cu);
        ctx->pc = 0x21C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C414u;
        // 0x21c418: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C414u, 0x21C41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C41Cu;
label_21c41c:
    // 0x21c41c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21c420:
    // 0x21c420: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x21c420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_21c424:
    // 0x21c424: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x21c424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_21c428:
    // 0x21c428: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x21c428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_21c42c:
    // 0x21c42c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x21c42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_21c430:
    // 0x21c430: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x21c430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_21c434:
    // 0x21c434: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x21c434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21c438:
    // 0x21c438: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x21c438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21c43c:
    // 0x21c43c: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x21c43cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21c440:
    // 0x21c440: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x21c440u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21c444:
    // 0x21c444: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21c444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21c448:
    // 0x21c448: 0x3e00008  jr          $ra
label_21c44c:
    if (ctx->pc == 0x21C44Cu) {
        ctx->pc = 0x21C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C448u;
        // 0x21c44c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C450u;
        goto label_fallthrough_0x21c448;
    }
    ctx->pc = 0x21C448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C448u;
        // 0x21c44c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21c448:
    ctx->pc = 0x21C450u;
}
