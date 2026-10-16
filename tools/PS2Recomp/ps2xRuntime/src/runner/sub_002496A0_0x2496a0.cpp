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

// Function: sub_002496A0
// Address: 0x2496a0 - 0x249750
void sub_002496A0_0x2496a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002496A0_0x2496a0");
#endif

    switch (ctx->pc) {
        case 0x2496d0u: goto label_2496d0;
        case 0x2496dcu: goto label_2496dc;
        case 0x249714u: goto label_249714;
        default: break;
    }

    ctx->pc = 0x2496a0u;

    // 0x2496a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2496a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2496a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2496a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2496a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2496a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2496ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2496acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2496b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2496b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2496b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2496b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2496b8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2496b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2496bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2496bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2496c0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2496c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2496c4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2496C4u;
    {
        const bool branch_taken_0x2496c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496C4u;
        // 0x2496c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496c4) {
            ctx->pc = 0x249700u;
            goto label_249700;
        }
    }
    ctx->pc = 0x2496CCu;
    // 0x2496cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2496ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2496d0:
    // 0x2496d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2496d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2496d4: 0xc09250a  jal         func_249428
    ctx->pc = 0x2496D4u;
    SET_GPR_U32(ctx, 31, 0x2496DCu);
    ctx->pc = 0x2496D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496D4u;
    // 0x2496d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249428u, 0x2496D4u, 0x2496DCu)) {
        return;
    }
    ctx->pc = 0x2496DCu;
label_2496dc:
    // 0x2496dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2496DCu;
    {
        const bool branch_taken_0x2496dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496DCu;
        // 0x2496e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496dc) {
            ctx->pc = 0x249734u;
            goto label_249734;
        }
    }
    ctx->pc = 0x2496E4u;
    // 0x2496e4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2496E4u;
    {
        const bool branch_taken_0x2496e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2496E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496E4u;
        // 0x2496e8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496e4) {
            ctx->pc = 0x2496F4u;
            goto label_2496f4;
        }
    }
    ctx->pc = 0x2496ECu;
    // 0x2496ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2496f0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2496f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2496f4:
    // 0x2496f4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2496f8: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2496F8u;
    {
        const bool branch_taken_0x2496f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2496FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496F8u;
        // 0x2496fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496f8) {
            ctx->pc = 0x2496D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2496d0;
        }
    }
    ctx->pc = 0x249700u;
label_249700:
    // 0x249700: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x249700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x249704: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x249704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249708: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x249708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24970c: 0xc09250a  jal         func_249428
    ctx->pc = 0x24970Cu;
    SET_GPR_U32(ctx, 31, 0x249714u);
    ctx->pc = 0x249710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24970Cu;
    // 0x249710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249428u, 0x24970Cu, 0x249714u)) {
        return;
    }
    ctx->pc = 0x249714u;
label_249714:
    // 0x249714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x249714u;
    {
        const bool branch_taken_0x249714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249714u;
        // 0x249718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249714) {
            ctx->pc = 0x249734u;
            goto label_249734;
        }
    }
    ctx->pc = 0x24971Cu;
    // 0x24971c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24971Cu;
    {
        const bool branch_taken_0x24971c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24971c) {
            ctx->pc = 0x249720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24971Cu;
            // 0x249720: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249730u;
            goto label_249730;
        }
    }
    ctx->pc = 0x249724u;
    // 0x249724: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x249724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x249728: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x249728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x24972c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x24972cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_249730:
    // 0x249730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249734:
    // 0x249734: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x249734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249738: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x249738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24973c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24973cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249744: 0x3e00008  jr          $ra
    ctx->pc = 0x249744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249744u;
        // 0x249748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24974Cu;
    // 0x24974c: 0x0  nop
    ctx->pc = 0x24974cu;
    // NOP
    ctx->pc = 0x249750u;
}
