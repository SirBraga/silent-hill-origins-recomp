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

// Function: sub_00199EE8
// Address: 0x199ee8 - 0x199f28
void sub_00199EE8_0x199ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199EE8_0x199ee8");
#endif

    switch (ctx->pc) {
        case 0x199efcu: goto label_199efc;
        default: break;
    }

    ctx->pc = 0x199ee8u;

    // 0x199ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199eec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199ef4: 0xc076642  jal         func_1D9908
    ctx->pc = 0x199EF4u;
    SET_GPR_U32(ctx, 31, 0x199EFCu);
    ctx->pc = 0x199EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EF4u;
    // 0x199ef8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x199EF4u, 0x199EFCu)) {
        return;
    }
    ctx->pc = 0x199EFCu;
label_199efc:
    // 0x199efc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x199f00: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x199f04: 0x24638bd0  addiu       $v1, $v1, -0x7430
    ctx->pc = 0x199f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937552));
    // 0x199f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199f0c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x199f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x199f10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x199f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199f14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199f18: 0xac4406a4  sw          $a0, 0x6A4($v0)
    ctx->pc = 0x199f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1700), GPR_U32(ctx, 4));
    // 0x199f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x199F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F1Cu;
        // 0x199f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199F24u;
    // 0x199f24: 0x0  nop
    ctx->pc = 0x199f24u;
    // NOP
    ctx->pc = 0x199f28u;
}
