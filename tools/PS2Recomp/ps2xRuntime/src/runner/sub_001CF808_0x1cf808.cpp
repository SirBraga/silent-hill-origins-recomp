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

// Function: sub_001CF808
// Address: 0x1cf808 - 0x1cf858
void sub_001CF808_0x1cf808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF808_0x1cf808");
#endif

    switch (ctx->pc) {
        case 0x1cf83cu: goto label_1cf83c;
        case 0x1cf844u: goto label_1cf844;
        default: break;
    }

    ctx->pc = 0x1cf808u;

    // 0x1cf808: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1cf808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1cf80c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1cf810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf814: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1cf814u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1cf818: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1cf818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1cf81c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF81Cu;
    {
        const bool branch_taken_0x1cf81c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF81Cu;
        // 0x1cf820: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf81c) {
            ctx->pc = 0x1CF83Cu;
            goto label_1cf83c;
        }
    }
    ctx->pc = 0x1CF824u;
    // 0x1cf824: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cf824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cf828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF828u;
    {
        const bool branch_taken_0x1cf828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF828u;
        // 0x1cf82c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf828) {
            ctx->pc = 0x1CF83Cu;
            goto label_1cf83c;
        }
    }
    ctx->pc = 0x1CF830u;
    // 0x1cf830: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1cf830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1cf834: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1CF834u;
    SET_GPR_U32(ctx, 31, 0x1CF83Cu);
    ctx->pc = 0x1CF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF834u;
    // 0x1cf838: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1CF834u, 0x1CF83Cu)) {
        return;
    }
    ctx->pc = 0x1CF83Cu;
label_1cf83c:
    // 0x1cf83c: 0xc074c3c  jal         func_1D30F0
    ctx->pc = 0x1CF83Cu;
    SET_GPR_U32(ctx, 31, 0x1CF844u);
    ctx->pc = 0x1CF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF83Cu;
    // 0x1cf840: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D30F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D30F0u, 0x1CF83Cu, 0x1CF844u)) {
        return;
    }
    ctx->pc = 0x1CF844u;
label_1cf844:
    // 0x1cf844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf84c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF84Cu;
        // 0x1cf850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF854u;
    // 0x1cf854: 0x0  nop
    ctx->pc = 0x1cf854u;
    // NOP
    ctx->pc = 0x1cf858u;
}
