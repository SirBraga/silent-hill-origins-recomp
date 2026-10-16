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

// Function: sub_001804A8
// Address: 0x1804a8 - 0x180538
void sub_001804A8_0x1804a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001804A8_0x1804a8");
#endif

    switch (ctx->pc) {
        case 0x1804d8u: goto label_1804d8;
        case 0x180510u: goto label_180510;
        default: break;
    }

    ctx->pc = 0x1804a8u;

    // 0x1804a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1804a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1804ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1804acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1804b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1804b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1804b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1804b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1804b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1804b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1804bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1804c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1804c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804c4: 0x8c4389e8  lw          $v1, -0x7618($v0)
    ctx->pc = 0x1804c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3389E8u));
    // 0x1804c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1804C8u;
    {
        const bool branch_taken_0x1804c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804C8u;
        // 0x1804cc: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804c8) {
            ctx->pc = 0x1804F8u;
            goto label_1804f8;
        }
    }
    ctx->pc = 0x1804D0u;
    // 0x1804d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1804d4: 0x0  nop
    ctx->pc = 0x1804d4u;
    // NOP
label_1804d8:
    // 0x1804d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1804D8u;
    {
        const bool branch_taken_0x1804d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1804d8) {
            ctx->pc = 0x1804DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1804D8u;
            // 0x1804dc: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1804F0u;
            goto label_1804f0;
        }
    }
    ctx->pc = 0x1804E0u;
    // 0x1804e0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1804e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1804e4: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1804E4u;
    {
        const bool branch_taken_0x1804e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1804e4) {
            ctx->pc = 0x1804FCu;
            goto label_1804fc;
        }
    }
    ctx->pc = 0x1804ECu;
    // 0x1804ec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1804ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1804f0:
    // 0x1804f0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1804F0u;
    {
        const bool branch_taken_0x1804f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1804f0) {
            ctx->pc = 0x1804F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1804F0u;
            // 0x1804f4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1804D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1804d8;
        }
    }
    ctx->pc = 0x1804F8u;
label_1804f8:
    // 0x1804f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1804f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1804fc:
    // 0x1804fc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1804FCu;
    {
        const bool branch_taken_0x1804fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1804fc) {
            ctx->pc = 0x180500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1804FCu;
            // 0x180500: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180518u;
            goto label_180518;
        }
    }
    ctx->pc = 0x180504u;
    // 0x180504: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x180504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180508: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x180508u;
    SET_GPR_U32(ctx, 31, 0x180510u);
    ctx->pc = 0x18050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180508u;
    // 0x18050c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x180508u, 0x180510u)) {
        return;
    }
    ctx->pc = 0x180510u;
label_180510:
    // 0x180510: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x180510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180514: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x180514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_180518:
    // 0x180518: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18051c: 0x8e2289e8  lw          $v0, -0x7618($s1)
    ctx->pc = 0x18051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937064)));
    // 0x180520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180524: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x180524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x180528: 0xae2389e8  sw          $v1, -0x7618($s1)
    ctx->pc = 0x180528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937064), GPR_U32(ctx, 3));
    // 0x18052c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18052cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180530: 0x3e00008  jr          $ra
    ctx->pc = 0x180530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180530u;
        // 0x180534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180538u;
}
