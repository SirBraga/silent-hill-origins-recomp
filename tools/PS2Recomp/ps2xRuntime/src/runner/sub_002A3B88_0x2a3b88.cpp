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

// Function: sub_002A3B88
// Address: 0x2a3b88 - 0x2a3be8
void sub_002A3B88_0x2a3b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3B88_0x2a3b88");
#endif

    switch (ctx->pc) {
        case 0x2a3ba8u: goto label_2a3ba8;
        case 0x2a3bc8u: goto label_2a3bc8;
        default: break;
    }

    ctx->pc = 0x2a3b88u;

    // 0x2a3b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3b90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b98: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2a3b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a3b9c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2a3b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a3ba0: 0xc0a8ba6  jal         func_2A2E98
    ctx->pc = 0x2A3BA0u;
    SET_GPR_U32(ctx, 31, 0x2A3BA8u);
    ctx->pc = 0x2A3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3BA0u;
    // 0x2a3ba4: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x2A3BA0u, 0x2A3BA8u)) {
        return;
    }
    ctx->pc = 0x2A3BA8u;
label_2a3ba8:
    // 0x2a3ba8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A3BA8u;
    {
        const bool branch_taken_0x2a3ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BA8u;
        // 0x2a3bac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ba8) {
            ctx->pc = 0x2A3BD8u;
            goto label_2a3bd8;
        }
    }
    ctx->pc = 0x2A3BB0u;
    // 0x2a3bb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a3bb4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2a3bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2a3bb8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3BB8u;
    {
        const bool branch_taken_0x2a3bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3bb8) {
            ctx->pc = 0x2A3BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3BB8u;
            // 0x2a3bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3BD8u;
            goto label_2a3bd8;
        }
    }
    ctx->pc = 0x2A3BC0u;
    // 0x2a3bc0: 0xc0c4c8a  jal         func_313228
    ctx->pc = 0x2A3BC0u;
    SET_GPR_U32(ctx, 31, 0x2A3BC8u);
    ctx->pc = 0x2A3BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3BC0u;
    // 0x2a3bc4: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x2A3BC0u, 0x2A3BC8u)) {
        return;
    }
    ctx->pc = 0x2A3BC8u;
label_2a3bc8:
    // 0x2a3bc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bcc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3BCCu;
    {
        const bool branch_taken_0x2a3bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BCCu;
        // 0x2a3bd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bcc) {
            ctx->pc = 0x2A3BD8u;
            goto label_2a3bd8;
        }
    }
    ctx->pc = 0x2A3BD4u;
    // 0x2a3bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a3bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3bd8:
    // 0x2a3bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BE0u;
        // 0x2a3be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3BE8u;
}
