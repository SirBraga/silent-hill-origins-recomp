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

// Function: sub_002F1B98
// Address: 0x2f1b98 - 0x2f1c40
void sub_002F1B98_0x2f1b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1B98_0x2f1b98");
#endif

    switch (ctx->pc) {
        case 0x2f1ba8u: goto label_2f1ba8;
        case 0x2f1bc4u: goto label_2f1bc4;
        default: break;
    }

    ctx->pc = 0x2f1b98u;

    // 0x2f1b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1b9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1ba0: 0xc0bc3d8  jal         func_2F0F60
    ctx->pc = 0x2F1BA0u;
    SET_GPR_U32(ctx, 31, 0x2F1BA8u);
    ctx->pc = 0x2F0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0F60u, 0x2F1BA0u, 0x2F1BA8u)) {
        return;
    }
    ctx->pc = 0x2F1BA8u;
label_2f1ba8:
    // 0x2f1ba8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f1ba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1BACu;
    {
        const bool branch_taken_0x2f1bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BACu;
        // 0x2f1bb0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1bac) {
            ctx->pc = 0x2F1BC8u;
            goto label_2f1bc8;
        }
    }
    ctx->pc = 0x2F1BB4u;
    // 0x2f1bb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f1bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bbc: 0xc0bc6a8  jal         func_2F1AA0
    ctx->pc = 0x2F1BBCu;
    SET_GPR_U32(ctx, 31, 0x2F1BC4u);
    ctx->pc = 0x2F1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BBCu;
    // 0x2f1bc0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1AA0u, 0x2F1BBCu, 0x2F1BC4u)) {
        return;
    }
    ctx->pc = 0x2F1BC4u;
label_2f1bc4:
    // 0x2f1bc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1bc8:
    // 0x2f1bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BCCu;
        // 0x2f1bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1BD4u;
    // 0x2f1bd4: 0x0  nop
    ctx->pc = 0x2f1bd4u;
    // NOP
    // 0x2f1bd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1bdc: 0x0  nop
    ctx->pc = 0x2f1bdcu;
    // NOP
    // 0x2f1be0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1be4: 0x0  nop
    ctx->pc = 0x2f1be4u;
    // NOP
    // 0x2f1be8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1bec: 0x0  nop
    ctx->pc = 0x2f1becu;
    // NOP
    // 0x2f1bf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1bf4: 0x0  nop
    ctx->pc = 0x2f1bf4u;
    // NOP
    // 0x2f1bf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1bfc: 0x0  nop
    ctx->pc = 0x2f1bfcu;
    // NOP
    // 0x2f1c00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1c04: 0x0  nop
    ctx->pc = 0x2f1c04u;
    // NOP
    // 0x2f1c08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1c0c: 0x0  nop
    ctx->pc = 0x2f1c0cu;
    // NOP
    // 0x2f1c10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1c14: 0x0  nop
    ctx->pc = 0x2f1c14u;
    // NOP
    // 0x2f1c18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1c1c: 0x0  nop
    ctx->pc = 0x2f1c1cu;
    // NOP
    // 0x2f1c20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1c24: 0x0  nop
    ctx->pc = 0x2f1c24u;
    // NOP
    // 0x2f1c28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1c2c: 0x0  nop
    ctx->pc = 0x2f1c2cu;
    // NOP
    // 0x2f1c30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1c34: 0x0  nop
    ctx->pc = 0x2f1c34u;
    // NOP
    // 0x2f1c38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1c3c: 0x0  nop
    ctx->pc = 0x2f1c3cu;
    // NOP
    ctx->pc = 0x2f1c40u;
}
