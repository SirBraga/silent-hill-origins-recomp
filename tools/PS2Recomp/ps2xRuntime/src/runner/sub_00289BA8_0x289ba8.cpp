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

// Function: sub_00289BA8
// Address: 0x289ba8 - 0x289bf8
void sub_00289BA8_0x289ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289BA8_0x289ba8");
#endif

    switch (ctx->pc) {
        case 0x289bc4u: goto label_289bc4;
        case 0x289bd8u: goto label_289bd8;
        default: break;
    }

    ctx->pc = 0x289ba8u;

    // 0x289ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x289ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x289bac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x289bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x289bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x289bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289bbc: 0xc0a25ba  jal         func_2896E8
    ctx->pc = 0x289BBCu;
    SET_GPR_U32(ctx, 31, 0x289BC4u);
    ctx->pc = 0x289BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BBCu;
    // 0x289bc0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2896E8u, 0x289BBCu, 0x289BC4u)) {
        return;
    }
    ctx->pc = 0x289BC4u;
label_289bc4:
    // 0x289bc4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289BC4u;
    {
        const bool branch_taken_0x289bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289bc4) {
            ctx->pc = 0x289BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289BC4u;
            // 0x289bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289BE0u;
            goto label_289be0;
        }
    }
    ctx->pc = 0x289BCCu;
    // 0x289bcc: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x289bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x289bd0: 0xc0a20fa  jal         func_2883E8
    ctx->pc = 0x289BD0u;
    SET_GPR_U32(ctx, 31, 0x289BD8u);
    ctx->pc = 0x289BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BD0u;
    // 0x289bd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2883E8u, 0x289BD0u, 0x289BD8u)) {
        return;
    }
    ctx->pc = 0x289BD8u;
label_289bd8:
    // 0x289bd8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x289bd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x289bdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289be0:
    // 0x289be0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x289be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289bec: 0x3e00008  jr          $ra
    ctx->pc = 0x289BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289BECu;
        // 0x289bf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289BF4u;
    // 0x289bf4: 0x0  nop
    ctx->pc = 0x289bf4u;
    // NOP
    ctx->pc = 0x289bf8u;
}
