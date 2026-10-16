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

// Function: sub_001FE088
// Address: 0x1fe088 - 0x1fe118
void sub_001FE088_0x1fe088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE088_0x1fe088");
#endif

    switch (ctx->pc) {
        case 0x1fe0acu: goto label_1fe0ac;
        case 0x1fe0ccu: goto label_1fe0cc;
        case 0x1fe0d8u: goto label_1fe0d8;
        case 0x1fe0ecu: goto label_1fe0ec;
        case 0x1fe0f8u: goto label_1fe0f8;
        default: break;
    }

    ctx->pc = 0x1fe088u;

    // 0x1fe088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fe088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fe08c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe090: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fe090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fe094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe098: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fe098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fe09c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fe09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fe0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe0a4: 0xc07f410  jal         func_1FD040
    ctx->pc = 0x1FE0A4u;
    SET_GPR_U32(ctx, 31, 0x1FE0ACu);
    ctx->pc = 0x1FE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0A4u;
    // 0x1fe0a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD040u, 0x1FE0A4u, 0x1FE0ACu)) {
        return;
    }
    ctx->pc = 0x1FE0ACu;
label_1fe0ac:
    // 0x1fe0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fe0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe0b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE0B4u;
    {
        const bool branch_taken_0x1fe0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0B4u;
        // 0x1fe0b8: 0x3c13005c  lui         $s3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0b4) {
            ctx->pc = 0x1FE0F0u;
            goto label_1fe0f0;
        }
    }
    ctx->pc = 0x1FE0BCu;
    // 0x1fe0bc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE0BCu;
    {
        const bool branch_taken_0x1fe0bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0BCu;
        // 0x1fe0c0: 0xae700110  sw          $s0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0bc) {
            ctx->pc = 0x1FE0CCu;
            goto label_1fe0cc;
        }
    }
    ctx->pc = 0x1FE0C4u;
    // 0x1fe0c4: 0xc06719a  jal         func_19C668
    ctx->pc = 0x1FE0C4u;
    SET_GPR_U32(ctx, 31, 0x1FE0CCu);
    ctx->pc = 0x1FE0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0C4u;
    // 0x1fe0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C668u, 0x1FE0C4u, 0x1FE0CCu)) {
        return;
    }
    ctx->pc = 0x1FE0CCu;
label_1fe0cc:
    // 0x1fe0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0d0: 0xc08180c  jal         func_206030
    ctx->pc = 0x1FE0D0u;
    SET_GPR_U32(ctx, 31, 0x1FE0D8u);
    ctx->pc = 0x1FE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0D0u;
    // 0x1fe0d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206030u, 0x1FE0D0u, 0x1FE0D8u)) {
        return;
    }
    ctx->pc = 0x1FE0D8u;
label_1fe0d8:
    // 0x1fe0d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1fe0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fe0dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE0DCu;
    {
        const bool branch_taken_0x1fe0dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0DCu;
        // 0x1fe0e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0dc) {
            ctx->pc = 0x1FE0ECu;
            goto label_1fe0ec;
        }
    }
    ctx->pc = 0x1FE0E4u;
    // 0x1fe0e4: 0xc08121a  jal         func_204868
    ctx->pc = 0x1FE0E4u;
    SET_GPR_U32(ctx, 31, 0x1FE0ECu);
    ctx->pc = 0x1FE0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0E4u;
    // 0x1fe0e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204868u, 0x1FE0E4u, 0x1FE0ECu)) {
        return;
    }
    ctx->pc = 0x1FE0ECu;
label_1fe0ec:
    // 0x1fe0ec: 0xae600110  sw          $zero, 0x110($s3)
    ctx->pc = 0x1fe0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
label_1fe0f0:
    // 0x1fe0f0: 0xc07f850  jal         func_1FE140
    ctx->pc = 0x1FE0F0u;
    SET_GPR_U32(ctx, 31, 0x1FE0F8u);
    ctx->pc = 0x1FE0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0F0u;
    // 0x1fe0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE140u, 0x1FE0F0u, 0x1FE0F8u)) {
        return;
    }
    ctx->pc = 0x1FE0F8u;
label_1fe0f8:
    // 0x1fe0f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fe0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe0fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fe0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe104: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fe104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe10c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE10Cu;
        // 0x1fe110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE114u;
    // 0x1fe114: 0x0  nop
    ctx->pc = 0x1fe114u;
    // NOP
    ctx->pc = 0x1fe118u;
}
