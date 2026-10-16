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

// Function: sub_0017BAD0
// Address: 0x17bad0 - 0x17bb18
void sub_0017BAD0_0x17bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BAD0_0x17bad0");
#endif

    switch (ctx->pc) {
        case 0x17bae8u: goto label_17bae8;
        case 0x17bb00u: goto label_17bb00;
        default: break;
    }

    ctx->pc = 0x17bad0u;

    // 0x17bad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17bad8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17bad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17badc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17badcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bae0: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x17BAE0u;
    SET_GPR_U32(ctx, 31, 0x17BAE8u);
    ctx->pc = 0x17BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAE0u;
    // 0x17bae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x17BAE0u, 0x17BAE8u)) {
        return;
    }
    ctx->pc = 0x17BAE8u;
label_17bae8:
    // 0x17bae8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BAE8u;
    {
        const bool branch_taken_0x17bae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAE8u;
        // 0x17baec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bae8) {
            ctx->pc = 0x17BAF8u;
            goto label_17baf8;
        }
    }
    ctx->pc = 0x17BAF0u;
    // 0x17baf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17BAF0u;
    {
        const bool branch_taken_0x17baf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAF0u;
        // 0x17baf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17baf0) {
            ctx->pc = 0x17BB00u;
            goto label_17bb00;
        }
    }
    ctx->pc = 0x17BAF8u;
label_17baf8:
    // 0x17baf8: 0xc097a26  jal         func_25E898
    ctx->pc = 0x17BAF8u;
    SET_GPR_U32(ctx, 31, 0x17BB00u);
    ctx->pc = 0x17BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAF8u;
    // 0x17bafc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x17BAF8u, 0x17BB00u)) {
        return;
    }
    ctx->pc = 0x17BB00u;
label_17bb00:
    // 0x17bb00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17bb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bb04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb08: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB08u;
        // 0x17bb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB10u;
    // 0x17bb10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17bb14: 0x0  nop
    ctx->pc = 0x17bb14u;
    // NOP
    ctx->pc = 0x17bb18u;
}
