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

// Function: sub_00249EF8
// Address: 0x249ef8 - 0x249f48
void sub_00249EF8_0x249ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249EF8_0x249ef8");
#endif

    switch (ctx->pc) {
        case 0x249f0cu: goto label_249f0c;
        case 0x249f28u: goto label_249f28;
        case 0x249f34u: goto label_249f34;
        default: break;
    }

    ctx->pc = 0x249ef8u;

    // 0x249ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249efc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x249efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x249f00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x249f04: 0xc093546  jal         func_24D518
    ctx->pc = 0x249F04u;
    SET_GPR_U32(ctx, 31, 0x249F0Cu);
    ctx->pc = 0x249F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F04u;
    // 0x249f08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x249F04u, 0x249F0Cu)) {
        return;
    }
    ctx->pc = 0x249F0Cu;
label_249f0c:
    // 0x249f0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249F0Cu;
    {
        const bool branch_taken_0x249f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F0Cu;
        // 0x249f10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f0c) {
            ctx->pc = 0x249F38u;
            goto label_249f38;
        }
    }
    ctx->pc = 0x249F14u;
    // 0x249f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249f18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x249f1c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x249f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x249f20: 0xc092848  jal         func_24A120
    ctx->pc = 0x249F20u;
    SET_GPR_U32(ctx, 31, 0x249F28u);
    ctx->pc = 0x249F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F20u;
    // 0x249f24: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x249F20u, 0x249F28u)) {
        return;
    }
    ctx->pc = 0x249F28u;
label_249f28:
    // 0x249f28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f2c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x249F2Cu;
    SET_GPR_U32(ctx, 31, 0x249F34u);
    ctx->pc = 0x249F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F2Cu;
    // 0x249f30: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x249F2Cu, 0x249F34u)) {
        return;
    }
    ctx->pc = 0x249F34u;
label_249f34:
    // 0x249f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249f38:
    // 0x249f38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x249f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249f40: 0x3e00008  jr          $ra
    ctx->pc = 0x249F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F40u;
        // 0x249f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249F48u;
}
