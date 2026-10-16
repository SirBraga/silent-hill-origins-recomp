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

// Function: sub_00206F90
// Address: 0x206f90 - 0x206fc0
void sub_00206F90_0x206f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206F90_0x206f90");
#endif

    switch (ctx->pc) {
        case 0x206fb0u: goto label_206fb0;
        default: break;
    }

    ctx->pc = 0x206f90u;

    // 0x206f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206f94: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x206f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x206f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206f9c: 0x24a56f38  addiu       $a1, $a1, 0x6F38
    ctx->pc = 0x206f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28472));
    // 0x206fa0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x206fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x206fa4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x206fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fa8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x206FA8u;
    SET_GPR_U32(ctx, 31, 0x206FB0u);
    ctx->pc = 0x206FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FA8u;
    // 0x206fac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x206FA8u, 0x206FB0u)) {
        return;
    }
    ctx->pc = 0x206FB0u;
label_206fb0:
    // 0x206fb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x206fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x206FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FB8u;
        // 0x206fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206FC0u;
}
