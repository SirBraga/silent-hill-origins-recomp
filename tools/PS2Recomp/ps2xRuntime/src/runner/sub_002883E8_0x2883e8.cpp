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

// Function: sub_002883E8
// Address: 0x2883e8 - 0x288648
void sub_002883E8_0x2883e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002883E8_0x2883e8");
#endif

    switch (ctx->pc) {
        case 0x2883e8u: goto label_2883e8;
        case 0x2883ecu: goto label_2883ec;
        case 0x2883f0u: goto label_2883f0;
        case 0x2883f4u: goto label_2883f4;
        case 0x2883f8u: goto label_2883f8;
        case 0x2883fcu: goto label_2883fc;
        case 0x288400u: goto label_288400;
        case 0x288404u: goto label_288404;
        case 0x288408u: goto label_288408;
        case 0x28840cu: goto label_28840c;
        case 0x288410u: goto label_288410;
        case 0x288414u: goto label_288414;
        case 0x288418u: goto label_288418;
        case 0x28841cu: goto label_28841c;
        case 0x288420u: goto label_288420;
        case 0x288424u: goto label_288424;
        case 0x288428u: goto label_288428;
        case 0x28842cu: goto label_28842c;
        case 0x288430u: goto label_288430;
        case 0x288434u: goto label_288434;
        case 0x288438u: goto label_288438;
        case 0x28843cu: goto label_28843c;
        case 0x288440u: goto label_288440;
        case 0x288444u: goto label_288444;
        case 0x288448u: goto label_288448;
        case 0x28844cu: goto label_28844c;
        case 0x288450u: goto label_288450;
        case 0x288454u: goto label_288454;
        case 0x288458u: goto label_288458;
        case 0x28845cu: goto label_28845c;
        case 0x288460u: goto label_288460;
        case 0x288464u: goto label_288464;
        case 0x288468u: goto label_288468;
        case 0x28846cu: goto label_28846c;
        case 0x288470u: goto label_288470;
        case 0x288474u: goto label_288474;
        case 0x288478u: goto label_288478;
        case 0x28847cu: goto label_28847c;
        case 0x288480u: goto label_288480;
        case 0x288484u: goto label_288484;
        case 0x288488u: goto label_288488;
        case 0x28848cu: goto label_28848c;
        case 0x288490u: goto label_288490;
        case 0x288494u: goto label_288494;
        case 0x288498u: goto label_288498;
        case 0x28849cu: goto label_28849c;
        case 0x2884a0u: goto label_2884a0;
        case 0x2884a4u: goto label_2884a4;
        case 0x2884a8u: goto label_2884a8;
        case 0x2884acu: goto label_2884ac;
        case 0x2884b0u: goto label_2884b0;
        case 0x2884b4u: goto label_2884b4;
        case 0x2884b8u: goto label_2884b8;
        case 0x2884bcu: goto label_2884bc;
        case 0x2884c0u: goto label_2884c0;
        case 0x2884c4u: goto label_2884c4;
        case 0x2884c8u: goto label_2884c8;
        case 0x2884ccu: goto label_2884cc;
        case 0x2884d0u: goto label_2884d0;
        case 0x2884d4u: goto label_2884d4;
        case 0x2884d8u: goto label_2884d8;
        case 0x2884dcu: goto label_2884dc;
        case 0x2884e0u: goto label_2884e0;
        case 0x2884e4u: goto label_2884e4;
        case 0x2884e8u: goto label_2884e8;
        case 0x2884ecu: goto label_2884ec;
        case 0x2884f0u: goto label_2884f0;
        case 0x2884f4u: goto label_2884f4;
        case 0x2884f8u: goto label_2884f8;
        case 0x2884fcu: goto label_2884fc;
        case 0x288500u: goto label_288500;
        case 0x288504u: goto label_288504;
        case 0x288508u: goto label_288508;
        case 0x28850cu: goto label_28850c;
        case 0x288510u: goto label_288510;
        case 0x288514u: goto label_288514;
        case 0x288518u: goto label_288518;
        case 0x28851cu: goto label_28851c;
        case 0x288520u: goto label_288520;
        case 0x288524u: goto label_288524;
        case 0x288528u: goto label_288528;
        case 0x28852cu: goto label_28852c;
        case 0x288530u: goto label_288530;
        case 0x288534u: goto label_288534;
        case 0x288538u: goto label_288538;
        case 0x28853cu: goto label_28853c;
        case 0x288540u: goto label_288540;
        case 0x288544u: goto label_288544;
        case 0x288548u: goto label_288548;
        case 0x28854cu: goto label_28854c;
        case 0x288550u: goto label_288550;
        case 0x288554u: goto label_288554;
        case 0x288558u: goto label_288558;
        case 0x28855cu: goto label_28855c;
        case 0x288560u: goto label_288560;
        case 0x288564u: goto label_288564;
        case 0x288568u: goto label_288568;
        case 0x28856cu: goto label_28856c;
        case 0x288570u: goto label_288570;
        case 0x288574u: goto label_288574;
        case 0x288578u: goto label_288578;
        case 0x28857cu: goto label_28857c;
        case 0x288580u: goto label_288580;
        case 0x288584u: goto label_288584;
        case 0x288588u: goto label_288588;
        case 0x28858cu: goto label_28858c;
        case 0x288590u: goto label_288590;
        case 0x288594u: goto label_288594;
        case 0x288598u: goto label_288598;
        case 0x28859cu: goto label_28859c;
        case 0x2885a0u: goto label_2885a0;
        case 0x2885a4u: goto label_2885a4;
        case 0x2885a8u: goto label_2885a8;
        case 0x2885acu: goto label_2885ac;
        case 0x2885b0u: goto label_2885b0;
        case 0x2885b4u: goto label_2885b4;
        case 0x2885b8u: goto label_2885b8;
        case 0x2885bcu: goto label_2885bc;
        case 0x2885c0u: goto label_2885c0;
        case 0x2885c4u: goto label_2885c4;
        case 0x2885c8u: goto label_2885c8;
        case 0x2885ccu: goto label_2885cc;
        case 0x2885d0u: goto label_2885d0;
        case 0x2885d4u: goto label_2885d4;
        case 0x2885d8u: goto label_2885d8;
        case 0x2885dcu: goto label_2885dc;
        case 0x2885e0u: goto label_2885e0;
        case 0x2885e4u: goto label_2885e4;
        case 0x2885e8u: goto label_2885e8;
        case 0x2885ecu: goto label_2885ec;
        case 0x2885f0u: goto label_2885f0;
        case 0x2885f4u: goto label_2885f4;
        case 0x2885f8u: goto label_2885f8;
        case 0x2885fcu: goto label_2885fc;
        case 0x288600u: goto label_288600;
        case 0x288604u: goto label_288604;
        case 0x288608u: goto label_288608;
        case 0x28860cu: goto label_28860c;
        case 0x288610u: goto label_288610;
        case 0x288614u: goto label_288614;
        case 0x288618u: goto label_288618;
        case 0x28861cu: goto label_28861c;
        case 0x288620u: goto label_288620;
        case 0x288624u: goto label_288624;
        case 0x288628u: goto label_288628;
        case 0x28862cu: goto label_28862c;
        case 0x288630u: goto label_288630;
        case 0x288634u: goto label_288634;
        case 0x288638u: goto label_288638;
        case 0x28863cu: goto label_28863c;
        case 0x288640u: goto label_288640;
        case 0x288644u: goto label_288644;
        default: break;
    }

    ctx->pc = 0x2883e8u;

label_2883e8:
    // 0x2883e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2883e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2883ec:
    // 0x2883ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2883ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2883f0:
    // 0x2883f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2883f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2883f4:
    // 0x2883f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2883f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2883f8:
    // 0x2883f8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2883f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2883fc:
    // 0x2883fc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2883fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_288400:
    // 0x288400: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x288400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_288404:
    // 0x288404: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x288404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_288408:
    // 0x288408: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x288408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28840c:
    // 0x28840c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x28840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_288410:
    // 0x288410: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x288410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_288414:
    // 0x288414: 0x12600074  beqz        $s3, . + 4 + (0x74 << 2)
label_288418:
    if (ctx->pc == 0x288418u) {
        ctx->pc = 0x288418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288414u;
        // 0x288418: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28841Cu;
        goto label_28841c;
    }
    ctx->pc = 0x288414u;
    {
        const bool branch_taken_0x288414 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x288418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288414u;
        // 0x288418: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288414) {
            ctx->pc = 0x2885E8u;
            goto label_2885e8;
        }
    }
    ctx->pc = 0x28841Cu;
label_28841c:
    // 0x28841c: 0x12a00072  beqz        $s5, . + 4 + (0x72 << 2)
label_288420:
    if (ctx->pc == 0x288420u) {
        ctx->pc = 0x288420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28841Cu;
        // 0x288420: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288424u;
        goto label_288424;
    }
    ctx->pc = 0x28841Cu;
    {
        const bool branch_taken_0x28841c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x288420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28841Cu;
        // 0x288420: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28841c) {
            ctx->pc = 0x2885E8u;
            goto label_2885e8;
        }
    }
    ctx->pc = 0x288424u;
label_288424:
    // 0x288424: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x288424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288428:
    // 0x288428: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x288428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28842c:
    // 0x28842c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x28842cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_288430:
    // 0x288430: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x288430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_288434:
    // 0x288434: 0x0  nop
    ctx->pc = 0x288434u;
    // NOP
label_288438:
    // 0x288438: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x288438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28843c:
    // 0x28843c: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_288440:
    if (ctx->pc == 0x288440u) {
        ctx->pc = 0x288440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28843Cu;
        // 0x288440: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288444u;
        goto label_288444;
    }
    ctx->pc = 0x28843Cu;
    {
        const bool branch_taken_0x28843c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x288440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28843Cu;
        // 0x288440: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28843c) {
            ctx->pc = 0x28844Cu;
            goto label_28844c;
        }
    }
    ctx->pc = 0x288444u;
label_288444:
    // 0x288444: 0xc09294c  jal         func_24A530
label_288448:
    if (ctx->pc == 0x288448u) {
        ctx->pc = 0x288448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288444u;
        // 0x288448: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28844Cu;
        goto label_28844c;
    }
    ctx->pc = 0x288444u;
    SET_GPR_U32(ctx, 31, 0x28844Cu);
    ctx->pc = 0x288448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288444u;
    // 0x288448: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x288444u, 0x28844Cu)) {
        return;
    }
    ctx->pc = 0x28844Cu;
label_28844c:
    // 0x28844c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x28844cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_288450:
    // 0x288450: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x288450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_288454:
    // 0x288454: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x288454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_288458:
    // 0x288458: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_28845c:
    if (ctx->pc == 0x28845Cu) {
        ctx->pc = 0x28845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288458u;
        // 0x28845c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288460u;
        goto label_288460;
    }
    ctx->pc = 0x288458u;
    {
        const bool branch_taken_0x288458 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288458u;
        // 0x28845c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288458) {
            ctx->pc = 0x288438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288438;
        }
    }
    ctx->pc = 0x288460u;
label_288460:
    // 0x288460: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x288460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_288464:
    // 0x288464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x288464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_288468:
    // 0x288468: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x288468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28846c:
    // 0x28846c: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x28846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
label_288470:
    // 0x288470: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x288470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_288474:
    // 0x288474: 0xc0926f4  jal         func_249BD0
label_288478:
    if (ctx->pc == 0x288478u) {
        ctx->pc = 0x288478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288474u;
        // 0x288478: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28847Cu;
        goto label_28847c;
    }
    ctx->pc = 0x288474u;
    SET_GPR_U32(ctx, 31, 0x28847Cu);
    ctx->pc = 0x288478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288474u;
    // 0x288478: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x288474u, 0x28847Cu)) {
        return;
    }
    ctx->pc = 0x28847Cu;
label_28847c:
    // 0x28847c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_288480:
    if (ctx->pc == 0x288480u) {
        ctx->pc = 0x288480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28847Cu;
        // 0x288480: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288484u;
        goto label_288484;
    }
    ctx->pc = 0x28847Cu;
    {
        const bool branch_taken_0x28847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28847Cu;
        // 0x288480: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28847c) {
            ctx->pc = 0x2885E8u;
            goto label_2885e8;
        }
    }
    ctx->pc = 0x288484u;
label_288484:
    // 0x288484: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x288484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_288488:
    // 0x288488: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28848c:
    // 0x28848c: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
label_288490:
    if (ctx->pc == 0x288490u) {
        ctx->pc = 0x288490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28848Cu;
        // 0x288490: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288494u;
        goto label_288494;
    }
    ctx->pc = 0x28848Cu;
    {
        const bool branch_taken_0x28848c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x288490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28848Cu;
        // 0x288490: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28848c) {
            ctx->pc = 0x28849Cu;
            goto label_28849c;
        }
    }
    ctx->pc = 0x288494u;
label_288494:
    // 0x288494: 0x10000004  b           . + 4 + (0x4 << 2)
label_288498:
    if (ctx->pc == 0x288498u) {
        ctx->pc = 0x288498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288494u;
        // 0x288498: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28849Cu;
        goto label_28849c;
    }
    ctx->pc = 0x288494u;
    {
        const bool branch_taken_0x288494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288494u;
        // 0x288498: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288494) {
            ctx->pc = 0x2884A8u;
            goto label_2884a8;
        }
    }
    ctx->pc = 0x28849Cu;
label_28849c:
    // 0x28849c: 0xc09294c  jal         func_24A530
label_2884a0:
    if (ctx->pc == 0x2884A0u) {
        ctx->pc = 0x2884A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28849Cu;
        // 0x2884a0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2884A4u;
        goto label_2884a4;
    }
    ctx->pc = 0x28849Cu;
    SET_GPR_U32(ctx, 31, 0x2884A4u);
    ctx->pc = 0x2884A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28849Cu;
    // 0x2884a0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28849Cu, 0x2884A4u)) {
        return;
    }
    ctx->pc = 0x2884A4u;
label_2884a4:
    // 0x2884a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2884a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2884a8:
    // 0x2884a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2884a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2884ac:
    // 0x2884ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2884acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2884b0:
    // 0x2884b0: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x2884b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_2884b4:
    // 0x2884b4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_2884b8:
    if (ctx->pc == 0x2884B8u) {
        ctx->pc = 0x2884B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884B4u;
        // 0x2884b8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2884BCu;
        goto label_2884bc;
    }
    ctx->pc = 0x2884B4u;
    {
        const bool branch_taken_0x2884b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2884B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884B4u;
        // 0x2884b8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884b4) {
            ctx->pc = 0x2884C0u;
            goto label_2884c0;
        }
    }
    ctx->pc = 0x2884BCu;
label_2884bc:
    // 0x2884bc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2884bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2884c0:
    // 0x2884c0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2884c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2884c4:
    // 0x2884c4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2884c8:
    if (ctx->pc == 0x2884C8u) {
        ctx->pc = 0x2884C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884C4u;
        // 0x2884c8: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2884CCu;
        goto label_2884cc;
    }
    ctx->pc = 0x2884C4u;
    {
        const bool branch_taken_0x2884c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2884c4) {
            ctx->pc = 0x2884C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2884C4u;
            // 0x2884c8: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2884DCu;
            goto label_2884dc;
        }
    }
    ctx->pc = 0x2884CCu;
label_2884cc:
    // 0x2884cc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2884ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2884d0:
    // 0x2884d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2884d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2884d4:
    // 0x2884d4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2884d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2884d8:
    // 0x2884d8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2884d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2884dc:
    // 0x2884dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2884e0:
    if (ctx->pc == 0x2884E0u) {
        ctx->pc = 0x2884E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884DCu;
        // 0x2884e0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2884E4u;
        goto label_2884e4;
    }
    ctx->pc = 0x2884DCu;
    {
        const bool branch_taken_0x2884dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884DCu;
        // 0x2884e0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884dc) {
            ctx->pc = 0x2884ECu;
            goto label_2884ec;
        }
    }
    ctx->pc = 0x2884E4u;
label_2884e4:
    // 0x2884e4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2884e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_2884e8:
    // 0x2884e8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2884e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2884ec:
    // 0x2884ec: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2884ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2884f0:
    // 0x2884f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2884f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2884f4:
    // 0x2884f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2884f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2884f8:
    // 0x2884f8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2884f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2884fc:
    // 0x2884fc: 0xc0935aa  jal         func_24D6A8
label_288500:
    if (ctx->pc == 0x288500u) {
        ctx->pc = 0x288500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884FCu;
        // 0x288500: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x288504u;
        goto label_288504;
    }
    ctx->pc = 0x2884FCu;
    SET_GPR_U32(ctx, 31, 0x288504u);
    ctx->pc = 0x288500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884FCu;
    // 0x288500: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2884FCu, 0x288504u)) {
        return;
    }
    ctx->pc = 0x288504u;
label_288504:
    // 0x288504: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_288508:
    if (ctx->pc == 0x288508u) {
        ctx->pc = 0x288508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288504u;
        // 0x288508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28850Cu;
        goto label_28850c;
    }
    ctx->pc = 0x288504u;
    {
        const bool branch_taken_0x288504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288504u;
        // 0x288508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288504) {
            ctx->pc = 0x28861Cu;
            goto label_28861c;
        }
    }
    ctx->pc = 0x28850Cu;
label_28850c:
    // 0x28850c: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_288510:
    if (ctx->pc == 0x288510u) {
        ctx->pc = 0x288510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28850Cu;
        // 0x288510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288514u;
        goto label_288514;
    }
    ctx->pc = 0x28850Cu;
    {
        const bool branch_taken_0x28850c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x288510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28850Cu;
        // 0x288510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28850c) {
            ctx->pc = 0x2885FCu;
            goto label_2885fc;
        }
    }
    ctx->pc = 0x288514u;
label_288514:
    // 0x288514: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x288514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_288518:
    // 0x288518: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_28851c:
    if (ctx->pc == 0x28851Cu) {
        ctx->pc = 0x28851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288518u;
        // 0x28851c: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288520u;
        goto label_288520;
    }
    ctx->pc = 0x288518u;
    {
        const bool branch_taken_0x288518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x288518) {
            ctx->pc = 0x28851Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288518u;
            // 0x28851c: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28852Cu;
            goto label_28852c;
        }
    }
    ctx->pc = 0x288520u;
label_288520:
    // 0x288520: 0xc09292a  jal         func_24A4A8
label_288524:
    if (ctx->pc == 0x288524u) {
        ctx->pc = 0x288524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288520u;
        // 0x288524: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288528u;
        goto label_288528;
    }
    ctx->pc = 0x288520u;
    SET_GPR_U32(ctx, 31, 0x288528u);
    ctx->pc = 0x288524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288520u;
    // 0x288524: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x288520u, 0x288528u)) {
        return;
    }
    ctx->pc = 0x288528u;
label_288528:
    // 0x288528: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28852c:
    // 0x28852c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x28852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_288530:
    // 0x288530: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x288530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_288534:
    // 0x288534: 0x2029018  mult        $s2, $s0, $v0
    ctx->pc = 0x288534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_288538:
    // 0x288538: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x288538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28853c:
    // 0x28853c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x28853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_288540:
    // 0x288540: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x288540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_288544:
    // 0x288544: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x288544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_288548:
    // 0x288548: 0x34a501a1  ori         $a1, $a1, 0x1A1
    ctx->pc = 0x288548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
label_28854c:
    // 0x28854c: 0x40f809  jalr        $v0
label_288550:
    if (ctx->pc == 0x288550u) {
        ctx->pc = 0x288550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28854Cu;
        // 0x288550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288554u;
        goto label_288554;
    }
    ctx->pc = 0x28854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x288554u);
        ctx->pc = 0x288550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28854Cu;
        // 0x288550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28854Cu, 0x288554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288554u;
label_288554:
    // 0x288554: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288558:
    // 0x288558: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_28855c:
    if (ctx->pc == 0x28855Cu) {
        ctx->pc = 0x28855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288558u;
        // 0x28855c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288560u;
        goto label_288560;
    }
    ctx->pc = 0x288558u;
    {
        const bool branch_taken_0x288558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288558u;
        // 0x28855c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288558) {
            ctx->pc = 0x2885E8u;
            goto label_2885e8;
        }
    }
    ctx->pc = 0x288560u;
label_288560:
    // 0x288560: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x288560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288564:
    // 0x288564: 0xc075fdc  jal         func_1D7F70
label_288568:
    if (ctx->pc == 0x288568u) {
        ctx->pc = 0x288568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288564u;
        // 0x288568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28856Cu;
        goto label_28856c;
    }
    ctx->pc = 0x288564u;
    SET_GPR_U32(ctx, 31, 0x28856Cu);
    ctx->pc = 0x288568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288564u;
    // 0x288568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x288564u, 0x28856Cu)) {
        return;
    }
    ctx->pc = 0x28856Cu;
label_28856c:
    // 0x28856c: 0x1a000016  blez        $s0, . + 4 + (0x16 << 2)
label_288570:
    if (ctx->pc == 0x288570u) {
        ctx->pc = 0x288570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28856Cu;
        // 0x288570: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288574u;
        goto label_288574;
    }
    ctx->pc = 0x28856Cu;
    {
        const bool branch_taken_0x28856c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x288570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28856Cu;
        // 0x288570: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28856c) {
            ctx->pc = 0x2885C8u;
            goto label_2885c8;
        }
    }
    ctx->pc = 0x288574u;
label_288574:
    // 0x288574: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x288574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_288578:
    // 0x288578: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_28857c:
    if (ctx->pc == 0x28857Cu) {
        ctx->pc = 0x28857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288578u;
        // 0x28857c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288580u;
        goto label_288580;
    }
    ctx->pc = 0x288578u;
    {
        const bool branch_taken_0x288578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288578u;
        // 0x28857c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288578) {
            ctx->pc = 0x2885A8u;
            goto label_2885a8;
        }
    }
    ctx->pc = 0x288580u;
label_288580:
    // 0x288580: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x288580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_288584:
    // 0x288584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_288588:
    if (ctx->pc == 0x288588u) {
        ctx->pc = 0x288588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288584u;
        // 0x288588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28858Cu;
        goto label_28858c;
    }
    ctx->pc = 0x288584u;
    {
        const bool branch_taken_0x288584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288584u;
        // 0x288588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288584) {
            ctx->pc = 0x28859Cu;
            goto label_28859c;
        }
    }
    ctx->pc = 0x28858Cu;
label_28858c:
    // 0x28858c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_288590:
    // 0x288590: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x288590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_288594:
    // 0x288594: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x288594u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16));
label_288598:
    // 0x288598: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x288598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_28859c:
    // 0x28859c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2885a0:
    // 0x2885a0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2885a4:
    if (ctx->pc == 0x2885A4u) {
        ctx->pc = 0x2885A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885A0u;
        // 0x2885a4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2885A8u;
        goto label_2885a8;
    }
    ctx->pc = 0x2885A0u;
    {
        const bool branch_taken_0x2885a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885A0u;
        // 0x2885a4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885a0) {
            ctx->pc = 0x2885CCu;
            goto label_2885cc;
        }
    }
    ctx->pc = 0x2885A8u;
label_2885a8:
    // 0x2885a8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2885a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2885ac:
    // 0x2885ac: 0x0  nop
    ctx->pc = 0x2885acu;
    // NOP
label_2885b0:
    // 0x2885b0: 0x0  nop
    ctx->pc = 0x2885b0u;
    // NOP
label_2885b4:
    // 0x2885b4: 0x0  nop
    ctx->pc = 0x2885b4u;
    // NOP
label_2885b8:
    // 0x2885b8: 0x0  nop
    ctx->pc = 0x2885b8u;
    // NOP
label_2885bc:
    // 0x2885bc: 0x0  nop
    ctx->pc = 0x2885bcu;
    // NOP
label_2885c0:
    // 0x2885c0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2885c4:
    if (ctx->pc == 0x2885C4u) {
        ctx->pc = 0x2885C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885C0u;
        // 0x2885c4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2885C8u;
        goto label_2885c8;
    }
    ctx->pc = 0x2885C0u;
    {
        const bool branch_taken_0x2885c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2885C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885C0u;
        // 0x2885c4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885c0) {
            ctx->pc = 0x2885ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2885ac;
        }
    }
    ctx->pc = 0x2885C8u;
label_2885c8:
    // 0x2885c8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2885c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2885cc:
    // 0x2885cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2885ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2885d0:
    // 0x2885d0: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x2885d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2885d4:
    // 0x2885d4: 0x3012  mflo        $a2
    ctx->pc = 0x2885d4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_2885d8:
    // 0x2885d8: 0xc0935aa  jal         func_24D6A8
label_2885dc:
    if (ctx->pc == 0x2885DCu) {
        ctx->pc = 0x2885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885D8u;
        // 0x2885dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2885E0u;
        goto label_2885e0;
    }
    ctx->pc = 0x2885D8u;
    SET_GPR_U32(ctx, 31, 0x2885E0u);
    ctx->pc = 0x2885DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2885D8u;
    // 0x2885dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2885D8u, 0x2885E0u)) {
        return;
    }
    ctx->pc = 0x2885E0u;
label_2885e0:
    // 0x2885e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2885e4:
    if (ctx->pc == 0x2885E4u) {
        ctx->pc = 0x2885E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885E0u;
        // 0x2885e4: 0x26c30fc8  addiu       $v1, $s6, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2885E8u;
        goto label_2885e8;
    }
    ctx->pc = 0x2885E0u;
    {
        const bool branch_taken_0x2885e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2885E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885E0u;
        // 0x2885e4: 0x26c30fc8  addiu       $v1, $s6, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885e0) {
            ctx->pc = 0x2885F0u;
            goto label_2885f0;
        }
    }
    ctx->pc = 0x2885E8u;
label_2885e8:
    // 0x2885e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2885ec:
    if (ctx->pc == 0x2885ECu) {
        ctx->pc = 0x2885ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885E8u;
        // 0x2885ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2885F0u;
        goto label_2885f0;
    }
    ctx->pc = 0x2885E8u;
    {
        const bool branch_taken_0x2885e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885E8u;
        // 0x2885ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885e8) {
            ctx->pc = 0x28861Cu;
            goto label_28861c;
        }
    }
    ctx->pc = 0x2885F0u;
label_2885f0:
    // 0x2885f0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2885f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2885f4:
    // 0x2885f4: 0x40f809  jalr        $v0
label_2885f8:
    if (ctx->pc == 0x2885F8u) {
        ctx->pc = 0x2885F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885F4u;
        // 0x2885f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2885FCu;
        goto label_2885fc;
    }
    ctx->pc = 0x2885F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2885FCu);
        ctx->pc = 0x2885F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885F4u;
        // 0x2885f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2885F4u, 0x2885FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2885FCu;
label_2885fc:
    // 0x2885fc: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2885fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_288600:
    // 0x288600: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_288604:
    if (ctx->pc == 0x288604u) {
        ctx->pc = 0x288604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288600u;
        // 0x288604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288608u;
        goto label_288608;
    }
    ctx->pc = 0x288600u;
    {
        const bool branch_taken_0x288600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x288604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288600u;
        // 0x288604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288600) {
            ctx->pc = 0x288618u;
            goto label_288618;
        }
    }
    ctx->pc = 0x288608u;
label_288608:
    // 0x288608: 0xc0a20fa  jal         func_2883E8
label_28860c:
    if (ctx->pc == 0x28860Cu) {
        ctx->pc = 0x28860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288608u;
        // 0x28860c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288610u;
        goto label_288610;
    }
    ctx->pc = 0x288608u;
    SET_GPR_U32(ctx, 31, 0x288610u);
    ctx->pc = 0x28860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288608u;
    // 0x28860c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883E8u;
    goto label_2883e8;
    ctx->pc = 0x288610u;
label_288610:
    // 0x288610: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x288610u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288614:
    // 0x288614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x288614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288618:
    // 0x288618: 0x277100b  movn        $v0, $s3, $s7
    ctx->pc = 0x288618u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19));
label_28861c:
    // 0x28861c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28861cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_288620:
    // 0x288620: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x288620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_288624:
    // 0x288624: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x288624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_288628:
    // 0x288628: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x288628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28862c:
    // 0x28862c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28862cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_288630:
    // 0x288630: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x288630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_288634:
    // 0x288634: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x288634u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_288638:
    // 0x288638: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x288638u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28863c:
    // 0x28863c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28863cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_288640:
    // 0x288640: 0x3e00008  jr          $ra
label_288644:
    if (ctx->pc == 0x288644u) {
        ctx->pc = 0x288644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288640u;
        // 0x288644: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288648u;
        goto label_fallthrough_0x288640;
    }
    ctx->pc = 0x288640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288640u;
        // 0x288644: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x288640:
    ctx->pc = 0x288648u;
}
