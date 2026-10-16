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

// Function: sub_00321D58
// Address: 0x321d58 - 0x321dc0
void sub_00321D58_0x321d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321D58_0x321d58");
#endif

    switch (ctx->pc) {
        case 0x321d88u: goto label_321d88;
        case 0x321d90u: goto label_321d90;
        case 0x321da8u: goto label_321da8;
        default: break;
    }

    ctx->pc = 0x321d58u;

    // 0x321d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321d5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321d60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x321d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x321d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321d6c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x321d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x321d70: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x321d74: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x321d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x321d78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321D78u;
    {
        const bool branch_taken_0x321d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d78) {
            ctx->pc = 0x321D88u;
            goto label_321d88;
        }
    }
    ctx->pc = 0x321D80u;
    // 0x321d80: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x321D80u;
    SET_GPR_U32(ctx, 31, 0x321D88u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x321D80u, 0x321D88u)) {
        return;
    }
    ctx->pc = 0x321D88u;
label_321d88:
    // 0x321d88: 0xc0c841c  jal         func_321070
    ctx->pc = 0x321D88u;
    SET_GPR_U32(ctx, 31, 0x321D90u);
    ctx->pc = 0x321D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D88u;
    // 0x321d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321070u, 0x321D88u, 0x321D90u)) {
        return;
    }
    ctx->pc = 0x321D90u;
label_321d90:
    // 0x321d90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321d94: 0xf  sync
    ctx->pc = 0x321d94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x321d98: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321D98u;
    {
        const bool branch_taken_0x321d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D98u;
        // 0x321d9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d98) {
            ctx->pc = 0x321DACu;
            goto label_321dac;
        }
    }
    ctx->pc = 0x321DA0u;
    // 0x321da0: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x321DA0u;
    SET_GPR_U32(ctx, 31, 0x321DA8u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x321DA0u, 0x321DA8u)) {
        return;
    }
    ctx->pc = 0x321DA8u;
label_321da8:
    // 0x321da8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x321da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321dac:
    // 0x321dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x321dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321db0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321db8: 0x3e00008  jr          $ra
    ctx->pc = 0x321DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DB8u;
        // 0x321dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321DC0u;
}
