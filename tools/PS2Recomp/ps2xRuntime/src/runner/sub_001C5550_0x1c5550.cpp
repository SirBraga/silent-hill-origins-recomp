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

// Function: sub_001C5550
// Address: 0x1c5550 - 0x1c5630
void sub_001C5550_0x1c5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5550_0x1c5550");
#endif

    switch (ctx->pc) {
        case 0x1c5574u: goto label_1c5574;
        case 0x1c5580u: goto label_1c5580;
        case 0x1c5594u: goto label_1c5594;
        case 0x1c55d8u: goto label_1c55d8;
        case 0x1c5610u: goto label_1c5610;
        default: break;
    }

    ctx->pc = 0x1c5550u;

    // 0x1c5550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c5550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c5554: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5558: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1c555c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c555cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5560: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c5560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c5564: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c5564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c5568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c556c: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1C556Cu;
    SET_GPR_U32(ctx, 31, 0x1C5574u);
    ctx->pc = 0x1C5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C556Cu;
    // 0x1c5570: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1C556Cu, 0x1C5574u)) {
        return;
    }
    ctx->pc = 0x1C5574u;
label_1c5574:
    // 0x1c5574: 0x26500288  addiu       $s0, $s2, 0x288
    ctx->pc = 0x1c5574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 648));
    // 0x1c5578: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1c5578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c557c: 0x0  nop
    ctx->pc = 0x1c557cu;
    // NOP
label_1c5580:
    // 0x1c5580: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x1c5580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x1c5584: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C5584u;
    {
        const bool branch_taken_0x1c5584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5584) {
            ctx->pc = 0x1C5588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5584u;
            // 0x1c5588: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C55BCu;
            goto label_1c55bc;
        }
    }
    ctx->pc = 0x1C558Cu;
    // 0x1c558c: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1C558Cu;
    SET_GPR_U32(ctx, 31, 0x1C5594u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1C558Cu, 0x1C5594u)) {
        return;
    }
    ctx->pc = 0x1C5594u;
label_1c5594:
    // 0x1c5594: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c5594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5598: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5598u;
    {
        const bool branch_taken_0x1c5598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5598u;
        // 0x1c559c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5598) {
            ctx->pc = 0x1C55B8u;
            goto label_1c55b8;
        }
    }
    ctx->pc = 0x1C55A0u;
    // 0x1c55a0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C55A0u;
    {
        const bool branch_taken_0x1c55a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55A0u;
        // 0x1c55a4: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55a0) {
            ctx->pc = 0x1C55B0u;
            goto label_1c55b0;
        }
    }
    ctx->pc = 0x1C55A8u;
    // 0x1c55a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C55A8u;
    {
        const bool branch_taken_0x1c55a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55A8u;
        // 0x1c55ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55a8) {
            ctx->pc = 0x1C55B4u;
            goto label_1c55b4;
        }
    }
    ctx->pc = 0x1C55B0u;
label_1c55b0:
    // 0x1c55b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c55b4:
    // 0x1c55b4: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1c55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1c55b8:
    // 0x1c55b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c55b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c55bc:
    // 0x1c55bc: 0x621fff0  bgez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C55BCu;
    {
        const bool branch_taken_0x1c55bc = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1C55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55BCu;
        // 0x1c55c0: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55bc) {
            ctx->pc = 0x1C5580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5580;
        }
    }
    ctx->pc = 0x1C55C4u;
    // 0x1c55c4: 0x8e4403d4  lw          $a0, 0x3D4($s2)
    ctx->pc = 0x1c55c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 980)));
    // 0x1c55c8: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C55C8u;
    {
        const bool branch_taken_0x1c55c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c55c8) {
            ctx->pc = 0x1C55CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C55C8u;
            // 0x1c55cc: 0x8e4403b4  lw          $a0, 0x3B4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5600u;
            goto label_1c5600;
        }
    }
    ctx->pc = 0x1C55D0u;
    // 0x1c55d0: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1C55D0u;
    SET_GPR_U32(ctx, 31, 0x1C55D8u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1C55D0u, 0x1C55D8u)) {
        return;
    }
    ctx->pc = 0x1C55D8u;
label_1c55d8:
    // 0x1c55d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c55d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C55DCu;
    {
        const bool branch_taken_0x1c55dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55DCu;
        // 0x1c55e0: 0xae4303d0  sw          $v1, 0x3D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 976), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55dc) {
            ctx->pc = 0x1C55FCu;
            goto label_1c55fc;
        }
    }
    ctx->pc = 0x1C55E4u;
    // 0x1c55e4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C55E4u;
    {
        const bool branch_taken_0x1c55e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55E4u;
        // 0x1c55e8: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55e4) {
            ctx->pc = 0x1C55F4u;
            goto label_1c55f4;
        }
    }
    ctx->pc = 0x1C55ECu;
    // 0x1c55ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C55ECu;
    {
        const bool branch_taken_0x1c55ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55ECu;
        // 0x1c55f0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55ec) {
            ctx->pc = 0x1C55F8u;
            goto label_1c55f8;
        }
    }
    ctx->pc = 0x1C55F4u;
label_1c55f4:
    // 0x1c55f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c55f8:
    // 0x1c55f8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1c55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1c55fc:
    // 0x1c55fc: 0x8e4403b4  lw          $a0, 0x3B4($s2)
    ctx->pc = 0x1c55fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
label_1c5600:
    // 0x1c5600: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5600u;
    {
        const bool branch_taken_0x1c5600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5600u;
        // 0x1c5604: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5600) {
            ctx->pc = 0x1C5614u;
            goto label_1c5614;
        }
    }
    ctx->pc = 0x1C5608u;
    // 0x1c5608: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1C5608u;
    SET_GPR_U32(ctx, 31, 0x1C5610u);
    ctx->pc = 0x1C560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5608u;
    // 0x1c560c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1C5608u, 0x1C5610u)) {
        return;
    }
    ctx->pc = 0x1C5610u;
label_1c5610:
    // 0x1c5610: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c5610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c5614:
    // 0x1c5614: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c5614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5618: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c561c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c561cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5624: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5624u;
        // 0x1c5628: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C562Cu;
    // 0x1c562c: 0x0  nop
    ctx->pc = 0x1c562cu;
    // NOP
    ctx->pc = 0x1c5630u;
}
