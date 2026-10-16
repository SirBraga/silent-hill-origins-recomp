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

// Function: sub_001D8048
// Address: 0x1d8048 - 0x1d8098
void sub_001D8048_0x1d8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8048_0x1d8048");
#endif

    switch (ctx->pc) {
        case 0x1d808cu: goto label_1d808c;
        default: break;
    }

    ctx->pc = 0x1d8048u;

    // 0x1d8048: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d8048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d804c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d804cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8050: 0x8c439d8c  lw          $v1, -0x6274($v0)
    ctx->pc = 0x1d8050u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339D8Cu));
    // 0x1d8054: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8054u;
    {
        const bool branch_taken_0x1d8054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8054u;
        // 0x1d8058: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8054) {
            ctx->pc = 0x1D808Cu;
            goto label_1d808c;
        }
    }
    ctx->pc = 0x1D805Cu;
    // 0x1d805c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d8060: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d8060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8064: 0x8c4588f0  lw          $a1, -0x7710($v0)
    ctx->pc = 0x1d8064u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6F88F0u));
    // 0x1d8068: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d8068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d806c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D806Cu;
    {
        const bool branch_taken_0x1d806c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D806Cu;
        // 0x1d8070: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d806c) {
            ctx->pc = 0x1D8090u;
            goto label_1d8090;
        }
    }
    ctx->pc = 0x1D8074u;
    // 0x1d8074: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8078: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8078u;
    {
        const bool branch_taken_0x1d8078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8078u;
        // 0x1d807c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8078) {
            ctx->pc = 0x1D8090u;
            goto label_1d8090;
        }
    }
    ctx->pc = 0x1D8080u;
    // 0x1d8080: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d8080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d8084: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D8084u;
    SET_GPR_U32(ctx, 31, 0x1D808Cu);
    ctx->pc = 0x1D8088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8084u;
    // 0x1d8088: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D8084u, 0x1D808Cu)) {
        return;
    }
    ctx->pc = 0x1D808Cu;
label_1d808c:
    // 0x1d808c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d808cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8090:
    // 0x1d8090: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8090u;
        // 0x1d8094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8098u;
}
