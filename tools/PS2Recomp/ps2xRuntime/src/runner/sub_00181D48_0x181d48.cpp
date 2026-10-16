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

// Function: sub_00181D48
// Address: 0x181d48 - 0x181d98
void sub_00181D48_0x181d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D48_0x181d48");
#endif

    ctx->pc = 0x181d48u;

    // 0x181d48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x181d4c: 0x52ffc  dsll32      $a1, $a1, 31
    ctx->pc = 0x181d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 31));
    // 0x181d50: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x181d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x181d54: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x181d54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x181d58: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x181d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x181d5c: 0x7387a  dsrl        $a3, $a3, 1
    ctx->pc = 0x181d5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 1);
    // 0x181d60: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x181d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x181d64: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x181d64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x181d68: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x181d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x181d6c: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x181d6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x181d70: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x181d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x181d74: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x181d74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x181d78: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x181d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x181d7c: 0x949ba  dsrl        $t1, $t1, 6
    ctx->pc = 0x181d7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 6);
    // 0x181d80: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x181d80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x181d84: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x181d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x181d88: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x181d88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x181d8c: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x181d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x181d90: 0x3e00008  jr          $ra
    ctx->pc = 0x181D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D90u;
        // 0x181d94: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D98u;
}
