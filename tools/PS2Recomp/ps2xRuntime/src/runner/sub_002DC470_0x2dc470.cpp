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

// Function: sub_002DC470
// Address: 0x2dc470 - 0x2dc590
void sub_002DC470_0x2dc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC470_0x2dc470");
#endif

    switch (ctx->pc) {
        case 0x2dc470u: goto label_2dc470;
        case 0x2dc474u: goto label_2dc474;
        case 0x2dc478u: goto label_2dc478;
        case 0x2dc47cu: goto label_2dc47c;
        case 0x2dc480u: goto label_2dc480;
        case 0x2dc484u: goto label_2dc484;
        case 0x2dc488u: goto label_2dc488;
        case 0x2dc48cu: goto label_2dc48c;
        case 0x2dc490u: goto label_2dc490;
        case 0x2dc494u: goto label_2dc494;
        case 0x2dc498u: goto label_2dc498;
        case 0x2dc49cu: goto label_2dc49c;
        case 0x2dc4a0u: goto label_2dc4a0;
        case 0x2dc4a4u: goto label_2dc4a4;
        case 0x2dc4a8u: goto label_2dc4a8;
        case 0x2dc4acu: goto label_2dc4ac;
        case 0x2dc4b0u: goto label_2dc4b0;
        case 0x2dc4b4u: goto label_2dc4b4;
        case 0x2dc4b8u: goto label_2dc4b8;
        case 0x2dc4bcu: goto label_2dc4bc;
        case 0x2dc4c0u: goto label_2dc4c0;
        case 0x2dc4c4u: goto label_2dc4c4;
        case 0x2dc4c8u: goto label_2dc4c8;
        case 0x2dc4ccu: goto label_2dc4cc;
        case 0x2dc4d0u: goto label_2dc4d0;
        case 0x2dc4d4u: goto label_2dc4d4;
        case 0x2dc4d8u: goto label_2dc4d8;
        case 0x2dc4dcu: goto label_2dc4dc;
        case 0x2dc4e0u: goto label_2dc4e0;
        case 0x2dc4e4u: goto label_2dc4e4;
        case 0x2dc4e8u: goto label_2dc4e8;
        case 0x2dc4ecu: goto label_2dc4ec;
        case 0x2dc4f0u: goto label_2dc4f0;
        case 0x2dc4f4u: goto label_2dc4f4;
        case 0x2dc4f8u: goto label_2dc4f8;
        case 0x2dc4fcu: goto label_2dc4fc;
        case 0x2dc500u: goto label_2dc500;
        case 0x2dc504u: goto label_2dc504;
        case 0x2dc508u: goto label_2dc508;
        case 0x2dc50cu: goto label_2dc50c;
        case 0x2dc510u: goto label_2dc510;
        case 0x2dc514u: goto label_2dc514;
        case 0x2dc518u: goto label_2dc518;
        case 0x2dc51cu: goto label_2dc51c;
        case 0x2dc520u: goto label_2dc520;
        case 0x2dc524u: goto label_2dc524;
        case 0x2dc528u: goto label_2dc528;
        case 0x2dc52cu: goto label_2dc52c;
        case 0x2dc530u: goto label_2dc530;
        case 0x2dc534u: goto label_2dc534;
        case 0x2dc538u: goto label_2dc538;
        case 0x2dc53cu: goto label_2dc53c;
        case 0x2dc540u: goto label_2dc540;
        case 0x2dc544u: goto label_2dc544;
        case 0x2dc548u: goto label_2dc548;
        case 0x2dc54cu: goto label_2dc54c;
        case 0x2dc550u: goto label_2dc550;
        case 0x2dc554u: goto label_2dc554;
        case 0x2dc558u: goto label_2dc558;
        case 0x2dc55cu: goto label_2dc55c;
        case 0x2dc560u: goto label_2dc560;
        case 0x2dc564u: goto label_2dc564;
        case 0x2dc568u: goto label_2dc568;
        case 0x2dc56cu: goto label_2dc56c;
        case 0x2dc570u: goto label_2dc570;
        case 0x2dc574u: goto label_2dc574;
        case 0x2dc578u: goto label_2dc578;
        case 0x2dc57cu: goto label_2dc57c;
        case 0x2dc580u: goto label_2dc580;
        case 0x2dc584u: goto label_2dc584;
        case 0x2dc588u: goto label_2dc588;
        case 0x2dc58cu: goto label_2dc58c;
        default: break;
    }

    ctx->pc = 0x2dc470u;

label_2dc470:
    // 0x2dc470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2dc474:
    // 0x2dc474: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2dc474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2dc478:
    // 0x2dc478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dc47c:
    // 0x2dc47c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2dc47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2dc480:
    // 0x2dc480: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dc480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2dc484:
    // 0x2dc484: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dc484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dc488:
    // 0x2dc488: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2dc488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2dc48c:
    // 0x2dc48c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2dc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dc490:
    // 0x2dc490: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2dc490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2dc494:
    // 0x2dc494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dc498:
    // 0x2dc498: 0xc0b71b2  jal         func_2DC6C8
label_2dc49c:
    if (ctx->pc == 0x2DC49Cu) {
        ctx->pc = 0x2DC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC498u;
        // 0x2dc49c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC4A0u;
        goto label_2dc4a0;
    }
    ctx->pc = 0x2DC498u;
    SET_GPR_U32(ctx, 31, 0x2DC4A0u);
    ctx->pc = 0x2DC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC498u;
    // 0x2dc49c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC6C8u, 0x2DC498u, 0x2DC4A0u)) {
        return;
    }
    ctx->pc = 0x2DC4A0u;
label_2dc4a0:
    // 0x2dc4a0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2dc4a4:
    // 0x2dc4a4: 0xaf918bb8  sw          $s1, -0x7448($gp)
    ctx->pc = 0x2dc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937528), GPR_U32(ctx, 17));
label_2dc4a8:
    // 0x2dc4a8: 0x245342f0  addiu       $s3, $v0, 0x42F0
    ctx->pc = 0x2dc4a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17136));
label_2dc4ac:
    // 0x2dc4ac: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
label_2dc4b0:
    // 0x2dc4b0: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_2dc4b4:
    // 0x2dc4b4: 0xaf908bc8  sw          $s0, -0x7438($gp)
    ctx->pc = 0x2dc4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937544), GPR_U32(ctx, 16));
label_2dc4b8:
    // 0x2dc4b8: 0x2471c7a8  addiu       $s1, $v1, -0x3858
    ctx->pc = 0x2dc4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952872));
label_2dc4bc:
    // 0x2dc4bc: 0x2454c7f8  addiu       $s4, $v0, -0x3808
    ctx->pc = 0x2dc4bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952952));
label_2dc4c0:
    // 0x2dc4c0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2dc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2dc4c4:
    // 0x2dc4c4: 0x0  nop
    ctx->pc = 0x2dc4c4u;
    // NOP
label_2dc4c8:
    // 0x2dc4c8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x2dc4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2dc4cc:
    // 0x2dc4cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dc4d0:
    // 0x2dc4d0: 0x40f809  jalr        $v0
label_2dc4d4:
    if (ctx->pc == 0x2DC4D4u) {
        ctx->pc = 0x2DC4D8u;
        goto label_2dc4d8;
    }
    ctx->pc = 0x2DC4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DC4D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC4D0u, 0x2DC4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC4D8u;
label_2dc4d8:
    // 0x2dc4d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dc4dc:
    if (ctx->pc == 0x2DC4DCu) {
        ctx->pc = 0x2DC4E0u;
        goto label_2dc4e0;
    }
    ctx->pc = 0x2DC4D8u;
    {
        const bool branch_taken_0x2dc4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4d8) {
            ctx->pc = 0x2DC4F8u;
            goto label_2dc4f8;
        }
    }
    ctx->pc = 0x2DC4E0u;
label_2dc4e0:
    // 0x2dc4e0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_2dc4e4:
    if (ctx->pc == 0x2DC4E4u) {
        ctx->pc = 0x2DC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4E0u;
        // 0x2dc4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC4E8u;
        goto label_2dc4e8;
    }
    ctx->pc = 0x2DC4E0u;
    {
        const bool branch_taken_0x2dc4e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4E0u;
        // 0x2dc4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4e0) {
            ctx->pc = 0x2DC4F0u;
            goto label_2dc4f0;
        }
    }
    ctx->pc = 0x2DC4E8u;
label_2dc4e8:
    // 0x2dc4e8: 0x220f809  jalr        $s1
label_2dc4ec:
    if (ctx->pc == 0x2DC4ECu) {
        ctx->pc = 0x2DC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4E8u;
        // 0x2dc4ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC4F0u;
        goto label_2dc4f0;
    }
    ctx->pc = 0x2DC4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x2DC4F0u);
        ctx->pc = 0x2DC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4E8u;
        // 0x2dc4ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC4E8u, 0x2DC4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC4F0u;
label_2dc4f0:
    // 0x2dc4f0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2dc4f4:
    if (ctx->pc == 0x2DC4F4u) {
        ctx->pc = 0x2DC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4F0u;
        // 0x2dc4f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC4F8u;
        goto label_2dc4f8;
    }
    ctx->pc = 0x2DC4F0u;
    {
        const bool branch_taken_0x2dc4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4F0u;
        // 0x2dc4f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4f0) {
            ctx->pc = 0x2DC540u;
            goto label_2dc540;
        }
    }
    ctx->pc = 0x2DC4F8u;
label_2dc4f8:
    // 0x2dc4f8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_2dc4fc:
    if (ctx->pc == 0x2DC4FCu) {
        ctx->pc = 0x2DC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4F8u;
        // 0x2dc4fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC500u;
        goto label_2dc500;
    }
    ctx->pc = 0x2DC4F8u;
    {
        const bool branch_taken_0x2dc4f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4F8u;
        // 0x2dc4fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4f8) {
            ctx->pc = 0x2DC550u;
            goto label_2dc550;
        }
    }
    ctx->pc = 0x2DC500u;
label_2dc500:
    // 0x2dc500: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x2dc500u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2dc504:
    // 0x2dc504: 0x0  nop
    ctx->pc = 0x2dc504u;
    // NOP
label_2dc508:
    // 0x2dc508: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x2dc508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_2dc50c:
    // 0x2dc50c: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x2dc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2dc510:
    // 0x2dc510: 0x60f809  jalr        $v1
label_2dc514:
    if (ctx->pc == 0x2DC514u) {
        ctx->pc = 0x2DC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC510u;
        // 0x2dc514: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC518u;
        goto label_2dc518;
    }
    ctx->pc = 0x2DC510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DC518u);
        ctx->pc = 0x2DC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC510u;
        // 0x2dc514: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC510u, 0x2DC518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC518u;
label_2dc518:
    // 0x2dc518: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2dc51c:
    if (ctx->pc == 0x2DC51Cu) {
        ctx->pc = 0x2DC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC518u;
        // 0x2dc51c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC520u;
        goto label_2dc520;
    }
    ctx->pc = 0x2DC518u;
    {
        const bool branch_taken_0x2dc518 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC518u;
        // 0x2dc51c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc518) {
            ctx->pc = 0x2DC52Cu;
            goto label_2dc52c;
        }
    }
    ctx->pc = 0x2DC520u;
label_2dc520:
    // 0x2dc520: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x2dc520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_2dc524:
    // 0x2dc524: 0x280f809  jalr        $s4
label_2dc528:
    if (ctx->pc == 0x2DC528u) {
        ctx->pc = 0x2DC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC524u;
        // 0x2dc528: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC52Cu;
        goto label_2dc52c;
    }
    ctx->pc = 0x2DC524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2DC52Cu);
        ctx->pc = 0x2DC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC524u;
        // 0x2dc528: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC524u, 0x2DC52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC52Cu;
label_2dc52c:
    // 0x2dc52c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2dc52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc530:
    // 0x2dc530: 0x1640fff5  bnez        $s2, . + 4 + (-0xB << 2)
label_2dc534:
    if (ctx->pc == 0x2DC534u) {
        ctx->pc = 0x2DC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC530u;
        // 0x2dc534: 0x1280c0  sll         $s0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC538u;
        goto label_2dc538;
    }
    ctx->pc = 0x2DC530u;
    {
        const bool branch_taken_0x2dc530 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC530u;
        // 0x2dc534: 0x1280c0  sll         $s0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc530) {
            ctx->pc = 0x2DC508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc508;
        }
    }
    ctx->pc = 0x2DC538u;
label_2dc538:
    // 0x2dc538: 0x10000005  b           . + 4 + (0x5 << 2)
label_2dc53c:
    if (ctx->pc == 0x2DC53Cu) {
        ctx->pc = 0x2DC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC538u;
        // 0x2dc53c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC540u;
        goto label_2dc540;
    }
    ctx->pc = 0x2DC538u;
    {
        const bool branch_taken_0x2dc538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC538u;
        // 0x2dc53c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc538) {
            ctx->pc = 0x2DC550u;
            goto label_2dc550;
        }
    }
    ctx->pc = 0x2DC540u;
label_2dc540:
    // 0x2dc540: 0x2e42000f  sltiu       $v0, $s2, 0xF
    ctx->pc = 0x2dc540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_2dc544:
    // 0x2dc544: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_2dc548:
    if (ctx->pc == 0x2DC548u) {
        ctx->pc = 0x2DC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC544u;
        // 0x2dc548: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC54Cu;
        goto label_2dc54c;
    }
    ctx->pc = 0x2DC544u;
    {
        const bool branch_taken_0x2dc544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC544u;
        // 0x2dc548: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc544) {
            ctx->pc = 0x2DC4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc4c8;
        }
    }
    ctx->pc = 0x2DC54Cu;
label_2dc54c:
    // 0x2dc54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc550:
    // 0x2dc550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc554:
    // 0x2dc554: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2dc558:
    if (ctx->pc == 0x2DC558u) {
        ctx->pc = 0x2DC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC554u;
        // 0x2dc558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC55Cu;
        goto label_2dc55c;
    }
    ctx->pc = 0x2DC554u;
    {
        const bool branch_taken_0x2dc554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC554u;
        // 0x2dc558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc554) {
            ctx->pc = 0x2DC56Cu;
            goto label_2dc56c;
        }
    }
    ctx->pc = 0x2DC55Cu;
label_2dc55c:
    // 0x2dc55c: 0xaf838bb0  sw          $v1, -0x7450($gp)
    ctx->pc = 0x2dc55cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937520), GPR_U32(ctx, 3));
label_2dc560:
    // 0x2dc560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc564:
    // 0x2dc564: 0xaf808bc4  sw          $zero, -0x743C($gp)
    ctx->pc = 0x2dc564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), GPR_U32(ctx, 0));
label_2dc568:
    // 0x2dc568: 0xaf808bc0  sw          $zero, -0x7440($gp)
    ctx->pc = 0x2dc568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U32(ctx, 0));
label_2dc56c:
    // 0x2dc56c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2dc56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc570:
    // 0x2dc570: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2dc570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dc574:
    // 0x2dc574: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dc574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dc578:
    // 0x2dc578: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2dc578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc57c:
    // 0x2dc57c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2dc57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc580:
    // 0x2dc580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc584:
    // 0x2dc584: 0x3e00008  jr          $ra
label_2dc588:
    if (ctx->pc == 0x2DC588u) {
        ctx->pc = 0x2DC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC584u;
        // 0x2dc588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC58Cu;
        goto label_2dc58c;
    }
    ctx->pc = 0x2DC584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC584u;
        // 0x2dc588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC58Cu;
label_2dc58c:
    // 0x2dc58c: 0x0  nop
    ctx->pc = 0x2dc58cu;
    // NOP
    ctx->pc = 0x2dc590u;
}
