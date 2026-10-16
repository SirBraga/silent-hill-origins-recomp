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

// Function: sub_0017B888
// Address: 0x17b888 - 0x17b8d0
void sub_0017B888_0x17b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B888_0x17b888");
#endif

    switch (ctx->pc) {
        case 0x17b8bcu: goto label_17b8bc;
        default: break;
    }

    ctx->pc = 0x17b888u;

    // 0x17b888: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17b888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17b88c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x17b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x17b890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b894: 0x8c45f8b0  lw          $a1, -0x750($v0)
    ctx->pc = 0x17b894u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BF8B0u));
    // 0x17b898: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x17b898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x17b89c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B89Cu;
    {
        const bool branch_taken_0x17b89c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B89Cu;
        // 0x17b8a0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b89c) {
            ctx->pc = 0x17B8BCu;
            goto label_17b8bc;
        }
    }
    ctx->pc = 0x17B8A4u;
    // 0x17b8a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b8a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B8A8u;
    {
        const bool branch_taken_0x17b8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8A8u;
        // 0x17b8ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8a8) {
            ctx->pc = 0x17B8BCu;
            goto label_17b8bc;
        }
    }
    ctx->pc = 0x17B8B0u;
    // 0x17b8b0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x17b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17b8b4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17B8B4u;
    SET_GPR_U32(ctx, 31, 0x17B8BCu);
    ctx->pc = 0x17B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8B4u;
    // 0x17b8b8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17B8B4u, 0x17B8BCu)) {
        return;
    }
    ctx->pc = 0x17B8BCu;
label_17b8bc:
    // 0x17b8bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8C4u;
        // 0x17b8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8CCu;
    // 0x17b8cc: 0x0  nop
    ctx->pc = 0x17b8ccu;
    // NOP
    ctx->pc = 0x17b8d0u;
}
