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

// Function: sub_003155B0
// Address: 0x3155b0 - 0x315610
void sub_003155B0_0x3155b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003155B0_0x3155b0");
#endif

    switch (ctx->pc) {
        case 0x3155c8u: goto label_3155c8;
        case 0x3155e8u: goto label_3155e8;
        default: break;
    }

    ctx->pc = 0x3155b0u;

    // 0x3155b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3155b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3155b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3155b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3155b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3155b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3155bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3155bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3155c0: 0xc0c8484  jal         func_321210
    ctx->pc = 0x3155C0u;
    SET_GPR_U32(ctx, 31, 0x3155C8u);
    ctx->pc = 0x3155C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155C0u;
    // 0x3155c4: 0x3c110068  lui         $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x3155C0u, 0x3155C8u)) {
        return;
    }
    ctx->pc = 0x3155C8u;
label_3155c8:
    // 0x3155c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3155c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3155cc: 0x8e227030  lw          $v0, 0x7030($s1)
    ctx->pc = 0x3155ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28720)));
    // 0x3155d0: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3155D0u;
    {
        const bool branch_taken_0x3155d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3155D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155D0u;
        // 0x3155d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3155d0) {
            ctx->pc = 0x3155E0u;
            goto label_3155e0;
        }
    }
    ctx->pc = 0x3155D8u;
    // 0x3155d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3155D8u;
    {
        const bool branch_taken_0x3155d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3155DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155D8u;
        // 0x3155dc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3155d8) {
            ctx->pc = 0x3155F0u;
            goto label_3155f0;
        }
    }
    ctx->pc = 0x3155E0u;
label_3155e0:
    // 0x3155e0: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x3155E0u;
    SET_GPR_U32(ctx, 31, 0x3155E8u);
    ctx->pc = 0x3155E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155E0u;
    // 0x3155e4: 0x8c447618  lw          $a0, 0x7618($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x3155E0u, 0x3155E8u)) {
        return;
    }
    ctx->pc = 0x3155E8u;
label_3155e8:
    // 0x3155e8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3155e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3155ec: 0xae307030  sw          $s0, 0x7030($s1)
    ctx->pc = 0x3155ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28720), GPR_U32(ctx, 16));
label_3155f0:
    // 0x3155f0: 0x8c627034  lw          $v0, 0x7034($v1)
    ctx->pc = 0x3155f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28724)));
    // 0x3155f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3155f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3155f8: 0xac627034  sw          $v0, 0x7034($v1)
    ctx->pc = 0x3155f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28724), GPR_U32(ctx, 2));
    // 0x3155fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3155fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315608: 0x3e00008  jr          $ra
    ctx->pc = 0x315608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315608u;
        // 0x31560c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315610u;
}
