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

// Function: sub_00324158
// Address: 0x324158 - 0x324198
void sub_00324158_0x324158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324158_0x324158");
#endif

    switch (ctx->pc) {
        case 0x324188u: goto label_324188;
        default: break;
    }

    ctx->pc = 0x324158u;

    // 0x324158: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x324158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32415c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x32415cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324160: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x324160u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324164: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324168: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x324168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32416c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32416cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324174: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x324174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324178: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x324178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32417c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x32417cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324180: 0xc0c8ff8  jal         func_323FE0
    ctx->pc = 0x324180u;
    SET_GPR_U32(ctx, 31, 0x324188u);
    ctx->pc = 0x324184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324180u;
    // 0x324184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323FE0u, 0x324180u, 0x324188u)) {
        return;
    }
    ctx->pc = 0x324188u;
label_324188:
    // 0x324188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32418c: 0x3e00008  jr          $ra
    ctx->pc = 0x32418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32418Cu;
        // 0x324190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32418Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324194u;
    // 0x324194: 0x0  nop
    ctx->pc = 0x324194u;
    // NOP
    ctx->pc = 0x324198u;
}
