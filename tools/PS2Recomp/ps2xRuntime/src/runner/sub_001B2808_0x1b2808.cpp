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

// Function: sub_001B2808
// Address: 0x1b2808 - 0x1b28a0
void sub_001B2808_0x1b2808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2808_0x1b2808");
#endif

    switch (ctx->pc) {
        case 0x1b2848u: goto label_1b2848;
        case 0x1b2870u: goto label_1b2870;
        case 0x1b2884u: goto label_1b2884;
        default: break;
    }

    ctx->pc = 0x1b2808u;

    // 0x1b2808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b280c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b280cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2818: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b281c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B281Cu;
    {
        const bool branch_taken_0x1b281c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B281Cu;
        // 0x1b2820: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b281c) {
            ctx->pc = 0x1B2850u;
            goto label_1b2850;
        }
    }
    ctx->pc = 0x1B2824u;
    // 0x1b2824: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b2824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1b2828: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b2828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1b282c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b282cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2830: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1b2830u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x1b2834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b283c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b283cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2840: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x1B2840u;
    SET_GPR_U32(ctx, 31, 0x1B2848u);
    ctx->pc = 0x1B2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2840u;
    // 0x1b2844: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x1B2840u, 0x1B2848u)) {
        return;
    }
    ctx->pc = 0x1B2848u;
label_1b2848:
    // 0x1b2848: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B2848u;
    {
        const bool branch_taken_0x1b2848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2848u;
        // 0x1b284c: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2848) {
            ctx->pc = 0x1B2874u;
            goto label_1b2874;
        }
    }
    ctx->pc = 0x1B2850u;
label_1b2850:
    // 0x1b2850: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b2850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1b2854: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b2854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1b2858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b2858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b285c: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1b285cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x1b2860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2868: 0xc07bf5e  jal         func_1EFD78
    ctx->pc = 0x1B2868u;
    SET_GPR_U32(ctx, 31, 0x1B2870u);
    ctx->pc = 0x1B286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2868u;
    // 0x1b286c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x1B2868u, 0x1B2870u)) {
        return;
    }
    ctx->pc = 0x1B2870u;
label_1b2870:
    // 0x1b2870: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x1b2870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_1b2874:
    // 0x1b2874: 0x260400f8  addiu       $a0, $s0, 0xF8
    ctx->pc = 0x1b2874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x1b2878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b287c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B287Cu;
    SET_GPR_U32(ctx, 31, 0x1B2884u);
    ctx->pc = 0x1B2880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B287Cu;
    // 0x1b2880: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B287Cu, 0x1B2884u)) {
        return;
    }
    ctx->pc = 0x1B2884u;
label_1b2884:
    // 0x1b2884: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b288c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1b288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1b2890: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2898: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2898u;
        // 0x1b289c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B28A0u;
}
