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

// Function: sub_00201F90
// Address: 0x201f90 - 0x201fe8
void sub_00201F90_0x201f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F90_0x201f90");
#endif

    switch (ctx->pc) {
        case 0x201fb8u: goto label_201fb8;
        case 0x201fccu: goto label_201fcc;
        default: break;
    }

    ctx->pc = 0x201f90u;

    // 0x201f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201f94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201f98: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x201f98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x201f9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201fa0: 0x8e222cd8  lw          $v0, 0x2CD8($s1)
    ctx->pc = 0x201fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702CD8u));
    // 0x201fa4: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x201fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x201fa8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201FA8u;
    {
        const bool branch_taken_0x201fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FA8u;
        // 0x201fac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fa8) {
            ctx->pc = 0x201FCCu;
            goto label_201fcc;
        }
    }
    ctx->pc = 0x201FB0u;
    // 0x201fb0: 0xc0807fa  jal         func_201FE8
    ctx->pc = 0x201FB0u;
    SET_GPR_U32(ctx, 31, 0x201FB8u);
    ctx->pc = 0x201FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FB0u;
    // 0x201fb4: 0x26044158  addiu       $a0, $s0, 0x4158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201FE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201FE8u, 0x201FB0u, 0x201FB8u)) {
        return;
    }
    ctx->pc = 0x201FB8u;
label_201fb8:
    // 0x201fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201fbc: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x201fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x201fc0: 0xae222cd8  sw          $v0, 0x2CD8($s1)
    ctx->pc = 0x201fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11480), GPR_U32(ctx, 2));
    // 0x201fc4: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x201FC4u;
    SET_GPR_U32(ctx, 31, 0x201FCCu);
    ctx->pc = 0x201FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FC4u;
    // 0x201fc8: 0x24842790  addiu       $a0, $a0, 0x2790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x201FC4u, 0x201FCCu)) {
        return;
    }
    ctx->pc = 0x201FCCu;
label_201fcc:
    // 0x201fcc: 0x26024158  addiu       $v0, $s0, 0x4158
    ctx->pc = 0x201fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16728));
    // 0x201fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201fd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x201fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x201FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FDCu;
        // 0x201fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201FE4u;
    // 0x201fe4: 0x0  nop
    ctx->pc = 0x201fe4u;
    // NOP
    ctx->pc = 0x201fe8u;
}
