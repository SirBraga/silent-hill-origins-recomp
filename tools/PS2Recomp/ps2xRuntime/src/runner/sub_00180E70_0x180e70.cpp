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

// Function: sub_00180E70
// Address: 0x180e70 - 0x180ed8
void sub_00180E70_0x180e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E70_0x180e70");
#endif

    switch (ctx->pc) {
        case 0x180e98u: goto label_180e98;
        case 0x180eacu: goto label_180eac;
        case 0x180ec0u: goto label_180ec0;
        default: break;
    }

    ctx->pc = 0x180e70u;

    // 0x180e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180e78: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x180e78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x180e7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x180e80: 0x8e22fa60  lw          $v0, -0x5A0($s1)
    ctx->pc = 0x180e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x180e84: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x180e84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x180e88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180E88u;
    {
        const bool branch_taken_0x180e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E88u;
        // 0x180e8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e88) {
            ctx->pc = 0x180EACu;
            goto label_180eac;
        }
    }
    ctx->pc = 0x180E90u;
    // 0x180e90: 0xc060300  jal         func_180C00
    ctx->pc = 0x180E90u;
    SET_GPR_U32(ctx, 31, 0x180E98u);
    ctx->pc = 0x180E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E90u;
    // 0x180e94: 0x2604fa38  addiu       $a0, $s0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x180E90u, 0x180E98u)) {
        return;
    }
    ctx->pc = 0x180E98u;
label_180e98:
    // 0x180e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180e9c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x180ea0: 0xae22fa60  sw          $v0, -0x5A0($s1)
    ctx->pc = 0x180ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965856), GPR_U32(ctx, 2));
    // 0x180ea4: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x180EA4u;
    SET_GPR_U32(ctx, 31, 0x180EACu);
    ctx->pc = 0x180EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EA4u;
    // 0x180ea8: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x180EA4u, 0x180EACu)) {
        return;
    }
    ctx->pc = 0x180EACu;
label_180eac:
    // 0x180eac: 0x2603fa38  addiu       $v1, $s0, -0x5C8
    ctx->pc = 0x180eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    // 0x180eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180eb4: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x180eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x180eb8: 0xc060ae6  jal         func_182B98
    ctx->pc = 0x180EB8u;
    SET_GPR_U32(ctx, 31, 0x180EC0u);
    ctx->pc = 0x180EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EB8u;
    // 0x180ebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182B98u, 0x180EB8u, 0x180EC0u)) {
        return;
    }
    ctx->pc = 0x180EC0u;
label_180ec0:
    // 0x180ec0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x180ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180ECCu;
        // 0x180ed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180ED4u;
    // 0x180ed4: 0x0  nop
    ctx->pc = 0x180ed4u;
    // NOP
    ctx->pc = 0x180ed8u;
}
