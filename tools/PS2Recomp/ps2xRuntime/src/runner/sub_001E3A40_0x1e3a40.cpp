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

// Function: sub_001E3A40
// Address: 0x1e3a40 - 0x1e3a70
void sub_001E3A40_0x1e3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3A40_0x1e3a40");
#endif

    switch (ctx->pc) {
        case 0x1e3a40u: goto label_1e3a40;
        case 0x1e3a44u: goto label_1e3a44;
        case 0x1e3a48u: goto label_1e3a48;
        case 0x1e3a4cu: goto label_1e3a4c;
        case 0x1e3a50u: goto label_1e3a50;
        case 0x1e3a54u: goto label_1e3a54;
        case 0x1e3a58u: goto label_1e3a58;
        case 0x1e3a5cu: goto label_1e3a5c;
        case 0x1e3a60u: goto label_1e3a60;
        case 0x1e3a64u: goto label_1e3a64;
        case 0x1e3a68u: goto label_1e3a68;
        case 0x1e3a6cu: goto label_1e3a6c;
        default: break;
    }

    ctx->pc = 0x1e3a40u;

label_1e3a40:
    // 0x1e3a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e3a44:
    // 0x1e3a44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e3a48:
    // 0x1e3a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3a4c:
    // 0x1e3a4c: 0xc0932d4  jal         func_24CB50
label_1e3a50:
    if (ctx->pc == 0x1E3A50u) {
        ctx->pc = 0x1E3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A4Cu;
        // 0x1e3a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A54u;
        goto label_1e3a54;
    }
    ctx->pc = 0x1E3A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3A54u);
    ctx->pc = 0x1E3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A4Cu;
    // 0x1e3a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1E3A4Cu, 0x1E3A54u)) {
        return;
    }
    ctx->pc = 0x1E3A54u;
label_1e3a54:
    // 0x1e3a54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e3a58:
    // 0x1e3a58: 0x60f809  jalr        $v1
label_1e3a5c:
    if (ctx->pc == 0x1E3A5Cu) {
        ctx->pc = 0x1E3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A58u;
        // 0x1e3a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A60u;
        goto label_1e3a60;
    }
    ctx->pc = 0x1E3A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3A60u);
        ctx->pc = 0x1E3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A58u;
        // 0x1e3a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A58u, 0x1E3A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3A60u;
label_1e3a60:
    // 0x1e3a60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a64:
    // 0x1e3a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3a68:
    // 0x1e3a68: 0x3e00008  jr          $ra
label_1e3a6c:
    if (ctx->pc == 0x1E3A6Cu) {
        ctx->pc = 0x1E3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A68u;
        // 0x1e3a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A70u;
        goto label_fallthrough_0x1e3a68;
    }
    ctx->pc = 0x1E3A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A68u;
        // 0x1e3a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3a68:
    ctx->pc = 0x1E3A70u;
}
