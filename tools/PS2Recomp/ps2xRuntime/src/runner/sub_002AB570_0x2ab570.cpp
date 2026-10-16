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

// Function: sub_002AB570
// Address: 0x2ab570 - 0x2ab5d0
void sub_002AB570_0x2ab570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB570_0x2ab570");
#endif

    switch (ctx->pc) {
        case 0x2ab5a0u: goto label_2ab5a0;
        case 0x2ab5b4u: goto label_2ab5b4;
        default: break;
    }

    ctx->pc = 0x2ab570u;

    // 0x2ab570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ab570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ab574: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ab574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ab578: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ab578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ab57c: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2ab57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    // 0x2ab580: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ab580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ab584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab588: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ab588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab58c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ab58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ab590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab594: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ab594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ab598: 0xc0ad2b4  jal         func_2B4AD0
    ctx->pc = 0x2AB598u;
    SET_GPR_U32(ctx, 31, 0x2AB5A0u);
    ctx->pc = 0x2AB59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB598u;
    // 0x2ab59c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2AB598u, 0x2AB5A0u)) {
        return;
    }
    ctx->pc = 0x2AB5A0u;
label_2ab5a0:
    // 0x2ab5a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ab5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ab5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ab5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5ac: 0xc0aad74  jal         func_2AB5D0
    ctx->pc = 0x2AB5ACu;
    SET_GPR_U32(ctx, 31, 0x2AB5B4u);
    ctx->pc = 0x2AB5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5ACu;
    // 0x2ab5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AB5D0u, 0x2AB5ACu, 0x2AB5B4u)) {
        return;
    }
    ctx->pc = 0x2AB5B4u;
label_2ab5b4:
    // 0x2ab5b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ab5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ab5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab5bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ab5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab5c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ab5c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB5C8u;
        // 0x2ab5cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB5D0u;
}
