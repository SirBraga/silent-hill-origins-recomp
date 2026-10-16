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

// Function: sub_001E0830
// Address: 0x1e0830 - 0x1e08b8
void sub_001E0830_0x1e0830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0830_0x1e0830");
#endif

    switch (ctx->pc) {
        case 0x1e0870u: goto label_1e0870;
        case 0x1e0884u: goto label_1e0884;
        case 0x1e0898u: goto label_1e0898;
        default: break;
    }

    ctx->pc = 0x1e0830u;

    // 0x1e0830: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e0830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e0834: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e0838: 0x8c48e6d4  lw          $t0, -0x192C($v0)
    ctx->pc = 0x1e0838u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x33E6D4u));
    // 0x1e083c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e083cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0840: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e0840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e0844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0848: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x1e0848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1e084c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e084cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0850: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e0850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e0854: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e0854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e0858: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e0858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e085c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1e085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e0860: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1e0860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1e0864: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1e0864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e0868: 0xc092782  jal         func_249E08
    ctx->pc = 0x1E0868u;
    SET_GPR_U32(ctx, 31, 0x1E0870u);
    ctx->pc = 0x1E086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0868u;
    // 0x1e086c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1E0868u, 0x1E0870u)) {
        return;
    }
    ctx->pc = 0x1E0870u;
label_1e0870:
    // 0x1e0870: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0870u;
    {
        const bool branch_taken_0x1e0870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0870u;
        // 0x1e0874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0870) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E0878u;
    // 0x1e0878: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1e0878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1e087c: 0xc092782  jal         func_249E08
    ctx->pc = 0x1E087Cu;
    SET_GPR_U32(ctx, 31, 0x1E0884u);
    ctx->pc = 0x1E0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E087Cu;
    // 0x1e0880: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1E087Cu, 0x1E0884u)) {
        return;
    }
    ctx->pc = 0x1E0884u;
label_1e0884:
    // 0x1e0884: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0884u;
    {
        const bool branch_taken_0x1e0884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0884u;
        // 0x1e0888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0884) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E088Cu;
    // 0x1e088c: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1e088cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1e0890: 0xc092782  jal         func_249E08
    ctx->pc = 0x1E0890u;
    SET_GPR_U32(ctx, 31, 0x1E0898u);
    ctx->pc = 0x1E0894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0890u;
    // 0x1e0894: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1E0890u, 0x1E0898u)) {
        return;
    }
    ctx->pc = 0x1E0898u;
label_1e0898:
    // 0x1e0898: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0898u;
    {
        const bool branch_taken_0x1e0898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0898u;
        // 0x1e089c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0898) {
            ctx->pc = 0x1E08A4u;
            goto label_1e08a4;
        }
    }
    ctx->pc = 0x1E08A0u;
label_1e08a0:
    // 0x1e08a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e08a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e08a4:
    // 0x1e08a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e08a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e08a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e08a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e08ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E08ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08ACu;
        // 0x1e08b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E08ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E08B4u;
    // 0x1e08b4: 0x0  nop
    ctx->pc = 0x1e08b4u;
    // NOP
    ctx->pc = 0x1e08b8u;
}
