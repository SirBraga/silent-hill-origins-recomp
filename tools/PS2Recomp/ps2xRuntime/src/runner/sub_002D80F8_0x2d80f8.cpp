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

// Function: sub_002D80F8
// Address: 0x2d80f8 - 0x2d8338
void sub_002D80F8_0x2d80f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D80F8_0x2d80f8");
#endif

    switch (ctx->pc) {
        case 0x2d80f8u: goto label_2d80f8;
        case 0x2d80fcu: goto label_2d80fc;
        case 0x2d8100u: goto label_2d8100;
        case 0x2d8104u: goto label_2d8104;
        case 0x2d8108u: goto label_2d8108;
        case 0x2d810cu: goto label_2d810c;
        case 0x2d8110u: goto label_2d8110;
        case 0x2d8114u: goto label_2d8114;
        case 0x2d8118u: goto label_2d8118;
        case 0x2d811cu: goto label_2d811c;
        case 0x2d8120u: goto label_2d8120;
        case 0x2d8124u: goto label_2d8124;
        case 0x2d8128u: goto label_2d8128;
        case 0x2d812cu: goto label_2d812c;
        case 0x2d8130u: goto label_2d8130;
        case 0x2d8134u: goto label_2d8134;
        case 0x2d8138u: goto label_2d8138;
        case 0x2d813cu: goto label_2d813c;
        case 0x2d8140u: goto label_2d8140;
        case 0x2d8144u: goto label_2d8144;
        case 0x2d8148u: goto label_2d8148;
        case 0x2d814cu: goto label_2d814c;
        case 0x2d8150u: goto label_2d8150;
        case 0x2d8154u: goto label_2d8154;
        case 0x2d8158u: goto label_2d8158;
        case 0x2d815cu: goto label_2d815c;
        case 0x2d8160u: goto label_2d8160;
        case 0x2d8164u: goto label_2d8164;
        case 0x2d8168u: goto label_2d8168;
        case 0x2d816cu: goto label_2d816c;
        case 0x2d8170u: goto label_2d8170;
        case 0x2d8174u: goto label_2d8174;
        case 0x2d8178u: goto label_2d8178;
        case 0x2d817cu: goto label_2d817c;
        case 0x2d8180u: goto label_2d8180;
        case 0x2d8184u: goto label_2d8184;
        case 0x2d8188u: goto label_2d8188;
        case 0x2d818cu: goto label_2d818c;
        case 0x2d8190u: goto label_2d8190;
        case 0x2d8194u: goto label_2d8194;
        case 0x2d8198u: goto label_2d8198;
        case 0x2d819cu: goto label_2d819c;
        case 0x2d81a0u: goto label_2d81a0;
        case 0x2d81a4u: goto label_2d81a4;
        case 0x2d81a8u: goto label_2d81a8;
        case 0x2d81acu: goto label_2d81ac;
        case 0x2d81b0u: goto label_2d81b0;
        case 0x2d81b4u: goto label_2d81b4;
        case 0x2d81b8u: goto label_2d81b8;
        case 0x2d81bcu: goto label_2d81bc;
        case 0x2d81c0u: goto label_2d81c0;
        case 0x2d81c4u: goto label_2d81c4;
        case 0x2d81c8u: goto label_2d81c8;
        case 0x2d81ccu: goto label_2d81cc;
        case 0x2d81d0u: goto label_2d81d0;
        case 0x2d81d4u: goto label_2d81d4;
        case 0x2d81d8u: goto label_2d81d8;
        case 0x2d81dcu: goto label_2d81dc;
        case 0x2d81e0u: goto label_2d81e0;
        case 0x2d81e4u: goto label_2d81e4;
        case 0x2d81e8u: goto label_2d81e8;
        case 0x2d81ecu: goto label_2d81ec;
        case 0x2d81f0u: goto label_2d81f0;
        case 0x2d81f4u: goto label_2d81f4;
        case 0x2d81f8u: goto label_2d81f8;
        case 0x2d81fcu: goto label_2d81fc;
        case 0x2d8200u: goto label_2d8200;
        case 0x2d8204u: goto label_2d8204;
        case 0x2d8208u: goto label_2d8208;
        case 0x2d820cu: goto label_2d820c;
        case 0x2d8210u: goto label_2d8210;
        case 0x2d8214u: goto label_2d8214;
        case 0x2d8218u: goto label_2d8218;
        case 0x2d821cu: goto label_2d821c;
        case 0x2d8220u: goto label_2d8220;
        case 0x2d8224u: goto label_2d8224;
        case 0x2d8228u: goto label_2d8228;
        case 0x2d822cu: goto label_2d822c;
        case 0x2d8230u: goto label_2d8230;
        case 0x2d8234u: goto label_2d8234;
        case 0x2d8238u: goto label_2d8238;
        case 0x2d823cu: goto label_2d823c;
        case 0x2d8240u: goto label_2d8240;
        case 0x2d8244u: goto label_2d8244;
        case 0x2d8248u: goto label_2d8248;
        case 0x2d824cu: goto label_2d824c;
        case 0x2d8250u: goto label_2d8250;
        case 0x2d8254u: goto label_2d8254;
        case 0x2d8258u: goto label_2d8258;
        case 0x2d825cu: goto label_2d825c;
        case 0x2d8260u: goto label_2d8260;
        case 0x2d8264u: goto label_2d8264;
        case 0x2d8268u: goto label_2d8268;
        case 0x2d826cu: goto label_2d826c;
        case 0x2d8270u: goto label_2d8270;
        case 0x2d8274u: goto label_2d8274;
        case 0x2d8278u: goto label_2d8278;
        case 0x2d827cu: goto label_2d827c;
        case 0x2d8280u: goto label_2d8280;
        case 0x2d8284u: goto label_2d8284;
        case 0x2d8288u: goto label_2d8288;
        case 0x2d828cu: goto label_2d828c;
        case 0x2d8290u: goto label_2d8290;
        case 0x2d8294u: goto label_2d8294;
        case 0x2d8298u: goto label_2d8298;
        case 0x2d829cu: goto label_2d829c;
        case 0x2d82a0u: goto label_2d82a0;
        case 0x2d82a4u: goto label_2d82a4;
        case 0x2d82a8u: goto label_2d82a8;
        case 0x2d82acu: goto label_2d82ac;
        case 0x2d82b0u: goto label_2d82b0;
        case 0x2d82b4u: goto label_2d82b4;
        case 0x2d82b8u: goto label_2d82b8;
        case 0x2d82bcu: goto label_2d82bc;
        case 0x2d82c0u: goto label_2d82c0;
        case 0x2d82c4u: goto label_2d82c4;
        case 0x2d82c8u: goto label_2d82c8;
        case 0x2d82ccu: goto label_2d82cc;
        case 0x2d82d0u: goto label_2d82d0;
        case 0x2d82d4u: goto label_2d82d4;
        case 0x2d82d8u: goto label_2d82d8;
        case 0x2d82dcu: goto label_2d82dc;
        case 0x2d82e0u: goto label_2d82e0;
        case 0x2d82e4u: goto label_2d82e4;
        case 0x2d82e8u: goto label_2d82e8;
        case 0x2d82ecu: goto label_2d82ec;
        case 0x2d82f0u: goto label_2d82f0;
        case 0x2d82f4u: goto label_2d82f4;
        case 0x2d82f8u: goto label_2d82f8;
        case 0x2d82fcu: goto label_2d82fc;
        case 0x2d8300u: goto label_2d8300;
        case 0x2d8304u: goto label_2d8304;
        case 0x2d8308u: goto label_2d8308;
        case 0x2d830cu: goto label_2d830c;
        case 0x2d8310u: goto label_2d8310;
        case 0x2d8314u: goto label_2d8314;
        case 0x2d8318u: goto label_2d8318;
        case 0x2d831cu: goto label_2d831c;
        case 0x2d8320u: goto label_2d8320;
        case 0x2d8324u: goto label_2d8324;
        case 0x2d8328u: goto label_2d8328;
        case 0x2d832cu: goto label_2d832c;
        case 0x2d8330u: goto label_2d8330;
        case 0x2d8334u: goto label_2d8334;
        default: break;
    }

    ctx->pc = 0x2d80f8u;

label_2d80f8:
    // 0x2d80f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d80f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2d80fc:
    // 0x2d80fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d80fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2d8100:
    // 0x2d8100: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d8100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2d8104:
    // 0x2d8104: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d8104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8108:
    // 0x2d8108: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d8108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d810c:
    // 0x2d810c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2d8110:
    // 0x2d8110: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d8110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2d8114:
    // 0x2d8114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d8114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d8118:
    // 0x2d8118: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d8118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2d811c:
    // 0x2d811c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2d8120:
    // 0x2d8120: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d8124:
    // 0x2d8124: 0xc0c344c  jal         func_30D130
label_2d8128:
    if (ctx->pc == 0x2D8128u) {
        ctx->pc = 0x2D8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8124u;
        // 0x2d8128: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D812Cu;
        goto label_2d812c;
    }
    ctx->pc = 0x2D8124u;
    SET_GPR_U32(ctx, 31, 0x2D812Cu);
    ctx->pc = 0x2D8128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8124u;
    // 0x2d8128: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D8124u, 0x2D812Cu)) {
        return;
    }
    ctx->pc = 0x2D812Cu;
label_2d812c:
    // 0x2d812c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_2d8130:
    if (ctx->pc == 0x2D8130u) {
        ctx->pc = 0x2D8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D812Cu;
        // 0x2d8130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8134u;
        goto label_2d8134;
    }
    ctx->pc = 0x2D812Cu;
    {
        const bool branch_taken_0x2d812c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D812Cu;
        // 0x2d8130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d812c) {
            ctx->pc = 0x2D8308u;
            goto label_2d8308;
        }
    }
    ctx->pc = 0x2D8134u;
label_2d8134:
    // 0x2d8134: 0x37a40002  ori         $a0, $sp, 0x2
    ctx->pc = 0x2d8134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
label_2d8138:
    // 0x2d8138: 0xc0c344c  jal         func_30D130
label_2d813c:
    if (ctx->pc == 0x2D813Cu) {
        ctx->pc = 0x2D813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8138u;
        // 0x2d813c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8140u;
        goto label_2d8140;
    }
    ctx->pc = 0x2D8138u;
    SET_GPR_U32(ctx, 31, 0x2D8140u);
    ctx->pc = 0x2D813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8138u;
    // 0x2d813c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D8138u, 0x2D8140u)) {
        return;
    }
    ctx->pc = 0x2D8140u;
label_2d8140:
    // 0x2d8140: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_2d8144:
    if (ctx->pc == 0x2D8144u) {
        ctx->pc = 0x2D8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8140u;
        // 0x2d8144: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8148u;
        goto label_2d8148;
    }
    ctx->pc = 0x2D8140u;
    {
        const bool branch_taken_0x2d8140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8140u;
        // 0x2d8144: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8140) {
            ctx->pc = 0x2D8304u;
            goto label_2d8304;
        }
    }
    ctx->pc = 0x2D8148u;
label_2d8148:
    // 0x2d8148: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d8148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d814c:
    // 0x2d814c: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2d814cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d8150:
    // 0x2d8150: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2d8150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2d8154:
    // 0x2d8154: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2d8154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2d8158:
    // 0x2d8158: 0x97b10000  lhu         $s1, 0x0($sp)
    ctx->pc = 0x2d8158u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_2d815c:
    // 0x2d815c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2d815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2d8160:
    // 0x2d8160: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d8160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d8164:
    // 0x2d8164: 0x40f809  jalr        $v0
label_2d8168:
    if (ctx->pc == 0x2D8168u) {
        ctx->pc = 0x2D8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8164u;
        // 0x2d8168: 0x97b00002  lhu         $s0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D816Cu;
        goto label_2d816c;
    }
    ctx->pc = 0x2D8164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D816Cu);
        ctx->pc = 0x2D8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8164u;
        // 0x2d8168: 0x97b00002  lhu         $s0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8164u, 0x2D816Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D816Cu;
label_2d816c:
    // 0x2d816c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d816cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8170:
    // 0x2d8170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8174:
    // 0x2d8174: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d8174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8178:
    // 0x2d8178: 0xc0b5f62  jal         func_2D7D88
label_2d817c:
    if (ctx->pc == 0x2D817Cu) {
        ctx->pc = 0x2D817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8178u;
        // 0x2d817c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8180u;
        goto label_2d8180;
    }
    ctx->pc = 0x2D8178u;
    SET_GPR_U32(ctx, 31, 0x2D8180u);
    ctx->pc = 0x2D817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8178u;
    // 0x2d817c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7D88u, 0x2D8178u, 0x2D8180u)) {
        return;
    }
    ctx->pc = 0x2D8180u;
label_2d8180:
    // 0x2d8180: 0x12400061  beqz        $s2, . + 4 + (0x61 << 2)
label_2d8184:
    if (ctx->pc == 0x2D8184u) {
        ctx->pc = 0x2D8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8180u;
        // 0x2d8184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8188u;
        goto label_2d8188;
    }
    ctx->pc = 0x2D8180u;
    {
        const bool branch_taken_0x2d8180 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8180u;
        // 0x2d8184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8180) {
            ctx->pc = 0x2D8308u;
            goto label_2d8308;
        }
    }
    ctx->pc = 0x2D8188u;
label_2d8188:
    // 0x2d8188: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x2d8188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2d818c:
    // 0x2d818c: 0xc0c344c  jal         func_30D130
label_2d8190:
    if (ctx->pc == 0x2D8190u) {
        ctx->pc = 0x2D8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D818Cu;
        // 0x2d8190: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8194u;
        goto label_2d8194;
    }
    ctx->pc = 0x2D818Cu;
    SET_GPR_U32(ctx, 31, 0x2D8194u);
    ctx->pc = 0x2D8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D818Cu;
    // 0x2d8190: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D818Cu, 0x2D8194u)) {
        return;
    }
    ctx->pc = 0x2D8194u;
label_2d8194:
    // 0x2d8194: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_2d8198:
    if (ctx->pc == 0x2D8198u) {
        ctx->pc = 0x2D8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8194u;
        // 0x2d8198: 0x2644000a  addiu       $a0, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D819Cu;
        goto label_2d819c;
    }
    ctx->pc = 0x2D8194u;
    {
        const bool branch_taken_0x2d8194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8194u;
        // 0x2d8198: 0x2644000a  addiu       $a0, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8194) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D819Cu;
label_2d819c:
    // 0x2d819c: 0xc0c344c  jal         func_30D130
label_2d81a0:
    if (ctx->pc == 0x2D81A0u) {
        ctx->pc = 0x2D81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D819Cu;
        // 0x2d81a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81A4u;
        goto label_2d81a4;
    }
    ctx->pc = 0x2D819Cu;
    SET_GPR_U32(ctx, 31, 0x2D81A4u);
    ctx->pc = 0x2D81A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D819Cu;
    // 0x2d81a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D819Cu, 0x2D81A4u)) {
        return;
    }
    ctx->pc = 0x2D81A4u;
label_2d81a4:
    // 0x2d81a4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_2d81a8:
    if (ctx->pc == 0x2D81A8u) {
        ctx->pc = 0x2D81ACu;
        goto label_2d81ac;
    }
    ctx->pc = 0x2D81A4u;
    {
        const bool branch_taken_0x2d81a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d81a4) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D81ACu;
label_2d81ac:
    // 0x2d81ac: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x2d81acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_2d81b0:
    // 0x2d81b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2d81b4:
    if (ctx->pc == 0x2D81B4u) {
        ctx->pc = 0x2D81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81B0u;
        // 0x2d81b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81B8u;
        goto label_2d81b8;
    }
    ctx->pc = 0x2D81B0u;
    {
        const bool branch_taken_0x2d81b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81B0u;
        // 0x2d81b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81b0) {
            ctx->pc = 0x2D81E8u;
            goto label_2d81e8;
        }
    }
    ctx->pc = 0x2D81B8u;
label_2d81b8:
    // 0x2d81b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d81b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d81bc:
    // 0x2d81bc: 0x0  nop
    ctx->pc = 0x2d81bcu;
    // NOP
label_2d81c0:
    // 0x2d81c0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2d81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2d81c4:
    // 0x2d81c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d81c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d81c8:
    // 0x2d81c8: 0xc0c302a  jal         func_30C0A8
label_2d81cc:
    if (ctx->pc == 0x2D81CCu) {
        ctx->pc = 0x2D81CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81C8u;
        // 0x2d81cc: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81D0u;
        goto label_2d81d0;
    }
    ctx->pc = 0x2D81C8u;
    SET_GPR_U32(ctx, 31, 0x2D81D0u);
    ctx->pc = 0x2D81CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81C8u;
    // 0x2d81cc: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C0A8u, 0x2D81C8u, 0x2D81D0u)) {
        return;
    }
    ctx->pc = 0x2D81D0u;
label_2d81d0:
    // 0x2d81d0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_2d81d4:
    if (ctx->pc == 0x2D81D4u) {
        ctx->pc = 0x2D81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81D0u;
        // 0x2d81d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81D8u;
        goto label_2d81d8;
    }
    ctx->pc = 0x2D81D0u;
    {
        const bool branch_taken_0x2d81d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81D0u;
        // 0x2d81d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81d0) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D81D8u;
label_2d81d8:
    // 0x2d81d8: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x2d81d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_2d81dc:
    // 0x2d81dc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d81dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d81e0:
    // 0x2d81e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2d81e4:
    if (ctx->pc == 0x2D81E4u) {
        ctx->pc = 0x2D81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81E0u;
        // 0x2d81e4: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81E8u;
        goto label_2d81e8;
    }
    ctx->pc = 0x2D81E0u;
    {
        const bool branch_taken_0x2d81e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81E0u;
        // 0x2d81e4: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81e0) {
            ctx->pc = 0x2D81C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d81c0;
        }
    }
    ctx->pc = 0x2D81E8u;
label_2d81e8:
    // 0x2d81e8: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2d81e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_2d81ec:
    // 0x2d81ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d81ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d81f0:
    // 0x2d81f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2d81f4:
    if (ctx->pc == 0x2D81F4u) {
        ctx->pc = 0x2D81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81F0u;
        // 0x2d81f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D81F8u;
        goto label_2d81f8;
    }
    ctx->pc = 0x2D81F0u;
    {
        const bool branch_taken_0x2d81f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81F0u;
        // 0x2d81f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81f0) {
            ctx->pc = 0x2D822Cu;
            goto label_2d822c;
        }
    }
    ctx->pc = 0x2D81F8u;
label_2d81f8:
    // 0x2d81f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d81f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d81fc:
    // 0x2d81fc: 0x0  nop
    ctx->pc = 0x2d81fcu;
    // NOP
label_2d8200:
    // 0x2d8200: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2d8200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2d8204:
    // 0x2d8204: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d8204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8208:
    // 0x2d8208: 0xc0c3222  jal         func_30C888
label_2d820c:
    if (ctx->pc == 0x2D820Cu) {
        ctx->pc = 0x2D820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8208u;
        // 0x2d820c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8210u;
        goto label_2d8210;
    }
    ctx->pc = 0x2D8208u;
    SET_GPR_U32(ctx, 31, 0x2D8210u);
    ctx->pc = 0x2D820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8208u;
    // 0x2d820c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C888u, 0x2D8208u, 0x2D8210u)) {
        return;
    }
    ctx->pc = 0x2D8210u;
label_2d8210:
    // 0x2d8210: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2d8214:
    if (ctx->pc == 0x2D8214u) {
        ctx->pc = 0x2D8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8210u;
        // 0x2d8214: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8218u;
        goto label_2d8218;
    }
    ctx->pc = 0x2D8210u;
    {
        const bool branch_taken_0x2d8210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8210u;
        // 0x2d8214: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8210) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D8218u;
label_2d8218:
    // 0x2d8218: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2d8218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_2d821c:
    // 0x2d821c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d821cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8220:
    // 0x2d8220: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d8220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d8224:
    // 0x2d8224: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2d8228:
    if (ctx->pc == 0x2D8228u) {
        ctx->pc = 0x2D8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8224u;
        // 0x2d8228: 0x263100b4  addiu       $s1, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D822Cu;
        goto label_2d822c;
    }
    ctx->pc = 0x2D8224u;
    {
        const bool branch_taken_0x2d8224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8224u;
        // 0x2d8228: 0x263100b4  addiu       $s1, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8224) {
            ctx->pc = 0x2D8200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8200;
        }
    }
    ctx->pc = 0x2D822Cu;
label_2d822c:
    // 0x2d822c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2d8230:
    if (ctx->pc == 0x2D8230u) {
        ctx->pc = 0x2D8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D822Cu;
        // 0x2d8230: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8234u;
        goto label_2d8234;
    }
    ctx->pc = 0x2D822Cu;
    {
        const bool branch_taken_0x2d822c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D822Cu;
        // 0x2d8230: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d822c) {
            ctx->pc = 0x2D8278u;
            goto label_2d8278;
        }
    }
    ctx->pc = 0x2D8234u;
label_2d8234:
    // 0x2d8234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d8234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8238:
    // 0x2d8238: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2d8238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2d823c:
    // 0x2d823c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d823cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8240:
    // 0x2d8240: 0xc0c344c  jal         func_30D130
label_2d8244:
    if (ctx->pc == 0x2D8244u) {
        ctx->pc = 0x2D8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8240u;
        // 0x2d8244: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8248u;
        goto label_2d8248;
    }
    ctx->pc = 0x2D8240u;
    SET_GPR_U32(ctx, 31, 0x2D8248u);
    ctx->pc = 0x2D8244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8240u;
    // 0x2d8244: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D8240u, 0x2D8248u)) {
        return;
    }
    ctx->pc = 0x2D8248u;
label_2d8248:
    // 0x2d8248: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2d824c:
    if (ctx->pc == 0x2D824Cu) {
        ctx->pc = 0x2D824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8248u;
        // 0x2d824c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8250u;
        goto label_2d8250;
    }
    ctx->pc = 0x2D8248u;
    {
        const bool branch_taken_0x2d8248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8248u;
        // 0x2d824c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8248) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D8250u;
label_2d8250:
    // 0x2d8250: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2d8250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2d8254:
    // 0x2d8254: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2d8258:
    // 0x2d8258: 0xc0c344c  jal         func_30D130
label_2d825c:
    if (ctx->pc == 0x2D825Cu) {
        ctx->pc = 0x2D825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8258u;
        // 0x2d825c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8260u;
        goto label_2d8260;
    }
    ctx->pc = 0x2D8258u;
    SET_GPR_U32(ctx, 31, 0x2D8260u);
    ctx->pc = 0x2D825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8258u;
    // 0x2d825c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D8258u, 0x2D8260u)) {
        return;
    }
    ctx->pc = 0x2D8260u;
label_2d8260:
    // 0x2d8260: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2d8264:
    if (ctx->pc == 0x2D8264u) {
        ctx->pc = 0x2D8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8260u;
        // 0x2d8264: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8268u;
        goto label_2d8268;
    }
    ctx->pc = 0x2D8260u;
    {
        const bool branch_taken_0x2d8260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8260u;
        // 0x2d8264: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8260) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D8268u;
label_2d8268:
    // 0x2d8268: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2d8268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_2d826c:
    // 0x2d826c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d826cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d8270:
    // 0x2d8270: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2d8274:
    if (ctx->pc == 0x2D8274u) {
        ctx->pc = 0x2D8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8270u;
        // 0x2d8274: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8278u;
        goto label_2d8278;
    }
    ctx->pc = 0x2D8270u;
    {
        const bool branch_taken_0x2d8270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8270u;
        // 0x2d8274: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8270) {
            ctx->pc = 0x2D8238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8238;
        }
    }
    ctx->pc = 0x2D8278u;
label_2d8278:
    // 0x2d8278: 0xc0ad286  jal         func_2B4A18
label_2d827c:
    if (ctx->pc == 0x2D827Cu) {
        ctx->pc = 0x2D827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8278u;
        // 0x2d827c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8280u;
        goto label_2d8280;
    }
    ctx->pc = 0x2D8278u;
    SET_GPR_U32(ctx, 31, 0x2D8280u);
    ctx->pc = 0x2D827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8278u;
    // 0x2d827c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A18u, 0x2D8278u, 0x2D8280u)) {
        return;
    }
    ctx->pc = 0x2D8280u;
label_2d8280:
    // 0x2d8280: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x2d8280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2d8284:
    // 0x2d8284: 0xc0c3356  jal         func_30CD58
label_2d8288:
    if (ctx->pc == 0x2D8288u) {
        ctx->pc = 0x2D8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8284u;
        // 0x2d8288: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D828Cu;
        goto label_2d828c;
    }
    ctx->pc = 0x2D8284u;
    SET_GPR_U32(ctx, 31, 0x2D828Cu);
    ctx->pc = 0x2D8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8284u;
    // 0x2d8288: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30CD58u, 0x2D8284u, 0x2D828Cu)) {
        return;
    }
    ctx->pc = 0x2D828Cu;
label_2d828c:
    // 0x2d828c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2d8290:
    if (ctx->pc == 0x2D8290u) {
        ctx->pc = 0x2D8294u;
        goto label_2d8294;
    }
    ctx->pc = 0x2D828Cu;
    {
        const bool branch_taken_0x2d828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d828c) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D8294u;
label_2d8294:
    // 0x2d8294: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2d8294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2d8298:
    // 0x2d8298: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x2d8298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_2d829c:
    // 0x2d829c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d82a0:
    // 0x2d82a0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2d82a4:
    if (ctx->pc == 0x2D82A4u) {
        ctx->pc = 0x2D82A8u;
        goto label_2d82a8;
    }
    ctx->pc = 0x2D82A0u;
    {
        const bool branch_taken_0x2d82a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d82a0) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D82A8u;
label_2d82a8:
    // 0x2d82a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d82ac:
    // 0x2d82ac: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_2d82b0:
    if (ctx->pc == 0x2D82B0u) {
        ctx->pc = 0x2D82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82ACu;
        // 0x2d82b0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82B4u;
        goto label_2d82b4;
    }
    ctx->pc = 0x2D82ACu;
    {
        const bool branch_taken_0x2d82ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82ACu;
        // 0x2d82b0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82ac) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D82B4u;
label_2d82b4:
    // 0x2d82b4: 0xc0c3424  jal         func_30D090
label_2d82b8:
    if (ctx->pc == 0x2D82B8u) {
        ctx->pc = 0x2D82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82B4u;
        // 0x2d82b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82BCu;
        goto label_2d82bc;
    }
    ctx->pc = 0x2D82B4u;
    SET_GPR_U32(ctx, 31, 0x2D82BCu);
    ctx->pc = 0x2D82B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82B4u;
    // 0x2d82b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D090u, 0x2D82B4u, 0x2D82BCu)) {
        return;
    }
    ctx->pc = 0x2D82BCu;
label_2d82bc:
    // 0x2d82bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2d82c0:
    if (ctx->pc == 0x2D82C0u) {
        ctx->pc = 0x2D82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82BCu;
        // 0x2d82c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82C4u;
        goto label_2d82c4;
    }
    ctx->pc = 0x2D82BCu;
    {
        const bool branch_taken_0x2d82bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82BCu;
        // 0x2d82c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82bc) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D82C4u;
label_2d82c4:
    // 0x2d82c4: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2d82c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2d82c8:
    // 0x2d82c8: 0xc0c3474  jal         func_30D1D0
label_2d82cc:
    if (ctx->pc == 0x2D82CCu) {
        ctx->pc = 0x2D82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82C8u;
        // 0x2d82cc: 0x96450008  lhu         $a1, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82D0u;
        goto label_2d82d0;
    }
    ctx->pc = 0x2D82C8u;
    SET_GPR_U32(ctx, 31, 0x2D82D0u);
    ctx->pc = 0x2D82CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82C8u;
    // 0x2d82cc: 0x96450008  lhu         $a1, 0x8($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D1D0u, 0x2D82C8u, 0x2D82D0u)) {
        return;
    }
    ctx->pc = 0x2D82D0u;
label_2d82d0:
    // 0x2d82d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d82d4:
    if (ctx->pc == 0x2D82D4u) {
        ctx->pc = 0x2D82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82D0u;
        // 0x2d82d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82D8u;
        goto label_2d82d8;
    }
    ctx->pc = 0x2D82D0u;
    {
        const bool branch_taken_0x2d82d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82D0u;
        // 0x2d82d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82d0) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D82D8u;
label_2d82d8:
    // 0x2d82d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2d82dc:
    if (ctx->pc == 0x2D82DCu) {
        ctx->pc = 0x2D82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82D8u;
        // 0x2d82dc: 0xae920000  sw          $s2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82E0u;
        goto label_2d82e0;
    }
    ctx->pc = 0x2D82D8u;
    {
        const bool branch_taken_0x2d82d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82D8u;
        // 0x2d82dc: 0xae920000  sw          $s2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82d8) {
            ctx->pc = 0x2D8308u;
            goto label_2d8308;
        }
    }
    ctx->pc = 0x2D82E0u;
label_2d82e0:
    // 0x2d82e0: 0xc0b60e0  jal         func_2D8380
label_2d82e4:
    if (ctx->pc == 0x2D82E4u) {
        ctx->pc = 0x2D82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82E0u;
        // 0x2d82e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82E8u;
        goto label_2d82e8;
    }
    ctx->pc = 0x2D82E0u;
    SET_GPR_U32(ctx, 31, 0x2D82E8u);
    ctx->pc = 0x2D82E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82E0u;
    // 0x2d82e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D8380u, 0x2D82E0u, 0x2D82E8u)) {
        return;
    }
    ctx->pc = 0x2D82E8u;
label_2d82e8:
    // 0x2d82e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d82e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d82ec:
    // 0x2d82ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2d82f0:
    if (ctx->pc == 0x2D82F0u) {
        ctx->pc = 0x2D82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82ECu;
        // 0x2d82f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82F4u;
        goto label_2d82f4;
    }
    ctx->pc = 0x2D82ECu;
    {
        const bool branch_taken_0x2d82ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82ECu;
        // 0x2d82f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82ec) {
            ctx->pc = 0x2D8308u;
            goto label_2d8308;
        }
    }
    ctx->pc = 0x2D82F4u;
label_2d82f4:
    // 0x2d82f4: 0x26a30fc8  addiu       $v1, $s5, 0xFC8
    ctx->pc = 0x2d82f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_2d82f8:
    // 0x2d82f8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2d82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2d82fc:
    // 0x2d82fc: 0x40f809  jalr        $v0
label_2d8300:
    if (ctx->pc == 0x2D8300u) {
        ctx->pc = 0x2D8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82FCu;
        // 0x2d8300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8304u;
        goto label_2d8304;
    }
    ctx->pc = 0x2D82FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8304u);
        ctx->pc = 0x2D8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82FCu;
        // 0x2d8300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D82FCu, 0x2D8304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8304u;
label_2d8304:
    // 0x2d8304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8308:
    // 0x2d8308: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d8308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d830c:
    // 0x2d830c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d830cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d8310:
    // 0x2d8310: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d8310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d8314:
    // 0x2d8314: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d8314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8318:
    // 0x2d8318: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d8318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d831c:
    // 0x2d831c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d831cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8320:
    // 0x2d8320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8324:
    // 0x2d8324: 0x3e00008  jr          $ra
label_2d8328:
    if (ctx->pc == 0x2D8328u) {
        ctx->pc = 0x2D8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8324u;
        // 0x2d8328: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D832Cu;
        goto label_2d832c;
    }
    ctx->pc = 0x2D8324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8324u;
        // 0x2d8328: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D832Cu;
label_2d832c:
    // 0x2d832c: 0x0  nop
    ctx->pc = 0x2d832cu;
    // NOP
label_2d8330:
    // 0x2d8330: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d8334:
    // 0x2d8334: 0x0  nop
    ctx->pc = 0x2d8334u;
    // NOP
    ctx->pc = 0x2d8338u;
}
