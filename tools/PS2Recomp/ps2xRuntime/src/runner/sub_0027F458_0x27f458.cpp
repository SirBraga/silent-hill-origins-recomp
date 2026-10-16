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

// Function: sub_0027F458
// Address: 0x27f458 - 0x27f498
void sub_0027F458_0x27f458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F458_0x27f458");
#endif

    switch (ctx->pc) {
        case 0x27f478u: goto label_27f478;
        default: break;
    }

    ctx->pc = 0x27f458u;

    // 0x27f458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f45c: 0x8f82880c  lw          $v0, -0x77F4($gp)
    ctx->pc = 0x27f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936588)));
    // 0x27f460: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F468u;
    {
        const bool branch_taken_0x27f468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F468u;
        // 0x27f46c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f468) {
            ctx->pc = 0x27F478u;
            goto label_27f478;
        }
    }
    ctx->pc = 0x27F470u;
    // 0x27f470: 0xc09fd36  jal         func_27F4D8
    ctx->pc = 0x27F470u;
    SET_GPR_U32(ctx, 31, 0x27F478u);
    ctx->pc = 0x27F474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F470u;
    // 0x27f474: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F4D8u, 0x27F470u, 0x27F478u)) {
        return;
    }
    ctx->pc = 0x27F478u;
label_27f478:
    // 0x27f478: 0x8f83880c  lw          $v1, -0x77F4($gp)
    ctx->pc = 0x27f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936588)));
    // 0x27f47c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27f47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f480: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f48c: 0xaf83880c  sw          $v1, -0x77F4($gp)
    ctx->pc = 0x27f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936588), GPR_U32(ctx, 3));
    // 0x27f490: 0x3e00008  jr          $ra
    ctx->pc = 0x27F490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F490u;
        // 0x27f494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F498u;
}
