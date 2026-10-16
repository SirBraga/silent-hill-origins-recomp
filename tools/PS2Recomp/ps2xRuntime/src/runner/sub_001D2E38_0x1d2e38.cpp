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

// Function: sub_001D2E38
// Address: 0x1d2e38 - 0x1d2e90
void sub_001D2E38_0x1d2e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2E38_0x1d2e38");
#endif

    switch (ctx->pc) {
        case 0x1d2e68u: goto label_1d2e68;
        default: break;
    }

    ctx->pc = 0x1d2e38u;

    // 0x1d2e38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d2e3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d2e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d2e40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d2e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d2e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e48: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1d2e4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d2e50: 0x8e449b70  lw          $a0, -0x6490($s2)
    ctx->pc = 0x1d2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339B70u));
    // 0x1d2e54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d2e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2E58u;
    {
        const bool branch_taken_0x1d2e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E58u;
        // 0x1d2e5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e58) {
            ctx->pc = 0x1D2E68u;
            goto label_1d2e68;
        }
    }
    ctx->pc = 0x1D2E60u;
    // 0x1d2e60: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1D2E60u;
    SET_GPR_U32(ctx, 31, 0x1D2E68u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D2E60u, 0x1D2E68u)) {
        return;
    }
    ctx->pc = 0x1D2E68u;
label_1d2e68:
    // 0x1d2e68: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d2e6c: 0xae519b70  sw          $s1, -0x6490($s2)
    ctx->pc = 0x1d2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294941552), GPR_U32(ctx, 17));
    // 0x1d2e70: 0xac509b74  sw          $s0, -0x648C($v0)
    ctx->pc = 0x1d2e70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x339B74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B74u, _value); } while (0);
    // 0x1d2e74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d2e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2e78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d2e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2e7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d2e7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E84u;
        // 0x1d2e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2E8Cu;
    // 0x1d2e8c: 0x0  nop
    ctx->pc = 0x1d2e8cu;
    // NOP
    ctx->pc = 0x1d2e90u;
}
