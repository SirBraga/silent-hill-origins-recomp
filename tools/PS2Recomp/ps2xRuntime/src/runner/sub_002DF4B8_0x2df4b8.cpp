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

// Function: sub_002DF4B8
// Address: 0x2df4b8 - 0x2df508
void sub_002DF4B8_0x2df4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF4B8_0x2df4b8");
#endif

    switch (ctx->pc) {
        case 0x2df4e4u: goto label_2df4e4;
        default: break;
    }

    ctx->pc = 0x2df4b8u;

    // 0x2df4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df4bc: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x2df4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x2df4c0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2df4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2df4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df4c8: 0x25088090  addiu       $t0, $t0, -0x7F70
    ctx->pc = 0x2df4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934672));
    // 0x2df4cc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2df4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2df4d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2df4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2df4d4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2df4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2df4d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2df4d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4dc: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2DF4DCu;
    SET_GPR_U32(ctx, 31, 0x2DF4E4u);
    ctx->pc = 0x2DF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4DCu;
    // 0x2df4e0: 0x35290802  ori         $t1, $t1, 0x802 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2050);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2DF4DCu, 0x2DF4E4u)) {
        return;
    }
    ctx->pc = 0x2DF4E4u;
label_2df4e4:
    // 0x2df4e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF4E4u;
    {
        const bool branch_taken_0x2df4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4E4u;
        // 0x2df4e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4e4) {
            ctx->pc = 0x2DF4F4u;
            goto label_2df4f4;
        }
    }
    ctx->pc = 0x2DF4ECu;
    // 0x2df4ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF4ECu;
    {
        const bool branch_taken_0x2df4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4ECu;
        // 0x2df4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4ec) {
            ctx->pc = 0x2DF4FCu;
            goto label_2df4fc;
        }
    }
    ctx->pc = 0x2DF4F4u;
label_2df4f4:
    // 0x2df4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df4f8: 0xaf838bf8  sw          $v1, -0x7408($gp)
    ctx->pc = 0x2df4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), GPR_U32(ctx, 3));
label_2df4fc:
    // 0x2df4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df500: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF500u;
        // 0x2df504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF508u;
}
