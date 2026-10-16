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

// Function: sub_0021B4B8
// Address: 0x21b4b8 - 0x21b500
void sub_0021B4B8_0x21b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B4B8_0x21b4b8");
#endif

    switch (ctx->pc) {
        case 0x21b4e4u: goto label_21b4e4;
        default: break;
    }

    ctx->pc = 0x21b4b8u;

    // 0x21b4b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b4bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21b4c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21b4c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21b4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b4cc: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x21b4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x21b4d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x21b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b4d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B4D4u;
    {
        const bool branch_taken_0x21b4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b4d4) {
            ctx->pc = 0x21B4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B4D4u;
            // 0x21b4d8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B4E8u;
            goto label_21b4e8;
        }
    }
    ctx->pc = 0x21B4DCu;
    // 0x21b4dc: 0xc086de6  jal         func_21B798
    ctx->pc = 0x21B4DCu;
    SET_GPR_U32(ctx, 31, 0x21B4E4u);
    ctx->pc = 0x21B798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B798u, 0x21B4DCu, 0x21B4E4u)) {
        return;
    }
    ctx->pc = 0x21B4E4u;
label_21b4e4:
    // 0x21b4e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x21b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_21b4e8:
    // 0x21b4e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21b4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21b4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21B4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4F8u;
        // 0x21b4fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B500u;
}
