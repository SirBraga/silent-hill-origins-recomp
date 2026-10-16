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

// Function: sub_00217650
// Address: 0x217650 - 0x2176a8
void sub_00217650_0x217650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217650_0x217650");
#endif

    ctx->pc = 0x217650u;

    // 0x217650: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x217650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x217654: 0x8c422d34  lw          $v0, 0x2D34($v0)
    ctx->pc = 0x217654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702D34u));
    // 0x217658: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217658u;
    {
        const bool branch_taken_0x217658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217658u;
        // 0x21765c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217658) {
            ctx->pc = 0x217668u;
            goto label_217668;
        }
    }
    ctx->pc = 0x217660u;
    // 0x217660: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217660u;
    {
        const bool branch_taken_0x217660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217660u;
        // 0x217664: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217660) {
            ctx->pc = 0x21766Cu;
            goto label_21766c;
        }
    }
    ctx->pc = 0x217668u;
label_217668:
    // 0x217668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21766c:
    // 0x21766c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21766Cu;
    {
        const bool branch_taken_0x21766c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21766Cu;
        // 0x217670: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21766c) {
            ctx->pc = 0x217690u;
            goto label_217690;
        }
    }
    ctx->pc = 0x217674u;
    // 0x217674: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x217674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x217678: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x217678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21767c: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x21767cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x217680: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x217680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x217684: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x217684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x217688: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x217688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21768c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21768cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_217690:
    // 0x217690: 0x3e00008  jr          $ra
    ctx->pc = 0x217690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217698u;
    // 0x217698: 0x0  nop
    ctx->pc = 0x217698u;
    // NOP
    // 0x21769c: 0x0  nop
    ctx->pc = 0x21769cu;
    // NOP
    // 0x2176a0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2176a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2176a4: 0x0  nop
    ctx->pc = 0x2176a4u;
    // NOP
    ctx->pc = 0x2176a8u;
}
