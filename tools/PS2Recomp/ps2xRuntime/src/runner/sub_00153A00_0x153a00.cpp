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

// Function: sub_00153A00
// Address: 0x153a00 - 0x153a50
void sub_00153A00_0x153a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153A00_0x153a00");
#endif

    switch (ctx->pc) {
        case 0x153a20u: goto label_153a20;
        case 0x153a30u: goto label_153a30;
        case 0x153a40u: goto label_153a40;
        default: break;
    }

    ctx->pc = 0x153a00u;

    // 0x153a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153a04: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x153a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x153a08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x153a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x153a0c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x153a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x153a10: 0x24900038  addiu       $s0, $a0, 0x38
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x153a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153a18: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x153A18u;
    SET_GPR_U32(ctx, 31, 0x153A20u);
    ctx->pc = 0x153A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A18u;
    // 0x153a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x153A18u, 0x153A20u)) {
        return;
    }
    ctx->pc = 0x153A20u;
label_153a20:
    // 0x153a20: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x153a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x153a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a28: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x153A28u;
    SET_GPR_U32(ctx, 31, 0x153A30u);
    ctx->pc = 0x153A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A28u;
    // 0x153a2c: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x153A28u, 0x153A30u)) {
        return;
    }
    ctx->pc = 0x153A30u;
label_153a30:
    // 0x153a30: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x153a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x153a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a38: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x153A38u;
    SET_GPR_U32(ctx, 31, 0x153A40u);
    ctx->pc = 0x153A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A38u;
    // 0x153a3c: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x153A38u, 0x153A40u)) {
        return;
    }
    ctx->pc = 0x153A40u;
label_153a40:
    // 0x153a40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x153a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153a48: 0x3e00008  jr          $ra
    ctx->pc = 0x153A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A48u;
        // 0x153a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153A50u;
}
