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

// Function: sub_0019B458
// Address: 0x19b458 - 0x19b798
void sub_0019B458_0x19b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B458_0x19b458");
#endif

    switch (ctx->pc) {
        case 0x19b474u: goto label_19b474;
        case 0x19b488u: goto label_19b488;
        case 0x19b4a0u: goto label_19b4a0;
        case 0x19b4e0u: goto label_19b4e0;
        case 0x19b514u: goto label_19b514;
        case 0x19b554u: goto label_19b554;
        case 0x19b580u: goto label_19b580;
        case 0x19b5e4u: goto label_19b5e4;
        case 0x19b61cu: goto label_19b61c;
        case 0x19b660u: goto label_19b660;
        case 0x19b68cu: goto label_19b68c;
        case 0x19b730u: goto label_19b730;
        case 0x19b774u: goto label_19b774;
        default: break;
    }

    ctx->pc = 0x19b458u;

    // 0x19b458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b45c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19b460: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19b464: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19b464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b46c: 0xc066fd8  jal         func_19BF60
    ctx->pc = 0x19B46Cu;
    SET_GPR_U32(ctx, 31, 0x19B474u);
    ctx->pc = 0x19B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B46Cu;
    // 0x19b470: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BF60u, 0x19B46Cu, 0x19B474u)) {
        return;
    }
    ctx->pc = 0x19B474u;
label_19b474:
    // 0x19b474: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19b474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19b478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b47c: 0x8c468154  lw          $a2, -0x7EAC($v0)
    ctx->pc = 0x19b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6F8154u));
    // 0x19b480: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x19B480u;
    SET_GPR_U32(ctx, 31, 0x19B488u);
    ctx->pc = 0x19B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B480u;
    // 0x19b484: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x19B480u, 0x19B488u)) {
        return;
    }
    ctx->pc = 0x19B488u;
label_19b488:
    // 0x19b488: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19b488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b48c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b490: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x19B490u;
    {
        const bool branch_taken_0x19b490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B490u;
        // 0x19b494: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b490) {
            ctx->pc = 0x19B788u;
            goto label_19b788;
        }
    }
    ctx->pc = 0x19B498u;
    // 0x19b498: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b49c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x19b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19b4a0:
    // 0x19b4a0: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x19b4a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x19b4a4: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x19B4A4u;
    {
        const bool branch_taken_0x19b4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4A4u;
        // 0x19b4a8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4a4) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B4ACu;
    // 0x19b4ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19b4b0: 0x2442a120  addiu       $v0, $v0, -0x5EE0
    ctx->pc = 0x19b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x19b4b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b4b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b4bc: 0x800008  jr          $a0
    ctx->pc = 0x19B4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B4C4u: goto label_19b4c4;
            case 0x19B4E8u: goto label_19b4e8;
            case 0x19B4F8u: goto label_19b4f8;
            case 0x19B504u: goto label_19b504;
            case 0x19B51Cu: goto label_19b51c;
            case 0x19B52Cu: goto label_19b52c;
            case 0x19B53Cu: goto label_19b53c;
            case 0x19B55Cu: goto label_19b55c;
            case 0x19B56Cu: goto label_19b56c;
            case 0x19B588u: goto label_19b588;
            case 0x19B5ECu: goto label_19b5ec;
            case 0x19B630u: goto label_19b630;
            case 0x19B668u: goto label_19b668;
            case 0x19B67Cu: goto label_19b67c;
            case 0x19B6B0u: goto label_19b6b0;
            case 0x19B6F0u: goto label_19b6f0;
            case 0x19B738u: goto label_19b738;
            case 0x19B748u: goto label_19b748;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19B4C4u;
label_19b4c4:
    // 0x19b4c4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4c8: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x19b4cc: 0x24e7a110  addiu       $a3, $a3, -0x5EF0
    ctx->pc = 0x19b4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942992));
    // 0x19b4d0: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x19b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x19b4d4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x19b4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x19b4d8: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x19B4D8u;
    SET_GPR_U32(ctx, 31, 0x19B4E0u);
    ctx->pc = 0x19B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B4D8u;
    // 0x19b4dc: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19B4D8u, 0x19B4E0u)) {
        return;
    }
    ctx->pc = 0x19B4E0u;
label_19b4e0:
    // 0x19b4e0: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x19B4E0u;
    {
        const bool branch_taken_0x19b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4E0u;
        // 0x19b4e4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4e0) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B4E8u;
label_19b4e8:
    // 0x19b4e8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4ec: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x19b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x19b4f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19B4F0u;
    {
        const bool branch_taken_0x19b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F0u;
        // 0x19b4f4: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4f0) {
            ctx->pc = 0x19B548u;
            goto label_19b548;
        }
    }
    ctx->pc = 0x19B4F8u;
label_19b4f8:
    // 0x19b4f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4fc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19B4FCu;
    {
        const bool branch_taken_0x19b4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4FCu;
        // 0x19b500: 0x2624005c  addiu       $a0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4fc) {
            ctx->pc = 0x19B574u;
            goto label_19b574;
        }
    }
    ctx->pc = 0x19B504u;
label_19b504:
    // 0x19b504: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19b504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b50c: 0xc066f3e  jal         func_19BCF8
    ctx->pc = 0x19B50Cu;
    SET_GPR_U32(ctx, 31, 0x19B514u);
    ctx->pc = 0x19B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B50Cu;
    // 0x19b510: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BCF8u, 0x19B50Cu, 0x19B514u)) {
        return;
    }
    ctx->pc = 0x19B514u;
label_19b514:
    // 0x19b514: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x19B514u;
    {
        const bool branch_taken_0x19b514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B514u;
        // 0x19b518: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b514) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B51Cu;
label_19b51c:
    // 0x19b51c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b520: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19b524: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x19B524u;
    {
        const bool branch_taken_0x19b524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B524u;
        // 0x19b528: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b524) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B52Cu;
label_19b52c:
    // 0x19b52c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b530: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x19b530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x19b534: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B534u;
    {
        const bool branch_taken_0x19b534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B534u;
        // 0x19b538: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b534) {
            ctx->pc = 0x19B548u;
            goto label_19b548;
        }
    }
    ctx->pc = 0x19B53Cu;
label_19b53c:
    // 0x19b53c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b540: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x19b540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x19b544: 0x26250078  addiu       $a1, $s1, 0x78
    ctx->pc = 0x19b544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_19b548:
    // 0x19b548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b54c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x19B54Cu;
    SET_GPR_U32(ctx, 31, 0x19B554u);
    ctx->pc = 0x19B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B54Cu;
    // 0x19b550: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19B54Cu, 0x19B554u)) {
        return;
    }
    ctx->pc = 0x19B554u;
label_19b554:
    // 0x19b554: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x19B554u;
    {
        const bool branch_taken_0x19b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B554u;
        // 0x19b558: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b554) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B55Cu;
label_19b55c:
    // 0x19b55c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b560: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b564: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x19B564u;
    {
        const bool branch_taken_0x19b564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B564u;
        // 0x19b568: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b564) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B56Cu;
label_19b56c:
    // 0x19b56c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b570: 0x2624008c  addiu       $a0, $s1, 0x8C
    ctx->pc = 0x19b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_19b574:
    // 0x19b574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b578: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x19B578u;
    SET_GPR_U32(ctx, 31, 0x19B580u);
    ctx->pc = 0x19B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B578u;
    // 0x19b57c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x19B578u, 0x19B580u)) {
        return;
    }
    ctx->pc = 0x19B580u;
label_19b580:
    // 0x19b580: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x19B580u;
    {
        const bool branch_taken_0x19b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B580u;
        // 0x19b584: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b580) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B588u;
label_19b588:
    // 0x19b588: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b58c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19b590: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19B590u;
    {
        const bool branch_taken_0x19b590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b590) {
            ctx->pc = 0x19B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B590u;
            // 0x19b594: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B5B0u;
            goto label_19b5b0;
        }
    }
    ctx->pc = 0x19B598u;
    // 0x19b598: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x19b598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b59c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x19b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x19b5a0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x19b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x19b5a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B5A4u;
    {
        const bool branch_taken_0x19b5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5A4u;
        // 0x19b5a8: 0xac62004c  sw          $v0, 0x4C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5a4) {
            ctx->pc = 0x19B5C4u;
            goto label_19b5c4;
        }
    }
    ctx->pc = 0x19B5ACu;
    // 0x19b5ac: 0x0  nop
    ctx->pc = 0x19b5acu;
    // NOP
label_19b5b0:
    // 0x19b5b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x19b5b4: 0x3463fffb  ori         $v1, $v1, 0xFFFB
    ctx->pc = 0x19b5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65531);
    // 0x19b5b8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x19b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19b5bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19b5c0: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x19b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
label_19b5c4:
    // 0x19b5c4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x19b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b5c8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19b5cc: 0x10800062  beqz        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x19B5CCu;
    {
        const bool branch_taken_0x19b5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5CCu;
        // 0x19b5d0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5cc) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B5D4u;
    // 0x19b5d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b5d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b5dc: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x19B5DCu;
    SET_GPR_U32(ctx, 31, 0x19B5E4u);
    ctx->pc = 0x19B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B5DCu;
    // 0x19b5e0: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x19B5DCu, 0x19B5E4u)) {
        return;
    }
    ctx->pc = 0x19B5E4u;
label_19b5e4:
    // 0x19b5e4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x19B5E4u;
    {
        const bool branch_taken_0x19b5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5E4u;
        // 0x19b5e8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5e4) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B5ECu;
label_19b5ec:
    // 0x19b5ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b5f0: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x19b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b5f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5f8: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x19b5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x19b5fc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x19b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b600: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19b600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19b604: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B604u;
    {
        const bool branch_taken_0x19b604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B604u;
        // 0x19b608: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b604) {
            ctx->pc = 0x19B620u;
            goto label_19b620;
        }
    }
    ctx->pc = 0x19B60Cu;
    // 0x19b60c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b610: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b614: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x19B614u;
    SET_GPR_U32(ctx, 31, 0x19B61Cu);
    ctx->pc = 0x19B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B614u;
    // 0x19b618: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x19B614u, 0x19B61Cu)) {
        return;
    }
    ctx->pc = 0x19B61Cu;
label_19b61c:
    // 0x19b61c: 0x0  nop
    ctx->pc = 0x19b61cu;
    // NOP
label_19b620:
    // 0x19b620: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x19b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b624: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x19b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b628: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x19B628u;
    {
        const bool branch_taken_0x19b628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B628u;
        // 0x19b62c: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b628) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B630u;
label_19b630:
    // 0x19b630: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b634: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b638: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b63c: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x19b63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x19b640: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x19b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b644: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19b648: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x19B648u;
    {
        const bool branch_taken_0x19b648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B648u;
        // 0x19b64c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b648) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B650u;
    // 0x19b650: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19b650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19b654: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b658: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x19B658u;
    SET_GPR_U32(ctx, 31, 0x19B660u);
    ctx->pc = 0x19B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B658u;
    // 0x19b65c: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x19B658u, 0x19B660u)) {
        return;
    }
    ctx->pc = 0x19B660u;
label_19b660:
    // 0x19b660: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x19B660u;
    {
        const bool branch_taken_0x19b660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B660u;
        // 0x19b664: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b660) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B668u;
label_19b668:
    // 0x19b668: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b66c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x19b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b670: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b674: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x19B674u;
    {
        const bool branch_taken_0x19b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B674u;
        // 0x19b678: 0xe4600090  swc1        $f0, 0x90($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b674) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B67Cu;
label_19b67c:
    // 0x19b67c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b684: 0xc066f60  jal         func_19BD80
    ctx->pc = 0x19B684u;
    SET_GPR_U32(ctx, 31, 0x19B68Cu);
    ctx->pc = 0x19B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B684u;
    // 0x19b688: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BD80u, 0x19B684u, 0x19B68Cu)) {
        return;
    }
    ctx->pc = 0x19B68Cu;
label_19b68c:
    // 0x19b68c: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x19b68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x19b690: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x19b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b694: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x19b694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x19b698: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x19b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b69c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x19b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x19b6a0: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19B6A0u;
    {
        const bool branch_taken_0x19b6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6A0u;
        // 0x19b6a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6a0) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B6A8u;
    // 0x19b6a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19B6A8u;
    {
        const bool branch_taken_0x19b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6A8u;
        // 0x19b6ac: 0xc62c0068  lwc1        $f12, 0x68($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6a8) {
            ctx->pc = 0x19B728u;
            goto label_19b728;
        }
    }
    ctx->pc = 0x19B6B0u;
label_19b6b0:
    // 0x19b6b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b6b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b6b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b6b8: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x19b6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b6bc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x19b6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b6c0: 0x0  nop
    ctx->pc = 0x19b6c0u;
    // NOP
    // 0x19b6c4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x19B6C4u;
    {
        const bool branch_taken_0x19b6c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6C4u;
        // 0x19b6c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6c4) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B6CCu;
    // 0x19b6cc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x19b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b6d0: 0xe44c0088  swc1        $f12, 0x88($v0)
    ctx->pc = 0x19b6d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x19b6d4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x19b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b6d8: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x19b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x19b6dc: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19B6DCu;
    {
        const bool branch_taken_0x19b6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6DCu;
        // 0x19b6e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6dc) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B6E4u;
    // 0x19b6e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19B6E4u;
    {
        const bool branch_taken_0x19b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6e4) {
            ctx->pc = 0x19B728u;
            goto label_19b728;
        }
    }
    ctx->pc = 0x19B6ECu;
    // 0x19b6ec: 0x0  nop
    ctx->pc = 0x19b6ecu;
    // NOP
label_19b6f0:
    // 0x19b6f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b6f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b6f8: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x19b6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b6fc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x19b6fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b700: 0x0  nop
    ctx->pc = 0x19b700u;
    // NOP
    // 0x19b704: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x19B704u;
    {
        const bool branch_taken_0x19b704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B704u;
        // 0x19b708: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b704) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B70Cu;
    // 0x19b70c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x19b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b710: 0xe44c008c  swc1        $f12, 0x8C($v0)
    ctx->pc = 0x19b710u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x19b714: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x19b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b718: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x19b718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x19b71c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B71Cu;
    {
        const bool branch_taken_0x19b71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B71Cu;
        // 0x19b720: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b71c) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B724u;
    // 0x19b724: 0x0  nop
    ctx->pc = 0x19b724u;
    // NOP
label_19b728:
    // 0x19b728: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x19B728u;
    SET_GPR_U32(ctx, 31, 0x19B730u);
    ctx->pc = 0x19B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B728u;
    // 0x19b72c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x19B728u, 0x19B730u)) {
        return;
    }
    ctx->pc = 0x19B730u;
label_19b730:
    // 0x19b730: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19B730u;
    {
        const bool branch_taken_0x19b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B730u;
        // 0x19b734: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b730) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B738u;
label_19b738:
    // 0x19b738: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b73c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19b740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19B740u;
    {
        const bool branch_taken_0x19b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B740u;
        // 0x19b744: 0xae23006c  sw          $v1, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b740) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B748u;
label_19b748:
    // 0x19b748: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b74c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x19b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19b750: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b754: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x19b754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
label_19b758:
    // 0x19b758: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19b75c:
    // 0x19b75c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b764: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b76c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x19B76Cu;
    SET_GPR_U32(ctx, 31, 0x19B774u);
    ctx->pc = 0x19B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B76Cu;
    // 0x19b770: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x19B76Cu, 0x19B774u)) {
        return;
    }
    ctx->pc = 0x19B774u;
label_19b774:
    // 0x19b774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b778: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b77c: 0x5460ff48  bnel        $v1, $zero, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x19B77Cu;
    {
        const bool branch_taken_0x19b77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b77c) {
            ctx->pc = 0x19B780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B77Cu;
            // 0x19b780: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b4a0;
        }
    }
    ctx->pc = 0x19B784u;
    // 0x19b784: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19b784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19b788:
    // 0x19b788: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19b788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b78c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b790: 0x3e00008  jr          $ra
    ctx->pc = 0x19B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B790u;
        // 0x19b794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B798u;
}
