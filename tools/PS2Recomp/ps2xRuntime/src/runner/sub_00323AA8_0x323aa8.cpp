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

// Function: sub_00323AA8
// Address: 0x323aa8 - 0x323af0
void sub_00323AA8_0x323aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323AA8_0x323aa8");
#endif

    switch (ctx->pc) {
        case 0x323ae4u: goto label_323ae4;
        default: break;
    }

    ctx->pc = 0x323aa8u;

    // 0x323aa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x323aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x323aac: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x323aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x323ab0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x323ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x323ab4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x323ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ab8: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x323ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x323abc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x323abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ac0: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x323ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x323ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323ac8: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x323ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x323acc: 0x248439b0  addiu       $a0, $a0, 0x39B0
    ctx->pc = 0x323accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
    // 0x323ad0: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x323ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x323ad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x323ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ad8: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x323ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x323adc: 0xc0c8b26  jal         func_322C98
    ctx->pc = 0x323ADCu;
    SET_GPR_U32(ctx, 31, 0x323AE4u);
    ctx->pc = 0x323AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323ADCu;
    // 0x323ae0: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322C98u, 0x323ADCu, 0x323AE4u)) {
        return;
    }
    ctx->pc = 0x323AE4u;
label_323ae4:
    // 0x323ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x323AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AE8u;
        // 0x323aec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323AF0u;
}
