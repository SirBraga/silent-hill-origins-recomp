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

// Function: sub_00225B20
// Address: 0x225b20 - 0x225b80
void sub_00225B20_0x225b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225B20_0x225b20");
#endif

    switch (ctx->pc) {
        case 0x225b4cu: goto label_225b4c;
        default: break;
    }

    ctx->pc = 0x225b20u;

    // 0x225b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225b24: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x225b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x225b28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225b2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x225b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225b30: 0x24500fd8  addiu       $s0, $v0, 0xFD8
    ctx->pc = 0x225b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x225b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b44: 0xc08959e  jal         func_225678
    ctx->pc = 0x225B44u;
    SET_GPR_U32(ctx, 31, 0x225B4Cu);
    ctx->pc = 0x225B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B44u;
    // 0x225b48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225B44u, 0x225B4Cu)) {
        return;
    }
    ctx->pc = 0x225B4Cu;
label_225b4c:
    // 0x225b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225B50u;
    {
        const bool branch_taken_0x225b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B50u;
        // 0x225b54: 0x8f8283ac  lw          $v0, -0x7C54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b50) {
            ctx->pc = 0x225B68u;
            goto label_225b68;
        }
    }
    ctx->pc = 0x225B58u;
    // 0x225b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225b5c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x225b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x225b60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x225b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x225b64: 0xaf8283ac  sw          $v0, -0x7C54($gp)
    ctx->pc = 0x225b64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 2));
label_225b68:
    // 0x225b68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225b6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x225b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225b74: 0x3e00008  jr          $ra
    ctx->pc = 0x225B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B74u;
        // 0x225b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B7Cu;
    // 0x225b7c: 0x0  nop
    ctx->pc = 0x225b7cu;
    // NOP
    ctx->pc = 0x225b80u;
}
