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

// Function: sub_00101AA8
// Address: 0x101aa8 - 0x101af0
void sub_00101AA8_0x101aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101AA8_0x101aa8");
#endif

    switch (ctx->pc) {
        case 0x101ad4u: goto label_101ad4;
        default: break;
    }

    ctx->pc = 0x101aa8u;

    // 0x101aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101aac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x101aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x101ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x101ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ab8: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x101ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x101abc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x101ac0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x101ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101ac4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x101AC4u;
    {
        const bool branch_taken_0x101ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101ac4) {
            ctx->pc = 0x101AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101AC4u;
            // 0x101ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101ADCu;
            goto label_101adc;
        }
    }
    ctx->pc = 0x101ACCu;
    // 0x101acc: 0xc0941a8  jal         func_2506A0
    ctx->pc = 0x101ACCu;
    SET_GPR_U32(ctx, 31, 0x101AD4u);
    ctx->pc = 0x2506A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2506A0u, 0x101ACCu, 0x101AD4u)) {
        return;
    }
    ctx->pc = 0x101AD4u;
label_101ad4:
    // 0x101ad4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x101ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x101ad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101adc:
    // 0x101adc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x101adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x101AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AE4u;
        // 0x101ae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101AECu;
    // 0x101aec: 0x0  nop
    ctx->pc = 0x101aecu;
    // NOP
    ctx->pc = 0x101af0u;
}
