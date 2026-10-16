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

// Function: sub_001903E8
// Address: 0x1903e8 - 0x190440
void sub_001903E8_0x1903e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001903E8_0x1903e8");
#endif

    switch (ctx->pc) {
        case 0x190408u: goto label_190408;
        case 0x19042cu: goto label_19042c;
        default: break;
    }

    ctx->pc = 0x1903e8u;

    // 0x1903e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1903e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1903ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1903ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1903f0: 0x8c8600b4  lw          $a2, 0xB4($a0)
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1903f4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1903F4u;
    {
        const bool branch_taken_0x1903f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903F4u;
        // 0x1903f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903f4) {
            ctx->pc = 0x190424u;
            goto label_190424;
        }
    }
    ctx->pc = 0x1903FCu;
    // 0x1903fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1903FCu;
    {
        const bool branch_taken_0x1903fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903FCu;
        // 0x190400: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903fc) {
            ctx->pc = 0x190414u;
            goto label_190414;
        }
    }
    ctx->pc = 0x190404u;
    // 0x190404: 0x0  nop
    ctx->pc = 0x190404u;
    // NOP
label_190408:
    // 0x190408: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x190408u;
    {
        const bool branch_taken_0x190408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190408u;
        // 0x19040c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190408) {
            ctx->pc = 0x190424u;
            goto label_190424;
        }
    }
    ctx->pc = 0x190410u;
    // 0x190410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190414:
    // 0x190414: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x190414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x190418: 0x54a2fffb  bnel        $a1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x190418u;
    {
        const bool branch_taken_0x190418 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x190418) {
            ctx->pc = 0x19041Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190418u;
            // 0x19041c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190408;
        }
    }
    ctx->pc = 0x190420u;
    // 0x190420: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x190420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_190424:
    // 0x190424: 0xc0635c0  jal         func_18D700
    ctx->pc = 0x190424u;
    SET_GPR_U32(ctx, 31, 0x19042Cu);
    ctx->pc = 0x190428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190424u;
    // 0x190428: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D700u, 0x190424u, 0x19042Cu)) {
        return;
    }
    ctx->pc = 0x19042Cu;
label_19042c:
    // 0x19042c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19042cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190430: 0x3e00008  jr          $ra
    ctx->pc = 0x190430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190430u;
        // 0x190434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190438u;
    // 0x190438: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x190438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19043c: 0x0  nop
    ctx->pc = 0x19043cu;
    // NOP
    ctx->pc = 0x190440u;
}
