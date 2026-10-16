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

// Function: sub_001DAC00
// Address: 0x1dac00 - 0x1dac68
void sub_001DAC00_0x1dac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAC00_0x1dac00");
#endif

    switch (ctx->pc) {
        case 0x1dac14u: goto label_1dac14;
        case 0x1dac20u: goto label_1dac20;
        case 0x1dac28u: goto label_1dac28;
        case 0x1dac30u: goto label_1dac30;
        case 0x1dac40u: goto label_1dac40;
        case 0x1dac48u: goto label_1dac48;
        default: break;
    }

    ctx->pc = 0x1dac00u;

    // 0x1dac00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dac04: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAC04u;
    {
        const bool branch_taken_0x1dac04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dac04) {
            ctx->pc = 0x1DAC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAC04u;
            // 0x1dac08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAC18u;
            goto label_1dac18;
        }
    }
    ctx->pc = 0x1DAC0Cu;
    // 0x1dac0c: 0xc08999a  jal         func_226668
    ctx->pc = 0x1DAC0Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC14u);
    ctx->pc = 0x1DAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC0Cu;
    // 0x1dac10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226668u, 0x1DAC0Cu, 0x1DAC14u)) {
        return;
    }
    ctx->pc = 0x1DAC14u;
label_1dac14:
    // 0x1dac14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dac14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dac18:
    // 0x1dac18: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1DAC18u;
    SET_GPR_U32(ctx, 31, 0x1DAC20u);
    ctx->pc = 0x1DAC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC18u;
    // 0x1dac1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1DAC18u, 0x1DAC20u)) {
        return;
    }
    ctx->pc = 0x1DAC20u;
label_1dac20:
    // 0x1dac20: 0xc076a96  jal         func_1DAA58
    ctx->pc = 0x1DAC20u;
    SET_GPR_U32(ctx, 31, 0x1DAC28u);
    ctx->pc = 0x1DAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC20u;
    // 0x1dac24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAA58u, 0x1DAC20u, 0x1DAC28u)) {
        return;
    }
    ctx->pc = 0x1DAC28u;
label_1dac28:
    // 0x1dac28: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x1DAC28u;
    SET_GPR_U32(ctx, 31, 0x1DAC30u);
    ctx->pc = 0x1DAC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC28u;
    // 0x1dac2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x1DAC28u, 0x1DAC30u)) {
        return;
    }
    ctx->pc = 0x1DAC30u;
label_1dac30:
    // 0x1dac30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAC30u;
    {
        const bool branch_taken_0x1dac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC30u;
        // 0x1dac34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac30) {
            ctx->pc = 0x1DAC40u;
            goto label_1dac40;
        }
    }
    ctx->pc = 0x1DAC38u;
    // 0x1dac38: 0xc097a26  jal         func_25E898
    ctx->pc = 0x1DAC38u;
    SET_GPR_U32(ctx, 31, 0x1DAC40u);
    ctx->pc = 0x1DAC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC38u;
    // 0x1dac3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x1DAC38u, 0x1DAC40u)) {
        return;
    }
    ctx->pc = 0x1DAC40u;
label_1dac40:
    // 0x1dac40: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x1DAC40u;
    SET_GPR_U32(ctx, 31, 0x1DAC48u);
    ctx->pc = 0x1DAC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC40u;
    // 0x1dac44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x1DAC40u, 0x1DAC48u)) {
        return;
    }
    ctx->pc = 0x1DAC48u;
label_1dac48:
    // 0x1dac48: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1dac48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1dac4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dac4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dac50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dac50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dac54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dac54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dac58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC5Cu;
        // 0x1dac60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAC64u;
    // 0x1dac64: 0x0  nop
    ctx->pc = 0x1dac64u;
    // NOP
    ctx->pc = 0x1dac68u;
}
