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

// Function: sub_0030D690
// Address: 0x30d690 - 0x30d718
void sub_0030D690_0x30d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D690_0x30d690");
#endif

    switch (ctx->pc) {
        case 0x30d6c4u: goto label_30d6c4;
        case 0x30d6d8u: goto label_30d6d8;
        case 0x30d6e4u: goto label_30d6e4;
        default: break;
    }

    ctx->pc = 0x30d690u;

    // 0x30d690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d694: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d698: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d69c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d6a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6a8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x30d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30d6ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d6b0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D6B0u;
    {
        const bool branch_taken_0x30d6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6B0u;
        // 0x30d6b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6b0) {
            ctx->pc = 0x30D6D0u;
            goto label_30d6d0;
        }
    }
    ctx->pc = 0x30D6B8u;
    // 0x30d6b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6bc: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D6BCu;
    SET_GPR_U32(ctx, 31, 0x30D6C4u);
    ctx->pc = 0x30D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D6BCu;
    // 0x30d6c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D6BCu, 0x30D6C4u)) {
        return;
    }
    ctx->pc = 0x30D6C4u;
label_30d6c4:
    // 0x30d6c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D6C4u;
    {
        const bool branch_taken_0x30d6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6C4u;
        // 0x30d6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6c4) {
            ctx->pc = 0x30D704u;
            goto label_30d704;
        }
    }
    ctx->pc = 0x30D6CCu;
    // 0x30d6cc: 0x0  nop
    ctx->pc = 0x30d6ccu;
    // NOP
label_30d6d0:
    // 0x30d6d0: 0xc0c3e0e  jal         func_30F838
    ctx->pc = 0x30D6D0u;
    SET_GPR_U32(ctx, 31, 0x30D6D8u);
    ctx->pc = 0x30D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D6D0u;
    // 0x30d6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30F838u, 0x30D6D0u, 0x30D6D8u)) {
        return;
    }
    ctx->pc = 0x30D6D8u;
label_30d6d8:
    // 0x30d6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6dc: 0xc0c2a7a  jal         func_30A9E8
    ctx->pc = 0x30D6DCu;
    SET_GPR_U32(ctx, 31, 0x30D6E4u);
    ctx->pc = 0x30D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D6DCu;
    // 0x30d6e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A9E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30A9E8u, 0x30D6DCu, 0x30D6E4u)) {
        return;
    }
    ctx->pc = 0x30D6E4u;
label_30d6e4:
    // 0x30d6e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D6E4u;
    {
        const bool branch_taken_0x30d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6E4u;
        // 0x30d6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6e4) {
            ctx->pc = 0x30D704u;
            goto label_30d704;
        }
    }
    ctx->pc = 0x30D6ECu;
    // 0x30d6ec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D6ECu;
    {
        const bool branch_taken_0x30d6ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6ECu;
        // 0x30d6f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6ec) {
            ctx->pc = 0x30D704u;
            goto label_30d704;
        }
    }
    ctx->pc = 0x30D6F4u;
    // 0x30d6f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d6f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d6fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d704:
    // 0x30d704: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30d704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d708: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d70c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d710: 0x3e00008  jr          $ra
    ctx->pc = 0x30D710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D710u;
        // 0x30d714: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D718u;
}
