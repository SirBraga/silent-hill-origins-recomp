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

// Function: sub_00138D58
// Address: 0x138d58 - 0x138db0
void sub_00138D58_0x138d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138D58_0x138d58");
#endif

    switch (ctx->pc) {
        case 0x138d70u: goto label_138d70;
        case 0x138d84u: goto label_138d84;
        case 0x138d90u: goto label_138d90;
        case 0x138d98u: goto label_138d98;
        default: break;
    }

    ctx->pc = 0x138d58u;

    // 0x138d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138d5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138d60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d68: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x138D68u;
    SET_GPR_U32(ctx, 31, 0x138D70u);
    ctx->pc = 0x138D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D68u;
    // 0x138d6c: 0x8e041ab0  lw          $a0, 0x1AB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x138D68u, 0x138D70u)) {
        return;
    }
    ctx->pc = 0x138D70u;
label_138d70:
    // 0x138d70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138D70u;
    {
        const bool branch_taken_0x138d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D70u;
        // 0x138d74: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d70) {
            ctx->pc = 0x138D90u;
            goto label_138d90;
        }
    }
    ctx->pc = 0x138D78u;
    // 0x138d78: 0x8e051ab0  lw          $a1, 0x1AB0($s0)
    ctx->pc = 0x138d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6832)));
    // 0x138d7c: 0xc05eeb4  jal         func_17BAD0
    ctx->pc = 0x138D7Cu;
    SET_GPR_U32(ctx, 31, 0x138D84u);
    ctx->pc = 0x138D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D7Cu;
    // 0x138d80: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAD0u, 0x138D7Cu, 0x138D84u)) {
        return;
    }
    ctx->pc = 0x138D84u;
label_138d84:
    // 0x138d84: 0x8e041ab0  lw          $a0, 0x1AB0($s0)
    ctx->pc = 0x138d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6832)));
    // 0x138d88: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x138D88u;
    SET_GPR_U32(ctx, 31, 0x138D90u);
    ctx->pc = 0x138D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D88u;
    // 0x138d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x138D88u, 0x138D90u)) {
        return;
    }
    ctx->pc = 0x138D90u;
label_138d90:
    // 0x138d90: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x138D90u;
    SET_GPR_U32(ctx, 31, 0x138D98u);
    ctx->pc = 0x138D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D90u;
    // 0x138d94: 0x8e041ab0  lw          $a0, 0x1AB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x138D90u, 0x138D98u)) {
        return;
    }
    ctx->pc = 0x138D98u;
label_138d98:
    // 0x138d98: 0xae001ab0  sw          $zero, 0x1AB0($s0)
    ctx->pc = 0x138d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6832), GPR_U32(ctx, 0));
    // 0x138d9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138da4: 0x3e00008  jr          $ra
    ctx->pc = 0x138DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DA4u;
        // 0x138da8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138DACu;
    // 0x138dac: 0x0  nop
    ctx->pc = 0x138dacu;
    // NOP
    ctx->pc = 0x138db0u;
}
