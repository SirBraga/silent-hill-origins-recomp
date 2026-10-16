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

// Function: sub_0025DEF8
// Address: 0x25def8 - 0x25df28
void sub_0025DEF8_0x25def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DEF8_0x25def8");
#endif

    switch (ctx->pc) {
        case 0x25df18u: goto label_25df18;
        default: break;
    }

    ctx->pc = 0x25def8u;

    // 0x25def8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25def8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25defc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25defcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25df00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25df04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25df04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df08: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x25df08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x25df0c: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x25df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x25df10: 0xc09632a  jal         func_258CA8
    ctx->pc = 0x25DF10u;
    SET_GPR_U32(ctx, 31, 0x25DF18u);
    ctx->pc = 0x25DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF10u;
    // 0x25df14: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258CA8u, 0x25DF10u, 0x25DF18u)) {
        return;
    }
    ctx->pc = 0x25DF18u;
label_25df18:
    // 0x25df18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25df1c: 0x3e00008  jr          $ra
    ctx->pc = 0x25DF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF1Cu;
        // 0x25df20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DF24u;
    // 0x25df24: 0x0  nop
    ctx->pc = 0x25df24u;
    // NOP
    ctx->pc = 0x25df28u;
}
