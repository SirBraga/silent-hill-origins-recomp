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

// Function: sub_00106CC8
// Address: 0x106cc8 - 0x106d10
void sub_00106CC8_0x106cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106CC8_0x106cc8");
#endif

    switch (ctx->pc) {
        case 0x106ce4u: goto label_106ce4;
        case 0x106cf0u: goto label_106cf0;
        default: break;
    }

    ctx->pc = 0x106cc8u;

    // 0x106cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106ccc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x106cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106cd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x106cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x106cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106cdc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x106CDCu;
    SET_GPR_U32(ctx, 31, 0x106CE4u);
    ctx->pc = 0x106CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106CDCu;
    // 0x106ce0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x106CDCu, 0x106CE4u)) {
        return;
    }
    ctx->pc = 0x106CE4u;
label_106ce4:
    // 0x106ce4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ce8: 0xc041b44  jal         func_106D10
    ctx->pc = 0x106CE8u;
    SET_GPR_U32(ctx, 31, 0x106CF0u);
    ctx->pc = 0x106CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106CE8u;
    // 0x106cec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106D10u, 0x106CE8u, 0x106CF0u)) {
        return;
    }
    ctx->pc = 0x106CF0u;
label_106cf0:
    // 0x106cf0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x106cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x106cf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x106cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106cf8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x106cf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x106cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106d00: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x106d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d04: 0x3e00008  jr          $ra
    ctx->pc = 0x106D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D04u;
        // 0x106d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106D0Cu;
    // 0x106d0c: 0x0  nop
    ctx->pc = 0x106d0cu;
    // NOP
    ctx->pc = 0x106d10u;
}
