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

// Function: sub_00160800
// Address: 0x160800 - 0x1608b0
void sub_00160800_0x160800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160800_0x160800");
#endif

    switch (ctx->pc) {
        case 0x160830u: goto label_160830;
        case 0x16085cu: goto label_16085c;
        case 0x160870u: goto label_160870;
        case 0x160888u: goto label_160888;
        case 0x160898u: goto label_160898;
        default: break;
    }

    ctx->pc = 0x160800u;

    // 0x160800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160804: 0x24423530  addiu       $v0, $v0, 0x3530
    ctx->pc = 0x160804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13616));
    // 0x160808: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x160808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
    // 0x16080c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16080cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x160810: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x160810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x160814: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x160814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x160818: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x160818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16081c: 0x8c448644  lw          $a0, -0x79BC($v0)
    ctx->pc = 0x16081cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338644u));
    // 0x160820: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x160820u;
    {
        const bool branch_taken_0x160820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160820u;
        // 0x160824: 0xac408644  sw          $zero, -0x79BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160820) {
            ctx->pc = 0x16084Cu;
            goto label_16084c;
        }
    }
    ctx->pc = 0x160828u;
    // 0x160828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x160828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16082c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16082cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160830:
    // 0x160830: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160830u;
    {
        const bool branch_taken_0x160830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x160834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160830u;
        // 0x160834: 0x8c840044  lw          $a0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160830) {
            ctx->pc = 0x160844u;
            goto label_160844;
        }
    }
    ctx->pc = 0x160838u;
    // 0x160838: 0x8ca28644  lw          $v0, -0x79BC($a1)
    ctx->pc = 0x160838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936132)));
    // 0x16083c: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x16083cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x160840: 0xaca38644  sw          $v1, -0x79BC($a1)
    ctx->pc = 0x160840u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936132), GPR_U32(ctx, 3));
label_160844:
    // 0x160844: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160844u;
    {
        const bool branch_taken_0x160844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x160848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160844u;
        // 0x160848: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160844) {
            ctx->pc = 0x160830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160830;
        }
    }
    ctx->pc = 0x16084Cu;
label_16084c:
    // 0x16084c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16084cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x160850: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x160850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x160854: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x160854u;
    SET_GPR_U32(ctx, 31, 0x16085Cu);
    ctx->pc = 0x160858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160854u;
    // 0x160858: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x160854u, 0x16085Cu)) {
        return;
    }
    ctx->pc = 0x16085Cu;
label_16085c:
    // 0x16085c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x16085cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x160860: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160860u;
    {
        const bool branch_taken_0x160860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x160860) {
            ctx->pc = 0x160864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160860u;
            // 0x160864: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160878u;
            goto label_160878;
        }
    }
    ctx->pc = 0x160868u;
    // 0x160868: 0xc0808d4  jal         func_202350
    ctx->pc = 0x160868u;
    SET_GPR_U32(ctx, 31, 0x160870u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x160868u, 0x160870u)) {
        return;
    }
    ctx->pc = 0x160870u;
label_160870:
    // 0x160870: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x160870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x160874: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x160874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_160878:
    // 0x160878: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160878u;
    {
        const bool branch_taken_0x160878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x160878) {
            ctx->pc = 0x16087Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160878u;
            // 0x16087c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160890u;
            goto label_160890;
        }
    }
    ctx->pc = 0x160880u;
    // 0x160880: 0xc0808d4  jal         func_202350
    ctx->pc = 0x160880u;
    SET_GPR_U32(ctx, 31, 0x160888u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x160880u, 0x160888u)) {
        return;
    }
    ctx->pc = 0x160888u;
label_160888:
    // 0x160888: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x160888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x16088c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160890:
    // 0x160890: 0xc04f084  jal         func_13C210
    ctx->pc = 0x160890u;
    SET_GPR_U32(ctx, 31, 0x160898u);
    ctx->pc = 0x160894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160890u;
    // 0x160894: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x160890u, 0x160898u)) {
        return;
    }
    ctx->pc = 0x160898u;
label_160898:
    // 0x160898: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x160898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16089c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16089cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1608a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1608a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1608a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1608A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1608A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608A4u;
        // 0x1608a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1608A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1608ACu;
    // 0x1608ac: 0x0  nop
    ctx->pc = 0x1608acu;
    // NOP
    ctx->pc = 0x1608b0u;
}
