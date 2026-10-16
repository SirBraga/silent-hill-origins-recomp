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

// Function: sub_00249E58
// Address: 0x249e58 - 0x249ea8
void sub_00249E58_0x249e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249E58_0x249e58");
#endif

    switch (ctx->pc) {
        case 0x249e6cu: goto label_249e6c;
        case 0x249e88u: goto label_249e88;
        case 0x249e94u: goto label_249e94;
        default: break;
    }

    ctx->pc = 0x249e58u;

    // 0x249e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249e5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x249e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x249e60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x249e64: 0xc093546  jal         func_24D518
    ctx->pc = 0x249E64u;
    SET_GPR_U32(ctx, 31, 0x249E6Cu);
    ctx->pc = 0x249E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E64u;
    // 0x249e68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x249E64u, 0x249E6Cu)) {
        return;
    }
    ctx->pc = 0x249E6Cu;
label_249e6c:
    // 0x249e6c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249E6Cu;
    {
        const bool branch_taken_0x249e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E6Cu;
        // 0x249e70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e6c) {
            ctx->pc = 0x249E98u;
            goto label_249e98;
        }
    }
    ctx->pc = 0x249E74u;
    // 0x249e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249e78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x249e7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x249e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x249e80: 0xc092848  jal         func_24A120
    ctx->pc = 0x249E80u;
    SET_GPR_U32(ctx, 31, 0x249E88u);
    ctx->pc = 0x249E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E80u;
    // 0x249e84: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x249E80u, 0x249E88u)) {
        return;
    }
    ctx->pc = 0x249E88u;
label_249e88:
    // 0x249e88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e8c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x249E8Cu;
    SET_GPR_U32(ctx, 31, 0x249E94u);
    ctx->pc = 0x249E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E8Cu;
    // 0x249e90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x249E8Cu, 0x249E94u)) {
        return;
    }
    ctx->pc = 0x249E94u;
label_249e94:
    // 0x249e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249e98:
    // 0x249e98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x249e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x249EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EA0u;
        // 0x249ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249EA8u;
}
