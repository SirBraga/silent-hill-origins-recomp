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

// Function: sub_001C3E68
// Address: 0x1c3e68 - 0x1c3ea8
void sub_001C3E68_0x1c3e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3E68_0x1c3e68");
#endif

    switch (ctx->pc) {
        case 0x1c3e68u: goto label_1c3e68;
        case 0x1c3e6cu: goto label_1c3e6c;
        case 0x1c3e70u: goto label_1c3e70;
        case 0x1c3e74u: goto label_1c3e74;
        case 0x1c3e78u: goto label_1c3e78;
        case 0x1c3e7cu: goto label_1c3e7c;
        case 0x1c3e80u: goto label_1c3e80;
        case 0x1c3e84u: goto label_1c3e84;
        case 0x1c3e88u: goto label_1c3e88;
        case 0x1c3e8cu: goto label_1c3e8c;
        case 0x1c3e90u: goto label_1c3e90;
        case 0x1c3e94u: goto label_1c3e94;
        case 0x1c3e98u: goto label_1c3e98;
        case 0x1c3e9cu: goto label_1c3e9c;
        case 0x1c3ea0u: goto label_1c3ea0;
        case 0x1c3ea4u: goto label_1c3ea4;
        default: break;
    }

    ctx->pc = 0x1c3e68u;

label_1c3e68:
    // 0x1c3e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c3e6c:
    // 0x1c3e6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c3e70:
    // 0x1c3e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c3e74:
    // 0x1c3e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3e78:
    // 0x1c3e78: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1c3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1c3e7c:
    // 0x1c3e7c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c3e7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c3e80:
    // 0x1c3e80: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c3e84:
    // 0x1c3e84: 0x60f809  jalr        $v1
label_1c3e88:
    if (ctx->pc == 0x1C3E88u) {
        ctx->pc = 0x1C3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E84u;
        // 0x1c3e88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E8Cu;
        goto label_1c3e8c;
    }
    ctx->pc = 0x1C3E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3E8Cu);
        ctx->pc = 0x1C3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E84u;
        // 0x1c3e88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E84u, 0x1C3E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3E8Cu;
label_1c3e8c:
    // 0x1c3e8c: 0xc06bc5c  jal         func_1AF170
label_1c3e90:
    if (ctx->pc == 0x1C3E90u) {
        ctx->pc = 0x1C3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E8Cu;
        // 0x1c3e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E94u;
        goto label_1c3e94;
    }
    ctx->pc = 0x1C3E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E94u);
    ctx->pc = 0x1C3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E8Cu;
    // 0x1c3e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF170u, 0x1C3E8Cu, 0x1C3E94u)) {
        return;
    }
    ctx->pc = 0x1C3E94u;
label_1c3e94:
    // 0x1c3e94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3e98:
    // 0x1c3e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3e9c:
    // 0x1c3e9c: 0x3e00008  jr          $ra
label_1c3ea0:
    if (ctx->pc == 0x1C3EA0u) {
        ctx->pc = 0x1C3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E9Cu;
        // 0x1c3ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3EA4u;
        goto label_1c3ea4;
    }
    ctx->pc = 0x1C3E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E9Cu;
        // 0x1c3ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3EA4u;
label_1c3ea4:
    // 0x1c3ea4: 0x0  nop
    ctx->pc = 0x1c3ea4u;
    // NOP
    ctx->pc = 0x1c3ea8u;
}
