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

// Function: sub_00165E48
// Address: 0x165e48 - 0x165eb0
void sub_00165E48_0x165e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165E48_0x165e48");
#endif

    switch (ctx->pc) {
        case 0x165e78u: goto label_165e78;
        case 0x165e94u: goto label_165e94;
        default: break;
    }

    ctx->pc = 0x165e48u;

    // 0x165e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x165e4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x165e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x165e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x165e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165e58: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x165e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x165e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x165e60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x165e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e64: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x165e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e70: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x165E70u;
    SET_GPR_U32(ctx, 31, 0x165E78u);
    ctx->pc = 0x165E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E70u;
    // 0x165e74: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x165E70u, 0x165E78u)) {
        return;
    }
    ctx->pc = 0x165E78u;
label_165e78:
    // 0x165e78: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x165e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x165e7c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x165e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x165e80: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x165e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x165e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e88: 0x24a55d38  addiu       $a1, $a1, 0x5D38
    ctx->pc = 0x165e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23864));
    // 0x165e8c: 0xc09545a  jal         func_255168
    ctx->pc = 0x165E8Cu;
    SET_GPR_U32(ctx, 31, 0x165E94u);
    ctx->pc = 0x165E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E8Cu;
    // 0x165e90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x165E8Cu, 0x165E94u)) {
        return;
    }
    ctx->pc = 0x165E94u;
label_165e94:
    // 0x165e94: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x165e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165e98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x165e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165e9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x165EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EA4u;
        // 0x165ea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165EACu;
    // 0x165eac: 0x0  nop
    ctx->pc = 0x165eacu;
    // NOP
    ctx->pc = 0x165eb0u;
}
