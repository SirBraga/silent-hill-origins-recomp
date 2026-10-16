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

// Function: sub_001410C0
// Address: 0x1410c0 - 0x141108
void sub_001410C0_0x1410c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001410C0_0x1410c0");
#endif

    ctx->pc = 0x1410c0u;

    // 0x1410c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1410c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1410c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1410c8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x1410c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1410cc: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1410CCu;
    {
        const bool branch_taken_0x1410cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1410D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410CCu;
        // 0x1410d0: 0x3c070034  lui         $a3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410cc) {
            ctx->pc = 0x141100u;
            goto label_141100;
        }
    }
    ctx->pc = 0x1410D4u;
    // 0x1410d4: 0x8ce58428  lw          $a1, -0x7BD8($a3)
    ctx->pc = 0x1410d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294935592)));
    // 0x1410d8: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1410d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1410dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1410DCu;
    {
        const bool branch_taken_0x1410dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410DCu;
        // 0x1410e0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410dc) {
            ctx->pc = 0x141100u;
            goto label_141100;
        }
    }
    ctx->pc = 0x1410E4u;
    // 0x1410e4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1410e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x1410e8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1410e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1410ec: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x1410ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x1410f0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1410f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1410f4: 0xace28428  sw          $v0, -0x7BD8($a3)
    ctx->pc = 0x1410f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294935592), GPR_U32(ctx, 2));
    // 0x1410f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1410f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1410fc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1410fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_141100:
    // 0x141100: 0x3e00008  jr          $ra
    ctx->pc = 0x141100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141108u;
}
