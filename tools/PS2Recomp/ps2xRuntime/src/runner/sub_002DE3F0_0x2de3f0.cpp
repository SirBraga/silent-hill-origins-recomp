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

// Function: sub_002DE3F0
// Address: 0x2de3f0 - 0x2de468
void sub_002DE3F0_0x2de3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE3F0_0x2de3f0");
#endif

    switch (ctx->pc) {
        case 0x2de420u: goto label_2de420;
        case 0x2de42cu: goto label_2de42c;
        default: break;
    }

    ctx->pc = 0x2de3f0u;

    // 0x2de3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2de3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2de3f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2de3f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2de3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2de3fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2de3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2de400: 0x24b30020  addiu       $s3, $a1, 0x20
    ctx->pc = 0x2de400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2de404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de408: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2de408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2de40c: 0x8cb00020  lw          $s0, 0x20($a1)
    ctx->pc = 0x2de40cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2de410: 0x1213000d  beq         $s0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2DE410u;
    {
        const bool branch_taken_0x2de410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2DE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE410u;
        // 0x2de414: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de410) {
            ctx->pc = 0x2DE448u;
            goto label_2de448;
        }
    }
    ctx->pc = 0x2DE418u;
    // 0x2de418: 0x8e04ffc0  lw          $a0, -0x40($s0)
    ctx->pc = 0x2de418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967232)));
    // 0x2de41c: 0x0  nop
    ctx->pc = 0x2de41cu;
    // NOP
label_2de420:
    // 0x2de420: 0x2611ffc0  addiu       $s1, $s0, -0x40
    ctx->pc = 0x2de420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x2de424: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DE424u;
    SET_GPR_U32(ctx, 31, 0x2DE42Cu);
    ctx->pc = 0x2DE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE424u;
    // 0x2de428: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DE424u, 0x2DE42Cu)) {
        return;
    }
    ctx->pc = 0x2DE42Cu;
label_2de42c:
    // 0x2de42c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE42Cu;
    {
        const bool branch_taken_0x2de42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de42c) {
            ctx->pc = 0x2DE430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE42Cu;
            // 0x2de430: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE440u;
            goto label_2de440;
        }
    }
    ctx->pc = 0x2DE434u;
    // 0x2de434: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x2de434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x2de438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE438u;
    {
        const bool branch_taken_0x2de438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE438u;
        // 0x2de43c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de438) {
            ctx->pc = 0x2DE44Cu;
            goto label_2de44c;
        }
    }
    ctx->pc = 0x2DE440u;
label_2de440:
    // 0x2de440: 0x5613fff7  bnel        $s0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DE440u;
    {
        const bool branch_taken_0x2de440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x2de440) {
            ctx->pc = 0x2DE444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE440u;
            // 0x2de444: 0x8e04ffc0  lw          $a0, -0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de420;
        }
    }
    ctx->pc = 0x2DE448u;
label_2de448:
    // 0x2de448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de44c:
    // 0x2de44c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2de44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de450: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2de450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de454: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de458: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2de458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de460: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE460u;
        // 0x2de464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE468u;
}
