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

// Function: sub_002EFEF0
// Address: 0x2efef0 - 0x2eff48
void sub_002EFEF0_0x2efef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFEF0_0x2efef0");
#endif

    switch (ctx->pc) {
        case 0x2eff18u: goto label_2eff18;
        case 0x2eff2cu: goto label_2eff2c;
        default: break;
    }

    ctx->pc = 0x2efef0u;

    // 0x2efef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efef4: 0x8f828ccc  lw          $v0, -0x7334($gp)
    ctx->pc = 0x2efef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x2efef8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2efef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2efefc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2eff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eff04: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2eff04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2eff08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eff0c: 0xaf828ccc  sw          $v0, -0x7334($gp)
    ctx->pc = 0x2eff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937804), GPR_U32(ctx, 2));
    // 0x2eff10: 0xc0bba16  jal         func_2EE858
    ctx->pc = 0x2EFF10u;
    SET_GPR_U32(ctx, 31, 0x2EFF18u);
    ctx->pc = 0x2EFF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF10u;
    // 0x2eff14: 0x24846290  addiu       $a0, $a0, 0x6290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE858u, 0x2EFF10u, 0x2EFF18u)) {
        return;
    }
    ctx->pc = 0x2EFF18u;
label_2eff18:
    // 0x2eff18: 0x8f8490ac  lw          $a0, -0x6F54($gp)
    ctx->pc = 0x2eff18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
    // 0x2eff1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFF1Cu;
    {
        const bool branch_taken_0x2eff1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF1Cu;
        // 0x2eff20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff1c) {
            ctx->pc = 0x2EFF34u;
            goto label_2eff34;
        }
    }
    ctx->pc = 0x2EFF24u;
    // 0x2eff24: 0xc093106  jal         func_24C418
    ctx->pc = 0x2EFF24u;
    SET_GPR_U32(ctx, 31, 0x2EFF2Cu);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x2EFF24u, 0x2EFF2Cu)) {
        return;
    }
    ctx->pc = 0x2EFF2Cu;
label_2eff2c:
    // 0x2eff2c: 0xaf8090ac  sw          $zero, -0x6F54($gp)
    ctx->pc = 0x2eff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938796), GPR_U32(ctx, 0));
    // 0x2eff30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2eff30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eff34:
    // 0x2eff34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eff34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eff38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2eff38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eff3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF3Cu;
        // 0x2eff40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFF44u;
    // 0x2eff44: 0x0  nop
    ctx->pc = 0x2eff44u;
    // NOP
    ctx->pc = 0x2eff48u;
}
