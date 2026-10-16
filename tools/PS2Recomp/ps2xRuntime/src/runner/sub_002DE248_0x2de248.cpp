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

// Function: sub_002DE248
// Address: 0x2de248 - 0x2de298
void sub_002DE248_0x2de248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE248_0x2de248");
#endif

    switch (ctx->pc) {
        case 0x2de27cu: goto label_2de27c;
        default: break;
    }

    ctx->pc = 0x2de248u;

    // 0x2de248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de250: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x2de250u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x2de254: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2de254u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2de258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de25c: 0x25088040  addiu       $t0, $t0, -0x7FC0
    ctx->pc = 0x2de25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934592));
    // 0x2de260: 0xaf828bec  sw          $v0, -0x7414($gp)
    ctx->pc = 0x2de260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 2));
    // 0x2de264: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2de264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2de268: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2de268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2de26c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2de26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2de270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2de270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de274: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2DE274u;
    SET_GPR_U32(ctx, 31, 0x2DE27Cu);
    ctx->pc = 0x2DE278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE274u;
    // 0x2de278: 0x35290805  ori         $t1, $t1, 0x805 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2053);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2DE274u, 0x2DE27Cu)) {
        return;
    }
    ctx->pc = 0x2DE27Cu;
label_2de27c:
    // 0x2de27c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE27Cu;
    {
        const bool branch_taken_0x2de27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE27Cu;
        // 0x2de280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de27c) {
            ctx->pc = 0x2DE28Cu;
            goto label_2de28c;
        }
    }
    ctx->pc = 0x2DE284u;
    // 0x2de284: 0xaf808bec  sw          $zero, -0x7414($gp)
    ctx->pc = 0x2de284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 0));
    // 0x2de288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de28c:
    // 0x2de28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de290: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE290u;
        // 0x2de294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE298u;
}
