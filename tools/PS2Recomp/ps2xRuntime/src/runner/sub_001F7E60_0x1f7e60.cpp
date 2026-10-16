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

// Function: sub_001F7E60
// Address: 0x1f7e60 - 0x1f7eb8
void sub_001F7E60_0x1f7e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7E60_0x1f7e60");
#endif

    switch (ctx->pc) {
        case 0x1f7e78u: goto label_1f7e78;
        case 0x1f7ea8u: goto label_1f7ea8;
        default: break;
    }

    ctx->pc = 0x1f7e60u;

    // 0x1f7e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f7e64: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1f7e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1f7e68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f7e70: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7E70u;
    SET_GPR_U32(ctx, 31, 0x1F7E78u);
    ctx->pc = 0x1F7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E70u;
    // 0x1f7e74: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7E70u, 0x1F7E78u)) {
        return;
    }
    ctx->pc = 0x1F7E78u;
label_1f7e78:
    // 0x1f7e78: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1f7e78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7e7c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x1f7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1f7e80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f7e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f7e84: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f7e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7e88: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x1f7e88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x1f7e8c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1f7e8cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1f7e90: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1f7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f7e94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f7e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f7e98: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x1f7e98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x1f7e9c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1f7e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7ea0: 0xc07e048  jal         func_1F8120
    ctx->pc = 0x1F7EA0u;
    SET_GPR_U32(ctx, 31, 0x1F7EA8u);
    ctx->pc = 0x1F7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7EA0u;
    // 0x1f7ea4: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8120u, 0x1F7EA0u, 0x1F7EA8u)) {
        return;
    }
    ctx->pc = 0x1F7EA8u;
label_1f7ea8:
    // 0x1f7ea8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EACu;
        // 0x1f7eb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7EB4u;
    // 0x1f7eb4: 0x0  nop
    ctx->pc = 0x1f7eb4u;
    // NOP
    ctx->pc = 0x1f7eb8u;
}
