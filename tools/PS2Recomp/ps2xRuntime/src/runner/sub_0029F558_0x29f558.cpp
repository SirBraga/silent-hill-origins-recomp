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

// Function: sub_0029F558
// Address: 0x29f558 - 0x29f5b8
void sub_0029F558_0x29f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F558_0x29f558");
#endif

    ctx->pc = 0x29f558u;

    // 0x29f558: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29F558u;
    {
        const bool branch_taken_0x29f558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x29f558) {
            ctx->pc = 0x29F5B0u;
            goto label_29f5b0;
        }
    }
    ctx->pc = 0x29F560u;
    // 0x29f560: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29f564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x29f564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f568: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F568u;
    {
        const bool branch_taken_0x29f568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F568u;
        // 0x29f56c: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f568) {
            ctx->pc = 0x29F57Cu;
            goto label_29f57c;
        }
    }
    ctx->pc = 0x29F570u;
    // 0x29f570: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29f574: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29F574u;
    {
        const bool branch_taken_0x29f574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F574u;
        // 0x29f578: 0xa0c2001a  sb          $v0, 0x1A($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f574) {
            ctx->pc = 0x29F580u;
            goto label_29f580;
        }
    }
    ctx->pc = 0x29F57Cu;
label_29f57c:
    // 0x29f57c: 0xa0c0001a  sb          $zero, 0x1A($a2)
    ctx->pc = 0x29f57cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
label_29f580:
    // 0x29f580: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29f584: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x29f584u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f588: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x29f588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x29f58c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x29f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29f590: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x29f590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x29f594: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x29f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x29f598: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x29f598u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x29f59c: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x29f59cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x29f5a0: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x29f5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x29f5a4: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x29f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x29f5a8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x29f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x29f5ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_29f5b0:
    // 0x29f5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x29F5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5B0u;
        // 0x29f5b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F5B8u;
}
