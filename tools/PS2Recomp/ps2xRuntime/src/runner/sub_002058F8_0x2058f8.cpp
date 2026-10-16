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

// Function: sub_002058F8
// Address: 0x2058f8 - 0x205950
void sub_002058F8_0x2058f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002058F8_0x2058f8");
#endif

    switch (ctx->pc) {
        case 0x205910u: goto label_205910;
        case 0x205940u: goto label_205940;
        default: break;
    }

    ctx->pc = 0x2058f8u;

    // 0x2058f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2058f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2058fc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2058fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x205900: 0x24422d28  addiu       $v0, $v0, 0x2D28
    ctx->pc = 0x205900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11560));
    // 0x205904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205908: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x205908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20590c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205910:
    // 0x205910: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x205910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205914: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x205914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x205918: 0x0  nop
    ctx->pc = 0x205918u;
    // NOP
    // 0x20591c: 0x0  nop
    ctx->pc = 0x20591cu;
    // NOP
    // 0x205920: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x205920u;
    {
        const bool branch_taken_0x205920 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x205924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205920u;
        // 0x205924: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205920) {
            ctx->pc = 0x205910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205910;
        }
    }
    ctx->pc = 0x205928u;
    // 0x205928: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x205928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x20592c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x20592cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x205930: 0x24842d10  addiu       $a0, $a0, 0x2D10
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11536));
    // 0x205934: 0x24a53e98  addiu       $a1, $a1, 0x3E98
    ctx->pc = 0x205934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16024));
    // 0x205938: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x205938u;
    SET_GPR_U32(ctx, 31, 0x205940u);
    ctx->pc = 0x20593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205938u;
    // 0x20593c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x205938u, 0x205940u)) {
        return;
    }
    ctx->pc = 0x205940u;
label_205940:
    // 0x205940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205944: 0x3e00008  jr          $ra
    ctx->pc = 0x205944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205944u;
        // 0x205948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20594Cu;
    // 0x20594c: 0x0  nop
    ctx->pc = 0x20594cu;
    // NOP
    ctx->pc = 0x205950u;
}
