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

// Function: sub_001C3D20
// Address: 0x1c3d20 - 0x1c3d70
void sub_001C3D20_0x1c3d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3D20_0x1c3d20");
#endif

    switch (ctx->pc) {
        case 0x1c3d34u: goto label_1c3d34;
        case 0x1c3d48u: goto label_1c3d48;
        case 0x1c3d60u: goto label_1c3d60;
        default: break;
    }

    ctx->pc = 0x1c3d20u;

    // 0x1c3d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3d24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c3d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3d2c: 0xc06bbf8  jal         func_1AEFE0
    ctx->pc = 0x1C3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3D34u);
    ctx->pc = 0x1C3D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D2Cu;
    // 0x1c3d30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1C3D2Cu, 0x1C3D34u)) {
        return;
    }
    ctx->pc = 0x1C3D34u;
label_1c3d34:
    // 0x1c3d34: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x1c3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c3d38: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3D38u;
    {
        const bool branch_taken_0x1c3d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d38) {
            ctx->pc = 0x1C3D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3D38u;
            // 0x1c3d3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D64u;
            goto label_1c3d64;
        }
    }
    ctx->pc = 0x1C3D40u;
    // 0x1c3d40: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1C3D40u;
    SET_GPR_U32(ctx, 31, 0x1C3D48u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1C3D40u, 0x1C3D48u)) {
        return;
    }
    ctx->pc = 0x1C3D48u;
label_1c3d48:
    // 0x1c3d48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3D48u;
    {
        const bool branch_taken_0x1c3d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d48) {
            ctx->pc = 0x1C3D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3D48u;
            // 0x1c3d4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D64u;
            goto label_1c3d64;
        }
    }
    ctx->pc = 0x1C3D50u;
    // 0x1c3d50: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x1c3d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x1c3d54: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1c3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c3d58: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x1C3D58u;
    SET_GPR_U32(ctx, 31, 0x1C3D60u);
    ctx->pc = 0x1C3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D58u;
    // 0x1c3d5c: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x1C3D58u, 0x1C3D60u)) {
        return;
    }
    ctx->pc = 0x1C3D60u;
label_1c3d60:
    // 0x1c3d60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3d64:
    // 0x1c3d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D68u;
        // 0x1c3d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3D70u;
}
