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

// Function: sub_0018B3A8
// Address: 0x18b3a8 - 0x18b480
void sub_0018B3A8_0x18b3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B3A8_0x18b3a8");
#endif

    switch (ctx->pc) {
        case 0x18b3d8u: goto label_18b3d8;
        case 0x18b408u: goto label_18b408;
        case 0x18b414u: goto label_18b414;
        case 0x18b464u: goto label_18b464;
        default: break;
    }

    ctx->pc = 0x18b3a8u;

    // 0x18b3a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18b3ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b3b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18b3b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18b3bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b3c0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18b3c4: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x18b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x18b3c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18B3C8u;
    {
        const bool branch_taken_0x18b3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3C8u;
        // 0x18b3cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3c8) {
            ctx->pc = 0x18B3F4u;
            goto label_18b3f4;
        }
    }
    ctx->pc = 0x18B3D0u;
    // 0x18b3d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b3d4: 0x0  nop
    ctx->pc = 0x18b3d4u;
    // NOP
label_18b3d8:
    // 0x18b3d8: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B3D8u;
    {
        const bool branch_taken_0x18b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b3d8) {
            ctx->pc = 0x18B3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B3D8u;
            // 0x18b3dc: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B3E8u;
            goto label_18b3e8;
        }
    }
    ctx->pc = 0x18B3E0u;
    // 0x18b3e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B3E0u;
    {
        const bool branch_taken_0x18b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3E0u;
        // 0x18b3e4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3e0) {
            ctx->pc = 0x18B3F4u;
            goto label_18b3f4;
        }
    }
    ctx->pc = 0x18B3E8u;
label_18b3e8:
    // 0x18b3e8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18B3E8u;
    {
        const bool branch_taken_0x18b3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b3e8) {
            ctx->pc = 0x18B3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B3E8u;
            // 0x18b3ec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b3d8;
        }
    }
    ctx->pc = 0x18B3F0u;
    // 0x18b3f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b3f4:
    // 0x18b3f4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18B3F4u;
    {
        const bool branch_taken_0x18b3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3F4u;
        // 0x18b3f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3f4) {
            ctx->pc = 0x18B468u;
            goto label_18b468;
        }
    }
    ctx->pc = 0x18B3FCu;
    // 0x18b3fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b400: 0xc062dc0  jal         func_18B700
    ctx->pc = 0x18B400u;
    SET_GPR_U32(ctx, 31, 0x18B408u);
    ctx->pc = 0x18B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B400u;
    // 0x18b404: 0x26510038  addiu       $s1, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B700u, 0x18B400u, 0x18B408u)) {
        return;
    }
    ctx->pc = 0x18B408u;
label_18b408:
    // 0x18b408: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x18b408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b40c: 0xc080858  jal         func_202160
    ctx->pc = 0x18B40Cu;
    SET_GPR_U32(ctx, 31, 0x18B414u);
    ctx->pc = 0x18B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B40Cu;
    // 0x18b410: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18B40Cu, 0x18B414u)) {
        return;
    }
    ctx->pc = 0x18B414u;
label_18b414:
    // 0x18b414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b418: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x18b418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x18b41c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18b420: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18b420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18b424: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18b424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x18b428: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18b42c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18B42Cu;
    {
        const bool branch_taken_0x18b42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b42c) {
            ctx->pc = 0x18B430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B42Cu;
            // 0x18b430: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B434u;
            goto label_18b434;
        }
    }
    ctx->pc = 0x18B434u;
label_18b434:
    // 0x18b434: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18b438: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18B438u;
    {
        const bool branch_taken_0x18b438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b438) {
            ctx->pc = 0x18B43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B438u;
            // 0x18b43c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B440u;
            goto label_18b440;
        }
    }
    ctx->pc = 0x18B440u;
label_18b440:
    // 0x18b440: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x18b440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x18b444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b448: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18b448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b44c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x18b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x18b450: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18b450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b458: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x18b458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x18b45c: 0xc062aa0  jal         func_18AA80
    ctx->pc = 0x18B45Cu;
    SET_GPR_U32(ctx, 31, 0x18B464u);
    ctx->pc = 0x18B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B45Cu;
    // 0x18b460: 0x8c650044  lw          $a1, 0x44($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AA80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18AA80u, 0x18B45Cu, 0x18B464u)) {
        return;
    }
    ctx->pc = 0x18B464u;
label_18b464:
    // 0x18b464: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18b464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18b468:
    // 0x18b468: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18b468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b46c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b474: 0x3e00008  jr          $ra
    ctx->pc = 0x18B474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B474u;
        // 0x18b478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B47Cu;
    // 0x18b47c: 0x0  nop
    ctx->pc = 0x18b47cu;
    // NOP
    ctx->pc = 0x18b480u;
}
