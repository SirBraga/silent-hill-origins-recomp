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

// Function: sub_0014B3E0
// Address: 0x14b3e0 - 0x14b480
void sub_0014B3E0_0x14b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B3E0_0x14b3e0");
#endif

    switch (ctx->pc) {
        case 0x14b3fcu: goto label_14b3fc;
        case 0x14b410u: goto label_14b410;
        case 0x14b428u: goto label_14b428;
        case 0x14b454u: goto label_14b454;
        default: break;
    }

    ctx->pc = 0x14b3e0u;

    // 0x14b3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b3e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14b3e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b3ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14b3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b3f4: 0xc0524fa  jal         func_1493E8
    ctx->pc = 0x14B3F4u;
    SET_GPR_U32(ctx, 31, 0x14B3FCu);
    ctx->pc = 0x14B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3F4u;
    // 0x14b3f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1493E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1493E8u, 0x14B3F4u, 0x14B3FCu)) {
        return;
    }
    ctx->pc = 0x14B3FCu;
label_14b3fc:
    // 0x14b3fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14b400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b404: 0x8c46ef50  lw          $a2, -0x10B0($v0)
    ctx->pc = 0x14b404u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEF50u));
    // 0x14b408: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x14B408u;
    SET_GPR_U32(ctx, 31, 0x14B410u);
    ctx->pc = 0x14B40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B408u;
    // 0x14b40c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x14B408u, 0x14B410u)) {
        return;
    }
    ctx->pc = 0x14B410u;
label_14b410:
    // 0x14b410: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b414: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b418: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x14B418u;
    {
        const bool branch_taken_0x14b418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b418) {
            ctx->pc = 0x14B41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B418u;
            // 0x14b41c: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B468u;
            goto label_14b468;
        }
    }
    ctx->pc = 0x14B420u;
    // 0x14b420: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b424: 0x0  nop
    ctx->pc = 0x14b424u;
    // NOP
label_14b428:
    // 0x14b428: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14b42c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B42Cu;
    {
        const bool branch_taken_0x14b42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B42Cu;
        // 0x14b430: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b42c) {
            ctx->pc = 0x14B440u;
            goto label_14b440;
        }
    }
    ctx->pc = 0x14B434u;
    // 0x14b434: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x14b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14b438: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x14b438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x14b43c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14b440:
    // 0x14b440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b44c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x14B44Cu;
    SET_GPR_U32(ctx, 31, 0x14B454u);
    ctx->pc = 0x14B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B44Cu;
    // 0x14b450: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x14B44Cu, 0x14B454u)) {
        return;
    }
    ctx->pc = 0x14B454u;
label_14b454:
    // 0x14b454: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b458: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b45c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x14B45Cu;
    {
        const bool branch_taken_0x14b45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B45Cu;
        // 0x14b460: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b45c) {
            ctx->pc = 0x14B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b428;
        }
    }
    ctx->pc = 0x14B464u;
    // 0x14b464: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x14b464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_14b468:
    // 0x14b468: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b46c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b474: 0x3e00008  jr          $ra
    ctx->pc = 0x14B474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B474u;
        // 0x14b478: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B47Cu;
    // 0x14b47c: 0x0  nop
    ctx->pc = 0x14b47cu;
    // NOP
    ctx->pc = 0x14b480u;
}
