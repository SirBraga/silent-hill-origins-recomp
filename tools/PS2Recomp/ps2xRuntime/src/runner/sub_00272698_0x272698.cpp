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

// Function: sub_00272698
// Address: 0x272698 - 0x2726b8
void sub_00272698_0x272698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272698_0x272698");
#endif

    ctx->pc = 0x272698u;

    // 0x272698: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x272698u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x27269c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x27269cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2726a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2726a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2726a4: 0x3c048010  lui         $a0, 0x8010
    ctx->pc = 0x2726a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32784 << 16));
    // 0x2726a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2726a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2726ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2726acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2726b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2726B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2726B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726B0u;
        // 0x2726b4: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2726B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2726B8u;
}
