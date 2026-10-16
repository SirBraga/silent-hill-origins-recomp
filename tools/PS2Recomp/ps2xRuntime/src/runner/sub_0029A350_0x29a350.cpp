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

// Function: sub_0029A350
// Address: 0x29a350 - 0x29a3f0
void sub_0029A350_0x29a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A350_0x29a350");
#endif

    switch (ctx->pc) {
        case 0x29a3a4u: goto label_29a3a4;
        case 0x29a3bcu: goto label_29a3bc;
        default: break;
    }

    ctx->pc = 0x29a350u;

    // 0x29a350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a360: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a364: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29a364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29a368: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A368u;
    {
        const bool branch_taken_0x29a368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A368u;
        // 0x29a36c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a368) {
            ctx->pc = 0x29A37Cu;
            goto label_29a37c;
        }
    }
    ctx->pc = 0x29A370u;
    // 0x29a370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a374: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29A374u;
    {
        const bool branch_taken_0x29a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A374u;
        // 0x29a378: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a374) {
            ctx->pc = 0x29A3A8u;
            goto label_29a3a8;
        }
    }
    ctx->pc = 0x29A37Cu;
label_29a37c:
    // 0x29a37c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x29a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29a380: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A380u;
    {
        const bool branch_taken_0x29a380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A380u;
        // 0x29a384: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a380) {
            ctx->pc = 0x29A3A8u;
            goto label_29a3a8;
        }
    }
    ctx->pc = 0x29A388u;
    // 0x29a388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a38c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a390: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29a394: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A394u;
    {
        const bool branch_taken_0x29a394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A394u;
        // 0x29a398: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a394) {
            ctx->pc = 0x29A3A8u;
            goto label_29a3a8;
        }
    }
    ctx->pc = 0x29A39Cu;
    // 0x29a39c: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29A39Cu;
    SET_GPR_U32(ctx, 31, 0x29A3A4u);
    ctx->pc = 0x29A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A39Cu;
    // 0x29a3a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29A39Cu, 0x29A3A4u)) {
        return;
    }
    ctx->pc = 0x29A3A4u;
label_29a3a4:
    // 0x29a3a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a3a8:
    // 0x29a3a8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x29A3A8u;
    {
        const bool branch_taken_0x29a3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3A8u;
        // 0x29a3ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3a8) {
            ctx->pc = 0x29A3E0u;
            goto label_29a3e0;
        }
    }
    ctx->pc = 0x29A3B0u;
    // 0x29a3b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a3b4: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x29A3B4u;
    SET_GPR_U32(ctx, 31, 0x29A3BCu);
    ctx->pc = 0x29A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A3B4u;
    // 0x29a3b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x29A3B4u, 0x29A3BCu)) {
        return;
    }
    ctx->pc = 0x29A3BCu;
label_29a3bc:
    // 0x29a3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a3c4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A3C4u;
    {
        const bool branch_taken_0x29a3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3C4u;
        // 0x29a3c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3c4) {
            ctx->pc = 0x29A3E0u;
            goto label_29a3e0;
        }
    }
    ctx->pc = 0x29A3CCu;
    // 0x29a3cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a3d0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29a3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29a3d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x29a3d8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x29a3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x29a3dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29a3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a3e0:
    // 0x29a3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3E8u;
        // 0x29a3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A3F0u;
}
