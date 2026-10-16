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

// Function: sub_0025DAC0
// Address: 0x25dac0 - 0x25db00
void sub_0025DAC0_0x25dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DAC0_0x25dac0");
#endif

    switch (ctx->pc) {
        case 0x25daecu: goto label_25daec;
        default: break;
    }

    ctx->pc = 0x25dac0u;

    // 0x25dac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25dac4: 0x8f828604  lw          $v0, -0x79FC($gp)
    ctx->pc = 0x25dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
    // 0x25dac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25dacc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25daccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25dad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25dad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dad4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25dad8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x25dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25dadc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DADCu;
    {
        const bool branch_taken_0x25dadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DADCu;
        // 0x25dae0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dadc) {
            ctx->pc = 0x25DAF0u;
            goto label_25daf0;
        }
    }
    ctx->pc = 0x25DAE4u;
    // 0x25dae4: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x25DAE4u;
    SET_GPR_U32(ctx, 31, 0x25DAECu);
    ctx->pc = 0x25DAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAE4u;
    // 0x25dae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x25DAE4u, 0x25DAECu)) {
        return;
    }
    ctx->pc = 0x25DAECu;
label_25daec:
    // 0x25daec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25daecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25daf0:
    // 0x25daf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25daf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25daf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25daf8: 0x3e00008  jr          $ra
    ctx->pc = 0x25DAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAF8u;
        // 0x25dafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DB00u;
}
