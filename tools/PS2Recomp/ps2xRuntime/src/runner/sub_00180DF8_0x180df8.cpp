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

// Function: sub_00180DF8
// Address: 0x180df8 - 0x180e70
void sub_00180DF8_0x180df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180DF8_0x180df8");
#endif

    switch (ctx->pc) {
        case 0x180e30u: goto label_180e30;
        case 0x180e44u: goto label_180e44;
        case 0x180e54u: goto label_180e54;
        default: break;
    }

    ctx->pc = 0x180df8u;

    // 0x180df8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x180df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x180dfc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x180dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x180e00: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x180e04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x180e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x180e08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x180e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x180e0c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x180e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x180e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180e14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x180e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e18: 0x8e62fa60  lw          $v0, -0x5A0($s3)
    ctx->pc = 0x180e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x180e1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x180e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180E20u;
    {
        const bool branch_taken_0x180e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E20u;
        // 0x180e24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e20) {
            ctx->pc = 0x180E44u;
            goto label_180e44;
        }
    }
    ctx->pc = 0x180E28u;
    // 0x180e28: 0xc060300  jal         func_180C00
    ctx->pc = 0x180E28u;
    SET_GPR_U32(ctx, 31, 0x180E30u);
    ctx->pc = 0x180E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E28u;
    // 0x180e2c: 0x2604fa38  addiu       $a0, $s0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x180E28u, 0x180E30u)) {
        return;
    }
    ctx->pc = 0x180E30u;
label_180e30:
    // 0x180e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180e34: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x180e38: 0xae62fa60  sw          $v0, -0x5A0($s3)
    ctx->pc = 0x180e38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294965856), GPR_U32(ctx, 2));
    // 0x180e3c: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x180E3Cu;
    SET_GPR_U32(ctx, 31, 0x180E44u);
    ctx->pc = 0x180E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E3Cu;
    // 0x180e40: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x180E3Cu, 0x180E44u)) {
        return;
    }
    ctx->pc = 0x180E44u;
label_180e44:
    // 0x180e44: 0x2604fa38  addiu       $a0, $s0, -0x5C8
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    // 0x180e48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e4c: 0xc0601f6  jal         func_1807D8
    ctx->pc = 0x180E4Cu;
    SET_GPR_U32(ctx, 31, 0x180E54u);
    ctx->pc = 0x180E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E4Cu;
    // 0x180e50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1807D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1807D8u, 0x180E4Cu, 0x180E54u)) {
        return;
    }
    ctx->pc = 0x180E54u;
label_180e54:
    // 0x180e54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x180e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180e58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x180e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180e60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x180e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e68: 0x3e00008  jr          $ra
    ctx->pc = 0x180E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E68u;
        // 0x180e6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E70u;
}
