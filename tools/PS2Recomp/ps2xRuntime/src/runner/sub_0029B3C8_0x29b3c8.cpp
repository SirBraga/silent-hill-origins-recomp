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

// Function: sub_0029B3C8
// Address: 0x29b3c8 - 0x29b448
void sub_0029B3C8_0x29b3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B3C8_0x29b3c8");
#endif

    ctx->pc = 0x29b3c8u;

    // 0x29b3c8: 0x3c0a0068  lui         $t2, 0x68
    ctx->pc = 0x29b3c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)104 << 16));
    // 0x29b3cc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x29b3ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3d0: 0x8d421830  lw          $v0, 0x1830($t2)
    ctx->pc = 0x29b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x681830u));
    // 0x29b3d4: 0x1122001a  beq         $t1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29B3D4u;
    {
        const bool branch_taken_0x29b3d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x29B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3D4u;
        // 0x29b3d8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3d4) {
            ctx->pc = 0x29B440u;
            goto label_29b440;
        }
    }
    ctx->pc = 0x29B3DCu;
    // 0x29b3dc: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B3DCu;
    {
        const bool branch_taken_0x29b3dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3DCu;
        // 0x29b3e0: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3dc) {
            ctx->pc = 0x29B3FCu;
            goto label_29b3fc;
        }
    }
    ctx->pc = 0x29B3E4u;
    // 0x29b3e4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x29b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x29b3e8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x29b3ec: 0x24632af0  addiu       $v1, $v1, 0x2AF0
    ctx->pc = 0x29b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10992));
    // 0x29b3f0: 0x24422bb0  addiu       $v0, $v0, 0x2BB0
    ctx->pc = 0x29b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11184));
    // 0x29b3f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B3F4u;
    {
        const bool branch_taken_0x29b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3F4u;
        // 0x29b3f8: 0x24842b50  addiu       $a0, $a0, 0x2B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3f4) {
            ctx->pc = 0x29B414u;
            goto label_29b414;
        }
    }
    ctx->pc = 0x29B3FCu;
label_29b3fc:
    // 0x29b3fc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x29b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x29b400: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x29b404: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x29b408: 0x246329e8  addiu       $v1, $v1, 0x29E8
    ctx->pc = 0x29b408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10728));
    // 0x29b40c: 0x24422a98  addiu       $v0, $v0, 0x2A98
    ctx->pc = 0x29b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10904));
    // 0x29b410: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x29b410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
label_29b414:
    // 0x29b414: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x29b414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x29b418: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x29b418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x29b41c: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x29b41cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x29b420: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x29b420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x29b424: 0xacc318c8  sw          $v1, 0x18C8($a2)
    ctx->pc = 0x29b424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6818C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6818C8u, _value); } while (0);
    // 0x29b428: 0xace41840  sw          $a0, 0x1840($a3)
    ctx->pc = 0x29b428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x681840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x681840u, _value); } while (0);
    // 0x29b42c: 0xaca21908  sw          $v0, 0x1908($a1)
    ctx->pc = 0x29b42cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x681908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x681908u, _value); } while (0);
    // 0x29b430: 0xad021880  sw          $v0, 0x1880($t0)
    ctx->pc = 0x29b430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x681880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x681880u, _value); } while (0);
    // 0x29b434: 0x8d421830  lw          $v0, 0x1830($t2)
    ctx->pc = 0x29b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6192)));
    // 0x29b438: 0x3e00008  jr          $ra
    ctx->pc = 0x29B438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B438u;
        // 0x29b43c: 0xad491830  sw          $t1, 0x1830($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 6192), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B440u;
label_29b440:
    // 0x29b440: 0x3e00008  jr          $ra
    ctx->pc = 0x29B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B448u;
}
