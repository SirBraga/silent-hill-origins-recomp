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

// Function: sub_00252E28
// Address: 0x252e28 - 0x252ea8
void sub_00252E28_0x252e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252E28_0x252e28");
#endif

    switch (ctx->pc) {
        case 0x252e54u: goto label_252e54;
        case 0x252e64u: goto label_252e64;
        case 0x252e74u: goto label_252e74;
        case 0x252e8cu: goto label_252e8c;
        default: break;
    }

    ctx->pc = 0x252e28u;

    // 0x252e28: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x252e2c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252e30: 0x8c435620  lw          $v1, 0x5620($v0)
    ctx->pc = 0x252e30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x735620u));
    // 0x252e34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x252e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x252e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252e3c: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x252e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x252e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252e48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e4c: 0xc092782  jal         func_249E08
    ctx->pc = 0x252E4Cu;
    SET_GPR_U32(ctx, 31, 0x252E54u);
    ctx->pc = 0x252E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E4Cu;
    // 0x252e50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x252E4Cu, 0x252E54u)) {
        return;
    }
    ctx->pc = 0x252E54u;
label_252e54:
    // 0x252e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e58: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x252e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x252e5c: 0xc092782  jal         func_249E08
    ctx->pc = 0x252E5Cu;
    SET_GPR_U32(ctx, 31, 0x252E64u);
    ctx->pc = 0x252E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E5Cu;
    // 0x252e60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x252E5Cu, 0x252E64u)) {
        return;
    }
    ctx->pc = 0x252E64u;
label_252e64:
    // 0x252e64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x252e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e6c: 0xc092782  jal         func_249E08
    ctx->pc = 0x252E6Cu;
    SET_GPR_U32(ctx, 31, 0x252E74u);
    ctx->pc = 0x252E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E6Cu;
    // 0x252e70: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x252E6Cu, 0x252E74u)) {
        return;
    }
    ctx->pc = 0x252E74u;
label_252e74:
    // 0x252e74: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x252e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x252e78: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x252E78u;
    {
        const bool branch_taken_0x252e78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E78u;
        // 0x252e7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e78) {
            ctx->pc = 0x252E90u;
            goto label_252e90;
        }
    }
    ctx->pc = 0x252E80u;
    // 0x252e80: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x252e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x252e84: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x252E84u;
    SET_GPR_U32(ctx, 31, 0x252E8Cu);
    ctx->pc = 0x252E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E84u;
    // 0x252e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x252E84u, 0x252E8Cu)) {
        return;
    }
    ctx->pc = 0x252E8Cu;
label_252e8c:
    // 0x252e8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252e90:
    // 0x252e90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x252e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x252E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E9Cu;
        // 0x252ea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252EA4u;
    // 0x252ea4: 0x0  nop
    ctx->pc = 0x252ea4u;
    // NOP
    ctx->pc = 0x252ea8u;
}
