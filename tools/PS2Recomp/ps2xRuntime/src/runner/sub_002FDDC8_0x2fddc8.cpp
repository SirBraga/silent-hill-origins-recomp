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

// Function: sub_002FDDC8
// Address: 0x2fddc8 - 0x2fde10
void sub_002FDDC8_0x2fddc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDDC8_0x2fddc8");
#endif

    switch (ctx->pc) {
        case 0x2fddecu: goto label_2fddec;
        case 0x2fddf8u: goto label_2fddf8;
        default: break;
    }

    ctx->pc = 0x2fddc8u;

    // 0x2fddc8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2fddc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2fddcc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2fddccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddd0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2fddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2fddd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fddd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fddd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdddc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2fdddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2fdde0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2fdde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2fdde4: 0xc0c8eaa  jal         func_323AA8
    ctx->pc = 0x2FDDE4u;
    SET_GPR_U32(ctx, 31, 0x2FDDECu);
    ctx->pc = 0x2FDDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDE4u;
    // 0x2fdde8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AA8u, 0x2FDDE4u, 0x2FDDECu)) {
        return;
    }
    ctx->pc = 0x2FDDECu;
label_2fddec:
    // 0x2fddec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fddecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddf0: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FDDF0u;
    SET_GPR_U32(ctx, 31, 0x2FDDF8u);
    ctx->pc = 0x2FDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDF0u;
    // 0x2fddf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FDDF0u, 0x2FDDF8u)) {
        return;
    }
    ctx->pc = 0x2FDDF8u;
label_2fddf8:
    // 0x2fddf8: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2fddf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2fddfc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2fddfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2fde00: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE00u;
        // 0x2fde04: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE08u;
    // 0x2fde08: 0x0  nop
    ctx->pc = 0x2fde08u;
    // NOP
    // 0x2fde0c: 0x0  nop
    ctx->pc = 0x2fde0cu;
    // NOP
    ctx->pc = 0x2fde10u;
}
