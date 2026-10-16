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

// Function: sub_00173510
// Address: 0x173510 - 0x1735a0
void sub_00173510_0x173510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173510_0x173510");
#endif

    switch (ctx->pc) {
        case 0x173550u: goto label_173550;
        case 0x173580u: goto label_173580;
        default: break;
    }

    ctx->pc = 0x173510u;

    // 0x173510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173514: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x173514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x173518: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x173518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17351c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17351cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173520: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x173524: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x173524u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x173528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17352c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17352cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173530: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x173530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x173534: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x173534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x173538: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x173538u;
    {
        const bool branch_taken_0x173538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173538u;
        // 0x17353c: 0x24655ac0  addiu       $a1, $v1, 0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173538) {
            ctx->pc = 0x173544u;
            goto label_173544;
        }
    }
    ctx->pc = 0x173540u;
    // 0x173540: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x173540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_173544:
    // 0x173544: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x173544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x173548: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x173548u;
    SET_GPR_U32(ctx, 31, 0x173550u);
    ctx->pc = 0x17354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173548u;
    // 0x17354c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x173548u, 0x173550u)) {
        return;
    }
    ctx->pc = 0x173550u;
label_173550:
    // 0x173550: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x173550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x173554: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x173554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x173558: 0x8c4500a0  lw          $a1, 0xA0($v0)
    ctx->pc = 0x173558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x17355c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x17355cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x173560: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x173560u;
    {
        const bool branch_taken_0x173560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x173564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173560u;
        // 0x173564: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173560) {
            ctx->pc = 0x173584u;
            goto label_173584;
        }
    }
    ctx->pc = 0x173568u;
    // 0x173568: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x173568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17356c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17356Cu;
    {
        const bool branch_taken_0x17356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17356Cu;
        // 0x173570: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17356c) {
            ctx->pc = 0x173584u;
            goto label_173584;
        }
    }
    ctx->pc = 0x173574u;
    // 0x173574: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x173574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x173578: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x173578u;
    SET_GPR_U32(ctx, 31, 0x173580u);
    ctx->pc = 0x17357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173578u;
    // 0x17357c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x173578u, 0x173580u)) {
        return;
    }
    ctx->pc = 0x173580u;
label_173580:
    // 0x173580: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x173580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173584:
    // 0x173584: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17358c: 0x3e00008  jr          $ra
    ctx->pc = 0x17358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17358Cu;
        // 0x173590: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173594u;
    // 0x173594: 0x0  nop
    ctx->pc = 0x173594u;
    // NOP
    // 0x173598: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x173598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17359c: 0x0  nop
    ctx->pc = 0x17359cu;
    // NOP
    ctx->pc = 0x1735a0u;
}
