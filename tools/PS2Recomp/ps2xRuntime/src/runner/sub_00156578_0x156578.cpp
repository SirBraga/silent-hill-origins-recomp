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

// Function: sub_00156578
// Address: 0x156578 - 0x1565d8
void sub_00156578_0x156578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156578_0x156578");
#endif

    switch (ctx->pc) {
        case 0x1565b4u: goto label_1565b4;
        case 0x1565c8u: goto label_1565c8;
        default: break;
    }

    ctx->pc = 0x156578u;

    // 0x156578: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x156578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x15657c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15657cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156580: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x156580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x156584: 0x8c4543e8  lw          $a1, 0x43E8($v0)
    ctx->pc = 0x156584u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43E8u));
    // 0x156588: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x156588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15658c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x15658cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x156590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156594: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x156594u;
    {
        const bool branch_taken_0x156594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x156598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156594u;
        // 0x156598: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156594) {
            ctx->pc = 0x1565B4u;
            goto label_1565b4;
        }
    }
    ctx->pc = 0x15659Cu;
    // 0x15659c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1565a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1565A0u;
    {
        const bool branch_taken_0x1565a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565A0u;
        // 0x1565a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565a0) {
            ctx->pc = 0x1565B4u;
            goto label_1565b4;
        }
    }
    ctx->pc = 0x1565A8u;
    // 0x1565a8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1565a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1565ac: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1565ACu;
    SET_GPR_U32(ctx, 31, 0x1565B4u);
    ctx->pc = 0x1565B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565ACu;
    // 0x1565b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1565ACu, 0x1565B4u)) {
        return;
    }
    ctx->pc = 0x1565B4u;
label_1565b4:
    // 0x1565b4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1565b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1565b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1565b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1565bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1565c0: 0xc055976  jal         func_1565D8
    ctx->pc = 0x1565C0u;
    SET_GPR_U32(ctx, 31, 0x1565C8u);
    ctx->pc = 0x1565C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565C0u;
    // 0x1565c4: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1565D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1565D8u, 0x1565C0u, 0x1565C8u)) {
        return;
    }
    ctx->pc = 0x1565C8u;
label_1565c8:
    // 0x1565c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1565c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1565cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1565ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1565d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1565D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1565D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565D0u;
        // 0x1565d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1565D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1565D8u;
}
