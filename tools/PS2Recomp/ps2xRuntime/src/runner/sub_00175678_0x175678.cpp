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

// Function: sub_00175678
// Address: 0x175678 - 0x175798
void sub_00175678_0x175678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175678_0x175678");
#endif

    switch (ctx->pc) {
        case 0x175694u: goto label_175694;
        case 0x1756a8u: goto label_1756a8;
        case 0x1756c0u: goto label_1756c0;
        case 0x1756f4u: goto label_1756f4;
        case 0x17570cu: goto label_17570c;
        case 0x175724u: goto label_175724;
        case 0x17573cu: goto label_17573c;
        case 0x175754u: goto label_175754;
        case 0x175774u: goto label_175774;
        default: break;
    }

    ctx->pc = 0x175678u;

    // 0x175678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17567c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x175680: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x175680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x175684: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17568c: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x17568Cu;
    SET_GPR_U32(ctx, 31, 0x175694u);
    ctx->pc = 0x175690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17568Cu;
    // 0x175690: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x17568Cu, 0x175694u)) {
        return;
    }
    ctx->pc = 0x175694u;
label_175694:
    // 0x175694: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x175694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x175698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17569c: 0x8c46f810  lw          $a2, -0x7F0($v0)
    ctx->pc = 0x17569cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF810u));
    // 0x1756a0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1756A0u;
    SET_GPR_U32(ctx, 31, 0x1756A8u);
    ctx->pc = 0x1756A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756A0u;
    // 0x1756a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1756A0u, 0x1756A8u)) {
        return;
    }
    ctx->pc = 0x1756A8u;
label_1756a8:
    // 0x1756a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1756a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1756ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1756acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1756b0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1756B0u;
    {
        const bool branch_taken_0x1756b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1756B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756B0u;
        // 0x1756b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756b0) {
            ctx->pc = 0x175788u;
            goto label_175788;
        }
    }
    ctx->pc = 0x1756B8u;
    // 0x1756b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1756b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1756bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1756bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1756c0:
    // 0x1756c0: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x1756c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1756c4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1756C4u;
    {
        const bool branch_taken_0x1756c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1756C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756C4u;
        // 0x1756c8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756c4) {
            ctx->pc = 0x175758u;
            goto label_175758;
        }
    }
    ctx->pc = 0x1756CCu;
    // 0x1756cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1756ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1756d0: 0x24426120  addiu       $v0, $v0, 0x6120
    ctx->pc = 0x1756d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24864));
    // 0x1756d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1756d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1756d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1756d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1756dc: 0x800008  jr          $a0
    ctx->pc = 0x1756DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1756E4u: goto label_1756e4;
            case 0x1756FCu: goto label_1756fc;
            case 0x175714u: goto label_175714;
            case 0x17572Cu: goto label_17572c;
            case 0x175744u: goto label_175744;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1756DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1756E4u;
label_1756e4:
    // 0x1756e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1756e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1756e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1756e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756ec: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1756ECu;
    SET_GPR_U32(ctx, 31, 0x1756F4u);
    ctx->pc = 0x1756F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756ECu;
    // 0x1756f0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1756ECu, 0x1756F4u)) {
        return;
    }
    ctx->pc = 0x1756F4u;
label_1756f4:
    // 0x1756f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1756F4u;
    {
        const bool branch_taken_0x1756f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1756F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756F4u;
        // 0x1756f8: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756f4) {
            ctx->pc = 0x175758u;
            goto label_175758;
        }
    }
    ctx->pc = 0x1756FCu;
label_1756fc:
    // 0x1756fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1756fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175704: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175704u;
    SET_GPR_U32(ctx, 31, 0x17570Cu);
    ctx->pc = 0x175708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175704u;
    // 0x175708: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175704u, 0x17570Cu)) {
        return;
    }
    ctx->pc = 0x17570Cu;
label_17570c:
    // 0x17570c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17570Cu;
    {
        const bool branch_taken_0x17570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17570Cu;
        // 0x175710: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17570c) {
            ctx->pc = 0x175758u;
            goto label_175758;
        }
    }
    ctx->pc = 0x175714u;
label_175714:
    // 0x175714: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17571c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17571Cu;
    SET_GPR_U32(ctx, 31, 0x175724u);
    ctx->pc = 0x175720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17571Cu;
    // 0x175720: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17571Cu, 0x175724u)) {
        return;
    }
    ctx->pc = 0x175724u;
label_175724:
    // 0x175724: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x175724u;
    {
        const bool branch_taken_0x175724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175724u;
        // 0x175728: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175724) {
            ctx->pc = 0x175758u;
            goto label_175758;
        }
    }
    ctx->pc = 0x17572Cu;
label_17572c:
    // 0x17572c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175734: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175734u;
    SET_GPR_U32(ctx, 31, 0x17573Cu);
    ctx->pc = 0x175738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175734u;
    // 0x175738: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175734u, 0x17573Cu)) {
        return;
    }
    ctx->pc = 0x17573Cu;
label_17573c:
    // 0x17573c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17573Cu;
    {
        const bool branch_taken_0x17573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17573Cu;
        // 0x175740: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17573c) {
            ctx->pc = 0x175758u;
            goto label_175758;
        }
    }
    ctx->pc = 0x175744u;
label_175744:
    // 0x175744: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17574c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17574Cu;
    SET_GPR_U32(ctx, 31, 0x175754u);
    ctx->pc = 0x175750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17574Cu;
    // 0x175750: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17574Cu, 0x175754u)) {
        return;
    }
    ctx->pc = 0x175754u;
label_175754:
    // 0x175754: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x175754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_175758:
    // 0x175758: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x175758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17575c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x175760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175764: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17576c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17576Cu;
    SET_GPR_U32(ctx, 31, 0x175774u);
    ctx->pc = 0x175770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17576Cu;
    // 0x175770: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17576Cu, 0x175774u)) {
        return;
    }
    ctx->pc = 0x175774u;
label_175774:
    // 0x175774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x175774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175778: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17577c: 0x5460ffd0  bnel        $v1, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x17577Cu;
    {
        const bool branch_taken_0x17577c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17577c) {
            ctx->pc = 0x175780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17577Cu;
            // 0x175780: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1756C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1756c0;
        }
    }
    ctx->pc = 0x175784u;
    // 0x175784: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175788:
    // 0x175788: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x175788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17578c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17578cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175790: 0x3e00008  jr          $ra
    ctx->pc = 0x175790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175790u;
        // 0x175794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175798u;
}
