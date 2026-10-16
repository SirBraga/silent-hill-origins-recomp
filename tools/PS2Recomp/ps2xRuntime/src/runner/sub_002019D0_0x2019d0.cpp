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

// Function: sub_002019D0
// Address: 0x2019d0 - 0x201a08
void sub_002019D0_0x2019d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002019D0_0x2019d0");
#endif

    switch (ctx->pc) {
        case 0x2019e8u: goto label_2019e8;
        case 0x2019f0u: goto label_2019f0;
        default: break;
    }

    ctx->pc = 0x2019d0u;

    // 0x2019d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2019d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2019d4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2019d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2019d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2019d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2019dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2019dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2019e0: 0xc080404  jal         func_201010
    ctx->pc = 0x2019E0u;
    SET_GPR_U32(ctx, 31, 0x2019E8u);
    ctx->pc = 0x2019E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019E0u;
    // 0x2019e4: 0x24e739f8  addiu       $a3, $a3, 0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201010u, 0x2019E0u, 0x2019E8u)) {
        return;
    }
    ctx->pc = 0x2019E8u;
label_2019e8:
    // 0x2019e8: 0xc067c2e  jal         func_19F0B8
    ctx->pc = 0x2019E8u;
    SET_GPR_U32(ctx, 31, 0x2019F0u);
    ctx->pc = 0x2019ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019E8u;
    // 0x2019ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F0B8u, 0x2019E8u, 0x2019F0u)) {
        return;
    }
    ctx->pc = 0x2019F0u;
label_2019f0:
    // 0x2019f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2019f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2019f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2019f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2019f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2019fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2019FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019FCu;
        // 0x201a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201A04u;
    // 0x201a04: 0x0  nop
    ctx->pc = 0x201a04u;
    // NOP
    ctx->pc = 0x201a08u;
}
