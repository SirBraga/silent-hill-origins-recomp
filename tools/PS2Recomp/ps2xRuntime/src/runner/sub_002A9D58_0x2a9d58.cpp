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

// Function: sub_002A9D58
// Address: 0x2a9d58 - 0x2a9de8
void sub_002A9D58_0x2a9d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9D58_0x2a9d58");
#endif

    switch (ctx->pc) {
        case 0x2a9da0u: goto label_2a9da0;
        case 0x2a9db4u: goto label_2a9db4;
        default: break;
    }

    ctx->pc = 0x2a9d58u;

label_2a9d58:
    // 0x2a9d58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a9d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a9d5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a9d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2a9d60: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2a9d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a9d64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a9d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a9d6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a9d70: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a9d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a9d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9d78: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2a9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2a9d7c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2a9d7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9d80: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A9D80u;
    {
        const bool branch_taken_0x2a9d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D80u;
        // 0x2a9d84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d80) {
            ctx->pc = 0x2A9DC8u;
            goto label_2a9dc8;
        }
    }
    ctx->pc = 0x2A9D88u;
    // 0x2a9d88: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2a9d8c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a9d90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A9D90u;
    {
        const bool branch_taken_0x2a9d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D90u;
        // 0x2a9d94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d90) {
            ctx->pc = 0x2A9DC8u;
            goto label_2a9dc8;
        }
    }
    ctx->pc = 0x2A9D98u;
    // 0x2a9d98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a9d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d9c: 0x0  nop
    ctx->pc = 0x2a9d9cu;
    // NOP
label_2a9da0:
    // 0x2a9da0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a9da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a9da4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a9da4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9da8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a9dac: 0xc0aa756  jal         func_2A9D58
    ctx->pc = 0x2A9DACu;
    SET_GPR_U32(ctx, 31, 0x2A9DB4u);
    ctx->pc = 0x2A9DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DACu;
    // 0x2a9db0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D58u;
    goto label_2a9d58;
    ctx->pc = 0x2A9DB4u;
label_2a9db4:
    // 0x2a9db4: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2a9db8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a9dbc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2a9dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a9dc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A9DC0u;
    {
        const bool branch_taken_0x2a9dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9DC0u;
        // 0x2a9dc4: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9dc0) {
            ctx->pc = 0x2A9DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9da0;
        }
    }
    ctx->pc = 0x2A9DC8u;
label_2a9dc8:
    // 0x2a9dc8: 0xe6540054  swc1        $f20, 0x54($s2)
    ctx->pc = 0x2a9dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x2a9dcc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a9dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9dd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a9dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9dd4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a9dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9ddc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2a9ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9de0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9DE0u;
        // 0x2a9de4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9DE8u;
}
