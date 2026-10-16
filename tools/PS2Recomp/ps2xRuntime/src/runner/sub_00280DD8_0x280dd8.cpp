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

// Function: sub_00280DD8
// Address: 0x280dd8 - 0x280e48
void sub_00280DD8_0x280dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280DD8_0x280dd8");
#endif

    switch (ctx->pc) {
        case 0x280e00u: goto label_280e00;
        case 0x280e34u: goto label_280e34;
        default: break;
    }

    ctx->pc = 0x280dd8u;

    // 0x280dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280ddc: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280de0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x280de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x280de4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280df0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x280df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x280df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x280df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280df8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x280df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280dfc: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x280dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_280e00:
    // 0x280e00: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x280e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x280e04: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280e08: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x280E08u;
    {
        const bool branch_taken_0x280e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x280e08) {
            ctx->pc = 0x280E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280E08u;
            // 0x280e0c: 0xac45000c  sw          $a1, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280E2Cu;
            goto label_280e2c;
        }
    }
    ctx->pc = 0x280E10u;
    // 0x280e10: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x280e14: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x280e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280e18: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x280e18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280e1c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x280E1Cu;
    {
        const bool branch_taken_0x280e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E1Cu;
        // 0x280e20: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e1c) {
            ctx->pc = 0x280E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280e00;
        }
    }
    ctx->pc = 0x280E24u;
    // 0x280e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e28: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x280e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0xCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0xCu, _value); } while (0);
label_280e2c:
    // 0x280e2c: 0xc0a05f2  jal         func_2817C8
    ctx->pc = 0x280E2Cu;
    SET_GPR_U32(ctx, 31, 0x280E34u);
    ctx->pc = 0x280E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E2Cu;
    // 0x280e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2817C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2817C8u, 0x280E2Cu, 0x280E34u)) {
        return;
    }
    ctx->pc = 0x280E34u;
label_280e34:
    // 0x280e34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280e3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x280e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280e40: 0x3e00008  jr          $ra
    ctx->pc = 0x280E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E40u;
        // 0x280e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280E48u;
}
