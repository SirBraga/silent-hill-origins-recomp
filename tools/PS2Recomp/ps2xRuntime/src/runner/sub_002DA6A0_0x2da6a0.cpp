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

// Function: sub_002DA6A0
// Address: 0x2da6a0 - 0x2da708
void sub_002DA6A0_0x2da6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA6A0_0x2da6a0");
#endif

    switch (ctx->pc) {
        case 0x2da6d4u: goto label_2da6d4;
        case 0x2da6f0u: goto label_2da6f0;
        default: break;
    }

    ctx->pc = 0x2da6a0u;

    // 0x2da6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da6a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2da6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2da6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da6b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2da6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6b8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2da6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2da6bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA6BCu;
    {
        const bool branch_taken_0x2da6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6BCu;
        // 0x2da6c0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6bc) {
            ctx->pc = 0x2DA6E4u;
            goto label_2da6e4;
        }
    }
    ctx->pc = 0x2DA6C4u;
    // 0x2da6c4: 0x53083  sra         $a2, $a1, 2
    ctx->pc = 0x2da6c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 2));
    // 0x2da6c8: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x2da6c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2da6cc: 0xc0b904c  jal         func_2E4130
    ctx->pc = 0x2DA6CCu;
    SET_GPR_U32(ctx, 31, 0x2DA6D4u);
    ctx->pc = 0x2DA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6CCu;
    // 0x2da6d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4130u, 0x2DA6CCu, 0x2DA6D4u)) {
        return;
    }
    ctx->pc = 0x2DA6D4u;
label_2da6d4:
    // 0x2da6d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA6D4u;
    {
        const bool branch_taken_0x2da6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6D4u;
        // 0x2da6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6d4) {
            ctx->pc = 0x2DA6E8u;
            goto label_2da6e8;
        }
    }
    ctx->pc = 0x2DA6DCu;
    // 0x2da6dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA6DCu;
    {
        const bool branch_taken_0x2da6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6DCu;
        // 0x2da6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6dc) {
            ctx->pc = 0x2DA6F0u;
            goto label_2da6f0;
        }
    }
    ctx->pc = 0x2DA6E4u;
label_2da6e4:
    // 0x2da6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da6e8:
    // 0x2da6e8: 0xc0b907e  jal         func_2E41F8
    ctx->pc = 0x2DA6E8u;
    SET_GPR_U32(ctx, 31, 0x2DA6F0u);
    ctx->pc = 0x2DA6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6E8u;
    // 0x2da6ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E41F8u, 0x2DA6E8u, 0x2DA6F0u)) {
        return;
    }
    ctx->pc = 0x2DA6F0u;
label_2da6f0:
    // 0x2da6f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2da6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da6f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6FCu;
        // 0x2da700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA704u;
    // 0x2da704: 0x0  nop
    ctx->pc = 0x2da704u;
    // NOP
    ctx->pc = 0x2da708u;
}
