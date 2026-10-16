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

// Function: sub_00140200
// Address: 0x140200 - 0x140238
void sub_00140200_0x140200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140200_0x140200");
#endif

    switch (ctx->pc) {
        case 0x140224u: goto label_140224;
        default: break;
    }

    ctx->pc = 0x140200u;

    // 0x140200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140204: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x140208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14020c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14020cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140210: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x140210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x140214: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x140214u;
    {
        const bool branch_taken_0x140214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140214) {
            ctx->pc = 0x140218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140214u;
            // 0x140218: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14022Cu;
            goto label_14022c;
        }
    }
    ctx->pc = 0x14021Cu;
    // 0x14021c: 0xc076ace  jal         func_1DAB38
    ctx->pc = 0x14021Cu;
    SET_GPR_U32(ctx, 31, 0x140224u);
    ctx->pc = 0x1DAB38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAB38u, 0x14021Cu, 0x140224u)) {
        return;
    }
    ctx->pc = 0x140224u;
label_140224:
    // 0x140224: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x140224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x140228: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14022c:
    // 0x14022c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14022cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140230: 0x3e00008  jr          $ra
    ctx->pc = 0x140230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140230u;
        // 0x140234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140238u;
}
