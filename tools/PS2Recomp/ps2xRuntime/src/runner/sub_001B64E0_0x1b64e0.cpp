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

// Function: sub_001B64E0
// Address: 0x1b64e0 - 0x1b6590
void sub_001B64E0_0x1b64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B64E0_0x1b64e0");
#endif

    switch (ctx->pc) {
        case 0x1b6510u: goto label_1b6510;
        case 0x1b6550u: goto label_1b6550;
        case 0x1b657cu: goto label_1b657c;
        default: break;
    }

    ctx->pc = 0x1b64e0u;

    // 0x1b64e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b64e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b64e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b64e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b64e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b64ec: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x1b64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x1b64f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b64f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b64f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b64f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b64f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b64fc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1b6500: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b6500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6504: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B6504u;
    {
        const bool branch_taken_0x1b6504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6504u;
        // 0x1b6508: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6504) {
            ctx->pc = 0x1B6568u;
            goto label_1b6568;
        }
    }
    ctx->pc = 0x1B650Cu;
    // 0x1b650c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b6510:
    // 0x1b6510: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6510u;
    {
        const bool branch_taken_0x1b6510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6510) {
            ctx->pc = 0x1B6514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6510u;
            // 0x1b6514: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6560u;
            goto label_1b6560;
        }
    }
    ctx->pc = 0x1B6518u;
    // 0x1b6518: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b6518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b651c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B651Cu;
    {
        const bool branch_taken_0x1b651c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B651Cu;
        // 0x1b6520: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b651c) {
            ctx->pc = 0x1B652Cu;
            goto label_1b652c;
        }
    }
    ctx->pc = 0x1B6524u;
    // 0x1b6524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6524u;
    {
        const bool branch_taken_0x1b6524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6524u;
        // 0x1b6528: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6524) {
            ctx->pc = 0x1B6530u;
            goto label_1b6530;
        }
    }
    ctx->pc = 0x1B652Cu;
label_1b652c:
    // 0x1b652c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b652cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b6530:
    // 0x1b6530: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b6530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6534: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6534u;
    {
        const bool branch_taken_0x1b6534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6534u;
        // 0x1b6538: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6534) {
            ctx->pc = 0x1B6544u;
            goto label_1b6544;
        }
    }
    ctx->pc = 0x1B653Cu;
    // 0x1b653c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B653Cu;
    {
        const bool branch_taken_0x1b653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B653Cu;
        // 0x1b6540: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b653c) {
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B6544u;
label_1b6544:
    // 0x1b6544: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b6544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b6548:
    // 0x1b6548: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B6548u;
    SET_GPR_U32(ctx, 31, 0x1B6550u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B6548u, 0x1B6550u)) {
        return;
    }
    ctx->pc = 0x1B6550u;
label_1b6550:
    // 0x1b6550: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6554: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b6558: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b6558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b655c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b6560:
    // 0x1b6560: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B6560u;
    {
        const bool branch_taken_0x1b6560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6560) {
            ctx->pc = 0x1B6564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6560u;
            // 0x1b6564: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6510;
        }
    }
    ctx->pc = 0x1B6568u;
label_1b6568:
    // 0x1b6568: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b6568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b656c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B656Cu;
    {
        const bool branch_taken_0x1b656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b656c) {
            ctx->pc = 0x1B6570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B656Cu;
            // 0x1b6570: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6580u;
            goto label_1b6580;
        }
    }
    ctx->pc = 0x1B6574u;
    // 0x1b6574: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B6574u;
    SET_GPR_U32(ctx, 31, 0x1B657Cu);
    ctx->pc = 0x1B6578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6574u;
    // 0x1b6578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B6574u, 0x1B657Cu)) {
        return;
    }
    ctx->pc = 0x1B657Cu;
label_1b657c:
    // 0x1b657c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b657cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6580:
    // 0x1b6580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6588: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6588u;
        // 0x1b658c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6590u;
}
