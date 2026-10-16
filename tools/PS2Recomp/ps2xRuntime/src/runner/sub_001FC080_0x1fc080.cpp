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

// Function: sub_001FC080
// Address: 0x1fc080 - 0x1fc118
void sub_001FC080_0x1fc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC080_0x1fc080");
#endif

    switch (ctx->pc) {
        case 0x1fc080u: goto label_1fc080;
        case 0x1fc084u: goto label_1fc084;
        case 0x1fc088u: goto label_1fc088;
        case 0x1fc08cu: goto label_1fc08c;
        case 0x1fc090u: goto label_1fc090;
        case 0x1fc094u: goto label_1fc094;
        case 0x1fc098u: goto label_1fc098;
        case 0x1fc09cu: goto label_1fc09c;
        case 0x1fc0a0u: goto label_1fc0a0;
        case 0x1fc0a4u: goto label_1fc0a4;
        case 0x1fc0a8u: goto label_1fc0a8;
        case 0x1fc0acu: goto label_1fc0ac;
        case 0x1fc0b0u: goto label_1fc0b0;
        case 0x1fc0b4u: goto label_1fc0b4;
        case 0x1fc0b8u: goto label_1fc0b8;
        case 0x1fc0bcu: goto label_1fc0bc;
        case 0x1fc0c0u: goto label_1fc0c0;
        case 0x1fc0c4u: goto label_1fc0c4;
        case 0x1fc0c8u: goto label_1fc0c8;
        case 0x1fc0ccu: goto label_1fc0cc;
        case 0x1fc0d0u: goto label_1fc0d0;
        case 0x1fc0d4u: goto label_1fc0d4;
        case 0x1fc0d8u: goto label_1fc0d8;
        case 0x1fc0dcu: goto label_1fc0dc;
        case 0x1fc0e0u: goto label_1fc0e0;
        case 0x1fc0e4u: goto label_1fc0e4;
        case 0x1fc0e8u: goto label_1fc0e8;
        case 0x1fc0ecu: goto label_1fc0ec;
        case 0x1fc0f0u: goto label_1fc0f0;
        case 0x1fc0f4u: goto label_1fc0f4;
        case 0x1fc0f8u: goto label_1fc0f8;
        case 0x1fc0fcu: goto label_1fc0fc;
        case 0x1fc100u: goto label_1fc100;
        case 0x1fc104u: goto label_1fc104;
        case 0x1fc108u: goto label_1fc108;
        case 0x1fc10cu: goto label_1fc10c;
        case 0x1fc110u: goto label_1fc110;
        case 0x1fc114u: goto label_1fc114;
        default: break;
    }

    ctx->pc = 0x1fc080u;

label_1fc080:
    // 0x1fc080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fc084:
    // 0x1fc084: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fc084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1fc088:
    // 0x1fc088: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fc088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1fc08c:
    // 0x1fc08c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc090:
    // 0x1fc090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fc094:
    // 0x1fc094: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fc094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc098:
    // 0x1fc098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fc09c:
    // 0x1fc09c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc0a0:
    // 0x1fc0a0: 0xc0808f0  jal         func_2023C0
label_1fc0a4:
    if (ctx->pc == 0x1FC0A4u) {
        ctx->pc = 0x1FC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0A0u;
        // 0x1fc0a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0A8u;
        goto label_1fc0a8;
    }
    ctx->pc = 0x1FC0A0u;
    SET_GPR_U32(ctx, 31, 0x1FC0A8u);
    ctx->pc = 0x1FC0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC0A0u;
    // 0x1fc0a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FC0A0u, 0x1FC0A8u)) {
        return;
    }
    ctx->pc = 0x1FC0A8u;
label_1fc0a8:
    // 0x1fc0a8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1fc0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc0ac:
    // 0x1fc0ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0b0:
    // 0x1fc0b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0b4:
    // 0x1fc0b4: 0xc093546  jal         func_24D518
label_1fc0b8:
    if (ctx->pc == 0x1FC0B8u) {
        ctx->pc = 0x1FC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0B4u;
        // 0x1fc0b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0BCu;
        goto label_1fc0bc;
    }
    ctx->pc = 0x1FC0B4u;
    SET_GPR_U32(ctx, 31, 0x1FC0BCu);
    ctx->pc = 0x1FC0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC0B4u;
    // 0x1fc0b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1FC0B4u, 0x1FC0BCu)) {
        return;
    }
    ctx->pc = 0x1FC0BCu;
label_1fc0bc:
    // 0x1fc0bc: 0xc07f098  jal         func_1FC260
label_1fc0c0:
    if (ctx->pc == 0x1FC0C0u) {
        ctx->pc = 0x1FC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0BCu;
        // 0x1fc0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0C4u;
        goto label_1fc0c4;
    }
    ctx->pc = 0x1FC0BCu;
    SET_GPR_U32(ctx, 31, 0x1FC0C4u);
    ctx->pc = 0x1FC0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC0BCu;
    // 0x1fc0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC260u, 0x1FC0BCu, 0x1FC0C4u)) {
        return;
    }
    ctx->pc = 0x1FC0C4u;
label_1fc0c4:
    // 0x1fc0c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0c8:
    // 0x1fc0c8: 0xc07f190  jal         func_1FC640
label_1fc0cc:
    if (ctx->pc == 0x1FC0CCu) {
        ctx->pc = 0x1FC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0C8u;
        // 0x1fc0cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0D0u;
        goto label_1fc0d0;
    }
    ctx->pc = 0x1FC0C8u;
    SET_GPR_U32(ctx, 31, 0x1FC0D0u);
    ctx->pc = 0x1FC0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC0C8u;
    // 0x1fc0cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC640u, 0x1FC0C8u, 0x1FC0D0u)) {
        return;
    }
    ctx->pc = 0x1FC0D0u;
label_1fc0d0:
    // 0x1fc0d0: 0xc081340  jal         func_204D00
label_1fc0d4:
    if (ctx->pc == 0x1FC0D4u) {
        ctx->pc = 0x1FC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0D0u;
        // 0x1fc0d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0D8u;
        goto label_1fc0d8;
    }
    ctx->pc = 0x1FC0D0u;
    SET_GPR_U32(ctx, 31, 0x1FC0D8u);
    ctx->pc = 0x1FC0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC0D0u;
    // 0x1fc0d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204D00u, 0x1FC0D0u, 0x1FC0D8u)) {
        return;
    }
    ctx->pc = 0x1FC0D8u;
label_1fc0d8:
    // 0x1fc0d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fc0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0dc:
    // 0x1fc0dc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1fc0e0:
    if (ctx->pc == 0x1FC0E0u) {
        ctx->pc = 0x1FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0DCu;
        // 0x1fc0e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0E4u;
        goto label_1fc0e4;
    }
    ctx->pc = 0x1FC0DCu;
    {
        const bool branch_taken_0x1fc0dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0DCu;
        // 0x1fc0e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0dc) {
            ctx->pc = 0x1FC0F8u;
            goto label_1fc0f8;
        }
    }
    ctx->pc = 0x1FC0E4u;
label_1fc0e4:
    // 0x1fc0e4: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1fc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1fc0e8:
    // 0x1fc0e8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1fc0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1fc0ec:
    // 0x1fc0ec: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1fc0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1fc0f0:
    // 0x1fc0f0: 0x60f809  jalr        $v1
label_1fc0f4:
    if (ctx->pc == 0x1FC0F4u) {
        ctx->pc = 0x1FC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0F0u;
        // 0x1fc0f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0F8u;
        goto label_1fc0f8;
    }
    ctx->pc = 0x1FC0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC0F8u);
        ctx->pc = 0x1FC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0F0u;
        // 0x1fc0f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC0F0u, 0x1FC0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC0F8u;
label_1fc0f8:
    // 0x1fc0f8: 0xc0808b8  jal         func_2022E0
label_1fc0fc:
    if (ctx->pc == 0x1FC0FCu) {
        ctx->pc = 0x1FC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0F8u;
        // 0x1fc0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC100u;
        goto label_1fc100;
    }
    ctx->pc = 0x1FC0F8u;
    SET_GPR_U32(ctx, 31, 0x1FC100u);
    ctx->pc = 0x1FC0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC0F8u;
    // 0x1fc0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FC0F8u, 0x1FC100u)) {
        return;
    }
    ctx->pc = 0x1FC100u;
label_1fc100:
    // 0x1fc100: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fc100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc104:
    // 0x1fc104: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fc104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc108:
    // 0x1fc108: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc10c:
    // 0x1fc10c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc110:
    // 0x1fc110: 0x3e00008  jr          $ra
label_1fc114:
    if (ctx->pc == 0x1FC114u) {
        ctx->pc = 0x1FC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC110u;
        // 0x1fc114: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC118u;
        goto label_fallthrough_0x1fc110;
    }
    ctx->pc = 0x1FC110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC110u;
        // 0x1fc114: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fc110:
    ctx->pc = 0x1FC118u;
}
