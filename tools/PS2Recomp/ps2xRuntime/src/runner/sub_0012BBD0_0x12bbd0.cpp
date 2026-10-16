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

// Function: sub_0012BBD0
// Address: 0x12bbd0 - 0x12bc40
void sub_0012BBD0_0x12bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BBD0_0x12bbd0");
#endif

    switch (ctx->pc) {
        case 0x12bbecu: goto label_12bbec;
        case 0x12bbf8u: goto label_12bbf8;
        case 0x12bc08u: goto label_12bc08;
        default: break;
    }

    ctx->pc = 0x12bbd0u;

    // 0x12bbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12bbd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12bbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12bbd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12bbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12bbe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bbe4: 0xc049ae6  jal         func_126B98
    ctx->pc = 0x12BBE4u;
    SET_GPR_U32(ctx, 31, 0x12BBECu);
    ctx->pc = 0x12BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBE4u;
    // 0x12bbe8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126B98u, 0x12BBE4u, 0x12BBECu)) {
        return;
    }
    ctx->pc = 0x12BBECu;
label_12bbec:
    // 0x12bbec: 0x26111510  addiu       $s1, $s0, 0x1510
    ctx->pc = 0x12bbecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
    // 0x12bbf0: 0xc06210e  jal         func_188438
    ctx->pc = 0x12BBF0u;
    SET_GPR_U32(ctx, 31, 0x12BBF8u);
    ctx->pc = 0x12BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBF0u;
    // 0x12bbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188438u, 0x12BBF0u, 0x12BBF8u)) {
        return;
    }
    ctx->pc = 0x12BBF8u;
label_12bbf8:
    // 0x12bbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12bbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12bbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc00: 0xc0685da  jal         func_1A1768
    ctx->pc = 0x12BC00u;
    SET_GPR_U32(ctx, 31, 0x12BC08u);
    ctx->pc = 0x12BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC00u;
    // 0x12bc04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x12BC00u, 0x12BC08u)) {
        return;
    }
    ctx->pc = 0x12BC08u;
label_12bc08:
    // 0x12bc08: 0x8e231350  lw          $v1, 0x1350($s1)
    ctx->pc = 0x12bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4944)));
    // 0x12bc0c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BC0Cu;
    {
        const bool branch_taken_0x12bc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bc0c) {
            ctx->pc = 0x12BC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC0Cu;
            // 0x12bc10: 0xae201350  sw          $zero, 0x1350($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BC2Cu;
            goto label_12bc2c;
        }
    }
    ctx->pc = 0x12BC14u;
    // 0x12bc14: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x12bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12bc18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12bc1c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12BC1Cu;
    {
        const bool branch_taken_0x12bc1c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x12BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC1Cu;
        // 0x12bc20: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc1c) {
            ctx->pc = 0x12BC28u;
            goto label_12bc28;
        }
    }
    ctx->pc = 0x12BC24u;
    // 0x12bc24: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x12bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_12bc28:
    // 0x12bc28: 0xae201350  sw          $zero, 0x1350($s1)
    ctx->pc = 0x12bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 0));
label_12bc2c:
    // 0x12bc2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12bc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bc30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12bc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc38: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC38u;
        // 0x12bc3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BC40u;
}
