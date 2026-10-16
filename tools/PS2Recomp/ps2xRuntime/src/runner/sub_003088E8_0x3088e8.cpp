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

// Function: sub_003088E8
// Address: 0x3088e8 - 0x308930
void sub_003088E8_0x3088e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003088E8_0x3088e8");
#endif

    switch (ctx->pc) {
        case 0x3088e8u: goto label_3088e8;
        case 0x3088ecu: goto label_3088ec;
        case 0x3088f0u: goto label_3088f0;
        case 0x3088f4u: goto label_3088f4;
        case 0x3088f8u: goto label_3088f8;
        case 0x3088fcu: goto label_3088fc;
        case 0x308900u: goto label_308900;
        case 0x308904u: goto label_308904;
        case 0x308908u: goto label_308908;
        case 0x30890cu: goto label_30890c;
        case 0x308910u: goto label_308910;
        case 0x308914u: goto label_308914;
        case 0x308918u: goto label_308918;
        case 0x30891cu: goto label_30891c;
        case 0x308920u: goto label_308920;
        case 0x308924u: goto label_308924;
        case 0x308928u: goto label_308928;
        case 0x30892cu: goto label_30892c;
        default: break;
    }

    ctx->pc = 0x3088e8u;

label_3088e8:
    // 0x3088e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3088e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3088ec:
    // 0x3088ec: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
label_3088f0:
    if (ctx->pc == 0x3088F0u) {
        ctx->pc = 0x3088F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088ECu;
        // 0x3088f0: 0x8ce80014  lw          $t0, 0x14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3088F4u;
        goto label_3088f4;
    }
    ctx->pc = 0x3088ECu;
    {
        const bool branch_taken_0x3088ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3088ec) {
            ctx->pc = 0x3088F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3088ECu;
            // 0x3088f0: 0x8ce80014  lw          $t0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3088FCu;
            goto label_3088fc;
        }
    }
    ctx->pc = 0x3088F4u;
label_3088f4:
    // 0x3088f4: 0x3e00008  jr          $ra
label_3088f8:
    if (ctx->pc == 0x3088F8u) {
        ctx->pc = 0x3088F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088F4u;
        // 0x3088f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3088FCu;
        goto label_3088fc;
    }
    ctx->pc = 0x3088F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3088F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088F4u;
        // 0x3088f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3088F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3088FCu;
label_3088fc:
    // 0x3088fc: 0x0  nop
    ctx->pc = 0x3088fcu;
    // NOP
label_308900:
    // 0x308900: 0x0  nop
    ctx->pc = 0x308900u;
    // NOP
label_308904:
    // 0x308904: 0x1100fffb  beqz        $t0, . + 4 + (-0x5 << 2)
label_308908:
    if (ctx->pc == 0x308908u) {
        ctx->pc = 0x308908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308904u;
        // 0x308908: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30890Cu;
        goto label_30890c;
    }
    ctx->pc = 0x308904u;
    {
        const bool branch_taken_0x308904 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x308908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308904u;
        // 0x308908: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308904) {
            ctx->pc = 0x3088F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3088f4;
        }
    }
    ctx->pc = 0x30890Cu;
label_30890c:
    // 0x30890c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x30890cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_308910:
    // 0x308910: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_308914:
    if (ctx->pc == 0x308914u) {
        ctx->pc = 0x308914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308910u;
        // 0x308914: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308918u;
        goto label_308918;
    }
    ctx->pc = 0x308910u;
    {
        const bool branch_taken_0x308910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308910u;
        // 0x308914: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308910) {
            ctx->pc = 0x308978u;
            return;
        }
    }
    ctx->pc = 0x308918u;
label_308918:
    // 0x308918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30891c:
    // 0x30891c: 0x24420e30  addiu       $v0, $v0, 0xE30
    ctx->pc = 0x30891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3632));
label_308920:
    // 0x308920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308924:
    // 0x308924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x308924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_308928:
    // 0x308928: 0x800008  jr          $a0
label_30892c:
    if (ctx->pc == 0x30892Cu) {
        ctx->pc = 0x308930u;
        goto label_fallthrough_0x308928;
    }
    ctx->pc = 0x308928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308928u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x308928:
    ctx->pc = 0x308930u;
}
