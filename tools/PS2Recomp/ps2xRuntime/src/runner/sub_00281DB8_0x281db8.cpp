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

// Function: sub_00281DB8
// Address: 0x281db8 - 0x281df8
void sub_00281DB8_0x281db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281DB8_0x281db8");
#endif

    switch (ctx->pc) {
        case 0x281ddcu: goto label_281ddc;
        default: break;
    }

    ctx->pc = 0x281db8u;

    // 0x281db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281dbc: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x281dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x281dc0: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x281dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x281dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281dc8: 0x24c61fe0  addiu       $a2, $a2, 0x1FE0
    ctx->pc = 0x281dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8160));
    // 0x281dcc: 0x24e71f80  addiu       $a3, $a3, 0x1F80
    ctx->pc = 0x281dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8064));
    // 0x281dd0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x281dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x281dd4: 0xc0895e6  jal         func_225798
    ctx->pc = 0x281DD4u;
    SET_GPR_U32(ctx, 31, 0x281DDCu);
    ctx->pc = 0x281DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281DD4u;
    // 0x281dd8: 0x2405010c  addiu       $a1, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x281DD4u, 0x281DDCu)) {
        return;
    }
    ctx->pc = 0x281DDCu;
label_281ddc:
    // 0x281ddc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x281ddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x281de0: 0xaf828840  sw          $v0, -0x77C0($gp)
    ctx->pc = 0x281de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936640), GPR_U32(ctx, 2));
    // 0x281de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281de8: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x281de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x281dec: 0x3e00008  jr          $ra
    ctx->pc = 0x281DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DECu;
        // 0x281df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281DF4u;
    // 0x281df4: 0x0  nop
    ctx->pc = 0x281df4u;
    // NOP
    ctx->pc = 0x281df8u;
}
