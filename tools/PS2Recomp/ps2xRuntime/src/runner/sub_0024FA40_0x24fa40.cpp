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

// Function: sub_0024FA40
// Address: 0x24fa40 - 0x24fae8
void sub_0024FA40_0x24fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FA40_0x24fa40");
#endif

    switch (ctx->pc) {
        case 0x24fa68u: goto label_24fa68;
        case 0x24fa70u: goto label_24fa70;
        case 0x24faa4u: goto label_24faa4;
        case 0x24fab8u: goto label_24fab8;
        default: break;
    }

    ctx->pc = 0x24fa40u;

    // 0x24fa40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24fa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24fa44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24fa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24fa48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24fa4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24fa4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24fa54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24fa58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24fa58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x24fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24fa60: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24FA60u;
    {
        const bool branch_taken_0x24fa60 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA60u;
        // 0x24fa64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa60) {
            ctx->pc = 0x24FA9Cu;
            goto label_24fa9c;
        }
    }
    ctx->pc = 0x24FA68u;
label_24fa68:
    // 0x24fa68: 0xc0941b2  jal         func_2506C8
    ctx->pc = 0x24FA68u;
    SET_GPR_U32(ctx, 31, 0x24FA70u);
    ctx->pc = 0x24FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FA68u;
    // 0x24fa6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2506C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2506C8u, 0x24FA68u, 0x24FA70u)) {
        return;
    }
    ctx->pc = 0x24FA70u;
label_24fa70:
    // 0x24fa70: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x24fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24fa74: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x24fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x24fa78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24fa7c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x24fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24fa80: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FA80u;
    {
        const bool branch_taken_0x24fa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x24fa80) {
            ctx->pc = 0x24FA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA80u;
            // 0x24fa84: 0xac91000c  sw          $s1, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA88u;
            goto label_24fa88;
        }
    }
    ctx->pc = 0x24FA88u;
label_24fa88:
    // 0x24fa88: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x24fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24fa8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24fa8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24fa90: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24fa90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24fa94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x24FA94u;
    {
        const bool branch_taken_0x24fa94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fa94) {
            ctx->pc = 0x24FA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fa68;
        }
    }
    ctx->pc = 0x24FA9Cu;
label_24fa9c:
    // 0x24fa9c: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x24FA9Cu;
    SET_GPR_U32(ctx, 31, 0x24FAA4u);
    ctx->pc = 0x24FAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FA9Cu;
    // 0x24faa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x24FA9Cu, 0x24FAA4u)) {
        return;
    }
    ctx->pc = 0x24FAA4u;
label_24faa4:
    // 0x24faa4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x24faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x24faa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24faa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24faac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24faacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fab0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x24FAB0u;
    SET_GPR_U32(ctx, 31, 0x24FAB8u);
    ctx->pc = 0x24FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FAB0u;
    // 0x24fab4: 0x24a5fa40  addiu       $a1, $a1, -0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x24FAB0u, 0x24FAB8u)) {
        return;
    }
    ctx->pc = 0x24FAB8u;
label_24fab8:
    // 0x24fab8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24fab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fabc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24fabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fac0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24fac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fac4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24fac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24facc: 0x3e00008  jr          $ra
    ctx->pc = 0x24FACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FACCu;
        // 0x24fad0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FAD4u;
    // 0x24fad4: 0x0  nop
    ctx->pc = 0x24fad4u;
    // NOP
    // 0x24fad8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24fadc: 0x0  nop
    ctx->pc = 0x24fadcu;
    // NOP
    // 0x24fae0: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x24fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x24fae4: 0x0  nop
    ctx->pc = 0x24fae4u;
    // NOP
    ctx->pc = 0x24fae8u;
}
