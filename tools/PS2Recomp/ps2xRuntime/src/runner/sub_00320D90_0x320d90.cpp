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

// Function: sub_00320D90
// Address: 0x320d90 - 0x320df0
void sub_00320D90_0x320d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320D90_0x320d90");
#endif

    switch (ctx->pc) {
        case 0x320db4u: goto label_320db4;
        case 0x320dc8u: goto label_320dc8;
        default: break;
    }

    ctx->pc = 0x320d90u;

    // 0x320d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x320d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x320d94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x320d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x320d98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x320d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x320d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x320d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320da0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x320da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320da4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x320da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x320da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320dac: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x320DACu;
    SET_GPR_U32(ctx, 31, 0x320DB4u);
    ctx->pc = 0x320DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320DACu;
    // 0x320db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x320DACu, 0x320DB4u)) {
        return;
    }
    ctx->pc = 0x320DB4u;
label_320db4:
    // 0x320db4: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x320db4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x320db8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x320db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320dc0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x320DC0u;
    SET_GPR_U32(ctx, 31, 0x320DC8u);
    ctx->pc = 0x320DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320DC0u;
    // 0x320dc4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x320DC0u, 0x320DC8u)) {
        return;
    }
    ctx->pc = 0x320DC8u;
label_320dc8:
    // 0x320dc8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x320dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x320dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x320dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320dd0: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x320dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x320dd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x320dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320dd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x320dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320ddc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x320ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320de4: 0x3e00008  jr          $ra
    ctx->pc = 0x320DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DE4u;
        // 0x320de8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320DECu;
    // 0x320dec: 0x0  nop
    ctx->pc = 0x320decu;
    // NOP
    ctx->pc = 0x320df0u;
}
