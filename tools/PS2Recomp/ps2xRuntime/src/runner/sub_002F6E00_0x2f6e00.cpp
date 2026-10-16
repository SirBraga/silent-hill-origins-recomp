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

// Function: sub_002F6E00
// Address: 0x2f6e00 - 0x2f6e48
void sub_002F6E00_0x2f6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6E00_0x2f6e00");
#endif

    switch (ctx->pc) {
        case 0x2f6e3cu: goto label_2f6e3c;
        default: break;
    }

    ctx->pc = 0x2f6e00u;

    // 0x2f6e00: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2f6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f6e04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6e08: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2f6e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f6e0c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f6e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f6e14: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f6e18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f6e1c: 0x9466002a  lhu         $a2, 0x2A($v1)
    ctx->pc = 0x2f6e1cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x2f6e20: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x2f6e20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2f6e24: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2f6e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2f6e28: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F6E28u;
    {
        const bool branch_taken_0x2f6e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6e28) {
            ctx->pc = 0x2F6E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6E28u;
            // 0x2f6e2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E30u;
            goto label_2f6e30;
        }
    }
    ctx->pc = 0x2F6E30u;
label_2f6e30:
    // 0x2f6e30: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2f6e30u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f6e34: 0xc0bdb6e  jal         func_2F6DB8
    ctx->pc = 0x2F6E34u;
    SET_GPR_U32(ctx, 31, 0x2F6E3Cu);
    ctx->pc = 0x2F6E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E34u;
    // 0x2f6e38: 0x2812  mflo        $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ctx->lo);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6DB8u, 0x2F6E34u, 0x2F6E3Cu)) {
        return;
    }
    ctx->pc = 0x2F6E3Cu;
label_2f6e3c:
    // 0x2f6e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6e40: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E40u;
        // 0x2f6e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6E48u;
}
