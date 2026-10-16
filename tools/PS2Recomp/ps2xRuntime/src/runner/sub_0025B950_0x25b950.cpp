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

// Function: sub_0025B950
// Address: 0x25b950 - 0x25b988
void sub_0025B950_0x25b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B950_0x25b950");
#endif

    switch (ctx->pc) {
        case 0x25b964u: goto label_25b964;
        case 0x25b974u: goto label_25b974;
        default: break;
    }

    ctx->pc = 0x25b950u;

    // 0x25b950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25b954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25b958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b95c: 0xc096dde  jal         func_25B778
    ctx->pc = 0x25B95Cu;
    SET_GPR_U32(ctx, 31, 0x25B964u);
    ctx->pc = 0x25B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B95Cu;
    // 0x25b960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B778u, 0x25B95Cu, 0x25B964u)) {
        return;
    }
    ctx->pc = 0x25B964u;
label_25b964:
    // 0x25b964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B964u;
    {
        const bool branch_taken_0x25b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B964u;
        // 0x25b968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b964) {
            ctx->pc = 0x25B978u;
            goto label_25b978;
        }
    }
    ctx->pc = 0x25B96Cu;
    // 0x25b96c: 0xc096e28  jal         func_25B8A0
    ctx->pc = 0x25B96Cu;
    SET_GPR_U32(ctx, 31, 0x25B974u);
    ctx->pc = 0x25B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B96Cu;
    // 0x25b970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B8A0u, 0x25B96Cu, 0x25B974u)) {
        return;
    }
    ctx->pc = 0x25B974u;
label_25b974:
    // 0x25b974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b978:
    // 0x25b978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b97c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25b97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b980: 0x3e00008  jr          $ra
    ctx->pc = 0x25B980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B980u;
        // 0x25b984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B988u;
}
