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

// Function: sub_001FF820
// Address: 0x1ff820 - 0x1ff8d8
void sub_001FF820_0x1ff820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF820_0x1ff820");
#endif

    switch (ctx->pc) {
        case 0x1ff848u: goto label_1ff848;
        case 0x1ff85cu: goto label_1ff85c;
        case 0x1ff864u: goto label_1ff864;
        case 0x1ff874u: goto label_1ff874;
        case 0x1ff8a4u: goto label_1ff8a4;
        case 0x1ff8acu: goto label_1ff8ac;
        case 0x1ff8b4u: goto label_1ff8b4;
        case 0x1ff8c0u: goto label_1ff8c0;
        default: break;
    }

    ctx->pc = 0x1ff820u;

    // 0x1ff820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ff824: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ff824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ff828: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ff828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ff82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff830: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ff830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ff834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ff838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ff83c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ff83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff840: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1FF840u;
    SET_GPR_U32(ctx, 31, 0x1FF848u);
    ctx->pc = 0x1FF844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF840u;
    // 0x1ff844: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FF840u, 0x1FF848u)) {
        return;
    }
    ctx->pc = 0x1FF848u;
label_1ff848:
    // 0x1ff848: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ff848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff84c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ff84cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ff850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff854: 0xc093546  jal         func_24D518
    ctx->pc = 0x1FF854u;
    SET_GPR_U32(ctx, 31, 0x1FF85Cu);
    ctx->pc = 0x1FF858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF854u;
    // 0x1ff858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1FF854u, 0x1FF85Cu)) {
        return;
    }
    ctx->pc = 0x1FF85Cu;
label_1ff85c:
    // 0x1ff85c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1FF85Cu;
    SET_GPR_U32(ctx, 31, 0x1FF864u);
    ctx->pc = 0x1FF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF85Cu;
    // 0x1ff860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1FF85Cu, 0x1FF864u)) {
        return;
    }
    ctx->pc = 0x1FF864u;
label_1ff864:
    // 0x1ff864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff868: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ff868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff86c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1FF86Cu;
    SET_GPR_U32(ctx, 31, 0x1FF874u);
    ctx->pc = 0x1FF870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF86Cu;
    // 0x1ff870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1FF86Cu, 0x1FF874u)) {
        return;
    }
    ctx->pc = 0x1FF874u;
label_1ff874:
    // 0x1ff874: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ff874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ff878: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ff878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff87c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1ff87cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1ff880: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF880u;
    {
        const bool branch_taken_0x1ff880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff880) {
            ctx->pc = 0x1FF8A4u;
            goto label_1ff8a4;
        }
    }
    ctx->pc = 0x1FF888u;
    // 0x1ff888: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff88c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF88Cu;
    {
        const bool branch_taken_0x1ff88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF88Cu;
        // 0x1ff890: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff88c) {
            ctx->pc = 0x1FF8A4u;
            goto label_1ff8a4;
        }
    }
    ctx->pc = 0x1FF894u;
    // 0x1ff894: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ff894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ff898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff89c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1FF89Cu;
    SET_GPR_U32(ctx, 31, 0x1FF8A4u);
    ctx->pc = 0x1FF8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF89Cu;
    // 0x1ff8a0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1FF89Cu, 0x1FF8A4u)) {
        return;
    }
    ctx->pc = 0x1FF8A4u;
label_1ff8a4:
    // 0x1ff8a4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1FF8A4u;
    SET_GPR_U32(ctx, 31, 0x1FF8ACu);
    ctx->pc = 0x1FF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8A4u;
    // 0x1ff8a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1FF8A4u, 0x1FF8ACu)) {
        return;
    }
    ctx->pc = 0x1FF8ACu;
label_1ff8ac:
    // 0x1ff8ac: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FF8ACu;
    SET_GPR_U32(ctx, 31, 0x1FF8B4u);
    ctx->pc = 0x1FF8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8ACu;
    // 0x1ff8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FF8ACu, 0x1FF8B4u)) {
        return;
    }
    ctx->pc = 0x1FF8B4u;
label_1ff8b4:
    // 0x1ff8b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8b8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1FF8B8u;
    SET_GPR_U32(ctx, 31, 0x1FF8C0u);
    ctx->pc = 0x1FF8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8B8u;
    // 0x1ff8bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1FF8B8u, 0x1FF8C0u)) {
        return;
    }
    ctx->pc = 0x1FF8C0u;
label_1ff8c0:
    // 0x1ff8c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ff8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff8c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ff8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff8c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ff8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff8cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ff8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8D0u;
        // 0x1ff8d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF8D8u;
}
