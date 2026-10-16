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

// Function: sub_002D9930
// Address: 0x2d9930 - 0x2d9990
void sub_002D9930_0x2d9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9930_0x2d9930");
#endif

    switch (ctx->pc) {
        case 0x2d9950u: goto label_2d9950;
        case 0x2d9958u: goto label_2d9958;
        case 0x2d9970u: goto label_2d9970;
        default: break;
    }

    ctx->pc = 0x2d9930u;

    // 0x2d9930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9934: 0x8f848fc0  lw          $a0, -0x7040($gp)
    ctx->pc = 0x2d9934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x2d9938: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d9938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d993c: 0x27908fc0  addiu       $s0, $gp, -0x7040
    ctx->pc = 0x2d993cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938560));
    // 0x2d9940: 0x10900008  beq         $a0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9940u;
    {
        const bool branch_taken_0x2d9940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9940u;
        // 0x2d9944: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9940) {
            ctx->pc = 0x2D9964u;
            goto label_2d9964;
        }
    }
    ctx->pc = 0x2D9948u;
    // 0x2d9948: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x2d9948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2d994c: 0x0  nop
    ctx->pc = 0x2d994cu;
    // NOP
label_2d9950:
    // 0x2d9950: 0xc0b66b4  jal         func_2D9AD0
    ctx->pc = 0x2D9950u;
    SET_GPR_U32(ctx, 31, 0x2D9958u);
    ctx->pc = 0x2D9954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9950u;
    // 0x2d9954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9AD0u, 0x2D9950u, 0x2D9958u)) {
        return;
    }
    ctx->pc = 0x2D9958u;
label_2d9958:
    // 0x2d9958: 0x8f848fc0  lw          $a0, -0x7040($gp)
    ctx->pc = 0x2d9958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x2d995c: 0x5490fffc  bnel        $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2D995Cu;
    {
        const bool branch_taken_0x2d995c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d995c) {
            ctx->pc = 0x2D9960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D995Cu;
            // 0x2d9960: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9950;
        }
    }
    ctx->pc = 0x2D9964u;
label_2d9964:
    // 0x2d9964: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2d9964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2d9968: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2D9968u;
    SET_GPR_U32(ctx, 31, 0x2D9970u);
    ctx->pc = 0x2D996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9968u;
    // 0x2d996c: 0x24847bf8  addiu       $a0, $a0, 0x7BF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2D9968u, 0x2D9970u)) {
        return;
    }
    ctx->pc = 0x2D9970u;
label_2d9970:
    // 0x2d9970: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d9970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9978: 0xaf808b50  sw          $zero, -0x74B0($gp)
    ctx->pc = 0x2d9978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937424), GPR_U32(ctx, 0));
    // 0x2d997c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D997Cu;
        // 0x2d9980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D997Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9984u;
    // 0x2d9984: 0x0  nop
    ctx->pc = 0x2d9984u;
    // NOP
    // 0x2d9988: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d9988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d998c: 0x0  nop
    ctx->pc = 0x2d998cu;
    // NOP
    ctx->pc = 0x2d9990u;
}
