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

// Function: sub_001CF888
// Address: 0x1cf888 - 0x1cf8e8
void sub_001CF888_0x1cf888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF888_0x1cf888");
#endif

    switch (ctx->pc) {
        case 0x1cf898u: goto label_1cf898;
        case 0x1cf8ccu: goto label_1cf8cc;
        case 0x1cf8d8u: goto label_1cf8d8;
        default: break;
    }

    ctx->pc = 0x1cf888u;

    // 0x1cf888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf88c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf890: 0xc06039c  jal         func_180E70
    ctx->pc = 0x1CF890u;
    SET_GPR_U32(ctx, 31, 0x1CF898u);
    ctx->pc = 0x180E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180E70u, 0x1CF890u, 0x1CF898u)) {
        return;
    }
    ctx->pc = 0x1CF898u;
label_1cf898:
    // 0x1cf898: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1cf898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1cf89c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1cf89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1cf8a0: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1cf8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1cf8a4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1cf8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1cf8a8: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF8A8u;
    {
        const bool branch_taken_0x1cf8a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cf8a8) {
            ctx->pc = 0x1CF8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF8A8u;
            // 0x1cf8ac: 0x3c04001d  lui         $a0, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF8D0u;
            goto label_1cf8d0;
        }
    }
    ctx->pc = 0x1CF8B0u;
    // 0x1cf8b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cf8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cf8b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF8B4u;
    {
        const bool branch_taken_0x1cf8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8b4) {
            ctx->pc = 0x1CF8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF8B4u;
            // 0x1cf8b8: 0x3c04001d  lui         $a0, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF8D0u;
            goto label_1cf8d0;
        }
    }
    ctx->pc = 0x1CF8BCu;
    // 0x1cf8bc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1cf8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1cf8c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cf8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8c4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1CF8C4u;
    SET_GPR_U32(ctx, 31, 0x1CF8CCu);
    ctx->pc = 0x1CF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF8C4u;
    // 0x1cf8c8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1CF8C4u, 0x1CF8CCu)) {
        return;
    }
    ctx->pc = 0x1CF8CCu;
label_1cf8cc:
    // 0x1cf8cc: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1cf8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
label_1cf8d0:
    // 0x1cf8d0: 0xc074c6c  jal         func_1D31B0
    ctx->pc = 0x1CF8D0u;
    SET_GPR_U32(ctx, 31, 0x1CF8D8u);
    ctx->pc = 0x1CF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF8D0u;
    // 0x1cf8d4: 0x2484f858  addiu       $a0, $a0, -0x7A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D31B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D31B0u, 0x1CF8D0u, 0x1CF8D8u)) {
        return;
    }
    ctx->pc = 0x1CF8D8u;
label_1cf8d8:
    // 0x1cf8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8E0u;
        // 0x1cf8e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF8E8u;
}
