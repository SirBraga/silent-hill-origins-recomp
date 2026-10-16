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

// Function: sub_0029F5B8
// Address: 0x29f5b8 - 0x29f618
void sub_0029F5B8_0x29f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F5B8_0x29f5b8");
#endif

    ctx->pc = 0x29f5b8u;

    // 0x29f5b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x29f5b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5bc: 0x10a70014  beq         $a1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x29F5BCu;
    {
        const bool branch_taken_0x29f5bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x29f5bc) {
            ctx->pc = 0x29F610u;
            goto label_29f610;
        }
    }
    ctx->pc = 0x29F5C4u;
    // 0x29f5c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29f5c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x29f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f5cc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F5CCu;
    {
        const bool branch_taken_0x29f5cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5CCu;
        // 0x29f5d0: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5cc) {
            ctx->pc = 0x29F5E0u;
            goto label_29f5e0;
        }
    }
    ctx->pc = 0x29F5D4u;
    // 0x29f5d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29f5d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29F5D8u;
    {
        const bool branch_taken_0x29f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5D8u;
        // 0x29f5dc: 0xa0c2001a  sb          $v0, 0x1A($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5d8) {
            ctx->pc = 0x29F5E4u;
            goto label_29f5e4;
        }
    }
    ctx->pc = 0x29F5E0u;
label_29f5e0:
    // 0x29f5e0: 0xa0c0001a  sb          $zero, 0x1A($a2)
    ctx->pc = 0x29f5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
label_29f5e4:
    // 0x29f5e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29f5e8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x29f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x29f5ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29f5f0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x29f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x29f5f4: 0xa4c20018  sh          $v0, 0x18($a2)
    ctx->pc = 0x29f5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x29f5f8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x29f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x29f5fc: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x29f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
    // 0x29f600: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x29f600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x29f604: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x29f604u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f608: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x29f608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x29f60c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x29f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_29f610:
    // 0x29f610: 0x3e00008  jr          $ra
    ctx->pc = 0x29F610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F610u;
        // 0x29f614: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F618u;
}
