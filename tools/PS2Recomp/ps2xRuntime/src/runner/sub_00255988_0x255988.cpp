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

// Function: sub_00255988
// Address: 0x255988 - 0x2559d0
void sub_00255988_0x255988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255988_0x255988");
#endif

    ctx->pc = 0x255988u;

    // 0x255988: 0x8f8385b8  lw          $v1, -0x7A48($gp)
    ctx->pc = 0x255988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935992)));
    // 0x25598c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25598cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255990: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x255990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x255994: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x255994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x255998: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x255998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25599c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25599cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2559a0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2559a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2559a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2559a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2559a8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2559a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2559ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2559acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2559b0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2559b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2559b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2559B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2559B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559B4u;
        // 0x2559b8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2559B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2559BCu;
    // 0x2559bc: 0x0  nop
    ctx->pc = 0x2559bcu;
    // NOP
    // 0x2559c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2559c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2559c4: 0x0  nop
    ctx->pc = 0x2559c4u;
    // NOP
    // 0x2559c8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2559c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2559cc: 0x0  nop
    ctx->pc = 0x2559ccu;
    // NOP
    ctx->pc = 0x2559d0u;
}
