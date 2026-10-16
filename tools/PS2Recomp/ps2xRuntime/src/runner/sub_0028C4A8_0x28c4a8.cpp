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

// Function: sub_0028C4A8
// Address: 0x28c4a8 - 0x28c678
void sub_0028C4A8_0x28c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C4A8_0x28c4a8");
#endif

    switch (ctx->pc) {
        case 0x28c4a8u: goto label_28c4a8;
        case 0x28c4acu: goto label_28c4ac;
        case 0x28c4b0u: goto label_28c4b0;
        case 0x28c4b4u: goto label_28c4b4;
        case 0x28c4b8u: goto label_28c4b8;
        case 0x28c4bcu: goto label_28c4bc;
        case 0x28c4c0u: goto label_28c4c0;
        case 0x28c4c4u: goto label_28c4c4;
        case 0x28c4c8u: goto label_28c4c8;
        case 0x28c4ccu: goto label_28c4cc;
        case 0x28c4d0u: goto label_28c4d0;
        case 0x28c4d4u: goto label_28c4d4;
        case 0x28c4d8u: goto label_28c4d8;
        case 0x28c4dcu: goto label_28c4dc;
        case 0x28c4e0u: goto label_28c4e0;
        case 0x28c4e4u: goto label_28c4e4;
        case 0x28c4e8u: goto label_28c4e8;
        case 0x28c4ecu: goto label_28c4ec;
        case 0x28c4f0u: goto label_28c4f0;
        case 0x28c4f4u: goto label_28c4f4;
        case 0x28c4f8u: goto label_28c4f8;
        case 0x28c4fcu: goto label_28c4fc;
        case 0x28c500u: goto label_28c500;
        case 0x28c504u: goto label_28c504;
        case 0x28c508u: goto label_28c508;
        case 0x28c50cu: goto label_28c50c;
        case 0x28c510u: goto label_28c510;
        case 0x28c514u: goto label_28c514;
        case 0x28c518u: goto label_28c518;
        case 0x28c51cu: goto label_28c51c;
        case 0x28c520u: goto label_28c520;
        case 0x28c524u: goto label_28c524;
        case 0x28c528u: goto label_28c528;
        case 0x28c52cu: goto label_28c52c;
        case 0x28c530u: goto label_28c530;
        case 0x28c534u: goto label_28c534;
        case 0x28c538u: goto label_28c538;
        case 0x28c53cu: goto label_28c53c;
        case 0x28c540u: goto label_28c540;
        case 0x28c544u: goto label_28c544;
        case 0x28c548u: goto label_28c548;
        case 0x28c54cu: goto label_28c54c;
        case 0x28c550u: goto label_28c550;
        case 0x28c554u: goto label_28c554;
        case 0x28c558u: goto label_28c558;
        case 0x28c55cu: goto label_28c55c;
        case 0x28c560u: goto label_28c560;
        case 0x28c564u: goto label_28c564;
        case 0x28c568u: goto label_28c568;
        case 0x28c56cu: goto label_28c56c;
        case 0x28c570u: goto label_28c570;
        case 0x28c574u: goto label_28c574;
        case 0x28c578u: goto label_28c578;
        case 0x28c57cu: goto label_28c57c;
        case 0x28c580u: goto label_28c580;
        case 0x28c584u: goto label_28c584;
        case 0x28c588u: goto label_28c588;
        case 0x28c58cu: goto label_28c58c;
        case 0x28c590u: goto label_28c590;
        case 0x28c594u: goto label_28c594;
        case 0x28c598u: goto label_28c598;
        case 0x28c59cu: goto label_28c59c;
        case 0x28c5a0u: goto label_28c5a0;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5a8u: goto label_28c5a8;
        case 0x28c5acu: goto label_28c5ac;
        case 0x28c5b0u: goto label_28c5b0;
        case 0x28c5b4u: goto label_28c5b4;
        case 0x28c5b8u: goto label_28c5b8;
        case 0x28c5bcu: goto label_28c5bc;
        case 0x28c5c0u: goto label_28c5c0;
        case 0x28c5c4u: goto label_28c5c4;
        case 0x28c5c8u: goto label_28c5c8;
        case 0x28c5ccu: goto label_28c5cc;
        case 0x28c5d0u: goto label_28c5d0;
        case 0x28c5d4u: goto label_28c5d4;
        case 0x28c5d8u: goto label_28c5d8;
        case 0x28c5dcu: goto label_28c5dc;
        case 0x28c5e0u: goto label_28c5e0;
        case 0x28c5e4u: goto label_28c5e4;
        case 0x28c5e8u: goto label_28c5e8;
        case 0x28c5ecu: goto label_28c5ec;
        case 0x28c5f0u: goto label_28c5f0;
        case 0x28c5f4u: goto label_28c5f4;
        case 0x28c5f8u: goto label_28c5f8;
        case 0x28c5fcu: goto label_28c5fc;
        case 0x28c600u: goto label_28c600;
        case 0x28c604u: goto label_28c604;
        case 0x28c608u: goto label_28c608;
        case 0x28c60cu: goto label_28c60c;
        case 0x28c610u: goto label_28c610;
        case 0x28c614u: goto label_28c614;
        case 0x28c618u: goto label_28c618;
        case 0x28c61cu: goto label_28c61c;
        case 0x28c620u: goto label_28c620;
        case 0x28c624u: goto label_28c624;
        case 0x28c628u: goto label_28c628;
        case 0x28c62cu: goto label_28c62c;
        case 0x28c630u: goto label_28c630;
        case 0x28c634u: goto label_28c634;
        case 0x28c638u: goto label_28c638;
        case 0x28c63cu: goto label_28c63c;
        case 0x28c640u: goto label_28c640;
        case 0x28c644u: goto label_28c644;
        case 0x28c648u: goto label_28c648;
        case 0x28c64cu: goto label_28c64c;
        case 0x28c650u: goto label_28c650;
        case 0x28c654u: goto label_28c654;
        case 0x28c658u: goto label_28c658;
        case 0x28c65cu: goto label_28c65c;
        case 0x28c660u: goto label_28c660;
        case 0x28c664u: goto label_28c664;
        case 0x28c668u: goto label_28c668;
        case 0x28c66cu: goto label_28c66c;
        case 0x28c670u: goto label_28c670;
        case 0x28c674u: goto label_28c674;
        default: break;
    }

    ctx->pc = 0x28c4a8u;

label_28c4a8:
    // 0x28c4a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28c4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_28c4ac:
    // 0x28c4ac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x28c4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28c4b0:
    // 0x28c4b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x28c4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_28c4b4:
    // 0x28c4b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28c4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28c4b8:
    // 0x28c4b8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x28c4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_28c4bc:
    // 0x28c4bc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x28c4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_28c4c0:
    // 0x28c4c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x28c4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_28c4c4:
    // 0x28c4c4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x28c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_28c4c8:
    // 0x28c4c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28c4cc:
    // 0x28c4cc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x28c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_28c4d0:
    // 0x28c4d0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x28c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_28c4d4:
    // 0x28c4d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28c4d8:
    // 0x28c4d8: 0xc093546  jal         func_24D518
label_28c4dc:
    if (ctx->pc == 0x28C4DCu) {
        ctx->pc = 0x28C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4D8u;
        // 0x28c4dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4E0u;
        goto label_28c4e0;
    }
    ctx->pc = 0x28C4D8u;
    SET_GPR_U32(ctx, 31, 0x28C4E0u);
    ctx->pc = 0x28C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4D8u;
    // 0x28c4dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x28C4D8u, 0x28C4E0u)) {
        return;
    }
    ctx->pc = 0x28C4E0u;
label_28c4e0:
    // 0x28c4e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x28c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28c4e4:
    // 0x28c4e4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_28c4e8:
    if (ctx->pc == 0x28C4E8u) {
        ctx->pc = 0x28C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4E4u;
        // 0x28c4e8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4ECu;
        goto label_28c4ec;
    }
    ctx->pc = 0x28C4E4u;
    {
        const bool branch_taken_0x28c4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4E4u;
        // 0x28c4e8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4e4) {
            ctx->pc = 0x28C4F4u;
            goto label_28c4f4;
        }
    }
    ctx->pc = 0x28C4ECu;
label_28c4ec:
    // 0x28c4ec: 0x10000056  b           . + 4 + (0x56 << 2)
label_28c4f0:
    if (ctx->pc == 0x28C4F0u) {
        ctx->pc = 0x28C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4ECu;
        // 0x28c4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4F4u;
        goto label_28c4f4;
    }
    ctx->pc = 0x28C4ECu;
    {
        const bool branch_taken_0x28c4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4ECu;
        // 0x28c4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4ec) {
            ctx->pc = 0x28C648u;
            goto label_28c648;
        }
    }
    ctx->pc = 0x28C4F4u;
label_28c4f4:
    // 0x28c4f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28c4f8:
    // 0x28c4f8: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x28c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_28c4fc:
    // 0x28c4fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x28c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28c500:
    // 0x28c500: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x28c500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28c504:
    // 0x28c504: 0x40f809  jalr        $v0
label_28c508:
    if (ctx->pc == 0x28C508u) {
        ctx->pc = 0x28C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C504u;
        // 0x28c508: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C50Cu;
        goto label_28c50c;
    }
    ctx->pc = 0x28C504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C50Cu);
        ctx->pc = 0x28C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C504u;
        // 0x28c508: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C504u, 0x28C50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C50Cu;
label_28c50c:
    // 0x28c50c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28c50cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c510:
    // 0x28c510: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28c510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28c514:
    // 0x28c514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c518:
    // 0x28c518: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x28c518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28c51c:
    // 0x28c51c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x28c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_28c520:
    // 0x28c520: 0xc092858  jal         func_24A160
label_28c524:
    if (ctx->pc == 0x28C524u) {
        ctx->pc = 0x28C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C520u;
        // 0x28c524: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C528u;
        goto label_28c528;
    }
    ctx->pc = 0x28C520u;
    SET_GPR_U32(ctx, 31, 0x28C528u);
    ctx->pc = 0x28C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C520u;
    // 0x28c524: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x28C520u, 0x28C528u)) {
        return;
    }
    ctx->pc = 0x28C528u;
label_28c528:
    // 0x28c528: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x28c528u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_28c52c:
    // 0x28c52c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_28c530:
    if (ctx->pc == 0x28C530u) {
        ctx->pc = 0x28C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C52Cu;
        // 0x28c530: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C534u;
        goto label_28c534;
    }
    ctx->pc = 0x28C52Cu;
    {
        const bool branch_taken_0x28c52c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C52Cu;
        // 0x28c530: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c52c) {
            ctx->pc = 0x28C548u;
            goto label_28c548;
        }
    }
    ctx->pc = 0x28C534u;
label_28c534:
    // 0x28c534: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x28c534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_28c538:
    // 0x28c538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c53c:
    // 0x28c53c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c540:
    // 0x28c540: 0xc0928de  jal         func_24A378
label_28c544:
    if (ctx->pc == 0x28C544u) {
        ctx->pc = 0x28C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C540u;
        // 0x28c544: 0x34c601a4  ori         $a2, $a2, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C548u;
        goto label_28c548;
    }
    ctx->pc = 0x28C540u;
    SET_GPR_U32(ctx, 31, 0x28C548u);
    ctx->pc = 0x28C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C540u;
    // 0x28c544: 0x34c601a4  ori         $a2, $a2, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x28C540u, 0x28C548u)) {
        return;
    }
    ctx->pc = 0x28C548u;
label_28c548:
    // 0x28c548: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x28c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_28c54c:
    // 0x28c54c: 0xc09292a  jal         func_24A4A8
label_28c550:
    if (ctx->pc == 0x28C550u) {
        ctx->pc = 0x28C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C54Cu;
        // 0x28c550: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C554u;
        goto label_28c554;
    }
    ctx->pc = 0x28C54Cu;
    SET_GPR_U32(ctx, 31, 0x28C554u);
    ctx->pc = 0x28C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C54Cu;
    // 0x28c550: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28C54Cu, 0x28C554u)) {
        return;
    }
    ctx->pc = 0x28C554u;
label_28c554:
    // 0x28c554: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28c554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28c558:
    // 0x28c558: 0x18600037  blez        $v1, . + 4 + (0x37 << 2)
label_28c55c:
    if (ctx->pc == 0x28C55Cu) {
        ctx->pc = 0x28C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C558u;
        // 0x28c55c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C560u;
        goto label_28c560;
    }
    ctx->pc = 0x28C558u;
    {
        const bool branch_taken_0x28c558 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x28C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C558u;
        // 0x28c55c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c558) {
            ctx->pc = 0x28C638u;
            goto label_28c638;
        }
    }
    ctx->pc = 0x28C560u;
label_28c560:
    // 0x28c560: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x28c560u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28c564:
    // 0x28c564: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x28c564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_28c568:
    // 0x28c568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28c568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c56c:
    // 0x28c56c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28c570:
    // 0x28c570: 0xc093546  jal         func_24D518
label_28c574:
    if (ctx->pc == 0x28C574u) {
        ctx->pc = 0x28C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C570u;
        // 0x28c574: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C578u;
        goto label_28c578;
    }
    ctx->pc = 0x28C570u;
    SET_GPR_U32(ctx, 31, 0x28C578u);
    ctx->pc = 0x28C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C570u;
    // 0x28c574: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x28C570u, 0x28C578u)) {
        return;
    }
    ctx->pc = 0x28C578u;
label_28c578:
    // 0x28c578: 0x1457ffdc  bne         $v0, $s7, . + 4 + (-0x24 << 2)
label_28c57c:
    if (ctx->pc == 0x28C57Cu) {
        ctx->pc = 0x28C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C578u;
        // 0x28c57c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C580u;
        goto label_28c580;
    }
    ctx->pc = 0x28C578u;
    {
        const bool branch_taken_0x28c578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x28C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C578u;
        // 0x28c57c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c578) {
            ctx->pc = 0x28C4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c4ec;
        }
    }
    ctx->pc = 0x28C580u;
label_28c580:
    // 0x28c580: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_28c584:
    // 0x28c584: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_28c588:
    if (ctx->pc == 0x28C588u) {
        ctx->pc = 0x28C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C584u;
        // 0x28c588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C58Cu;
        goto label_28c58c;
    }
    ctx->pc = 0x28C584u;
    {
        const bool branch_taken_0x28c584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C584u;
        // 0x28c588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c584) {
            ctx->pc = 0x28C618u;
            goto label_28c618;
        }
    }
    ctx->pc = 0x28C58Cu;
label_28c58c:
    // 0x28c58c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28c58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c590:
    // 0x28c590: 0xc0927be  jal         func_249EF8
label_28c594:
    if (ctx->pc == 0x28C594u) {
        ctx->pc = 0x28C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C590u;
        // 0x28c594: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C598u;
        goto label_28c598;
    }
    ctx->pc = 0x28C590u;
    SET_GPR_U32(ctx, 31, 0x28C598u);
    ctx->pc = 0x28C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C590u;
    // 0x28c594: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x28C590u, 0x28C598u)) {
        return;
    }
    ctx->pc = 0x28C598u;
label_28c598:
    // 0x28c598: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x28c598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_28c59c:
    // 0x28c59c: 0x27b20018  addiu       $s2, $sp, 0x18
    ctx->pc = 0x28c59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_28c5a0:
    // 0x28c5a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c5a4:
    // 0x28c5a4: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x28c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
label_28c5a8:
    // 0x28c5a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28c5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c5ac:
    // 0x28c5ac: 0xc09270a  jal         func_249C28
label_28c5b0:
    if (ctx->pc == 0x28C5B0u) {
        ctx->pc = 0x28C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5ACu;
        // 0x28c5b0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5B4u;
        goto label_28c5b4;
    }
    ctx->pc = 0x28C5ACu;
    SET_GPR_U32(ctx, 31, 0x28C5B4u);
    ctx->pc = 0x28C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5ACu;
    // 0x28c5b0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x28C5ACu, 0x28C5B4u)) {
        return;
    }
    ctx->pc = 0x28C5B4u;
label_28c5b4:
    // 0x28c5b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_28c5b8:
    if (ctx->pc == 0x28C5B8u) {
        ctx->pc = 0x28C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5B4u;
        // 0x28c5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5BCu;
        goto label_28c5bc;
    }
    ctx->pc = 0x28C5B4u;
    {
        const bool branch_taken_0x28c5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5B4u;
        // 0x28c5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5b4) {
            ctx->pc = 0x28C648u;
            goto label_28c648;
        }
    }
    ctx->pc = 0x28C5BCu;
label_28c5bc:
    // 0x28c5bc: 0xc0a228a  jal         func_288A28
label_28c5c0:
    if (ctx->pc == 0x28C5C0u) {
        ctx->pc = 0x28C5C4u;
        goto label_28c5c4;
    }
    ctx->pc = 0x28C5BCu;
    SET_GPR_U32(ctx, 31, 0x28C5C4u);
    ctx->pc = 0x288A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A28u, 0x28C5BCu, 0x28C5C4u)) {
        return;
    }
    ctx->pc = 0x28C5C4u;
label_28c5c4:
    // 0x28c5c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c5c8:
    // 0x28c5c8: 0xc0a2310  jal         func_288C40
label_28c5cc:
    if (ctx->pc == 0x28C5CCu) {
        ctx->pc = 0x28C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5C8u;
        // 0x28c5cc: 0xae02fffc  sw          $v0, -0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5D0u;
        goto label_28c5d0;
    }
    ctx->pc = 0x28C5C8u;
    SET_GPR_U32(ctx, 31, 0x28C5D0u);
    ctx->pc = 0x28C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5C8u;
    // 0x28c5cc: 0xae02fffc  sw          $v0, -0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288C40u, 0x28C5C8u, 0x28C5D0u)) {
        return;
    }
    ctx->pc = 0x28C5D0u;
label_28c5d0:
    // 0x28c5d0: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x28c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_28c5d4:
    // 0x28c5d4: 0xc0a244c  jal         func_289130
label_28c5d8:
    if (ctx->pc == 0x28C5D8u) {
        ctx->pc = 0x28C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5D4u;
        // 0x28c5d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5DCu;
        goto label_28c5dc;
    }
    ctx->pc = 0x28C5D4u;
    SET_GPR_U32(ctx, 31, 0x28C5DCu);
    ctx->pc = 0x28C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5D4u;
    // 0x28c5d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289130u, 0x28C5D4u, 0x28C5DCu)) {
        return;
    }
    ctx->pc = 0x28C5DCu;
label_28c5dc:
    // 0x28c5dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28c5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c5e0:
    // 0x28c5e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28c5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c5e4:
    // 0x28c5e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28c5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c5e8:
    // 0x28c5e8: 0xc09270a  jal         func_249C28
label_28c5ec:
    if (ctx->pc == 0x28C5ECu) {
        ctx->pc = 0x28C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5E8u;
        // 0x28c5ec: 0x240501a2  addiu       $a1, $zero, 0x1A2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5F0u;
        goto label_28c5f0;
    }
    ctx->pc = 0x28C5E8u;
    SET_GPR_U32(ctx, 31, 0x28C5F0u);
    ctx->pc = 0x28C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5E8u;
    // 0x28c5ec: 0x240501a2  addiu       $a1, $zero, 0x1A2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x28C5E8u, 0x28C5F0u)) {
        return;
    }
    ctx->pc = 0x28C5F0u;
label_28c5f0:
    // 0x28c5f0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_28c5f4:
    if (ctx->pc == 0x28C5F4u) {
        ctx->pc = 0x28C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5F0u;
        // 0x28c5f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5F8u;
        goto label_28c5f8;
    }
    ctx->pc = 0x28C5F0u;
    {
        const bool branch_taken_0x28c5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5F0u;
        // 0x28c5f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5f0) {
            ctx->pc = 0x28C648u;
            goto label_28c648;
        }
    }
    ctx->pc = 0x28C5F8u;
label_28c5f8:
    // 0x28c5f8: 0xc0a3bda  jal         func_28EF68
label_28c5fc:
    if (ctx->pc == 0x28C5FCu) {
        ctx->pc = 0x28C600u;
        goto label_28c600;
    }
    ctx->pc = 0x28C5F8u;
    SET_GPR_U32(ctx, 31, 0x28C600u);
    ctx->pc = 0x28EF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EF68u, 0x28C5F8u, 0x28C600u)) {
        return;
    }
    ctx->pc = 0x28C600u;
label_28c600:
    // 0x28c600: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28c600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c604:
    // 0x28c604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c608:
    // 0x28c608: 0xc0a3cdc  jal         func_28F370
label_28c60c:
    if (ctx->pc == 0x28C60Cu) {
        ctx->pc = 0x28C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C608u;
        // 0x28c60c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C610u;
        goto label_28c610;
    }
    ctx->pc = 0x28C608u;
    SET_GPR_U32(ctx, 31, 0x28C610u);
    ctx->pc = 0x28C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C608u;
    // 0x28c60c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F370u, 0x28C608u, 0x28C610u)) {
        return;
    }
    ctx->pc = 0x28C610u;
label_28c610:
    // 0x28c610: 0x10000004  b           . + 4 + (0x4 << 2)
label_28c614:
    if (ctx->pc == 0x28C614u) {
        ctx->pc = 0x28C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C610u;
        // 0x28c614: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C618u;
        goto label_28c618;
    }
    ctx->pc = 0x28C610u;
    {
        const bool branch_taken_0x28c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C610u;
        // 0x28c614: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c610) {
            ctx->pc = 0x28C624u;
            goto label_28c624;
        }
    }
    ctx->pc = 0x28C618u;
label_28c618:
    // 0x28c618: 0xae00fffc  sw          $zero, -0x4($s0)
    ctx->pc = 0x28c618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
label_28c61c:
    // 0x28c61c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x28c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_28c620:
    // 0x28c620: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x28c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28c624:
    // 0x28c624: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28c624u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28c628:
    // 0x28c628: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x28c628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_28c62c:
    // 0x28c62c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x28c62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28c630:
    // 0x28c630: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_28c634:
    if (ctx->pc == 0x28C634u) {
        ctx->pc = 0x28C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C630u;
        // 0x28c634: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C638u;
        goto label_28c638;
    }
    ctx->pc = 0x28C630u;
    {
        const bool branch_taken_0x28c630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C630u;
        // 0x28c634: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c630) {
            ctx->pc = 0x28C568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c568;
        }
    }
    ctx->pc = 0x28C638u;
label_28c638:
    // 0x28c638: 0xc0a2f5c  jal         func_28BD70
label_28c63c:
    if (ctx->pc == 0x28C63Cu) {
        ctx->pc = 0x28C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C638u;
        // 0x28c63c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C640u;
        goto label_28c640;
    }
    ctx->pc = 0x28C638u;
    SET_GPR_U32(ctx, 31, 0x28C640u);
    ctx->pc = 0x28C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C638u;
    // 0x28c63c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28BD70u, 0x28C638u, 0x28C640u)) {
        return;
    }
    ctx->pc = 0x28C640u;
label_28c640:
    // 0x28c640: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x28c640u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_28c644:
    // 0x28c644: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x28c644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c648:
    // 0x28c648: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x28c648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28c64c:
    // 0x28c64c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x28c64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28c650:
    // 0x28c650: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x28c650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28c654:
    // 0x28c654: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x28c654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28c658:
    // 0x28c658: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x28c658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28c65c:
    // 0x28c65c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28c65cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28c660:
    // 0x28c660: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x28c660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c664:
    // 0x28c664: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x28c664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28c668:
    // 0x28c668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28c668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28c66c:
    // 0x28c66c: 0x3e00008  jr          $ra
label_28c670:
    if (ctx->pc == 0x28C670u) {
        ctx->pc = 0x28C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C66Cu;
        // 0x28c670: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C674u;
        goto label_28c674;
    }
    ctx->pc = 0x28C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C66Cu;
        // 0x28c670: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C674u;
label_28c674:
    // 0x28c674: 0x0  nop
    ctx->pc = 0x28c674u;
    // NOP
    ctx->pc = 0x28c678u;
}
