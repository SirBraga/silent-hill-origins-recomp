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

// Function: sub_0013F988
// Address: 0x13f988 - 0x13f9d0
void sub_0013F988_0x13f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F988_0x13f988");
#endif

    switch (ctx->pc) {
        case 0x13f988u: goto label_13f988;
        case 0x13f98cu: goto label_13f98c;
        case 0x13f990u: goto label_13f990;
        case 0x13f994u: goto label_13f994;
        case 0x13f998u: goto label_13f998;
        case 0x13f99cu: goto label_13f99c;
        case 0x13f9a0u: goto label_13f9a0;
        case 0x13f9a4u: goto label_13f9a4;
        case 0x13f9a8u: goto label_13f9a8;
        case 0x13f9acu: goto label_13f9ac;
        case 0x13f9b0u: goto label_13f9b0;
        case 0x13f9b4u: goto label_13f9b4;
        case 0x13f9b8u: goto label_13f9b8;
        case 0x13f9bcu: goto label_13f9bc;
        case 0x13f9c0u: goto label_13f9c0;
        case 0x13f9c4u: goto label_13f9c4;
        case 0x13f9c8u: goto label_13f9c8;
        case 0x13f9ccu: goto label_13f9cc;
        default: break;
    }

    ctx->pc = 0x13f988u;

label_13f988:
    // 0x13f988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f98c:
    // 0x13f98c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_13f990:
    // 0x13f990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f994:
    // 0x13f994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f998:
    // 0x13f998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f99c:
    // 0x13f99c: 0xc040132  jal         func_1004C8
label_13f9a0:
    if (ctx->pc == 0x13F9A0u) {
        ctx->pc = 0x13F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F99Cu;
        // 0x13f9a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9A4u;
        goto label_13f9a4;
    }
    ctx->pc = 0x13F99Cu;
    SET_GPR_U32(ctx, 31, 0x13F9A4u);
    ctx->pc = 0x13F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F99Cu;
    // 0x13f9a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1004C8u, 0x13F99Cu, 0x13F9A4u)) {
        return;
    }
    ctx->pc = 0x13F9A4u;
label_13f9a4:
    // 0x13f9a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x13f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13f9a8:
    // 0x13f9a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f9ac:
    // 0x13f9ac: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x13f9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_13f9b0:
    // 0x13f9b0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x13f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_13f9b4:
    // 0x13f9b4: 0x60f809  jalr        $v1
label_13f9b8:
    if (ctx->pc == 0x13F9B8u) {
        ctx->pc = 0x13F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9B4u;
        // 0x13f9b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9BCu;
        goto label_13f9bc;
    }
    ctx->pc = 0x13F9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13F9BCu);
        ctx->pc = 0x13F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9B4u;
        // 0x13f9b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F9B4u, 0x13F9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F9BCu;
label_13f9bc:
    // 0x13f9bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13f9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f9c0:
    // 0x13f9c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f9c4:
    // 0x13f9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f9c8:
    // 0x13f9c8: 0x3e00008  jr          $ra
label_13f9cc:
    if (ctx->pc == 0x13F9CCu) {
        ctx->pc = 0x13F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9C8u;
        // 0x13f9cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9D0u;
        goto label_fallthrough_0x13f9c8;
    }
    ctx->pc = 0x13F9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9C8u;
        // 0x13f9cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13f9c8:
    ctx->pc = 0x13F9D0u;
}
