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

// Function: sub_00180F90
// Address: 0x180f90 - 0x180ff0
void sub_00180F90_0x180f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180F90_0x180f90");
#endif

    switch (ctx->pc) {
        case 0x180fb8u: goto label_180fb8;
        case 0x180fccu: goto label_180fcc;
        default: break;
    }

    ctx->pc = 0x180f90u;

    // 0x180f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180f94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180f98: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x180f98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x180f9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x180fa0: 0x8e22fa60  lw          $v0, -0x5A0($s1)
    ctx->pc = 0x180fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x180fa4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x180fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x180fa8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180FA8u;
    {
        const bool branch_taken_0x180fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FA8u;
        // 0x180fac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fa8) {
            ctx->pc = 0x180FCCu;
            goto label_180fcc;
        }
    }
    ctx->pc = 0x180FB0u;
    // 0x180fb0: 0xc060300  jal         func_180C00
    ctx->pc = 0x180FB0u;
    SET_GPR_U32(ctx, 31, 0x180FB8u);
    ctx->pc = 0x180FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FB0u;
    // 0x180fb4: 0x2604fa38  addiu       $a0, $s0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x180FB0u, 0x180FB8u)) {
        return;
    }
    ctx->pc = 0x180FB8u;
label_180fb8:
    // 0x180fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180fbc: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x180fc0: 0xae22fa60  sw          $v0, -0x5A0($s1)
    ctx->pc = 0x180fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965856), GPR_U32(ctx, 2));
    // 0x180fc4: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x180FC4u;
    SET_GPR_U32(ctx, 31, 0x180FCCu);
    ctx->pc = 0x180FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FC4u;
    // 0x180fc8: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x180FC4u, 0x180FCCu)) {
        return;
    }
    ctx->pc = 0x180FCCu;
label_180fcc:
    // 0x180fcc: 0x2603fa38  addiu       $v1, $s0, -0x5C8
    ctx->pc = 0x180fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    // 0x180fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180fd4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x180fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x180fd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180fe0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x180fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x180fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x180FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FE4u;
        // 0x180fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180FECu;
    // 0x180fec: 0x0  nop
    ctx->pc = 0x180fecu;
    // NOP
    ctx->pc = 0x180ff0u;
}
