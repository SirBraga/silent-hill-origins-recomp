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

// Function: sub_001FE170
// Address: 0x1fe170 - 0x1fe1a8
void sub_001FE170_0x1fe170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE170_0x1fe170");
#endif

    switch (ctx->pc) {
        case 0x1fe19cu: goto label_1fe19c;
        default: break;
    }

    ctx->pc = 0x1fe170u;

    // 0x1fe170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe174: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE174u;
    {
        const bool branch_taken_0x1fe174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE174u;
        // 0x1fe178: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe174) {
            ctx->pc = 0x1FE19Cu;
            goto label_1fe19c;
        }
    }
    ctx->pc = 0x1FE17Cu;
    // 0x1fe17c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x1fe17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1fe180: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE180u;
    {
        const bool branch_taken_0x1fe180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE180u;
        // 0x1fe184: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe180) {
            ctx->pc = 0x1FE19Cu;
            goto label_1fe19c;
        }
    }
    ctx->pc = 0x1FE188u;
    // 0x1fe188: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1fe188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fe18c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE18Cu;
    {
        const bool branch_taken_0x1fe18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE18Cu;
        // 0x1fe190: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe18c) {
            ctx->pc = 0x1FE19Cu;
            goto label_1fe19c;
        }
    }
    ctx->pc = 0x1FE194u;
    // 0x1fe194: 0xc081268  jal         func_2049A0
    ctx->pc = 0x1FE194u;
    SET_GPR_U32(ctx, 31, 0x1FE19Cu);
    ctx->pc = 0x1FE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE194u;
    // 0x1fe198: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2049A0u, 0x1FE194u, 0x1FE19Cu)) {
        return;
    }
    ctx->pc = 0x1FE19Cu;
label_1fe19c:
    // 0x1fe19c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1A0u;
        // 0x1fe1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE1A8u;
}
