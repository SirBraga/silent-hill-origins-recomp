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

// Function: sub_00173B50
// Address: 0x173b50 - 0x173bb0
void sub_00173B50_0x173b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173B50_0x173b50");
#endif

    switch (ctx->pc) {
        case 0x173b64u: goto label_173b64;
        case 0x173b8cu: goto label_173b8c;
        case 0x173b9cu: goto label_173b9c;
        default: break;
    }

    ctx->pc = 0x173b50u;

    // 0x173b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173b54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173b5c: 0xc05d80c  jal         func_176030
    ctx->pc = 0x173B5Cu;
    SET_GPR_U32(ctx, 31, 0x173B64u);
    ctx->pc = 0x173B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B5Cu;
    // 0x173b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x173B5Cu, 0x173B64u)) {
        return;
    }
    ctx->pc = 0x173B64u;
label_173b64:
    // 0x173b64: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x173b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x173b68: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x173b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x173b6c: 0x24635ca8  addiu       $v1, $v1, 0x5CA8
    ctx->pc = 0x173b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23720));
    // 0x173b70: 0x24425c88  addiu       $v0, $v0, 0x5C88
    ctx->pc = 0x173b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23688));
    // 0x173b74: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x173b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173b78: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x173b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x173b7c: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x173b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x173b80: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x173b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x173b84: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x173B84u;
    SET_GPR_U32(ctx, 31, 0x173B8Cu);
    ctx->pc = 0x173B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B84u;
    // 0x173b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x173B84u, 0x173B8Cu)) {
        return;
    }
    ctx->pc = 0x173B8Cu;
label_173b8c:
    // 0x173b8c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x173b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x173b90: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x173b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x173b94: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x173B94u;
    SET_GPR_U32(ctx, 31, 0x173B9Cu);
    ctx->pc = 0x173B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B94u;
    // 0x173b98: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x173B94u, 0x173B9Cu)) {
        return;
    }
    ctx->pc = 0x173B9Cu;
label_173b9c:
    // 0x173b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ba4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x173BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BA8u;
        // 0x173bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173BB0u;
}
