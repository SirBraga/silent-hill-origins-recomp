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

// Function: sub_001016E0
// Address: 0x1016e0 - 0x101718
void sub_001016E0_0x1016e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001016E0_0x1016e0");
#endif

    switch (ctx->pc) {
        case 0x101704u: goto label_101704;
        default: break;
    }

    ctx->pc = 0x1016e0u;

    // 0x1016e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1016e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1016e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1016e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1016e8: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1016E8u;
    {
        const bool branch_taken_0x1016e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1016ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016E8u;
        // 0x1016ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016e8) {
            ctx->pc = 0x10170Cu;
            goto label_10170c;
        }
    }
    ctx->pc = 0x1016F0u;
    // 0x1016f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1016F0u;
    {
        const bool branch_taken_0x1016f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1016F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016F0u;
        // 0x1016f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016f0) {
            ctx->pc = 0x101710u;
            goto label_101710;
        }
    }
    ctx->pc = 0x1016F8u;
    // 0x1016f8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1016f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1016fc: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1016FCu;
    SET_GPR_U32(ctx, 31, 0x101704u);
    ctx->pc = 0x101700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016FCu;
    // 0x101700: 0x24849578  addiu       $a0, $a0, -0x6A88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1016FCu, 0x101704u)) {
        return;
    }
    ctx->pc = 0x101704u;
label_101704:
    // 0x101704: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x101704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x101708: 0xac624204  sw          $v0, 0x4204($v1)
    ctx->pc = 0x101708u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4204u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4204u, _value); } while (0);
label_10170c:
    // 0x10170c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101710:
    // 0x101710: 0x3e00008  jr          $ra
    ctx->pc = 0x101710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101710u;
        // 0x101714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101718u;
}
