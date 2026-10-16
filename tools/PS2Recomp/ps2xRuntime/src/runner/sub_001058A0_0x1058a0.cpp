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

// Function: sub_001058A0
// Address: 0x1058a0 - 0x105900
void sub_001058A0_0x1058a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001058A0_0x1058a0");
#endif

    switch (ctx->pc) {
        case 0x1058ccu: goto label_1058cc;
        case 0x1058ecu: goto label_1058ec;
        default: break;
    }

    ctx->pc = 0x1058a0u;

    // 0x1058a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1058a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1058a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1058a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1058a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1058a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1058ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1058acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058b0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1058B0u;
    {
        const bool branch_taken_0x1058b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058B0u;
        // 0x1058b4: 0xae05001c  sw          $a1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058b0) {
            ctx->pc = 0x1058D8u;
            goto label_1058d8;
        }
    }
    ctx->pc = 0x1058B8u;
    // 0x1058b8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1058b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1058bc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1058BCu;
    {
        const bool branch_taken_0x1058bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1058bc) {
            ctx->pc = 0x1058C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1058BCu;
            // 0x1058c0: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1058D0u;
            goto label_1058d0;
        }
    }
    ctx->pc = 0x1058C4u;
    // 0x1058c4: 0xc041174  jal         func_1045D0
    ctx->pc = 0x1058C4u;
    SET_GPR_U32(ctx, 31, 0x1058CCu);
    ctx->pc = 0x1058C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058C4u;
    // 0x1058c8: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1045D0u, 0x1058C4u, 0x1058CCu)) {
        return;
    }
    ctx->pc = 0x1058CCu;
label_1058cc:
    // 0x1058cc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1058d0:
    // 0x1058d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1058D0u;
    {
        const bool branch_taken_0x1058d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1058d0) {
            ctx->pc = 0x1058D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1058D0u;
            // 0x1058d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1058F0u;
            goto label_1058f0;
        }
    }
    ctx->pc = 0x1058D8u;
label_1058d8:
    // 0x1058d8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1058d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1058dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1058DCu;
    {
        const bool branch_taken_0x1058dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058DCu;
        // 0x1058e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058dc) {
            ctx->pc = 0x1058ECu;
            goto label_1058ec;
        }
    }
    ctx->pc = 0x1058E4u;
    // 0x1058e4: 0xc041640  jal         func_105900
    ctx->pc = 0x1058E4u;
    SET_GPR_U32(ctx, 31, 0x1058ECu);
    ctx->pc = 0x1058E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058E4u;
    // 0x1058e8: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105900u, 0x1058E4u, 0x1058ECu)) {
        return;
    }
    ctx->pc = 0x1058ECu;
label_1058ec:
    // 0x1058ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1058ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1058f0:
    // 0x1058f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1058f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1058f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1058F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1058F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058F4u;
        // 0x1058f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1058F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1058FCu;
    // 0x1058fc: 0x0  nop
    ctx->pc = 0x1058fcu;
    // NOP
    ctx->pc = 0x105900u;
}
