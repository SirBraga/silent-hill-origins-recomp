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

// Function: sub_001F4EE0
// Address: 0x1f4ee0 - 0x1f4f58
void sub_001F4EE0_0x1f4ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4EE0_0x1f4ee0");
#endif

    switch (ctx->pc) {
        case 0x1f4f20u: goto label_1f4f20;
        case 0x1f4f2cu: goto label_1f4f2c;
        default: break;
    }

    ctx->pc = 0x1f4ee0u;

label_1f4ee0:
    // 0x1f4ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4ee4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f4ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f4eec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f4eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f4ef0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f4ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4ef8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1f4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f4efc: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x1f4efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x1f4f00: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1f4f00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x1f4f04: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1F4F04u;
    {
        const bool branch_taken_0x1f4f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F04u;
        // 0x1f4f08: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f04) {
            ctx->pc = 0x1F4F40u;
            goto label_1f4f40;
        }
    }
    ctx->pc = 0x1F4F0Cu;
    // 0x1f4f0c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F4F0Cu;
    {
        const bool branch_taken_0x1f4f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F0Cu;
        // 0x1f4f10: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f0c) {
            ctx->pc = 0x1F4F40u;
            goto label_1f4f40;
        }
    }
    ctx->pc = 0x1F4F14u;
    // 0x1f4f14: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4F14u;
    {
        const bool branch_taken_0x1f4f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f14) {
            ctx->pc = 0x1F4F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4F14u;
            // 0x1f4f18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4F44u;
            goto label_1f4f44;
        }
    }
    ctx->pc = 0x1F4F1Cu;
    // 0x1f4f1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f4f20:
    // 0x1f4f20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f24: 0xc07d3b8  jal         func_1F4EE0
    ctx->pc = 0x1F4F24u;
    SET_GPR_U32(ctx, 31, 0x1F4F2Cu);
    ctx->pc = 0x1F4F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F24u;
    // 0x1f4f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EE0u;
    goto label_1f4ee0;
    ctx->pc = 0x1F4F2Cu;
label_1f4f2c:
    // 0x1f4f2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f4f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4F30u;
    {
        const bool branch_taken_0x1f4f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F30u;
        // 0x1f4f34: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f30) {
            ctx->pc = 0x1F4F40u;
            goto label_1f4f40;
        }
    }
    ctx->pc = 0x1F4F38u;
    // 0x1f4f38: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F4F38u;
    {
        const bool branch_taken_0x1f4f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f38) {
            ctx->pc = 0x1F4F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4F38u;
            // 0x1f4f3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4f20;
        }
    }
    ctx->pc = 0x1F4F40u;
label_1f4f40:
    // 0x1f4f40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f4f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4f44:
    // 0x1f4f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F4Cu;
        // 0x1f4f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4F54u;
    // 0x1f4f54: 0x0  nop
    ctx->pc = 0x1f4f54u;
    // NOP
    ctx->pc = 0x1f4f58u;
}
