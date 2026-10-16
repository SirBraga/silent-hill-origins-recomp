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

// Function: sub_00272CD0
// Address: 0x272cd0 - 0x272cf8
void sub_00272CD0_0x272cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272CD0_0x272cd0");
#endif

    ctx->pc = 0x272cd0u;

    // 0x272cd0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x272cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x272cd4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x272cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cd8: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x272cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x272cdc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x272cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x272ce0: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x272ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x272ce4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x272ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x272ce8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x272ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272cec: 0x3e00008  jr          $ra
    ctx->pc = 0x272CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CECu;
        // 0x272cf0: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272CF4u;
    // 0x272cf4: 0x0  nop
    ctx->pc = 0x272cf4u;
    // NOP
    ctx->pc = 0x272cf8u;
}
