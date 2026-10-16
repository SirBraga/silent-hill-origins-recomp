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

// Function: sub_00147768
// Address: 0x147768 - 0x1477f8
void sub_00147768_0x147768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147768_0x147768");
#endif

    switch (ctx->pc) {
        case 0x1477acu: goto label_1477ac;
        case 0x1477b4u: goto label_1477b4;
        case 0x1477bcu: goto label_1477bc;
        case 0x1477c4u: goto label_1477c4;
        case 0x1477d0u: goto label_1477d0;
        case 0x1477dcu: goto label_1477dc;
        default: break;
    }

    ctx->pc = 0x147768u;

    // 0x147768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14776c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x147770: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x147770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x147774: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x147774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x147778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14777c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14777cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147780: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x147780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x147784: 0x244210c8  addiu       $v0, $v0, 0x10C8
    ctx->pc = 0x147784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x147788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14778c: 0x246310e8  addiu       $v1, $v1, 0x10E8
    ctx->pc = 0x14778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4328));
    // 0x147790: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x147790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x147794: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x147794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147798: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x147798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x14779c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477a0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1477a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1477a4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1477A4u;
    SET_GPR_U32(ctx, 31, 0x1477ACu);
    ctx->pc = 0x1477A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477A4u;
    // 0x1477a8: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1477A4u, 0x1477ACu)) {
        return;
    }
    ctx->pc = 0x1477ACu;
label_1477ac:
    // 0x1477ac: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1477ACu;
    SET_GPR_U32(ctx, 31, 0x1477B4u);
    ctx->pc = 0x1477B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477ACu;
    // 0x1477b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1477ACu, 0x1477B4u)) {
        return;
    }
    ctx->pc = 0x1477B4u;
label_1477b4:
    // 0x1477b4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1477B4u;
    SET_GPR_U32(ctx, 31, 0x1477BCu);
    ctx->pc = 0x1477B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477B4u;
    // 0x1477b8: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1477B4u, 0x1477BCu)) {
        return;
    }
    ctx->pc = 0x1477BCu;
label_1477bc:
    // 0x1477bc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1477BCu;
    SET_GPR_U32(ctx, 31, 0x1477C4u);
    ctx->pc = 0x1477C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477BCu;
    // 0x1477c0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1477BCu, 0x1477C4u)) {
        return;
    }
    ctx->pc = 0x1477C4u;
label_1477c4:
    // 0x1477c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1477c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477c8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1477C8u;
    SET_GPR_U32(ctx, 31, 0x1477D0u);
    ctx->pc = 0x1477CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477C8u;
    // 0x1477cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1477C8u, 0x1477D0u)) {
        return;
    }
    ctx->pc = 0x1477D0u;
label_1477d0:
    // 0x1477d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1477d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477d4: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1477D4u;
    SET_GPR_U32(ctx, 31, 0x1477DCu);
    ctx->pc = 0x1477D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477D4u;
    // 0x1477d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1477D4u, 0x1477DCu)) {
        return;
    }
    ctx->pc = 0x1477DCu;
label_1477dc:
    // 0x1477dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1477dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1477e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1477e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1477e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1477e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1477e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1477e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1477ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1477ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1477F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477ECu;
        // 0x1477f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1477ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1477F4u;
    // 0x1477f4: 0x0  nop
    ctx->pc = 0x1477f4u;
    // NOP
    ctx->pc = 0x1477f8u;
}
