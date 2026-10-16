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

// Function: sub_0011BA70
// Address: 0x11ba70 - 0x11bab0
void sub_0011BA70_0x11ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BA70_0x11ba70");
#endif

    switch (ctx->pc) {
        case 0x11ba8cu: goto label_11ba8c;
        default: break;
    }

    ctx->pc = 0x11ba70u;

    // 0x11ba70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ba74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11ba74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11ba78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11ba7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11ba7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ba84: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x11BA84u;
    SET_GPR_U32(ctx, 31, 0x11BA8Cu);
    ctx->pc = 0x11BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA84u;
    // 0x11ba88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x11BA84u, 0x11BA8Cu)) {
        return;
    }
    ctx->pc = 0x11BA8Cu;
label_11ba8c:
    // 0x11ba8c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x11ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x11ba90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ba94: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x11BA94u;
    {
        const bool branch_taken_0x11ba94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11ba94) {
            ctx->pc = 0x11BA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BA94u;
            // 0x11ba98: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BA9Cu;
            goto label_11ba9c;
        }
    }
    ctx->pc = 0x11BA9Cu;
label_11ba9c:
    // 0x11ba9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11ba9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11baa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11baa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11baa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11baa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11baa8: 0x3e00008  jr          $ra
    ctx->pc = 0x11BAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAA8u;
        // 0x11baac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BAB0u;
}
