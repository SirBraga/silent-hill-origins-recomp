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

// Function: sub_002DF5D8
// Address: 0x2df5d8 - 0x2df608
void sub_002DF5D8_0x2df5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF5D8_0x2df5d8");
#endif

    switch (ctx->pc) {
        case 0x2df5ecu: goto label_2df5ec;
        case 0x2df5f4u: goto label_2df5f4;
        default: break;
    }

    ctx->pc = 0x2df5d8u;

    // 0x2df5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df5dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2df5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2df5e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df5e4: 0xc0b7d9a  jal         func_2DF668
    ctx->pc = 0x2DF5E4u;
    SET_GPR_U32(ctx, 31, 0x2DF5ECu);
    ctx->pc = 0x2DF5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF5E4u;
    // 0x2df5e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF668u, 0x2DF5E4u, 0x2DF5ECu)) {
        return;
    }
    ctx->pc = 0x2DF5ECu;
label_2df5ec:
    // 0x2df5ec: 0xc0b7d82  jal         func_2DF608
    ctx->pc = 0x2DF5ECu;
    SET_GPR_U32(ctx, 31, 0x2DF5F4u);
    ctx->pc = 0x2DF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF5ECu;
    // 0x2df5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF608u, 0x2DF5ECu, 0x2DF5F4u)) {
        return;
    }
    ctx->pc = 0x2DF5F4u;
label_2df5f4:
    // 0x2df5f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df5fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2df5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df600: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF600u;
        // 0x2df604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF608u;
}
