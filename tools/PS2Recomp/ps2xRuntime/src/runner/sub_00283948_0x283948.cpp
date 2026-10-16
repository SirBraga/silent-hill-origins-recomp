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

// Function: sub_00283948
// Address: 0x283948 - 0x283998
void sub_00283948_0x283948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283948_0x283948");
#endif

    switch (ctx->pc) {
        case 0x283980u: goto label_283980;
        default: break;
    }

    ctx->pc = 0x283948u;

    // 0x283948: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x283948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x28394c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28394cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283950: 0x8c43e6e8  lw          $v1, -0x1918($v0)
    ctx->pc = 0x283950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x283954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283958: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x283958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28395c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x283960: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x283960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283964: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x283964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x283968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28396c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28396cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x283970: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x283970u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x283974: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x283974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x283978: 0xc0a0f48  jal         func_283D20
    ctx->pc = 0x283978u;
    SET_GPR_U32(ctx, 31, 0x283980u);
    ctx->pc = 0x28397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283978u;
    // 0x28397c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283D20u, 0x283978u, 0x283980u)) {
        return;
    }
    ctx->pc = 0x283980u;
label_283980:
    // 0x283980: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x283980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x283984: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x283984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x283988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28398c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28398cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283990: 0x3e00008  jr          $ra
    ctx->pc = 0x283990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283990u;
        // 0x283994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283998u;
}
