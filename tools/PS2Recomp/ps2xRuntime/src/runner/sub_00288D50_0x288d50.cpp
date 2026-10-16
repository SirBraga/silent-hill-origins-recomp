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

// Function: sub_00288D50
// Address: 0x288d50 - 0x288da8
void sub_00288D50_0x288d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288D50_0x288d50");
#endif

    switch (ctx->pc) {
        case 0x288d74u: goto label_288d74;
        case 0x288d80u: goto label_288d80;
        default: break;
    }

    ctx->pc = 0x288d50u;

    // 0x288d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288d54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x288d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x288d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288d5c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x288d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x288d60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288d64: 0x261063b0  addiu       $s0, $s0, 0x63B0
    ctx->pc = 0x288d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
    // 0x288d68: 0x8e110528  lw          $s1, 0x528($s0)
    ctx->pc = 0x288d68u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x7068D8u));
    // 0x288d6c: 0xc0a22a6  jal         func_288A98
    ctx->pc = 0x288D6Cu;
    SET_GPR_U32(ctx, 31, 0x288D74u);
    ctx->pc = 0x288D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D6Cu;
    // 0x288d70: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x288D6Cu, 0x288D74u)) {
        return;
    }
    ctx->pc = 0x288D74u;
label_288d74:
    // 0x288d74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x288d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288d78: 0xc09289a  jal         func_24A268
    ctx->pc = 0x288D78u;
    SET_GPR_U32(ctx, 31, 0x288D80u);
    ctx->pc = 0x288D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D78u;
    // 0x288d7c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A268u, 0x288D78u, 0x288D80u)) {
        return;
    }
    ctx->pc = 0x288D80u;
label_288d80:
    // 0x288d80: 0xae310018  sw          $s1, 0x18($s1)
    ctx->pc = 0x288d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 17));
    // 0x288d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288d88: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x288d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x288d8c: 0x8e020528  lw          $v0, 0x528($s0)
    ctx->pc = 0x288d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x288d90: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x288d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x288d94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x288d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288d98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288da0: 0x3e00008  jr          $ra
    ctx->pc = 0x288DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DA0u;
        // 0x288da4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288DA8u;
}
