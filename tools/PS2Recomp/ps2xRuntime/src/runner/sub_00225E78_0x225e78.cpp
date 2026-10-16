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

// Function: sub_00225E78
// Address: 0x225e78 - 0x225ef0
void sub_00225E78_0x225e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225E78_0x225e78");
#endif

    switch (ctx->pc) {
        case 0x225eb4u: goto label_225eb4;
        default: break;
    }

    ctx->pc = 0x225e78u;

    // 0x225e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225e7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x225e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x225e80: 0x8c633e88  lw          $v1, 0x3E88($v1)
    ctx->pc = 0x225e80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E88u));
    // 0x225e84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225e88: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x225e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x225e8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225e90: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x225e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x225e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x225e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x225ea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225ea4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225EA4u;
    {
        const bool branch_taken_0x225ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x225ea4) {
            ctx->pc = 0x225EC4u;
            goto label_225ec4;
        }
    }
    ctx->pc = 0x225EACu;
    // 0x225eac: 0xc093106  jal         func_24C418
    ctx->pc = 0x225EACu;
    SET_GPR_U32(ctx, 31, 0x225EB4u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x225EACu, 0x225EB4u)) {
        return;
    }
    ctx->pc = 0x225EB4u;
label_225eb4:
    // 0x225eb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x225eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x225eb8: 0x8c633e88  lw          $v1, 0x3E88($v1)
    ctx->pc = 0x225eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E88u));
    // 0x225ebc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x225ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x225ec0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x225ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_225ec4:
    // 0x225ec4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x225ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x225ec8: 0x8c633e8c  lw          $v1, 0x3E8C($v1)
    ctx->pc = 0x225ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E8Cu));
    // 0x225ecc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ed0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225ed4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x225ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x225ed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225ee0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x225ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x225ee4: 0xac233e8c  sw          $v1, 0x3E8C($at)
    ctx->pc = 0x225ee4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3E8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E8Cu, _value); } while (0);
    // 0x225ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x225EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EE8u;
        // 0x225eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225EF0u;
}
