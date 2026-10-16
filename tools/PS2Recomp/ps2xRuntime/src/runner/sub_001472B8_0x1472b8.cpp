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

// Function: sub_001472B8
// Address: 0x1472b8 - 0x147318
void sub_001472B8_0x1472b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001472B8_0x1472b8");
#endif

    switch (ctx->pc) {
        case 0x1472e0u: goto label_1472e0;
        case 0x1472fcu: goto label_1472fc;
        default: break;
    }

    ctx->pc = 0x1472b8u;

    // 0x1472b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1472b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1472bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1472bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1472c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1472c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1472c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1472c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1472c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1472cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1472ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1472d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1472d4: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x1472d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1472d8: 0xc0ab572  jal         func_2AD5C8
    ctx->pc = 0x1472D8u;
    SET_GPR_U32(ctx, 31, 0x1472E0u);
    ctx->pc = 0x1472DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472D8u;
    // 0x1472dc: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD5C8u, 0x1472D8u, 0x1472E0u)) {
        return;
    }
    ctx->pc = 0x1472E0u;
label_1472e0:
    // 0x1472e0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1472e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1472e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1472e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472e8: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x1472e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
    // 0x1472ec: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x1472ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1472f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1472f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472f4: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x1472F4u;
    SET_GPR_U32(ctx, 31, 0x1472FCu);
    ctx->pc = 0x1472F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472F4u;
    // 0x1472f8: 0x8c640024  lw          $a0, 0x24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x1472F4u, 0x1472FCu)) {
        return;
    }
    ctx->pc = 0x1472FCu;
label_1472fc:
    // 0x1472fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1472fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147300: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x147300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147304: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147308: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x147308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14730c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147310: 0x3e00008  jr          $ra
    ctx->pc = 0x147310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147310u;
        // 0x147314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147318u;
}
