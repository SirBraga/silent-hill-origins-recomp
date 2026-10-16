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

// Function: sub_0020D9F8
// Address: 0x20d9f8 - 0x20da68
void sub_0020D9F8_0x20d9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D9F8_0x20d9f8");
#endif

    ctx->pc = 0x20d9f8u;

    // 0x20d9f8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x20d9fc: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x20da00: 0x2442da68  addiu       $v0, $v0, -0x2598
    ctx->pc = 0x20da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957672));
    // 0x20da04: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x20da04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x20da08: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x20da08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x20da0c: 0x3c070021  lui         $a3, 0x21
    ctx->pc = 0x20da0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33 << 16));
    // 0x20da10: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x20da10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x20da14: 0x2463dac0  addiu       $v1, $v1, -0x2540
    ctx->pc = 0x20da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957760));
    // 0x20da18: 0x24a5da98  addiu       $a1, $a1, -0x2568
    ctx->pc = 0x20da18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957720));
    // 0x20da1c: 0x24c6db38  addiu       $a2, $a2, -0x24C8
    ctx->pc = 0x20da1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957880));
    // 0x20da20: 0x24e7dc50  addiu       $a3, $a3, -0x23B0
    ctx->pc = 0x20da20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958160));
    // 0x20da24: 0x25084020  addiu       $t0, $t0, 0x4020
    ctx->pc = 0x20da24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16416));
    // 0x20da28: 0x2409007b  addiu       $t1, $zero, 0x7B
    ctx->pc = 0x20da28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x20da2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20da30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20da30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da34: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20da34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x20da38: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x20da38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x20da3c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x20da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x20da40: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x20da40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x20da44: 0xac880078  sw          $t0, 0x78($a0)
    ctx->pc = 0x20da44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 8));
    // 0x20da48: 0xac89007c  sw          $t1, 0x7C($a0)
    ctx->pc = 0x20da48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 9));
    // 0x20da4c: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x20da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x20da50: 0xfc800070  sd          $zero, 0x70($a0)
    ctx->pc = 0x20da50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 0));
    // 0x20da54: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x20da54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x20da58: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x20da58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x20da5c: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x20da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x20da60: 0x3e00008  jr          $ra
    ctx->pc = 0x20DA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA60u;
        // 0x20da64: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA68u;
}
