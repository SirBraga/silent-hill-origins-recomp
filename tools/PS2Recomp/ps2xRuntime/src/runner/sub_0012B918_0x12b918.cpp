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

// Function: sub_0012B918
// Address: 0x12b918 - 0x12b960
void sub_0012B918_0x12b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B918_0x12b918");
#endif

    switch (ctx->pc) {
        case 0x12b938u: goto label_12b938;
        default: break;
    }

    ctx->pc = 0x12b918u;

    // 0x12b918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b920: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12b920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12b924: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x12b924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b92c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b930: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x12B930u;
    SET_GPR_U32(ctx, 31, 0x12B938u);
    ctx->pc = 0x12B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B930u;
    // 0x12b934: 0x26042aad  addiu       $a0, $s0, 0x2AAD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10925));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x12B930u, 0x12B938u)) {
        return;
    }
    ctx->pc = 0x12B938u;
label_12b938:
    // 0x12b938: 0xa2002aac  sb          $zero, 0x2AAC($s0)
    ctx->pc = 0x12b938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10924), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b93c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12b93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b944: 0x3e00008  jr          $ra
    ctx->pc = 0x12B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B944u;
        // 0x12b948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B94Cu;
    // 0x12b94c: 0x0  nop
    ctx->pc = 0x12b94cu;
    // NOP
    // 0x12b950: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b954: 0x0  nop
    ctx->pc = 0x12b954u;
    // NOP
    // 0x12b958: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12b95c: 0x0  nop
    ctx->pc = 0x12b95cu;
    // NOP
    ctx->pc = 0x12b960u;
}
