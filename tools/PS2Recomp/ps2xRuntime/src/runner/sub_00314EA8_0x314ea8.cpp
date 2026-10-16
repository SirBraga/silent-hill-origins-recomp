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

// Function: sub_00314EA8
// Address: 0x314ea8 - 0x314eb8
void sub_00314EA8_0x314ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314EA8_0x314ea8");
#endif

    ctx->pc = 0x314ea8u;

    // 0x314ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x314ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x314eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314eb0: 0xc07d8e8  jal         func_1F63A0
    ctx->pc = 0x314EB0u;
    SET_GPR_U32(ctx, 31, 0x314EB8u);
    ctx->pc = 0x314EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EB0u;
    // 0x314eb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F63A0u, 0x314EB0u, 0x314EB8u)) {
        return;
    }
    ctx->pc = 0x314EB8u;
}
