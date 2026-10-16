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

// Function: sub_0013C540
// Address: 0x13c540 - 0x13c5f0
void sub_0013C540_0x13c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C540_0x13c540");
#endif

    switch (ctx->pc) {
        case 0x13c570u: goto label_13c570;
        case 0x13c5b0u: goto label_13c5b0;
        case 0x13c5dcu: goto label_13c5dc;
        default: break;
    }

    ctx->pc = 0x13c540u;

    // 0x13c540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c544: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13c548: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13c54c: 0x2442f7a8  addiu       $v0, $v0, -0x858
    ctx->pc = 0x13c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965160));
    // 0x13c550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c55c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13c560: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13c560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13c564: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x13C564u;
    {
        const bool branch_taken_0x13c564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C564u;
        // 0x13c568: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c564) {
            ctx->pc = 0x13C5C8u;
            goto label_13c5c8;
        }
    }
    ctx->pc = 0x13C56Cu;
    // 0x13c56c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13c570:
    // 0x13c570: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13C570u;
    {
        const bool branch_taken_0x13c570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c570) {
            ctx->pc = 0x13C574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C570u;
            // 0x13c574: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C5C0u;
            goto label_13c5c0;
        }
    }
    ctx->pc = 0x13C578u;
    // 0x13c578: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13c578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13c57c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C57Cu;
    {
        const bool branch_taken_0x13c57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C57Cu;
        // 0x13c580: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c57c) {
            ctx->pc = 0x13C58Cu;
            goto label_13c58c;
        }
    }
    ctx->pc = 0x13C584u;
    // 0x13c584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13C584u;
    {
        const bool branch_taken_0x13c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C584u;
        // 0x13c588: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c584) {
            ctx->pc = 0x13C590u;
            goto label_13c590;
        }
    }
    ctx->pc = 0x13C58Cu;
label_13c58c:
    // 0x13c58c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_13c590:
    // 0x13c590: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13c594: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C594u;
    {
        const bool branch_taken_0x13c594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C594u;
        // 0x13c598: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c594) {
            ctx->pc = 0x13C5A4u;
            goto label_13c5a4;
        }
    }
    ctx->pc = 0x13C59Cu;
    // 0x13c59c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13C59Cu;
    {
        const bool branch_taken_0x13c59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C59Cu;
        // 0x13c5a0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c59c) {
            ctx->pc = 0x13C5A8u;
            goto label_13c5a8;
        }
    }
    ctx->pc = 0x13C5A4u;
label_13c5a4:
    // 0x13c5a4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x13c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_13c5a8:
    // 0x13c5a8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x13C5A8u;
    SET_GPR_U32(ctx, 31, 0x13C5B0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x13C5A8u, 0x13C5B0u)) {
        return;
    }
    ctx->pc = 0x13C5B0u;
label_13c5b0:
    // 0x13c5b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c5b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c5b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13c5bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13c5c0:
    // 0x13c5c0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13C5C0u;
    {
        const bool branch_taken_0x13c5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c5c0) {
            ctx->pc = 0x13C5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C5C0u;
            // 0x13c5c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c570;
        }
    }
    ctx->pc = 0x13C5C8u;
label_13c5c8:
    // 0x13c5c8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x13c5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x13c5cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C5CCu;
    {
        const bool branch_taken_0x13c5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c5cc) {
            ctx->pc = 0x13C5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C5CCu;
            // 0x13c5d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C5E0u;
            goto label_13c5e0;
        }
    }
    ctx->pc = 0x13C5D4u;
    // 0x13c5d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x13C5D4u;
    SET_GPR_U32(ctx, 31, 0x13C5DCu);
    ctx->pc = 0x13C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5D4u;
    // 0x13c5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x13C5D4u, 0x13C5DCu)) {
        return;
    }
    ctx->pc = 0x13C5DCu;
label_13c5dc:
    // 0x13c5dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13c5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13c5e0:
    // 0x13c5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13C5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5E8u;
        // 0x13c5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C5F0u;
}
