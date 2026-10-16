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

// Function: sub_002815A8
// Address: 0x2815a8 - 0x281608
void sub_002815A8_0x2815a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002815A8_0x2815a8");
#endif

    switch (ctx->pc) {
        case 0x2815ccu: goto label_2815cc;
        case 0x2815ecu: goto label_2815ec;
        default: break;
    }

    ctx->pc = 0x2815a8u;

    // 0x2815a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2815a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2815ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2815acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2815b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2815b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2815b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2815b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2815b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2815bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2815c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2815c4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2815C4u;
    SET_GPR_U32(ctx, 31, 0x2815CCu);
    ctx->pc = 0x2815C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815C4u;
    // 0x2815c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2815C4u, 0x2815CCu)) {
        return;
    }
    ctx->pc = 0x2815CCu;
label_2815cc:
    // 0x2815cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2815CCu;
    {
        const bool branch_taken_0x2815cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2815D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815CCu;
        // 0x2815d0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815cc) {
            ctx->pc = 0x2815DCu;
            goto label_2815dc;
        }
    }
    ctx->pc = 0x2815D4u;
    // 0x2815d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2815D4u;
    {
        const bool branch_taken_0x2815d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815D4u;
        // 0x2815d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815d4) {
            ctx->pc = 0x2815F0u;
            goto label_2815f0;
        }
    }
    ctx->pc = 0x2815DCu;
label_2815dc:
    // 0x2815dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2815DCu;
    {
        const bool branch_taken_0x2815dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815DCu;
        // 0x2815e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815dc) {
            ctx->pc = 0x2815F0u;
            goto label_2815f0;
        }
    }
    ctx->pc = 0x2815E4u;
    // 0x2815e4: 0xc0a02c6  jal         func_280B18
    ctx->pc = 0x2815E4u;
    SET_GPR_U32(ctx, 31, 0x2815ECu);
    ctx->pc = 0x2815E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815E4u;
    // 0x2815e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280B18u, 0x2815E4u, 0x2815ECu)) {
        return;
    }
    ctx->pc = 0x2815ECu;
label_2815ec:
    // 0x2815ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2815ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2815f0:
    // 0x2815f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2815f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2815f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2815f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2815f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2815f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2815fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2815FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815FCu;
        // 0x281600: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2815FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281604u;
    // 0x281604: 0x0  nop
    ctx->pc = 0x281604u;
    // NOP
    ctx->pc = 0x281608u;
}
