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

// Function: sub_002ED7E8
// Address: 0x2ed7e8 - 0x2ed828
void sub_002ED7E8_0x2ed7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED7E8_0x2ed7e8");
#endif

    switch (ctx->pc) {
        case 0x2ed7fcu: goto label_2ed7fc;
        default: break;
    }

    ctx->pc = 0x2ed7e8u;

    // 0x2ed7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed7ec: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2ed7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2ed7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed7f4: 0xc0b77f2  jal         func_2DDFC8
    ctx->pc = 0x2ED7F4u;
    SET_GPR_U32(ctx, 31, 0x2ED7FCu);
    ctx->pc = 0x2ED7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED7F4u;
    // 0x2ed7f8: 0x2484e840  addiu       $a0, $a0, -0x17C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDFC8u, 0x2ED7F4u, 0x2ED7FCu)) {
        return;
    }
    ctx->pc = 0x2ED7FCu;
label_2ed7fc:
    // 0x2ed7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed800: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ed800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed804: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED804u;
        // 0x2ed808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED80Cu;
    // 0x2ed80c: 0x0  nop
    ctx->pc = 0x2ed80cu;
    // NOP
    // 0x2ed810: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ed810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ed814: 0x0  nop
    ctx->pc = 0x2ed814u;
    // NOP
    // 0x2ed818: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ed818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ed81c: 0x0  nop
    ctx->pc = 0x2ed81cu;
    // NOP
    // 0x2ed820: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ed820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ed824: 0x0  nop
    ctx->pc = 0x2ed824u;
    // NOP
    ctx->pc = 0x2ed828u;
}
