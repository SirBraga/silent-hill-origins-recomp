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

// Function: sub_00257BE8
// Address: 0x257be8 - 0x257c60
void sub_00257BE8_0x257be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257BE8_0x257be8");
#endif

    switch (ctx->pc) {
        case 0x257c24u: goto label_257c24;
        default: break;
    }

    ctx->pc = 0x257be8u;

    // 0x257be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257bec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x257bf0: 0x8c633fc8  lw          $v1, 0x3FC8($v1)
    ctx->pc = 0x257bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FC8u));
    // 0x257bf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257bf8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x257bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x257bfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x257c00: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x257c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x257c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257c08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c0c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x257c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x257c10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x257c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257c14: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257C14u;
    {
        const bool branch_taken_0x257c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257c14) {
            ctx->pc = 0x257C34u;
            goto label_257c34;
        }
    }
    ctx->pc = 0x257C1Cu;
    // 0x257c1c: 0xc093106  jal         func_24C418
    ctx->pc = 0x257C1Cu;
    SET_GPR_U32(ctx, 31, 0x257C24u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x257C1Cu, 0x257C24u)) {
        return;
    }
    ctx->pc = 0x257C24u;
label_257c24:
    // 0x257c24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x257c28: 0x8c633fc8  lw          $v1, 0x3FC8($v1)
    ctx->pc = 0x257c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FC8u));
    // 0x257c2c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x257c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x257c30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x257c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_257c34:
    // 0x257c34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x257c38: 0x8c633fcc  lw          $v1, 0x3FCC($v1)
    ctx->pc = 0x257c38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FCCu));
    // 0x257c3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x257c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257c44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x257c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x257c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257c50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x257c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x257c54: 0xac233fcc  sw          $v1, 0x3FCC($at)
    ctx->pc = 0x257c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FCCu, _value); } while (0);
    // 0x257c58: 0x3e00008  jr          $ra
    ctx->pc = 0x257C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C58u;
        // 0x257c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257C60u;
}
