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

// Function: sub_0018A2A8
// Address: 0x18a2a8 - 0x18a388
void sub_0018A2A8_0x18a2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A2A8_0x18a2a8");
#endif

    switch (ctx->pc) {
        case 0x18a2e0u: goto label_18a2e0;
        case 0x18a2e8u: goto label_18a2e8;
        case 0x18a328u: goto label_18a328;
        case 0x18a334u: goto label_18a334;
        default: break;
    }

    ctx->pc = 0x18a2a8u;

    // 0x18a2a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18a2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18a2ac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18a2b0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18a2b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18a2b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a2b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18a2bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18a2bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a2c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18a2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18a2c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18a2c8: 0x16800013  bnez        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x18A2C8u;
    {
        const bool branch_taken_0x18a2c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2C8u;
        // 0x18a2cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2c8) {
            ctx->pc = 0x18A318u;
            goto label_18a318;
        }
    }
    ctx->pc = 0x18A2D0u;
    // 0x18a2d0: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x18a2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x18a2d4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x18A2D4u;
    {
        const bool branch_taken_0x18a2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2D4u;
        // 0x18a2d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2d4) {
            ctx->pc = 0x18A35Cu;
            goto label_18a35c;
        }
    }
    ctx->pc = 0x18A2DCu;
    // 0x18a2dc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x18a2dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a2e0:
    // 0x18a2e0: 0xc062636  jal         func_1898D8
    ctx->pc = 0x18A2E0u;
    SET_GPR_U32(ctx, 31, 0x18A2E8u);
    ctx->pc = 0x18A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A2E0u;
    // 0x18a2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1898D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1898D8u, 0x18A2E0u, 0x18A2E8u)) {
        return;
    }
    ctx->pc = 0x18A2E8u;
label_18a2e8:
    // 0x18a2e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A2E8u;
    {
        const bool branch_taken_0x18a2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2E8u;
        // 0x18a2ec: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2e8) {
            ctx->pc = 0x18A304u;
            goto label_18a304;
        }
    }
    ctx->pc = 0x18A2F0u;
    // 0x18a2f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A2F0u;
    {
        const bool branch_taken_0x18a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a2f0) {
            ctx->pc = 0x18A2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A2F0u;
            // 0x18a2f4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A308u;
            goto label_18a308;
        }
    }
    ctx->pc = 0x18A2F8u;
    // 0x18a2f8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x18a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x18a2fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18a2fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18a300: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x18a300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_18a304:
    // 0x18a304: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18a304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18a308:
    // 0x18a308: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x18A308u;
    {
        const bool branch_taken_0x18a308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a308) {
            ctx->pc = 0x18A30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A308u;
            // 0x18a30c: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a2e0;
        }
    }
    ctx->pc = 0x18A310u;
    // 0x18a310: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18A310u;
    {
        const bool branch_taken_0x18a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A310u;
        // 0x18a314: 0x3a620002  xori        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a310) {
            ctx->pc = 0x18A360u;
            goto label_18a360;
        }
    }
    ctx->pc = 0x18A318u;
label_18a318:
    // 0x18a318: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x18a318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x18a31c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x18A31Cu;
    {
        const bool branch_taken_0x18a31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A31Cu;
        // 0x18a320: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a31c) {
            ctx->pc = 0x18A35Cu;
            goto label_18a35c;
        }
    }
    ctx->pc = 0x18A324u;
    // 0x18a324: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x18a324u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a328:
    // 0x18a328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a32c: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18A32Cu;
    SET_GPR_U32(ctx, 31, 0x18A334u);
    ctx->pc = 0x18A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A32Cu;
    // 0x18a330: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18A32Cu, 0x18A334u)) {
        return;
    }
    ctx->pc = 0x18A334u;
label_18a334:
    // 0x18a334: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A334u;
    {
        const bool branch_taken_0x18a334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A334u;
        // 0x18a338: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a334) {
            ctx->pc = 0x18A350u;
            goto label_18a350;
        }
    }
    ctx->pc = 0x18A33Cu;
    // 0x18a33c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A33Cu;
    {
        const bool branch_taken_0x18a33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a33c) {
            ctx->pc = 0x18A340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A33Cu;
            // 0x18a340: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A354u;
            goto label_18a354;
        }
    }
    ctx->pc = 0x18A344u;
    // 0x18a344: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x18a344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x18a348: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18a348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18a34c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x18a34cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_18a350:
    // 0x18a350: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18a350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18a354:
    // 0x18a354: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x18A354u;
    {
        const bool branch_taken_0x18a354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a354) {
            ctx->pc = 0x18A358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A354u;
            // 0x18a358: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a328;
        }
    }
    ctx->pc = 0x18A35Cu;
label_18a35c:
    // 0x18a35c: 0x3a620002  xori        $v0, $s3, 0x2
    ctx->pc = 0x18a35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
label_18a360:
    // 0x18a360: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18a360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a364: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18a364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a368: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18a368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x18a36c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18a36cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a370: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18a370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a374: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18a374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a37c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A37Cu;
        // 0x18a380: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A384u;
    // 0x18a384: 0x0  nop
    ctx->pc = 0x18a384u;
    // NOP
    ctx->pc = 0x18a388u;
}
