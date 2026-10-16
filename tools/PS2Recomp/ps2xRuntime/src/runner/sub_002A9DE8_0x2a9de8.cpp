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

// Function: sub_002A9DE8
// Address: 0x2a9de8 - 0x2a9e80
void sub_002A9DE8_0x2a9de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9DE8_0x2a9de8");
#endif

    switch (ctx->pc) {
        case 0x2a9e30u: goto label_2a9e30;
        case 0x2a9e44u: goto label_2a9e44;
        default: break;
    }

    ctx->pc = 0x2a9de8u;

label_2a9de8:
    // 0x2a9de8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a9de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a9dec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a9decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2a9df0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2a9df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a9df4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a9df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9df8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a9df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a9dfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a9e00: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a9e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a9e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9e08: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2a9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2a9e0c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2a9e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9e10: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A9E10u;
    {
        const bool branch_taken_0x2a9e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E10u;
        // 0x2a9e14: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e10) {
            ctx->pc = 0x2A9E58u;
            goto label_2a9e58;
        }
    }
    ctx->pc = 0x2A9E18u;
    // 0x2a9e18: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2a9e1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a9e20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A9E20u;
    {
        const bool branch_taken_0x2a9e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E20u;
        // 0x2a9e24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e20) {
            ctx->pc = 0x2A9E58u;
            goto label_2a9e58;
        }
    }
    ctx->pc = 0x2A9E28u;
    // 0x2a9e28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a9e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e2c: 0x0  nop
    ctx->pc = 0x2a9e2cu;
    // NOP
label_2a9e30:
    // 0x2a9e30: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a9e34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a9e34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9e38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a9e3c: 0xc0aa77a  jal         func_2A9DE8
    ctx->pc = 0x2A9E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A9E44u);
    ctx->pc = 0x2A9E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E3Cu;
    // 0x2a9e40: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DE8u;
    goto label_2a9de8;
    ctx->pc = 0x2A9E44u;
label_2a9e44:
    // 0x2a9e44: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2a9e48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a9e4c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2a9e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a9e50: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A9E50u;
    {
        const bool branch_taken_0x2a9e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E50u;
        // 0x2a9e54: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e50) {
            ctx->pc = 0x2A9E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9e30;
        }
    }
    ctx->pc = 0x2A9E58u;
label_2a9e58:
    // 0x2a9e58: 0xe6540050  swc1        $f20, 0x50($s2)
    ctx->pc = 0x2a9e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2a9e5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a9e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9e60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a9e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9e64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a9e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9e6c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2a9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E70u;
        // 0x2a9e74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9E78u;
    // 0x2a9e78: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x2a9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x2a9e7c: 0x0  nop
    ctx->pc = 0x2a9e7cu;
    // NOP
    ctx->pc = 0x2a9e80u;
}
