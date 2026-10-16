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

// Function: sub_00250138
// Address: 0x250138 - 0x2501a8
void sub_00250138_0x250138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250138_0x250138");
#endif

    ctx->pc = 0x250138u;

    // 0x250138: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x250138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25013c: 0x8c4241a0  lw          $v0, 0x41A0($v0)
    ctx->pc = 0x25013cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A0u));
    // 0x250140: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x250140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x250144: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x250144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250148: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x250148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25014c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25014Cu;
    {
        const bool branch_taken_0x25014c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x250150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25014Cu;
        // 0x250150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25014c) {
            ctx->pc = 0x250160u;
            goto label_250160;
        }
    }
    ctx->pc = 0x250154u;
    // 0x250154: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x250154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x250158: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x250158u;
    {
        const bool branch_taken_0x250158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250158) {
            ctx->pc = 0x250164u;
            goto label_250164;
        }
    }
    ctx->pc = 0x250160u;
label_250160:
    // 0x250160: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x250160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250164:
    // 0x250164: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x250164u;
    {
        const bool branch_taken_0x250164 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x250164) {
            ctx->pc = 0x2501A0u;
            goto label_2501a0;
        }
    }
    ctx->pc = 0x25016Cu;
    // 0x25016c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x250170: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x250170u;
    {
        const bool branch_taken_0x250170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250170u;
        // 0x250174: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250170) {
            ctx->pc = 0x250198u;
            goto label_250198;
        }
    }
    ctx->pc = 0x250178u;
    // 0x250178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x250178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25017c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x250180: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250180u;
    {
        const bool branch_taken_0x250180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250180) {
            ctx->pc = 0x250198u;
            goto label_250198;
        }
    }
    ctx->pc = 0x250188u;
    // 0x250188: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x250188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25018c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x25018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x250190: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x250190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x250194: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x250194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_250198:
    // 0x250198: 0x3e00008  jr          $ra
    ctx->pc = 0x250198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250198u;
        // 0x25019c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2501A0u;
label_2501a0:
    // 0x2501a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2501A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2501A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501A0u;
        // 0x2501a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2501A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2501A8u;
}
