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

// Function: sub_0021C0E0
// Address: 0x21c0e0 - 0x21c120
void sub_0021C0E0_0x21c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C0E0_0x21c0e0");
#endif

    switch (ctx->pc) {
        case 0x21c0e0u: goto label_21c0e0;
        case 0x21c0e4u: goto label_21c0e4;
        case 0x21c0e8u: goto label_21c0e8;
        case 0x21c0ecu: goto label_21c0ec;
        case 0x21c0f0u: goto label_21c0f0;
        case 0x21c0f4u: goto label_21c0f4;
        case 0x21c0f8u: goto label_21c0f8;
        case 0x21c0fcu: goto label_21c0fc;
        case 0x21c100u: goto label_21c100;
        case 0x21c104u: goto label_21c104;
        case 0x21c108u: goto label_21c108;
        case 0x21c10cu: goto label_21c10c;
        case 0x21c110u: goto label_21c110;
        case 0x21c114u: goto label_21c114;
        case 0x21c118u: goto label_21c118;
        case 0x21c11cu: goto label_21c11c;
        default: break;
    }

    ctx->pc = 0x21c0e0u;

label_21c0e0:
    // 0x21c0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21c0e4:
    // 0x21c0e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21c0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21c0e8:
    // 0x21c0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c0ec:
    // 0x21c0ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c0f0:
    // 0x21c0f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21c0f4:
    // 0x21c0f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21c0f8:
    if (ctx->pc == 0x21C0F8u) {
        ctx->pc = 0x21C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0F4u;
        // 0x21c0f8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C0FCu;
        goto label_21c0fc;
    }
    ctx->pc = 0x21C0F4u;
    {
        const bool branch_taken_0x21c0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c0f4) {
            ctx->pc = 0x21C0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C0F4u;
            // 0x21c0f8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C10Cu;
            goto label_21c10c;
        }
    }
    ctx->pc = 0x21C0FCu;
label_21c0fc:
    // 0x21c0fc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x21c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_21c100:
    // 0x21c100: 0x40f809  jalr        $v0
label_21c104:
    if (ctx->pc == 0x21C104u) {
        ctx->pc = 0x21C108u;
        goto label_21c108;
    }
    ctx->pc = 0x21C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C108u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C100u, 0x21C108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C108u;
label_21c108:
    // 0x21c108: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x21c108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_21c10c:
    // 0x21c10c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_21c110:
    // 0x21c110: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21c110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c114:
    // 0x21c114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c118:
    // 0x21c118: 0x3e00008  jr          $ra
label_21c11c:
    if (ctx->pc == 0x21C11Cu) {
        ctx->pc = 0x21C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C118u;
        // 0x21c11c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C120u;
        goto label_fallthrough_0x21c118;
    }
    ctx->pc = 0x21C118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C118u;
        // 0x21c11c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21c118:
    ctx->pc = 0x21C120u;
}
