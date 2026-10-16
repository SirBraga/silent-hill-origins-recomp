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

// Function: sub_00147878
// Address: 0x147878 - 0x147920
void sub_00147878_0x147878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147878_0x147878");
#endif

    switch (ctx->pc) {
        case 0x147894u: goto label_147894;
        case 0x1478a8u: goto label_1478a8;
        case 0x1478c0u: goto label_1478c0;
        case 0x1478f8u: goto label_1478f8;
        default: break;
    }

    ctx->pc = 0x147878u;

    // 0x147878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14787c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x147880: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x147884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x147884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14788c: 0xc04ed0e  jal         func_13B438
    ctx->pc = 0x14788Cu;
    SET_GPR_U32(ctx, 31, 0x147894u);
    ctx->pc = 0x147890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14788Cu;
    // 0x147890: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x14788Cu, 0x147894u)) {
        return;
    }
    ctx->pc = 0x147894u;
label_147894:
    // 0x147894: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x147894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x147898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14789c: 0x8c46ee60  lw          $a2, -0x11A0($v0)
    ctx->pc = 0x14789cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEE60u));
    // 0x1478a0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1478A0u;
    SET_GPR_U32(ctx, 31, 0x1478A8u);
    ctx->pc = 0x1478A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1478A0u;
    // 0x1478a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1478A0u, 0x1478A8u)) {
        return;
    }
    ctx->pc = 0x1478A8u;
label_1478a8:
    // 0x1478a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1478ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1478acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1478b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1478B0u;
    {
        const bool branch_taken_0x1478b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478B0u;
        // 0x1478b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478b0) {
            ctx->pc = 0x147908u;
            goto label_147908;
        }
    }
    ctx->pc = 0x1478B8u;
    // 0x1478b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1478b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1478bc: 0x0  nop
    ctx->pc = 0x1478bcu;
    // NOP
label_1478c0:
    // 0x1478c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1478c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1478c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1478C4u;
    {
        const bool branch_taken_0x1478c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1478C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478C4u;
        // 0x1478c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478c4) {
            ctx->pc = 0x1478E4u;
            goto label_1478e4;
        }
    }
    ctx->pc = 0x1478CCu;
    // 0x1478cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1478ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1478d0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1478D0u;
    {
        const bool branch_taken_0x1478d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1478d0) {
            ctx->pc = 0x1478D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1478D0u;
            // 0x1478d4: 0xae2000dc  sw          $zero, 0xDC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1478DCu;
            goto label_1478dc;
        }
    }
    ctx->pc = 0x1478D8u;
    // 0x1478d8: 0xae3000dc  sw          $s0, 0xDC($s1)
    ctx->pc = 0x1478d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 16));
label_1478dc:
    // 0x1478dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1478dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1478e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1478e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1478e4:
    // 0x1478e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1478e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1478e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1478e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1478ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1478ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1478f0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1478F0u;
    SET_GPR_U32(ctx, 31, 0x1478F8u);
    ctx->pc = 0x1478F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1478F0u;
    // 0x1478f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1478F0u, 0x1478F8u)) {
        return;
    }
    ctx->pc = 0x1478F8u;
label_1478f8:
    // 0x1478f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1478f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1478fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1478fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147900: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x147900u;
    {
        const bool branch_taken_0x147900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147900u;
        // 0x147904: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147900) {
            ctx->pc = 0x1478C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1478c0;
        }
    }
    ctx->pc = 0x147908u;
label_147908:
    // 0x147908: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x147908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14790c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14790cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147914: 0x3e00008  jr          $ra
    ctx->pc = 0x147914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147914u;
        // 0x147918: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14791Cu;
    // 0x14791c: 0x0  nop
    ctx->pc = 0x14791cu;
    // NOP
    ctx->pc = 0x147920u;
}
