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

// Function: sub_002E01A8
// Address: 0x2e01a8 - 0x2e01f0
void sub_002E01A8_0x2e01a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E01A8_0x2e01a8");
#endif

    ctx->pc = 0x2e01a8u;

    // 0x2e01a8: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x2e01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2e01ac: 0x27879028  addiu       $a3, $gp, -0x6FD8
    ctx->pc = 0x2e01acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
    // 0x2e01b0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e01b4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2e01b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2e01b8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2e01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2e01bc: 0x34c6fffe  ori         $a2, $a2, 0xFFFE
    ctx->pc = 0x2e01bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65534);
    // 0x2e01c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e01c4: 0x8f839028  lw          $v1, -0x6FD8($gp)
    ctx->pc = 0x2e01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x2e01c8: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x2e01c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x2e01cc: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x2e01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x2e01d0: 0x8f839028  lw          $v1, -0x6FD8($gp)
    ctx->pc = 0x2e01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x2e01d4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2e01d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2e01d8: 0xaf859028  sw          $a1, -0x6FD8($gp)
    ctx->pc = 0x2e01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938664), GPR_U32(ctx, 5));
    // 0x2e01dc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e01e0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2e01e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2e01e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E01E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01E4u;
        // 0x2e01e8: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E01E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E01ECu;
    // 0x2e01ec: 0x0  nop
    ctx->pc = 0x2e01ecu;
    // NOP
    ctx->pc = 0x2e01f0u;
}
