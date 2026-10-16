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

// Function: sub_001B2798
// Address: 0x1b2798 - 0x1b2808
void sub_001B2798_0x1b2798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2798_0x1b2798");
#endif

    switch (ctx->pc) {
        case 0x1b2798u: goto label_1b2798;
        case 0x1b279cu: goto label_1b279c;
        case 0x1b27a0u: goto label_1b27a0;
        case 0x1b27a4u: goto label_1b27a4;
        case 0x1b27a8u: goto label_1b27a8;
        case 0x1b27acu: goto label_1b27ac;
        case 0x1b27b0u: goto label_1b27b0;
        case 0x1b27b4u: goto label_1b27b4;
        case 0x1b27b8u: goto label_1b27b8;
        case 0x1b27bcu: goto label_1b27bc;
        case 0x1b27c0u: goto label_1b27c0;
        case 0x1b27c4u: goto label_1b27c4;
        case 0x1b27c8u: goto label_1b27c8;
        case 0x1b27ccu: goto label_1b27cc;
        case 0x1b27d0u: goto label_1b27d0;
        case 0x1b27d4u: goto label_1b27d4;
        case 0x1b27d8u: goto label_1b27d8;
        case 0x1b27dcu: goto label_1b27dc;
        case 0x1b27e0u: goto label_1b27e0;
        case 0x1b27e4u: goto label_1b27e4;
        case 0x1b27e8u: goto label_1b27e8;
        case 0x1b27ecu: goto label_1b27ec;
        case 0x1b27f0u: goto label_1b27f0;
        case 0x1b27f4u: goto label_1b27f4;
        case 0x1b27f8u: goto label_1b27f8;
        case 0x1b27fcu: goto label_1b27fc;
        case 0x1b2800u: goto label_1b2800;
        case 0x1b2804u: goto label_1b2804;
        default: break;
    }

    ctx->pc = 0x1b2798u;

label_1b2798:
    // 0x1b2798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b279c:
    // 0x1b279c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b27a0:
    // 0x1b27a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b27a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b27a4:
    // 0x1b27a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b27a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b27a8:
    // 0x1b27a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b27a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b27ac:
    // 0x1b27ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b27acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b27b0:
    // 0x1b27b0: 0xc06bc90  jal         func_1AF240
label_1b27b4:
    if (ctx->pc == 0x1B27B4u) {
        ctx->pc = 0x1B27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27B0u;
        // 0x1b27b4: 0x8e040158  lw          $a0, 0x158($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27B8u;
        goto label_1b27b8;
    }
    ctx->pc = 0x1B27B0u;
    SET_GPR_U32(ctx, 31, 0x1B27B8u);
    ctx->pc = 0x1B27B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27B0u;
    // 0x1b27b4: 0x8e040158  lw          $a0, 0x158($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF240u, 0x1B27B0u, 0x1B27B8u)) {
        return;
    }
    ctx->pc = 0x1B27B8u;
label_1b27b8:
    // 0x1b27b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b27b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b27bc:
    // 0x1b27bc: 0xae060154  sw          $a2, 0x154($s0)
    ctx->pc = 0x1b27bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 6));
label_1b27c0:
    // 0x1b27c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b27c4:
    // 0x1b27c4: 0x38420032  xori        $v0, $v0, 0x32
    ctx->pc = 0x1b27c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)50);
label_1b27c8:
    // 0x1b27c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b27cc:
    if (ctx->pc == 0x1B27CCu) {
        ctx->pc = 0x1B27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27C8u;
        // 0x1b27cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27D0u;
        goto label_1b27d0;
    }
    ctx->pc = 0x1B27C8u;
    {
        const bool branch_taken_0x1b27c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27C8u;
        // 0x1b27cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27c8) {
            ctx->pc = 0x1B27D4u;
            goto label_1b27d4;
        }
    }
    ctx->pc = 0x1B27D0u;
label_1b27d0:
    // 0x1b27d0: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x1b27d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1b27d4:
    // 0x1b27d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b27d8:
    if (ctx->pc == 0x1B27D8u) {
        ctx->pc = 0x1B27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27D4u;
        // 0x1b27d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27DCu;
        goto label_1b27dc;
    }
    ctx->pc = 0x1B27D4u;
    {
        const bool branch_taken_0x1b27d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27D4u;
        // 0x1b27d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27d4) {
            ctx->pc = 0x1B27F0u;
            goto label_1b27f0;
        }
    }
    ctx->pc = 0x1B27DCu;
label_1b27dc:
    // 0x1b27dc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b27e0:
    // 0x1b27e0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1b27e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1b27e4:
    // 0x1b27e4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1b27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1b27e8:
    // 0x1b27e8: 0x60f809  jalr        $v1
label_1b27ec:
    if (ctx->pc == 0x1B27ECu) {
        ctx->pc = 0x1B27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27E8u;
        // 0x1b27ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27F0u;
        goto label_1b27f0;
    }
    ctx->pc = 0x1B27E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B27F0u);
        ctx->pc = 0x1B27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27E8u;
        // 0x1b27ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B27E8u, 0x1B27F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B27F0u;
label_1b27f0:
    // 0x1b27f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b27f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b27f4:
    // 0x1b27f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b27f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b27f8:
    // 0x1b27f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b27f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b27fc:
    // 0x1b27fc: 0x3e00008  jr          $ra
label_1b2800:
    if (ctx->pc == 0x1B2800u) {
        ctx->pc = 0x1B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27FCu;
        // 0x1b2800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2804u;
        goto label_1b2804;
    }
    ctx->pc = 0x1B27FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27FCu;
        // 0x1b2800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B27FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2804u;
label_1b2804:
    // 0x1b2804: 0x0  nop
    ctx->pc = 0x1b2804u;
    // NOP
    ctx->pc = 0x1b2808u;
}
