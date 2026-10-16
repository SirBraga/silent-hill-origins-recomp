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

// Function: sub_0029A3F8
// Address: 0x29a3f8 - 0x29a458
void sub_0029A3F8_0x29a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A3F8_0x29a3f8");
#endif

    switch (ctx->pc) {
        case 0x29a444u: goto label_29a444;
        default: break;
    }

    ctx->pc = 0x29a3f8u;

    // 0x29a3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a400: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29a404: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x29a404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29a408: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A408u;
    {
        const bool branch_taken_0x29a408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A408u;
        // 0x29a40c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a408) {
            ctx->pc = 0x29A41Cu;
            goto label_29a41c;
        }
    }
    ctx->pc = 0x29A410u;
    // 0x29a410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a414: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29A414u;
    {
        const bool branch_taken_0x29a414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A414u;
        // 0x29a418: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a414) {
            ctx->pc = 0x29A448u;
            goto label_29a448;
        }
    }
    ctx->pc = 0x29A41Cu;
label_29a41c:
    // 0x29a41c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x29a41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a420: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A420u;
    {
        const bool branch_taken_0x29a420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A420u;
        // 0x29a424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a420) {
            ctx->pc = 0x29A448u;
            goto label_29a448;
        }
    }
    ctx->pc = 0x29A428u;
    // 0x29a428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29a42c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a430: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29a434: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A434u;
    {
        const bool branch_taken_0x29a434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A434u;
        // 0x29a438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a434) {
            ctx->pc = 0x29A448u;
            goto label_29a448;
        }
    }
    ctx->pc = 0x29A43Cu;
    // 0x29a43c: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29A43Cu;
    SET_GPR_U32(ctx, 31, 0x29A444u);
    ctx->pc = 0x29A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A43Cu;
    // 0x29a440: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29A43Cu, 0x29A444u)) {
        return;
    }
    ctx->pc = 0x29A444u;
label_29a444:
    // 0x29a444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a448:
    // 0x29a448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a44c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A44Cu;
        // 0x29a450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A454u;
    // 0x29a454: 0x0  nop
    ctx->pc = 0x29a454u;
    // NOP
    ctx->pc = 0x29a458u;
}
