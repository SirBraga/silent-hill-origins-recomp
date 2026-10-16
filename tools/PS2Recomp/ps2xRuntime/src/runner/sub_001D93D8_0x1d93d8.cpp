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

// Function: sub_001D93D8
// Address: 0x1d93d8 - 0x1d9448
void sub_001D93D8_0x1d93d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D93D8_0x1d93d8");
#endif

    switch (ctx->pc) {
        case 0x1d9404u: goto label_1d9404;
        case 0x1d9418u: goto label_1d9418;
        default: break;
    }

    ctx->pc = 0x1d93d8u;

    // 0x1d93d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d93dc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d93e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d93e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d93e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d93e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d93e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d93e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d93ec: 0x8c629dd0  lw          $v0, -0x6230($v1)
    ctx->pc = 0x1d93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339DD0u));
    // 0x1d93f0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1d93f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D93F4u;
    {
        const bool branch_taken_0x1d93f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93F4u;
        // 0x1d93f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93f4) {
            ctx->pc = 0x1D9418u;
            goto label_1d9418;
        }
    }
    ctx->pc = 0x1D93FCu;
    // 0x1d93fc: 0xc07649c  jal         func_1D9270
    ctx->pc = 0x1D93FCu;
    SET_GPR_U32(ctx, 31, 0x1D9404u);
    ctx->pc = 0x1D9270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9270u, 0x1D93FCu, 0x1D9404u)) {
        return;
    }
    ctx->pc = 0x1D9404u;
label_1d9404:
    // 0x1d9404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9408: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9408u;
    {
        const bool branch_taken_0x1d9408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9408u;
        // 0x1d940c: 0x8e239dd0  lw          $v1, -0x6230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9408) {
            ctx->pc = 0x1D941Cu;
            goto label_1d941c;
        }
    }
    ctx->pc = 0x1D9410u;
    // 0x1d9410: 0xc07640e  jal         func_1D9038
    ctx->pc = 0x1D9410u;
    SET_GPR_U32(ctx, 31, 0x1D9418u);
    ctx->pc = 0x1D9038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9038u, 0x1D9410u, 0x1D9418u)) {
        return;
    }
    ctx->pc = 0x1D9418u;
label_1d9418:
    // 0x1d9418: 0x8e239dd0  lw          $v1, -0x6230($s1)
    ctx->pc = 0x1d9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942160)));
label_1d941c:
    // 0x1d941c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d941cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9420: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d9420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9424: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d9424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d9428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d942c: 0xae239dd0  sw          $v1, -0x6230($s1)
    ctx->pc = 0x1d942cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942160), GPR_U32(ctx, 3));
    // 0x1d9430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9434: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9434u;
        // 0x1d9438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D943Cu;
    // 0x1d943c: 0x0  nop
    ctx->pc = 0x1d943cu;
    // NOP
    // 0x1d9440: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d9440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d9444: 0x0  nop
    ctx->pc = 0x1d9444u;
    // NOP
    ctx->pc = 0x1d9448u;
}
