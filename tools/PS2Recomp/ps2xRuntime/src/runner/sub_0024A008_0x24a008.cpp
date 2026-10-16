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

// Function: sub_0024A008
// Address: 0x24a008 - 0x24a048
void sub_0024A008_0x24a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A008_0x24a008");
#endif

    ctx->pc = 0x24a008u;

    // 0x24a008: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24a00c: 0x8c423f5c  lw          $v0, 0x3F5C($v0)
    ctx->pc = 0x24a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F5Cu));
    // 0x24a010: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24a010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24a014: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x24a018: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x24a018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x24a01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a020: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24a024: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24a024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24a028: 0xac223f5c  sw          $v0, 0x3F5C($at)
    ctx->pc = 0x24a028u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F5Cu, _value); } while (0);
    // 0x24a02c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x24a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x24a030: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24a030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a034: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24a034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24a038: 0xac253f58  sw          $a1, 0x3F58($at)
    ctx->pc = 0x24a038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3F58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F58u, _value); } while (0);
    // 0x24a03c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A03Cu;
        // 0x24a040: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A044u;
    // 0x24a044: 0x0  nop
    ctx->pc = 0x24a044u;
    // NOP
    ctx->pc = 0x24a048u;
}
