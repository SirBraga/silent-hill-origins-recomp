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

// Function: sub_00321DC0
// Address: 0x321dc0 - 0x321e28
void sub_00321DC0_0x321dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321DC0_0x321dc0");
#endif

    switch (ctx->pc) {
        case 0x321df0u: goto label_321df0;
        case 0x321df8u: goto label_321df8;
        case 0x321e10u: goto label_321e10;
        default: break;
    }

    ctx->pc = 0x321dc0u;

    // 0x321dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321dc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321dc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x321dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x321dcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321dd4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x321dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x321dd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x321ddc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x321ddcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x321de0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321DE0u;
    {
        const bool branch_taken_0x321de0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321de0) {
            ctx->pc = 0x321DF0u;
            goto label_321df0;
        }
    }
    ctx->pc = 0x321DE8u;
    // 0x321de8: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x321DE8u;
    SET_GPR_U32(ctx, 31, 0x321DF0u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x321DE8u, 0x321DF0u)) {
        return;
    }
    ctx->pc = 0x321DF0u;
label_321df0:
    // 0x321df0: 0xc0c8418  jal         func_321060
    ctx->pc = 0x321DF0u;
    SET_GPR_U32(ctx, 31, 0x321DF8u);
    ctx->pc = 0x321DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321DF0u;
    // 0x321df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321060u, 0x321DF0u, 0x321DF8u)) {
        return;
    }
    ctx->pc = 0x321DF8u;
label_321df8:
    // 0x321df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321dfc: 0xf  sync
    ctx->pc = 0x321dfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x321e00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321E00u;
    {
        const bool branch_taken_0x321e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E00u;
        // 0x321e04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e00) {
            ctx->pc = 0x321E14u;
            goto label_321e14;
        }
    }
    ctx->pc = 0x321E08u;
    // 0x321e08: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x321E08u;
    SET_GPR_U32(ctx, 31, 0x321E10u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x321E08u, 0x321E10u)) {
        return;
    }
    ctx->pc = 0x321E10u;
label_321e10:
    // 0x321e10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x321e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321e14:
    // 0x321e14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x321e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321e18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321e20: 0x3e00008  jr          $ra
    ctx->pc = 0x321E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E20u;
        // 0x321e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321E28u;
}
