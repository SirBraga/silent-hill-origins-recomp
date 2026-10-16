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

// Function: sub_001DC470
// Address: 0x1dc470 - 0x1dc588
void sub_001DC470_0x1dc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC470_0x1dc470");
#endif

    switch (ctx->pc) {
        case 0x1dc470u: goto label_1dc470;
        case 0x1dc474u: goto label_1dc474;
        case 0x1dc478u: goto label_1dc478;
        case 0x1dc47cu: goto label_1dc47c;
        case 0x1dc480u: goto label_1dc480;
        case 0x1dc484u: goto label_1dc484;
        case 0x1dc488u: goto label_1dc488;
        case 0x1dc48cu: goto label_1dc48c;
        case 0x1dc490u: goto label_1dc490;
        case 0x1dc494u: goto label_1dc494;
        case 0x1dc498u: goto label_1dc498;
        case 0x1dc49cu: goto label_1dc49c;
        case 0x1dc4a0u: goto label_1dc4a0;
        case 0x1dc4a4u: goto label_1dc4a4;
        case 0x1dc4a8u: goto label_1dc4a8;
        case 0x1dc4acu: goto label_1dc4ac;
        case 0x1dc4b0u: goto label_1dc4b0;
        case 0x1dc4b4u: goto label_1dc4b4;
        case 0x1dc4b8u: goto label_1dc4b8;
        case 0x1dc4bcu: goto label_1dc4bc;
        case 0x1dc4c0u: goto label_1dc4c0;
        case 0x1dc4c4u: goto label_1dc4c4;
        case 0x1dc4c8u: goto label_1dc4c8;
        case 0x1dc4ccu: goto label_1dc4cc;
        case 0x1dc4d0u: goto label_1dc4d0;
        case 0x1dc4d4u: goto label_1dc4d4;
        case 0x1dc4d8u: goto label_1dc4d8;
        case 0x1dc4dcu: goto label_1dc4dc;
        case 0x1dc4e0u: goto label_1dc4e0;
        case 0x1dc4e4u: goto label_1dc4e4;
        case 0x1dc4e8u: goto label_1dc4e8;
        case 0x1dc4ecu: goto label_1dc4ec;
        case 0x1dc4f0u: goto label_1dc4f0;
        case 0x1dc4f4u: goto label_1dc4f4;
        case 0x1dc4f8u: goto label_1dc4f8;
        case 0x1dc4fcu: goto label_1dc4fc;
        case 0x1dc500u: goto label_1dc500;
        case 0x1dc504u: goto label_1dc504;
        case 0x1dc508u: goto label_1dc508;
        case 0x1dc50cu: goto label_1dc50c;
        case 0x1dc510u: goto label_1dc510;
        case 0x1dc514u: goto label_1dc514;
        case 0x1dc518u: goto label_1dc518;
        case 0x1dc51cu: goto label_1dc51c;
        case 0x1dc520u: goto label_1dc520;
        case 0x1dc524u: goto label_1dc524;
        case 0x1dc528u: goto label_1dc528;
        case 0x1dc52cu: goto label_1dc52c;
        case 0x1dc530u: goto label_1dc530;
        case 0x1dc534u: goto label_1dc534;
        case 0x1dc538u: goto label_1dc538;
        case 0x1dc53cu: goto label_1dc53c;
        case 0x1dc540u: goto label_1dc540;
        case 0x1dc544u: goto label_1dc544;
        case 0x1dc548u: goto label_1dc548;
        case 0x1dc54cu: goto label_1dc54c;
        case 0x1dc550u: goto label_1dc550;
        case 0x1dc554u: goto label_1dc554;
        case 0x1dc558u: goto label_1dc558;
        case 0x1dc55cu: goto label_1dc55c;
        case 0x1dc560u: goto label_1dc560;
        case 0x1dc564u: goto label_1dc564;
        case 0x1dc568u: goto label_1dc568;
        case 0x1dc56cu: goto label_1dc56c;
        case 0x1dc570u: goto label_1dc570;
        case 0x1dc574u: goto label_1dc574;
        case 0x1dc578u: goto label_1dc578;
        case 0x1dc57cu: goto label_1dc57c;
        case 0x1dc580u: goto label_1dc580;
        case 0x1dc584u: goto label_1dc584;
        default: break;
    }

    ctx->pc = 0x1dc470u;

label_1dc470:
    // 0x1dc470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dc474:
    // 0x1dc474: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1dc474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1dc478:
    // 0x1dc478: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1dc478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1dc47c:
    // 0x1dc47c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dc47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1dc480:
    // 0x1dc480: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1dc480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1dc484:
    // 0x1dc484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dc488:
    // 0x1dc488: 0xc076d8e  jal         func_1DB638
label_1dc48c:
    if (ctx->pc == 0x1DC48Cu) {
        ctx->pc = 0x1DC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC488u;
        // 0x1dc48c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC490u;
        goto label_1dc490;
    }
    ctx->pc = 0x1DC488u;
    SET_GPR_U32(ctx, 31, 0x1DC490u);
    ctx->pc = 0x1DC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC488u;
    // 0x1dc48c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB638u, 0x1DC488u, 0x1DC490u)) {
        return;
    }
    ctx->pc = 0x1DC490u;
label_1dc490:
    // 0x1dc490: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc494:
    if (ctx->pc == 0x1DC494u) {
        ctx->pc = 0x1DC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC490u;
        // 0x1dc494: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC498u;
        goto label_1dc498;
    }
    ctx->pc = 0x1DC490u;
    {
        const bool branch_taken_0x1dc490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC490u;
        // 0x1dc494: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc490) {
            ctx->pc = 0x1DC4A4u;
            goto label_1dc4a4;
        }
    }
    ctx->pc = 0x1DC498u;
label_1dc498:
    // 0x1dc498: 0xc077e8c  jal         func_1DFA30
label_1dc49c:
    if (ctx->pc == 0x1DC49Cu) {
        ctx->pc = 0x1DC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC498u;
        // 0x1dc49c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4A0u;
        goto label_1dc4a0;
    }
    ctx->pc = 0x1DC498u;
    SET_GPR_U32(ctx, 31, 0x1DC4A0u);
    ctx->pc = 0x1DC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC498u;
    // 0x1dc49c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFA30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DFA30u, 0x1DC498u, 0x1DC4A0u)) {
        return;
    }
    ctx->pc = 0x1DC4A0u;
label_1dc4a0:
    // 0x1dc4a0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1dc4a4:
    // 0x1dc4a4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1dc4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dc4a8:
    // 0x1dc4a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dc4a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc4ac:
    // 0x1dc4ac: 0x24500fd8  addiu       $s0, $v0, 0xFD8
    ctx->pc = 0x1dc4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1dc4b0:
    // 0x1dc4b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1dc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1dc4b4:
    // 0x1dc4b4: 0x40f809  jalr        $v0
label_1dc4b8:
    if (ctx->pc == 0x1DC4B8u) {
        ctx->pc = 0x1DC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4B4u;
        // 0x1dc4b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4BCu;
        goto label_1dc4bc;
    }
    ctx->pc = 0x1DC4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC4BCu);
        ctx->pc = 0x1DC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4B4u;
        // 0x1dc4b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4B4u, 0x1DC4BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC4BCu;
label_1dc4bc:
    // 0x1dc4bc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1dc4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1dc4c0:
    // 0x1dc4c0: 0x8c62e664  lw          $v0, -0x199C($v1)
    ctx->pc = 0x1dc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960740)));
label_1dc4c4:
    // 0x1dc4c4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1dc4c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1dc4c8:
    // 0x1dc4c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dc4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dc4cc:
    // 0x1dc4cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dc4d0:
    // 0x1dc4d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1dc4d4:
    if (ctx->pc == 0x1DC4D4u) {
        ctx->pc = 0x1DC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4D0u;
        // 0x1dc4d4: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4D8u;
        goto label_1dc4d8;
    }
    ctx->pc = 0x1DC4D0u;
    {
        const bool branch_taken_0x1dc4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4D0u;
        // 0x1dc4d4: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4d0) {
            ctx->pc = 0x1DC4F0u;
            goto label_1dc4f0;
        }
    }
    ctx->pc = 0x1DC4D8u;
label_1dc4d8:
    // 0x1dc4d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc4dc:
    // 0x1dc4dc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1dc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dc4e0:
    // 0x1dc4e0: 0x40f809  jalr        $v0
label_1dc4e4:
    if (ctx->pc == 0x1DC4E4u) {
        ctx->pc = 0x1DC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4E0u;
        // 0x1dc4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4E8u;
        goto label_1dc4e8;
    }
    ctx->pc = 0x1DC4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC4E8u);
        ctx->pc = 0x1DC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4E0u;
        // 0x1dc4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4E0u, 0x1DC4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC4E8u;
label_1dc4e8:
    // 0x1dc4e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1dc4ec:
    if (ctx->pc == 0x1DC4ECu) {
        ctx->pc = 0x1DC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4E8u;
        // 0x1dc4ec: 0x8e45e664  lw          $a1, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4F0u;
        goto label_1dc4f0;
    }
    ctx->pc = 0x1DC4E8u;
    {
        const bool branch_taken_0x1dc4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4E8u;
        // 0x1dc4ec: 0x8e45e664  lw          $a1, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4e8) {
            ctx->pc = 0x1DC504u;
            goto label_1dc504;
        }
    }
    ctx->pc = 0x1DC4F0u;
label_1dc4f0:
    // 0x1dc4f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc4f4:
    // 0x1dc4f4: 0x8c65e640  lw          $a1, -0x19C0($v1)
    ctx->pc = 0x1dc4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960704)));
label_1dc4f8:
    // 0x1dc4f8: 0x40f809  jalr        $v0
label_1dc4fc:
    if (ctx->pc == 0x1DC4FCu) {
        ctx->pc = 0x1DC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F8u;
        // 0x1dc4fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC500u;
        goto label_1dc500;
    }
    ctx->pc = 0x1DC4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC500u);
        ctx->pc = 0x1DC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F8u;
        // 0x1dc4fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4F8u, 0x1DC500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC500u;
label_1dc500:
    // 0x1dc500: 0x8e45e664  lw          $a1, -0x199C($s2)
    ctx->pc = 0x1dc500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
label_1dc504:
    // 0x1dc504: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1dc504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1dc508:
    // 0x1dc508: 0x24c6e648  addiu       $a2, $a2, -0x19B8
    ctx->pc = 0x1dc508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960712));
label_1dc50c:
    // 0x1dc50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc510:
    // 0x1dc510: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1dc510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1dc514:
    // 0x1dc514: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x1dc514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_1dc518:
    // 0x1dc518: 0x2c430007  sltiu       $v1, $v0, 0x7
    ctx->pc = 0x1dc518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1dc51c:
    // 0x1dc51c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1dc51cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_1dc520:
    // 0x1dc520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dc524:
    // 0x1dc524: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dc524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1dc528:
    // 0x1dc528: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dc528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc52c:
    // 0x1dc52c: 0x60f809  jalr        $v1
label_1dc530:
    if (ctx->pc == 0x1DC530u) {
        ctx->pc = 0x1DC530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC52Cu;
        // 0x1dc530: 0x26700fd8  addiu       $s0, $s3, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC534u;
        goto label_1dc534;
    }
    ctx->pc = 0x1DC52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC534u);
        ctx->pc = 0x1DC530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC52Cu;
        // 0x1dc530: 0x26700fd8  addiu       $s0, $s3, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC52Cu, 0x1DC534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC534u;
label_1dc534:
    // 0x1dc534: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1dc534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc538:
    // 0x1dc538: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc53c:
    // 0x1dc53c: 0x40f809  jalr        $v0
label_1dc540:
    if (ctx->pc == 0x1DC540u) {
        ctx->pc = 0x1DC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC53Cu;
        // 0x1dc540: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC544u;
        goto label_1dc544;
    }
    ctx->pc = 0x1DC53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC544u);
        ctx->pc = 0x1DC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC53Cu;
        // 0x1dc540: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC53Cu, 0x1DC544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC544u;
label_1dc544:
    // 0x1dc544: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc548:
    // 0x1dc548: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1dc548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dc54c:
    // 0x1dc54c: 0x40f809  jalr        $v0
label_1dc550:
    if (ctx->pc == 0x1DC550u) {
        ctx->pc = 0x1DC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC54Cu;
        // 0x1dc550: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC554u;
        goto label_1dc554;
    }
    ctx->pc = 0x1DC54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC554u);
        ctx->pc = 0x1DC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC54Cu;
        // 0x1dc550: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC54Cu, 0x1DC554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC554u;
label_1dc554:
    // 0x1dc554: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc558:
    // 0x1dc558: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1dc558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dc55c:
    // 0x1dc55c: 0x40f809  jalr        $v0
label_1dc560:
    if (ctx->pc == 0x1DC560u) {
        ctx->pc = 0x1DC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC55Cu;
        // 0x1dc560: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC564u;
        goto label_1dc564;
    }
    ctx->pc = 0x1DC55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC564u);
        ctx->pc = 0x1DC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC55Cu;
        // 0x1dc560: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC55Cu, 0x1DC564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC564u;
label_1dc564:
    // 0x1dc564: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dc564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc568:
    // 0x1dc568: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1dc568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dc56c:
    // 0x1dc56c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1dc56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc570:
    // 0x1dc570: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dc570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc574:
    // 0x1dc574: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1dc574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc578:
    // 0x1dc578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc57c:
    // 0x1dc57c: 0x3e00008  jr          $ra
label_1dc580:
    if (ctx->pc == 0x1DC580u) {
        ctx->pc = 0x1DC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC57Cu;
        // 0x1dc580: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC584u;
        goto label_1dc584;
    }
    ctx->pc = 0x1DC57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC57Cu;
        // 0x1dc580: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC584u;
label_1dc584:
    // 0x1dc584: 0x0  nop
    ctx->pc = 0x1dc584u;
    // NOP
    ctx->pc = 0x1dc588u;
}
