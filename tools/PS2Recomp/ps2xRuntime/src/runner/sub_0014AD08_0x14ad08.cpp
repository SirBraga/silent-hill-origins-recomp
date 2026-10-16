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

// Function: sub_0014AD08
// Address: 0x14ad08 - 0x14ad58
void sub_0014AD08_0x14ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AD08_0x14ad08");
#endif

    switch (ctx->pc) {
        case 0x14ad24u: goto label_14ad24;
        case 0x14ad30u: goto label_14ad30;
        default: break;
    }

    ctx->pc = 0x14ad08u;

    // 0x14ad08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ad0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14ad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ad10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ad10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ad14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ad14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ad1c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x14AD1Cu;
    SET_GPR_U32(ctx, 31, 0x14AD24u);
    ctx->pc = 0x14AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD1Cu;
    // 0x14ad20: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x14AD1Cu, 0x14AD24u)) {
        return;
    }
    ctx->pc = 0x14AD24u;
label_14ad24:
    // 0x14ad24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ad24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad28: 0xc052b56  jal         func_14AD58
    ctx->pc = 0x14AD28u;
    SET_GPR_U32(ctx, 31, 0x14AD30u);
    ctx->pc = 0x14AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD28u;
    // 0x14ad2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14AD58u, 0x14AD28u, 0x14AD30u)) {
        return;
    }
    ctx->pc = 0x14AD30u;
label_14ad30:
    // 0x14ad30: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x14ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14ad34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ad34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad38: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x14ad38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x14ad3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ad3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14ad40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad44: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD44u;
        // 0x14ad48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AD4Cu;
    // 0x14ad4c: 0x0  nop
    ctx->pc = 0x14ad4cu;
    // NOP
    // 0x14ad50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ad54: 0x0  nop
    ctx->pc = 0x14ad54u;
    // NOP
    ctx->pc = 0x14ad58u;
}
