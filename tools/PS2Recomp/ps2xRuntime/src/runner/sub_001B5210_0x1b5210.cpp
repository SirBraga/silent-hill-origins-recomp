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

// Function: sub_001B5210
// Address: 0x1b5210 - 0x1b5250
void sub_001B5210_0x1b5210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5210_0x1b5210");
#endif

    switch (ctx->pc) {
        case 0x1b5224u: goto label_1b5224;
        case 0x1b5230u: goto label_1b5230;
        case 0x1b523cu: goto label_1b523c;
        default: break;
    }

    ctx->pc = 0x1b5210u;

    // 0x1b5210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b5218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b521c: 0xc06e196  jal         func_1B8658
    ctx->pc = 0x1B521Cu;
    SET_GPR_U32(ctx, 31, 0x1B5224u);
    ctx->pc = 0x1B5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B521Cu;
    // 0x1b5220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B8658u, 0x1B521Cu, 0x1B5224u)) {
        return;
    }
    ctx->pc = 0x1B5224u;
label_1b5224:
    // 0x1b5224: 0x8e050378  lw          $a1, 0x378($s0)
    ctx->pc = 0x1b5224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x1b5228: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1B5228u;
    SET_GPR_U32(ctx, 31, 0x1B5230u);
    ctx->pc = 0x1B522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5228u;
    // 0x1b522c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B5228u, 0x1B5230u)) {
        return;
    }
    ctx->pc = 0x1B5230u;
label_1b5230:
    // 0x1b5230: 0xae02037c  sw          $v0, 0x37C($s0)
    ctx->pc = 0x1b5230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 2));
    // 0x1b5234: 0xc06d49c  jal         func_1B5270
    ctx->pc = 0x1B5234u;
    SET_GPR_U32(ctx, 31, 0x1B523Cu);
    ctx->pc = 0x1B5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5234u;
    // 0x1b5238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5270u, 0x1B5234u, 0x1B523Cu)) {
        return;
    }
    ctx->pc = 0x1B523Cu;
label_1b523c:
    // 0x1b523c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b523cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5244: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5244u;
        // 0x1b5248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B524Cu;
    // 0x1b524c: 0x0  nop
    ctx->pc = 0x1b524cu;
    // NOP
    ctx->pc = 0x1b5250u;
}
