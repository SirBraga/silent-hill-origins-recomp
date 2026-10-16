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

// Function: sub_00226760
// Address: 0x226760 - 0x2267a0
void sub_00226760_0x226760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226760_0x226760");
#endif

    switch (ctx->pc) {
        case 0x226778u: goto label_226778;
        case 0x226780u: goto label_226780;
        default: break;
    }

    ctx->pc = 0x226760u;

    // 0x226760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22676c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226770: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x226770u;
    SET_GPR_U32(ctx, 31, 0x226778u);
    ctx->pc = 0x226774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226770u;
    // 0x226774: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x226770u, 0x226778u)) {
        return;
    }
    ctx->pc = 0x226778u;
label_226778:
    // 0x226778: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x226778u;
    SET_GPR_U32(ctx, 31, 0x226780u);
    ctx->pc = 0x22677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226778u;
    // 0x22677c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x226778u, 0x226780u)) {
        return;
    }
    ctx->pc = 0x226780u;
label_226780:
    // 0x226780: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x226780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22678c: 0x3e00008  jr          $ra
    ctx->pc = 0x22678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22678Cu;
        // 0x226790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22678Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226794u;
    // 0x226794: 0x0  nop
    ctx->pc = 0x226794u;
    // NOP
    // 0x226798: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x226798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22679c: 0x0  nop
    ctx->pc = 0x22679cu;
    // NOP
    ctx->pc = 0x2267a0u;
}
