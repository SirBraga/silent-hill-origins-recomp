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

// Function: sub_001BA468
// Address: 0x1ba468 - 0x1ba5f8
void sub_001BA468_0x1ba468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA468_0x1ba468");
#endif

    switch (ctx->pc) {
        case 0x1ba468u: goto label_1ba468;
        case 0x1ba46cu: goto label_1ba46c;
        case 0x1ba470u: goto label_1ba470;
        case 0x1ba474u: goto label_1ba474;
        case 0x1ba478u: goto label_1ba478;
        case 0x1ba47cu: goto label_1ba47c;
        case 0x1ba480u: goto label_1ba480;
        case 0x1ba484u: goto label_1ba484;
        case 0x1ba488u: goto label_1ba488;
        case 0x1ba48cu: goto label_1ba48c;
        case 0x1ba490u: goto label_1ba490;
        case 0x1ba494u: goto label_1ba494;
        case 0x1ba498u: goto label_1ba498;
        case 0x1ba49cu: goto label_1ba49c;
        case 0x1ba4a0u: goto label_1ba4a0;
        case 0x1ba4a4u: goto label_1ba4a4;
        case 0x1ba4a8u: goto label_1ba4a8;
        case 0x1ba4acu: goto label_1ba4ac;
        case 0x1ba4b0u: goto label_1ba4b0;
        case 0x1ba4b4u: goto label_1ba4b4;
        case 0x1ba4b8u: goto label_1ba4b8;
        case 0x1ba4bcu: goto label_1ba4bc;
        case 0x1ba4c0u: goto label_1ba4c0;
        case 0x1ba4c4u: goto label_1ba4c4;
        case 0x1ba4c8u: goto label_1ba4c8;
        case 0x1ba4ccu: goto label_1ba4cc;
        case 0x1ba4d0u: goto label_1ba4d0;
        case 0x1ba4d4u: goto label_1ba4d4;
        case 0x1ba4d8u: goto label_1ba4d8;
        case 0x1ba4dcu: goto label_1ba4dc;
        case 0x1ba4e0u: goto label_1ba4e0;
        case 0x1ba4e4u: goto label_1ba4e4;
        case 0x1ba4e8u: goto label_1ba4e8;
        case 0x1ba4ecu: goto label_1ba4ec;
        case 0x1ba4f0u: goto label_1ba4f0;
        case 0x1ba4f4u: goto label_1ba4f4;
        case 0x1ba4f8u: goto label_1ba4f8;
        case 0x1ba4fcu: goto label_1ba4fc;
        case 0x1ba500u: goto label_1ba500;
        case 0x1ba504u: goto label_1ba504;
        case 0x1ba508u: goto label_1ba508;
        case 0x1ba50cu: goto label_1ba50c;
        case 0x1ba510u: goto label_1ba510;
        case 0x1ba514u: goto label_1ba514;
        case 0x1ba518u: goto label_1ba518;
        case 0x1ba51cu: goto label_1ba51c;
        case 0x1ba520u: goto label_1ba520;
        case 0x1ba524u: goto label_1ba524;
        case 0x1ba528u: goto label_1ba528;
        case 0x1ba52cu: goto label_1ba52c;
        case 0x1ba530u: goto label_1ba530;
        case 0x1ba534u: goto label_1ba534;
        case 0x1ba538u: goto label_1ba538;
        case 0x1ba53cu: goto label_1ba53c;
        case 0x1ba540u: goto label_1ba540;
        case 0x1ba544u: goto label_1ba544;
        case 0x1ba548u: goto label_1ba548;
        case 0x1ba54cu: goto label_1ba54c;
        case 0x1ba550u: goto label_1ba550;
        case 0x1ba554u: goto label_1ba554;
        case 0x1ba558u: goto label_1ba558;
        case 0x1ba55cu: goto label_1ba55c;
        case 0x1ba560u: goto label_1ba560;
        case 0x1ba564u: goto label_1ba564;
        case 0x1ba568u: goto label_1ba568;
        case 0x1ba56cu: goto label_1ba56c;
        case 0x1ba570u: goto label_1ba570;
        case 0x1ba574u: goto label_1ba574;
        case 0x1ba578u: goto label_1ba578;
        case 0x1ba57cu: goto label_1ba57c;
        case 0x1ba580u: goto label_1ba580;
        case 0x1ba584u: goto label_1ba584;
        case 0x1ba588u: goto label_1ba588;
        case 0x1ba58cu: goto label_1ba58c;
        case 0x1ba590u: goto label_1ba590;
        case 0x1ba594u: goto label_1ba594;
        case 0x1ba598u: goto label_1ba598;
        case 0x1ba59cu: goto label_1ba59c;
        case 0x1ba5a0u: goto label_1ba5a0;
        case 0x1ba5a4u: goto label_1ba5a4;
        case 0x1ba5a8u: goto label_1ba5a8;
        case 0x1ba5acu: goto label_1ba5ac;
        case 0x1ba5b0u: goto label_1ba5b0;
        case 0x1ba5b4u: goto label_1ba5b4;
        case 0x1ba5b8u: goto label_1ba5b8;
        case 0x1ba5bcu: goto label_1ba5bc;
        case 0x1ba5c0u: goto label_1ba5c0;
        case 0x1ba5c4u: goto label_1ba5c4;
        case 0x1ba5c8u: goto label_1ba5c8;
        case 0x1ba5ccu: goto label_1ba5cc;
        case 0x1ba5d0u: goto label_1ba5d0;
        case 0x1ba5d4u: goto label_1ba5d4;
        case 0x1ba5d8u: goto label_1ba5d8;
        case 0x1ba5dcu: goto label_1ba5dc;
        case 0x1ba5e0u: goto label_1ba5e0;
        case 0x1ba5e4u: goto label_1ba5e4;
        case 0x1ba5e8u: goto label_1ba5e8;
        case 0x1ba5ecu: goto label_1ba5ec;
        case 0x1ba5f0u: goto label_1ba5f0;
        case 0x1ba5f4u: goto label_1ba5f4;
        default: break;
    }

    ctx->pc = 0x1ba468u;

label_1ba468:
    // 0x1ba468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ba46c:
    // 0x1ba46c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ba470:
    // 0x1ba470: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ba470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ba474:
    // 0x1ba474: 0x2442d5d8  addiu       $v0, $v0, -0x2A28
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956504));
label_1ba478:
    // 0x1ba478: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ba478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1ba47c:
    // 0x1ba47c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba480:
    // 0x1ba480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ba484:
    // 0x1ba484: 0x263002b0  addiu       $s0, $s1, 0x2B0
    ctx->pc = 0x1ba484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_1ba488:
    // 0x1ba488: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ba488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1ba48c:
    // 0x1ba48c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1ba48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ba490:
    // 0x1ba490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ba494:
    // 0x1ba494: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ba494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ba498:
    // 0x1ba498: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1ba498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
label_1ba49c:
    // 0x1ba49c: 0x0  nop
    ctx->pc = 0x1ba49cu;
    // NOP
label_1ba4a0:
    // 0x1ba4a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ba4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ba4a4:
    // 0x1ba4a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ba4a8:
    if (ctx->pc == 0x1BA4A8u) {
        ctx->pc = 0x1BA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4A4u;
        // 0x1ba4a8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4ACu;
        goto label_1ba4ac;
    }
    ctx->pc = 0x1BA4A4u;
    {
        const bool branch_taken_0x1ba4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4A4u;
        // 0x1ba4a8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4a4) {
            ctx->pc = 0x1BA4B8u;
            goto label_1ba4b8;
        }
    }
    ctx->pc = 0x1BA4ACu;
label_1ba4ac:
    // 0x1ba4ac: 0xc0808b8  jal         func_2022E0
label_1ba4b0:
    if (ctx->pc == 0x1BA4B0u) {
        ctx->pc = 0x1BA4B4u;
        goto label_1ba4b4;
    }
    ctx->pc = 0x1BA4ACu;
    SET_GPR_U32(ctx, 31, 0x1BA4B4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BA4ACu, 0x1BA4B4u)) {
        return;
    }
    ctx->pc = 0x1BA4B4u;
label_1ba4b4:
    // 0x1ba4b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ba4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ba4b8:
    // 0x1ba4b8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
label_1ba4bc:
    if (ctx->pc == 0x1BA4BCu) {
        ctx->pc = 0x1BA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4B8u;
        // 0x1ba4bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4C0u;
        goto label_1ba4c0;
    }
    ctx->pc = 0x1BA4B8u;
    {
        const bool branch_taken_0x1ba4b8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1BA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4B8u;
        // 0x1ba4bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4b8) {
            ctx->pc = 0x1BA4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba4a0;
        }
    }
    ctx->pc = 0x1BA4C0u;
label_1ba4c0:
    // 0x1ba4c0: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x1ba4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_1ba4c4:
    // 0x1ba4c4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1ba4c8:
    if (ctx->pc == 0x1BA4C8u) {
        ctx->pc = 0x1BA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4C4u;
        // 0x1ba4c8: 0x8e26035c  lw          $a2, 0x35C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4CCu;
        goto label_1ba4cc;
    }
    ctx->pc = 0x1BA4C4u;
    {
        const bool branch_taken_0x1ba4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4c4) {
            ctx->pc = 0x1BA4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA4C4u;
            // 0x1ba4c8: 0x8e26035c  lw          $a2, 0x35C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4DCu;
            goto label_1ba4dc;
        }
    }
    ctx->pc = 0x1BA4CCu;
label_1ba4cc:
    // 0x1ba4cc: 0xc0808b8  jal         func_2022E0
label_1ba4d0:
    if (ctx->pc == 0x1BA4D0u) {
        ctx->pc = 0x1BA4D4u;
        goto label_1ba4d4;
    }
    ctx->pc = 0x1BA4CCu;
    SET_GPR_U32(ctx, 31, 0x1BA4D4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BA4CCu, 0x1BA4D4u)) {
        return;
    }
    ctx->pc = 0x1BA4D4u;
label_1ba4d4:
    // 0x1ba4d4: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x1ba4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_1ba4d8:
    // 0x1ba4d8: 0x8e26035c  lw          $a2, 0x35C($s1)
    ctx->pc = 0x1ba4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
label_1ba4dc:
    // 0x1ba4dc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1ba4e0:
    if (ctx->pc == 0x1BA4E0u) {
        ctx->pc = 0x1BA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4DCu;
        // 0x1ba4e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4E4u;
        goto label_1ba4e4;
    }
    ctx->pc = 0x1BA4DCu;
    {
        const bool branch_taken_0x1ba4dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4DCu;
        // 0x1ba4e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4dc) {
            ctx->pc = 0x1BA4FCu;
            goto label_1ba4fc;
        }
    }
    ctx->pc = 0x1BA4E4u;
label_1ba4e4:
    // 0x1ba4e4: 0x8cc200f8  lw          $v0, 0xF8($a2)
    ctx->pc = 0x1ba4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
label_1ba4e8:
    // 0x1ba4e8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ba4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ba4ec:
    // 0x1ba4ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ba4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ba4f0:
    // 0x1ba4f0: 0x60f809  jalr        $v1
label_1ba4f4:
    if (ctx->pc == 0x1BA4F4u) {
        ctx->pc = 0x1BA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4F0u;
        // 0x1ba4f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4F8u;
        goto label_1ba4f8;
    }
    ctx->pc = 0x1BA4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BA4F8u);
        ctx->pc = 0x1BA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4F0u;
        // 0x1ba4f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA4F0u, 0x1BA4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA4F8u;
label_1ba4f8:
    // 0x1ba4f8: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x1ba4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_1ba4fc:
    // 0x1ba4fc: 0x8e260360  lw          $a2, 0x360($s1)
    ctx->pc = 0x1ba4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
label_1ba500:
    // 0x1ba500: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1ba504:
    if (ctx->pc == 0x1BA504u) {
        ctx->pc = 0x1BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA500u;
        // 0x1ba504: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA508u;
        goto label_1ba508;
    }
    ctx->pc = 0x1BA500u;
    {
        const bool branch_taken_0x1ba500 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA500u;
        // 0x1ba504: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba500) {
            ctx->pc = 0x1BA520u;
            goto label_1ba520;
        }
    }
    ctx->pc = 0x1BA508u;
label_1ba508:
    // 0x1ba508: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x1ba508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_1ba50c:
    // 0x1ba50c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ba50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ba510:
    // 0x1ba510: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ba510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ba514:
    // 0x1ba514: 0x60f809  jalr        $v1
label_1ba518:
    if (ctx->pc == 0x1BA518u) {
        ctx->pc = 0x1BA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA514u;
        // 0x1ba518: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA51Cu;
        goto label_1ba51c;
    }
    ctx->pc = 0x1BA514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BA51Cu);
        ctx->pc = 0x1BA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA514u;
        // 0x1ba518: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA514u, 0x1BA51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA51Cu;
label_1ba51c:
    // 0x1ba51c: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x1ba51cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_1ba520:
    // 0x1ba520: 0x8e240364  lw          $a0, 0x364($s1)
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
label_1ba524:
    // 0x1ba524: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1ba528:
    if (ctx->pc == 0x1BA528u) {
        ctx->pc = 0x1BA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA524u;
        // 0x1ba528: 0x8e250398  lw          $a1, 0x398($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA52Cu;
        goto label_1ba52c;
    }
    ctx->pc = 0x1BA524u;
    {
        const bool branch_taken_0x1ba524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba524) {
            ctx->pc = 0x1BA528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA524u;
            // 0x1ba528: 0x8e250398  lw          $a1, 0x398($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA53Cu;
            goto label_1ba53c;
        }
    }
    ctx->pc = 0x1BA52Cu;
label_1ba52c:
    // 0x1ba52c: 0xc06fa92  jal         func_1BEA48
label_1ba530:
    if (ctx->pc == 0x1BA530u) {
        ctx->pc = 0x1BA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA52Cu;
        // 0x1ba530: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA534u;
        goto label_1ba534;
    }
    ctx->pc = 0x1BA52Cu;
    SET_GPR_U32(ctx, 31, 0x1BA534u);
    ctx->pc = 0x1BA530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA52Cu;
    // 0x1ba530: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BEA48u, 0x1BA52Cu, 0x1BA534u)) {
        return;
    }
    ctx->pc = 0x1BA534u;
label_1ba534:
    // 0x1ba534: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x1ba534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_1ba538:
    // 0x1ba538: 0x8e250398  lw          $a1, 0x398($s1)
    ctx->pc = 0x1ba538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
label_1ba53c:
    // 0x1ba53c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1ba540:
    if (ctx->pc == 0x1BA540u) {
        ctx->pc = 0x1BA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA53Cu;
        // 0x1ba540: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA544u;
        goto label_1ba544;
    }
    ctx->pc = 0x1BA53Cu;
    {
        const bool branch_taken_0x1ba53c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA53Cu;
        // 0x1ba540: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba53c) {
            ctx->pc = 0x1BA558u;
            goto label_1ba558;
        }
    }
    ctx->pc = 0x1BA544u;
label_1ba544:
    // 0x1ba544: 0xc0640ce  jal         func_190338
label_1ba548:
    if (ctx->pc == 0x1BA548u) {
        ctx->pc = 0x1BA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA544u;
        // 0x1ba548: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA54Cu;
        goto label_1ba54c;
    }
    ctx->pc = 0x1BA544u;
    SET_GPR_U32(ctx, 31, 0x1BA54Cu);
    ctx->pc = 0x1BA548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA544u;
    // 0x1ba548: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190338u, 0x1BA544u, 0x1BA54Cu)) {
        return;
    }
    ctx->pc = 0x1BA54Cu;
label_1ba54c:
    // 0x1ba54c: 0xc0808b8  jal         func_2022E0
label_1ba550:
    if (ctx->pc == 0x1BA550u) {
        ctx->pc = 0x1BA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA54Cu;
        // 0x1ba550: 0x8e240398  lw          $a0, 0x398($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA554u;
        goto label_1ba554;
    }
    ctx->pc = 0x1BA54Cu;
    SET_GPR_U32(ctx, 31, 0x1BA554u);
    ctx->pc = 0x1BA550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA54Cu;
    // 0x1ba550: 0x8e240398  lw          $a0, 0x398($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BA54Cu, 0x1BA554u)) {
        return;
    }
    ctx->pc = 0x1BA554u;
label_1ba554:
    // 0x1ba554: 0xae200398  sw          $zero, 0x398($s1)
    ctx->pc = 0x1ba554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 0));
label_1ba558:
    // 0x1ba558: 0x263002e0  addiu       $s0, $s1, 0x2E0
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_1ba55c:
    // 0x1ba55c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ba560:
    // 0x1ba560: 0x24429500  addiu       $v0, $v0, -0x6B00
    ctx->pc = 0x1ba560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939904));
label_1ba564:
    // 0x1ba564: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ba564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ba568:
    // 0x1ba568: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1ba56c:
    if (ctx->pc == 0x1BA56Cu) {
        ctx->pc = 0x1BA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA568u;
        // 0x1ba56c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA570u;
        goto label_1ba570;
    }
    ctx->pc = 0x1BA568u;
    {
        const bool branch_taken_0x1ba568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA568u;
        // 0x1ba56c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba568) {
            ctx->pc = 0x1BA5D0u;
            goto label_1ba5d0;
        }
    }
    ctx->pc = 0x1BA570u;
label_1ba570:
    // 0x1ba570: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ba570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ba574:
    // 0x1ba574: 0x0  nop
    ctx->pc = 0x1ba574u;
    // NOP
label_1ba578:
    // 0x1ba578: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_1ba57c:
    if (ctx->pc == 0x1BA57Cu) {
        ctx->pc = 0x1BA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA578u;
        // 0x1ba57c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA580u;
        goto label_1ba580;
    }
    ctx->pc = 0x1BA578u;
    {
        const bool branch_taken_0x1ba578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba578) {
            ctx->pc = 0x1BA57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA578u;
            // 0x1ba57c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA5C8u;
            goto label_1ba5c8;
        }
    }
    ctx->pc = 0x1BA580u;
label_1ba580:
    // 0x1ba580: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ba580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ba584:
    // 0x1ba584: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ba588:
    if (ctx->pc == 0x1BA588u) {
        ctx->pc = 0x1BA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA584u;
        // 0x1ba588: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA58Cu;
        goto label_1ba58c;
    }
    ctx->pc = 0x1BA584u;
    {
        const bool branch_taken_0x1ba584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA584u;
        // 0x1ba588: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba584) {
            ctx->pc = 0x1BA594u;
            goto label_1ba594;
        }
    }
    ctx->pc = 0x1BA58Cu;
label_1ba58c:
    // 0x1ba58c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ba590:
    if (ctx->pc == 0x1BA590u) {
        ctx->pc = 0x1BA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA58Cu;
        // 0x1ba590: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA594u;
        goto label_1ba594;
    }
    ctx->pc = 0x1BA58Cu;
    {
        const bool branch_taken_0x1ba58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA58Cu;
        // 0x1ba590: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba58c) {
            ctx->pc = 0x1BA598u;
            goto label_1ba598;
        }
    }
    ctx->pc = 0x1BA594u;
label_1ba594:
    // 0x1ba594: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ba594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ba598:
    // 0x1ba598: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ba598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ba59c:
    // 0x1ba59c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ba5a0:
    if (ctx->pc == 0x1BA5A0u) {
        ctx->pc = 0x1BA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA59Cu;
        // 0x1ba5a0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5A4u;
        goto label_1ba5a4;
    }
    ctx->pc = 0x1BA59Cu;
    {
        const bool branch_taken_0x1ba59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA59Cu;
        // 0x1ba5a0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba59c) {
            ctx->pc = 0x1BA5ACu;
            goto label_1ba5ac;
        }
    }
    ctx->pc = 0x1BA5A4u;
label_1ba5a4:
    // 0x1ba5a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ba5a8:
    if (ctx->pc == 0x1BA5A8u) {
        ctx->pc = 0x1BA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5A4u;
        // 0x1ba5a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5ACu;
        goto label_1ba5ac;
    }
    ctx->pc = 0x1BA5A4u;
    {
        const bool branch_taken_0x1ba5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5A4u;
        // 0x1ba5a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5a4) {
            ctx->pc = 0x1BA5B0u;
            goto label_1ba5b0;
        }
    }
    ctx->pc = 0x1BA5ACu;
label_1ba5ac:
    // 0x1ba5ac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ba5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1ba5b0:
    // 0x1ba5b0: 0xc0808b8  jal         func_2022E0
label_1ba5b4:
    if (ctx->pc == 0x1BA5B4u) {
        ctx->pc = 0x1BA5B8u;
        goto label_1ba5b8;
    }
    ctx->pc = 0x1BA5B0u;
    SET_GPR_U32(ctx, 31, 0x1BA5B8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BA5B0u, 0x1BA5B8u)) {
        return;
    }
    ctx->pc = 0x1BA5B8u;
label_1ba5b8:
    // 0x1ba5b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ba5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ba5bc:
    // 0x1ba5bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ba5c0:
    // 0x1ba5c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ba5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ba5c4:
    // 0x1ba5c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ba5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ba5c8:
    // 0x1ba5c8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_1ba5cc:
    if (ctx->pc == 0x1BA5CCu) {
        ctx->pc = 0x1BA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5C8u;
        // 0x1ba5cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5D0u;
        goto label_1ba5d0;
    }
    ctx->pc = 0x1BA5C8u;
    {
        const bool branch_taken_0x1ba5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5c8) {
            ctx->pc = 0x1BA5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA5C8u;
            // 0x1ba5cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba578;
        }
    }
    ctx->pc = 0x1BA5D0u;
label_1ba5d0:
    // 0x1ba5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba5d4:
    // 0x1ba5d4: 0xc06bba8  jal         func_1AEEA0
label_1ba5d8:
    if (ctx->pc == 0x1BA5D8u) {
        ctx->pc = 0x1BA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5D4u;
        // 0x1ba5d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5DCu;
        goto label_1ba5dc;
    }
    ctx->pc = 0x1BA5D4u;
    SET_GPR_U32(ctx, 31, 0x1BA5DCu);
    ctx->pc = 0x1BA5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5D4u;
    // 0x1ba5d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1BA5D4u, 0x1BA5DCu)) {
        return;
    }
    ctx->pc = 0x1BA5DCu;
label_1ba5dc:
    // 0x1ba5dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ba5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ba5e0:
    // 0x1ba5e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ba5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ba5e4:
    // 0x1ba5e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba5e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba5e8:
    // 0x1ba5e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ba5e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba5ec:
    // 0x1ba5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba5f0:
    // 0x1ba5f0: 0x3e00008  jr          $ra
label_1ba5f4:
    if (ctx->pc == 0x1BA5F4u) {
        ctx->pc = 0x1BA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5F0u;
        // 0x1ba5f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5F8u;
        goto label_fallthrough_0x1ba5f0;
    }
    ctx->pc = 0x1BA5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5F0u;
        // 0x1ba5f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ba5f0:
    ctx->pc = 0x1BA5F8u;
}
