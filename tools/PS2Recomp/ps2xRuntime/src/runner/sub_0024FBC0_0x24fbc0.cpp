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

// Function: sub_0024FBC0
// Address: 0x24fbc0 - 0x24fc00
void sub_0024FBC0_0x24fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FBC0_0x24fbc0");
#endif

    switch (ctx->pc) {
        case 0x24fbe4u: goto label_24fbe4;
        default: break;
    }

    ctx->pc = 0x24fbc0u;

    // 0x24fbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24fbc4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24fbc8: 0x8c4241a4  lw          $v0, 0x41A4($v0)
    ctx->pc = 0x24fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A4u));
    // 0x24fbcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24fbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24fbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24fbd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FBD4u;
    {
        const bool branch_taken_0x24fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBD4u;
        // 0x24fbd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbd4) {
            ctx->pc = 0x24FBECu;
            goto label_24fbec;
        }
    }
    ctx->pc = 0x24FBDCu;
    // 0x24fbdc: 0xc093106  jal         func_24C418
    ctx->pc = 0x24FBDCu;
    SET_GPR_U32(ctx, 31, 0x24FBE4u);
    ctx->pc = 0x24FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FBDCu;
    // 0x24fbe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x24FBDCu, 0x24FBE4u)) {
        return;
    }
    ctx->pc = 0x24FBE4u;
label_24fbe4:
    // 0x24fbe4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24fbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24fbe8: 0xac2041a4  sw          $zero, 0x41A4($at)
    ctx->pc = 0x24fbe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B41A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41A4u, _value); } while (0);
label_24fbec:
    // 0x24fbec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24fbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fbf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24fbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x24FBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBF8u;
        // 0x24fbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FC00u;
}
