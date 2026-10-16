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

// Function: sub_00205F98
// Address: 0x205f98 - 0x206020
void sub_00205F98_0x205f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205F98_0x205f98");
#endif

    switch (ctx->pc) {
        case 0x205fb4u: goto label_205fb4;
        case 0x205fc8u: goto label_205fc8;
        case 0x205ffcu: goto label_205ffc;
        case 0x206004u: goto label_206004;
        case 0x20600cu: goto label_20600c;
        default: break;
    }

    ctx->pc = 0x205f98u;

    // 0x205f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x205f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x205fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fa4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x205FA4u;
    {
        const bool branch_taken_0x205fa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FA4u;
        // 0x205fa8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fa4) {
            ctx->pc = 0x205FFCu;
            goto label_205ffc;
        }
    }
    ctx->pc = 0x205FACu;
    // 0x205fac: 0xc0815b2  jal         func_2056C8
    ctx->pc = 0x205FACu;
    SET_GPR_U32(ctx, 31, 0x205FB4u);
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205FACu, 0x205FB4u)) {
        return;
    }
    ctx->pc = 0x205FB4u;
label_205fb4:
    // 0x205fb4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x205fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x205fb8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x205FB8u;
    {
        const bool branch_taken_0x205fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FB8u;
        // 0x205fbc: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fb8) {
            ctx->pc = 0x205FE8u;
            goto label_205fe8;
        }
    }
    ctx->pc = 0x205FC0u;
    // 0x205fc0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x205fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205fc4: 0x0  nop
    ctx->pc = 0x205fc4u;
    // NOP
label_205fc8:
    // 0x205fc8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x205fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x205fcc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x205fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x205fd0: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x205FD0u;
    {
        const bool branch_taken_0x205fd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x205fd0) {
            ctx->pc = 0x205FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205FD0u;
            // 0x205fd4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205FE0u;
            goto label_205fe0;
        }
    }
    ctx->pc = 0x205FD8u;
    // 0x205fd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205FD8u;
    {
        const bool branch_taken_0x205fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FD8u;
        // 0x205fdc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fd8) {
            ctx->pc = 0x205FECu;
            goto label_205fec;
        }
    }
    ctx->pc = 0x205FE0u;
label_205fe0:
    // 0x205fe0: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205FE0u;
    {
        const bool branch_taken_0x205fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x205fe0) {
            ctx->pc = 0x205FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205FE0u;
            // 0x205fe4: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205fc8;
        }
    }
    ctx->pc = 0x205FE8u;
label_205fe8:
    // 0x205fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205fec:
    // 0x205fec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205FECu;
    {
        const bool branch_taken_0x205fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FECu;
        // 0x205ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fec) {
            ctx->pc = 0x205FFCu;
            goto label_205ffc;
        }
    }
    ctx->pc = 0x205FF4u;
    // 0x205ff4: 0xc09366a  jal         func_24D9A8
    ctx->pc = 0x205FF4u;
    SET_GPR_U32(ctx, 31, 0x205FFCu);
    ctx->pc = 0x205FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FF4u;
    // 0x205ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x205FF4u, 0x205FFCu)) {
        return;
    }
    ctx->pc = 0x205FFCu;
label_205ffc:
    // 0x205ffc: 0xc067c34  jal         func_19F0D0
    ctx->pc = 0x205FFCu;
    SET_GPR_U32(ctx, 31, 0x206004u);
    ctx->pc = 0x19F0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F0D0u, 0x205FFCu, 0x206004u)) {
        return;
    }
    ctx->pc = 0x206004u;
label_206004:
    // 0x206004: 0xc081536  jal         func_2054D8
    ctx->pc = 0x206004u;
    SET_GPR_U32(ctx, 31, 0x20600Cu);
    ctx->pc = 0x2054D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2054D8u, 0x206004u, 0x20600Cu)) {
        return;
    }
    ctx->pc = 0x20600Cu;
label_20600c:
    // 0x20600c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20600cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206014: 0x3e00008  jr          $ra
    ctx->pc = 0x206014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206014u;
        // 0x206018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20601Cu;
    // 0x20601c: 0x0  nop
    ctx->pc = 0x20601cu;
    // NOP
    ctx->pc = 0x206020u;
}
