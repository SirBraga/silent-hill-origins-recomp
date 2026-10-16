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

// Function: sub_00173488
// Address: 0x173488 - 0x173510
void sub_00173488_0x173488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173488_0x173488");
#endif

    switch (ctx->pc) {
        case 0x1734c8u: goto label_1734c8;
        case 0x1734f8u: goto label_1734f8;
        default: break;
    }

    ctx->pc = 0x173488u;

    // 0x173488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17348c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x173490: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x173490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x173494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173498: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17349c: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x17349cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1734a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1734a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1734a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1734a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734a8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1734a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1734ac: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1734acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1734b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1734B0u;
    {
        const bool branch_taken_0x1734b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734B0u;
        // 0x1734b4: 0x24655a80  addiu       $a1, $v1, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734b0) {
            ctx->pc = 0x1734BCu;
            goto label_1734bc;
        }
    }
    ctx->pc = 0x1734B8u;
    // 0x1734b8: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x1734b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1734bc:
    // 0x1734bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1734bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1734c0: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x1734C0u;
    SET_GPR_U32(ctx, 31, 0x1734C8u);
    ctx->pc = 0x1734C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734C0u;
    // 0x1734c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x1734C0u, 0x1734C8u)) {
        return;
    }
    ctx->pc = 0x1734C8u;
label_1734c8:
    // 0x1734c8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1734c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1734cc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1734ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1734d0: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1734d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1734d4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1734d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1734d8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1734D8u;
    {
        const bool branch_taken_0x1734d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1734DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734D8u;
        // 0x1734dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734d8) {
            ctx->pc = 0x1734FCu;
            goto label_1734fc;
        }
    }
    ctx->pc = 0x1734E0u;
    // 0x1734e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1734e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1734e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1734E4u;
    {
        const bool branch_taken_0x1734e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734E4u;
        // 0x1734e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734e4) {
            ctx->pc = 0x1734FCu;
            goto label_1734fc;
        }
    }
    ctx->pc = 0x1734ECu;
    // 0x1734ec: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1734ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1734f0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1734F0u;
    SET_GPR_U32(ctx, 31, 0x1734F8u);
    ctx->pc = 0x1734F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734F0u;
    // 0x1734f4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1734F0u, 0x1734F8u)) {
        return;
    }
    ctx->pc = 0x1734F8u;
label_1734f8:
    // 0x1734f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1734f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1734fc:
    // 0x1734fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1734fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173504: 0x3e00008  jr          $ra
    ctx->pc = 0x173504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173504u;
        // 0x173508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17350Cu;
    // 0x17350c: 0x0  nop
    ctx->pc = 0x17350cu;
    // NOP
    ctx->pc = 0x173510u;
}
