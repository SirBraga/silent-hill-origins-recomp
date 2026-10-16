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

// Function: sub_00108720
// Address: 0x108720 - 0x108798
void sub_00108720_0x108720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108720_0x108720");
#endif

    switch (ctx->pc) {
        case 0x10875cu: goto label_10875c;
        case 0x108778u: goto label_108778;
        default: break;
    }

    ctx->pc = 0x108720u;

    // 0x108720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108724: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x108724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x108728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10872c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10872cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108730: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x108730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x108734: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x108734u;
    {
        const bool branch_taken_0x108734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108734u;
        // 0x108738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108734) {
            ctx->pc = 0x108784u;
            goto label_108784;
        }
    }
    ctx->pc = 0x10873Cu;
    // 0x10873c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x10873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x108740: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108740u;
    {
        const bool branch_taken_0x108740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108740u;
        // 0x108744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108740) {
            ctx->pc = 0x108764u;
            goto label_108764;
        }
    }
    ctx->pc = 0x108748u;
    // 0x108748: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x108748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10874c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10874Cu;
    {
        const bool branch_taken_0x10874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10874Cu;
        // 0x108750: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10874c) {
            ctx->pc = 0x108768u;
            goto label_108768;
        }
    }
    ctx->pc = 0x108754u;
    // 0x108754: 0xc0420ca  jal         func_108328
    ctx->pc = 0x108754u;
    SET_GPR_U32(ctx, 31, 0x10875Cu);
    ctx->pc = 0x108758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108754u;
    // 0x108758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108328u, 0x108754u, 0x10875Cu)) {
        return;
    }
    ctx->pc = 0x10875Cu;
label_10875c:
    // 0x10875c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10875Cu;
    {
        const bool branch_taken_0x10875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10875Cu;
        // 0x108760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10875c) {
            ctx->pc = 0x10877Cu;
            goto label_10877c;
        }
    }
    ctx->pc = 0x108764u;
label_108764:
    // 0x108764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_108768:
    // 0x108768: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108768u;
    {
        const bool branch_taken_0x108768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108768) {
            ctx->pc = 0x10877Cu;
            goto label_10877c;
        }
    }
    ctx->pc = 0x108770u;
    // 0x108770: 0xc042134  jal         func_1084D0
    ctx->pc = 0x108770u;
    SET_GPR_U32(ctx, 31, 0x108778u);
    ctx->pc = 0x108774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108770u;
    // 0x108774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1084D0u, 0x108770u, 0x108778u)) {
        return;
    }
    ctx->pc = 0x108778u;
label_108778:
    // 0x108778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10877c:
    // 0x10877c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10877Cu;
    {
        const bool branch_taken_0x10877c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10877c) {
            ctx->pc = 0x108780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10877Cu;
            // 0x108780: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108784u;
            goto label_108784;
        }
    }
    ctx->pc = 0x108784u;
label_108784:
    // 0x108784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x108784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10878c: 0x3e00008  jr          $ra
    ctx->pc = 0x10878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10878Cu;
        // 0x108790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108794u;
    // 0x108794: 0x0  nop
    ctx->pc = 0x108794u;
    // NOP
    ctx->pc = 0x108798u;
}
