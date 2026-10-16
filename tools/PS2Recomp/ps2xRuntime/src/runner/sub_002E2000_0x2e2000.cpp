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

// Function: sub_002E2000
// Address: 0x2e2000 - 0x2e2050
void sub_002E2000_0x2e2000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2000_0x2e2000");
#endif

    switch (ctx->pc) {
        case 0x2e201cu: goto label_2e201c;
        default: break;
    }

    ctx->pc = 0x2e2000u;

    // 0x2e2000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e2004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2008: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e200c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e200cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2014: 0xc0b807c  jal         func_2E01F0
    ctx->pc = 0x2E2014u;
    SET_GPR_U32(ctx, 31, 0x2E201Cu);
    ctx->pc = 0x2E2018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2014u;
    // 0x2e2018: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E01F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E01F0u, 0x2E2014u, 0x2E201Cu)) {
        return;
    }
    ctx->pc = 0x2E201Cu;
label_2e201c:
    // 0x2e201c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2e201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e2020: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2020u;
    {
        const bool branch_taken_0x2e2020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2020) {
            ctx->pc = 0x2E2024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2020u;
            // 0x2e2024: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2040u;
            goto label_2e2040;
        }
    }
    ctx->pc = 0x2E2028u;
    // 0x2e2028: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2e2028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2e202c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e202cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e2030: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2e2030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2e2034: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e2038: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2e2038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2e203c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e203cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2040:
    // 0x2e2040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2044: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2044u;
        // 0x2e2048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E204Cu;
    // 0x2e204c: 0x0  nop
    ctx->pc = 0x2e204cu;
    // NOP
    ctx->pc = 0x2e2050u;
}
