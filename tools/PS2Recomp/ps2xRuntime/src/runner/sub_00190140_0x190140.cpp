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

// Function: sub_00190140
// Address: 0x190140 - 0x1901f0
void sub_00190140_0x190140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190140_0x190140");
#endif

    switch (ctx->pc) {
        case 0x190170u: goto label_190170;
        case 0x1901b0u: goto label_1901b0;
        case 0x1901dcu: goto label_1901dc;
        default: break;
    }

    ctx->pc = 0x190140u;

    // 0x190140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190144: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x190144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x190148: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x190148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19014c: 0x244294d0  addiu       $v0, $v0, -0x6B30
    ctx->pc = 0x19014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x190150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19015c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x19015cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x190160: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x190160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x190164: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x190164u;
    {
        const bool branch_taken_0x190164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190164u;
        // 0x190168: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190164) {
            ctx->pc = 0x1901C8u;
            goto label_1901c8;
        }
    }
    ctx->pc = 0x19016Cu;
    // 0x19016c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19016cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_190170:
    // 0x190170: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190170u;
    {
        const bool branch_taken_0x190170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190170) {
            ctx->pc = 0x190174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190170u;
            // 0x190174: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1901C0u;
            goto label_1901c0;
        }
    }
    ctx->pc = 0x190178u;
    // 0x190178: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19017c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19017Cu;
    {
        const bool branch_taken_0x19017c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19017Cu;
        // 0x190180: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19017c) {
            ctx->pc = 0x19018Cu;
            goto label_19018c;
        }
    }
    ctx->pc = 0x190184u;
    // 0x190184: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190184u;
    {
        const bool branch_taken_0x190184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190184u;
        // 0x190188: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190184) {
            ctx->pc = 0x190190u;
            goto label_190190;
        }
    }
    ctx->pc = 0x19018Cu;
label_19018c:
    // 0x19018c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x19018cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_190190:
    // 0x190190: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190194: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190194u;
    {
        const bool branch_taken_0x190194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190194u;
        // 0x190198: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190194) {
            ctx->pc = 0x1901A4u;
            goto label_1901a4;
        }
    }
    ctx->pc = 0x19019Cu;
    // 0x19019c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19019Cu;
    {
        const bool branch_taken_0x19019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1901A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19019Cu;
        // 0x1901a0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19019c) {
            ctx->pc = 0x1901A8u;
            goto label_1901a8;
        }
    }
    ctx->pc = 0x1901A4u;
label_1901a4:
    // 0x1901a4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1901a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1901a8:
    // 0x1901a8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1901A8u;
    SET_GPR_U32(ctx, 31, 0x1901B0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1901A8u, 0x1901B0u)) {
        return;
    }
    ctx->pc = 0x1901B0u;
label_1901b0:
    // 0x1901b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1901b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1901b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1901b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1901b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1901b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1901bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1901bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1901c0:
    // 0x1901c0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1901C0u;
    {
        const bool branch_taken_0x1901c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1901c0) {
            ctx->pc = 0x1901C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1901C0u;
            // 0x1901c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190170;
        }
    }
    ctx->pc = 0x1901C8u;
label_1901c8:
    // 0x1901c8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1901c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1901cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1901CCu;
    {
        const bool branch_taken_0x1901cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1901cc) {
            ctx->pc = 0x1901D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1901CCu;
            // 0x1901d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1901E0u;
            goto label_1901e0;
        }
    }
    ctx->pc = 0x1901D4u;
    // 0x1901d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1901D4u;
    SET_GPR_U32(ctx, 31, 0x1901DCu);
    ctx->pc = 0x1901D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901D4u;
    // 0x1901d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1901D4u, 0x1901DCu)) {
        return;
    }
    ctx->pc = 0x1901DCu;
label_1901dc:
    // 0x1901dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1901dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1901e0:
    // 0x1901e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1901e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1901e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1901e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1901e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1901E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901E8u;
        // 0x1901ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1901E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1901F0u;
}
