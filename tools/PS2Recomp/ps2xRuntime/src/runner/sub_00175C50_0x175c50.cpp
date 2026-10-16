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

// Function: sub_00175C50
// Address: 0x175c50 - 0x175cb0
void sub_00175C50_0x175c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175C50_0x175c50");
#endif

    switch (ctx->pc) {
        case 0x175c64u: goto label_175c64;
        case 0x175c8cu: goto label_175c8c;
        case 0x175c9cu: goto label_175c9c;
        default: break;
    }

    ctx->pc = 0x175c50u;

    // 0x175c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175c54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175c5c: 0xc05d80c  jal         func_176030
    ctx->pc = 0x175C5Cu;
    SET_GPR_U32(ctx, 31, 0x175C64u);
    ctx->pc = 0x175C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C5Cu;
    // 0x175c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x175C5Cu, 0x175C64u)) {
        return;
    }
    ctx->pc = 0x175C64u;
label_175c64:
    // 0x175c64: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x175c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x175c68: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x175c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x175c6c: 0x24636238  addiu       $v1, $v1, 0x6238
    ctx->pc = 0x175c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25144));
    // 0x175c70: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x175c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x175c74: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x175c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x175c78: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x175c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x175c7c: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x175c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x175c80: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x175c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x175c84: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x175C84u;
    SET_GPR_U32(ctx, 31, 0x175C8Cu);
    ctx->pc = 0x175C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C84u;
    // 0x175c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x175C84u, 0x175C8Cu)) {
        return;
    }
    ctx->pc = 0x175C8Cu;
label_175c8c:
    // 0x175c8c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x175c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x175c90: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x175c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x175c94: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x175C94u;
    SET_GPR_U32(ctx, 31, 0x175C9Cu);
    ctx->pc = 0x175C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C94u;
    // 0x175c98: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x175C94u, 0x175C9Cu)) {
        return;
    }
    ctx->pc = 0x175C9Cu;
label_175c9c:
    // 0x175c9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175ca4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x175CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA8u;
        // 0x175cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175CB0u;
}
