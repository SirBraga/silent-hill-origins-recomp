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

// Function: sub_0024D190
// Address: 0x24d190 - 0x24d1f0
void sub_0024D190_0x24d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D190_0x24d190");
#endif

    switch (ctx->pc) {
        case 0x24d1c8u: goto label_24d1c8;
        default: break;
    }

    ctx->pc = 0x24d190u;

    // 0x24d190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d194: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24d194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24d198: 0x8c633f70  lw          $v1, 0x3F70($v1)
    ctx->pc = 0x24d198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F70u));
    // 0x24d19c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24d1a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24d1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24d1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d1a8: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24d1ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d1b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d1b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D1B8u;
    {
        const bool branch_taken_0x24d1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d1b8) {
            ctx->pc = 0x24D1C8u;
            goto label_24d1c8;
        }
    }
    ctx->pc = 0x24D1C0u;
    // 0x24d1c0: 0xc093106  jal         func_24C418
    ctx->pc = 0x24D1C0u;
    SET_GPR_U32(ctx, 31, 0x24D1C8u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x24D1C0u, 0x24D1C8u)) {
        return;
    }
    ctx->pc = 0x24D1C8u;
label_24d1c8:
    // 0x24d1c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24d1cc: 0x8c633f74  lw          $v1, 0x3F74($v1)
    ctx->pc = 0x24d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F74u));
    // 0x24d1d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24d1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24d1d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d1d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24d1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d1e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24d1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24d1e4: 0xac233f74  sw          $v1, 0x3F74($at)
    ctx->pc = 0x24d1e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F74u, _value); } while (0);
    // 0x24d1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1E8u;
        // 0x24d1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D1F0u;
}
