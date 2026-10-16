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

// Function: sub_00242C58
// Address: 0x242c58 - 0x242cb8
void sub_00242C58_0x242c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242C58_0x242c58");
#endif

    switch (ctx->pc) {
        case 0x242ca4u: goto label_242ca4;
        default: break;
    }

    ctx->pc = 0x242c58u;

    // 0x242c58: 0x938284e0  lbu         $v0, -0x7B20($gp)
    ctx->pc = 0x242c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x242c5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242c64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x242c68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242C68u;
    {
        const bool branch_taken_0x242c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C68u;
        // 0x242c6c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c68) {
            ctx->pc = 0x242C7Cu;
            goto label_242c7c;
        }
    }
    ctx->pc = 0x242C70u;
    // 0x242c70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x242C74u;
    {
        const bool branch_taken_0x242c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C74u;
        // 0x242c78: 0x2444b5a0  addiu       $a0, $v0, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c74) {
            ctx->pc = 0x242C84u;
            goto label_242c84;
        }
    }
    ctx->pc = 0x242C7Cu;
label_242c7c:
    // 0x242c7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242c80: 0x2444b590  addiu       $a0, $v0, -0x4A70
    ctx->pc = 0x242c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
label_242c84:
    // 0x242c84: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x242c84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x242c88: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x242c88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x242c8c: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x242c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x242c90: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x242c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x242c94: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x242c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x242c98: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x242c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x242c9c: 0xc090aa4  jal         func_242A90
    ctx->pc = 0x242C9Cu;
    SET_GPR_U32(ctx, 31, 0x242CA4u);
    ctx->pc = 0x242CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C9Cu;
    // 0x242ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242A90u, 0x242C9Cu, 0x242CA4u)) {
        return;
    }
    ctx->pc = 0x242CA4u;
label_242ca4:
    // 0x242ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242cac: 0x3e00008  jr          $ra
    ctx->pc = 0x242CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CACu;
        // 0x242cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242CB4u;
    // 0x242cb4: 0x0  nop
    ctx->pc = 0x242cb4u;
    // NOP
    ctx->pc = 0x242cb8u;
}
