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

// Function: sub_0012B9F0
// Address: 0x12b9f0 - 0x12ba50
void sub_0012B9F0_0x12b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B9F0_0x12b9f0");
#endif

    switch (ctx->pc) {
        case 0x12ba0cu: goto label_12ba0c;
        case 0x12ba20u: goto label_12ba20;
        case 0x12ba30u: goto label_12ba30;
        default: break;
    }

    ctx->pc = 0x12b9f0u;

    // 0x12b9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b9f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12b9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12b9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ba00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ba04: 0xc049ad2  jal         func_126B48
    ctx->pc = 0x12BA04u;
    SET_GPR_U32(ctx, 31, 0x12BA0Cu);
    ctx->pc = 0x12BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA04u;
    // 0x12ba08: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126B48u, 0x12BA04u, 0x12BA0Cu)) {
        return;
    }
    ctx->pc = 0x12BA0Cu;
label_12ba0c:
    // 0x12ba0c: 0x26110360  addiu       $s1, $s0, 0x360
    ctx->pc = 0x12ba0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x12ba10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba14: 0x260529a4  addiu       $a1, $s0, 0x29A4
    ctx->pc = 0x12ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10660));
    // 0x12ba18: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x12BA18u;
    SET_GPR_U32(ctx, 31, 0x12BA20u);
    ctx->pc = 0x12BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA18u;
    // 0x12ba1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12BA18u, 0x12BA20u)) {
        return;
    }
    ctx->pc = 0x12BA20u;
label_12ba20:
    // 0x12ba20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba24: 0x260529ac  addiu       $a1, $s0, 0x29AC
    ctx->pc = 0x12ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10668));
    // 0x12ba28: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x12BA28u;
    SET_GPR_U32(ctx, 31, 0x12BA30u);
    ctx->pc = 0x12BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA28u;
    // 0x12ba2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12BA28u, 0x12BA30u)) {
        return;
    }
    ctx->pc = 0x12BA30u;
label_12ba30:
    // 0x12ba30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12ba30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ba34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ba34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ba38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ba38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ba3c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA3Cu;
        // 0x12ba40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BA44u;
    // 0x12ba44: 0x0  nop
    ctx->pc = 0x12ba44u;
    // NOP
    // 0x12ba48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12ba4c: 0x0  nop
    ctx->pc = 0x12ba4cu;
    // NOP
    ctx->pc = 0x12ba50u;
}
