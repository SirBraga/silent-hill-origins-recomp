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

// Function: sub_00321E90
// Address: 0x321e90 - 0x321ef8
void sub_00321E90_0x321e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321E90_0x321e90");
#endif

    switch (ctx->pc) {
        case 0x321ec0u: goto label_321ec0;
        case 0x321ec8u: goto label_321ec8;
        case 0x321ee0u: goto label_321ee0;
        default: break;
    }

    ctx->pc = 0x321e90u;

    // 0x321e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321e94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321e98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x321e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x321e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321ea4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x321ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x321ea8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x321eac: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x321eacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x321eb0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321EB0u;
    {
        const bool branch_taken_0x321eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321eb0) {
            ctx->pc = 0x321EC0u;
            goto label_321ec0;
        }
    }
    ctx->pc = 0x321EB8u;
    // 0x321eb8: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x321EB8u;
    SET_GPR_U32(ctx, 31, 0x321EC0u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x321EB8u, 0x321EC0u)) {
        return;
    }
    ctx->pc = 0x321EC0u;
label_321ec0:
    // 0x321ec0: 0xc0c8420  jal         func_321080
    ctx->pc = 0x321EC0u;
    SET_GPR_U32(ctx, 31, 0x321EC8u);
    ctx->pc = 0x321EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321EC0u;
    // 0x321ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321080u, 0x321EC0u, 0x321EC8u)) {
        return;
    }
    ctx->pc = 0x321EC8u;
label_321ec8:
    // 0x321ec8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ecc: 0xf  sync
    ctx->pc = 0x321eccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x321ed0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321ED0u;
    {
        const bool branch_taken_0x321ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321ED0u;
        // 0x321ed4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ed0) {
            ctx->pc = 0x321EE4u;
            goto label_321ee4;
        }
    }
    ctx->pc = 0x321ED8u;
    // 0x321ed8: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x321ED8u;
    SET_GPR_U32(ctx, 31, 0x321EE0u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x321ED8u, 0x321EE0u)) {
        return;
    }
    ctx->pc = 0x321EE0u;
label_321ee0:
    // 0x321ee0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x321ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321ee4:
    // 0x321ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x321ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321ee8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x321EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EF0u;
        // 0x321ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321EF8u;
}
