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

// Function: sub_001DCD18
// Address: 0x1dcd18 - 0x1dcd98
void sub_001DCD18_0x1dcd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCD18_0x1dcd18");
#endif

    switch (ctx->pc) {
        case 0x1dcd44u: goto label_1dcd44;
        case 0x1dcd68u: goto label_1dcd68;
        case 0x1dcd78u: goto label_1dcd78;
        default: break;
    }

    ctx->pc = 0x1dcd18u;

    // 0x1dcd18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dcd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dcd1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dcd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dcd20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dcd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dcd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcd28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dcd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1dcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dcd30: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1dcd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dcd34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DCD34u;
    {
        const bool branch_taken_0x1dcd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD34u;
        // 0x1dcd38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd34) {
            ctx->pc = 0x1DCD80u;
            goto label_1dcd80;
        }
    }
    ctx->pc = 0x1DCD3Cu;
    // 0x1dcd3c: 0xc07811a  jal         func_1E0468
    ctx->pc = 0x1DCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1DCD44u);
    ctx->pc = 0x1DCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD3Cu;
    // 0x1dcd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0468u, 0x1DCD3Cu, 0x1DCD44u)) {
        return;
    }
    ctx->pc = 0x1DCD44u;
label_1dcd44:
    // 0x1dcd44: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCD44u;
    {
        const bool branch_taken_0x1dcd44 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1dcd44) {
            ctx->pc = 0x1DCD60u;
            goto label_1dcd60;
        }
    }
    ctx->pc = 0x1DCD4Cu;
    // 0x1dcd4c: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x1dcd4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1dcd50: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x1dcd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1dcd54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCD54u;
    {
        const bool branch_taken_0x1dcd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD54u;
        // 0x1dcd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd54) {
            ctx->pc = 0x1DCD60u;
            goto label_1dcd60;
        }
    }
    ctx->pc = 0x1DCD5Cu;
    // 0x1dcd5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1dcd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1dcd60:
    // 0x1dcd60: 0xc078114  jal         func_1E0450
    ctx->pc = 0x1DCD60u;
    SET_GPR_U32(ctx, 31, 0x1DCD68u);
    ctx->pc = 0x1DCD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD60u;
    // 0x1dcd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0450u, 0x1DCD60u, 0x1DCD68u)) {
        return;
    }
    ctx->pc = 0x1DCD68u;
label_1dcd68:
    // 0x1dcd68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCD68u;
    {
        const bool branch_taken_0x1dcd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD68u;
        // 0x1dcd6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd68) {
            ctx->pc = 0x1DCD84u;
            goto label_1dcd84;
        }
    }
    ctx->pc = 0x1DCD70u;
    // 0x1dcd70: 0xc078114  jal         func_1E0450
    ctx->pc = 0x1DCD70u;
    SET_GPR_U32(ctx, 31, 0x1DCD78u);
    ctx->pc = 0x1DCD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD70u;
    // 0x1dcd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0450u, 0x1DCD70u, 0x1DCD78u)) {
        return;
    }
    ctx->pc = 0x1DCD78u;
label_1dcd78:
    // 0x1dcd78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcd7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1dcd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1dcd80:
    // 0x1dcd80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd84:
    // 0x1dcd84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dcd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcd88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcd88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcd8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcd90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD90u;
        // 0x1dcd94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCD98u;
}
