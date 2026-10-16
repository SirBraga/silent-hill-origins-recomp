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

// Function: sub_002583C0
// Address: 0x2583c0 - 0x258660
void sub_002583C0_0x2583c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002583C0_0x2583c0");
#endif

    switch (ctx->pc) {
        case 0x2583c0u: goto label_2583c0;
        case 0x2583c4u: goto label_2583c4;
        case 0x2583c8u: goto label_2583c8;
        case 0x2583ccu: goto label_2583cc;
        case 0x2583d0u: goto label_2583d0;
        case 0x2583d4u: goto label_2583d4;
        case 0x2583d8u: goto label_2583d8;
        case 0x2583dcu: goto label_2583dc;
        case 0x2583e0u: goto label_2583e0;
        case 0x2583e4u: goto label_2583e4;
        case 0x2583e8u: goto label_2583e8;
        case 0x2583ecu: goto label_2583ec;
        case 0x2583f0u: goto label_2583f0;
        case 0x2583f4u: goto label_2583f4;
        case 0x2583f8u: goto label_2583f8;
        case 0x2583fcu: goto label_2583fc;
        case 0x258400u: goto label_258400;
        case 0x258404u: goto label_258404;
        case 0x258408u: goto label_258408;
        case 0x25840cu: goto label_25840c;
        case 0x258410u: goto label_258410;
        case 0x258414u: goto label_258414;
        case 0x258418u: goto label_258418;
        case 0x25841cu: goto label_25841c;
        case 0x258420u: goto label_258420;
        case 0x258424u: goto label_258424;
        case 0x258428u: goto label_258428;
        case 0x25842cu: goto label_25842c;
        case 0x258430u: goto label_258430;
        case 0x258434u: goto label_258434;
        case 0x258438u: goto label_258438;
        case 0x25843cu: goto label_25843c;
        case 0x258440u: goto label_258440;
        case 0x258444u: goto label_258444;
        case 0x258448u: goto label_258448;
        case 0x25844cu: goto label_25844c;
        case 0x258450u: goto label_258450;
        case 0x258454u: goto label_258454;
        case 0x258458u: goto label_258458;
        case 0x25845cu: goto label_25845c;
        case 0x258460u: goto label_258460;
        case 0x258464u: goto label_258464;
        case 0x258468u: goto label_258468;
        case 0x25846cu: goto label_25846c;
        case 0x258470u: goto label_258470;
        case 0x258474u: goto label_258474;
        case 0x258478u: goto label_258478;
        case 0x25847cu: goto label_25847c;
        case 0x258480u: goto label_258480;
        case 0x258484u: goto label_258484;
        case 0x258488u: goto label_258488;
        case 0x25848cu: goto label_25848c;
        case 0x258490u: goto label_258490;
        case 0x258494u: goto label_258494;
        case 0x258498u: goto label_258498;
        case 0x25849cu: goto label_25849c;
        case 0x2584a0u: goto label_2584a0;
        case 0x2584a4u: goto label_2584a4;
        case 0x2584a8u: goto label_2584a8;
        case 0x2584acu: goto label_2584ac;
        case 0x2584b0u: goto label_2584b0;
        case 0x2584b4u: goto label_2584b4;
        case 0x2584b8u: goto label_2584b8;
        case 0x2584bcu: goto label_2584bc;
        case 0x2584c0u: goto label_2584c0;
        case 0x2584c4u: goto label_2584c4;
        case 0x2584c8u: goto label_2584c8;
        case 0x2584ccu: goto label_2584cc;
        case 0x2584d0u: goto label_2584d0;
        case 0x2584d4u: goto label_2584d4;
        case 0x2584d8u: goto label_2584d8;
        case 0x2584dcu: goto label_2584dc;
        case 0x2584e0u: goto label_2584e0;
        case 0x2584e4u: goto label_2584e4;
        case 0x2584e8u: goto label_2584e8;
        case 0x2584ecu: goto label_2584ec;
        case 0x2584f0u: goto label_2584f0;
        case 0x2584f4u: goto label_2584f4;
        case 0x2584f8u: goto label_2584f8;
        case 0x2584fcu: goto label_2584fc;
        case 0x258500u: goto label_258500;
        case 0x258504u: goto label_258504;
        case 0x258508u: goto label_258508;
        case 0x25850cu: goto label_25850c;
        case 0x258510u: goto label_258510;
        case 0x258514u: goto label_258514;
        case 0x258518u: goto label_258518;
        case 0x25851cu: goto label_25851c;
        case 0x258520u: goto label_258520;
        case 0x258524u: goto label_258524;
        case 0x258528u: goto label_258528;
        case 0x25852cu: goto label_25852c;
        case 0x258530u: goto label_258530;
        case 0x258534u: goto label_258534;
        case 0x258538u: goto label_258538;
        case 0x25853cu: goto label_25853c;
        case 0x258540u: goto label_258540;
        case 0x258544u: goto label_258544;
        case 0x258548u: goto label_258548;
        case 0x25854cu: goto label_25854c;
        case 0x258550u: goto label_258550;
        case 0x258554u: goto label_258554;
        case 0x258558u: goto label_258558;
        case 0x25855cu: goto label_25855c;
        case 0x258560u: goto label_258560;
        case 0x258564u: goto label_258564;
        case 0x258568u: goto label_258568;
        case 0x25856cu: goto label_25856c;
        case 0x258570u: goto label_258570;
        case 0x258574u: goto label_258574;
        case 0x258578u: goto label_258578;
        case 0x25857cu: goto label_25857c;
        case 0x258580u: goto label_258580;
        case 0x258584u: goto label_258584;
        case 0x258588u: goto label_258588;
        case 0x25858cu: goto label_25858c;
        case 0x258590u: goto label_258590;
        case 0x258594u: goto label_258594;
        case 0x258598u: goto label_258598;
        case 0x25859cu: goto label_25859c;
        case 0x2585a0u: goto label_2585a0;
        case 0x2585a4u: goto label_2585a4;
        case 0x2585a8u: goto label_2585a8;
        case 0x2585acu: goto label_2585ac;
        case 0x2585b0u: goto label_2585b0;
        case 0x2585b4u: goto label_2585b4;
        case 0x2585b8u: goto label_2585b8;
        case 0x2585bcu: goto label_2585bc;
        case 0x2585c0u: goto label_2585c0;
        case 0x2585c4u: goto label_2585c4;
        case 0x2585c8u: goto label_2585c8;
        case 0x2585ccu: goto label_2585cc;
        case 0x2585d0u: goto label_2585d0;
        case 0x2585d4u: goto label_2585d4;
        case 0x2585d8u: goto label_2585d8;
        case 0x2585dcu: goto label_2585dc;
        case 0x2585e0u: goto label_2585e0;
        case 0x2585e4u: goto label_2585e4;
        case 0x2585e8u: goto label_2585e8;
        case 0x2585ecu: goto label_2585ec;
        case 0x2585f0u: goto label_2585f0;
        case 0x2585f4u: goto label_2585f4;
        case 0x2585f8u: goto label_2585f8;
        case 0x2585fcu: goto label_2585fc;
        case 0x258600u: goto label_258600;
        case 0x258604u: goto label_258604;
        case 0x258608u: goto label_258608;
        case 0x25860cu: goto label_25860c;
        case 0x258610u: goto label_258610;
        case 0x258614u: goto label_258614;
        case 0x258618u: goto label_258618;
        case 0x25861cu: goto label_25861c;
        case 0x258620u: goto label_258620;
        case 0x258624u: goto label_258624;
        case 0x258628u: goto label_258628;
        case 0x25862cu: goto label_25862c;
        case 0x258630u: goto label_258630;
        case 0x258634u: goto label_258634;
        case 0x258638u: goto label_258638;
        case 0x25863cu: goto label_25863c;
        case 0x258640u: goto label_258640;
        case 0x258644u: goto label_258644;
        case 0x258648u: goto label_258648;
        case 0x25864cu: goto label_25864c;
        case 0x258650u: goto label_258650;
        case 0x258654u: goto label_258654;
        case 0x258658u: goto label_258658;
        case 0x25865cu: goto label_25865c;
        default: break;
    }

    ctx->pc = 0x2583c0u;

label_2583c0:
    // 0x2583c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2583c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2583c4:
    // 0x2583c4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2583c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2583c8:
    // 0x2583c8: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x2583c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2583cc:
    // 0x2583cc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2583ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2583d0:
    // 0x2583d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2583d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2583d4:
    // 0x2583d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2583d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2583d8:
    // 0x2583d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2583d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2583dc:
    // 0x2583dc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2583dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2583e0:
    // 0x2583e0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2583e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2583e4:
    // 0x2583e4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2583e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2583e8:
    // 0x2583e8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2583e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2583ec:
    // 0x2583ec: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2583ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2583f0:
    // 0x2583f0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2583f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2583f4:
    // 0x2583f4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2583f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2583f8:
    // 0x2583f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2583f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2583fc:
    // 0x2583fc: 0xc09270a  jal         func_249C28
label_258400:
    if (ctx->pc == 0x258400u) {
        ctx->pc = 0x258400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583FCu;
        // 0x258400: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258404u;
        goto label_258404;
    }
    ctx->pc = 0x2583FCu;
    SET_GPR_U32(ctx, 31, 0x258404u);
    ctx->pc = 0x258400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2583FCu;
    // 0x258400: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2583FCu, 0x258404u)) {
        return;
    }
    ctx->pc = 0x258404u;
label_258404:
    // 0x258404: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_258408:
    if (ctx->pc == 0x258408u) {
        ctx->pc = 0x258408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258404u;
        // 0x258408: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25840Cu;
        goto label_25840c;
    }
    ctx->pc = 0x258404u;
    {
        const bool branch_taken_0x258404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258404u;
        // 0x258408: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258404) {
            ctx->pc = 0x258628u;
            goto label_258628;
        }
    }
    ctx->pc = 0x25840Cu;
label_25840c:
    // 0x25840c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x25840cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_258410:
    // 0x258410: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x258410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_258414:
    // 0x258414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x258414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_258418:
    // 0x258418: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x258418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_25841c:
    // 0x25841c: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_258420:
    if (ctx->pc == 0x258420u) {
        ctx->pc = 0x258420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25841Cu;
        // 0x258420: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258424u;
        goto label_258424;
    }
    ctx->pc = 0x25841Cu;
    {
        const bool branch_taken_0x25841c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25841Cu;
        // 0x258420: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25841c) {
            ctx->pc = 0x258604u;
            goto label_258604;
        }
    }
    ctx->pc = 0x258424u;
label_258424:
    // 0x258424: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_258428:
    // 0x258428: 0xc0927be  jal         func_249EF8
label_25842c:
    if (ctx->pc == 0x25842Cu) {
        ctx->pc = 0x25842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258428u;
        // 0x25842c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258430u;
        goto label_258430;
    }
    ctx->pc = 0x258428u;
    SET_GPR_U32(ctx, 31, 0x258430u);
    ctx->pc = 0x25842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258428u;
    // 0x25842c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x258428u, 0x258430u)) {
        return;
    }
    ctx->pc = 0x258430u;
label_258430:
    // 0x258430: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_258434:
    if (ctx->pc == 0x258434u) {
        ctx->pc = 0x258434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258430u;
        // 0x258434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258438u;
        goto label_258438;
    }
    ctx->pc = 0x258430u;
    {
        const bool branch_taken_0x258430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258430u;
        // 0x258434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258430) {
            ctx->pc = 0x25862Cu;
            goto label_25862c;
        }
    }
    ctx->pc = 0x258438u;
label_258438:
    // 0x258438: 0xc096056  jal         func_258158
label_25843c:
    if (ctx->pc == 0x25843Cu) {
        ctx->pc = 0x25843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258438u;
        // 0x25843c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258440u;
        goto label_258440;
    }
    ctx->pc = 0x258438u;
    SET_GPR_U32(ctx, 31, 0x258440u);
    ctx->pc = 0x25843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258438u;
    // 0x25843c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258158u, 0x258438u, 0x258440u)) {
        return;
    }
    ctx->pc = 0x258440u;
label_258440:
    // 0x258440: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x258440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_258444:
    // 0x258444: 0x10a00079  beqz        $a1, . + 4 + (0x79 << 2)
label_258448:
    if (ctx->pc == 0x258448u) {
        ctx->pc = 0x258448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258444u;
        // 0x258448: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25844Cu;
        goto label_25844c;
    }
    ctx->pc = 0x258444u;
    {
        const bool branch_taken_0x258444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x258448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258444u;
        // 0x258448: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258444) {
            ctx->pc = 0x25862Cu;
            goto label_25862c;
        }
    }
    ctx->pc = 0x25844Cu;
label_25844c:
    // 0x25844c: 0xc09606e  jal         func_2581B8
label_258450:
    if (ctx->pc == 0x258450u) {
        ctx->pc = 0x258450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25844Cu;
        // 0x258450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258454u;
        goto label_258454;
    }
    ctx->pc = 0x25844Cu;
    SET_GPR_U32(ctx, 31, 0x258454u);
    ctx->pc = 0x258450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25844Cu;
    // 0x258450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2581B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2581B8u, 0x25844Cu, 0x258454u)) {
        return;
    }
    ctx->pc = 0x258454u;
label_258454:
    // 0x258454: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_258458:
    if (ctx->pc == 0x258458u) {
        ctx->pc = 0x258458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258454u;
        // 0x258458: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25845Cu;
        goto label_25845c;
    }
    ctx->pc = 0x258454u;
    {
        const bool branch_taken_0x258454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258454u;
        // 0x258458: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258454) {
            ctx->pc = 0x25846Cu;
            goto label_25846c;
        }
    }
    ctx->pc = 0x25845Cu;
label_25845c:
    // 0x25845c: 0xc096032  jal         func_2580C8
label_258460:
    if (ctx->pc == 0x258460u) {
        ctx->pc = 0x258460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25845Cu;
        // 0x258460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258464u;
        goto label_258464;
    }
    ctx->pc = 0x25845Cu;
    SET_GPR_U32(ctx, 31, 0x258464u);
    ctx->pc = 0x258460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25845Cu;
    // 0x258460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2580C8u, 0x25845Cu, 0x258464u)) {
        return;
    }
    ctx->pc = 0x258464u;
label_258464:
    // 0x258464: 0x10000071  b           . + 4 + (0x71 << 2)
label_258468:
    if (ctx->pc == 0x258468u) {
        ctx->pc = 0x258468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258464u;
        // 0x258468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25846Cu;
        goto label_25846c;
    }
    ctx->pc = 0x258464u;
    {
        const bool branch_taken_0x258464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258464u;
        // 0x258468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258464) {
            ctx->pc = 0x25862Cu;
            goto label_25862c;
        }
    }
    ctx->pc = 0x25846Cu;
label_25846c:
    // 0x25846c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25846cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_258470:
    // 0x258470: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x258470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_258474:
    // 0x258474: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x258474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_258478:
    // 0x258478: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x258478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_25847c:
    // 0x25847c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25847cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_258480:
    // 0x258480: 0x40f809  jalr        $v0
label_258484:
    if (ctx->pc == 0x258484u) {
        ctx->pc = 0x258484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258480u;
        // 0x258484: 0x34a50501  ori         $a1, $a1, 0x501 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258488u;
        goto label_258488;
    }
    ctx->pc = 0x258480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258488u);
        ctx->pc = 0x258484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258480u;
        // 0x258484: 0x34a50501  ori         $a1, $a1, 0x501 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258480u, 0x258488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258488u;
label_258488:
    // 0x258488: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x258488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_25848c:
    // 0x25848c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25848cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258490:
    // 0x258490: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_258494:
    // 0x258494: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258498:
    // 0x258498: 0xc0927be  jal         func_249EF8
label_25849c:
    if (ctx->pc == 0x25849Cu) {
        ctx->pc = 0x25849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258498u;
        // 0x25849c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2584A0u;
        goto label_2584a0;
    }
    ctx->pc = 0x258498u;
    SET_GPR_U32(ctx, 31, 0x2584A0u);
    ctx->pc = 0x25849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258498u;
    // 0x25849c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x258498u, 0x2584A0u)) {
        return;
    }
    ctx->pc = 0x2584A0u;
label_2584a0:
    // 0x2584a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2584a4:
    if (ctx->pc == 0x2584A4u) {
        ctx->pc = 0x2584A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584A0u;
        // 0x2584a4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2584A8u;
        goto label_2584a8;
    }
    ctx->pc = 0x2584A0u;
    {
        const bool branch_taken_0x2584a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2584A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584A0u;
        // 0x2584a4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584a0) {
            ctx->pc = 0x2584C4u;
            goto label_2584c4;
        }
    }
    ctx->pc = 0x2584A8u;
label_2584a8:
    // 0x2584a8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2584a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2584ac:
    // 0x2584ac: 0x40f809  jalr        $v0
label_2584b0:
    if (ctx->pc == 0x2584B0u) {
        ctx->pc = 0x2584B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584ACu;
        // 0x2584b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2584B4u;
        goto label_2584b4;
    }
    ctx->pc = 0x2584ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2584B4u);
        ctx->pc = 0x2584B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584ACu;
        // 0x2584b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2584ACu, 0x2584B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2584B4u;
label_2584b4:
    // 0x2584b4: 0xc096032  jal         func_2580C8
label_2584b8:
    if (ctx->pc == 0x2584B8u) {
        ctx->pc = 0x2584B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584B4u;
        // 0x2584b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2584BCu;
        goto label_2584bc;
    }
    ctx->pc = 0x2584B4u;
    SET_GPR_U32(ctx, 31, 0x2584BCu);
    ctx->pc = 0x2584B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2584B4u;
    // 0x2584b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2580C8u, 0x2584B4u, 0x2584BCu)) {
        return;
    }
    ctx->pc = 0x2584BCu;
label_2584bc:
    // 0x2584bc: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2584c0:
    if (ctx->pc == 0x2584C0u) {
        ctx->pc = 0x2584C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584BCu;
        // 0x2584c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2584C4u;
        goto label_2584c4;
    }
    ctx->pc = 0x2584BCu;
    {
        const bool branch_taken_0x2584bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584BCu;
        // 0x2584c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584bc) {
            ctx->pc = 0x25862Cu;
            goto label_25862c;
        }
    }
    ctx->pc = 0x2584C4u;
label_2584c4:
    // 0x2584c4: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
label_2584c8:
    if (ctx->pc == 0x2584C8u) {
        ctx->pc = 0x2584C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584C4u;
        // 0x2584c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2584CCu;
        goto label_2584cc;
    }
    ctx->pc = 0x2584C4u;
    {
        const bool branch_taken_0x2584c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2584C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584C4u;
        // 0x2584c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584c4) {
            ctx->pc = 0x2585C4u;
            goto label_2585c4;
        }
    }
    ctx->pc = 0x2584CCu;
label_2584cc:
    // 0x2584cc: 0x3c16fffc  lui         $s6, 0xFFFC
    ctx->pc = 0x2584ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65532 << 16));
label_2584d0:
    // 0x2584d0: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2584d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2584d4:
    // 0x2584d4: 0x36d6b000  ori         $s6, $s6, 0xB000
    ctx->pc = 0x2584d4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)45056);
label_2584d8:
    // 0x2584d8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2584d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2584dc:
    // 0x2584dc: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x2584dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2584e0:
    // 0x2584e0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2584e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2584e4:
    // 0x2584e4: 0x0  nop
    ctx->pc = 0x2584e4u;
    // NOP
label_2584e8:
    // 0x2584e8: 0x4a10025  bgez        $a1, . + 4 + (0x25 << 2)
label_2584ec:
    if (ctx->pc == 0x2584ECu) {
        ctx->pc = 0x2584ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584E8u;
        // 0x2584ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2584F0u;
        goto label_2584f0;
    }
    ctx->pc = 0x2584E8u;
    {
        const bool branch_taken_0x2584e8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2584ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584E8u;
        // 0x2584ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584e8) {
            ctx->pc = 0x258580u;
            goto label_258580;
        }
    }
    ctx->pc = 0x2584F0u;
label_2584f0:
    // 0x2584f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2584f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2584f4:
    // 0x2584f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2584f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2584f8:
    // 0x2584f8: 0xc09270a  jal         func_249C28
label_2584fc:
    if (ctx->pc == 0x2584FCu) {
        ctx->pc = 0x2584FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584F8u;
        // 0x2584fc: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258500u;
        goto label_258500;
    }
    ctx->pc = 0x2584F8u;
    SET_GPR_U32(ctx, 31, 0x258500u);
    ctx->pc = 0x2584FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2584F8u;
    // 0x2584fc: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2584F8u, 0x258500u)) {
        return;
    }
    ctx->pc = 0x258500u;
label_258500:
    // 0x258500: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_258504:
    if (ctx->pc == 0x258504u) {
        ctx->pc = 0x258504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258500u;
        // 0x258504: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258508u;
        goto label_258508;
    }
    ctx->pc = 0x258500u;
    {
        const bool branch_taken_0x258500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258500u;
        // 0x258504: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258500) {
            ctx->pc = 0x2585E0u;
            goto label_2585e0;
        }
    }
    ctx->pc = 0x258508u;
label_258508:
    // 0x258508: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x258508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_25850c:
    // 0x25850c: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x25850cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_258510:
    // 0x258510: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_258514:
    if (ctx->pc == 0x258514u) {
        ctx->pc = 0x258514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258510u;
        // 0x258514: 0xafb70000  sw          $s7, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258518u;
        goto label_258518;
    }
    ctx->pc = 0x258510u;
    {
        const bool branch_taken_0x258510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258510) {
            ctx->pc = 0x258514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258510u;
            // 0x258514: 0xafb70000  sw          $s7, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258548u;
            goto label_258548;
        }
    }
    ctx->pc = 0x258518u;
label_258518:
    // 0x258518: 0xc095fb6  jal         func_257ED8
label_25851c:
    if (ctx->pc == 0x25851Cu) {
        ctx->pc = 0x25851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258518u;
        // 0x25851c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258520u;
        goto label_258520;
    }
    ctx->pc = 0x258518u;
    SET_GPR_U32(ctx, 31, 0x258520u);
    ctx->pc = 0x25851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258518u;
    // 0x25851c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257ED8u, 0x258518u, 0x258520u)) {
        return;
    }
    ctx->pc = 0x258520u;
label_258520:
    // 0x258520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258524:
    // 0x258524: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
label_258528:
    if (ctx->pc == 0x258528u) {
        ctx->pc = 0x258528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258524u;
        // 0x258528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25852Cu;
        goto label_25852c;
    }
    ctx->pc = 0x258524u;
    {
        const bool branch_taken_0x258524 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x258528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258524u;
        // 0x258528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258524) {
            ctx->pc = 0x25859Cu;
            goto label_25859c;
        }
    }
    ctx->pc = 0x25852Cu;
label_25852c:
    // 0x25852c: 0x8fc2010c  lw          $v0, 0x10C($fp)
    ctx->pc = 0x25852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_258530:
    // 0x258530: 0x40f809  jalr        $v0
label_258534:
    if (ctx->pc == 0x258534u) {
        ctx->pc = 0x258534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258530u;
        // 0x258534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258538u;
        goto label_258538;
    }
    ctx->pc = 0x258530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258538u);
        ctx->pc = 0x258534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258530u;
        // 0x258534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258530u, 0x258538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258538u;
label_258538:
    // 0x258538: 0xc096032  jal         func_2580C8
label_25853c:
    if (ctx->pc == 0x25853Cu) {
        ctx->pc = 0x25853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258538u;
        // 0x25853c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258540u;
        goto label_258540;
    }
    ctx->pc = 0x258538u;
    SET_GPR_U32(ctx, 31, 0x258540u);
    ctx->pc = 0x25853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258538u;
    // 0x25853c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2580C8u, 0x258538u, 0x258540u)) {
        return;
    }
    ctx->pc = 0x258540u;
label_258540:
    // 0x258540: 0x1000003a  b           . + 4 + (0x3A << 2)
label_258544:
    if (ctx->pc == 0x258544u) {
        ctx->pc = 0x258544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258540u;
        // 0x258544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258548u;
        goto label_258548;
    }
    ctx->pc = 0x258540u;
    {
        const bool branch_taken_0x258540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258540u;
        // 0x258544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258540) {
            ctx->pc = 0x25862Cu;
            goto label_25862c;
        }
    }
    ctx->pc = 0x258548u;
label_258548:
    // 0x258548: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x258548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25854c:
    // 0x25854c: 0xc092848  jal         func_24A120
label_258550:
    if (ctx->pc == 0x258550u) {
        ctx->pc = 0x258550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25854Cu;
        // 0x258550: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258554u;
        goto label_258554;
    }
    ctx->pc = 0x25854Cu;
    SET_GPR_U32(ctx, 31, 0x258554u);
    ctx->pc = 0x258550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25854Cu;
    // 0x258550: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25854Cu, 0x258554u)) {
        return;
    }
    ctx->pc = 0x258554u;
label_258554:
    // 0x258554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_258558:
    // 0x258558: 0xc09281a  jal         func_24A068
label_25855c:
    if (ctx->pc == 0x25855Cu) {
        ctx->pc = 0x25855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258558u;
        // 0x25855c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258560u;
        goto label_258560;
    }
    ctx->pc = 0x258558u;
    SET_GPR_U32(ctx, 31, 0x258560u);
    ctx->pc = 0x25855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258558u;
    // 0x25855c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x258558u, 0x258560u)) {
        return;
    }
    ctx->pc = 0x258560u;
label_258560:
    // 0x258560: 0x8fc3010c  lw          $v1, 0x10C($fp)
    ctx->pc = 0x258560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_258564:
    // 0x258564: 0x60f809  jalr        $v1
label_258568:
    if (ctx->pc == 0x258568u) {
        ctx->pc = 0x258568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258564u;
        // 0x258568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25856Cu;
        goto label_25856c;
    }
    ctx->pc = 0x258564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25856Cu);
        ctx->pc = 0x258568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258564u;
        // 0x258568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258564u, 0x25856Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25856Cu;
label_25856c:
    // 0x25856c: 0xc096032  jal         func_2580C8
label_258570:
    if (ctx->pc == 0x258570u) {
        ctx->pc = 0x258570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25856Cu;
        // 0x258570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258574u;
        goto label_258574;
    }
    ctx->pc = 0x25856Cu;
    SET_GPR_U32(ctx, 31, 0x258574u);
    ctx->pc = 0x258570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25856Cu;
    // 0x258570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2580C8u, 0x25856Cu, 0x258574u)) {
        return;
    }
    ctx->pc = 0x258574u;
label_258574:
    // 0x258574: 0x1000002d  b           . + 4 + (0x2D << 2)
label_258578:
    if (ctx->pc == 0x258578u) {
        ctx->pc = 0x258578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258574u;
        // 0x258578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25857Cu;
        goto label_25857c;
    }
    ctx->pc = 0x258574u;
    {
        const bool branch_taken_0x258574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258574u;
        // 0x258578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258574) {
            ctx->pc = 0x25862Cu;
            goto label_25862c;
        }
    }
    ctx->pc = 0x25857Cu;
label_25857c:
    // 0x25857c: 0x0  nop
    ctx->pc = 0x25857cu;
    // NOP
label_258580:
    // 0x258580: 0xc096068  jal         func_2581A0
label_258584:
    if (ctx->pc == 0x258584u) {
        ctx->pc = 0x258584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258580u;
        // 0x258584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258588u;
        goto label_258588;
    }
    ctx->pc = 0x258580u;
    SET_GPR_U32(ctx, 31, 0x258588u);
    ctx->pc = 0x258584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258580u;
    // 0x258584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2581A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2581A0u, 0x258580u, 0x258588u)) {
        return;
    }
    ctx->pc = 0x258588u;
label_258588:
    // 0x258588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25858c:
    // 0x25858c: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x25858cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_258590:
    // 0x258590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_258594:
    // 0x258594: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x258594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_258598:
    // 0x258598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25859c:
    // 0x25859c: 0xc0960a0  jal         func_258280
label_2585a0:
    if (ctx->pc == 0x2585A0u) {
        ctx->pc = 0x2585A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25859Cu;
        // 0x2585a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2585A4u;
        goto label_2585a4;
    }
    ctx->pc = 0x25859Cu;
    SET_GPR_U32(ctx, 31, 0x2585A4u);
    ctx->pc = 0x2585A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25859Cu;
    // 0x2585a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258280u, 0x25859Cu, 0x2585A4u)) {
        return;
    }
    ctx->pc = 0x2585A4u;
label_2585a4:
    // 0x2585a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2585a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2585a8:
    // 0x2585a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2585a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2585ac:
    // 0x2585ac: 0xc095f48  jal         func_257D20
label_2585b0:
    if (ctx->pc == 0x2585B0u) {
        ctx->pc = 0x2585B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585ACu;
        // 0x2585b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2585B4u;
        goto label_2585b4;
    }
    ctx->pc = 0x2585ACu;
    SET_GPR_U32(ctx, 31, 0x2585B4u);
    ctx->pc = 0x2585B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2585ACu;
    // 0x2585b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257D20u, 0x2585ACu, 0x2585B4u)) {
        return;
    }
    ctx->pc = 0x2585B4u;
label_2585b4:
    // 0x2585b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2585b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2585b8:
    // 0x2585b8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2585b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2585bc:
    // 0x2585bc: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
label_2585c0:
    if (ctx->pc == 0x2585C0u) {
        ctx->pc = 0x2585C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585BCu;
        // 0x2585c0: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2585C4u;
        goto label_2585c4;
    }
    ctx->pc = 0x2585BCu;
    {
        const bool branch_taken_0x2585bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2585bc) {
            ctx->pc = 0x2585C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2585BCu;
            // 0x2585c0: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2584E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2584e8;
        }
    }
    ctx->pc = 0x2585C4u;
label_2585c4:
    // 0x2585c4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2585c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2585c8:
    // 0x2585c8: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x2585c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2585cc:
    // 0x2585cc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2585ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2585d0:
    // 0x2585d0: 0x40f809  jalr        $v0
label_2585d4:
    if (ctx->pc == 0x2585D4u) {
        ctx->pc = 0x2585D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585D0u;
        // 0x2585d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2585D8u;
        goto label_2585d8;
    }
    ctx->pc = 0x2585D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2585D8u);
        ctx->pc = 0x2585D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585D0u;
        // 0x2585d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2585D0u, 0x2585D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2585D8u;
label_2585d8:
    // 0x2585d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_2585dc:
    if (ctx->pc == 0x2585DCu) {
        ctx->pc = 0x2585DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585D8u;
        // 0x2585dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2585E0u;
        goto label_2585e0;
    }
    ctx->pc = 0x2585D8u;
    {
        const bool branch_taken_0x2585d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585D8u;
        // 0x2585dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585d8) {
            ctx->pc = 0x25862Cu;
            goto label_25862c;
        }
    }
    ctx->pc = 0x2585E0u;
label_2585e0:
    // 0x2585e0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2585e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2585e4:
    // 0x2585e4: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x2585e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2585e8:
    // 0x2585e8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2585e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2585ec:
    // 0x2585ec: 0x40f809  jalr        $v0
label_2585f0:
    if (ctx->pc == 0x2585F0u) {
        ctx->pc = 0x2585F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585ECu;
        // 0x2585f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2585F4u;
        goto label_2585f4;
    }
    ctx->pc = 0x2585ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2585F4u);
        ctx->pc = 0x2585F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585ECu;
        // 0x2585f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2585ECu, 0x2585F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2585F4u;
label_2585f4:
    // 0x2585f4: 0xc096032  jal         func_2580C8
label_2585f8:
    if (ctx->pc == 0x2585F8u) {
        ctx->pc = 0x2585F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585F4u;
        // 0x2585f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2585FCu;
        goto label_2585fc;
    }
    ctx->pc = 0x2585F4u;
    SET_GPR_U32(ctx, 31, 0x2585FCu);
    ctx->pc = 0x2585F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2585F4u;
    // 0x2585f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2580C8u, 0x2585F4u, 0x2585FCu)) {
        return;
    }
    ctx->pc = 0x2585FCu;
label_2585fc:
    // 0x2585fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_258600:
    if (ctx->pc == 0x258600u) {
        ctx->pc = 0x258600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585FCu;
        // 0x258600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258604u;
        goto label_258604;
    }
    ctx->pc = 0x2585FCu;
    {
        const bool branch_taken_0x2585fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585FCu;
        // 0x258600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585fc) {
            ctx->pc = 0x25862Cu;
            goto label_25862c;
        }
    }
    ctx->pc = 0x258604u;
label_258604:
    // 0x258604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_258608:
    // 0x258608: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x258608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25860c:
    // 0x25860c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_258610:
    // 0x258610: 0xc092848  jal         func_24A120
label_258614:
    if (ctx->pc == 0x258614u) {
        ctx->pc = 0x258614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258610u;
        // 0x258614: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258618u;
        goto label_258618;
    }
    ctx->pc = 0x258610u;
    SET_GPR_U32(ctx, 31, 0x258618u);
    ctx->pc = 0x258614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258610u;
    // 0x258614: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x258610u, 0x258618u)) {
        return;
    }
    ctx->pc = 0x258618u;
label_258618:
    // 0x258618: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25861c:
    // 0x25861c: 0xc09281a  jal         func_24A068
label_258620:
    if (ctx->pc == 0x258620u) {
        ctx->pc = 0x258620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25861Cu;
        // 0x258620: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258624u;
        goto label_258624;
    }
    ctx->pc = 0x25861Cu;
    SET_GPR_U32(ctx, 31, 0x258624u);
    ctx->pc = 0x258620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25861Cu;
    // 0x258620: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25861Cu, 0x258624u)) {
        return;
    }
    ctx->pc = 0x258624u;
label_258624:
    // 0x258624: 0x0  nop
    ctx->pc = 0x258624u;
    // NOP
label_258628:
    // 0x258628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25862c:
    // 0x25862c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x25862cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_258630:
    // 0x258630: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x258630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_258634:
    // 0x258634: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x258634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_258638:
    // 0x258638: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x258638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25863c:
    // 0x25863c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x25863cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_258640:
    // 0x258640: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x258640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_258644:
    // 0x258644: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x258644u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_258648:
    // 0x258648: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x258648u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25864c:
    // 0x25864c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x25864cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258650:
    // 0x258650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_258654:
    // 0x258654: 0x3e00008  jr          $ra
label_258658:
    if (ctx->pc == 0x258658u) {
        ctx->pc = 0x258658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258654u;
        // 0x258658: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25865Cu;
        goto label_25865c;
    }
    ctx->pc = 0x258654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258654u;
        // 0x258658: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25865Cu;
label_25865c:
    // 0x25865c: 0x0  nop
    ctx->pc = 0x25865cu;
    // NOP
    ctx->pc = 0x258660u;
}
