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

// Function: sub_002C0EB8
// Address: 0x2c0eb8 - 0x2c0f18
void sub_002C0EB8_0x2c0eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0EB8_0x2c0eb8");
#endif

    ctx->pc = 0x2c0eb8u;

    // 0x2c0eb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0ebc: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x2c0ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2c0ec0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2c0ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c0ec4: 0xaca7007c  sw          $a3, 0x7C($a1)
    ctx->pc = 0x2c0ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 7));
    // 0x2c0ec8: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x2c0ec8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x2c0ecc: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2c0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x2c0ed0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2c0ed0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2c0ed4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x2c0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x2c0ed8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c0edc: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x2c0edcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
    // 0x2c0ee0: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2c0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2c0ee4: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x2c0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x2c0ee8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2c0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2c0eec: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x2c0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x2c0ef0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2c0ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2c0ef4: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x2c0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x2c0ef8: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x2c0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
    // 0x2c0efc: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x2c0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
    // 0x2c0f00: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x2c0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
    // 0x2c0f04: 0xaca30098  sw          $v1, 0x98($a1)
    ctx->pc = 0x2c0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 3));
    // 0x2c0f08: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2c0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2c0f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F0Cu;
        // 0x2c0f10: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F14u;
    // 0x2c0f14: 0x0  nop
    ctx->pc = 0x2c0f14u;
    // NOP
    ctx->pc = 0x2c0f18u;
}
