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

// Function: sub_00240620
// Address: 0x240620 - 0x240658
void sub_00240620_0x240620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240620_0x240620");
#endif

    ctx->pc = 0x240620u;

    // 0x240620: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x240620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x240624: 0xac253f30  sw          $a1, 0x3F30($at)
    ctx->pc = 0x240624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F30u, _value); } while (0);
    // 0x240628: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x240628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
    // 0x24062c: 0x24e64100  addiu       $a2, $a3, 0x4100
    ctx->pc = 0x24062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16640));
    // 0x240630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240634: 0x84a3001c  lh          $v1, 0x1C($a1)
    ctx->pc = 0x240634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x240638: 0xace34100  sw          $v1, 0x4100($a3)
    ctx->pc = 0x240638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x704100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x704100u, _value); } while (0);
    // 0x24063c: 0x84a4001e  lh          $a0, 0x1E($a1)
    ctx->pc = 0x24063cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x240640: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x240640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x704104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x704104u, _value); } while (0);
    // 0x240644: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x240644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x240648: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x240648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x704108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x704108u, _value); } while (0);
    // 0x24064c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x24064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x240650: 0x3e00008  jr          $ra
    ctx->pc = 0x240650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240650u;
        // 0x240654: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240658u;
}
