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

// Function: sub_002AD5E8
// Address: 0x2ad5e8 - 0x2ad618
void sub_002AD5E8_0x2ad5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD5E8_0x2ad5e8");
#endif

    switch (ctx->pc) {
        case 0x2ad600u: goto label_2ad600;
        default: break;
    }

    ctx->pc = 0x2ad5e8u;

    // 0x2ad5e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad5ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ad5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ad5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5f8: 0xc0adf42  jal         func_2B7D08
    ctx->pc = 0x2AD5F8u;
    SET_GPR_U32(ctx, 31, 0x2AD600u);
    ctx->pc = 0x2AD5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD5F8u;
    // 0x2ad5fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7D08u, 0x2AD5F8u, 0x2AD600u)) {
        return;
    }
    ctx->pc = 0x2AD600u;
label_2ad600:
    // 0x2ad600: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ad600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad608: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ad608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad60c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD60Cu;
        // 0x2ad610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD614u;
    // 0x2ad614: 0x0  nop
    ctx->pc = 0x2ad614u;
    // NOP
    ctx->pc = 0x2ad618u;
}
