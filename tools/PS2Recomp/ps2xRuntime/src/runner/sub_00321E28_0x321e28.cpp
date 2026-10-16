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

// Function: sub_00321E28
// Address: 0x321e28 - 0x321e90
void sub_00321E28_0x321e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321E28_0x321e28");
#endif

    switch (ctx->pc) {
        case 0x321e58u: goto label_321e58;
        case 0x321e60u: goto label_321e60;
        case 0x321e78u: goto label_321e78;
        default: break;
    }

    ctx->pc = 0x321e28u;

    // 0x321e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321e2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321e30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x321e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x321e34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321e3c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x321e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x321e40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x321e44: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x321e44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x321e48: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321E48u;
    {
        const bool branch_taken_0x321e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e48) {
            ctx->pc = 0x321E58u;
            goto label_321e58;
        }
    }
    ctx->pc = 0x321E50u;
    // 0x321e50: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x321E50u;
    SET_GPR_U32(ctx, 31, 0x321E58u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x321E50u, 0x321E58u)) {
        return;
    }
    ctx->pc = 0x321E58u;
label_321e58:
    // 0x321e58: 0xc0c8424  jal         func_321090
    ctx->pc = 0x321E58u;
    SET_GPR_U32(ctx, 31, 0x321E60u);
    ctx->pc = 0x321E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E58u;
    // 0x321e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321090u, 0x321E58u, 0x321E60u)) {
        return;
    }
    ctx->pc = 0x321E60u;
label_321e60:
    // 0x321e60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321e64: 0xf  sync
    ctx->pc = 0x321e64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x321e68: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321E68u;
    {
        const bool branch_taken_0x321e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E68u;
        // 0x321e6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e68) {
            ctx->pc = 0x321E7Cu;
            goto label_321e7c;
        }
    }
    ctx->pc = 0x321E70u;
    // 0x321e70: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x321E70u;
    SET_GPR_U32(ctx, 31, 0x321E78u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x321E70u, 0x321E78u)) {
        return;
    }
    ctx->pc = 0x321E78u;
label_321e78:
    // 0x321e78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x321e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321e7c:
    // 0x321e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x321e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321e80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321e88: 0x3e00008  jr          $ra
    ctx->pc = 0x321E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E88u;
        // 0x321e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321E90u;
}
