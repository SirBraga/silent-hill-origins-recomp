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

// Function: sub_001AF0B0
// Address: 0x1af0b0 - 0x1af120
void sub_001AF0B0_0x1af0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF0B0_0x1af0b0");
#endif

    switch (ctx->pc) {
        case 0x1af0b0u: goto label_1af0b0;
        case 0x1af0b4u: goto label_1af0b4;
        case 0x1af0b8u: goto label_1af0b8;
        case 0x1af0bcu: goto label_1af0bc;
        case 0x1af0c0u: goto label_1af0c0;
        case 0x1af0c4u: goto label_1af0c4;
        case 0x1af0c8u: goto label_1af0c8;
        case 0x1af0ccu: goto label_1af0cc;
        case 0x1af0d0u: goto label_1af0d0;
        case 0x1af0d4u: goto label_1af0d4;
        case 0x1af0d8u: goto label_1af0d8;
        case 0x1af0dcu: goto label_1af0dc;
        case 0x1af0e0u: goto label_1af0e0;
        case 0x1af0e4u: goto label_1af0e4;
        case 0x1af0e8u: goto label_1af0e8;
        case 0x1af0ecu: goto label_1af0ec;
        case 0x1af0f0u: goto label_1af0f0;
        case 0x1af0f4u: goto label_1af0f4;
        case 0x1af0f8u: goto label_1af0f8;
        case 0x1af0fcu: goto label_1af0fc;
        case 0x1af100u: goto label_1af100;
        case 0x1af104u: goto label_1af104;
        case 0x1af108u: goto label_1af108;
        case 0x1af10cu: goto label_1af10c;
        case 0x1af110u: goto label_1af110;
        case 0x1af114u: goto label_1af114;
        case 0x1af118u: goto label_1af118;
        case 0x1af11cu: goto label_1af11c;
        default: break;
    }

    ctx->pc = 0x1af0b0u;

label_1af0b0:
    // 0x1af0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af0b4:
    // 0x1af0b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af0b8:
    // 0x1af0b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1af0bc:
    // 0x1af0bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af0c0:
    // 0x1af0c0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1af0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1af0c4:
    // 0x1af0c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1af0c8:
    if (ctx->pc == 0x1AF0C8u) {
        ctx->pc = 0x1AF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0C4u;
        // 0x1af0c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0CCu;
        goto label_1af0cc;
    }
    ctx->pc = 0x1AF0C4u;
    {
        const bool branch_taken_0x1af0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0C4u;
        // 0x1af0c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0c4) {
            ctx->pc = 0x1AF10Cu;
            goto label_1af10c;
        }
    }
    ctx->pc = 0x1AF0CCu;
label_1af0cc:
    // 0x1af0cc: 0x8c900034  lw          $s0, 0x34($a0)
    ctx->pc = 0x1af0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1af0d0:
    // 0x1af0d0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_1af0d4:
    if (ctx->pc == 0x1AF0D4u) {
        ctx->pc = 0x1AF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0D0u;
        // 0x1af0d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0D8u;
        goto label_1af0d8;
    }
    ctx->pc = 0x1AF0D0u;
    {
        const bool branch_taken_0x1af0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af0d0) {
            ctx->pc = 0x1AF0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF0D0u;
            // 0x1af0d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF110u;
            goto label_1af110;
        }
    }
    ctx->pc = 0x1AF0D8u;
label_1af0d8:
    // 0x1af0d8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1af0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af0dc:
    // 0x1af0dc: 0x0  nop
    ctx->pc = 0x1af0dcu;
    // NOP
label_1af0e0:
    // 0x1af0e0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1af0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1af0e4:
    // 0x1af0e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1af0e8:
    if (ctx->pc == 0x1AF0E8u) {
        ctx->pc = 0x1AF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0E4u;
        // 0x1af0e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0ECu;
        goto label_1af0ec;
    }
    ctx->pc = 0x1AF0E4u;
    {
        const bool branch_taken_0x1af0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0E4u;
        // 0x1af0e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0e4) {
            ctx->pc = 0x1AF100u;
            goto label_1af100;
        }
    }
    ctx->pc = 0x1AF0ECu;
label_1af0ec:
    // 0x1af0ec: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1af0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1af0f0:
    // 0x1af0f0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1af0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1af0f4:
    // 0x1af0f4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1af0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1af0f8:
    // 0x1af0f8: 0x60f809  jalr        $v1
label_1af0fc:
    if (ctx->pc == 0x1AF0FCu) {
        ctx->pc = 0x1AF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0F8u;
        // 0x1af0fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF100u;
        goto label_1af100;
    }
    ctx->pc = 0x1AF0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF100u);
        ctx->pc = 0x1AF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0F8u;
        // 0x1af0fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF0F8u, 0x1AF100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF100u;
label_1af100:
    // 0x1af100: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1af100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1af104:
    // 0x1af104: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_1af108:
    if (ctx->pc == 0x1AF108u) {
        ctx->pc = 0x1AF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF104u;
        // 0x1af108: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF10Cu;
        goto label_1af10c;
    }
    ctx->pc = 0x1AF104u;
    {
        const bool branch_taken_0x1af104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af104) {
            ctx->pc = 0x1AF108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF104u;
            // 0x1af108: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af0e0;
        }
    }
    ctx->pc = 0x1AF10Cu;
label_1af10c:
    // 0x1af10c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af110:
    // 0x1af110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af114:
    // 0x1af114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af118:
    // 0x1af118: 0x3e00008  jr          $ra
label_1af11c:
    if (ctx->pc == 0x1AF11Cu) {
        ctx->pc = 0x1AF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF118u;
        // 0x1af11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF120u;
        goto label_fallthrough_0x1af118;
    }
    ctx->pc = 0x1AF118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF118u;
        // 0x1af11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af118:
    ctx->pc = 0x1AF120u;
}
