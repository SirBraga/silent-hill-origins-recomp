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

// Function: sub_00242A38
// Address: 0x242a38 - 0x242a90
void sub_00242A38_0x242a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242A38_0x242a38");
#endif

    switch (ctx->pc) {
        case 0x242a7cu: goto label_242a7c;
        default: break;
    }

    ctx->pc = 0x242a38u;

    // 0x242a38: 0x938284e0  lbu         $v0, -0x7B20($gp)
    ctx->pc = 0x242a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x242a3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242a44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x242a48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242A48u;
    {
        const bool branch_taken_0x242a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A48u;
        // 0x242a4c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a48) {
            ctx->pc = 0x242A5Cu;
            goto label_242a5c;
        }
    }
    ctx->pc = 0x242A50u;
    // 0x242a50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242a54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x242A54u;
    {
        const bool branch_taken_0x242a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A54u;
        // 0x242a58: 0x2444b5a0  addiu       $a0, $v0, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a54) {
            ctx->pc = 0x242A64u;
            goto label_242a64;
        }
    }
    ctx->pc = 0x242A5Cu;
label_242a5c:
    // 0x242a5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242a60: 0x2444b590  addiu       $a0, $v0, -0x4A70
    ctx->pc = 0x242a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
label_242a64:
    // 0x242a64: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x242a64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x242a68: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x242a68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x242a6c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x242a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x242a70: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x242a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x242a74: 0xc090a34  jal         func_2428D0
    ctx->pc = 0x242A74u;
    SET_GPR_U32(ctx, 31, 0x242A7Cu);
    ctx->pc = 0x242A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A74u;
    // 0x242a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2428D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2428D0u, 0x242A74u, 0x242A7Cu)) {
        return;
    }
    ctx->pc = 0x242A7Cu;
label_242a7c:
    // 0x242a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242a84: 0x3e00008  jr          $ra
    ctx->pc = 0x242A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A84u;
        // 0x242a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A8Cu;
    // 0x242a8c: 0x0  nop
    ctx->pc = 0x242a8cu;
    // NOP
    ctx->pc = 0x242a90u;
}
