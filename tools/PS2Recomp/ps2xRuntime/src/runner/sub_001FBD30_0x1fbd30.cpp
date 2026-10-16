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

// Function: sub_001FBD30
// Address: 0x1fbd30 - 0x1fbd80
void sub_001FBD30_0x1fbd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBD30_0x1fbd30");
#endif

    switch (ctx->pc) {
        case 0x1fbd54u: goto label_1fbd54;
        case 0x1fbd6cu: goto label_1fbd6c;
        default: break;
    }

    ctx->pc = 0x1fbd30u;

    // 0x1fbd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbd34: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fbd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fbd38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbd3c: 0x8c625510  lw          $v0, 0x5510($v1)
    ctx->pc = 0x1fbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735510u));
    // 0x1fbd40: 0x24705510  addiu       $s0, $v1, 0x5510
    ctx->pc = 0x1fbd40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21776));
    // 0x1fbd44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBD44u;
    {
        const bool branch_taken_0x1fbd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD44u;
        // 0x1fbd48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd44) {
            ctx->pc = 0x1FBD6Cu;
            goto label_1fbd6c;
        }
    }
    ctx->pc = 0x1FBD4Cu;
    // 0x1fbd4c: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FBD4Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD54u);
    ctx->pc = 0x1FB210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB210u, 0x1FBD4Cu, 0x1FBD54u)) {
        return;
    }
    ctx->pc = 0x1FBD54u;
label_1fbd54:
    // 0x1fbd54: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fbd58: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fbd58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fbd5c: 0x24a53070  addiu       $a1, $a1, 0x3070
    ctx->pc = 0x1fbd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12400));
    // 0x1fbd60: 0x24c64150  addiu       $a2, $a2, 0x4150
    ctx->pc = 0x1fbd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16720));
    // 0x1fbd64: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FBD64u;
    SET_GPR_U32(ctx, 31, 0x1FBD6Cu);
    ctx->pc = 0x1FBD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD64u;
    // 0x1fbd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FBD64u, 0x1FBD6Cu)) {
        return;
    }
    ctx->pc = 0x1FBD6Cu;
label_1fbd6c:
    // 0x1fbd6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbd6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbd74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbd78: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD78u;
        // 0x1fbd7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD80u;
}
