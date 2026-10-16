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

// Function: sub_00314EB8
// Address: 0x314eb8 - 0x314f58
void sub_00314EB8_0x314eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314EB8_0x314eb8");
#endif

    switch (ctx->pc) {
        case 0x314efcu: goto label_314efc;
        default: break;
    }

    ctx->pc = 0x314eb8u;

    // 0x314eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x314ebc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x314ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x314ec0: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x314ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x314ec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x314ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314ecc: 0x8e026ccc  lw          $v0, 0x6CCC($s0)
    ctx->pc = 0x314eccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x686CCCu));
    // 0x314ed0: 0x8c450148  lw          $a1, 0x148($v0)
    ctx->pc = 0x314ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x314ed4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314ED4u;
    {
        const bool branch_taken_0x314ed4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x314ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314ED4u;
        // 0x314ed8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ed4) {
            ctx->pc = 0x314EE4u;
            goto label_314ee4;
        }
    }
    ctx->pc = 0x314EDCu;
    // 0x314edc: 0x2445014c  addiu       $a1, $v0, 0x14C
    ctx->pc = 0x314edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    // 0x314ee0: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x314ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
label_314ee4:
    // 0x314ee4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x314ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x314ee8: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x314ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x314eec: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x314EECu;
    {
        const bool branch_taken_0x314eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314eec) {
            ctx->pc = 0x314EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314EECu;
            // 0x314ef0: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314F28u;
            goto label_314f28;
        }
    }
    ctx->pc = 0x314EF4u;
    // 0x314ef4: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x314EF4u;
    SET_GPR_U32(ctx, 31, 0x314EFCu);
    ctx->pc = 0x314EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EF4u;
    // 0x314ef8: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x314EF4u, 0x314EFCu)) {
        return;
    }
    ctx->pc = 0x314EFCu;
label_314efc:
    // 0x314efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x314efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f00: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x314F00u;
    {
        const bool branch_taken_0x314f00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x314f00) {
            ctx->pc = 0x314F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314F00u;
            // 0x314f04: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314F10u;
            goto label_314f10;
        }
    }
    ctx->pc = 0x314F08u;
    // 0x314f08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x314F08u;
    {
        const bool branch_taken_0x314f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F08u;
        // 0x314f0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f08) {
            ctx->pc = 0x314F40u;
            goto label_314f40;
        }
    }
    ctx->pc = 0x314F10u;
label_314f10:
    // 0x314f10: 0x8e026ccc  lw          $v0, 0x6CCC($s0)
    ctx->pc = 0x314f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x314f14: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x314f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x314f18: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x314f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x314f1c: 0x8e026ccc  lw          $v0, 0x6CCC($s0)
    ctx->pc = 0x314f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x314f20: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x314f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
    // 0x314f24: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x314f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_314f28:
    // 0x314f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x314f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x314f30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x314f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x314f34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x314f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x314f38: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x314f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x314f3c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x314f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_314f40:
    // 0x314f40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x314f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x314F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F4Cu;
        // 0x314f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314F54u;
    // 0x314f54: 0x0  nop
    ctx->pc = 0x314f54u;
    // NOP
    ctx->pc = 0x314f58u;
}
