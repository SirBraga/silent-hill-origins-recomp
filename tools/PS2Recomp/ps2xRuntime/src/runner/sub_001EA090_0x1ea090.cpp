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

// Function: sub_001EA090
// Address: 0x1ea090 - 0x1ea3b0
void sub_001EA090_0x1ea090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA090_0x1ea090");
#endif

    switch (ctx->pc) {
        case 0x1ea090u: goto label_1ea090;
        case 0x1ea094u: goto label_1ea094;
        case 0x1ea098u: goto label_1ea098;
        case 0x1ea09cu: goto label_1ea09c;
        case 0x1ea0a0u: goto label_1ea0a0;
        case 0x1ea0a4u: goto label_1ea0a4;
        case 0x1ea0a8u: goto label_1ea0a8;
        case 0x1ea0acu: goto label_1ea0ac;
        case 0x1ea0b0u: goto label_1ea0b0;
        case 0x1ea0b4u: goto label_1ea0b4;
        case 0x1ea0b8u: goto label_1ea0b8;
        case 0x1ea0bcu: goto label_1ea0bc;
        case 0x1ea0c0u: goto label_1ea0c0;
        case 0x1ea0c4u: goto label_1ea0c4;
        case 0x1ea0c8u: goto label_1ea0c8;
        case 0x1ea0ccu: goto label_1ea0cc;
        case 0x1ea0d0u: goto label_1ea0d0;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0d8u: goto label_1ea0d8;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea0e0u: goto label_1ea0e0;
        case 0x1ea0e4u: goto label_1ea0e4;
        case 0x1ea0e8u: goto label_1ea0e8;
        case 0x1ea0ecu: goto label_1ea0ec;
        case 0x1ea0f0u: goto label_1ea0f0;
        case 0x1ea0f4u: goto label_1ea0f4;
        case 0x1ea0f8u: goto label_1ea0f8;
        case 0x1ea0fcu: goto label_1ea0fc;
        case 0x1ea100u: goto label_1ea100;
        case 0x1ea104u: goto label_1ea104;
        case 0x1ea108u: goto label_1ea108;
        case 0x1ea10cu: goto label_1ea10c;
        case 0x1ea110u: goto label_1ea110;
        case 0x1ea114u: goto label_1ea114;
        case 0x1ea118u: goto label_1ea118;
        case 0x1ea11cu: goto label_1ea11c;
        case 0x1ea120u: goto label_1ea120;
        case 0x1ea124u: goto label_1ea124;
        case 0x1ea128u: goto label_1ea128;
        case 0x1ea12cu: goto label_1ea12c;
        case 0x1ea130u: goto label_1ea130;
        case 0x1ea134u: goto label_1ea134;
        case 0x1ea138u: goto label_1ea138;
        case 0x1ea13cu: goto label_1ea13c;
        case 0x1ea140u: goto label_1ea140;
        case 0x1ea144u: goto label_1ea144;
        case 0x1ea148u: goto label_1ea148;
        case 0x1ea14cu: goto label_1ea14c;
        case 0x1ea150u: goto label_1ea150;
        case 0x1ea154u: goto label_1ea154;
        case 0x1ea158u: goto label_1ea158;
        case 0x1ea15cu: goto label_1ea15c;
        case 0x1ea160u: goto label_1ea160;
        case 0x1ea164u: goto label_1ea164;
        case 0x1ea168u: goto label_1ea168;
        case 0x1ea16cu: goto label_1ea16c;
        case 0x1ea170u: goto label_1ea170;
        case 0x1ea174u: goto label_1ea174;
        case 0x1ea178u: goto label_1ea178;
        case 0x1ea17cu: goto label_1ea17c;
        case 0x1ea180u: goto label_1ea180;
        case 0x1ea184u: goto label_1ea184;
        case 0x1ea188u: goto label_1ea188;
        case 0x1ea18cu: goto label_1ea18c;
        case 0x1ea190u: goto label_1ea190;
        case 0x1ea194u: goto label_1ea194;
        case 0x1ea198u: goto label_1ea198;
        case 0x1ea19cu: goto label_1ea19c;
        case 0x1ea1a0u: goto label_1ea1a0;
        case 0x1ea1a4u: goto label_1ea1a4;
        case 0x1ea1a8u: goto label_1ea1a8;
        case 0x1ea1acu: goto label_1ea1ac;
        case 0x1ea1b0u: goto label_1ea1b0;
        case 0x1ea1b4u: goto label_1ea1b4;
        case 0x1ea1b8u: goto label_1ea1b8;
        case 0x1ea1bcu: goto label_1ea1bc;
        case 0x1ea1c0u: goto label_1ea1c0;
        case 0x1ea1c4u: goto label_1ea1c4;
        case 0x1ea1c8u: goto label_1ea1c8;
        case 0x1ea1ccu: goto label_1ea1cc;
        case 0x1ea1d0u: goto label_1ea1d0;
        case 0x1ea1d4u: goto label_1ea1d4;
        case 0x1ea1d8u: goto label_1ea1d8;
        case 0x1ea1dcu: goto label_1ea1dc;
        case 0x1ea1e0u: goto label_1ea1e0;
        case 0x1ea1e4u: goto label_1ea1e4;
        case 0x1ea1e8u: goto label_1ea1e8;
        case 0x1ea1ecu: goto label_1ea1ec;
        case 0x1ea1f0u: goto label_1ea1f0;
        case 0x1ea1f4u: goto label_1ea1f4;
        case 0x1ea1f8u: goto label_1ea1f8;
        case 0x1ea1fcu: goto label_1ea1fc;
        case 0x1ea200u: goto label_1ea200;
        case 0x1ea204u: goto label_1ea204;
        case 0x1ea208u: goto label_1ea208;
        case 0x1ea20cu: goto label_1ea20c;
        case 0x1ea210u: goto label_1ea210;
        case 0x1ea214u: goto label_1ea214;
        case 0x1ea218u: goto label_1ea218;
        case 0x1ea21cu: goto label_1ea21c;
        case 0x1ea220u: goto label_1ea220;
        case 0x1ea224u: goto label_1ea224;
        case 0x1ea228u: goto label_1ea228;
        case 0x1ea22cu: goto label_1ea22c;
        case 0x1ea230u: goto label_1ea230;
        case 0x1ea234u: goto label_1ea234;
        case 0x1ea238u: goto label_1ea238;
        case 0x1ea23cu: goto label_1ea23c;
        case 0x1ea240u: goto label_1ea240;
        case 0x1ea244u: goto label_1ea244;
        case 0x1ea248u: goto label_1ea248;
        case 0x1ea24cu: goto label_1ea24c;
        case 0x1ea250u: goto label_1ea250;
        case 0x1ea254u: goto label_1ea254;
        case 0x1ea258u: goto label_1ea258;
        case 0x1ea25cu: goto label_1ea25c;
        case 0x1ea260u: goto label_1ea260;
        case 0x1ea264u: goto label_1ea264;
        case 0x1ea268u: goto label_1ea268;
        case 0x1ea26cu: goto label_1ea26c;
        case 0x1ea270u: goto label_1ea270;
        case 0x1ea274u: goto label_1ea274;
        case 0x1ea278u: goto label_1ea278;
        case 0x1ea27cu: goto label_1ea27c;
        case 0x1ea280u: goto label_1ea280;
        case 0x1ea284u: goto label_1ea284;
        case 0x1ea288u: goto label_1ea288;
        case 0x1ea28cu: goto label_1ea28c;
        case 0x1ea290u: goto label_1ea290;
        case 0x1ea294u: goto label_1ea294;
        case 0x1ea298u: goto label_1ea298;
        case 0x1ea29cu: goto label_1ea29c;
        case 0x1ea2a0u: goto label_1ea2a0;
        case 0x1ea2a4u: goto label_1ea2a4;
        case 0x1ea2a8u: goto label_1ea2a8;
        case 0x1ea2acu: goto label_1ea2ac;
        case 0x1ea2b0u: goto label_1ea2b0;
        case 0x1ea2b4u: goto label_1ea2b4;
        case 0x1ea2b8u: goto label_1ea2b8;
        case 0x1ea2bcu: goto label_1ea2bc;
        case 0x1ea2c0u: goto label_1ea2c0;
        case 0x1ea2c4u: goto label_1ea2c4;
        case 0x1ea2c8u: goto label_1ea2c8;
        case 0x1ea2ccu: goto label_1ea2cc;
        case 0x1ea2d0u: goto label_1ea2d0;
        case 0x1ea2d4u: goto label_1ea2d4;
        case 0x1ea2d8u: goto label_1ea2d8;
        case 0x1ea2dcu: goto label_1ea2dc;
        case 0x1ea2e0u: goto label_1ea2e0;
        case 0x1ea2e4u: goto label_1ea2e4;
        case 0x1ea2e8u: goto label_1ea2e8;
        case 0x1ea2ecu: goto label_1ea2ec;
        case 0x1ea2f0u: goto label_1ea2f0;
        case 0x1ea2f4u: goto label_1ea2f4;
        case 0x1ea2f8u: goto label_1ea2f8;
        case 0x1ea2fcu: goto label_1ea2fc;
        case 0x1ea300u: goto label_1ea300;
        case 0x1ea304u: goto label_1ea304;
        case 0x1ea308u: goto label_1ea308;
        case 0x1ea30cu: goto label_1ea30c;
        case 0x1ea310u: goto label_1ea310;
        case 0x1ea314u: goto label_1ea314;
        case 0x1ea318u: goto label_1ea318;
        case 0x1ea31cu: goto label_1ea31c;
        case 0x1ea320u: goto label_1ea320;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea328u: goto label_1ea328;
        case 0x1ea32cu: goto label_1ea32c;
        case 0x1ea330u: goto label_1ea330;
        case 0x1ea334u: goto label_1ea334;
        case 0x1ea338u: goto label_1ea338;
        case 0x1ea33cu: goto label_1ea33c;
        case 0x1ea340u: goto label_1ea340;
        case 0x1ea344u: goto label_1ea344;
        case 0x1ea348u: goto label_1ea348;
        case 0x1ea34cu: goto label_1ea34c;
        case 0x1ea350u: goto label_1ea350;
        case 0x1ea354u: goto label_1ea354;
        case 0x1ea358u: goto label_1ea358;
        case 0x1ea35cu: goto label_1ea35c;
        case 0x1ea360u: goto label_1ea360;
        case 0x1ea364u: goto label_1ea364;
        case 0x1ea368u: goto label_1ea368;
        case 0x1ea36cu: goto label_1ea36c;
        case 0x1ea370u: goto label_1ea370;
        case 0x1ea374u: goto label_1ea374;
        case 0x1ea378u: goto label_1ea378;
        case 0x1ea37cu: goto label_1ea37c;
        case 0x1ea380u: goto label_1ea380;
        case 0x1ea384u: goto label_1ea384;
        case 0x1ea388u: goto label_1ea388;
        case 0x1ea38cu: goto label_1ea38c;
        case 0x1ea390u: goto label_1ea390;
        case 0x1ea394u: goto label_1ea394;
        case 0x1ea398u: goto label_1ea398;
        case 0x1ea39cu: goto label_1ea39c;
        case 0x1ea3a0u: goto label_1ea3a0;
        case 0x1ea3a4u: goto label_1ea3a4;
        case 0x1ea3a8u: goto label_1ea3a8;
        case 0x1ea3acu: goto label_1ea3ac;
        default: break;
    }

    ctx->pc = 0x1ea090u;

label_1ea090:
    // 0x1ea090: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ea090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1ea094:
    // 0x1ea094: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1ea094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1ea098:
    // 0x1ea098: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1ea098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1ea09c:
    // 0x1ea09c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ea09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a0:
    // 0x1ea0a0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1ea0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1ea0a4:
    // 0x1ea0a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ea0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a8:
    // 0x1ea0a8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1ea0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1ea0ac:
    // 0x1ea0ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ea0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0b0:
    // 0x1ea0b0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1ea0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1ea0b4:
    // 0x1ea0b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ea0b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0b8:
    // 0x1ea0b8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1ea0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1ea0bc:
    // 0x1ea0bc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1ea0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1ea0c0:
    // 0x1ea0c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ea0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1ea0c4:
    // 0x1ea0c4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1ea0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1ea0c8:
    // 0x1ea0c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ea0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ea0cc:
    // 0x1ea0cc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1ea0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1ea0d0:
    // 0x1ea0d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ea0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ea0d4:
    // 0x1ea0d4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1ea0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea0d8:
    // 0x1ea0d8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1ea0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1ea0dc:
    // 0x1ea0dc: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x1ea0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_1ea0e0:
    // 0x1ea0e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea0e4:
    // 0x1ea0e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ea0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea0e8:
    // 0x1ea0e8: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x1ea0e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea0ec:
    // 0x1ea0ec: 0x17c40013  bne         $fp, $a0, . + 4 + (0x13 << 2)
label_1ea0f0:
    if (ctx->pc == 0x1EA0F0u) {
        ctx->pc = 0x1EA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0ECu;
        // 0x1ea0f0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0F4u;
        goto label_1ea0f4;
    }
    ctx->pc = 0x1EA0ECu;
    {
        const bool branch_taken_0x1ea0ec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0ECu;
        // 0x1ea0f0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0ec) {
            ctx->pc = 0x1EA13Cu;
            goto label_1ea13c;
        }
    }
    ctx->pc = 0x1EA0F4u;
label_1ea0f4:
    // 0x1ea0f4: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
label_1ea0f8:
    if (ctx->pc == 0x1EA0F8u) {
        ctx->pc = 0x1EA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0F4u;
        // 0x1ea0f8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0FCu;
        goto label_1ea0fc;
    }
    ctx->pc = 0x1EA0F4u;
    {
        const bool branch_taken_0x1ea0f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea0f4) {
            ctx->pc = 0x1EA0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA0F4u;
            // 0x1ea0f8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA140u;
            goto label_1ea140;
        }
    }
    ctx->pc = 0x1EA0FCu;
label_1ea0fc:
    // 0x1ea0fc: 0xc0932d4  jal         func_24CB50
label_1ea100:
    if (ctx->pc == 0x1EA100u) {
        ctx->pc = 0x1EA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0FCu;
        // 0x1ea100: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA104u;
        goto label_1ea104;
    }
    ctx->pc = 0x1EA0FCu;
    SET_GPR_U32(ctx, 31, 0x1EA104u);
    ctx->pc = 0x1EA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0FCu;
    // 0x1ea100: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EA0FCu, 0x1EA104u)) {
        return;
    }
    ctx->pc = 0x1EA104u;
label_1ea104:
    // 0x1ea104: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ea104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea108:
    // 0x1ea108: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1ea108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ea10c:
    // 0x1ea10c: 0x40f809  jalr        $v0
label_1ea110:
    if (ctx->pc == 0x1EA110u) {
        ctx->pc = 0x1EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA10Cu;
        // 0x1ea110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA114u;
        goto label_1ea114;
    }
    ctx->pc = 0x1EA10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA114u);
        ctx->pc = 0x1EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA10Cu;
        // 0x1ea110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA10Cu, 0x1EA114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA114u;
label_1ea114:
    // 0x1ea114: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ea118:
    if (ctx->pc == 0x1EA118u) {
        ctx->pc = 0x1EA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA114u;
        // 0x1ea118: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA11Cu;
        goto label_1ea11c;
    }
    ctx->pc = 0x1EA114u;
    {
        const bool branch_taken_0x1ea114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA114u;
        // 0x1ea118: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea114) {
            ctx->pc = 0x1EA13Cu;
            goto label_1ea13c;
        }
    }
    ctx->pc = 0x1EA11Cu;
label_1ea11c:
    // 0x1ea11c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ea11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1ea120:
    // 0x1ea120: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1ea120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_1ea124:
    // 0x1ea124: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x1ea124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_1ea128:
    // 0x1ea128: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1ea128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_1ea12c:
    // 0x1ea12c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1ea12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1ea130:
    // 0x1ea130: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1ea130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1ea134:
    // 0x1ea134: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1ea134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_1ea138:
    // 0x1ea138: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ea138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_1ea13c:
    // 0x1ea13c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1ea13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea140:
    // 0x1ea140: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1ea140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1ea144:
    // 0x1ea144: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1ea144u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ea148:
    // 0x1ea148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea14c:
    // 0x1ea14c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea150:
    // 0x1ea150: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea154:
    // 0x1ea154: 0xc078ec8  jal         func_1E3B20
label_1ea158:
    if (ctx->pc == 0x1EA158u) {
        ctx->pc = 0x1EA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA154u;
        // 0x1ea158: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA15Cu;
        goto label_1ea15c;
    }
    ctx->pc = 0x1EA154u;
    SET_GPR_U32(ctx, 31, 0x1EA15Cu);
    ctx->pc = 0x1EA158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA154u;
    // 0x1ea158: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA154u, 0x1EA15Cu)) {
        return;
    }
    ctx->pc = 0x1EA15Cu;
label_1ea15c:
    // 0x1ea15c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ea15cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea160:
    // 0x1ea160: 0x1aa00044  blez        $s5, . + 4 + (0x44 << 2)
label_1ea164:
    if (ctx->pc == 0x1EA164u) {
        ctx->pc = 0x1EA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA160u;
        // 0x1ea164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA168u;
        goto label_1ea168;
    }
    ctx->pc = 0x1EA160u;
    {
        const bool branch_taken_0x1ea160 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1EA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA160u;
        // 0x1ea164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea160) {
            ctx->pc = 0x1EA274u;
            goto label_1ea274;
        }
    }
    ctx->pc = 0x1EA168u;
label_1ea168:
    // 0x1ea168: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1ea168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea16c:
    // 0x1ea16c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea170:
    // 0x1ea170: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1ea170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1ea174:
    // 0x1ea174: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ea174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea178:
    // 0x1ea178: 0xc078ed4  jal         func_1E3B50
label_1ea17c:
    if (ctx->pc == 0x1EA17Cu) {
        ctx->pc = 0x1EA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA178u;
        // 0x1ea17c: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA180u;
        goto label_1ea180;
    }
    ctx->pc = 0x1EA178u;
    SET_GPR_U32(ctx, 31, 0x1EA180u);
    ctx->pc = 0x1EA17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA178u;
    // 0x1ea17c: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B50u, 0x1EA178u, 0x1EA180u)) {
        return;
    }
    ctx->pc = 0x1EA180u;
label_1ea180:
    // 0x1ea180: 0x1aa0003c  blez        $s5, . + 4 + (0x3C << 2)
label_1ea184:
    if (ctx->pc == 0x1EA184u) {
        ctx->pc = 0x1EA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA180u;
        // 0x1ea184: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA188u;
        goto label_1ea188;
    }
    ctx->pc = 0x1EA180u;
    {
        const bool branch_taken_0x1ea180 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1EA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA180u;
        // 0x1ea184: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea180) {
            ctx->pc = 0x1EA274u;
            goto label_1ea274;
        }
    }
    ctx->pc = 0x1EA188u;
label_1ea188:
    // 0x1ea188: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ea188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea18c:
    // 0x1ea18c: 0x0  nop
    ctx->pc = 0x1ea18cu;
    // NOP
label_1ea190:
    // 0x1ea190: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ea190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ea194:
    // 0x1ea194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ea194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ea198:
    // 0x1ea198: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ea198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ea19c:
    // 0x1ea19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea1a0:
    // 0x1ea1a0: 0xc07a824  jal         func_1EA090
label_1ea1a4:
    if (ctx->pc == 0x1EA1A4u) {
        ctx->pc = 0x1EA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A0u;
        // 0x1ea1a4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1A8u;
        goto label_1ea1a8;
    }
    ctx->pc = 0x1EA1A0u;
    SET_GPR_U32(ctx, 31, 0x1EA1A8u);
    ctx->pc = 0x1EA1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA1A0u;
    // 0x1ea1a4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA090u;
    goto label_1ea090;
    ctx->pc = 0x1EA1A8u;
label_1ea1a8:
    // 0x1ea1a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1ac:
    // 0x1ea1ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ea1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ea1b0:
    // 0x1ea1b0: 0x57c20016  bnel        $fp, $v0, . + 4 + (0x16 << 2)
label_1ea1b4:
    if (ctx->pc == 0x1EA1B4u) {
        ctx->pc = 0x1EA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1B0u;
        // 0x1ea1b4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1B8u;
        goto label_1ea1b8;
    }
    ctx->pc = 0x1EA1B0u;
    {
        const bool branch_taken_0x1ea1b0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ea1b0) {
            ctx->pc = 0x1EA1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA1B0u;
            // 0x1ea1b4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA20Cu;
            goto label_1ea20c;
        }
    }
    ctx->pc = 0x1EA1B8u;
label_1ea1b8:
    // 0x1ea1b8: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_1ea1bc:
    if (ctx->pc == 0x1EA1BCu) {
        ctx->pc = 0x1EA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1B8u;
        // 0x1ea1bc: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1C0u;
        goto label_1ea1c0;
    }
    ctx->pc = 0x1EA1B8u;
    {
        const bool branch_taken_0x1ea1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea1b8) {
            ctx->pc = 0x1EA1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA1B8u;
            // 0x1ea1bc: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA20Cu;
            goto label_1ea20c;
        }
    }
    ctx->pc = 0x1EA1C0u;
label_1ea1c0:
    // 0x1ea1c0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1ea1c4:
    if (ctx->pc == 0x1EA1C4u) {
        ctx->pc = 0x1EA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1C0u;
        // 0x1ea1c4: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1C8u;
        goto label_1ea1c8;
    }
    ctx->pc = 0x1EA1C0u;
    {
        const bool branch_taken_0x1ea1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1C0u;
        // 0x1ea1c4: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1c0) {
            ctx->pc = 0x1EA204u;
            goto label_1ea204;
        }
    }
    ctx->pc = 0x1EA1C8u;
label_1ea1c8:
    // 0x1ea1c8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1ea1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1ea1cc:
    // 0x1ea1cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ea1d0:
    if (ctx->pc == 0x1EA1D0u) {
        ctx->pc = 0x1EA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1CCu;
        // 0x1ea1d0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1D4u;
        goto label_1ea1d4;
    }
    ctx->pc = 0x1EA1CCu;
    {
        const bool branch_taken_0x1ea1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1CCu;
        // 0x1ea1d0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1cc) {
            ctx->pc = 0x1EA1F0u;
            goto label_1ea1f0;
        }
    }
    ctx->pc = 0x1EA1D4u;
label_1ea1d4:
    // 0x1ea1d4: 0xac720014  sw          $s2, 0x14($v1)
    ctx->pc = 0x1ea1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 18));
label_1ea1d8:
    // 0x1ea1d8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1ea1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1ea1dc:
    // 0x1ea1dc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1ea1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1ea1e0:
    // 0x1ea1e0: 0x0  nop
    ctx->pc = 0x1ea1e0u;
    // NOP
label_1ea1e4:
    // 0x1ea1e4: 0x0  nop
    ctx->pc = 0x1ea1e4u;
    // NOP
label_1ea1e8:
    // 0x1ea1e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1ea1ec:
    if (ctx->pc == 0x1EA1ECu) {
        ctx->pc = 0x1EA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1E8u;
        // 0x1ea1ec: 0xac720014  sw          $s2, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1F0u;
        goto label_1ea1f0;
    }
    ctx->pc = 0x1EA1E8u;
    {
        const bool branch_taken_0x1ea1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea1e8) {
            ctx->pc = 0x1EA1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA1E8u;
            // 0x1ea1ec: 0xac720014  sw          $s2, 0x14($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea1d8;
        }
    }
    ctx->pc = 0x1EA1F0u;
label_1ea1f0:
    // 0x1ea1f0: 0xac720014  sw          $s2, 0x14($v1)
    ctx->pc = 0x1ea1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 18));
label_1ea1f4:
    // 0x1ea1f4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ea1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1ea1f8:
    // 0x1ea1f8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1ea1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1ea1fc:
    // 0x1ea1fc: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ea200:
    if (ctx->pc == 0x1EA200u) {
        ctx->pc = 0x1EA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1FCu;
        // 0x1ea200: 0xae45000c  sw          $a1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA204u;
        goto label_1ea204;
    }
    ctx->pc = 0x1EA1FCu;
    {
        const bool branch_taken_0x1ea1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1FCu;
        // 0x1ea200: 0xae45000c  sw          $a1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1fc) {
            ctx->pc = 0x1EA264u;
            goto label_1ea264;
        }
    }
    ctx->pc = 0x1EA204u;
label_1ea204:
    // 0x1ea204: 0x10000017  b           . + 4 + (0x17 << 2)
label_1ea208:
    if (ctx->pc == 0x1EA208u) {
        ctx->pc = 0x1EA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA204u;
        // 0x1ea208: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA20Cu;
        goto label_1ea20c;
    }
    ctx->pc = 0x1EA204u;
    {
        const bool branch_taken_0x1ea204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA204u;
        // 0x1ea208: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea204) {
            ctx->pc = 0x1EA264u;
            goto label_1ea264;
        }
    }
    ctx->pc = 0x1EA20Cu;
label_1ea20c:
    // 0x1ea20c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1ea20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1ea210:
    // 0x1ea210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ea210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea214:
    // 0x1ea214: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ea214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea218:
    // 0x1ea218: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ea218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ea21c:
    // 0x1ea21c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_1ea220:
    if (ctx->pc == 0x1EA220u) {
        ctx->pc = 0x1EA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA21Cu;
        // 0x1ea220: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA224u;
        goto label_1ea224;
    }
    ctx->pc = 0x1EA21Cu;
    {
        const bool branch_taken_0x1ea21c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA21Cu;
        // 0x1ea220: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea21c) {
            ctx->pc = 0x1EA248u;
            goto label_1ea248;
        }
    }
    ctx->pc = 0x1EA224u;
label_1ea224:
    // 0x1ea224: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1ea228:
    if (ctx->pc == 0x1EA228u) {
        ctx->pc = 0x1EA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA224u;
        // 0x1ea228: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA22Cu;
        goto label_1ea22c;
    }
    ctx->pc = 0x1EA224u;
    {
        const bool branch_taken_0x1ea224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA224u;
        // 0x1ea228: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea224) {
            ctx->pc = 0x1EA248u;
            goto label_1ea248;
        }
    }
    ctx->pc = 0x1EA22Cu;
label_1ea22c:
    // 0x1ea22c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ea22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea230:
    // 0x1ea230: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1ea234:
    if (ctx->pc == 0x1EA234u) {
        ctx->pc = 0x1EA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA230u;
        // 0x1ea234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA238u;
        goto label_1ea238;
    }
    ctx->pc = 0x1EA230u;
    {
        const bool branch_taken_0x1ea230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1EA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA230u;
        // 0x1ea234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea230) {
            ctx->pc = 0x1EA24Cu;
            goto label_1ea24c;
        }
    }
    ctx->pc = 0x1EA238u;
label_1ea238:
    // 0x1ea238: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1ea238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ea23c:
    // 0x1ea23c: 0x0  nop
    ctx->pc = 0x1ea23cu;
    // NOP
label_1ea240:
    // 0x1ea240: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
label_1ea244:
    if (ctx->pc == 0x1EA244u) {
        ctx->pc = 0x1EA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA240u;
        // 0x1ea244: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA248u;
        goto label_1ea248;
    }
    ctx->pc = 0x1EA240u;
    {
        const bool branch_taken_0x1ea240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea240) {
            ctx->pc = 0x1EA244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA240u;
            // 0x1ea244: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea230;
        }
    }
    ctx->pc = 0x1EA248u;
label_1ea248:
    // 0x1ea248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea24c:
    // 0x1ea24c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ea250:
    if (ctx->pc == 0x1EA250u) {
        ctx->pc = 0x1EA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA24Cu;
        // 0x1ea250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA254u;
        goto label_1ea254;
    }
    ctx->pc = 0x1EA24Cu;
    {
        const bool branch_taken_0x1ea24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA24Cu;
        // 0x1ea250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea24c) {
            ctx->pc = 0x1EA268u;
            goto label_1ea268;
        }
    }
    ctx->pc = 0x1EA254u;
label_1ea254:
    // 0x1ea254: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1ea258:
    if (ctx->pc == 0x1EA258u) {
        ctx->pc = 0x1EA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA254u;
        // 0x1ea258: 0x215102a  slt         $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA25Cu;
        goto label_1ea25c;
    }
    ctx->pc = 0x1EA254u;
    {
        const bool branch_taken_0x1ea254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA254u;
        // 0x1ea258: 0x215102a  slt         $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea254) {
            ctx->pc = 0x1EA26Cu;
            goto label_1ea26c;
        }
    }
    ctx->pc = 0x1EA25Cu;
label_1ea25c:
    // 0x1ea25c: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x1ea25cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
label_1ea260:
    // 0x1ea260: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ea260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ea264:
    // 0x1ea264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea268:
    // 0x1ea268: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x1ea268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1ea26c:
    // 0x1ea26c: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
label_1ea270:
    if (ctx->pc == 0x1EA270u) {
        ctx->pc = 0x1EA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA26Cu;
        // 0x1ea270: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA274u;
        goto label_1ea274;
    }
    ctx->pc = 0x1EA26Cu;
    {
        const bool branch_taken_0x1ea26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea26c) {
            ctx->pc = 0x1EA270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA26Cu;
            // 0x1ea270: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea190;
        }
    }
    ctx->pc = 0x1EA274u;
label_1ea274:
    // 0x1ea274: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ea274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ea278:
    // 0x1ea278: 0x17c20040  bne         $fp, $v0, . + 4 + (0x40 << 2)
label_1ea27c:
    if (ctx->pc == 0x1EA27Cu) {
        ctx->pc = 0x1EA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA278u;
        // 0x1ea27c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA280u;
        goto label_1ea280;
    }
    ctx->pc = 0x1EA278u;
    {
        const bool branch_taken_0x1ea278 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA278u;
        // 0x1ea27c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea278) {
            ctx->pc = 0x1EA37Cu;
            goto label_1ea37c;
        }
    }
    ctx->pc = 0x1EA280u;
label_1ea280:
    // 0x1ea280: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
label_1ea284:
    if (ctx->pc == 0x1EA284u) {
        ctx->pc = 0x1EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA280u;
        // 0x1ea284: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA288u;
        goto label_1ea288;
    }
    ctx->pc = 0x1EA280u;
    {
        const bool branch_taken_0x1ea280 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA280u;
        // 0x1ea284: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea280) {
            ctx->pc = 0x1EA380u;
            goto label_1ea380;
        }
    }
    ctx->pc = 0x1EA288u;
label_1ea288:
    // 0x1ea288: 0x12e0003d  beqz        $s7, . + 4 + (0x3D << 2)
label_1ea28c:
    if (ctx->pc == 0x1EA28Cu) {
        ctx->pc = 0x1EA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA288u;
        // 0x1ea28c: 0xae570018  sw          $s7, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA290u;
        goto label_1ea290;
    }
    ctx->pc = 0x1EA288u;
    {
        const bool branch_taken_0x1ea288 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA288u;
        // 0x1ea28c: 0xae570018  sw          $s7, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea288) {
            ctx->pc = 0x1EA380u;
            goto label_1ea380;
        }
    }
    ctx->pc = 0x1EA290u;
label_1ea290:
    // 0x1ea290: 0xc0932d4  jal         func_24CB50
label_1ea294:
    if (ctx->pc == 0x1EA294u) {
        ctx->pc = 0x1EA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA290u;
        // 0x1ea294: 0x1780c0  sll         $s0, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA298u;
        goto label_1ea298;
    }
    ctx->pc = 0x1EA290u;
    SET_GPR_U32(ctx, 31, 0x1EA298u);
    ctx->pc = 0x1EA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA290u;
    // 0x1ea294: 0x1780c0  sll         $s0, $s7, 3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EA290u, 0x1EA298u)) {
        return;
    }
    ctx->pc = 0x1EA298u;
label_1ea298:
    // 0x1ea298: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ea298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea29c:
    // 0x1ea29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2a0:
    // 0x1ea2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2a4:
    // 0x1ea2a4: 0x40f809  jalr        $v0
label_1ea2a8:
    if (ctx->pc == 0x1EA2A8u) {
        ctx->pc = 0x1EA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2A4u;
        // 0x1ea2a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2ACu;
        goto label_1ea2ac;
    }
    ctx->pc = 0x1EA2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA2ACu);
        ctx->pc = 0x1EA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2A4u;
        // 0x1ea2a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA2A4u, 0x1EA2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA2ACu;
label_1ea2ac:
    // 0x1ea2ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ea2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2b0:
    // 0x1ea2b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ea2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2b4:
    // 0x1ea2b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2b8:
    // 0x1ea2b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2bc:
    // 0x1ea2bc: 0xc0c493d  jal         func_3124F4
label_1ea2c0:
    if (ctx->pc == 0x1EA2C0u) {
        ctx->pc = 0x1EA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2BCu;
        // 0x1ea2c0: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2C4u;
        goto label_1ea2c4;
    }
    ctx->pc = 0x1EA2BCu;
    SET_GPR_U32(ctx, 31, 0x1EA2C4u);
    ctx->pc = 0x1EA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2BCu;
    // 0x1ea2c0: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1EA2BCu, 0x1EA2C4u)) {
        return;
    }
    ctx->pc = 0x1EA2C4u;
label_1ea2c4:
    // 0x1ea2c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ea2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ea2c8:
    // 0x1ea2c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea2cc:
    // 0x1ea2cc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ea2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ea2d0:
    // 0x1ea2d0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ea2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ea2d4:
    // 0x1ea2d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea2d8:
    // 0x1ea2d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ea2dc:
    // 0x1ea2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ea2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea2e0:
    // 0x1ea2e0: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x1ea2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ea2e4:
    // 0x1ea2e4: 0xc078ec8  jal         func_1E3B20
label_1ea2e8:
    if (ctx->pc == 0x1EA2E8u) {
        ctx->pc = 0x1EA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2E4u;
        // 0x1ea2e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2ECu;
        goto label_1ea2ec;
    }
    ctx->pc = 0x1EA2E4u;
    SET_GPR_U32(ctx, 31, 0x1EA2ECu);
    ctx->pc = 0x1EA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2E4u;
    // 0x1ea2e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA2E4u, 0x1EA2ECu)) {
        return;
    }
    ctx->pc = 0x1EA2ECu;
label_1ea2ec:
    // 0x1ea2ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2f0:
    // 0x1ea2f0: 0x1a000022  blez        $s0, . + 4 + (0x22 << 2)
label_1ea2f4:
    if (ctx->pc == 0x1EA2F4u) {
        ctx->pc = 0x1EA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F0u;
        // 0x1ea2f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2F8u;
        goto label_1ea2f8;
    }
    ctx->pc = 0x1EA2F0u;
    {
        const bool branch_taken_0x1ea2f0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1EA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F0u;
        // 0x1ea2f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2f0) {
            ctx->pc = 0x1EA37Cu;
            goto label_1ea37c;
        }
    }
    ctx->pc = 0x1EA2F8u;
label_1ea2f8:
    // 0x1ea2f8: 0x5ae00021  blezl       $s7, . + 4 + (0x21 << 2)
label_1ea2fc:
    if (ctx->pc == 0x1EA2FCu) {
        ctx->pc = 0x1EA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F8u;
        // 0x1ea2fc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA300u;
        goto label_1ea300;
    }
    ctx->pc = 0x1EA2F8u;
    {
        const bool branch_taken_0x1ea2f8 = (GPR_S64(ctx, 23) <= 0);
        if (branch_taken_0x1ea2f8) {
            ctx->pc = 0x1EA2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA2F8u;
            // 0x1ea2fc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA380u;
            goto label_1ea380;
        }
    }
    ctx->pc = 0x1EA300u;
label_1ea300:
    // 0x1ea300: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ea300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ea304:
    // 0x1ea304: 0x0  nop
    ctx->pc = 0x1ea304u;
    // NOP
label_1ea308:
    // 0x1ea308: 0xc078ed4  jal         func_1E3B50
label_1ea30c:
    if (ctx->pc == 0x1EA30Cu) {
        ctx->pc = 0x1EA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA308u;
        // 0x1ea30c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA310u;
        goto label_1ea310;
    }
    ctx->pc = 0x1EA308u;
    SET_GPR_U32(ctx, 31, 0x1EA310u);
    ctx->pc = 0x1EA30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA308u;
    // 0x1ea30c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B50u, 0x1EA308u, 0x1EA310u)) {
        return;
    }
    ctx->pc = 0x1EA310u;
label_1ea310:
    // 0x1ea310: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1ea310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1ea314:
    // 0x1ea314: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1ea314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ea318:
    // 0x1ea318: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ea318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ea31c:
    // 0x1ea31c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ea31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ea320:
    // 0x1ea320: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1ea320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ea324:
    // 0x1ea324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ea328:
    // 0x1ea328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea32c:
    // 0x1ea32c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ea32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea330:
    // 0x1ea330: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ea330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ea334:
    // 0x1ea334: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1ea334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1ea338:
    // 0x1ea338: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1ea33c:
    if (ctx->pc == 0x1EA33Cu) {
        ctx->pc = 0x1EA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA338u;
        // 0x1ea33c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA340u;
        goto label_1ea340;
    }
    ctx->pc = 0x1EA338u;
    {
        const bool branch_taken_0x1ea338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea338) {
            ctx->pc = 0x1EA33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA338u;
            // 0x1ea33c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA364u;
            goto label_1ea364;
        }
    }
    ctx->pc = 0x1EA340u;
label_1ea340:
    // 0x1ea340: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1ea340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1ea344:
    // 0x1ea344: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1ea348:
    // 0x1ea348: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ea348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ea34c:
    // 0x1ea34c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ea34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ea350:
    // 0x1ea350: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1ea350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_1ea354:
    // 0x1ea354: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1ea354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1ea358:
    // 0x1ea358: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ea35c:
    // 0x1ea35c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1ea35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_1ea360:
    // 0x1ea360: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ea364:
    // 0x1ea364: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x1ea364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1ea368:
    // 0x1ea368: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ea36c:
    if (ctx->pc == 0x1EA36Cu) {
        ctx->pc = 0x1EA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA368u;
        // 0x1ea36c: 0x237102a  slt         $v0, $s1, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA370u;
        goto label_1ea370;
    }
    ctx->pc = 0x1EA368u;
    {
        const bool branch_taken_0x1ea368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA368u;
        // 0x1ea36c: 0x237102a  slt         $v0, $s1, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea368) {
            ctx->pc = 0x1EA378u;
            goto label_1ea378;
        }
    }
    ctx->pc = 0x1EA370u;
label_1ea370:
    // 0x1ea370: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1ea374:
    if (ctx->pc == 0x1EA374u) {
        ctx->pc = 0x1EA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA370u;
        // 0x1ea374: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA378u;
        goto label_1ea378;
    }
    ctx->pc = 0x1EA370u;
    {
        const bool branch_taken_0x1ea370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA370u;
        // 0x1ea374: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea370) {
            ctx->pc = 0x1EA308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea308;
        }
    }
    ctx->pc = 0x1EA378u;
label_1ea378:
    // 0x1ea378: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ea378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ea37c:
    // 0x1ea37c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1ea37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ea380:
    // 0x1ea380: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1ea380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ea384:
    // 0x1ea384: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1ea384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ea388:
    // 0x1ea388: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1ea388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ea38c:
    // 0x1ea38c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1ea38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ea390:
    // 0x1ea390: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ea390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea394:
    // 0x1ea394: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1ea394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ea398:
    // 0x1ea398: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1ea398u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea39c:
    // 0x1ea39c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1ea39cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea3a0:
    // 0x1ea3a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ea3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea3a4:
    // 0x1ea3a4: 0x3e00008  jr          $ra
label_1ea3a8:
    if (ctx->pc == 0x1EA3A8u) {
        ctx->pc = 0x1EA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3A4u;
        // 0x1ea3a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3ACu;
        goto label_1ea3ac;
    }
    ctx->pc = 0x1EA3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3A4u;
        // 0x1ea3a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA3ACu;
label_1ea3ac:
    // 0x1ea3ac: 0x0  nop
    ctx->pc = 0x1ea3acu;
    // NOP
    ctx->pc = 0x1ea3b0u;
}
