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

// Function: sub_002F3A30
// Address: 0x2f3a30 - 0x2f3a90
void sub_002F3A30_0x2f3a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3A30_0x2f3a30");
#endif

    switch (ctx->pc) {
        case 0x2f3a44u: goto label_2f3a44;
        case 0x2f3a54u: goto label_2f3a54;
        case 0x2f3a70u: goto label_2f3a70;
        default: break;
    }

    ctx->pc = 0x2f3a30u;

    // 0x2f3a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f3a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f3a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f3a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f3a3c: 0xc0bc816  jal         func_2F2058
    ctx->pc = 0x2F3A3Cu;
    SET_GPR_U32(ctx, 31, 0x2F3A44u);
    ctx->pc = 0x2F3A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A3Cu;
    // 0x2f3a40: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2058u, 0x2F3A3Cu, 0x2F3A44u)) {
        return;
    }
    ctx->pc = 0x2F3A44u;
label_2f3a44:
    // 0x2f3a44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3A44u;
    {
        const bool branch_taken_0x2f3a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a44) {
            ctx->pc = 0x2F3A5Cu;
            goto label_2f3a5c;
        }
    }
    ctx->pc = 0x2F3A4Cu;
    // 0x2f3a4c: 0xc0bc744  jal         func_2F1D10
    ctx->pc = 0x2F3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2F3A54u);
    ctx->pc = 0x2F3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A4Cu;
    // 0x2f3a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1D10u, 0x2F3A4Cu, 0x2F3A54u)) {
        return;
    }
    ctx->pc = 0x2F3A54u;
label_2f3a54:
    // 0x2f3a54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3A54u;
    {
        const bool branch_taken_0x2f3a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a54) {
            ctx->pc = 0x2F3A68u;
            goto label_2f3a68;
        }
    }
    ctx->pc = 0x2F3A5Cu;
label_2f3a5c:
    // 0x2f3a5c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3a60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3A60u;
    {
        const bool branch_taken_0x2f3a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A60u;
        // 0x2f3a64: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a60) {
            ctx->pc = 0x2F3A80u;
            goto label_2f3a80;
        }
    }
    ctx->pc = 0x2F3A68u;
label_2f3a68:
    // 0x2f3a68: 0xc0bc728  jal         func_2F1CA0
    ctx->pc = 0x2F3A68u;
    SET_GPR_U32(ctx, 31, 0x2F3A70u);
    ctx->pc = 0x2F3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A68u;
    // 0x2f3a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1CA0u, 0x2F3A68u, 0x2F3A70u)) {
        return;
    }
    ctx->pc = 0x2F3A70u;
label_2f3a70:
    // 0x2f3a70: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3a74: 0x3463005b  ori         $v1, $v1, 0x5B
    ctx->pc = 0x2f3a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)91);
    // 0x2f3a78: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2f3a78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x2f3a7c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f3a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a80:
    // 0x2f3a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A88u;
        // 0x2f3a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3A90u;
}
