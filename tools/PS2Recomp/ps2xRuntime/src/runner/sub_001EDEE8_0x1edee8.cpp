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

// Function: sub_001EDEE8
// Address: 0x1edee8 - 0x1edf28
void sub_001EDEE8_0x1edee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDEE8_0x1edee8");
#endif

    switch (ctx->pc) {
        case 0x1edf0cu: goto label_1edf0c;
        default: break;
    }

    ctx->pc = 0x1edee8u;

    // 0x1edee8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1edee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1edeec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1edeecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1edef0: 0x8c45e7bc  lw          $a1, -0x1844($v0)
    ctx->pc = 0x1edef0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1edef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1edef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1edef8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1edef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1edefc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1edefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edf04: 0xc092782  jal         func_249E08
    ctx->pc = 0x1EDF04u;
    SET_GPR_U32(ctx, 31, 0x1EDF0Cu);
    ctx->pc = 0x1EDF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF04u;
    // 0x1edf08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1EDF04u, 0x1EDF0Cu)) {
        return;
    }
    ctx->pc = 0x1EDF0Cu;
label_1edf0c:
    // 0x1edf0c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1edf0cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x1edf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edf14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1edf14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1edf18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF1Cu;
        // 0x1edf20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDF24u;
    // 0x1edf24: 0x0  nop
    ctx->pc = 0x1edf24u;
    // NOP
    ctx->pc = 0x1edf28u;
}
