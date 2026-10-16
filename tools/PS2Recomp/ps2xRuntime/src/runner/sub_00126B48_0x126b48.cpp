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

// Function: sub_00126B48
// Address: 0x126b48 - 0x126b98
void sub_00126B48_0x126b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126B48_0x126b48");
#endif

    switch (ctx->pc) {
        case 0x126b6cu: goto label_126b6c;
        case 0x126b84u: goto label_126b84;
        default: break;
    }

    ctx->pc = 0x126b48u;

    // 0x126b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126b4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x126b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x126b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b58: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x126b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
    // 0x126b5c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x126B5Cu;
    {
        const bool branch_taken_0x126b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b5c) {
            ctx->pc = 0x126B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B5Cu;
            // 0x126b60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B88u;
            goto label_126b88;
        }
    }
    ctx->pc = 0x126B64u;
    // 0x126b64: 0xc041628  jal         func_1058A0
    ctx->pc = 0x126B64u;
    SET_GPR_U32(ctx, 31, 0x126B6Cu);
    ctx->pc = 0x126B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B64u;
    // 0x126b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1058A0u, 0x126B64u, 0x126B6Cu)) {
        return;
    }
    ctx->pc = 0x126B6Cu;
label_126b6c:
    // 0x126b6c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x126b70: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x126b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x126b74: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x126b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x126b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b7c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x126B7Cu;
    SET_GPR_U32(ctx, 31, 0x126B84u);
    ctx->pc = 0x126B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B7Cu;
    // 0x126b80: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x126B7Cu, 0x126B84u)) {
        return;
    }
    ctx->pc = 0x126B84u;
label_126b84:
    // 0x126b84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x126b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126b88:
    // 0x126b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x126B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B8Cu;
        // 0x126b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126B94u;
    // 0x126b94: 0x0  nop
    ctx->pc = 0x126b94u;
    // NOP
    ctx->pc = 0x126b98u;
}
