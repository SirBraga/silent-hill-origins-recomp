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

// Function: sub_0017B320
// Address: 0x17b320 - 0x17b3d8
void sub_0017B320_0x17b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B320_0x17b320");
#endif

    switch (ctx->pc) {
        case 0x17b350u: goto label_17b350;
        case 0x17b378u: goto label_17b378;
        case 0x17b39cu: goto label_17b39c;
        case 0x17b3a8u: goto label_17b3a8;
        default: break;
    }

    ctx->pc = 0x17b320u;

    // 0x17b320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b324: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17b328: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17b32c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b330: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17b330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17b334: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17b334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17b338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b33c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x17b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17b340: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B340u;
    {
        const bool branch_taken_0x17b340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B340u;
        // 0x17b344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b340) {
            ctx->pc = 0x17B354u;
            goto label_17b354;
        }
    }
    ctx->pc = 0x17B348u;
    // 0x17b348: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17B348u;
    SET_GPR_U32(ctx, 31, 0x17B350u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17B348u, 0x17B350u)) {
        return;
    }
    ctx->pc = 0x17B350u;
label_17b350:
    // 0x17b350: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17b350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17b354:
    // 0x17b354: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17B354u;
    {
        const bool branch_taken_0x17b354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B354u;
        // 0x17b358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b354) {
            ctx->pc = 0x17B3B8u;
            goto label_17b3b8;
        }
    }
    ctx->pc = 0x17B35Cu;
    // 0x17b35c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b360: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17B360u;
    {
        const bool branch_taken_0x17b360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B360u;
        // 0x17b364: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b360) {
            ctx->pc = 0x17B3B4u;
            goto label_17b3b4;
        }
    }
    ctx->pc = 0x17B368u;
    // 0x17b368: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x17b36c: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x17b36cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x17b370: 0x8e63f8a8  lw          $v1, -0x758($s3)
    ctx->pc = 0x17b370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF8A8u));
    // 0x17b374: 0x0  nop
    ctx->pc = 0x17b374u;
    // NOP
label_17b378:
    // 0x17b378: 0x8e421a70  lw          $v0, 0x1A70($s2)
    ctx->pc = 0x17b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x17b37c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B37Cu;
    {
        const bool branch_taken_0x17b37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b37c) {
            ctx->pc = 0x17B380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B37Cu;
            // 0x17b380: 0x8e3000b4  lw          $s0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B3A0u;
            goto label_17b3a0;
        }
    }
    ctx->pc = 0x17B384u;
    // 0x17b384: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B388u;
    {
        const bool branch_taken_0x17b388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B388u;
        // 0x17b38c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b388) {
            ctx->pc = 0x17B39Cu;
            goto label_17b39c;
        }
    }
    ctx->pc = 0x17B390u;
    // 0x17b390: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17b390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17b394: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17B394u;
    SET_GPR_U32(ctx, 31, 0x17B39Cu);
    ctx->pc = 0x17B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B394u;
    // 0x17b398: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17B394u, 0x17B39Cu)) {
        return;
    }
    ctx->pc = 0x17B39Cu;
label_17b39c:
    // 0x17b39c: 0x8e3000b4  lw          $s0, 0xB4($s1)
    ctx->pc = 0x17b39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_17b3a0:
    // 0x17b3a0: 0xc05df28  jal         func_177CA0
    ctx->pc = 0x17B3A0u;
    SET_GPR_U32(ctx, 31, 0x17B3A8u);
    ctx->pc = 0x17B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B3A0u;
    // 0x17b3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x177CA0u, 0x17B3A0u, 0x17B3A8u)) {
        return;
    }
    ctx->pc = 0x17B3A8u;
label_17b3a8:
    // 0x17b3a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x17b3a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3ac: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17B3ACu;
    {
        const bool branch_taken_0x17b3ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3ACu;
        // 0x17b3b0: 0x8e63f8a8  lw          $v1, -0x758($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3ac) {
            ctx->pc = 0x17B378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b378;
        }
    }
    ctx->pc = 0x17B3B4u;
label_17b3b4:
    // 0x17b3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b3b8:
    // 0x17b3b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17b3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b3bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17b3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b3c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17b3c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b3c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17b3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b3c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3CCu;
        // 0x17b3d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B3D4u;
    // 0x17b3d4: 0x0  nop
    ctx->pc = 0x17b3d4u;
    // NOP
    ctx->pc = 0x17b3d8u;
}
