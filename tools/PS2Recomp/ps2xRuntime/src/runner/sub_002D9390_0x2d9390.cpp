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

// Function: sub_002D9390
// Address: 0x2d9390 - 0x2d9610
void sub_002D9390_0x2d9390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9390_0x2d9390");
#endif

    switch (ctx->pc) {
        case 0x2d9390u: goto label_2d9390;
        case 0x2d9394u: goto label_2d9394;
        case 0x2d9398u: goto label_2d9398;
        case 0x2d939cu: goto label_2d939c;
        case 0x2d93a0u: goto label_2d93a0;
        case 0x2d93a4u: goto label_2d93a4;
        case 0x2d93a8u: goto label_2d93a8;
        case 0x2d93acu: goto label_2d93ac;
        case 0x2d93b0u: goto label_2d93b0;
        case 0x2d93b4u: goto label_2d93b4;
        case 0x2d93b8u: goto label_2d93b8;
        case 0x2d93bcu: goto label_2d93bc;
        case 0x2d93c0u: goto label_2d93c0;
        case 0x2d93c4u: goto label_2d93c4;
        case 0x2d93c8u: goto label_2d93c8;
        case 0x2d93ccu: goto label_2d93cc;
        case 0x2d93d0u: goto label_2d93d0;
        case 0x2d93d4u: goto label_2d93d4;
        case 0x2d93d8u: goto label_2d93d8;
        case 0x2d93dcu: goto label_2d93dc;
        case 0x2d93e0u: goto label_2d93e0;
        case 0x2d93e4u: goto label_2d93e4;
        case 0x2d93e8u: goto label_2d93e8;
        case 0x2d93ecu: goto label_2d93ec;
        case 0x2d93f0u: goto label_2d93f0;
        case 0x2d93f4u: goto label_2d93f4;
        case 0x2d93f8u: goto label_2d93f8;
        case 0x2d93fcu: goto label_2d93fc;
        case 0x2d9400u: goto label_2d9400;
        case 0x2d9404u: goto label_2d9404;
        case 0x2d9408u: goto label_2d9408;
        case 0x2d940cu: goto label_2d940c;
        case 0x2d9410u: goto label_2d9410;
        case 0x2d9414u: goto label_2d9414;
        case 0x2d9418u: goto label_2d9418;
        case 0x2d941cu: goto label_2d941c;
        case 0x2d9420u: goto label_2d9420;
        case 0x2d9424u: goto label_2d9424;
        case 0x2d9428u: goto label_2d9428;
        case 0x2d942cu: goto label_2d942c;
        case 0x2d9430u: goto label_2d9430;
        case 0x2d9434u: goto label_2d9434;
        case 0x2d9438u: goto label_2d9438;
        case 0x2d943cu: goto label_2d943c;
        case 0x2d9440u: goto label_2d9440;
        case 0x2d9444u: goto label_2d9444;
        case 0x2d9448u: goto label_2d9448;
        case 0x2d944cu: goto label_2d944c;
        case 0x2d9450u: goto label_2d9450;
        case 0x2d9454u: goto label_2d9454;
        case 0x2d9458u: goto label_2d9458;
        case 0x2d945cu: goto label_2d945c;
        case 0x2d9460u: goto label_2d9460;
        case 0x2d9464u: goto label_2d9464;
        case 0x2d9468u: goto label_2d9468;
        case 0x2d946cu: goto label_2d946c;
        case 0x2d9470u: goto label_2d9470;
        case 0x2d9474u: goto label_2d9474;
        case 0x2d9478u: goto label_2d9478;
        case 0x2d947cu: goto label_2d947c;
        case 0x2d9480u: goto label_2d9480;
        case 0x2d9484u: goto label_2d9484;
        case 0x2d9488u: goto label_2d9488;
        case 0x2d948cu: goto label_2d948c;
        case 0x2d9490u: goto label_2d9490;
        case 0x2d9494u: goto label_2d9494;
        case 0x2d9498u: goto label_2d9498;
        case 0x2d949cu: goto label_2d949c;
        case 0x2d94a0u: goto label_2d94a0;
        case 0x2d94a4u: goto label_2d94a4;
        case 0x2d94a8u: goto label_2d94a8;
        case 0x2d94acu: goto label_2d94ac;
        case 0x2d94b0u: goto label_2d94b0;
        case 0x2d94b4u: goto label_2d94b4;
        case 0x2d94b8u: goto label_2d94b8;
        case 0x2d94bcu: goto label_2d94bc;
        case 0x2d94c0u: goto label_2d94c0;
        case 0x2d94c4u: goto label_2d94c4;
        case 0x2d94c8u: goto label_2d94c8;
        case 0x2d94ccu: goto label_2d94cc;
        case 0x2d94d0u: goto label_2d94d0;
        case 0x2d94d4u: goto label_2d94d4;
        case 0x2d94d8u: goto label_2d94d8;
        case 0x2d94dcu: goto label_2d94dc;
        case 0x2d94e0u: goto label_2d94e0;
        case 0x2d94e4u: goto label_2d94e4;
        case 0x2d94e8u: goto label_2d94e8;
        case 0x2d94ecu: goto label_2d94ec;
        case 0x2d94f0u: goto label_2d94f0;
        case 0x2d94f4u: goto label_2d94f4;
        case 0x2d94f8u: goto label_2d94f8;
        case 0x2d94fcu: goto label_2d94fc;
        case 0x2d9500u: goto label_2d9500;
        case 0x2d9504u: goto label_2d9504;
        case 0x2d9508u: goto label_2d9508;
        case 0x2d950cu: goto label_2d950c;
        case 0x2d9510u: goto label_2d9510;
        case 0x2d9514u: goto label_2d9514;
        case 0x2d9518u: goto label_2d9518;
        case 0x2d951cu: goto label_2d951c;
        case 0x2d9520u: goto label_2d9520;
        case 0x2d9524u: goto label_2d9524;
        case 0x2d9528u: goto label_2d9528;
        case 0x2d952cu: goto label_2d952c;
        case 0x2d9530u: goto label_2d9530;
        case 0x2d9534u: goto label_2d9534;
        case 0x2d9538u: goto label_2d9538;
        case 0x2d953cu: goto label_2d953c;
        case 0x2d9540u: goto label_2d9540;
        case 0x2d9544u: goto label_2d9544;
        case 0x2d9548u: goto label_2d9548;
        case 0x2d954cu: goto label_2d954c;
        case 0x2d9550u: goto label_2d9550;
        case 0x2d9554u: goto label_2d9554;
        case 0x2d9558u: goto label_2d9558;
        case 0x2d955cu: goto label_2d955c;
        case 0x2d9560u: goto label_2d9560;
        case 0x2d9564u: goto label_2d9564;
        case 0x2d9568u: goto label_2d9568;
        case 0x2d956cu: goto label_2d956c;
        case 0x2d9570u: goto label_2d9570;
        case 0x2d9574u: goto label_2d9574;
        case 0x2d9578u: goto label_2d9578;
        case 0x2d957cu: goto label_2d957c;
        case 0x2d9580u: goto label_2d9580;
        case 0x2d9584u: goto label_2d9584;
        case 0x2d9588u: goto label_2d9588;
        case 0x2d958cu: goto label_2d958c;
        case 0x2d9590u: goto label_2d9590;
        case 0x2d9594u: goto label_2d9594;
        case 0x2d9598u: goto label_2d9598;
        case 0x2d959cu: goto label_2d959c;
        case 0x2d95a0u: goto label_2d95a0;
        case 0x2d95a4u: goto label_2d95a4;
        case 0x2d95a8u: goto label_2d95a8;
        case 0x2d95acu: goto label_2d95ac;
        case 0x2d95b0u: goto label_2d95b0;
        case 0x2d95b4u: goto label_2d95b4;
        case 0x2d95b8u: goto label_2d95b8;
        case 0x2d95bcu: goto label_2d95bc;
        case 0x2d95c0u: goto label_2d95c0;
        case 0x2d95c4u: goto label_2d95c4;
        case 0x2d95c8u: goto label_2d95c8;
        case 0x2d95ccu: goto label_2d95cc;
        case 0x2d95d0u: goto label_2d95d0;
        case 0x2d95d4u: goto label_2d95d4;
        case 0x2d95d8u: goto label_2d95d8;
        case 0x2d95dcu: goto label_2d95dc;
        case 0x2d95e0u: goto label_2d95e0;
        case 0x2d95e4u: goto label_2d95e4;
        case 0x2d95e8u: goto label_2d95e8;
        case 0x2d95ecu: goto label_2d95ec;
        case 0x2d95f0u: goto label_2d95f0;
        case 0x2d95f4u: goto label_2d95f4;
        case 0x2d95f8u: goto label_2d95f8;
        case 0x2d95fcu: goto label_2d95fc;
        case 0x2d9600u: goto label_2d9600;
        case 0x2d9604u: goto label_2d9604;
        case 0x2d9608u: goto label_2d9608;
        case 0x2d960cu: goto label_2d960c;
        default: break;
    }

    ctx->pc = 0x2d9390u;

label_2d9390:
    // 0x2d9390: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d9390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2d9394:
    // 0x2d9394: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2d9394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2d9398:
    // 0x2d9398: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2d9398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2d939c:
    // 0x2d939c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d939cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d93a0:
    // 0x2d93a0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d93a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d93a4:
    // 0x2d93a4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d93a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2d93a8:
    // 0x2d93a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2d93ac:
    // 0x2d93ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d93acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d93b0:
    // 0x2d93b0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d93b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2d93b4:
    // 0x2d93b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d93b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2d93b8:
    // 0x2d93b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2d93b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2d93bc:
    // 0x2d93bc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2d93bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2d93c0:
    // 0x2d93c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d93c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d93c4:
    // 0x2d93c4: 0xc0c344c  jal         func_30D130
label_2d93c8:
    if (ctx->pc == 0x2D93C8u) {
        ctx->pc = 0x2D93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93C4u;
        // 0x2d93c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93CCu;
        goto label_2d93cc;
    }
    ctx->pc = 0x2D93C4u;
    SET_GPR_U32(ctx, 31, 0x2D93CCu);
    ctx->pc = 0x2D93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93C4u;
    // 0x2d93c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D93C4u, 0x2D93CCu)) {
        return;
    }
    ctx->pc = 0x2D93CCu;
label_2d93cc:
    // 0x2d93cc: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_2d93d0:
    if (ctx->pc == 0x2D93D0u) {
        ctx->pc = 0x2D93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93CCu;
        // 0x2d93d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93D4u;
        goto label_2d93d4;
    }
    ctx->pc = 0x2D93CCu;
    {
        const bool branch_taken_0x2d93cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93CCu;
        // 0x2d93d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93cc) {
            ctx->pc = 0x2D95D8u;
            goto label_2d95d8;
        }
    }
    ctx->pc = 0x2D93D4u;
label_2d93d4:
    // 0x2d93d4: 0x37a40002  ori         $a0, $sp, 0x2
    ctx->pc = 0x2d93d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
label_2d93d8:
    // 0x2d93d8: 0xc0c344c  jal         func_30D130
label_2d93dc:
    if (ctx->pc == 0x2D93DCu) {
        ctx->pc = 0x2D93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93D8u;
        // 0x2d93dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93E0u;
        goto label_2d93e0;
    }
    ctx->pc = 0x2D93D8u;
    SET_GPR_U32(ctx, 31, 0x2D93E0u);
    ctx->pc = 0x2D93DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93D8u;
    // 0x2d93dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D93D8u, 0x2D93E0u)) {
        return;
    }
    ctx->pc = 0x2D93E0u;
label_2d93e0:
    // 0x2d93e0: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_2d93e4:
    if (ctx->pc == 0x2D93E4u) {
        ctx->pc = 0x2D93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93E0u;
        // 0x2d93e4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93E8u;
        goto label_2d93e8;
    }
    ctx->pc = 0x2D93E0u;
    {
        const bool branch_taken_0x2d93e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93E0u;
        // 0x2d93e4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93e0) {
            ctx->pc = 0x2D95D4u;
            goto label_2d95d4;
        }
    }
    ctx->pc = 0x2D93E8u;
label_2d93e8:
    // 0x2d93e8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d93e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d93ec:
    // 0x2d93ec: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2d93ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d93f0:
    // 0x2d93f0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2d93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2d93f4:
    // 0x2d93f4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2d93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2d93f8:
    // 0x2d93f8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2d93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2d93fc:
    // 0x2d93fc: 0x40f809  jalr        $v0
label_2d9400:
    if (ctx->pc == 0x2D9400u) {
        ctx->pc = 0x2D9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93FCu;
        // 0x2d9400: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9404u;
        goto label_2d9404;
    }
    ctx->pc = 0x2D93FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9404u);
        ctx->pc = 0x2D9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93FCu;
        // 0x2d9400: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D93FCu, 0x2D9404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9404u;
label_2d9404:
    // 0x2d9404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9408:
    // 0x2d9408: 0xc0b6422  jal         func_2D9088
label_2d940c:
    if (ctx->pc == 0x2D940Cu) {
        ctx->pc = 0x2D940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9408u;
        // 0x2d940c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9410u;
        goto label_2d9410;
    }
    ctx->pc = 0x2D9408u;
    SET_GPR_U32(ctx, 31, 0x2D9410u);
    ctx->pc = 0x2D940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9408u;
    // 0x2d940c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9088u, 0x2D9408u, 0x2D9410u)) {
        return;
    }
    ctx->pc = 0x2D9410u;
label_2d9410:
    // 0x2d9410: 0x12000071  beqz        $s0, . + 4 + (0x71 << 2)
label_2d9414:
    if (ctx->pc == 0x2D9414u) {
        ctx->pc = 0x2D9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9410u;
        // 0x2d9414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9418u;
        goto label_2d9418;
    }
    ctx->pc = 0x2D9410u;
    {
        const bool branch_taken_0x2d9410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9410u;
        // 0x2d9414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9410) {
            ctx->pc = 0x2D95D8u;
            goto label_2d95d8;
        }
    }
    ctx->pc = 0x2D9418u;
label_2d9418:
    // 0x2d9418: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2d9418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2d941c:
    // 0x2d941c: 0xc0c344c  jal         func_30D130
label_2d9420:
    if (ctx->pc == 0x2D9420u) {
        ctx->pc = 0x2D9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D941Cu;
        // 0x2d9420: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9424u;
        goto label_2d9424;
    }
    ctx->pc = 0x2D941Cu;
    SET_GPR_U32(ctx, 31, 0x2D9424u);
    ctx->pc = 0x2D9420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D941Cu;
    // 0x2d9420: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D941Cu, 0x2D9424u)) {
        return;
    }
    ctx->pc = 0x2D9424u;
label_2d9424:
    // 0x2d9424: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_2d9428:
    if (ctx->pc == 0x2D9428u) {
        ctx->pc = 0x2D9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9424u;
        // 0x2d9428: 0x2604000a  addiu       $a0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D942Cu;
        goto label_2d942c;
    }
    ctx->pc = 0x2D9424u;
    {
        const bool branch_taken_0x2d9424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9424u;
        // 0x2d9428: 0x2604000a  addiu       $a0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9424) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D942Cu;
label_2d942c:
    // 0x2d942c: 0xc0c344c  jal         func_30D130
label_2d9430:
    if (ctx->pc == 0x2D9430u) {
        ctx->pc = 0x2D9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D942Cu;
        // 0x2d9430: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9434u;
        goto label_2d9434;
    }
    ctx->pc = 0x2D942Cu;
    SET_GPR_U32(ctx, 31, 0x2D9434u);
    ctx->pc = 0x2D9430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D942Cu;
    // 0x2d9430: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D942Cu, 0x2D9434u)) {
        return;
    }
    ctx->pc = 0x2D9434u;
label_2d9434:
    // 0x2d9434: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_2d9438:
    if (ctx->pc == 0x2D9438u) {
        ctx->pc = 0x2D943Cu;
        goto label_2d943c;
    }
    ctx->pc = 0x2D9434u;
    {
        const bool branch_taken_0x2d9434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9434) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D943Cu;
label_2d943c:
    // 0x2d943c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x2d943cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2d9440:
    // 0x2d9440: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2d9444:
    if (ctx->pc == 0x2D9444u) {
        ctx->pc = 0x2D9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9440u;
        // 0x2d9444: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9448u;
        goto label_2d9448;
    }
    ctx->pc = 0x2D9440u;
    {
        const bool branch_taken_0x2d9440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9440u;
        // 0x2d9444: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9440) {
            ctx->pc = 0x2D9478u;
            goto label_2d9478;
        }
    }
    ctx->pc = 0x2D9448u;
label_2d9448:
    // 0x2d9448: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d944c:
    // 0x2d944c: 0x0  nop
    ctx->pc = 0x2d944cu;
    // NOP
label_2d9450:
    // 0x2d9450: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2d9450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d9454:
    // 0x2d9454: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d9454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d9458:
    // 0x2d9458: 0xc0c302a  jal         func_30C0A8
label_2d945c:
    if (ctx->pc == 0x2D945Cu) {
        ctx->pc = 0x2D945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9458u;
        // 0x2d945c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9460u;
        goto label_2d9460;
    }
    ctx->pc = 0x2D9458u;
    SET_GPR_U32(ctx, 31, 0x2D9460u);
    ctx->pc = 0x2D945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9458u;
    // 0x2d945c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C0A8u, 0x2D9458u, 0x2D9460u)) {
        return;
    }
    ctx->pc = 0x2D9460u;
label_2d9460:
    // 0x2d9460: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_2d9464:
    if (ctx->pc == 0x2D9464u) {
        ctx->pc = 0x2D9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9460u;
        // 0x2d9464: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9468u;
        goto label_2d9468;
    }
    ctx->pc = 0x2D9460u;
    {
        const bool branch_taken_0x2d9460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9460u;
        // 0x2d9464: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9460) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D9468u;
label_2d9468:
    // 0x2d9468: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x2d9468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2d946c:
    // 0x2d946c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d946cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d9470:
    // 0x2d9470: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2d9474:
    if (ctx->pc == 0x2D9474u) {
        ctx->pc = 0x2D9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9470u;
        // 0x2d9474: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9478u;
        goto label_2d9478;
    }
    ctx->pc = 0x2D9470u;
    {
        const bool branch_taken_0x2d9470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9470u;
        // 0x2d9474: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9470) {
            ctx->pc = 0x2D9450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9450;
        }
    }
    ctx->pc = 0x2D9478u;
label_2d9478:
    // 0x2d9478: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x2d9478u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2d947c:
    // 0x2d947c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d947cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9480:
    // 0x2d9480: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2d9484:
    if (ctx->pc == 0x2D9484u) {
        ctx->pc = 0x2D9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9480u;
        // 0x2d9484: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9488u;
        goto label_2d9488;
    }
    ctx->pc = 0x2D9480u;
    {
        const bool branch_taken_0x2d9480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9480u;
        // 0x2d9484: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9480) {
            ctx->pc = 0x2D94BCu;
            goto label_2d94bc;
        }
    }
    ctx->pc = 0x2D9488u;
label_2d9488:
    // 0x2d9488: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d948c:
    // 0x2d948c: 0x0  nop
    ctx->pc = 0x2d948cu;
    // NOP
label_2d9490:
    // 0x2d9490: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2d9490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2d9494:
    // 0x2d9494: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d9494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d9498:
    // 0x2d9498: 0xc0c3222  jal         func_30C888
label_2d949c:
    if (ctx->pc == 0x2D949Cu) {
        ctx->pc = 0x2D949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9498u;
        // 0x2d949c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D94A0u;
        goto label_2d94a0;
    }
    ctx->pc = 0x2D9498u;
    SET_GPR_U32(ctx, 31, 0x2D94A0u);
    ctx->pc = 0x2D949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9498u;
    // 0x2d949c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C888u, 0x2D9498u, 0x2D94A0u)) {
        return;
    }
    ctx->pc = 0x2D94A0u;
label_2d94a0:
    // 0x2d94a0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_2d94a4:
    if (ctx->pc == 0x2D94A4u) {
        ctx->pc = 0x2D94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94A0u;
        // 0x2d94a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D94A8u;
        goto label_2d94a8;
    }
    ctx->pc = 0x2D94A0u;
    {
        const bool branch_taken_0x2d94a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94A0u;
        // 0x2d94a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94a0) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D94A8u;
label_2d94a8:
    // 0x2d94a8: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x2d94a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2d94ac:
    // 0x2d94ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d94acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d94b0:
    // 0x2d94b0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d94b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d94b4:
    // 0x2d94b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2d94b8:
    if (ctx->pc == 0x2D94B8u) {
        ctx->pc = 0x2D94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94B4u;
        // 0x2d94b8: 0x265200b4  addiu       $s2, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D94BCu;
        goto label_2d94bc;
    }
    ctx->pc = 0x2D94B4u;
    {
        const bool branch_taken_0x2d94b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94B4u;
        // 0x2d94b8: 0x265200b4  addiu       $s2, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94b4) {
            ctx->pc = 0x2D9490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9490;
        }
    }
    ctx->pc = 0x2D94BCu;
label_2d94bc:
    // 0x2d94bc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2d94c0:
    if (ctx->pc == 0x2D94C0u) {
        ctx->pc = 0x2D94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94BCu;
        // 0x2d94c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D94C4u;
        goto label_2d94c4;
    }
    ctx->pc = 0x2D94BCu;
    {
        const bool branch_taken_0x2d94bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94BCu;
        // 0x2d94c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94bc) {
            ctx->pc = 0x2D9548u;
            goto label_2d9548;
        }
    }
    ctx->pc = 0x2D94C4u;
label_2d94c4:
    // 0x2d94c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2d94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2d94c8:
    // 0x2d94c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d94c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d94cc:
    // 0x2d94cc: 0x2442ef3a  addiu       $v0, $v0, -0x10C6
    ctx->pc = 0x2d94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963002));
label_2d94d0:
    // 0x2d94d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d94d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d94d4:
    // 0x2d94d4: 0x2454fffe  addiu       $s4, $v0, -0x2
    ctx->pc = 0x2d94d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2d94d8:
    // 0x2d94d8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2d94d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d94dc:
    // 0x2d94dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d94dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d94e0:
    // 0x2d94e0: 0xc0c344c  jal         func_30D130
label_2d94e4:
    if (ctx->pc == 0x2D94E4u) {
        ctx->pc = 0x2D94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94E0u;
        // 0x2d94e4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D94E8u;
        goto label_2d94e8;
    }
    ctx->pc = 0x2D94E0u;
    SET_GPR_U32(ctx, 31, 0x2D94E8u);
    ctx->pc = 0x2D94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D94E0u;
    // 0x2d94e4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D94E0u, 0x2D94E8u)) {
        return;
    }
    ctx->pc = 0x2D94E8u;
label_2d94e8:
    // 0x2d94e8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2d94ec:
    if (ctx->pc == 0x2D94ECu) {
        ctx->pc = 0x2D94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94E8u;
        // 0x2d94ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D94F0u;
        goto label_2d94f0;
    }
    ctx->pc = 0x2D94E8u;
    {
        const bool branch_taken_0x2d94e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94E8u;
        // 0x2d94ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94e8) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D94F0u;
label_2d94f0:
    // 0x2d94f0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2d94f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d94f4:
    // 0x2d94f4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2d94f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2d94f8:
    // 0x2d94f8: 0xc0c344c  jal         func_30D130
label_2d94fc:
    if (ctx->pc == 0x2D94FCu) {
        ctx->pc = 0x2D94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94F8u;
        // 0x2d94fc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9500u;
        goto label_2d9500;
    }
    ctx->pc = 0x2D94F8u;
    SET_GPR_U32(ctx, 31, 0x2D9500u);
    ctx->pc = 0x2D94FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D94F8u;
    // 0x2d94fc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D130u, 0x2D94F8u, 0x2D9500u)) {
        return;
    }
    ctx->pc = 0x2D9500u;
label_2d9500:
    // 0x2d9500: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2d9504:
    if (ctx->pc == 0x2D9504u) {
        ctx->pc = 0x2D9508u;
        goto label_2d9508;
    }
    ctx->pc = 0x2D9500u;
    {
        const bool branch_taken_0x2d9500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9500) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D9508u;
label_2d9508:
    // 0x2d9508: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2d9508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d950c:
    // 0x2d950c: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x2d950cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2d9510:
    // 0x2d9510: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d9510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2d9514:
    // 0x2d9514: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2d9514u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2d9518:
    // 0x2d9518: 0x14640025  bne         $v1, $a0, . + 4 + (0x25 << 2)
label_2d951c:
    if (ctx->pc == 0x2D951Cu) {
        ctx->pc = 0x2D9520u;
        goto label_2d9520;
    }
    ctx->pc = 0x2D9518u;
    {
        const bool branch_taken_0x2d9518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d9518) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D9520u;
label_2d9520:
    // 0x2d9520: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x2d9520u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2d9524:
    // 0x2d9524: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2d9524u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_2d9528:
    // 0x2d9528: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_2d952c:
    if (ctx->pc == 0x2D952Cu) {
        ctx->pc = 0x2D952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9528u;
        // 0x2d952c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9530u;
        goto label_2d9530;
    }
    ctx->pc = 0x2D9528u;
    {
        const bool branch_taken_0x2d9528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9528u;
        // 0x2d952c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9528) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D9530u;
label_2d9530:
    // 0x2d9530: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x2d9530u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2d9534:
    // 0x2d9534: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2d9534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2d9538:
    // 0x2d9538: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2d9538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2d953c:
    // 0x2d953c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d953cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d9540:
    // 0x2d9540: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_2d9544:
    if (ctx->pc == 0x2D9544u) {
        ctx->pc = 0x2D9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9540u;
        // 0x2d9544: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9548u;
        goto label_2d9548;
    }
    ctx->pc = 0x2D9540u;
    {
        const bool branch_taken_0x2d9540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9540u;
        // 0x2d9544: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9540) {
            ctx->pc = 0x2D94D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d94d8;
        }
    }
    ctx->pc = 0x2D9548u;
label_2d9548:
    // 0x2d9548: 0xc0ad286  jal         func_2B4A18
label_2d954c:
    if (ctx->pc == 0x2D954Cu) {
        ctx->pc = 0x2D954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9548u;
        // 0x2d954c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9550u;
        goto label_2d9550;
    }
    ctx->pc = 0x2D9548u;
    SET_GPR_U32(ctx, 31, 0x2D9550u);
    ctx->pc = 0x2D954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9548u;
    // 0x2d954c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A18u, 0x2D9548u, 0x2D9550u)) {
        return;
    }
    ctx->pc = 0x2D9550u;
label_2d9550:
    // 0x2d9550: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2d9550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2d9554:
    // 0x2d9554: 0xc0c3356  jal         func_30CD58
label_2d9558:
    if (ctx->pc == 0x2D9558u) {
        ctx->pc = 0x2D9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9554u;
        // 0x2d9558: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D955Cu;
        goto label_2d955c;
    }
    ctx->pc = 0x2D9554u;
    SET_GPR_U32(ctx, 31, 0x2D955Cu);
    ctx->pc = 0x2D9558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9554u;
    // 0x2d9558: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30CD58u, 0x2D9554u, 0x2D955Cu)) {
        return;
    }
    ctx->pc = 0x2D955Cu;
label_2d955c:
    // 0x2d955c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2d9560:
    if (ctx->pc == 0x2D9560u) {
        ctx->pc = 0x2D9564u;
        goto label_2d9564;
    }
    ctx->pc = 0x2D955Cu;
    {
        const bool branch_taken_0x2d955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d955c) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D9564u;
label_2d9564:
    // 0x2d9564: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2d9564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d9568:
    // 0x2d9568: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x2d9568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2d956c:
    // 0x2d956c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9570:
    // 0x2d9570: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2d9574:
    if (ctx->pc == 0x2D9574u) {
        ctx->pc = 0x2D9578u;
        goto label_2d9578;
    }
    ctx->pc = 0x2D9570u;
    {
        const bool branch_taken_0x2d9570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9570) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D9578u;
label_2d9578:
    // 0x2d9578: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d9578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d957c:
    // 0x2d957c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_2d9580:
    if (ctx->pc == 0x2D9580u) {
        ctx->pc = 0x2D9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D957Cu;
        // 0x2d9580: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9584u;
        goto label_2d9584;
    }
    ctx->pc = 0x2D957Cu;
    {
        const bool branch_taken_0x2d957c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D957Cu;
        // 0x2d9580: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d957c) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D9584u;
label_2d9584:
    // 0x2d9584: 0xc0c3424  jal         func_30D090
label_2d9588:
    if (ctx->pc == 0x2D9588u) {
        ctx->pc = 0x2D9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9584u;
        // 0x2d9588: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D958Cu;
        goto label_2d958c;
    }
    ctx->pc = 0x2D9584u;
    SET_GPR_U32(ctx, 31, 0x2D958Cu);
    ctx->pc = 0x2D9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9584u;
    // 0x2d9588: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D090u, 0x2D9584u, 0x2D958Cu)) {
        return;
    }
    ctx->pc = 0x2D958Cu;
label_2d958c:
    // 0x2d958c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2d9590:
    if (ctx->pc == 0x2D9590u) {
        ctx->pc = 0x2D9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D958Cu;
        // 0x2d9590: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9594u;
        goto label_2d9594;
    }
    ctx->pc = 0x2D958Cu;
    {
        const bool branch_taken_0x2d958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D958Cu;
        // 0x2d9590: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d958c) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D9594u;
label_2d9594:
    // 0x2d9594: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2d9594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2d9598:
    // 0x2d9598: 0xc0c3474  jal         func_30D1D0
label_2d959c:
    if (ctx->pc == 0x2D959Cu) {
        ctx->pc = 0x2D959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9598u;
        // 0x2d959c: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95A0u;
        goto label_2d95a0;
    }
    ctx->pc = 0x2D9598u;
    SET_GPR_U32(ctx, 31, 0x2D95A0u);
    ctx->pc = 0x2D959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9598u;
    // 0x2d959c: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D1D0u, 0x2D9598u, 0x2D95A0u)) {
        return;
    }
    ctx->pc = 0x2D95A0u;
label_2d95a0:
    // 0x2d95a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d95a4:
    if (ctx->pc == 0x2D95A4u) {
        ctx->pc = 0x2D95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95A0u;
        // 0x2d95a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95A8u;
        goto label_2d95a8;
    }
    ctx->pc = 0x2D95A0u;
    {
        const bool branch_taken_0x2d95a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95A0u;
        // 0x2d95a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95a0) {
            ctx->pc = 0x2D95B0u;
            goto label_2d95b0;
        }
    }
    ctx->pc = 0x2D95A8u;
label_2d95a8:
    // 0x2d95a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2d95ac:
    if (ctx->pc == 0x2D95ACu) {
        ctx->pc = 0x2D95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95A8u;
        // 0x2d95ac: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95B0u;
        goto label_2d95b0;
    }
    ctx->pc = 0x2D95A8u;
    {
        const bool branch_taken_0x2d95a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95A8u;
        // 0x2d95ac: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95a8) {
            ctx->pc = 0x2D95D8u;
            goto label_2d95d8;
        }
    }
    ctx->pc = 0x2D95B0u;
label_2d95b0:
    // 0x2d95b0: 0xc0b6596  jal         func_2D9658
label_2d95b4:
    if (ctx->pc == 0x2D95B4u) {
        ctx->pc = 0x2D95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95B0u;
        // 0x2d95b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95B8u;
        goto label_2d95b8;
    }
    ctx->pc = 0x2D95B0u;
    SET_GPR_U32(ctx, 31, 0x2D95B8u);
    ctx->pc = 0x2D95B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D95B0u;
    // 0x2d95b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9658u, 0x2D95B0u, 0x2D95B8u)) {
        return;
    }
    ctx->pc = 0x2D95B8u;
label_2d95b8:
    // 0x2d95b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d95bc:
    // 0x2d95bc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2d95c0:
    if (ctx->pc == 0x2D95C0u) {
        ctx->pc = 0x2D95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95BCu;
        // 0x2d95c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95C4u;
        goto label_2d95c4;
    }
    ctx->pc = 0x2D95BCu;
    {
        const bool branch_taken_0x2d95bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95BCu;
        // 0x2d95c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95bc) {
            ctx->pc = 0x2D95D8u;
            goto label_2d95d8;
        }
    }
    ctx->pc = 0x2D95C4u;
label_2d95c4:
    // 0x2d95c4: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x2d95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_2d95c8:
    // 0x2d95c8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2d95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2d95cc:
    // 0x2d95cc: 0x40f809  jalr        $v0
label_2d95d0:
    if (ctx->pc == 0x2D95D0u) {
        ctx->pc = 0x2D95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95CCu;
        // 0x2d95d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95D4u;
        goto label_2d95d4;
    }
    ctx->pc = 0x2D95CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D95D4u);
        ctx->pc = 0x2D95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95CCu;
        // 0x2d95d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D95CCu, 0x2D95D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D95D4u;
label_2d95d4:
    // 0x2d95d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d95d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d95d8:
    // 0x2d95d8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d95d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d95dc:
    // 0x2d95dc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d95dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d95e0:
    // 0x2d95e0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d95e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d95e4:
    // 0x2d95e4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2d95e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d95e8:
    // 0x2d95e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d95e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d95ec:
    // 0x2d95ec: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2d95ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d95f0:
    // 0x2d95f0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2d95f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d95f4:
    // 0x2d95f4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2d95f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d95f8:
    // 0x2d95f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d95f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d95fc:
    // 0x2d95fc: 0x3e00008  jr          $ra
label_2d9600:
    if (ctx->pc == 0x2D9600u) {
        ctx->pc = 0x2D9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95FCu;
        // 0x2d9600: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9604u;
        goto label_2d9604;
    }
    ctx->pc = 0x2D95FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95FCu;
        // 0x2d9600: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D95FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9604u;
label_2d9604:
    // 0x2d9604: 0x0  nop
    ctx->pc = 0x2d9604u;
    // NOP
label_2d9608:
    // 0x2d9608: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d9608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d960c:
    // 0x2d960c: 0x0  nop
    ctx->pc = 0x2d960cu;
    // NOP
    ctx->pc = 0x2d9610u;
}
