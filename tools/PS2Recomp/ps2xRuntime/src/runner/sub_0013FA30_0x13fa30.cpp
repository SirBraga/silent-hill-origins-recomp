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

// Function: sub_0013FA30
// Address: 0x13fa30 - 0x13fb08
void sub_0013FA30_0x13fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FA30_0x13fa30");
#endif

    switch (ctx->pc) {
        case 0x13fa4cu: goto label_13fa4c;
        case 0x13fa60u: goto label_13fa60;
        case 0x13fa78u: goto label_13fa78;
        case 0x13fa98u: goto label_13fa98;
        case 0x13fab4u: goto label_13fab4;
        case 0x13fac4u: goto label_13fac4;
        case 0x13fae0u: goto label_13fae0;
        default: break;
    }

    ctx->pc = 0x13fa30u;

    // 0x13fa30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13fa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13fa34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13fa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13fa38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13fa3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13fa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13fa44: 0xc04ed0e  jal         func_13B438
    ctx->pc = 0x13FA44u;
    SET_GPR_U32(ctx, 31, 0x13FA4Cu);
    ctx->pc = 0x13FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA44u;
    // 0x13fa48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x13FA44u, 0x13FA4Cu)) {
        return;
    }
    ctx->pc = 0x13FA4Cu;
label_13fa4c:
    // 0x13fa4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13fa50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa54: 0x8c464828  lw          $a2, 0x4828($v0)
    ctx->pc = 0x13fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4828u));
    // 0x13fa58: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13FA58u;
    SET_GPR_U32(ctx, 31, 0x13FA60u);
    ctx->pc = 0x13FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA58u;
    // 0x13fa5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13FA58u, 0x13FA60u)) {
        return;
    }
    ctx->pc = 0x13FA60u;
label_13fa60:
    // 0x13fa60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fa64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fa68: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13FA68u;
    {
        const bool branch_taken_0x13fa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA68u;
        // 0x13fa6c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa68) {
            ctx->pc = 0x13FAF0u;
            goto label_13faf0;
        }
    }
    ctx->pc = 0x13FA70u;
    // 0x13fa70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fa74: 0x0  nop
    ctx->pc = 0x13fa74u;
    // NOP
label_13fa78:
    // 0x13fa78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13fa7c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13FA7Cu;
    {
        const bool branch_taken_0x13fa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fa7c) {
            ctx->pc = 0x13FA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FA7Cu;
            // 0x13fa80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FACCu;
            goto label_13facc;
        }
    }
    ctx->pc = 0x13FA84u;
    // 0x13fa84: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13fa88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FA88u;
    {
        const bool branch_taken_0x13fa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA88u;
        // 0x13fa8c: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa88) {
            ctx->pc = 0x13FAA0u;
            goto label_13faa0;
        }
    }
    ctx->pc = 0x13FA90u;
    // 0x13fa90: 0xc041f0c  jal         func_107C30
    ctx->pc = 0x13FA90u;
    SET_GPR_U32(ctx, 31, 0x13FA98u);
    ctx->pc = 0x13FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA90u;
    // 0x13fa94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C30u, 0x13FA90u, 0x13FA98u)) {
        return;
    }
    ctx->pc = 0x13FA98u;
label_13fa98:
    // 0x13fa98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13FA98u;
    {
        const bool branch_taken_0x13fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA98u;
        // 0x13fa9c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa98) {
            ctx->pc = 0x13FAC8u;
            goto label_13fac8;
        }
    }
    ctx->pc = 0x13FAA0u;
label_13faa0:
    // 0x13faa0: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13FAA0u;
    {
        const bool branch_taken_0x13faa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x13faa0) {
            ctx->pc = 0x13FABCu;
            goto label_13fabc;
        }
    }
    ctx->pc = 0x13FAA8u;
    // 0x13faa8: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x13faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x13faac: 0xc041f0c  jal         func_107C30
    ctx->pc = 0x13FAACu;
    SET_GPR_U32(ctx, 31, 0x13FAB4u);
    ctx->pc = 0x13FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FAACu;
    // 0x13fab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C30u, 0x13FAACu, 0x13FAB4u)) {
        return;
    }
    ctx->pc = 0x13FAB4u;
label_13fab4:
    // 0x13fab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13FAB4u;
    {
        const bool branch_taken_0x13fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAB4u;
        // 0x13fab8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fab4) {
            ctx->pc = 0x13FAC8u;
            goto label_13fac8;
        }
    }
    ctx->pc = 0x13FABCu;
label_13fabc:
    // 0x13fabc: 0xc041f0c  jal         func_107C30
    ctx->pc = 0x13FABCu;
    SET_GPR_U32(ctx, 31, 0x13FAC4u);
    ctx->pc = 0x13FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FABCu;
    // 0x13fac0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C30u, 0x13FABCu, 0x13FAC4u)) {
        return;
    }
    ctx->pc = 0x13FAC4u;
label_13fac4:
    // 0x13fac4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13fac8:
    // 0x13fac8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13facc:
    // 0x13facc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13faccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fad0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fad4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13fad8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13FAD8u;
    SET_GPR_U32(ctx, 31, 0x13FAE0u);
    ctx->pc = 0x13FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FAD8u;
    // 0x13fadc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13FAD8u, 0x13FAE0u)) {
        return;
    }
    ctx->pc = 0x13FAE0u;
label_13fae0:
    // 0x13fae0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fae8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13FAE8u;
    {
        const bool branch_taken_0x13fae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAE8u;
        // 0x13faec: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fae8) {
            ctx->pc = 0x13FA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13fa78;
        }
    }
    ctx->pc = 0x13FAF0u;
label_13faf0:
    // 0x13faf0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13faf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13faf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13faf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13faf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13faf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fafc: 0x3e00008  jr          $ra
    ctx->pc = 0x13FAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAFCu;
        // 0x13fb00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FB04u;
    // 0x13fb04: 0x0  nop
    ctx->pc = 0x13fb04u;
    // NOP
    ctx->pc = 0x13fb08u;
}
