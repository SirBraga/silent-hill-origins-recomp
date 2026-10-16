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

// Function: sub_00264F60
// Address: 0x264f60 - 0x264fa8
void sub_00264F60_0x264f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264F60_0x264f60");
#endif

    switch (ctx->pc) {
        case 0x264f90u: goto label_264f90;
        default: break;
    }

    ctx->pc = 0x264f60u;

    // 0x264f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264f64: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x264f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x264f68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x264f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x264f6c: 0x24631418  addiu       $v1, $v1, 0x1418
    ctx->pc = 0x264f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5144));
    // 0x264f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x264f78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C1420u));
    // 0x264f7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264f80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264F80u;
    {
        const bool branch_taken_0x264f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F80u;
        // 0x264f84: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f80) {
            ctx->pc = 0x264F90u;
            goto label_264f90;
        }
    }
    ctx->pc = 0x264F88u;
    // 0x264f88: 0xc099dec  jal         func_2677B0
    ctx->pc = 0x264F88u;
    SET_GPR_U32(ctx, 31, 0x264F90u);
    ctx->pc = 0x264F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F88u;
    // 0x264f8c: 0x2464000c  addiu       $a0, $v1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2677B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2677B0u, 0x264F88u, 0x264F90u)) {
        return;
    }
    ctx->pc = 0x264F90u;
label_264f90:
    // 0x264f90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264f98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x264f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x264F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F9Cu;
        // 0x264fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264FA4u;
    // 0x264fa4: 0x0  nop
    ctx->pc = 0x264fa4u;
    // NOP
    ctx->pc = 0x264fa8u;
}
