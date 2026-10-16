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

// Function: sub_00174440
// Address: 0x174440 - 0x1745a0
void sub_00174440_0x174440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174440_0x174440");
#endif

    switch (ctx->pc) {
        case 0x17445cu: goto label_17445c;
        case 0x174470u: goto label_174470;
        case 0x174488u: goto label_174488;
        case 0x1744c4u: goto label_1744c4;
        case 0x1744f8u: goto label_1744f8;
        case 0x174510u: goto label_174510;
        case 0x174528u: goto label_174528;
        case 0x174540u: goto label_174540;
        case 0x174558u: goto label_174558;
        case 0x174578u: goto label_174578;
        default: break;
    }

    ctx->pc = 0x174440u;

    // 0x174440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174444: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x174444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x174448: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x174448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17444c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17444cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174454: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x174454u;
    SET_GPR_U32(ctx, 31, 0x17445Cu);
    ctx->pc = 0x174458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174454u;
    // 0x174458: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x174454u, 0x17445Cu)) {
        return;
    }
    ctx->pc = 0x17445Cu;
label_17445c:
    // 0x17445c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x174460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174464: 0x8c46f7e0  lw          $a2, -0x820($v0)
    ctx->pc = 0x174464u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF7E0u));
    // 0x174468: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x174468u;
    SET_GPR_U32(ctx, 31, 0x174470u);
    ctx->pc = 0x17446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174468u;
    // 0x17446c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x174468u, 0x174470u)) {
        return;
    }
    ctx->pc = 0x174470u;
label_174470:
    // 0x174470: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x174470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174474: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x174474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174478: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x174478u;
    {
        const bool branch_taken_0x174478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174478u;
        // 0x17447c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174478) {
            ctx->pc = 0x17458Cu;
            goto label_17458c;
        }
    }
    ctx->pc = 0x174480u;
    // 0x174480: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x174480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174484: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x174484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_174488:
    // 0x174488: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x174488u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17448c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x17448Cu;
    {
        const bool branch_taken_0x17448c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17448Cu;
        // 0x174490: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17448c) {
            ctx->pc = 0x17455Cu;
            goto label_17455c;
        }
    }
    ctx->pc = 0x174494u;
    // 0x174494: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174498: 0x24425e50  addiu       $v0, $v0, 0x5E50
    ctx->pc = 0x174498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24144));
    // 0x17449c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1744a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1744a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1744a4: 0x800008  jr          $a0
    ctx->pc = 0x1744A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1744ACu: goto label_1744ac;
            case 0x1744CCu: goto label_1744cc;
            case 0x1744D8u: goto label_1744d8;
            case 0x1744E4u: goto label_1744e4;
            case 0x174500u: goto label_174500;
            case 0x174518u: goto label_174518;
            case 0x174530u: goto label_174530;
            case 0x174548u: goto label_174548;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1744A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1744ACu;
label_1744ac:
    // 0x1744ac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1744acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1744b0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1744b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1744b4: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x1744b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x1744b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1744b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744bc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1744BCu;
    SET_GPR_U32(ctx, 31, 0x1744C4u);
    ctx->pc = 0x1744C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744BCu;
    // 0x1744c0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1744BCu, 0x1744C4u)) {
        return;
    }
    ctx->pc = 0x1744C4u;
label_1744c4:
    // 0x1744c4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1744C4u;
    {
        const bool branch_taken_0x1744c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1744C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744C4u;
        // 0x1744c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744c4) {
            ctx->pc = 0x174560u;
            goto label_174560;
        }
    }
    ctx->pc = 0x1744CCu;
label_1744cc:
    // 0x1744cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1744ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1744d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1744D0u;
    {
        const bool branch_taken_0x1744d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1744D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744D0u;
        // 0x1744d4: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744d0) {
            ctx->pc = 0x1744ECu;
            goto label_1744ec;
        }
    }
    ctx->pc = 0x1744D8u;
label_1744d8:
    // 0x1744d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1744d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1744dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1744DCu;
    {
        const bool branch_taken_0x1744dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1744E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744DCu;
        // 0x1744e0: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744dc) {
            ctx->pc = 0x1744ECu;
            goto label_1744ec;
        }
    }
    ctx->pc = 0x1744E4u;
label_1744e4:
    // 0x1744e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1744e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1744e8: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x1744e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_1744ec:
    // 0x1744ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1744ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744f0: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x1744F0u;
    SET_GPR_U32(ctx, 31, 0x1744F8u);
    ctx->pc = 0x1744F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744F0u;
    // 0x1744f4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x1744F0u, 0x1744F8u)) {
        return;
    }
    ctx->pc = 0x1744F8u;
label_1744f8:
    // 0x1744f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1744F8u;
    {
        const bool branch_taken_0x1744f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1744FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744F8u;
        // 0x1744fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744f8) {
            ctx->pc = 0x174560u;
            goto label_174560;
        }
    }
    ctx->pc = 0x174500u;
label_174500:
    // 0x174500: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174508: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174508u;
    SET_GPR_U32(ctx, 31, 0x174510u);
    ctx->pc = 0x17450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174508u;
    // 0x17450c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174508u, 0x174510u)) {
        return;
    }
    ctx->pc = 0x174510u;
label_174510:
    // 0x174510: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x174510u;
    {
        const bool branch_taken_0x174510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174510u;
        // 0x174514: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174510) {
            ctx->pc = 0x17455Cu;
            goto label_17455c;
        }
    }
    ctx->pc = 0x174518u;
label_174518:
    // 0x174518: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17451c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17451cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174520: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174520u;
    SET_GPR_U32(ctx, 31, 0x174528u);
    ctx->pc = 0x174524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174520u;
    // 0x174524: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174520u, 0x174528u)) {
        return;
    }
    ctx->pc = 0x174528u;
label_174528:
    // 0x174528: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174528u;
    {
        const bool branch_taken_0x174528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174528u;
        // 0x17452c: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174528) {
            ctx->pc = 0x17455Cu;
            goto label_17455c;
        }
    }
    ctx->pc = 0x174530u;
label_174530:
    // 0x174530: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174538: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174538u;
    SET_GPR_U32(ctx, 31, 0x174540u);
    ctx->pc = 0x17453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174538u;
    // 0x17453c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174538u, 0x174540u)) {
        return;
    }
    ctx->pc = 0x174540u;
label_174540:
    // 0x174540: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x174540u;
    {
        const bool branch_taken_0x174540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174540u;
        // 0x174544: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174540) {
            ctx->pc = 0x17455Cu;
            goto label_17455c;
        }
    }
    ctx->pc = 0x174548u;
label_174548:
    // 0x174548: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17454c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17454cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174550: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174550u;
    SET_GPR_U32(ctx, 31, 0x174558u);
    ctx->pc = 0x174554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174550u;
    // 0x174554: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174550u, 0x174558u)) {
        return;
    }
    ctx->pc = 0x174558u;
label_174558:
    // 0x174558: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x174558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_17455c:
    // 0x17455c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_174560:
    // 0x174560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174568: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x174568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17456c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174570: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x174570u;
    SET_GPR_U32(ctx, 31, 0x174578u);
    ctx->pc = 0x174574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174570u;
    // 0x174574: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x174570u, 0x174578u)) {
        return;
    }
    ctx->pc = 0x174578u;
label_174578:
    // 0x174578: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x174578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17457c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174580: 0x5460ffc1  bnel        $v1, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x174580u;
    {
        const bool branch_taken_0x174580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174580) {
            ctx->pc = 0x174584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174580u;
            // 0x174584: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174488;
        }
    }
    ctx->pc = 0x174588u;
    // 0x174588: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x174588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17458c:
    // 0x17458c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17458cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174594: 0x3e00008  jr          $ra
    ctx->pc = 0x174594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174594u;
        // 0x174598: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17459Cu;
    // 0x17459c: 0x0  nop
    ctx->pc = 0x17459cu;
    // NOP
    ctx->pc = 0x1745a0u;
}
