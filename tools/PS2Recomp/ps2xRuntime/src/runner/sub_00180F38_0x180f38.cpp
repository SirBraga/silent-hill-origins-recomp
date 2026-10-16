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

// Function: sub_00180F38
// Address: 0x180f38 - 0x180f90
void sub_00180F38_0x180f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180F38_0x180f38");
#endif

    switch (ctx->pc) {
        case 0x180f60u: goto label_180f60;
        case 0x180f74u: goto label_180f74;
        case 0x180f7cu: goto label_180f7c;
        default: break;
    }

    ctx->pc = 0x180f38u;

    // 0x180f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180f40: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x180f40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x180f44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x180f48: 0x8e22fa60  lw          $v0, -0x5A0($s1)
    ctx->pc = 0x180f48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x180f4c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x180f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x180f50: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180F50u;
    {
        const bool branch_taken_0x180f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F50u;
        // 0x180f54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f50) {
            ctx->pc = 0x180F74u;
            goto label_180f74;
        }
    }
    ctx->pc = 0x180F58u;
    // 0x180f58: 0xc060300  jal         func_180C00
    ctx->pc = 0x180F58u;
    SET_GPR_U32(ctx, 31, 0x180F60u);
    ctx->pc = 0x180F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F58u;
    // 0x180f5c: 0x2604fa38  addiu       $a0, $s0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x180F58u, 0x180F60u)) {
        return;
    }
    ctx->pc = 0x180F60u;
label_180f60:
    // 0x180f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180f64: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x180f68: 0xae22fa60  sw          $v0, -0x5A0($s1)
    ctx->pc = 0x180f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965856), GPR_U32(ctx, 2));
    // 0x180f6c: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x180F6Cu;
    SET_GPR_U32(ctx, 31, 0x180F74u);
    ctx->pc = 0x180F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F6Cu;
    // 0x180f70: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x180F6Cu, 0x180F74u)) {
        return;
    }
    ctx->pc = 0x180F74u;
label_180f74:
    // 0x180f74: 0xc06028e  jal         func_180A38
    ctx->pc = 0x180F74u;
    SET_GPR_U32(ctx, 31, 0x180F7Cu);
    ctx->pc = 0x180F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F74u;
    // 0x180f78: 0x2604fa38  addiu       $a0, $s0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180A38u, 0x180F74u, 0x180F7Cu)) {
        return;
    }
    ctx->pc = 0x180F7Cu;
label_180f7c:
    // 0x180f7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180f88: 0x3e00008  jr          $ra
    ctx->pc = 0x180F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F88u;
        // 0x180f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180F90u;
}
