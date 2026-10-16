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

// Function: sub_001BEA48
// Address: 0x1bea48 - 0x1beaf8
void sub_001BEA48_0x1bea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEA48_0x1bea48");
#endif

    switch (ctx->pc) {
        case 0x1bea64u: goto label_1bea64;
        case 0x1bea80u: goto label_1bea80;
        case 0x1beae4u: goto label_1beae4;
        default: break;
    }

    ctx->pc = 0x1bea48u;

    // 0x1bea48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bea4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bea50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bea54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bea54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bea5c: 0xc06f5d6  jal         func_1BD758
    ctx->pc = 0x1BEA5Cu;
    SET_GPR_U32(ctx, 31, 0x1BEA64u);
    ctx->pc = 0x1BEA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA5Cu;
    // 0x1bea60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD758u, 0x1BEA5Cu, 0x1BEA64u)) {
        return;
    }
    ctx->pc = 0x1BEA64u;
label_1bea64:
    // 0x1bea64: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1bea64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1bea68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1bea6c: 0x2442d7e0  addiu       $v0, $v0, -0x2820
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957024));
    // 0x1bea70: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1bea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bea74: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BEA74u;
    {
        const bool branch_taken_0x1bea74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA74u;
        // 0x1bea78: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea74) {
            ctx->pc = 0x1BEAD0u;
            goto label_1bead0;
        }
    }
    ctx->pc = 0x1BEA7Cu;
    // 0x1bea7c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1bea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1bea80:
    // 0x1bea80: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BEA80u;
    {
        const bool branch_taken_0x1bea80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea80) {
            ctx->pc = 0x1BEA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEA80u;
            // 0x1bea84: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEAC8u;
            goto label_1beac8;
        }
    }
    ctx->pc = 0x1BEA88u;
    // 0x1bea88: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bea8c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEA8Cu;
    {
        const bool branch_taken_0x1bea8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA8Cu;
        // 0x1bea90: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea8c) {
            ctx->pc = 0x1BEA9Cu;
            goto label_1bea9c;
        }
    }
    ctx->pc = 0x1BEA94u;
    // 0x1bea94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEA94u;
    {
        const bool branch_taken_0x1bea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA94u;
        // 0x1bea98: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea94) {
            ctx->pc = 0x1BEAA0u;
            goto label_1beaa0;
        }
    }
    ctx->pc = 0x1BEA9Cu;
label_1bea9c:
    // 0x1bea9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1beaa0:
    // 0x1beaa0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1beaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1beaa4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEAA4u;
    {
        const bool branch_taken_0x1beaa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAA4u;
        // 0x1beaa8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beaa4) {
            ctx->pc = 0x1BEAB4u;
            goto label_1beab4;
        }
    }
    ctx->pc = 0x1BEAACu;
    // 0x1beaac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEAACu;
    {
        const bool branch_taken_0x1beaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAACu;
        // 0x1beab0: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beaac) {
            ctx->pc = 0x1BEAB8u;
            goto label_1beab8;
        }
    }
    ctx->pc = 0x1BEAB4u;
label_1beab4:
    // 0x1beab4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1beab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1beab8:
    // 0x1beab8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1beab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1beabc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1beabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1beac0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1beac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1beac4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1beac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1beac8:
    // 0x1beac8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1BEAC8u;
    {
        const bool branch_taken_0x1beac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1beac8) {
            ctx->pc = 0x1BEACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEAC8u;
            // 0x1beacc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bea80;
        }
    }
    ctx->pc = 0x1BEAD0u;
label_1bead0:
    // 0x1bead0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1bead0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1bead4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEAD4u;
    {
        const bool branch_taken_0x1bead4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bead4) {
            ctx->pc = 0x1BEAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEAD4u;
            // 0x1bead8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEAE8u;
            goto label_1beae8;
        }
    }
    ctx->pc = 0x1BEADCu;
    // 0x1beadc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BEADCu;
    SET_GPR_U32(ctx, 31, 0x1BEAE4u);
    ctx->pc = 0x1BEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEADCu;
    // 0x1beae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BEADCu, 0x1BEAE4u)) {
        return;
    }
    ctx->pc = 0x1BEAE4u;
label_1beae4:
    // 0x1beae4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1beae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1beae8:
    // 0x1beae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1beae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1beaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAF0u;
        // 0x1beaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEAF8u;
}
