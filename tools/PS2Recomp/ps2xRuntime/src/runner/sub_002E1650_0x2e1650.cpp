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

// Function: sub_002E1650
// Address: 0x2e1650 - 0x2e16b0
void sub_002E1650_0x2e1650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1650_0x2e1650");
#endif

    switch (ctx->pc) {
        case 0x2e1688u: goto label_2e1688;
        default: break;
    }

    ctx->pc = 0x2e1650u;

    // 0x2e1650: 0x27829048  addiu       $v0, $gp, -0x6FB8
    ctx->pc = 0x2e1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938696));
    // 0x2e1654: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1658: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x2e1658u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x2e165c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2e165cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2e1660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1664: 0x25088108  addiu       $t0, $t0, -0x7EF8
    ctx->pc = 0x2e1664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934792));
    // 0x2e1668: 0xaf82904c  sw          $v0, -0x6FB4($gp)
    ctx->pc = 0x2e1668u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938700), GPR_U32(ctx, 2));
    // 0x2e166c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2e166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e1670: 0xaf829048  sw          $v0, -0x6FB8($gp)
    ctx->pc = 0x2e1670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938696), GPR_U32(ctx, 2));
    // 0x2e1674: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e1674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1678: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2e1678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e167c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e167cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1680: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2E1680u;
    SET_GPR_U32(ctx, 31, 0x2E1688u);
    ctx->pc = 0x2E1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1680u;
    // 0x2e1684: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2E1680u, 0x2E1688u)) {
        return;
    }
    ctx->pc = 0x2E1688u;
label_2e1688:
    // 0x2e1688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1688u;
    {
        const bool branch_taken_0x2e1688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1688u;
        // 0x2e168c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1688) {
            ctx->pc = 0x2E1698u;
            goto label_2e1698;
        }
    }
    ctx->pc = 0x2E1690u;
    // 0x2e1690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1690u;
    {
        const bool branch_taken_0x2e1690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1690u;
        // 0x2e1694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1690) {
            ctx->pc = 0x2E16A0u;
            goto label_2e16a0;
        }
    }
    ctx->pc = 0x2E1698u;
label_2e1698:
    // 0x2e1698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e169c: 0xaf838c38  sw          $v1, -0x73C8($gp)
    ctx->pc = 0x2e169cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937656), GPR_U32(ctx, 3));
label_2e16a0:
    // 0x2e16a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e16a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e16a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E16A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16A4u;
        // 0x2e16a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E16A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E16ACu;
    // 0x2e16ac: 0x0  nop
    ctx->pc = 0x2e16acu;
    // NOP
    ctx->pc = 0x2e16b0u;
}
