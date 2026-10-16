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

// Function: sub_00180ED8
// Address: 0x180ed8 - 0x180f38
void sub_00180ED8_0x180ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180ED8_0x180ed8");
#endif

    switch (ctx->pc) {
        case 0x180f00u: goto label_180f00;
        case 0x180f14u: goto label_180f14;
        case 0x180f24u: goto label_180f24;
        default: break;
    }

    ctx->pc = 0x180ed8u;

    // 0x180ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180ee0: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x180ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x180ee4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x180ee8: 0x8e22fa60  lw          $v0, -0x5A0($s1)
    ctx->pc = 0x180ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x180eec: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x180eecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x180ef0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180EF0u;
    {
        const bool branch_taken_0x180ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EF0u;
        // 0x180ef4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ef0) {
            ctx->pc = 0x180F14u;
            goto label_180f14;
        }
    }
    ctx->pc = 0x180EF8u;
    // 0x180ef8: 0xc060300  jal         func_180C00
    ctx->pc = 0x180EF8u;
    SET_GPR_U32(ctx, 31, 0x180F00u);
    ctx->pc = 0x180EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EF8u;
    // 0x180efc: 0x2604fa38  addiu       $a0, $s0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x180EF8u, 0x180F00u)) {
        return;
    }
    ctx->pc = 0x180F00u;
label_180f00:
    // 0x180f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180f04: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x180f08: 0xae22fa60  sw          $v0, -0x5A0($s1)
    ctx->pc = 0x180f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965856), GPR_U32(ctx, 2));
    // 0x180f0c: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x180F0Cu;
    SET_GPR_U32(ctx, 31, 0x180F14u);
    ctx->pc = 0x180F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F0Cu;
    // 0x180f10: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x180F0Cu, 0x180F14u)) {
        return;
    }
    ctx->pc = 0x180F14u;
label_180f14:
    // 0x180f14: 0x2602fa38  addiu       $v0, $s0, -0x5C8
    ctx->pc = 0x180f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    // 0x180f18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f1c: 0xc060ae6  jal         func_182B98
    ctx->pc = 0x180F1Cu;
    SET_GPR_U32(ctx, 31, 0x180F24u);
    ctx->pc = 0x180F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F1Cu;
    // 0x180f20: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182B98u, 0x180F1Cu, 0x180F24u)) {
        return;
    }
    ctx->pc = 0x180F24u;
label_180f24:
    // 0x180f24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180f30: 0x3e00008  jr          $ra
    ctx->pc = 0x180F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F30u;
        // 0x180f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180F38u;
}
