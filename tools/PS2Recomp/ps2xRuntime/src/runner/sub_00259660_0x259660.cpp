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

// Function: sub_00259660
// Address: 0x259660 - 0x2597f8
void sub_00259660_0x259660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259660_0x259660");
#endif

    switch (ctx->pc) {
        case 0x259660u: goto label_259660;
        case 0x259664u: goto label_259664;
        case 0x259668u: goto label_259668;
        case 0x25966cu: goto label_25966c;
        case 0x259670u: goto label_259670;
        case 0x259674u: goto label_259674;
        case 0x259678u: goto label_259678;
        case 0x25967cu: goto label_25967c;
        case 0x259680u: goto label_259680;
        case 0x259684u: goto label_259684;
        case 0x259688u: goto label_259688;
        case 0x25968cu: goto label_25968c;
        case 0x259690u: goto label_259690;
        case 0x259694u: goto label_259694;
        case 0x259698u: goto label_259698;
        case 0x25969cu: goto label_25969c;
        case 0x2596a0u: goto label_2596a0;
        case 0x2596a4u: goto label_2596a4;
        case 0x2596a8u: goto label_2596a8;
        case 0x2596acu: goto label_2596ac;
        case 0x2596b0u: goto label_2596b0;
        case 0x2596b4u: goto label_2596b4;
        case 0x2596b8u: goto label_2596b8;
        case 0x2596bcu: goto label_2596bc;
        case 0x2596c0u: goto label_2596c0;
        case 0x2596c4u: goto label_2596c4;
        case 0x2596c8u: goto label_2596c8;
        case 0x2596ccu: goto label_2596cc;
        case 0x2596d0u: goto label_2596d0;
        case 0x2596d4u: goto label_2596d4;
        case 0x2596d8u: goto label_2596d8;
        case 0x2596dcu: goto label_2596dc;
        case 0x2596e0u: goto label_2596e0;
        case 0x2596e4u: goto label_2596e4;
        case 0x2596e8u: goto label_2596e8;
        case 0x2596ecu: goto label_2596ec;
        case 0x2596f0u: goto label_2596f0;
        case 0x2596f4u: goto label_2596f4;
        case 0x2596f8u: goto label_2596f8;
        case 0x2596fcu: goto label_2596fc;
        case 0x259700u: goto label_259700;
        case 0x259704u: goto label_259704;
        case 0x259708u: goto label_259708;
        case 0x25970cu: goto label_25970c;
        case 0x259710u: goto label_259710;
        case 0x259714u: goto label_259714;
        case 0x259718u: goto label_259718;
        case 0x25971cu: goto label_25971c;
        case 0x259720u: goto label_259720;
        case 0x259724u: goto label_259724;
        case 0x259728u: goto label_259728;
        case 0x25972cu: goto label_25972c;
        case 0x259730u: goto label_259730;
        case 0x259734u: goto label_259734;
        case 0x259738u: goto label_259738;
        case 0x25973cu: goto label_25973c;
        case 0x259740u: goto label_259740;
        case 0x259744u: goto label_259744;
        case 0x259748u: goto label_259748;
        case 0x25974cu: goto label_25974c;
        case 0x259750u: goto label_259750;
        case 0x259754u: goto label_259754;
        case 0x259758u: goto label_259758;
        case 0x25975cu: goto label_25975c;
        case 0x259760u: goto label_259760;
        case 0x259764u: goto label_259764;
        case 0x259768u: goto label_259768;
        case 0x25976cu: goto label_25976c;
        case 0x259770u: goto label_259770;
        case 0x259774u: goto label_259774;
        case 0x259778u: goto label_259778;
        case 0x25977cu: goto label_25977c;
        case 0x259780u: goto label_259780;
        case 0x259784u: goto label_259784;
        case 0x259788u: goto label_259788;
        case 0x25978cu: goto label_25978c;
        case 0x259790u: goto label_259790;
        case 0x259794u: goto label_259794;
        case 0x259798u: goto label_259798;
        case 0x25979cu: goto label_25979c;
        case 0x2597a0u: goto label_2597a0;
        case 0x2597a4u: goto label_2597a4;
        case 0x2597a8u: goto label_2597a8;
        case 0x2597acu: goto label_2597ac;
        case 0x2597b0u: goto label_2597b0;
        case 0x2597b4u: goto label_2597b4;
        case 0x2597b8u: goto label_2597b8;
        case 0x2597bcu: goto label_2597bc;
        case 0x2597c0u: goto label_2597c0;
        case 0x2597c4u: goto label_2597c4;
        case 0x2597c8u: goto label_2597c8;
        case 0x2597ccu: goto label_2597cc;
        case 0x2597d0u: goto label_2597d0;
        case 0x2597d4u: goto label_2597d4;
        case 0x2597d8u: goto label_2597d8;
        case 0x2597dcu: goto label_2597dc;
        case 0x2597e0u: goto label_2597e0;
        case 0x2597e4u: goto label_2597e4;
        case 0x2597e8u: goto label_2597e8;
        case 0x2597ecu: goto label_2597ec;
        case 0x2597f0u: goto label_2597f0;
        case 0x2597f4u: goto label_2597f4;
        default: break;
    }

    ctx->pc = 0x259660u;

label_259660:
    // 0x259660: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x259660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_259664:
    // 0x259664: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x259664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_259668:
    // 0x259668: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x259668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_25966c:
    // 0x25966c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x25966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_259670:
    // 0x259670: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x259670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_259674:
    // 0x259674: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x259674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_259678:
    // 0x259678: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x259678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_25967c:
    // 0x25967c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_259680:
    // 0x259680: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x259680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259684:
    // 0x259684: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x259684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_259688:
    // 0x259688: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x259688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25968c:
    // 0x25968c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x25968cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_259690:
    // 0x259690: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x259690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_259694:
    // 0x259694: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x259694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_259698:
    // 0x259698: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x259698u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25969c:
    // 0x25969c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x25969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_2596a0:
    // 0x2596a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2596a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2596a4:
    // 0x2596a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2596a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2596a8:
    // 0x2596a8: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x2596a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_2596ac:
    // 0x2596ac: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x2596acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_2596b0:
    // 0x2596b0: 0x40f809  jalr        $v0
label_2596b4:
    if (ctx->pc == 0x2596B4u) {
        ctx->pc = 0x2596B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596B0u;
        // 0x2596b4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596B8u;
        goto label_2596b8;
    }
    ctx->pc = 0x2596B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2596B8u);
        ctx->pc = 0x2596B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596B0u;
        // 0x2596b4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2596B0u, 0x2596B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2596B8u;
label_2596b8:
    // 0x2596b8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2596b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_2596bc:
    // 0x2596bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2596bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2596c0:
    // 0x2596c0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2596c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2596c4:
    // 0x2596c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2596c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2596c8:
    // 0x2596c8: 0x34e70502  ori         $a3, $a3, 0x502
    ctx->pc = 0x2596c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
label_2596cc:
    // 0x2596cc: 0xc0930c4  jal         func_24C310
label_2596d0:
    if (ctx->pc == 0x2596D0u) {
        ctx->pc = 0x2596D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596CCu;
        // 0x2596d0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596D4u;
        goto label_2596d4;
    }
    ctx->pc = 0x2596CCu;
    SET_GPR_U32(ctx, 31, 0x2596D4u);
    ctx->pc = 0x2596D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596CCu;
    // 0x2596d0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x2596CCu, 0x2596D4u)) {
        return;
    }
    ctx->pc = 0x2596D4u;
label_2596d4:
    // 0x2596d4: 0x162842  srl         $a1, $s6, 1
    ctx->pc = 0x2596d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_2596d8:
    // 0x2596d8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2596d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_2596dc:
    // 0x2596dc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2596dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2596e0:
    // 0x2596e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2596e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2596e4:
    // 0x2596e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2596e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2596e8:
    // 0x2596e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2596e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2596ec:
    // 0x2596ec: 0xc0930c4  jal         func_24C310
label_2596f0:
    if (ctx->pc == 0x2596F0u) {
        ctx->pc = 0x2596F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596ECu;
        // 0x2596f0: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596F4u;
        goto label_2596f4;
    }
    ctx->pc = 0x2596ECu;
    SET_GPR_U32(ctx, 31, 0x2596F4u);
    ctx->pc = 0x2596F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596ECu;
    // 0x2596f0: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x2596ECu, 0x2596F4u)) {
        return;
    }
    ctx->pc = 0x2596F4u;
label_2596f4:
    // 0x2596f4: 0x12c00033  beqz        $s6, . + 4 + (0x33 << 2)
label_2596f8:
    if (ctx->pc == 0x2596F8u) {
        ctx->pc = 0x2596F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596F4u;
        // 0x2596f8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596FCu;
        goto label_2596fc;
    }
    ctx->pc = 0x2596F4u;
    {
        const bool branch_taken_0x2596f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596F4u;
        // 0x2596f8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596f4) {
            ctx->pc = 0x2597C4u;
            goto label_2597c4;
        }
    }
    ctx->pc = 0x2596FCu;
label_2596fc:
    // 0x2596fc: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2596fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_259700:
    // 0x259700: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x259700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259704:
    // 0x259704: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x259704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259708:
    // 0x259708: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x259708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25970c:
    // 0x25970c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25970cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_259710:
    // 0x259710: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x259710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_259714:
    // 0x259714: 0x40f809  jalr        $v0
label_259718:
    if (ctx->pc == 0x259718u) {
        ctx->pc = 0x259718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259714u;
        // 0x259718: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25971Cu;
        goto label_25971c;
    }
    ctx->pc = 0x259714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25971Cu);
        ctx->pc = 0x259718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259714u;
        // 0x259718: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259714u, 0x25971Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25971Cu;
label_25971c:
    // 0x25971c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25971cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_259720:
    // 0x259720: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x259720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259724:
    // 0x259724: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x259724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
label_259728:
    // 0x259728: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x259728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25972c:
    // 0x25972c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x25972cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259730:
    // 0x259730: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x259730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_259734:
    // 0x259734: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x259734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_259738:
    // 0x259738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x259738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25973c:
    // 0x25973c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x25973cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_259740:
    // 0x259740: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x259740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_259744:
    // 0x259744: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x259744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_259748:
    // 0x259748: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x259748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25974c:
    // 0x25974c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x25974cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_259750:
    // 0x259750: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x259750u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_259754:
    // 0x259754: 0x96270002  lhu         $a3, 0x2($s1)
    ctx->pc = 0x259754u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_259758:
    // 0x259758: 0xc09651c  jal         func_259470
label_25975c:
    if (ctx->pc == 0x25975Cu) {
        ctx->pc = 0x25975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259758u;
        // 0x25975c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259760u;
        goto label_259760;
    }
    ctx->pc = 0x259758u;
    SET_GPR_U32(ctx, 31, 0x259760u);
    ctx->pc = 0x25975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259758u;
    // 0x25975c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259470u, 0x259758u, 0x259760u)) {
        return;
    }
    ctx->pc = 0x259760u;
label_259760:
    // 0x259760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x259760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_259764:
    // 0x259764: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x259764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259768:
    // 0x259768: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x259768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25976c:
    // 0x25976c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x25976cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259770:
    // 0x259770: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x259770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_259774:
    // 0x259774: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x259774u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_259778:
    // 0x259778: 0x96270004  lhu         $a3, 0x4($s1)
    ctx->pc = 0x259778u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_25977c:
    // 0x25977c: 0xc09651c  jal         func_259470
label_259780:
    if (ctx->pc == 0x259780u) {
        ctx->pc = 0x259780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25977Cu;
        // 0x259780: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259784u;
        goto label_259784;
    }
    ctx->pc = 0x25977Cu;
    SET_GPR_U32(ctx, 31, 0x259784u);
    ctx->pc = 0x259780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25977Cu;
    // 0x259780: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259470u, 0x25977Cu, 0x259784u)) {
        return;
    }
    ctx->pc = 0x259784u;
label_259784:
    // 0x259784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x259784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_259788:
    // 0x259788: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x259788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25978c:
    // 0x25978c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_259790:
    // 0x259790: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x259790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259794:
    // 0x259794: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x259794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_259798:
    // 0x259798: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x259798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25979c:
    // 0x25979c: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x25979cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2597a0:
    // 0x2597a0: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x2597a0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2597a4:
    // 0x2597a4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2597a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2597a8:
    // 0x2597a8: 0xc09651c  jal         func_259470
label_2597ac:
    if (ctx->pc == 0x2597ACu) {
        ctx->pc = 0x2597ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597A8u;
        // 0x2597ac: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597B0u;
        goto label_2597b0;
    }
    ctx->pc = 0x2597A8u;
    SET_GPR_U32(ctx, 31, 0x2597B0u);
    ctx->pc = 0x2597ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597A8u;
    // 0x2597ac: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259470u, 0x2597A8u, 0x2597B0u)) {
        return;
    }
    ctx->pc = 0x2597B0u;
label_2597b0:
    // 0x2597b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2597b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2597b4:
    // 0x2597b4: 0x256202b  sltu        $a0, $s2, $s6
    ctx->pc = 0x2597b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_2597b8:
    // 0x2597b8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2597b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2597bc:
    // 0x2597bc: 0x1480ffd2  bnez        $a0, . + 4 + (-0x2E << 2)
label_2597c0:
    if (ctx->pc == 0x2597C0u) {
        ctx->pc = 0x2597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597BCu;
        // 0x2597c0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597C4u;
        goto label_2597c4;
    }
    ctx->pc = 0x2597BCu;
    {
        const bool branch_taken_0x2597bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597BCu;
        // 0x2597c0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597bc) {
            ctx->pc = 0x259708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259708;
        }
    }
    ctx->pc = 0x2597C4u;
label_2597c4:
    // 0x2597c4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2597c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2597c8:
    // 0x2597c8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2597c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2597cc:
    // 0x2597cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2597ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2597d0:
    // 0x2597d0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2597d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2597d4:
    // 0x2597d4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2597d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2597d8:
    // 0x2597d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2597d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2597dc:
    // 0x2597dc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2597dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2597e0:
    // 0x2597e0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2597e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2597e4:
    // 0x2597e4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2597e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2597e8:
    // 0x2597e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2597e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2597ec:
    // 0x2597ec: 0x3e00008  jr          $ra
label_2597f0:
    if (ctx->pc == 0x2597F0u) {
        ctx->pc = 0x2597F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597ECu;
        // 0x2597f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597F4u;
        goto label_2597f4;
    }
    ctx->pc = 0x2597ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2597F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597ECu;
        // 0x2597f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2597ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2597F4u;
label_2597f4:
    // 0x2597f4: 0x0  nop
    ctx->pc = 0x2597f4u;
    // NOP
    ctx->pc = 0x2597f8u;
}
