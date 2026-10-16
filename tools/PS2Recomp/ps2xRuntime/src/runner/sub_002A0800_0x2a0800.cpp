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

// Function: sub_002A0800
// Address: 0x2a0800 - 0x2a1758
void sub_002A0800_0x2a0800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0800_0x2a0800");
#endif

    switch (ctx->pc) {
        case 0x2a0848u: goto label_2a0848;
        case 0x2a0854u: goto label_2a0854;
        case 0x2a0860u: goto label_2a0860;
        case 0x2a086cu: goto label_2a086c;
        case 0x2a0878u: goto label_2a0878;
        case 0x2a0884u: goto label_2a0884;
        case 0x2a0890u: goto label_2a0890;
        case 0x2a0900u: goto label_2a0900;
        case 0x2a0958u: goto label_2a0958;
        case 0x2a09d0u: goto label_2a09d0;
        case 0x2a0a20u: goto label_2a0a20;
        case 0x2a0a40u: goto label_2a0a40;
        case 0x2a0b70u: goto label_2a0b70;
        case 0x2a0bc8u: goto label_2a0bc8;
        case 0x2a0c64u: goto label_2a0c64;
        case 0x2a0c80u: goto label_2a0c80;
        case 0x2a0cb0u: goto label_2a0cb0;
        case 0x2a0cbcu: goto label_2a0cbc;
        case 0x2a0cd4u: goto label_2a0cd4;
        case 0x2a0ce0u: goto label_2a0ce0;
        case 0x2a0d5cu: goto label_2a0d5c;
        case 0x2a0d74u: goto label_2a0d74;
        case 0x2a0da4u: goto label_2a0da4;
        case 0x2a0de0u: goto label_2a0de0;
        case 0x2a0dfcu: goto label_2a0dfc;
        case 0x2a0e04u: goto label_2a0e04;
        case 0x2a0e30u: goto label_2a0e30;
        case 0x2a0e50u: goto label_2a0e50;
        case 0x2a0eacu: goto label_2a0eac;
        case 0x2a0f40u: goto label_2a0f40;
        case 0x2a0f68u: goto label_2a0f68;
        case 0x2a0f88u: goto label_2a0f88;
        case 0x2a0fccu: goto label_2a0fcc;
        case 0x2a0fdcu: goto label_2a0fdc;
        case 0x2a0ff0u: goto label_2a0ff0;
        case 0x2a0ffcu: goto label_2a0ffc;
        case 0x2a1008u: goto label_2a1008;
        case 0x2a1010u: goto label_2a1010;
        case 0x2a1018u: goto label_2a1018;
        case 0x2a1024u: goto label_2a1024;
        case 0x2a102cu: goto label_2a102c;
        case 0x2a1038u: goto label_2a1038;
        case 0x2a105cu: goto label_2a105c;
        case 0x2a106cu: goto label_2a106c;
        case 0x2a1088u: goto label_2a1088;
        case 0x2a1090u: goto label_2a1090;
        case 0x2a10a0u: goto label_2a10a0;
        case 0x2a10b0u: goto label_2a10b0;
        case 0x2a11a0u: goto label_2a11a0;
        case 0x2a11acu: goto label_2a11ac;
        case 0x2a11bcu: goto label_2a11bc;
        case 0x2a11d4u: goto label_2a11d4;
        case 0x2a11e8u: goto label_2a11e8;
        case 0x2a127cu: goto label_2a127c;
        case 0x2a12a4u: goto label_2a12a4;
        case 0x2a12bcu: goto label_2a12bc;
        case 0x2a12d4u: goto label_2a12d4;
        case 0x2a132cu: goto label_2a132c;
        case 0x2a1338u: goto label_2a1338;
        case 0x2a1344u: goto label_2a1344;
        case 0x2a13fcu: goto label_2a13fc;
        case 0x2a1414u: goto label_2a1414;
        case 0x2a141cu: goto label_2a141c;
        case 0x2a1424u: goto label_2a1424;
        case 0x2a1438u: goto label_2a1438;
        case 0x2a1444u: goto label_2a1444;
        case 0x2a1450u: goto label_2a1450;
        case 0x2a145cu: goto label_2a145c;
        case 0x2a1484u: goto label_2a1484;
        case 0x2a148cu: goto label_2a148c;
        case 0x2a1498u: goto label_2a1498;
        case 0x2a14dcu: goto label_2a14dc;
        case 0x2a14f4u: goto label_2a14f4;
        case 0x2a1514u: goto label_2a1514;
        case 0x2a1528u: goto label_2a1528;
        case 0x2a153cu: goto label_2a153c;
        case 0x2a154cu: goto label_2a154c;
        case 0x2a1600u: goto label_2a1600;
        case 0x2a1614u: goto label_2a1614;
        case 0x2a1630u: goto label_2a1630;
        case 0x2a1644u: goto label_2a1644;
        case 0x2a1658u: goto label_2a1658;
        case 0x2a166cu: goto label_2a166c;
        case 0x2a1680u: goto label_2a1680;
        case 0x2a1698u: goto label_2a1698;
        case 0x2a16dcu: goto label_2a16dc;
        case 0x2a16e4u: goto label_2a16e4;
        case 0x2a16ecu: goto label_2a16ec;
        case 0x2a16f4u: goto label_2a16f4;
        case 0x2a16fcu: goto label_2a16fc;
        case 0x2a1704u: goto label_2a1704;
        case 0x2a1728u: goto label_2a1728;
        default: break;
    }

    ctx->pc = 0x2a0800u;

    // 0x2a0800: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x2a0800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x2a0804: 0xffb001f0  sd          $s0, 0x1F0($sp)
    ctx->pc = 0x2a0804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 16));
    // 0x2a0808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a080c: 0xffb50240  sd          $s5, 0x240($sp)
    ctx->pc = 0x2a080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 21));
    // 0x2a0810: 0xffb40230  sd          $s4, 0x230($sp)
    ctx->pc = 0x2a0810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 20));
    // 0x2a0814: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a0814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0818: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x2a0818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
    // 0x2a081c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a081cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0820: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x2a0820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
    // 0x2a0824: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2a0824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0828: 0xffb70260  sd          $s7, 0x260($sp)
    ctx->pc = 0x2a0828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 23));
    // 0x2a082c: 0xffb60250  sd          $s6, 0x250($sp)
    ctx->pc = 0x2a082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 22));
    // 0x2a0830: 0xffb30220  sd          $s3, 0x220($sp)
    ctx->pc = 0x2a0830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 19));
    // 0x2a0834: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x2a0834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x2a0838: 0xffb10200  sd          $s1, 0x200($sp)
    ctx->pc = 0x2a0838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 17));
    // 0x2a083c: 0xafa50188  sw          $a1, 0x188($sp)
    ctx->pc = 0x2a083cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 5));
    // 0x2a0840: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A0840u;
    SET_GPR_U32(ctx, 31, 0x2A0848u);
    ctx->pc = 0x2A0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0840u;
    // 0x2a0844: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A0840u, 0x2A0848u)) {
        return;
    }
    ctx->pc = 0x2A0848u;
label_2a0848:
    // 0x2a0848: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x2a0848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x2a084c: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A084Cu;
    SET_GPR_U32(ctx, 31, 0x2A0854u);
    ctx->pc = 0x2A0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A084Cu;
    // 0x2a0850: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A084Cu, 0x2A0854u)) {
        return;
    }
    ctx->pc = 0x2A0854u;
label_2a0854:
    // 0x2a0854: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2a0854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x2a0858: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A0858u;
    SET_GPR_U32(ctx, 31, 0x2A0860u);
    ctx->pc = 0x2A085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0858u;
    // 0x2a085c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A0858u, 0x2A0860u)) {
        return;
    }
    ctx->pc = 0x2A0860u;
label_2a0860:
    // 0x2a0860: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x2a0860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x2a0864: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A0864u;
    SET_GPR_U32(ctx, 31, 0x2A086Cu);
    ctx->pc = 0x2A0868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0864u;
    // 0x2a0868: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A0864u, 0x2A086Cu)) {
        return;
    }
    ctx->pc = 0x2A086Cu;
label_2a086c:
    // 0x2a086c: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2a086cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2a0870: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A0870u;
    SET_GPR_U32(ctx, 31, 0x2A0878u);
    ctx->pc = 0x2A0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0870u;
    // 0x2a0874: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A0870u, 0x2A0878u)) {
        return;
    }
    ctx->pc = 0x2A0878u;
label_2a0878:
    // 0x2a0878: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x2a0878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x2a087c: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A087Cu;
    SET_GPR_U32(ctx, 31, 0x2A0884u);
    ctx->pc = 0x2A0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A087Cu;
    // 0x2a0880: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A087Cu, 0x2A0884u)) {
        return;
    }
    ctx->pc = 0x2A0884u;
label_2a0884:
    // 0x2a0884: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a0884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x2a0888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a088c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a088cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0890:
    // 0x2a0890: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x2a0890u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0894: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x2a0894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x2a0898: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A0898u;
    {
        const bool branch_taken_0x2a0898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0898u;
        // 0x2a089c: 0x92850000  lbu         $a1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0898) {
            ctx->pc = 0x2A08E8u;
            goto label_2a08e8;
        }
    }
    ctx->pc = 0x2A08A0u;
    // 0x2a08a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a08a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a08a8: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x2a08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x2a08ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a08acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a08b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a08b4: 0x800008  jr          $a0
    ctx->pc = 0x2A08B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A08BCu: goto label_2a08bc;
            case 0x2A08C4u: goto label_2a08c4;
            case 0x2A08D4u: goto label_2a08d4;
            case 0x2A08E0u: goto label_2a08e0;
            case 0x2A08E8u: goto label_2a08e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A08B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A08BCu;
label_2a08bc:
    // 0x2a08bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a08c0: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2a08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_2a08c4:
    // 0x2a08c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a08c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a08c8: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2a08c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a08cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A08CCu;
    {
        const bool branch_taken_0x2a08cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08CCu;
        // 0x2a08d0: 0x92850000  lbu         $a1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08cc) {
            ctx->pc = 0x2A08E8u;
            goto label_2a08e8;
        }
    }
    ctx->pc = 0x2A08D4u;
label_2a08d4:
    // 0x2a08d4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2a08d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08d8: 0x1000038a  b           . + 4 + (0x38A << 2)
    ctx->pc = 0x2A08D8u;
    {
        const bool branch_taken_0x2a08d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08D8u;
        // 0x2a08dc: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08d8) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A08E0u;
label_2a08e0:
    // 0x2a08e0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A08E0u;
    {
        const bool branch_taken_0x2a08e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08E0u;
        // 0x2a08e4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08e0) {
            ctx->pc = 0x2A0890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0890;
        }
    }
    ctx->pc = 0x2A08E8u;
label_2a08e8:
    // 0x2a08e8: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2a08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2a08ec: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2a08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a08f0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2a08f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a08f4: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A08F4u;
    {
        const bool branch_taken_0x2a08f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08F4u;
        // 0x2a08f8: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08f4) {
            ctx->pc = 0x2A0924u;
            goto label_2a0924;
        }
    }
    ctx->pc = 0x2A08FCu;
    // 0x2a08fc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a08fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0900:
    // 0x2a0900: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a0900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a0904: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2a0904u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0908: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x2a0908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a090c: 0x0  nop
    ctx->pc = 0x2a090cu;
    // NOP
    // 0x2a0910: 0x0  nop
    ctx->pc = 0x2a0910u;
    // NOP
    // 0x2a0914: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A0914u;
    {
        const bool branch_taken_0x2a0914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a0914) {
            ctx->pc = 0x2A0900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0900;
        }
    }
    ctx->pc = 0x2A091Cu;
    // 0x2a091c: 0x10400379  beqz        $v0, . + 4 + (0x379 << 2)
    ctx->pc = 0x2A091Cu;
    {
        const bool branch_taken_0x2a091c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A091Cu;
        // 0x2a0920: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a091c) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A0924u;
label_2a0924:
    // 0x2a0924: 0xafb40194  sw          $s4, 0x194($sp)
    ctx->pc = 0x2a0924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 20));
    // 0x2a0928: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2a0928u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a092c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a092cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0930: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x2a0930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x2a0934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a0934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0938: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2a0938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2a093c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A093Cu;
    {
        const bool branch_taken_0x2a093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A093Cu;
        // 0x2a0940: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a093c) {
            ctx->pc = 0x2A09A8u;
            goto label_2a09a8;
        }
    }
    ctx->pc = 0x2A0944u;
    // 0x2a0944: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2a0944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2a0948: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A0948u;
    {
        const bool branch_taken_0x2a0948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0948u;
        // 0x2a094c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0948) {
            ctx->pc = 0x2A09ACu;
            goto label_2a09ac;
        }
    }
    ctx->pc = 0x2A0950u;
    // 0x2a0950: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2a0950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a0954: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x2a0954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_2a0958:
    // 0x2a0958: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0958u;
    {
        const bool branch_taken_0x2a0958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0958u;
        // 0x2a095c: 0x8fa50198  lw          $a1, 0x198($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0958) {
            ctx->pc = 0x2A0974u;
            goto label_2a0974;
        }
    }
    ctx->pc = 0x2A0960u;
    // 0x2a0960: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2a0960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a0964: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2a0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a0968: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2a0968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2a096c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A096Cu;
    {
        const bool branch_taken_0x2a096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A096Cu;
        // 0x2a0970: 0xafa20198  sw          $v0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a096c) {
            ctx->pc = 0x2A0988u;
            goto label_2a0988;
        }
    }
    ctx->pc = 0x2A0974u;
label_2a0974:
    // 0x2a0974: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x2a0974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a0978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0978u;
    {
        const bool branch_taken_0x2a0978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0978u;
        // 0x2a097c: 0x2432818  mult        $a1, $s2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0978) {
            ctx->pc = 0x2A0988u;
            goto label_2a0988;
        }
    }
    ctx->pc = 0x2A0980u;
    // 0x2a0980: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2a0980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a0984: 0x2452ffd0  addiu       $s2, $v0, -0x30
    ctx->pc = 0x2a0984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_2a0988:
    // 0x2a0988: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a0988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a098c: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a098cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0990: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2a0990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2a0994: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0994u;
    {
        const bool branch_taken_0x2a0994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0994u;
        // 0x2a0998: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0994) {
            ctx->pc = 0x2A09A8u;
            goto label_2a09a8;
        }
    }
    ctx->pc = 0x2A099Cu;
    // 0x2a099c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2a099cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2a09a0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A09A0u;
    {
        const bool branch_taken_0x2a09a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09A0u;
        // 0x2a09a4: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09a0) {
            ctx->pc = 0x2A0958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0958;
        }
    }
    ctx->pc = 0x2A09A8u;
label_2a09a8:
    // 0x2a09a8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2a09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2a09ac:
    // 0x2a09ac: 0x14820051  bne         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2A09ACu;
    {
        const bool branch_taken_0x2a09ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09ACu;
        // 0x2a09b0: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09ac) {
            ctx->pc = 0x2A0AF4u;
            goto label_2a0af4;
        }
    }
    ctx->pc = 0x2A09B4u;
    // 0x2a09b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a09b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a09b8: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A09B8u;
    {
        const bool branch_taken_0x2a09b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09B8u;
        // 0x2a09bc: 0x82840000  lb          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09b8) {
            ctx->pc = 0x2A0A10u;
            goto label_2a0a10;
        }
    }
    ctx->pc = 0x2A09C0u;
    // 0x2a09c0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2a09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a09c4: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A09C4u;
    {
        const bool branch_taken_0x2a09c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a09c4) {
            ctx->pc = 0x2A09C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A09C4u;
            // 0x2a09c8: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A09F0u;
            goto label_2a09f0;
        }
    }
    ctx->pc = 0x2A09CCu;
    // 0x2a09cc: 0x0  nop
    ctx->pc = 0x2a09ccu;
    // NOP
label_2a09d0:
    // 0x2a09d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a09d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a09d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a09d8: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a09d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a09dc: 0x0  nop
    ctx->pc = 0x2a09dcu;
    // NOP
    // 0x2a09e0: 0x0  nop
    ctx->pc = 0x2a09e0u;
    // NOP
    // 0x2a09e4: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A09E4u;
    {
        const bool branch_taken_0x2a09e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a09e4) {
            ctx->pc = 0x2A09D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a09d0;
        }
    }
    ctx->pc = 0x2A09ECu;
    // 0x2a09ec: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2a09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_2a09f0:
    // 0x2a09f0: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2a09f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a09f4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2A09F4u;
    {
        const bool branch_taken_0x2a09f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09F4u;
        // 0x2a09f8: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09f4) {
            ctx->pc = 0x2A0AF8u;
            goto label_2a0af8;
        }
    }
    ctx->pc = 0x2A09FCu;
    // 0x2a09fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a09fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a00: 0x2485ffd0  addiu       $a1, $a0, -0x30
    ctx->pc = 0x2a0a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2a0a04: 0xafb40194  sw          $s4, 0x194($sp)
    ctx->pc = 0x2a0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 20));
    // 0x2a0a08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0A08u;
    {
        const bool branch_taken_0x2a0a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A08u;
        // 0x2a0a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a08) {
            ctx->pc = 0x2A0A20u;
            goto label_2a0a20;
        }
    }
    ctx->pc = 0x2A0A10u;
label_2a0a10:
    // 0x2a0a10: 0x2485ffd0  addiu       $a1, $a0, -0x30
    ctx->pc = 0x2a0a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2a0a14: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x2a0a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a0a18: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A0A18u;
    {
        const bool branch_taken_0x2a0a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A18u;
        // 0x2a0a1c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a18) {
            ctx->pc = 0x2A0AF8u;
            goto label_2a0af8;
        }
    }
    ctx->pc = 0x2A0A20u;
label_2a0a20:
    // 0x2a0a20: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A0A20u;
    {
        const bool branch_taken_0x2a0a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A20u;
        // 0x2a0a24: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a20) {
            ctx->pc = 0x2A0AD4u;
            goto label_2a0ad4;
        }
    }
    ctx->pc = 0x2A0A28u;
    // 0x2a0a28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0a2c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2a0a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a0a30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A0A30u;
    {
        const bool branch_taken_0x2a0a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A30u;
        // 0x2a0a34: 0x1074021  addu        $t0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a30) {
            ctx->pc = 0x2A0A88u;
            goto label_2a0a88;
        }
    }
    ctx->pc = 0x2A0A38u;
    // 0x2a0a38: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2a0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a0a3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a0a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0a40:
    // 0x2a0a40: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2a0a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a0a44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0A44u;
    {
        const bool branch_taken_0x2a0a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A44u;
        // 0x2a0a48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a44) {
            ctx->pc = 0x2A0A60u;
            goto label_2a0a60;
        }
    }
    ctx->pc = 0x2A0A4Cu;
    // 0x2a0a4c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2a0a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2a0a50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a0a54: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a0a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a0a58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0A58u;
    {
        const bool branch_taken_0x2a0a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A58u;
        // 0x2a0a5c: 0xafa40198  sw          $a0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a58) {
            ctx->pc = 0x2A0A70u;
            goto label_2a0a70;
        }
    }
    ctx->pc = 0x2A0A60u;
label_2a0a60:
    // 0x2a0a60: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x2a0a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2a0a64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0A64u;
    {
        const bool branch_taken_0x2a0a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A64u;
        // 0x2a0a68: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a64) {
            ctx->pc = 0x2A0A70u;
            goto label_2a0a70;
        }
    }
    ctx->pc = 0x2A0A6Cu;
    // 0x2a0a6c: 0x2429018  mult        $s2, $s2, $v0
    ctx->pc = 0x2a0a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_2a0a70:
    // 0x2a0a70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a0a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a0a74: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2a0a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a0a78: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A0A78u;
    {
        const bool branch_taken_0x2a0a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A78u;
        // 0x2a0a7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a78) {
            ctx->pc = 0x2A0A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0a40;
        }
    }
    ctx->pc = 0x2A0A80u;
    // 0x2a0a80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A80u;
    {
        const bool branch_taken_0x2a0a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A80u;
        // 0x2a0a84: 0x28420009  slti        $v0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a80) {
            ctx->pc = 0x2A0A94u;
            goto label_2a0a94;
        }
    }
    ctx->pc = 0x2A0A88u;
label_2a0a88:
    // 0x2a0a88: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2a0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a0a8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a0a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a90: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2a0a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_2a0a94:
    // 0x2a0a94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0A94u;
    {
        const bool branch_taken_0x2a0a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A94u;
        // 0x2a0a98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a94) {
            ctx->pc = 0x2A0AB8u;
            goto label_2a0ab8;
        }
    }
    ctx->pc = 0x2A0A9Cu;
    // 0x2a0a9c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2a0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2a0aa0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a0aa4: 0xa00013  mtlo        $a1
    ctx->pc = 0x2a0aa4u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x2a0aa8: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x2a0aa8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2a0aac: 0x2012  mflo        $a0
    ctx->pc = 0x2a0aacu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2a0ab0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0AB0u;
    {
        const bool branch_taken_0x2a0ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0AB0u;
        // 0x2a0ab4: 0xafa40198  sw          $a0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ab0) {
            ctx->pc = 0x2A0ACCu;
            goto label_2a0acc;
        }
    }
    ctx->pc = 0x2A0AB8u;
label_2a0ab8:
    // 0x2a0ab8: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x2a0ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2a0abc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0ABCu;
    {
        const bool branch_taken_0x2a0abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0ABCu;
        // 0x2a0ac0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0abc) {
            ctx->pc = 0x2A0ACCu;
            goto label_2a0acc;
        }
    }
    ctx->pc = 0x2A0AC4u;
    // 0x2a0ac4: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x2a0ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a0ac8: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x2a0ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2a0acc:
    // 0x2a0acc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0ACCu;
    {
        const bool branch_taken_0x2a0acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0ACCu;
        // 0x2a0ad0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0acc) {
            ctx->pc = 0x2A0AD8u;
            goto label_2a0ad8;
        }
    }
    ctx->pc = 0x2A0AD4u;
label_2a0ad4:
    // 0x2a0ad4: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2a0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a0ad8:
    // 0x2a0ad8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2a0ad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0adc: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a0adcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0ae0: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2a0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2a0ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a0ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ae8: 0x2ca3000a  sltiu       $v1, $a1, 0xA
    ctx->pc = 0x2a0ae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a0aec: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2A0AECu;
    {
        const bool branch_taken_0x2a0aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0aec) {
            ctx->pc = 0x2A0A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0a20;
        }
    }
    ctx->pc = 0x2A0AF4u;
label_2a0af4:
    // 0x2a0af4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2a0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2a0af8:
    // 0x2a0af8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0AF8u;
    {
        const bool branch_taken_0x2a0af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0AF8u;
        // 0x2a0afc: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0af8) {
            ctx->pc = 0x2A0B0Cu;
            goto label_2a0b0c;
        }
    }
    ctx->pc = 0x2A0B00u;
    // 0x2a0b00: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2a0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2a0b04: 0x1482004a  bne         $a0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2A0B04u;
    {
        const bool branch_taken_0x2a0b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0b04) {
            ctx->pc = 0x2A0C30u;
            goto label_2a0c30;
        }
    }
    ctx->pc = 0x2A0B0Cu;
label_2a0b0c:
    // 0x2a0b0c: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0B0Cu;
    {
        const bool branch_taken_0x2a0b0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b0c) {
            ctx->pc = 0x2A0B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0B0Cu;
            // 0x2a0b10: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0B2Cu;
            goto label_2a0b2c;
        }
    }
    ctx->pc = 0x2A0B14u;
    // 0x2a0b14: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0B14u;
    {
        const bool branch_taken_0x2a0b14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b14) {
            ctx->pc = 0x2A0B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0B14u;
            // 0x2a0b18: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0B2Cu;
            goto label_2a0b2c;
        }
    }
    ctx->pc = 0x2A0B1Cu;
    // 0x2a0b1c: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0B1Cu;
    {
        const bool branch_taken_0x2a0b1c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b1c) {
            ctx->pc = 0x2A0B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0B1Cu;
            // 0x2a0b20: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0B2Cu;
            goto label_2a0b2c;
        }
    }
    ctx->pc = 0x2A0B24u;
    // 0x2a0b24: 0x100002f7  b           . + 4 + (0x2F7 << 2)
    ctx->pc = 0x2A0B24u;
    {
        const bool branch_taken_0x2a0b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B24u;
        // 0x2a0b28: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b24) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A0B2Cu;
label_2a0b2c:
    // 0x2a0b2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a0b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a0b30: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2a0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2a0b34: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a0b34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0b38: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0B38u;
    {
        const bool branch_taken_0x2a0b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B38u;
        // 0x2a0b3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b38) {
            ctx->pc = 0x2A0B50u;
            goto label_2a0b50;
        }
    }
    ctx->pc = 0x2A0B40u;
    // 0x2a0b40: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2a0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2a0b44: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0B44u;
    {
        const bool branch_taken_0x2a0b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B44u;
        // 0x2a0b48: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b44) {
            ctx->pc = 0x2A0B5Cu;
            goto label_2a0b5c;
        }
    }
    ctx->pc = 0x2A0B4Cu;
    // 0x2a0b4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a0b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0b50:
    // 0x2a0b50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a0b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a0b54: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a0b54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0b58: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2a0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_2a0b5c:
    // 0x2a0b5c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2a0b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a0b60: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2A0B60u;
    {
        const bool branch_taken_0x2a0b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B60u;
        // 0x2a0b64: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b60) {
            ctx->pc = 0x2A0C2Cu;
            goto label_2a0c2c;
        }
    }
    ctx->pc = 0x2A0B68u;
    // 0x2a0b68: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0B68u;
    {
        const bool branch_taken_0x2a0b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0b68) {
            ctx->pc = 0x2A0B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0B68u;
            // 0x2a0b6c: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0B90u;
            goto label_2a0b90;
        }
    }
    ctx->pc = 0x2A0B70u;
label_2a0b70:
    // 0x2a0b70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a0b70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a0b74: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a0b74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0b78: 0x0  nop
    ctx->pc = 0x2a0b78u;
    // NOP
    // 0x2a0b7c: 0x0  nop
    ctx->pc = 0x2a0b7cu;
    // NOP
    // 0x2a0b80: 0x0  nop
    ctx->pc = 0x2a0b80u;
    // NOP
    // 0x2a0b84: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A0B84u;
    {
        const bool branch_taken_0x2a0b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0b84) {
            ctx->pc = 0x2A0B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0b70;
        }
    }
    ctx->pc = 0x2A0B8Cu;
    // 0x2a0b8c: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2a0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_2a0b90:
    // 0x2a0b90: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2a0b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a0b94: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A0B94u;
    {
        const bool branch_taken_0x2a0b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B94u;
        // 0x2a0b98: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b94) {
            ctx->pc = 0x2A0C24u;
            goto label_2a0c24;
        }
    }
    ctx->pc = 0x2A0B9Cu;
    // 0x2a0b9c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a0b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ba0: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x2a0ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x2a0ba4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a0ba4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a0ba8: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a0ba8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0bac: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2a0bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2a0bb0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A0BB0u;
    {
        const bool branch_taken_0x2a0bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0bb0) {
            ctx->pc = 0x2A0BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0BB0u;
            // 0x2a0bb4: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0BF8u;
            goto label_2a0bf8;
        }
    }
    ctx->pc = 0x2A0BB8u;
    // 0x2a0bb8: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2a0bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2a0bbc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0BBCu;
    {
        const bool branch_taken_0x2a0bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BBCu;
        // 0x2a0bc0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0bbc) {
            ctx->pc = 0x2A0BF4u;
            goto label_2a0bf4;
        }
    }
    ctx->pc = 0x2A0BC4u;
    // 0x2a0bc4: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_2a0bc8:
    // 0x2a0bc8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a0bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a0bcc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2a0bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a0bd0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2a0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a0bd4: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a0bd4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a0bd8: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2a0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2a0bdc: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2a0bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2a0be0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0BE0u;
    {
        const bool branch_taken_0x2a0be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BE0u;
        // 0x2a0be4: 0xafa3018c  sw          $v1, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0be0) {
            ctx->pc = 0x2A0BF4u;
            goto label_2a0bf4;
        }
    }
    ctx->pc = 0x2A0BE8u;
    // 0x2a0be8: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2a0be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2a0bec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A0BECu;
    {
        const bool branch_taken_0x2a0bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BECu;
        // 0x2a0bf0: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0bec) {
            ctx->pc = 0x2A0BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0bc8;
        }
    }
    ctx->pc = 0x2A0BF4u;
label_2a0bf4:
    // 0x2a0bf4: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2a0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_2a0bf8:
    // 0x2a0bf8: 0x2861023  subu        $v0, $s4, $a2
    ctx->pc = 0x2a0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2a0bfc: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x2a0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
    // 0x2a0c00: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2a0c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a0c04: 0x3463967f  ori         $v1, $v1, 0x967F
    ctx->pc = 0x2a0c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38527);
    // 0x2a0c08: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2a0c08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
    // 0x2a0c0c: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x2a0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x2a0c10: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2a0c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2a0c14: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2a0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a0c18: 0x89280b  movn        $a1, $a0, $t1
    ctx->pc = 0x2a0c18u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
    // 0x2a0c1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0C1Cu;
    {
        const bool branch_taken_0x2a0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C1Cu;
        // 0x2a0c20: 0xafa5018c  sw          $a1, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c1c) {
            ctx->pc = 0x2A0C30u;
            goto label_2a0c30;
        }
    }
    ctx->pc = 0x2A0C24u;
label_2a0c24:
    // 0x2a0c24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0C24u;
    {
        const bool branch_taken_0x2a0c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C24u;
        // 0x2a0c28: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c24) {
            ctx->pc = 0x2A0C30u;
            goto label_2a0c30;
        }
    }
    ctx->pc = 0x2A0C2Cu;
label_2a0c2c:
    // 0x2a0c2c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2a0c2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0c30:
    // 0x2a0c30: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0C30u;
    {
        const bool branch_taken_0x2a0c30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C30u;
        // 0x2a0c34: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c30) {
            ctx->pc = 0x2A0C44u;
            goto label_2a0c44;
        }
    }
    ctx->pc = 0x2A0C38u;
    // 0x2a0c38: 0x28a800b  movn        $s0, $s4, $t2
    ctx->pc = 0x2a0c38u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20));
    // 0x2a0c3c: 0x100002b1  b           . + 4 + (0x2B1 << 2)
    ctx->pc = 0x2A0C3Cu;
    {
        const bool branch_taken_0x2a0c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C3Cu;
        // 0x2a0c40: 0x207a00a  movz        $s4, $s0, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c3c) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A0C44u;
label_2a0c44:
    // 0x2a0c44: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x2a0c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2a0c48: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2a0c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0c4c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2a0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2a0c50: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2a0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a0c54: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x2a0c54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17));
    // 0x2a0c58: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x2a0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x2a0c5c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A0C5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0C64u);
    ctx->pc = 0x2A0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C5Cu;
    // 0x2a0c60: 0x236b00a  movz        $s6, $s1, $s6 (Delay Slot)
    if (GPR_U64(ctx, 22) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A0C5Cu, 0x2A0C64u)) {
        return;
    }
    ctx->pc = 0x2A0C64u;
label_2a0c64:
    // 0x2a0c64: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2a0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2a0c68: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0C68u;
    {
        const bool branch_taken_0x2a0c68 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2A0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C68u;
        // 0x2a0c6c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c68) {
            ctx->pc = 0x2A0C84u;
            goto label_2a0c84;
        }
    }
    ctx->pc = 0x2A0C70u;
    // 0x2a0c70: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2a0c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2a0c74: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a0c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a0c78: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A0C78u;
    SET_GPR_U32(ctx, 31, 0x2A0C80u);
    ctx->pc = 0x2A0C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C78u;
    // 0x2a0c7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A0C78u, 0x2A0C80u)) {
        return;
    }
    ctx->pc = 0x2A0C80u;
label_2a0c80:
    // 0x2a0c80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a0c80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0c84:
    // 0x2a0c84: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x2a0c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a0c88: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A0C88u;
    {
        const bool branch_taken_0x2a0c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C88u;
        // 0x2a0c8c: 0x2a220010  slti        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c88) {
            ctx->pc = 0x2A0CE8u;
            goto label_2a0ce8;
        }
    }
    ctx->pc = 0x2A0C90u;
    // 0x2a0c90: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2a0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2a0c94: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x2a0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x2a0c98: 0x2463df90  addiu       $v1, $v1, -0x2070
    ctx->pc = 0x2a0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958992));
    // 0x2a0c9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a0ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0ca4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a0ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ca8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0CA8u;
    SET_GPR_U32(ctx, 31, 0x2A0CB0u);
    ctx->pc = 0x2A0CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0CA8u;
    // 0x2a0cac: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0CA8u, 0x2A0CB0u)) {
        return;
    }
    ctx->pc = 0x2A0CB0u;
label_2a0cb0:
    // 0x2a0cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0cb4: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A0CB4u;
    SET_GPR_U32(ctx, 31, 0x2A0CBCu);
    ctx->pc = 0x2A0CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0CB4u;
    // 0x2a0cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A0CB4u, 0x2A0CBCu)) {
        return;
    }
    ctx->pc = 0x2A0CBCu;
label_2a0cbc:
    // 0x2a0cbc: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0CBCu;
    {
        const bool branch_taken_0x2a0cbc = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2A0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0CBCu;
        // 0x2a0cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cbc) {
            ctx->pc = 0x2A0CD8u;
            goto label_2a0cd8;
        }
    }
    ctx->pc = 0x2A0CC4u;
    // 0x2a0cc4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2a0cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2a0cc8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a0cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a0ccc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A0CCCu;
    SET_GPR_U32(ctx, 31, 0x2A0CD4u);
    ctx->pc = 0x2A0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0CCCu;
    // 0x2a0cd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A0CCCu, 0x2A0CD4u)) {
        return;
    }
    ctx->pc = 0x2A0CD4u;
label_2a0cd4:
    // 0x2a0cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0cd8:
    // 0x2a0cd8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A0CD8u;
    SET_GPR_U32(ctx, 31, 0x2A0CE0u);
    ctx->pc = 0x2A0CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0CD8u;
    // 0x2a0cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A0CD8u, 0x2A0CE0u)) {
        return;
    }
    ctx->pc = 0x2A0CE0u;
label_2a0ce0:
    // 0x2a0ce0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a0ce0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ce4: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x2a0ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_2a0ce8:
    // 0x2a0ce8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A0CE8u;
    {
        const bool branch_taken_0x2a0ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0CE8u;
        // 0x2a0cec: 0x8fa5018c  lw          $a1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ce8) {
            ctx->pc = 0x2A0DACu;
            goto label_2a0dac;
        }
    }
    ctx->pc = 0x2A0CF0u;
    // 0x2a0cf0: 0x10a00285  beqz        $a1, . + 4 + (0x285 << 2)
    ctx->pc = 0x2A0CF0u;
    {
        const bool branch_taken_0x2a0cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0CF0u;
        // 0x2a0cf4: 0x8fa20188  lw          $v0, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cf0) {
            ctx->pc = 0x2A1708u;
            goto label_2a1708;
        }
    }
    ctx->pc = 0x2A0CF8u;
    // 0x2a0cf8: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A0CF8u;
    {
        const bool branch_taken_0x2a0cf8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2A0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0CF8u;
        // 0x2a0cfc: 0x28a20017  slti        $v0, $a1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cf8) {
            ctx->pc = 0x2A0D7Cu;
            goto label_2a0d7c;
        }
    }
    ctx->pc = 0x2A0D00u;
    // 0x2a0d00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0D00u;
    {
        const bool branch_taken_0x2a0d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D00u;
        // 0x2a0d04: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d00) {
            ctx->pc = 0x2A0D1Cu;
            goto label_2a0d1c;
        }
    }
    ctx->pc = 0x2A0D08u;
    // 0x2a0d08: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2a0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a0d0c: 0x2442df90  addiu       $v0, $v0, -0x2070
    ctx->pc = 0x2a0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958992));
    // 0x2a0d10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A0D14u;
    {
        const bool branch_taken_0x2a0d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D14u;
        // 0x2a0d18: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d14) {
            ctx->pc = 0x2A0D6Cu;
            goto label_2a0d6c;
        }
    }
    ctx->pc = 0x2A0D1Cu;
label_2a0d1c:
    // 0x2a0d1c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2a0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a0d20: 0x713023  subu        $a2, $v1, $s1
    ctx->pc = 0x2a0d20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2a0d24: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x2a0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a0d28: 0x24c20016  addiu       $v0, $a2, 0x16
    ctx->pc = 0x2a0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22));
    // 0x2a0d2c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a0d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a0d30: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A0D30u;
    {
        const bool branch_taken_0x2a0d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D30u;
        // 0x2a0d34: 0x2331023  subu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d30) {
            ctx->pc = 0x2A0DB4u;
            goto label_2a0db4;
        }
    }
    ctx->pc = 0x2A0D38u;
    // 0x2a0d38: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x2a0d38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x2a0d3c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2a0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2a0d40: 0x2610df90  addiu       $s0, $s0, -0x2070
    ctx->pc = 0x2a0d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958992));
    // 0x2a0d44: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2a0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a0d48: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a0d4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d50: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2a0d50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0d54: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0D54u;
    SET_GPR_U32(ctx, 31, 0x2A0D5Cu);
    ctx->pc = 0x2A0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D54u;
    // 0x2a0d58: 0xafa3018c  sw          $v1, 0x18C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0D54u, 0x2A0D5Cu)) {
        return;
    }
    ctx->pc = 0x2A0D5Cu;
label_2a0d5c:
    // 0x2a0d5c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2a0d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a0d60: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2a0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a0d64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2a0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a0d68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d6c:
    // 0x2a0d6c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0D6Cu;
    SET_GPR_U32(ctx, 31, 0x2A0D74u);
    ctx->pc = 0x2A0D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D6Cu;
    // 0x2a0d70: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0D6Cu, 0x2A0D74u)) {
        return;
    }
    ctx->pc = 0x2A0D74u;
label_2a0d74:
    // 0x2a0d74: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x2A0D74u;
    {
        const bool branch_taken_0x2a0d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D74u;
        // 0x2a0d78: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d74) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A0D7Cu;
label_2a0d7c:
    // 0x2a0d7c: 0x28a2ffea  slti        $v0, $a1, -0x16
    ctx->pc = 0x2a0d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x2a0d80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A0D80u;
    {
        const bool branch_taken_0x2a0d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D80u;
        // 0x2a0d84: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d80) {
            ctx->pc = 0x2A0DB0u;
            goto label_2a0db0;
        }
    }
    ctx->pc = 0x2A0D88u;
    // 0x2a0d88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a0d8c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2a0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a0d90: 0x2442df90  addiu       $v0, $v0, -0x2070
    ctx->pc = 0x2a0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958992));
    // 0x2a0d94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0d9c: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2A0D9Cu;
    SET_GPR_U32(ctx, 31, 0x2A0DA4u);
    ctx->pc = 0x2A0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D9Cu;
    // 0x2a0da0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2A0D9Cu, 0x2A0DA4u)) {
        return;
    }
    ctx->pc = 0x2A0DA4u;
label_2a0da4:
    // 0x2a0da4: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x2A0DA4u;
    {
        const bool branch_taken_0x2a0da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DA4u;
        // 0x2a0da8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0da4) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A0DACu;
label_2a0dac:
    // 0x2a0dac: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x2a0dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_2a0db0:
    // 0x2a0db0: 0x2331023  subu        $v0, $s1, $s3
    ctx->pc = 0x2a0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_2a0db4:
    // 0x2a0db4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2a0db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a0db8: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2A0DB8u;
    {
        const bool branch_taken_0x2a0db8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2A0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DB8u;
        // 0x2a0dbc: 0x3206000f  andi        $a2, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0db8) {
            ctx->pc = 0x2A0F10u;
            goto label_2a0f10;
        }
    }
    ctx->pc = 0x2A0DC0u;
    // 0x2a0dc0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0DC0u;
    {
        const bool branch_taken_0x2a0dc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DC0u;
        // 0x2a0dc4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0dc0) {
            ctx->pc = 0x2A0DE4u;
            goto label_2a0de4;
        }
    }
    ctx->pc = 0x2A0DC8u;
    // 0x2a0dc8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2a0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2a0dcc: 0x2442df90  addiu       $v0, $v0, -0x2070
    ctx->pc = 0x2a0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958992));
    // 0x2a0dd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0dd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a0dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a0dd8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0DD8u;
    SET_GPR_U32(ctx, 31, 0x2A0DE0u);
    ctx->pc = 0x2A0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DD8u;
    // 0x2a0ddc: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0DD8u, 0x2A0DE0u)) {
        return;
    }
    ctx->pc = 0x2A0DE0u;
label_2a0de0:
    // 0x2a0de0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a0de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0de4:
    // 0x2a0de4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2a0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a0de8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2a0de8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2a0dec: 0x12000095  beqz        $s0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2A0DECu;
    {
        const bool branch_taken_0x2a0dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DECu;
        // 0x2a0df0: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0dec) {
            ctx->pc = 0x2A1044u;
            goto label_2a1044;
        }
    }
    ctx->pc = 0x2A0DF4u;
    // 0x2a0df4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0DF4u;
    {
        const bool branch_taken_0x2a0df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0df4) {
            ctx->pc = 0x2A0DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0DF4u;
            // 0x2a0df8: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E18u;
            goto label_2a0e18;
        }
    }
    ctx->pc = 0x2A0DFCu;
label_2a0dfc:
    // 0x2a0dfc: 0xc0c489a  jal         func_312268
    ctx->pc = 0x2A0DFCu;
    SET_GPR_U32(ctx, 31, 0x2A0E04u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x2A0DFCu, 0x2A0E04u)) {
        return;
    }
    ctx->pc = 0x2A0E04u;
label_2a0e04:
    // 0x2a0e04: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2a0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2a0e08: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2a0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2a0e0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a0e10: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x2A0E10u;
    {
        const bool branch_taken_0x2a0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E10u;
        // 0x2a0e14: 0xdc95cb50  ld          $s5, -0x34B0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 4), 4294953808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e10) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A0E18u;
label_2a0e18:
    // 0x2a0e18: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2A0E18u;
    {
        const bool branch_taken_0x2a0e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E18u;
        // 0x2a0e1c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e18) {
            ctx->pc = 0x2A1044u;
            goto label_2a1044;
        }
    }
    ctx->pc = 0x2A0E20u;
    // 0x2a0e20: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A0E20u;
    {
        const bool branch_taken_0x2a0e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E20u;
        // 0x2a0e24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e20) {
            ctx->pc = 0x2A0E6Cu;
            goto label_2a0e6c;
        }
    }
    ctx->pc = 0x2A0E28u;
    // 0x2a0e28: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x2a0e28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x2a0e2c: 0x0  nop
    ctx->pc = 0x2a0e2cu;
    // NOP
label_2a0e30:
    // 0x2a0e30: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2a0e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2a0e34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0E34u;
    {
        const bool branch_taken_0x2a0e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E34u;
        // 0x2a0e38: 0x2663e048  addiu       $v1, $s3, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e34) {
            ctx->pc = 0x2A0E54u;
            goto label_2a0e54;
        }
    }
    ctx->pc = 0x2A0E3Cu;
    // 0x2a0e3c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2a0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2a0e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0e44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e48: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0E48u;
    SET_GPR_U32(ctx, 31, 0x2A0E50u);
    ctx->pc = 0x2A0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E48u;
    // 0x2a0e4c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0E48u, 0x2A0E50u)) {
        return;
    }
    ctx->pc = 0x2A0E50u;
label_2a0e50:
    // 0x2a0e50: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a0e50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e54:
    // 0x2a0e54: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2a0e54u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2a0e58: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2a0e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0e5c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A0E5Cu;
    {
        const bool branch_taken_0x2a0e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E5Cu;
        // 0x2a0e60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e5c) {
            ctx->pc = 0x2A0E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0e30;
        }
    }
    ctx->pc = 0x2A0E64u;
    // 0x2a0e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0E64u;
    {
        const bool branch_taken_0x2a0e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E64u;
        // 0x2a0e68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e64) {
            ctx->pc = 0x2A0E74u;
            goto label_2a0e74;
        }
    }
    ctx->pc = 0x2A0E6Cu;
label_2a0e6c:
    // 0x2a0e6c: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x2a0e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x2a0e70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e74:
    // 0x2a0e74: 0x3c05fcb0  lui         $a1, 0xFCB0
    ctx->pc = 0x2a0e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64688 << 16));
    // 0x2a0e78: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x2a0e78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a0e7c: 0x2666e048  addiu       $a2, $s3, -0x1FB8
    ctx->pc = 0x2a0e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959176));
    // 0x2a0e80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a0e84: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2a0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2a0e88: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2a0e88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2a0e8c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2a0e8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2a0e90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a0e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a0e94: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x2a0e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x2a0e98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a0e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0e9c: 0x82a825  or          $s5, $a0, $v0
    ctx->pc = 0x2a0e9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2a0ea0: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2a0ea0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a0ea4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0EA4u;
    SET_GPR_U32(ctx, 31, 0x2A0EACu);
    ctx->pc = 0x2A0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0EA4u;
    // 0x2a0ea8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0EA4u, 0x2A0EACu)) {
        return;
    }
    ctx->pc = 0x2A0EACu;
label_2a0eac:
    // 0x2a0eac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a0eacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0eb0: 0x3c047ff0  lui         $a0, 0x7FF0
    ctx->pc = 0x2a0eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32752 << 16));
    // 0x2a0eb4: 0x3c037ca0  lui         $v1, 0x7CA0
    ctx->pc = 0x2a0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31904 << 16));
    // 0x2a0eb8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a0eb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a0ebc: 0x449024  and         $s2, $v0, $a0
    ctx->pc = 0x2a0ebcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a0ec0: 0x72182b  sltu        $v1, $v1, $s2
    ctx->pc = 0x2a0ec0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2a0ec4: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2A0EC4u;
    {
        const bool branch_taken_0x2a0ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EC4u;
        // 0x2a0ec8: 0x3c027c90  lui         $v0, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ec4) {
            ctx->pc = 0x2A0DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0dfc;
        }
    }
    ctx->pc = 0x2A0ECCu;
    // 0x2a0ecc: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2a0eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2a0ed0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0ED0u;
    {
        const bool branch_taken_0x2a0ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0ED0u;
        // 0x2a0ed4: 0x2f0b824  and         $s7, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ed0) {
            ctx->pc = 0x2A0EF0u;
            goto label_2a0ef0;
        }
    }
    ctx->pc = 0x2A0ED8u;
    // 0x2a0ed8: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2a0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2a0edc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a0edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a0ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a0ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0ee4: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x2a0ee4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x2a0ee8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2A0EE8u;
    {
        const bool branch_taken_0x2a0ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EE8u;
        // 0x2a0eec: 0x2f0a825  or          $s5, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ee8) {
            ctx->pc = 0x2A1044u;
            goto label_2a1044;
        }
    }
    ctx->pc = 0x2A0EF0u;
label_2a0ef0:
    // 0x2a0ef0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2a0ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ef4: 0x3c040350  lui         $a0, 0x350
    ctx->pc = 0x2a0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)848 << 16));
    // 0x2a0ef8: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x2a0ef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a0efc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0f00: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2a0f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2a0f04: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a0f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a0f08: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2A0F08u;
    {
        const bool branch_taken_0x2a0f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F08u;
        // 0x2a0f0c: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f08) {
            ctx->pc = 0x2A1044u;
            goto label_2a1044;
        }
    }
    ctx->pc = 0x2A0F10u;
label_2a0f10:
    // 0x2a0f10: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2A0F10u;
    {
        const bool branch_taken_0x2a0f10 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2A0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F10u;
        // 0x2a0f14: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f10) {
            ctx->pc = 0x2A1048u;
            goto label_2a1048;
        }
    }
    ctx->pc = 0x2A0F18u;
    // 0x2a0f18: 0x108023  negu        $s0, $s0
    ctx->pc = 0x2a0f18u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2a0f1c: 0x3206000f  andi        $a2, $s0, 0xF
    ctx->pc = 0x2a0f1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2a0f20: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0F20u;
    {
        const bool branch_taken_0x2a0f20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F20u;
        // 0x2a0f24: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f20) {
            ctx->pc = 0x2A0F44u;
            goto label_2a0f44;
        }
    }
    ctx->pc = 0x2A0F28u;
    // 0x2a0f28: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2a0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2a0f2c: 0x2442df90  addiu       $v0, $v0, -0x2070
    ctx->pc = 0x2a0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958992));
    // 0x2a0f30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a0f38: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2A0F38u;
    SET_GPR_U32(ctx, 31, 0x2A0F40u);
    ctx->pc = 0x2A0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F38u;
    // 0x2a0f3c: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2A0F38u, 0x2A0F40u)) {
        return;
    }
    ctx->pc = 0x2A0F40u;
label_2a0f40:
    // 0x2a0f40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a0f40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f44:
    // 0x2a0f44: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2a0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a0f48: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2a0f48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2a0f4c: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2A0F4Cu;
    {
        const bool branch_taken_0x2a0f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F4Cu;
        // 0x2a0f50: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f4c) {
            ctx->pc = 0x2A1044u;
            goto label_2a1044;
        }
    }
    ctx->pc = 0x2A0F54u;
    // 0x2a0f54: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2a0f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0f58: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A0F58u;
    {
        const bool branch_taken_0x2a0f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F58u;
        // 0x2a0f5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f58) {
            ctx->pc = 0x2A0FA4u;
            goto label_2a0fa4;
        }
    }
    ctx->pc = 0x2A0F60u;
    // 0x2a0f60: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x2a0f60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x2a0f64: 0x0  nop
    ctx->pc = 0x2a0f64u;
    // NOP
label_2a0f68:
    // 0x2a0f68: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2a0f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2a0f6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0F6Cu;
    {
        const bool branch_taken_0x2a0f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F6Cu;
        // 0x2a0f70: 0x2663e070  addiu       $v1, $s3, -0x1F90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f6c) {
            ctx->pc = 0x2A0F8Cu;
            goto label_2a0f8c;
        }
    }
    ctx->pc = 0x2A0F74u;
    // 0x2a0f74: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2a0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2a0f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0f7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f80: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0F80u;
    SET_GPR_U32(ctx, 31, 0x2A0F88u);
    ctx->pc = 0x2A0F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F80u;
    // 0x2a0f84: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0F80u, 0x2A0F88u)) {
        return;
    }
    ctx->pc = 0x2A0F88u;
label_2a0f88:
    // 0x2a0f88: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a0f88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f8c:
    // 0x2a0f8c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2a0f8cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2a0f90: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2a0f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0f94: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A0F94u;
    {
        const bool branch_taken_0x2a0f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F94u;
        // 0x2a0f98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f94) {
            ctx->pc = 0x2A0F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0f68;
        }
    }
    ctx->pc = 0x2A0F9Cu;
    // 0x2a0f9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0F9Cu;
    {
        const bool branch_taken_0x2a0f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F9Cu;
        // 0x2a0fa0: 0x2663e070  addiu       $v1, $s3, -0x1F90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f9c) {
            ctx->pc = 0x2A0FACu;
            goto label_2a0fac;
        }
    }
    ctx->pc = 0x2A0FA4u;
label_2a0fa4:
    // 0x2a0fa4: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x2a0fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x2a0fa8: 0x2663e070  addiu       $v1, $s3, -0x1F90
    ctx->pc = 0x2a0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959216));
label_2a0fac:
    // 0x2a0fac: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2a0facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2a0fb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0fb4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2a0fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fb8: 0xdc520000  ld          $s2, 0x0($v0)
    ctx->pc = 0x2a0fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a0fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fc4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0FC4u;
    SET_GPR_U32(ctx, 31, 0x2A0FCCu);
    ctx->pc = 0x2A0FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FC4u;
    // 0x2a0fc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0FC4u, 0x2A0FCCu)) {
        return;
    }
    ctx->pc = 0x2A0FCCu;
label_2a0fcc:
    // 0x2a0fcc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a0fccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a0fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fd4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A0FD4u;
    SET_GPR_U32(ctx, 31, 0x2A0FDCu);
    ctx->pc = 0x2A0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FD4u;
    // 0x2a0fd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A0FD4u, 0x2A0FDCu)) {
        return;
    }
    ctx->pc = 0x2A0FDCu;
label_2a0fdc:
    // 0x2a0fdc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A0FDCu;
    {
        const bool branch_taken_0x2a0fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FDCu;
        // 0x2a0fe0: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0fdc) {
            ctx->pc = 0x2A1048u;
            goto label_2a1048;
        }
    }
    ctx->pc = 0x2A0FE4u;
    // 0x2a0fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fe8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A0FE8u;
    SET_GPR_U32(ctx, 31, 0x2A0FF0u);
    ctx->pc = 0x2A0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FE8u;
    // 0x2a0fec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A0FE8u, 0x2A0FF0u)) {
        return;
    }
    ctx->pc = 0x2A0FF0u;
label_2a0ff0:
    // 0x2a0ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ff4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A0FF4u;
    SET_GPR_U32(ctx, 31, 0x2A0FFCu);
    ctx->pc = 0x2A0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FF4u;
    // 0x2a0ff8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A0FF4u, 0x2A0FFCu)) {
        return;
    }
    ctx->pc = 0x2A0FFCu;
label_2a0ffc:
    // 0x2a0ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1000: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A1000u;
    SET_GPR_U32(ctx, 31, 0x2A1008u);
    ctx->pc = 0x2A1004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1000u;
    // 0x2a1004: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A1000u, 0x2A1008u)) {
        return;
    }
    ctx->pc = 0x2A1008u;
label_2a1008:
    // 0x2a1008: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1008u;
    {
        const bool branch_taken_0x2a1008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1008) {
            ctx->pc = 0x2A100Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1008u;
            // 0x2a100c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1040u;
            goto label_2a1040;
        }
    }
    ctx->pc = 0x2A1010u;
label_2a1010:
    // 0x2a1010: 0xc0c489a  jal         func_312268
    ctx->pc = 0x2A1010u;
    SET_GPR_U32(ctx, 31, 0x2A1018u);
    ctx->pc = 0x2A1014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1010u;
    // 0x2a1014: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x2A1010u, 0x2A1018u)) {
        return;
    }
    ctx->pc = 0x2A1018u;
label_2a1018:
    // 0x2a1018: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2a1018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2a101c: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x2A101Cu;
    {
        const bool branch_taken_0x2a101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A101Cu;
        // 0x2a1020: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a101c) {
            ctx->pc = 0x2A1704u;
            goto label_2a1704;
        }
    }
    ctx->pc = 0x2A1024u;
label_2a1024:
    // 0x2a1024: 0xc0a80fe  jal         func_2A03F8
    ctx->pc = 0x2A1024u;
    SET_GPR_U32(ctx, 31, 0x2A102Cu);
    ctx->pc = 0x2A1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1024u;
    // 0x2a1028: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A03F8u, 0x2A1024u, 0x2A102Cu)) {
        return;
    }
    ctx->pc = 0x2A102Cu;
label_2a102c:
    // 0x2a102c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1030: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A1030u;
    SET_GPR_U32(ctx, 31, 0x2A1038u);
    ctx->pc = 0x2A1034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1030u;
    // 0x2a1034: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A1030u, 0x2A1038u)) {
        return;
    }
    ctx->pc = 0x2A1038u;
label_2a1038:
    // 0x2a1038: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x2A1038u;
    {
        const bool branch_taken_0x2a1038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1038u;
        // 0x2a103c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1038) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A1040u;
label_2a1040:
    // 0x2a1040: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x2a1040u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a1044:
    // 0x2a1044: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x2a1044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_2a1048:
    // 0x2a1048: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a1048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a104c: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x2a104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2a1050: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a1050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1054: 0xc0a7ec6  jal         func_29FB18
    ctx->pc = 0x2A1054u;
    SET_GPR_U32(ctx, 31, 0x2A105Cu);
    ctx->pc = 0x2A1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1054u;
    // 0x2a1058: 0x8fa80198  lw          $t0, 0x198($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FB18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FB18u, 0x2A1054u, 0x2A105Cu)) {
        return;
    }
    ctx->pc = 0x2A105Cu;
label_2a105c:
    // 0x2a105c: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x2a105cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x2a1060: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x2a1060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a1064: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x2A1064u;
    SET_GPR_U32(ctx, 31, 0x2A106Cu);
    ctx->pc = 0x2A1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1064u;
    // 0x2a1068: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x2A1064u, 0x2A106Cu)) {
        return;
    }
    ctx->pc = 0x2A106Cu;
label_2a106c:
    // 0x2a106c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2a106cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x2a1070: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2a1070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2a1074: 0x27a50184  addiu       $a1, $sp, 0x184
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x2a1078: 0xafa401e8  sw          $a0, 0x1E8($sp)
    ctx->pc = 0x2a1078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 4));
    // 0x2a107c: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x2A107Cu;
    {
        const bool branch_taken_0x2a107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A107Cu;
        // 0x2a1080: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a107c) {
            ctx->pc = 0x2A151Cu;
            goto label_2a151c;
        }
    }
    ctx->pc = 0x2A1084u;
    // 0x2a1084: 0x0  nop
    ctx->pc = 0x2a1084u;
    // NOP
label_2a1088:
    // 0x2a1088: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A1088u;
    SET_GPR_U32(ctx, 31, 0x2A1090u);
    ctx->pc = 0x2A108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1088u;
    // 0x2a108c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A1088u, 0x2A1090u)) {
        return;
    }
    ctx->pc = 0x2A1090u;
label_2a1090:
    // 0x2a1090: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a1090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x2a1094: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x2a1094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2a1098: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A1098u;
    SET_GPR_U32(ctx, 31, 0x2A10A0u);
    ctx->pc = 0x2A109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1098u;
    // 0x2a109c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A1098u, 0x2A10A0u)) {
        return;
    }
    ctx->pc = 0x2A10A0u;
label_2a10a0:
    // 0x2a10a0: 0x1c400025  bgtz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A10A0u;
    {
        const bool branch_taken_0x2a10a0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10A0u;
        // 0x2a10a4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10a0) {
            ctx->pc = 0x2A1138u;
            goto label_2a1138;
        }
    }
    ctx->pc = 0x2A10A8u;
    // 0x2a10a8: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x2A10A8u;
    {
        const bool branch_taken_0x2a10a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a10a8) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A10B0u;
label_2a10b0:
    // 0x2a10b0: 0x14c00046  bnez        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x2A10B0u;
    {
        const bool branch_taken_0x2a10b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10B0u;
        // 0x2a10b4: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10b0) {
            ctx->pc = 0x2A11CCu;
            goto label_2a11cc;
        }
    }
    ctx->pc = 0x2A10B8u;
    // 0x2a10b8: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A10B8u;
    {
        const bool branch_taken_0x2a10b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10B8u;
        // 0x2a10bc: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10b8) {
            ctx->pc = 0x2A1110u;
            goto label_2a1110;
        }
    }
    ctx->pc = 0x2A10C0u;
    // 0x2a10c0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a10c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a10c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a10c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a10c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a10cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a10ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a10d0: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A10D0u;
    {
        const bool branch_taken_0x2a10d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10D0u;
        // 0x2a10d4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10d0) {
            ctx->pc = 0x2A117Cu;
            goto label_2a117c;
        }
    }
    ctx->pc = 0x2A10D8u;
    // 0x2a10d8: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2a10d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a10e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a10e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a10e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a10e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a10e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a10e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a10ec: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A10ECu;
    {
        const bool branch_taken_0x2a10ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10ECu;
        // 0x2a10f0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10ec) {
            ctx->pc = 0x2A117Cu;
            goto label_2a117c;
        }
    }
    ctx->pc = 0x2A10F4u;
    // 0x2a10f4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2a10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2a10f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a10f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a10fc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2a10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2a1100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a1100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1104: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x2a1104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2a1108: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x2A1108u;
    {
        const bool branch_taken_0x2a1108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1108u;
        // 0x2a110c: 0x2a83c  dsll32      $s5, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1108) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A1110u;
label_2a1110:
    // 0x2a1110: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a1110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a1114: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a1114u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a1118: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a111c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a111cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a1120: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A1120u;
    {
        const bool branch_taken_0x2a1120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1120u;
        // 0x2a1124: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1120) {
            ctx->pc = 0x2A117Cu;
            goto label_2a117c;
        }
    }
    ctx->pc = 0x2A1128u;
    // 0x2a1128: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a112c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a112cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1130: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A1130u;
    {
        const bool branch_taken_0x2a1130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1130u;
        // 0x2a1134: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1130) {
            ctx->pc = 0x2A117Cu;
            goto label_2a117c;
        }
    }
    ctx->pc = 0x2A1138u;
label_2a1138:
    // 0x2a1138: 0x3c047ff0  lui         $a0, 0x7FF0
    ctx->pc = 0x2a1138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32752 << 16));
    // 0x2a113c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a113cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1140: 0x3c05fff0  lui         $a1, 0xFFF0
    ctx->pc = 0x2a1140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65520 << 16));
    // 0x2a1144: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a1144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a1148: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2a1148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2a114c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a1150: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a1150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a1154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a1154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a1158: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a1158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a115c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a115cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a1160: 0xdfa301d8  ld          $v1, 0x1D8($sp)
    ctx->pc = 0x2a1160u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2a1164: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1168: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a1168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a116c: 0xffa301d8  sd          $v1, 0x1D8($sp)
    ctx->pc = 0x2a116cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 3));
    // 0x2a1170: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a1170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a1174: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x2A1174u;
    {
        const bool branch_taken_0x2a1174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1174u;
        // 0x2a1178: 0x64a825  or          $s5, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1174) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A117Cu;
label_2a117c:
    // 0x2a117c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1180: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a1184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a1188: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x2A1188u;
    {
        const bool branch_taken_0x2a1188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1188) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A1190u;
    // 0x2a1190: 0x16c0ffa4  bnez        $s6, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2A1190u;
    {
        const bool branch_taken_0x2a1190 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1190) {
            ctx->pc = 0x2A1024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1024;
        }
    }
    ctx->pc = 0x2A1198u;
    // 0x2a1198: 0xc0a80fe  jal         func_2A03F8
    ctx->pc = 0x2A1198u;
    SET_GPR_U32(ctx, 31, 0x2A11A0u);
    ctx->pc = 0x2A119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1198u;
    // 0x2a119c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A03F8u, 0x2A1198u, 0x2A11A0u)) {
        return;
    }
    ctx->pc = 0x2A11A0u;
label_2a11a0:
    // 0x2a11a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a11a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11a4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A11A4u;
    SET_GPR_U32(ctx, 31, 0x2A11ACu);
    ctx->pc = 0x2A11A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11A4u;
    // 0x2a11a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A11A4u, 0x2A11ACu)) {
        return;
    }
    ctx->pc = 0x2A11ACu;
label_2a11ac:
    // 0x2a11ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a11acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a11b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11b4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A11B4u;
    SET_GPR_U32(ctx, 31, 0x2A11BCu);
    ctx->pc = 0x2A11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11B4u;
    // 0x2a11b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A11B4u, 0x2A11BCu)) {
        return;
    }
    ctx->pc = 0x2A11BCu;
label_2a11bc:
    // 0x2a11bc: 0x1040ff94  beqz        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x2A11BCu;
    {
        const bool branch_taken_0x2a11bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a11bc) {
            ctx->pc = 0x2A1010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1010;
        }
    }
    ctx->pc = 0x2A11C4u;
    // 0x2a11c4: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x2A11C4u;
    {
        const bool branch_taken_0x2a11c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a11c4) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A11CCu;
label_2a11cc:
    // 0x2a11cc: 0xc0a81cc  jal         func_2A0730
    ctx->pc = 0x2A11CCu;
    SET_GPR_U32(ctx, 31, 0x2A11D4u);
    ctx->pc = 0x2A11D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11CCu;
    // 0x2a11d0: 0x8fa501a8  lw          $a1, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0730u, 0x2A11CCu, 0x2A11D4u)) {
        return;
    }
    ctx->pc = 0x2A11D4u;
label_2a11d4:
    // 0x2a11d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a11d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11d8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2a11d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a11dc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a11dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a11e0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A11E0u;
    SET_GPR_U32(ctx, 31, 0x2A11E8u);
    ctx->pc = 0x2A11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11E0u;
    // 0x2a11e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A11E0u, 0x2A11E8u)) {
        return;
    }
    ctx->pc = 0x2A11E8u;
label_2a11e8:
    // 0x2a11e8: 0x1c400030  bgtz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A11E8u;
    {
        const bool branch_taken_0x2a11e8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2a11e8) {
            ctx->pc = 0x2A12ACu;
            goto label_2a12ac;
        }
    }
    ctx->pc = 0x2A11F0u;
    // 0x2a11f0: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A11F0u;
    {
        const bool branch_taken_0x2a11f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11F0u;
        // 0x2a11f4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a11f0) {
            ctx->pc = 0x2A1208u;
            goto label_2a1208;
        }
    }
    ctx->pc = 0x2A11F8u;
    // 0x2a11f8: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x2a11f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2a11fc: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2a11fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2a1200: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2A1200u;
    {
        const bool branch_taken_0x2a1200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1200u;
        // 0x2a1204: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1200) {
            ctx->pc = 0x2A12D8u;
            goto label_2a12d8;
        }
    }
    ctx->pc = 0x2A1208u;
label_2a1208:
    // 0x2a1208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a120c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a120cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1210: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1210u;
    {
        const bool branch_taken_0x2a1210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1210u;
        // 0x2a1214: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1210) {
            ctx->pc = 0x2A1234u;
            goto label_2a1234;
        }
    }
    ctx->pc = 0x2A1218u;
    // 0x2a1218: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2a1218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a121c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a1220: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a1220u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a1224: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a1228: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a1228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a122c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A122Cu;
    {
        const bool branch_taken_0x2a122c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A122Cu;
        // 0x2a1230: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a122c) {
            ctx->pc = 0x2A126Cu;
            goto label_2a126c;
        }
    }
    ctx->pc = 0x2A1234u;
label_2a1234:
    // 0x2a1234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1238: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a123c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a123cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1240: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1240u;
    {
        const bool branch_taken_0x2a1240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1240u;
        // 0x2a1244: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1240) {
            ctx->pc = 0x2A1254u;
            goto label_2a1254;
        }
    }
    ctx->pc = 0x2A1248u;
    // 0x2a1248: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a124c: 0x1040ff70  beqz        $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x2A124Cu;
    {
        const bool branch_taken_0x2a124c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a124c) {
            ctx->pc = 0x2A1010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1010;
        }
    }
    ctx->pc = 0x2A1254u;
label_2a1254:
    // 0x2a1254: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x2a1254u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2a1258: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2a1258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2a125c: 0x3411bff0  ori         $s1, $zero, 0xBFF0
    ctx->pc = 0x2a125cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x2a1260: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x2a1260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2a1264: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A1264u;
    {
        const bool branch_taken_0x2a1264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1264u;
        // 0x2a1268: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1264) {
            ctx->pc = 0x2A12DCu;
            goto label_2a12dc;
        }
    }
    ctx->pc = 0x2A126Cu;
label_2a126c:
    // 0x2a126c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2a126cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2a1270: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a1270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a1274: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A1274u;
    SET_GPR_U32(ctx, 31, 0x2A127Cu);
    ctx->pc = 0x2A1278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1274u;
    // 0x2a1278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A1274u, 0x2A127Cu)) {
        return;
    }
    ctx->pc = 0x2A127Cu;
label_2a127c:
    // 0x2a127c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A127Cu;
    {
        const bool branch_taken_0x2a127c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A127Cu;
        // 0x2a1280: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a127c) {
            ctx->pc = 0x2A1294u;
            goto label_2a1294;
        }
    }
    ctx->pc = 0x2A1284u;
    // 0x2a1284: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x2a1284u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2a1288: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2a1288u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2a128c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A128Cu;
    {
        const bool branch_taken_0x2a128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a128c) {
            ctx->pc = 0x2A12CCu;
            goto label_2a12cc;
        }
    }
    ctx->pc = 0x2A1294u;
label_2a1294:
    // 0x2a1294: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2a1294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2a1298: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a1298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a129c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A129Cu;
    SET_GPR_U32(ctx, 31, 0x2A12A4u);
    ctx->pc = 0x2A12A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A129Cu;
    // 0x2a12a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A129Cu, 0x2A12A4u)) {
        return;
    }
    ctx->pc = 0x2A12A4u;
label_2a12a4:
    // 0x2a12a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A12A4u;
    {
        const bool branch_taken_0x2a12a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12A4u;
        // 0x2a12a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12a4) {
            ctx->pc = 0x2A12C8u;
            goto label_2a12c8;
        }
    }
    ctx->pc = 0x2A12ACu;
label_2a12ac:
    // 0x2a12ac: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2a12acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2a12b0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a12b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a12b4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A12B4u;
    SET_GPR_U32(ctx, 31, 0x2A12BCu);
    ctx->pc = 0x2A12B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12B4u;
    // 0x2a12b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A12B4u, 0x2A12BCu)) {
        return;
    }
    ctx->pc = 0x2A12BCu;
label_2a12bc:
    // 0x2a12bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a12bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12c0: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A12C0u;
    {
        const bool branch_taken_0x2a12c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12C0u;
        // 0x2a12c4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12c0) {
            ctx->pc = 0x2A12D8u;
            goto label_2a12d8;
        }
    }
    ctx->pc = 0x2A12C8u;
label_2a12c8:
    // 0x2a12c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a12c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a12cc:
    // 0x2a12cc: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A12CCu;
    SET_GPR_U32(ctx, 31, 0x2A12D4u);
    ctx->pc = 0x2A12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12CCu;
    // 0x2a12d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A12CCu, 0x2A12D4u)) {
        return;
    }
    ctx->pc = 0x2A12D4u;
label_2a12d4:
    // 0x2a12d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a12d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a12d8:
    // 0x2a12d8: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2a12d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a12dc:
    // 0x2a12dc: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x2a12dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x2a12e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a12e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a12e4: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x2a12e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12e8: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x2a12e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x2a12ec: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x2a12ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x2a12f0: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A12F0u;
    {
        const bool branch_taken_0x2a12f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12F0u;
        // 0x2a12f4: 0xafa30198  sw          $v1, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12f0) {
            ctx->pc = 0x2A13D8u;
            goto label_2a13d8;
        }
    }
    ctx->pc = 0x2A12F8u;
    // 0x2a12f8: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2a12f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12fc: 0x3c04fcb0  lui         $a0, 0xFCB0
    ctx->pc = 0x2a12fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64688 << 16));
    // 0x2a1300: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x2a1300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a1304: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2a1304u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2a1308: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x2a1308u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2a130c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a1310: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x2a1310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x2a1314: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1318: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2a1318u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x2a131c: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x2a131cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a1320: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2a1320u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x2a1324: 0xc0a80fe  jal         func_2A03F8
    ctx->pc = 0x2A1324u;
    SET_GPR_U32(ctx, 31, 0x2A132Cu);
    ctx->pc = 0x2A1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1324u;
    // 0x2a1328: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A03F8u, 0x2A1324u, 0x2A132Cu)) {
        return;
    }
    ctx->pc = 0x2A132Cu;
label_2a132c:
    // 0x2a132c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1330: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A1330u;
    SET_GPR_U32(ctx, 31, 0x2A1338u);
    ctx->pc = 0x2A1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1330u;
    // 0x2a1334: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A1330u, 0x2A1338u)) {
        return;
    }
    ctx->pc = 0x2A1338u;
label_2a1338:
    // 0x2a1338: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a1338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a133c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A133Cu;
    SET_GPR_U32(ctx, 31, 0x2A1344u);
    ctx->pc = 0x2A1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A133Cu;
    // 0x2a1340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A133Cu, 0x2A1344u)) {
        return;
    }
    ctx->pc = 0x2A1344u;
label_2a1344:
    // 0x2a1344: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a1344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1348: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x2a1348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x2a134c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a134cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a1350: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1350u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1354: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2a1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2a1358: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2a1358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a135c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A135Cu;
    {
        const bool branch_taken_0x2a135c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A135Cu;
        // 0x2a1360: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a135c) {
            ctx->pc = 0x2A13B8u;
            goto label_2a13b8;
        }
    }
    ctx->pc = 0x2A1364u;
    // 0x2a1364: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2a1364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2a1368: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a1368u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a136c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a1370: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1370u;
    {
        const bool branch_taken_0x2a1370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1370u;
        // 0x2a1374: 0xdfa401e0  ld          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1370) {
            ctx->pc = 0x2A138Cu;
            goto label_2a138c;
        }
    }
    ctx->pc = 0x2A1378u;
    // 0x2a1378: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2a1378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a137c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a137cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1380: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1384: 0x1052fe9d  beq         $v0, $s2, . + 4 + (-0x163 << 2)
    ctx->pc = 0x2A1384u;
    {
        const bool branch_taken_0x2a1384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2a1384) {
            ctx->pc = 0x2A0DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0dfc;
        }
    }
    ctx->pc = 0x2A138Cu;
label_2a138c:
    // 0x2a138c: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2a138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2a1390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a1394: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1398: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x2a1398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x2a139c: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x2a139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x2a13a0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2a13a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2a13a4: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x2a13a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x2a13a8: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x2a13a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x2a13ac: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x2a13acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x2a13b0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2A13B0u;
    {
        const bool branch_taken_0x2a13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13B0u;
        // 0x2a13b4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13b0) {
            ctx->pc = 0x2A151Cu;
            goto label_2a151c;
        }
    }
    ctx->pc = 0x2A13B8u;
label_2a13b8:
    // 0x2a13b8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2a13b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13bc: 0x3c040350  lui         $a0, 0x350
    ctx->pc = 0x2a13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)848 << 16));
    // 0x2a13c0: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x2a13c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a13c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a13c8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2a13c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2a13cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a13ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a13d0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A13D0u;
    {
        const bool branch_taken_0x2a13d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13D0u;
        // 0x2a13d4: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13d0) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A13D8u;
label_2a13d8:
    // 0x2a13d8: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x2a13d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2a13dc: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x2a13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x2a13e0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2a13e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a13e4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A13E4u;
    {
        const bool branch_taken_0x2a13e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a13e4) {
            ctx->pc = 0x2A143Cu;
            goto label_2a143c;
        }
    }
    ctx->pc = 0x2A13ECu;
    // 0x2a13ec: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2a13ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2a13f0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a13f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a13f4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A13F4u;
    SET_GPR_U32(ctx, 31, 0x2A13FCu);
    ctx->pc = 0x2A13F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13F4u;
    // 0x2a13f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A13F4u, 0x2A13FCu)) {
        return;
    }
    ctx->pc = 0x2A13FCu;
label_2a13fc:
    // 0x2a13fc: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A13FCu;
    {
        const bool branch_taken_0x2a13fc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2a13fc) {
            ctx->pc = 0x2A143Cu;
            goto label_2a143c;
        }
    }
    ctx->pc = 0x2A1404u;
    // 0x2a1404: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2a1404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2a1408: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a1408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a140c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A140Cu;
    SET_GPR_U32(ctx, 31, 0x2A1414u);
    ctx->pc = 0x2A1410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A140Cu;
    // 0x2a1410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A140Cu, 0x2A1414u)) {
        return;
    }
    ctx->pc = 0x2A1414u;
label_2a1414:
    // 0x2a1414: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2A1414u;
    SET_GPR_U32(ctx, 31, 0x2A141Cu);
    ctx->pc = 0x2A1418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1414u;
    // 0x2a1418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2A1414u, 0x2A141Cu)) {
        return;
    }
    ctx->pc = 0x2A141Cu;
label_2a141c:
    // 0x2a141c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A141Cu;
    SET_GPR_U32(ctx, 31, 0x2A1424u);
    ctx->pc = 0x2A1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A141Cu;
    // 0x2a1420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A141Cu, 0x2A1424u)) {
        return;
    }
    ctx->pc = 0x2A1424u;
label_2a1424:
    // 0x2a1424: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1424u;
    {
        const bool branch_taken_0x2a1424 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1424u;
        // 0x2a1428: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1424) {
            ctx->pc = 0x2A143Cu;
            goto label_2a143c;
        }
    }
    ctx->pc = 0x2A142Cu;
    // 0x2a142c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a142cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1430: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A1430u;
    SET_GPR_U32(ctx, 31, 0x2A1438u);
    ctx->pc = 0x2A1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1430u;
    // 0x2a1434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A1430u, 0x2A1438u)) {
        return;
    }
    ctx->pc = 0x2A1438u;
label_2a1438:
    // 0x2a1438: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a1438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a143c:
    // 0x2a143c: 0xc0a80fe  jal         func_2A03F8
    ctx->pc = 0x2A143Cu;
    SET_GPR_U32(ctx, 31, 0x2A1444u);
    ctx->pc = 0x2A1440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A143Cu;
    // 0x2a1440: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A03F8u, 0x2A143Cu, 0x2A1444u)) {
        return;
    }
    ctx->pc = 0x2A1444u;
label_2a1444:
    // 0x2a1444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1448: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A1448u;
    SET_GPR_U32(ctx, 31, 0x2A1450u);
    ctx->pc = 0x2A144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1448u;
    // 0x2a144c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A1448u, 0x2A1450u)) {
        return;
    }
    ctx->pc = 0x2A1450u;
label_2a1450:
    // 0x2a1450: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a1450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1454: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A1454u;
    SET_GPR_U32(ctx, 31, 0x2A145Cu);
    ctx->pc = 0x2A1458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1454u;
    // 0x2a1458: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A1454u, 0x2A145Cu)) {
        return;
    }
    ctx->pc = 0x2A145Cu;
label_2a145c:
    // 0x2a145c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a145cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1460:
    // 0x2a1460: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2a1460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1464: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2a1464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2a1468: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1468u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a146c: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x2a146cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1470: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x2a1470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2a1474: 0x1452002a  bne         $v0, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A1474u;
    {
        const bool branch_taken_0x2a1474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2A1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1474u;
        // 0x2a1478: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1474) {
            ctx->pc = 0x2A1520u;
            goto label_2a1520;
        }
    }
    ctx->pc = 0x2A147Cu;
    // 0x2a147c: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2A147Cu;
    SET_GPR_U32(ctx, 31, 0x2A1484u);
    ctx->pc = 0x2A1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A147Cu;
    // 0x2a1480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2A147Cu, 0x2A1484u)) {
        return;
    }
    ctx->pc = 0x2A1484u;
label_2a1484:
    // 0x2a1484: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A1484u;
    SET_GPR_U32(ctx, 31, 0x2A148Cu);
    ctx->pc = 0x2A1488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1484u;
    // 0x2a1488: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A1484u, 0x2A148Cu)) {
        return;
    }
    ctx->pc = 0x2A148Cu;
label_2a148c:
    // 0x2a148c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1490: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A1490u;
    SET_GPR_U32(ctx, 31, 0x2A1498u);
    ctx->pc = 0x2A1494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1490u;
    // 0x2a1494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A1490u, 0x2A1498u)) {
        return;
    }
    ctx->pc = 0x2A1498u;
label_2a1498:
    // 0x2a1498: 0x16c0000c  bnez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1498u;
    {
        const bool branch_taken_0x2a1498 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1498u;
        // 0x2a149c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1498) {
            ctx->pc = 0x2A14CCu;
            goto label_2a14cc;
        }
    }
    ctx->pc = 0x2A14A0u;
    // 0x2a14a0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2a14a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a14a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a14a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a14a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a14ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A14ACu;
    {
        const bool branch_taken_0x2a14ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14ACu;
        // 0x2a14b0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14ac) {
            ctx->pc = 0x2A14CCu;
            goto label_2a14cc;
        }
    }
    ctx->pc = 0x2A14B4u;
    // 0x2a14b4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a14b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a14b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a14bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a14bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a14c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a14c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a14c4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A14C4u;
    {
        const bool branch_taken_0x2a14c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a14c4) {
            ctx->pc = 0x2A1504u;
            goto label_2a1504;
        }
    }
    ctx->pc = 0x2A14CCu;
label_2a14cc:
    // 0x2a14cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2a14ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2a14d0: 0xdc25e158  ld          $a1, -0x1EA8($at)
    ctx->pc = 0x2a14d0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AE158u));
    // 0x2a14d4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A14D4u;
    SET_GPR_U32(ctx, 31, 0x2A14DCu);
    ctx->pc = 0x2A14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14D4u;
    // 0x2a14d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A14D4u, 0x2A14DCu)) {
        return;
    }
    ctx->pc = 0x2A14DCu;
label_2a14dc:
    // 0x2a14dc: 0x440007d  bltz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2A14DCu;
    {
        const bool branch_taken_0x2a14dc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2a14dc) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A14E4u;
    // 0x2a14e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2a14e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2a14e8: 0xdc25e160  ld          $a1, -0x1EA0($at)
    ctx->pc = 0x2a14e8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AE160u));
    // 0x2a14ec: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A14ECu;
    SET_GPR_U32(ctx, 31, 0x2A14F4u);
    ctx->pc = 0x2A14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14ECu;
    // 0x2a14f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A14ECu, 0x2A14F4u)) {
        return;
    }
    ctx->pc = 0x2A14F4u;
label_2a14f4:
    // 0x2a14f4: 0x1c400077  bgtz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2A14F4u;
    {
        const bool branch_taken_0x2a14f4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14F4u;
        // 0x2a14f8: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14f4) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A14FCu;
    // 0x2a14fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A14FCu;
    {
        const bool branch_taken_0x2a14fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a14fc) {
            ctx->pc = 0x2A1520u;
            goto label_2a1520;
        }
    }
    ctx->pc = 0x2A1504u;
label_2a1504:
    // 0x2a1504: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2a1504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2a1508: 0xdc25e168  ld          $a1, -0x1E98($at)
    ctx->pc = 0x2a1508u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AE168u));
    // 0x2a150c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A150Cu;
    SET_GPR_U32(ctx, 31, 0x2A1514u);
    ctx->pc = 0x2A1510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A150Cu;
    // 0x2a1510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A150Cu, 0x2A1514u)) {
        return;
    }
    ctx->pc = 0x2A1514u;
label_2a1514:
    // 0x2a1514: 0x440006f  bltz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2A1514u;
    {
        const bool branch_taken_0x2a1514 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2a1514) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A151Cu;
label_2a151c:
    // 0x2a151c: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x2a151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2a1520:
    // 0x2a1520: 0xc0a7e62  jal         func_29F988
    ctx->pc = 0x2A1520u;
    SET_GPR_U32(ctx, 31, 0x2A1528u);
    ctx->pc = 0x2A1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1520u;
    // 0x2a1524: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F988u, 0x2A1520u, 0x2A1528u)) {
        return;
    }
    ctx->pc = 0x2A1528u;
label_2a1528:
    // 0x2a1528: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x2a1528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2a152c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a152cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1530: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x2a1530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2a1534: 0xc0a8170  jal         func_2A05C0
    ctx->pc = 0x2A1534u;
    SET_GPR_U32(ctx, 31, 0x2A153Cu);
    ctx->pc = 0x2A1538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1534u;
    // 0x2a1538: 0x8fa701ec  lw          $a3, 0x1EC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A05C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A05C0u, 0x2A1534u, 0x2A153Cu)) {
        return;
    }
    ctx->pc = 0x2A153Cu;
label_2a153c:
    // 0x2a153c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2a153cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2a1540: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1544: 0xc0a7f66  jal         func_29FD98
    ctx->pc = 0x2A1544u;
    SET_GPR_U32(ctx, 31, 0x2A154Cu);
    ctx->pc = 0x2A1548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1544u;
    // 0x2a1548: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FD98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FD98u, 0x2A1544u, 0x2A154Cu)) {
        return;
    }
    ctx->pc = 0x2A154Cu;
label_2a154c:
    // 0x2a154c: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x2a154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a1550: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1550u;
    {
        const bool branch_taken_0x2a1550 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1550u;
        // 0x2a1554: 0xafa201a8  sw          $v0, 0x1A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1550) {
            ctx->pc = 0x2A156Cu;
            goto label_2a156c;
        }
    }
    ctx->pc = 0x2A1558u;
    // 0x2a1558: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2a1558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a155c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a155cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1560: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a1560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1564: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1564u;
    {
        const bool branch_taken_0x2a1564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1564u;
        // 0x2a1568: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1564) {
            ctx->pc = 0x2A1580u;
            goto label_2a1580;
        }
    }
    ctx->pc = 0x2A156Cu;
label_2a156c:
    // 0x2a156c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2a156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2a1570: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a1570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1578: 0x48823  negu        $s1, $a0
    ctx->pc = 0x2a1578u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2a157c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a157cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a1580:
    // 0x2a1580: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2a1580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2a1584: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1584u;
    {
        const bool branch_taken_0x2a1584 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2A1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1584u;
        // 0x2a1588: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1584) {
            ctx->pc = 0x2A1594u;
            goto label_2a1594;
        }
    }
    ctx->pc = 0x2A158Cu;
    // 0x2a158c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A158Cu;
    {
        const bool branch_taken_0x2a158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A158Cu;
        // 0x2a1590: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a158c) {
            ctx->pc = 0x2A1598u;
            goto label_2a1598;
        }
    }
    ctx->pc = 0x2A1594u;
label_2a1594:
    // 0x2a1594: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x2a1594u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2a1598:
    // 0x2a1598: 0x8fa70184  lw          $a3, 0x184($sp)
    ctx->pc = 0x2a1598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2a159c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a15a0: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2a15a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a15a4: 0x28c3fc02  slti        $v1, $a2, -0x3FE
    ctx->pc = 0x2a15a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x2a15a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A15A8u;
    {
        const bool branch_taken_0x2a15a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15A8u;
        // 0x2a15ac: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15a8) {
            ctx->pc = 0x2A15B8u;
            goto label_2a15b8;
        }
    }
    ctx->pc = 0x2A15B0u;
    // 0x2a15b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A15B0u;
    {
        const bool branch_taken_0x2a15b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15B0u;
        // 0x2a15b4: 0x24920433  addiu       $s2, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15b0) {
            ctx->pc = 0x2A15C0u;
            goto label_2a15c0;
        }
    }
    ctx->pc = 0x2A15B8u;
label_2a15b8:
    // 0x2a15b8: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2a15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2a15bc: 0x479023  subu        $s2, $v0, $a3
    ctx->pc = 0x2a15bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2a15c0:
    // 0x2a15c0: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2a15c4: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x2a15c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2a15c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a15c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a15cc: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2a15ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a15d0: 0x222300b  movn        $a2, $s1, $v0
    ctx->pc = 0x2a15d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17));
    // 0x2a15d4: 0x266182a  slt         $v1, $s3, $a2
    ctx->pc = 0x2a15d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a15d8: 0x263300b  movn        $a2, $s3, $v1
    ctx->pc = 0x2a15d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19));
    // 0x2a15dc: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A15DCu;
    {
        const bool branch_taken_0x2a15dc = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x2a15dc) {
            ctx->pc = 0x2A15F0u;
            goto label_2a15f0;
        }
    }
    ctx->pc = 0x2A15E4u;
    // 0x2a15e4: 0x2669823  subu        $s3, $s3, $a2
    ctx->pc = 0x2a15e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2a15e8: 0x2268823  subu        $s1, $s1, $a2
    ctx->pc = 0x2a15e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2a15ec: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x2a15ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_2a15f0:
    // 0x2a15f0: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A15F0u;
    {
        const bool branch_taken_0x2a15f0 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x2a15f0) {
            ctx->pc = 0x2A1620u;
            goto label_2a1620;
        }
    }
    ctx->pc = 0x2A15F8u;
    // 0x2a15f8: 0xc0a8002  jal         func_2A0008
    ctx->pc = 0x2A15F8u;
    SET_GPR_U32(ctx, 31, 0x2A1600u);
    ctx->pc = 0x2A15FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A15F8u;
    // 0x2a15fc: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0008u, 0x2A15F8u, 0x2A1600u)) {
        return;
    }
    ctx->pc = 0x2A1600u;
label_2a1600:
    // 0x2a1600: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2a1600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2a1604: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x2a1604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2a1608: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x2a1608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2a160c: 0xc0a7f74  jal         func_29FDD0
    ctx->pc = 0x2A160Cu;
    SET_GPR_U32(ctx, 31, 0x2A1614u);
    ctx->pc = 0x2A1610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A160Cu;
    // 0x2a1610: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FDD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FDD0u, 0x2A160Cu, 0x2A1614u)) {
        return;
    }
    ctx->pc = 0x2A1614u;
label_2a1614:
    // 0x2a1614: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x2a1614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2a1618: 0xafa501ac  sw          $a1, 0x1AC($sp)
    ctx->pc = 0x2a1618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 5));
    // 0x2a161c: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x2a161cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_2a1620:
    // 0x2a1620: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1620u;
    {
        const bool branch_taken_0x2a1620 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1620u;
        // 0x2a1624: 0x8fa4019c  lw          $a0, 0x19C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1620) {
            ctx->pc = 0x2A1634u;
            goto label_2a1634;
        }
    }
    ctx->pc = 0x2A1628u;
    // 0x2a1628: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A1628u;
    SET_GPR_U32(ctx, 31, 0x2A1630u);
    ctx->pc = 0x2A162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1628u;
    // 0x2a162c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A1628u, 0x2A1630u)) {
        return;
    }
    ctx->pc = 0x2A1630u;
label_2a1630:
    // 0x2a1630: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x2a1630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_2a1634:
    // 0x2a1634: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1634u;
    {
        const bool branch_taken_0x2a1634 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x2A1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1634u;
        // 0x2a1638: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1634) {
            ctx->pc = 0x2A1648u;
            goto label_2a1648;
        }
    }
    ctx->pc = 0x2A163Cu;
    // 0x2a163c: 0xc0a8002  jal         func_2A0008
    ctx->pc = 0x2A163Cu;
    SET_GPR_U32(ctx, 31, 0x2A1644u);
    ctx->pc = 0x2A1640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A163Cu;
    // 0x2a1640: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0008u, 0x2A163Cu, 0x2A1644u)) {
        return;
    }
    ctx->pc = 0x2A1644u;
label_2a1644:
    // 0x2a1644: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2a1644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_2a1648:
    // 0x2a1648: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1648u;
    {
        const bool branch_taken_0x2a1648 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2A164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1648u;
        // 0x2a164c: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1648) {
            ctx->pc = 0x2A165Cu;
            goto label_2a165c;
        }
    }
    ctx->pc = 0x2A1650u;
    // 0x2a1650: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A1650u;
    SET_GPR_U32(ctx, 31, 0x2A1658u);
    ctx->pc = 0x2A1654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1650u;
    // 0x2a1654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A1650u, 0x2A1658u)) {
        return;
    }
    ctx->pc = 0x2A1658u;
label_2a1658:
    // 0x2a1658: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2a1658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_2a165c:
    // 0x2a165c: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A165Cu;
    {
        const bool branch_taken_0x2a165c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2A1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A165Cu;
        // 0x2a1660: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a165c) {
            ctx->pc = 0x2A1670u;
            goto label_2a1670;
        }
    }
    ctx->pc = 0x2A1664u;
    // 0x2a1664: 0xc0a8020  jal         func_2A0080
    ctx->pc = 0x2A1664u;
    SET_GPR_U32(ctx, 31, 0x2A166Cu);
    ctx->pc = 0x2A1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1664u;
    // 0x2a1668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0080u, 0x2A1664u, 0x2A166Cu)) {
        return;
    }
    ctx->pc = 0x2A166Cu;
label_2a166c:
    // 0x2a166c: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2a166cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_2a1670:
    // 0x2a1670: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2a1670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2a1674: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x2a1674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2a1678: 0xc0a809a  jal         func_2A0268
    ctx->pc = 0x2A1678u;
    SET_GPR_U32(ctx, 31, 0x2A1680u);
    ctx->pc = 0x2A167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1678u;
    // 0x2a167c: 0x8fa601a0  lw          $a2, 0x1A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0268u, 0x2A1678u, 0x2A1680u)) {
        return;
    }
    ctx->pc = 0x2A1680u;
label_2a1680:
    // 0x2a1680: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a1680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x2a1684: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x2a1684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2a1688: 0x8456000e  lh          $s6, 0xE($v0)
    ctx->pc = 0x2a1688u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2a168c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1690: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A1690u;
    SET_GPR_U32(ctx, 31, 0x2A1698u);
    ctx->pc = 0x2A1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1690u;
    // 0x2a1694: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A1690u, 0x2A1698u)) {
        return;
    }
    ctx->pc = 0x2A1698u;
label_2a1698:
    // 0x2a1698: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a1698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a169c: 0x4c1fe84  bgez        $a2, . + 4 + (-0x17C << 2)
    ctx->pc = 0x2A169Cu;
    {
        const bool branch_taken_0x2a169c = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2a169c) {
            ctx->pc = 0x2A10B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a10b0;
        }
    }
    ctx->pc = 0x2A16A4u;
    // 0x2a16a4: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x2A16A4u;
    {
        const bool branch_taken_0x2a16a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16A4u;
        // 0x2a16a8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16a4) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A16ACu;
    // 0x2a16ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a16acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a16b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a16b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a16b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A16B4u;
    {
        const bool branch_taken_0x2a16b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16B4u;
        // 0x2a16b8: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16b4) {
            ctx->pc = 0x2A16D4u;
            goto label_2a16d4;
        }
    }
    ctx->pc = 0x2A16BCu;
    // 0x2a16bc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a16c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a16c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a16c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a16c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a16c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a16c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a16cc: 0x1060fe6e  beqz        $v1, . + 4 + (-0x192 << 2)
    ctx->pc = 0x2A16CCu;
    {
        const bool branch_taken_0x2a16cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16CCu;
        // 0x2a16d0: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16cc) {
            ctx->pc = 0x2A1088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1088;
        }
    }
    ctx->pc = 0x2A16D4u;
label_2a16d4:
    // 0x2a16d4: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A16D4u;
    SET_GPR_U32(ctx, 31, 0x2A16DCu);
    ctx->pc = 0x2A16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16D4u;
    // 0x2a16d8: 0x8fa4019c  lw          $a0, 0x19C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A16D4u, 0x2A16DCu)) {
        return;
    }
    ctx->pc = 0x2A16DCu;
label_2a16dc:
    // 0x2a16dc: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A16DCu;
    SET_GPR_U32(ctx, 31, 0x2A16E4u);
    ctx->pc = 0x2A16E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16DCu;
    // 0x2a16e0: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A16DCu, 0x2A16E4u)) {
        return;
    }
    ctx->pc = 0x2A16E4u;
label_2a16e4:
    // 0x2a16e4: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A16E4u;
    SET_GPR_U32(ctx, 31, 0x2A16ECu);
    ctx->pc = 0x2A16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16E4u;
    // 0x2a16e8: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A16E4u, 0x2A16ECu)) {
        return;
    }
    ctx->pc = 0x2A16ECu;
label_2a16ec:
    // 0x2a16ec: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A16ECu;
    SET_GPR_U32(ctx, 31, 0x2A16F4u);
    ctx->pc = 0x2A16F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16ECu;
    // 0x2a16f0: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A16ECu, 0x2A16F4u)) {
        return;
    }
    ctx->pc = 0x2A16F4u;
label_2a16f4:
    // 0x2a16f4: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A16F4u;
    SET_GPR_U32(ctx, 31, 0x2A16FCu);
    ctx->pc = 0x2A16F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16F4u;
    // 0x2a16f8: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A16F4u, 0x2A16FCu)) {
        return;
    }
    ctx->pc = 0x2A16FCu;
label_2a16fc:
    // 0x2a16fc: 0xc0a7e58  jal         func_29F960
    ctx->pc = 0x2A16FCu;
    SET_GPR_U32(ctx, 31, 0x2A1704u);
    ctx->pc = 0x2A1700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16FCu;
    // 0x2a1700: 0x8fa401ac  lw          $a0, 0x1AC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F960u, 0x2A16FCu, 0x2A1704u)) {
        return;
    }
    ctx->pc = 0x2A1704u;
label_2a1704:
    // 0x2a1704: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x2a1704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_2a1708:
    // 0x2a1708: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A1708u;
    {
        const bool branch_taken_0x2a1708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1708) {
            ctx->pc = 0x2A170Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1708u;
            // 0x2a170c: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1710u;
            goto label_2a1710;
        }
    }
    ctx->pc = 0x2A1710u;
label_2a1710:
    // 0x2a1710: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2a1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a1714: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1714u;
    {
        const bool branch_taken_0x2a1714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1714u;
        // 0x2a1718: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1714) {
            ctx->pc = 0x2A1728u;
            goto label_2a1728;
        }
    }
    ctx->pc = 0x2A171Cu;
    // 0x2a171c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1720: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A1720u;
    SET_GPR_U32(ctx, 31, 0x2A1728u);
    ctx->pc = 0x2A1724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1720u;
    // 0x2a1724: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A1720u, 0x2A1728u)) {
        return;
    }
    ctx->pc = 0x2A1728u;
label_2a1728:
    // 0x2a1728: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x2a1728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2a172c: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x2a172cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2a1730: 0xdfb70260  ld          $s7, 0x260($sp)
    ctx->pc = 0x2a1730u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2a1734: 0xdfb60250  ld          $s6, 0x250($sp)
    ctx->pc = 0x2a1734u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2a1738: 0xdfb50240  ld          $s5, 0x240($sp)
    ctx->pc = 0x2a1738u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2a173c: 0xdfb40230  ld          $s4, 0x230($sp)
    ctx->pc = 0x2a173cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a1740: 0xdfb30220  ld          $s3, 0x220($sp)
    ctx->pc = 0x2a1740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2a1744: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x2a1744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2a1748: 0xdfb10200  ld          $s1, 0x200($sp)
    ctx->pc = 0x2a1748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2a174c: 0xdfb001f0  ld          $s0, 0x1F0($sp)
    ctx->pc = 0x2a174cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a1750: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1750u;
        // 0x2a1754: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1758u;
}
