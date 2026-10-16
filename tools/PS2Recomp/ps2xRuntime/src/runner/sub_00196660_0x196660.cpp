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

// Function: sub_00196660
// Address: 0x196660 - 0x196698
void sub_00196660_0x196660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196660_0x196660");
#endif

    switch (ctx->pc) {
        case 0x196680u: goto label_196680;
        default: break;
    }

    ctx->pc = 0x196660u;

    // 0x196660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196664: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x196664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x196668: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x196668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x19666c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196670: 0x2484bf80  addiu       $a0, $a0, -0x4080
    ctx->pc = 0x196670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950784));
    // 0x196674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196678: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x196678u;
    SET_GPR_U32(ctx, 31, 0x196680u);
    ctx->pc = 0x19667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196678u;
    // 0x19667c: 0x34c6c0e0  ori         $a2, $a2, 0xC0E0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49376);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x196678u, 0x196680u)) {
        return;
    }
    ctx->pc = 0x196680u;
label_196680:
    // 0x196680: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x196680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x196684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196688: 0xa0608060  sb          $zero, -0x7FA0($v1)
    ctx->pc = 0x196688u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F8060u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6F8060u, _value); } while (0);
    // 0x19668c: 0x3e00008  jr          $ra
    ctx->pc = 0x19668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19668Cu;
        // 0x196690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19668Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196694u;
    // 0x196694: 0x0  nop
    ctx->pc = 0x196694u;
    // NOP
    ctx->pc = 0x196698u;
}
