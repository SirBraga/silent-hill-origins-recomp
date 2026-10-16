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

// Function: sub_00170340
// Address: 0x170340 - 0x170388
void sub_00170340_0x170340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170340_0x170340");
#endif

    switch (ctx->pc) {
        case 0x170378u: goto label_170378;
        default: break;
    }

    ctx->pc = 0x170340u;

    // 0x170340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170344: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x170344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x170348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17034c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x17034cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x170350: 0x8c840114  lw          $a0, 0x114($a0)
    ctx->pc = 0x170350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x170354: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x170354u;
    {
        const bool branch_taken_0x170354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x170358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170354u;
        // 0x170358: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170354) {
            ctx->pc = 0x17037Cu;
            goto label_17037c;
        }
    }
    ctx->pc = 0x17035Cu;
    // 0x17035c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170360: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170360u;
    {
        const bool branch_taken_0x170360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170360) {
            ctx->pc = 0x17037Cu;
            goto label_17037c;
        }
    }
    ctx->pc = 0x170368u;
    // 0x170368: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x170368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17036c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170370: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x170370u;
    SET_GPR_U32(ctx, 31, 0x170378u);
    ctx->pc = 0x170374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170370u;
    // 0x170374: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x170370u, 0x170378u)) {
        return;
    }
    ctx->pc = 0x170378u;
label_170378:
    // 0x170378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17037c:
    // 0x17037c: 0x3e00008  jr          $ra
    ctx->pc = 0x17037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17037Cu;
        // 0x170380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17037Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170384u;
    // 0x170384: 0x0  nop
    ctx->pc = 0x170384u;
    // NOP
    ctx->pc = 0x170388u;
}
