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

// Function: sub_00167468
// Address: 0x167468 - 0x1674b0
void sub_00167468_0x167468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167468_0x167468");
#endif

    switch (ctx->pc) {
        case 0x167484u: goto label_167484;
        case 0x167498u: goto label_167498;
        default: break;
    }

    ctx->pc = 0x167468u;

    // 0x167468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16746c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167474: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x167474u;
    {
        const bool branch_taken_0x167474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x167478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167474u;
        // 0x167478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167474) {
            ctx->pc = 0x16748Cu;
            goto label_16748c;
        }
    }
    ctx->pc = 0x16747Cu;
    // 0x16747c: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x16747Cu;
    SET_GPR_U32(ctx, 31, 0x167484u);
    ctx->pc = 0x167480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16747Cu;
    // 0x167480: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x16747Cu, 0x167484u)) {
        return;
    }
    ctx->pc = 0x167484u;
label_167484:
    // 0x167484: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x167484u;
    {
        const bool branch_taken_0x167484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167484u;
        // 0x167488: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167484) {
            ctx->pc = 0x16749Cu;
            goto label_16749c;
        }
    }
    ctx->pc = 0x16748Cu;
label_16748c:
    // 0x16748c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167490: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x167490u;
    SET_GPR_U32(ctx, 31, 0x167498u);
    ctx->pc = 0x167494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167490u;
    // 0x167494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x167490u, 0x167498u)) {
        return;
    }
    ctx->pc = 0x167498u;
label_167498:
    // 0x167498: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16749c:
    // 0x16749c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16749cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1674a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1674a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1674a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1674A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1674A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674A4u;
        // 0x1674a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1674A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1674ACu;
    // 0x1674ac: 0x0  nop
    ctx->pc = 0x1674acu;
    // NOP
    ctx->pc = 0x1674b0u;
}
