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

// Function: sub_0021B478
// Address: 0x21b478 - 0x21b4b8
void sub_0021B478_0x21b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B478_0x21b478");
#endif

    switch (ctx->pc) {
        case 0x21b4a4u: goto label_21b4a4;
        default: break;
    }

    ctx->pc = 0x21b478u;

    // 0x21b478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b47c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21b480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21b480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21b484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b48c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x21b48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x21b490: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b494: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B494u;
    {
        const bool branch_taken_0x21b494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B494u;
        // 0x21b498: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b494) {
            ctx->pc = 0x21B4A4u;
            goto label_21b4a4;
        }
    }
    ctx->pc = 0x21B49Cu;
    // 0x21b49c: 0xc086de2  jal         func_21B788
    ctx->pc = 0x21B49Cu;
    SET_GPR_U32(ctx, 31, 0x21B4A4u);
    ctx->pc = 0x21B788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B788u, 0x21B49Cu, 0x21B4A4u)) {
        return;
    }
    ctx->pc = 0x21B4A4u;
label_21b4a4:
    // 0x21b4a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21b4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b4ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21b4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x21B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4B0u;
        // 0x21b4b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B4B8u;
}
