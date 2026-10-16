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

// Function: sub_002863B0
// Address: 0x2863b0 - 0x2865e0
void sub_002863B0_0x2863b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002863B0_0x2863b0");
#endif

    switch (ctx->pc) {
        case 0x2863b0u: goto label_2863b0;
        case 0x2863b4u: goto label_2863b4;
        case 0x2863b8u: goto label_2863b8;
        case 0x2863bcu: goto label_2863bc;
        case 0x2863c0u: goto label_2863c0;
        case 0x2863c4u: goto label_2863c4;
        case 0x2863c8u: goto label_2863c8;
        case 0x2863ccu: goto label_2863cc;
        case 0x2863d0u: goto label_2863d0;
        case 0x2863d4u: goto label_2863d4;
        case 0x2863d8u: goto label_2863d8;
        case 0x2863dcu: goto label_2863dc;
        case 0x2863e0u: goto label_2863e0;
        case 0x2863e4u: goto label_2863e4;
        case 0x2863e8u: goto label_2863e8;
        case 0x2863ecu: goto label_2863ec;
        case 0x2863f0u: goto label_2863f0;
        case 0x2863f4u: goto label_2863f4;
        case 0x2863f8u: goto label_2863f8;
        case 0x2863fcu: goto label_2863fc;
        case 0x286400u: goto label_286400;
        case 0x286404u: goto label_286404;
        case 0x286408u: goto label_286408;
        case 0x28640cu: goto label_28640c;
        case 0x286410u: goto label_286410;
        case 0x286414u: goto label_286414;
        case 0x286418u: goto label_286418;
        case 0x28641cu: goto label_28641c;
        case 0x286420u: goto label_286420;
        case 0x286424u: goto label_286424;
        case 0x286428u: goto label_286428;
        case 0x28642cu: goto label_28642c;
        case 0x286430u: goto label_286430;
        case 0x286434u: goto label_286434;
        case 0x286438u: goto label_286438;
        case 0x28643cu: goto label_28643c;
        case 0x286440u: goto label_286440;
        case 0x286444u: goto label_286444;
        case 0x286448u: goto label_286448;
        case 0x28644cu: goto label_28644c;
        case 0x286450u: goto label_286450;
        case 0x286454u: goto label_286454;
        case 0x286458u: goto label_286458;
        case 0x28645cu: goto label_28645c;
        case 0x286460u: goto label_286460;
        case 0x286464u: goto label_286464;
        case 0x286468u: goto label_286468;
        case 0x28646cu: goto label_28646c;
        case 0x286470u: goto label_286470;
        case 0x286474u: goto label_286474;
        case 0x286478u: goto label_286478;
        case 0x28647cu: goto label_28647c;
        case 0x286480u: goto label_286480;
        case 0x286484u: goto label_286484;
        case 0x286488u: goto label_286488;
        case 0x28648cu: goto label_28648c;
        case 0x286490u: goto label_286490;
        case 0x286494u: goto label_286494;
        case 0x286498u: goto label_286498;
        case 0x28649cu: goto label_28649c;
        case 0x2864a0u: goto label_2864a0;
        case 0x2864a4u: goto label_2864a4;
        case 0x2864a8u: goto label_2864a8;
        case 0x2864acu: goto label_2864ac;
        case 0x2864b0u: goto label_2864b0;
        case 0x2864b4u: goto label_2864b4;
        case 0x2864b8u: goto label_2864b8;
        case 0x2864bcu: goto label_2864bc;
        case 0x2864c0u: goto label_2864c0;
        case 0x2864c4u: goto label_2864c4;
        case 0x2864c8u: goto label_2864c8;
        case 0x2864ccu: goto label_2864cc;
        case 0x2864d0u: goto label_2864d0;
        case 0x2864d4u: goto label_2864d4;
        case 0x2864d8u: goto label_2864d8;
        case 0x2864dcu: goto label_2864dc;
        case 0x2864e0u: goto label_2864e0;
        case 0x2864e4u: goto label_2864e4;
        case 0x2864e8u: goto label_2864e8;
        case 0x2864ecu: goto label_2864ec;
        case 0x2864f0u: goto label_2864f0;
        case 0x2864f4u: goto label_2864f4;
        case 0x2864f8u: goto label_2864f8;
        case 0x2864fcu: goto label_2864fc;
        case 0x286500u: goto label_286500;
        case 0x286504u: goto label_286504;
        case 0x286508u: goto label_286508;
        case 0x28650cu: goto label_28650c;
        case 0x286510u: goto label_286510;
        case 0x286514u: goto label_286514;
        case 0x286518u: goto label_286518;
        case 0x28651cu: goto label_28651c;
        case 0x286520u: goto label_286520;
        case 0x286524u: goto label_286524;
        case 0x286528u: goto label_286528;
        case 0x28652cu: goto label_28652c;
        case 0x286530u: goto label_286530;
        case 0x286534u: goto label_286534;
        case 0x286538u: goto label_286538;
        case 0x28653cu: goto label_28653c;
        case 0x286540u: goto label_286540;
        case 0x286544u: goto label_286544;
        case 0x286548u: goto label_286548;
        case 0x28654cu: goto label_28654c;
        case 0x286550u: goto label_286550;
        case 0x286554u: goto label_286554;
        case 0x286558u: goto label_286558;
        case 0x28655cu: goto label_28655c;
        case 0x286560u: goto label_286560;
        case 0x286564u: goto label_286564;
        case 0x286568u: goto label_286568;
        case 0x28656cu: goto label_28656c;
        case 0x286570u: goto label_286570;
        case 0x286574u: goto label_286574;
        case 0x286578u: goto label_286578;
        case 0x28657cu: goto label_28657c;
        case 0x286580u: goto label_286580;
        case 0x286584u: goto label_286584;
        case 0x286588u: goto label_286588;
        case 0x28658cu: goto label_28658c;
        case 0x286590u: goto label_286590;
        case 0x286594u: goto label_286594;
        case 0x286598u: goto label_286598;
        case 0x28659cu: goto label_28659c;
        case 0x2865a0u: goto label_2865a0;
        case 0x2865a4u: goto label_2865a4;
        case 0x2865a8u: goto label_2865a8;
        case 0x2865acu: goto label_2865ac;
        case 0x2865b0u: goto label_2865b0;
        case 0x2865b4u: goto label_2865b4;
        case 0x2865b8u: goto label_2865b8;
        case 0x2865bcu: goto label_2865bc;
        case 0x2865c0u: goto label_2865c0;
        case 0x2865c4u: goto label_2865c4;
        case 0x2865c8u: goto label_2865c8;
        case 0x2865ccu: goto label_2865cc;
        case 0x2865d0u: goto label_2865d0;
        case 0x2865d4u: goto label_2865d4;
        case 0x2865d8u: goto label_2865d8;
        case 0x2865dcu: goto label_2865dc;
        default: break;
    }

    ctx->pc = 0x2863b0u;

label_2863b0:
    // 0x2863b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2863b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2863b4:
    // 0x2863b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2863b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2863b8:
    // 0x2863b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2863b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2863bc:
    // 0x2863bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2863bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2863c0:
    // 0x2863c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2863c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2863c4:
    // 0x2863c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2863c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2863c8:
    // 0x2863c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2863c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2863cc:
    // 0x2863cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2863ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2863d0:
    // 0x2863d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2863d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2863d4:
    // 0x2863d4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2863d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2863d8:
    // 0x2863d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2863d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2863dc:
    // 0x2863dc: 0xc0927be  jal         func_249EF8
label_2863e0:
    if (ctx->pc == 0x2863E0u) {
        ctx->pc = 0x2863E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863DCu;
        // 0x2863e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863E4u;
        goto label_2863e4;
    }
    ctx->pc = 0x2863DCu;
    SET_GPR_U32(ctx, 31, 0x2863E4u);
    ctx->pc = 0x2863E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863DCu;
    // 0x2863e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2863DCu, 0x2863E4u)) {
        return;
    }
    ctx->pc = 0x2863E4u;
label_2863e4:
    // 0x2863e4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_2863e8:
    if (ctx->pc == 0x2863E8u) {
        ctx->pc = 0x2863E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863E4u;
        // 0x2863e8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863ECu;
        goto label_2863ec;
    }
    ctx->pc = 0x2863E4u;
    {
        const bool branch_taken_0x2863e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2863E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863E4u;
        // 0x2863e8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863e4) {
            ctx->pc = 0x286508u;
            goto label_286508;
        }
    }
    ctx->pc = 0x2863ECu;
label_2863ec:
    // 0x2863ec: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
label_2863f0:
    if (ctx->pc == 0x2863F0u) {
        ctx->pc = 0x2863F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863ECu;
        // 0x2863f0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863F4u;
        goto label_2863f4;
    }
    ctx->pc = 0x2863ECu;
    {
        const bool branch_taken_0x2863ec = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2863F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863ECu;
        // 0x2863f0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863ec) {
            ctx->pc = 0x286424u;
            goto label_286424;
        }
    }
    ctx->pc = 0x2863F4u;
label_2863f4:
    // 0x2863f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2863f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2863f8:
    // 0x2863f8: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2863f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2863fc:
    // 0x2863fc: 0x40f809  jalr        $v0
label_286400:
    if (ctx->pc == 0x286400u) {
        ctx->pc = 0x286400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863FCu;
        // 0x286400: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x286404u;
        goto label_286404;
    }
    ctx->pc = 0x2863FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286404u);
        ctx->pc = 0x286400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863FCu;
        // 0x286400: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2863FCu, 0x286404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286404u;
label_286404:
    // 0x286404: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_286408:
    if (ctx->pc == 0x286408u) {
        ctx->pc = 0x286408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286404u;
        // 0x286408: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28640Cu;
        goto label_28640c;
    }
    ctx->pc = 0x286404u;
    {
        const bool branch_taken_0x286404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286404u;
        // 0x286408: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286404) {
            ctx->pc = 0x286508u;
            goto label_286508;
        }
    }
    ctx->pc = 0x28640Cu;
label_28640c:
    // 0x28640c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x28640cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_286410:
    // 0x286410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x286410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286414:
    // 0x286414: 0xc093546  jal         func_24D518
label_286418:
    if (ctx->pc == 0x286418u) {
        ctx->pc = 0x286418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286414u;
        // 0x286418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28641Cu;
        goto label_28641c;
    }
    ctx->pc = 0x286414u;
    SET_GPR_U32(ctx, 31, 0x28641Cu);
    ctx->pc = 0x286418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286414u;
    // 0x286418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x286414u, 0x28641Cu)) {
        return;
    }
    ctx->pc = 0x28641Cu;
label_28641c:
    // 0x28641c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_286420:
    if (ctx->pc == 0x286420u) {
        ctx->pc = 0x286420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28641Cu;
        // 0x286420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286424u;
        goto label_286424;
    }
    ctx->pc = 0x28641Cu;
    {
        const bool branch_taken_0x28641c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28641Cu;
        // 0x286420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28641c) {
            ctx->pc = 0x2865C0u;
            goto label_2865c0;
        }
    }
    ctx->pc = 0x286424u;
label_286424:
    // 0x286424: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x286424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286428:
    // 0x286428: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x286428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_28642c:
    // 0x28642c: 0xc0927be  jal         func_249EF8
label_286430:
    if (ctx->pc == 0x286430u) {
        ctx->pc = 0x286430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28642Cu;
        // 0x286430: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286434u;
        goto label_286434;
    }
    ctx->pc = 0x28642Cu;
    SET_GPR_U32(ctx, 31, 0x286434u);
    ctx->pc = 0x286430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28642Cu;
    // 0x286430: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x28642Cu, 0x286434u)) {
        return;
    }
    ctx->pc = 0x286434u;
label_286434:
    // 0x286434: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_286438:
    if (ctx->pc == 0x286438u) {
        ctx->pc = 0x286438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286434u;
        // 0x286438: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28643Cu;
        goto label_28643c;
    }
    ctx->pc = 0x286434u;
    {
        const bool branch_taken_0x286434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286434u;
        // 0x286438: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286434) {
            ctx->pc = 0x286508u;
            goto label_286508;
        }
    }
    ctx->pc = 0x28643Cu;
label_28643c:
    // 0x28643c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x28643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_286440:
    // 0x286440: 0xc0927be  jal         func_249EF8
label_286444:
    if (ctx->pc == 0x286444u) {
        ctx->pc = 0x286444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286440u;
        // 0x286444: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286448u;
        goto label_286448;
    }
    ctx->pc = 0x286440u;
    SET_GPR_U32(ctx, 31, 0x286448u);
    ctx->pc = 0x286444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286440u;
    // 0x286444: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x286440u, 0x286448u)) {
        return;
    }
    ctx->pc = 0x286448u;
label_286448:
    // 0x286448: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_28644c:
    if (ctx->pc == 0x28644Cu) {
        ctx->pc = 0x28644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286448u;
        // 0x28644c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286450u;
        goto label_286450;
    }
    ctx->pc = 0x286448u;
    {
        const bool branch_taken_0x286448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286448u;
        // 0x28644c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286448) {
            ctx->pc = 0x286508u;
            goto label_286508;
        }
    }
    ctx->pc = 0x286450u;
label_286450:
    // 0x286450: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_286454:
    // 0x286454: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_286458:
    if (ctx->pc == 0x286458u) {
        ctx->pc = 0x286458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286454u;
        // 0x286458: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28645Cu;
        goto label_28645c;
    }
    ctx->pc = 0x286454u;
    {
        const bool branch_taken_0x286454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286454u;
        // 0x286458: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286454) {
            ctx->pc = 0x2864C8u;
            goto label_2864c8;
        }
    }
    ctx->pc = 0x28645Cu;
label_28645c:
    // 0x28645c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_286460:
    if (ctx->pc == 0x286460u) {
        ctx->pc = 0x286460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28645Cu;
        // 0x286460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286464u;
        goto label_286464;
    }
    ctx->pc = 0x28645Cu;
    {
        const bool branch_taken_0x28645c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28645Cu;
        // 0x286460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28645c) {
            ctx->pc = 0x286474u;
            goto label_286474;
        }
    }
    ctx->pc = 0x286464u;
label_286464:
    // 0x286464: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_286468:
    if (ctx->pc == 0x286468u) {
        ctx->pc = 0x286468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286464u;
        // 0x286468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28646Cu;
        goto label_28646c;
    }
    ctx->pc = 0x286464u;
    {
        const bool branch_taken_0x286464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286464u;
        // 0x286468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286464) {
            ctx->pc = 0x286488u;
            goto label_286488;
        }
    }
    ctx->pc = 0x28646Cu;
label_28646c:
    // 0x28646c: 0x10000055  b           . + 4 + (0x55 << 2)
label_286470:
    if (ctx->pc == 0x286470u) {
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28646Cu;
        // 0x286470: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286474u;
        goto label_286474;
    }
    ctx->pc = 0x28646Cu;
    {
        const bool branch_taken_0x28646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28646Cu;
        // 0x286470: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28646c) {
            ctx->pc = 0x2865C4u;
            goto label_2865c4;
        }
    }
    ctx->pc = 0x286474u;
label_286474:
    // 0x286474: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x286474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_286478:
    // 0x286478: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_28647c:
    if (ctx->pc == 0x28647Cu) {
        ctx->pc = 0x28647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286478u;
        // 0x28647c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286480u;
        goto label_286480;
    }
    ctx->pc = 0x286478u;
    {
        const bool branch_taken_0x286478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286478u;
        // 0x28647c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286478) {
            ctx->pc = 0x286510u;
            goto label_286510;
        }
    }
    ctx->pc = 0x286480u;
label_286480:
    // 0x286480: 0x1000004f  b           . + 4 + (0x4F << 2)
label_286484:
    if (ctx->pc == 0x286484u) {
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286480u;
        // 0x286484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286488u;
        goto label_286488;
    }
    ctx->pc = 0x286480u;
    {
        const bool branch_taken_0x286480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286480u;
        // 0x286484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286480) {
            ctx->pc = 0x2865C0u;
            goto label_2865c0;
        }
    }
    ctx->pc = 0x286488u;
label_286488:
    // 0x286488: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28648c:
    // 0x28648c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28648cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_286490:
    // 0x286490: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_286494:
    // 0x286494: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x286494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_286498:
    // 0x286498: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x286498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28649c:
    // 0x28649c: 0x40f809  jalr        $v0
label_2864a0:
    if (ctx->pc == 0x2864A0u) {
        ctx->pc = 0x2864A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28649Cu;
        // 0x2864a0: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864A4u;
        goto label_2864a4;
    }
    ctx->pc = 0x28649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2864A4u);
        ctx->pc = 0x2864A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28649Cu;
        // 0x2864a0: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28649Cu, 0x2864A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2864A4u;
label_2864a4:
    // 0x2864a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2864a8:
    if (ctx->pc == 0x2864A8u) {
        ctx->pc = 0x2864A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864A4u;
        // 0x2864a8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864ACu;
        goto label_2864ac;
    }
    ctx->pc = 0x2864A4u;
    {
        const bool branch_taken_0x2864a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864A4u;
        // 0x2864a8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864a4) {
            ctx->pc = 0x286508u;
            goto label_286508;
        }
    }
    ctx->pc = 0x2864ACu;
label_2864ac:
    // 0x2864ac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2864acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2864b0:
    // 0x2864b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2864b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2864b4:
    // 0x2864b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2864b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2864b8:
    // 0x2864b8: 0xc0927be  jal         func_249EF8
label_2864bc:
    if (ctx->pc == 0x2864BCu) {
        ctx->pc = 0x2864BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864B8u;
        // 0x2864bc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864C0u;
        goto label_2864c0;
    }
    ctx->pc = 0x2864B8u;
    SET_GPR_U32(ctx, 31, 0x2864C0u);
    ctx->pc = 0x2864BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2864B8u;
    // 0x2864bc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2864B8u, 0x2864C0u)) {
        return;
    }
    ctx->pc = 0x2864C0u;
label_2864c0:
    // 0x2864c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2864c4:
    if (ctx->pc == 0x2864C4u) {
        ctx->pc = 0x2864C8u;
        goto label_2864c8;
    }
    ctx->pc = 0x2864C0u;
    {
        const bool branch_taken_0x2864c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2864c0) {
            ctx->pc = 0x286500u;
            goto label_286500;
        }
    }
    ctx->pc = 0x2864C8u;
label_2864c8:
    // 0x2864c8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2864c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2864cc:
    // 0x2864cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2864ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2864d0:
    // 0x2864d0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2864d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2864d4:
    // 0x2864d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2864d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2864d8:
    // 0x2864d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2864d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2864dc:
    // 0x2864dc: 0x40f809  jalr        $v0
label_2864e0:
    if (ctx->pc == 0x2864E0u) {
        ctx->pc = 0x2864E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864DCu;
        // 0x2864e0: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864E4u;
        goto label_2864e4;
    }
    ctx->pc = 0x2864DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2864E4u);
        ctx->pc = 0x2864E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864DCu;
        // 0x2864e0: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2864DCu, 0x2864E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2864E4u;
label_2864e4:
    // 0x2864e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2864e8:
    if (ctx->pc == 0x2864E8u) {
        ctx->pc = 0x2864E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864E4u;
        // 0x2864e8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864ECu;
        goto label_2864ec;
    }
    ctx->pc = 0x2864E4u;
    {
        const bool branch_taken_0x2864e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864E4u;
        // 0x2864e8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864e4) {
            ctx->pc = 0x286508u;
            goto label_286508;
        }
    }
    ctx->pc = 0x2864ECu;
label_2864ec:
    // 0x2864ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2864ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2864f0:
    // 0x2864f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2864f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2864f4:
    // 0x2864f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2864f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2864f8:
    // 0x2864f8: 0xc0927aa  jal         func_249EA8
label_2864fc:
    if (ctx->pc == 0x2864FCu) {
        ctx->pc = 0x2864FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864F8u;
        // 0x2864fc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286500u;
        goto label_286500;
    }
    ctx->pc = 0x2864F8u;
    SET_GPR_U32(ctx, 31, 0x286500u);
    ctx->pc = 0x2864FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2864F8u;
    // 0x2864fc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x2864F8u, 0x286500u)) {
        return;
    }
    ctx->pc = 0x286500u;
label_286500:
    // 0x286500: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_286504:
    if (ctx->pc == 0x286504u) {
        ctx->pc = 0x286504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286500u;
        // 0x286504: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286508u;
        goto label_286508;
    }
    ctx->pc = 0x286500u;
    {
        const bool branch_taken_0x286500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286500u;
        // 0x286504: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286500) {
            ctx->pc = 0x2865C0u;
            goto label_2865c0;
        }
    }
    ctx->pc = 0x286508u;
label_286508:
    // 0x286508: 0x1000002d  b           . + 4 + (0x2D << 2)
label_28650c:
    if (ctx->pc == 0x28650Cu) {
        ctx->pc = 0x28650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286508u;
        // 0x28650c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286510u;
        goto label_286510;
    }
    ctx->pc = 0x286508u;
    {
        const bool branch_taken_0x286508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286508u;
        // 0x28650c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286508) {
            ctx->pc = 0x2865C0u;
            goto label_2865c0;
        }
    }
    ctx->pc = 0x286510u;
label_286510:
    // 0x286510: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x286510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286514:
    // 0x286514: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x286514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_286518:
    // 0x286518: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x286518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28651c:
    // 0x28651c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x28651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_286520:
    // 0x286520: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x286520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_286524:
    // 0x286524: 0x40f809  jalr        $v0
label_286528:
    if (ctx->pc == 0x286528u) {
        ctx->pc = 0x286528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286524u;
        // 0x286528: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28652Cu;
        goto label_28652c;
    }
    ctx->pc = 0x286524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28652Cu);
        ctx->pc = 0x286528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286524u;
        // 0x286528: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286524u, 0x28652Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28652Cu;
label_28652c:
    // 0x28652c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28652cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286530:
    // 0x286530: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x286530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_286534:
    // 0x286534: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_286538:
    if (ctx->pc == 0x286538u) {
        ctx->pc = 0x286538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286534u;
        // 0x286538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28653Cu;
        goto label_28653c;
    }
    ctx->pc = 0x286534u;
    {
        const bool branch_taken_0x286534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286534u;
        // 0x286538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286534) {
            ctx->pc = 0x2865C0u;
            goto label_2865c0;
        }
    }
    ctx->pc = 0x28653Cu;
label_28653c:
    // 0x28653c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286540:
    // 0x286540: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_286544:
    if (ctx->pc == 0x286544u) {
        ctx->pc = 0x286544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286540u;
        // 0x286544: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286548u;
        goto label_286548;
    }
    ctx->pc = 0x286540u;
    {
        const bool branch_taken_0x286540 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x286544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286540u;
        // 0x286544: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286540) {
            ctx->pc = 0x2865BCu;
            goto label_2865bc;
        }
    }
    ctx->pc = 0x286548u;
label_286548:
    // 0x286548: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x286548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28654c:
    // 0x28654c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28654cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286550:
    // 0x286550: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x286550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286554:
    // 0x286554: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x286554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_286558:
    // 0x286558: 0xc0927be  jal         func_249EF8
label_28655c:
    if (ctx->pc == 0x28655Cu) {
        ctx->pc = 0x28655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286558u;
        // 0x28655c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286560u;
        goto label_286560;
    }
    ctx->pc = 0x286558u;
    SET_GPR_U32(ctx, 31, 0x286560u);
    ctx->pc = 0x28655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286558u;
    // 0x28655c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x286558u, 0x286560u)) {
        return;
    }
    ctx->pc = 0x286560u;
label_286560:
    // 0x286560: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_286564:
    if (ctx->pc == 0x286564u) {
        ctx->pc = 0x286564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286560u;
        // 0x286564: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286568u;
        goto label_286568;
    }
    ctx->pc = 0x286560u;
    {
        const bool branch_taken_0x286560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286560u;
        // 0x286564: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286560) {
            ctx->pc = 0x286508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286508;
        }
    }
    ctx->pc = 0x286568u;
label_286568:
    // 0x286568: 0x1880000e  blez        $a0, . + 4 + (0xE << 2)
label_28656c:
    if (ctx->pc == 0x28656Cu) {
        ctx->pc = 0x28656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286568u;
        // 0x28656c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286570u;
        goto label_286570;
    }
    ctx->pc = 0x286568u;
    {
        const bool branch_taken_0x286568 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x28656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286568u;
        // 0x28656c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286568) {
            ctx->pc = 0x2865A4u;
            goto label_2865a4;
        }
    }
    ctx->pc = 0x286570u;
label_286570:
    // 0x286570: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x286570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_286574:
    // 0x286574: 0x40f809  jalr        $v0
label_286578:
    if (ctx->pc == 0x286578u) {
        ctx->pc = 0x286578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286574u;
        // 0x286578: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28657Cu;
        goto label_28657c;
    }
    ctx->pc = 0x286574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28657Cu);
        ctx->pc = 0x286578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286574u;
        // 0x286578: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286574u, 0x28657Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28657Cu;
label_28657c:
    // 0x28657c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
label_286580:
    if (ctx->pc == 0x286580u) {
        ctx->pc = 0x286580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28657Cu;
        // 0x286580: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286584u;
        goto label_286584;
    }
    ctx->pc = 0x28657Cu;
    {
        const bool branch_taken_0x28657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28657Cu;
        // 0x286580: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28657c) {
            ctx->pc = 0x286508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286508;
        }
    }
    ctx->pc = 0x286584u;
label_286584:
    // 0x286584: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_286588:
    // 0x286588: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x286588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28658c:
    // 0x28658c: 0xc093546  jal         func_24D518
label_286590:
    if (ctx->pc == 0x286590u) {
        ctx->pc = 0x286590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28658Cu;
        // 0x286590: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286594u;
        goto label_286594;
    }
    ctx->pc = 0x28658Cu;
    SET_GPR_U32(ctx, 31, 0x286594u);
    ctx->pc = 0x286590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28658Cu;
    // 0x286590: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x28658Cu, 0x286594u)) {
        return;
    }
    ctx->pc = 0x286594u;
label_286594:
    // 0x286594: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_286598:
    if (ctx->pc == 0x286598u) {
        ctx->pc = 0x286598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286594u;
        // 0x286598: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28659Cu;
        goto label_28659c;
    }
    ctx->pc = 0x286594u;
    {
        const bool branch_taken_0x286594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286594) {
            ctx->pc = 0x286598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286594u;
            // 0x286598: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2865ACu;
            goto label_2865ac;
        }
    }
    ctx->pc = 0x28659Cu;
label_28659c:
    // 0x28659c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2865a0:
    if (ctx->pc == 0x2865A0u) {
        ctx->pc = 0x2865A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28659Cu;
        // 0x2865a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865A4u;
        goto label_2865a4;
    }
    ctx->pc = 0x28659Cu;
    {
        const bool branch_taken_0x28659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28659Cu;
        // 0x2865a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28659c) {
            ctx->pc = 0x2865C0u;
            goto label_2865c0;
        }
    }
    ctx->pc = 0x2865A4u;
label_2865a4:
    // 0x2865a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2865a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2865a8:
    // 0x2865a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2865a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2865ac:
    // 0x2865ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2865acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2865b0:
    // 0x2865b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2865b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2865b4:
    // 0x2865b4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2865b8:
    if (ctx->pc == 0x2865B8u) {
        ctx->pc = 0x2865B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865B4u;
        // 0x2865b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865BCu;
        goto label_2865bc;
    }
    ctx->pc = 0x2865B4u;
    {
        const bool branch_taken_0x2865b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865B4u;
        // 0x2865b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865b4) {
            ctx->pc = 0x286550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286550;
        }
    }
    ctx->pc = 0x2865BCu;
label_2865bc:
    // 0x2865bc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2865bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2865c0:
    // 0x2865c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2865c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2865c4:
    // 0x2865c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2865c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2865c8:
    // 0x2865c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2865c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2865cc:
    // 0x2865cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2865ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2865d0:
    // 0x2865d0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2865d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2865d4:
    // 0x2865d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2865d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2865d8:
    // 0x2865d8: 0x3e00008  jr          $ra
label_2865dc:
    if (ctx->pc == 0x2865DCu) {
        ctx->pc = 0x2865DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865D8u;
        // 0x2865dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865E0u;
        goto label_fallthrough_0x2865d8;
    }
    ctx->pc = 0x2865D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865D8u;
        // 0x2865dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2865d8:
    ctx->pc = 0x2865E0u;
}
