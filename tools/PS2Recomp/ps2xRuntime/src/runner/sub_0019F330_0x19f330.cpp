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

// Function: sub_0019F330
// Address: 0x19f330 - 0x19f368
void sub_0019F330_0x19f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F330_0x19f330");
#endif

    switch (ctx->pc) {
        case 0x19f358u: goto label_19f358;
        default: break;
    }

    ctx->pc = 0x19f330u;

    // 0x19f330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f334: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19f334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f338: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F338u;
    {
        const bool branch_taken_0x19f338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F338u;
        // 0x19f33c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f338) {
            ctx->pc = 0x19F358u;
            goto label_19f358;
        }
    }
    ctx->pc = 0x19F340u;
    // 0x19f340: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x19f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x19f344: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19f344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x19f348: 0xac439088  sw          $v1, -0x6F78($v0)
    ctx->pc = 0x19f348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x339088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339088u, _value); } while (0);
    // 0x19f34c: 0x24a5f138  addiu       $a1, $a1, -0xEC8
    ctx->pc = 0x19f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963512));
    // 0x19f350: 0xc08ab16  jal         func_22AC58
    ctx->pc = 0x19F350u;
    SET_GPR_U32(ctx, 31, 0x19F358u);
    ctx->pc = 0x19F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F350u;
    // 0x19f354: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x19F350u, 0x19F358u)) {
        return;
    }
    ctx->pc = 0x19F358u;
label_19f358:
    // 0x19f358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f35c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F35Cu;
        // 0x19f360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F364u;
    // 0x19f364: 0x0  nop
    ctx->pc = 0x19f364u;
    // NOP
    ctx->pc = 0x19f368u;
}
