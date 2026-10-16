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

// Function: sub_0010F398
// Address: 0x10f398 - 0x10f438
void sub_0010F398_0x10f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F398_0x10f398");
#endif

    switch (ctx->pc) {
        case 0x10f3d8u: goto label_10f3d8;
        case 0x10f3ecu: goto label_10f3ec;
        default: break;
    }

    ctx->pc = 0x10f398u;

    // 0x10f398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10f39c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10f3a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10f3a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f3a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10f3ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10f3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10f3b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f3b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10f3b8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10F3B8u;
    {
        const bool branch_taken_0x10f3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3B8u;
        // 0x10f3bc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3b8) {
            ctx->pc = 0x10F414u;
            goto label_10f414;
        }
    }
    ctx->pc = 0x10F3C0u;
    // 0x10f3c0: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x10F3C0u;
    {
        const bool branch_taken_0x10f3c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3C0u;
        // 0x10f3c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3c0) {
            ctx->pc = 0x10F418u;
            goto label_10f418;
        }
    }
    ctx->pc = 0x10F3C8u;
    // 0x10f3c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f3cc: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10F3CCu;
    {
        const bool branch_taken_0x10f3cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x10F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3CCu;
        // 0x10f3d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3cc) {
            ctx->pc = 0x10F414u;
            goto label_10f414;
        }
    }
    ctx->pc = 0x10F3D4u;
    // 0x10f3d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10f3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f3d8:
    // 0x10f3d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10f3dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10f3e4: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x10F3E4u;
    SET_GPR_U32(ctx, 31, 0x10F3ECu);
    ctx->pc = 0x10F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3E4u;
    // 0x10f3e8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x10F3E4u, 0x10F3ECu)) {
        return;
    }
    ctx->pc = 0x10F3ECu;
label_10f3ec:
    // 0x10f3ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F3ECu;
    {
        const bool branch_taken_0x10f3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3ECu;
        // 0x10f3f0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3ec) {
            ctx->pc = 0x10F400u;
            goto label_10f400;
        }
    }
    ctx->pc = 0x10F3F4u;
    // 0x10f3f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10f3f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10F3F8u;
    {
        const bool branch_taken_0x10f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3F8u;
        // 0x10f3fc: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3f8) {
            ctx->pc = 0x10F418u;
            goto label_10f418;
        }
    }
    ctx->pc = 0x10F400u;
label_10f400:
    // 0x10f400: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10f400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10f404: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f408: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10f408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10f40c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x10F40Cu;
    {
        const bool branch_taken_0x10f40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F40Cu;
        // 0x10f410: 0x26310038  addiu       $s1, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f40c) {
            ctx->pc = 0x10F3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f3d8;
        }
    }
    ctx->pc = 0x10F414u;
label_10f414:
    // 0x10f414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f418:
    // 0x10f418: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10f418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f41c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10f41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10f420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f424: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10f424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f42c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F42Cu;
        // 0x10f430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F434u;
    // 0x10f434: 0x0  nop
    ctx->pc = 0x10f434u;
    // NOP
    ctx->pc = 0x10f438u;
}
