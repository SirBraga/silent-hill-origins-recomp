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

// Function: sub_0028FBD8
// Address: 0x28fbd8 - 0x28fc48
void sub_0028FBD8_0x28fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FBD8_0x28fbd8");
#endif

    switch (ctx->pc) {
        case 0x28fbecu: goto label_28fbec;
        default: break;
    }

    ctx->pc = 0x28fbd8u;

    // 0x28fbd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fbdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28fbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28fbe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fbe4: 0xc0c2264  jal         func_308990
    ctx->pc = 0x28FBE4u;
    SET_GPR_U32(ctx, 31, 0x28FBECu);
    ctx->pc = 0x28FBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBE4u;
    // 0x28fbe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308990u, 0x28FBE4u, 0x28FBECu)) {
        return;
    }
    ctx->pc = 0x28FBECu;
label_28fbec:
    // 0x28fbec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28fbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fbf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28fbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x28FBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBF8u;
        // 0x28fbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FC00u;
    // 0x28fc00: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x28fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x28fc04: 0x0  nop
    ctx->pc = 0x28fc04u;
    // NOP
    // 0x28fc08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x28fc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28fc0c: 0x0  nop
    ctx->pc = 0x28fc0cu;
    // NOP
    // 0x28fc10: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28fc14: 0x0  nop
    ctx->pc = 0x28fc14u;
    // NOP
    // 0x28fc18: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x28fc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28fc1c: 0x0  nop
    ctx->pc = 0x28fc1cu;
    // NOP
    // 0x28fc20: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x28fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28fc24: 0x0  nop
    ctx->pc = 0x28fc24u;
    // NOP
    // 0x28fc28: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x28fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28fc2c: 0x0  nop
    ctx->pc = 0x28fc2cu;
    // NOP
    // 0x28fc30: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28fc34: 0x0  nop
    ctx->pc = 0x28fc34u;
    // NOP
    // 0x28fc38: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x28fc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28fc3c: 0x0  nop
    ctx->pc = 0x28fc3cu;
    // NOP
    // 0x28fc40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28fc44: 0x0  nop
    ctx->pc = 0x28fc44u;
    // NOP
    ctx->pc = 0x28fc48u;
}
