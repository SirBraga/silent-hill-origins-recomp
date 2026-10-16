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

// Function: sub_00201820
// Address: 0x201820 - 0x201890
void sub_00201820_0x201820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201820_0x201820");
#endif

    switch (ctx->pc) {
        case 0x201840u: goto label_201840;
        case 0x20186cu: goto label_20186c;
        default: break;
    }

    ctx->pc = 0x201820u;

    // 0x201820: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x201820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x201824: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201828: 0x8c430168  lw          $v1, 0x168($v0)
    ctx->pc = 0x201828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0168u));
    // 0x20182c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201830: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x201830u;
    {
        const bool branch_taken_0x201830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201830u;
        // 0x201834: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201830) {
            ctx->pc = 0x201884u;
            goto label_201884;
        }
    }
    ctx->pc = 0x201838u;
    // 0x201838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x201838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20183c: 0x0  nop
    ctx->pc = 0x20183cu;
    // NOP
label_201840:
    // 0x201840: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x201840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201844: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x201844u;
    {
        const bool branch_taken_0x201844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x201844) {
            ctx->pc = 0x201848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201844u;
            // 0x201848: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201874u;
            goto label_201874;
        }
    }
    ctx->pc = 0x20184Cu;
    // 0x20184c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x201850: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x201850u;
    {
        const bool branch_taken_0x201850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201850u;
        // 0x201854: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201850) {
            ctx->pc = 0x20185Cu;
            goto label_20185c;
        }
    }
    ctx->pc = 0x201858u;
    // 0x201858: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x201858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_20185c:
    // 0x20185c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x20185Cu;
    {
        const bool branch_taken_0x20185c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20185Cu;
        // 0x201860: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20185c) {
            ctx->pc = 0x201888u;
            goto label_201888;
        }
    }
    ctx->pc = 0x201864u;
    // 0x201864: 0xc080624  jal         func_201890
    ctx->pc = 0x201864u;
    SET_GPR_U32(ctx, 31, 0x20186Cu);
    ctx->pc = 0x201868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201864u;
    // 0x201868: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201890u, 0x201864u, 0x20186Cu)) {
        return;
    }
    ctx->pc = 0x20186Cu;
label_20186c:
    // 0x20186c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20186Cu;
    {
        const bool branch_taken_0x20186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20186Cu;
        // 0x201870: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20186c) {
            ctx->pc = 0x201888u;
            goto label_201888;
        }
    }
    ctx->pc = 0x201874u;
label_201874:
    // 0x201874: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x201874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201878: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x201878u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x20187c: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x20187Cu;
    {
        const bool branch_taken_0x20187c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20187Cu;
        // 0x201880: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20187c) {
            ctx->pc = 0x201840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201840;
        }
    }
    ctx->pc = 0x201884u;
label_201884:
    // 0x201884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201888:
    // 0x201888: 0x3e00008  jr          $ra
    ctx->pc = 0x201888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201888u;
        // 0x20188c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201890u;
}
