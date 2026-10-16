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

// Function: sub_0021F7F0
// Address: 0x21f7f0 - 0x21f860
void sub_0021F7F0_0x21f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F7F0_0x21f7f0");
#endif

    switch (ctx->pc) {
        case 0x21f7f0u: goto label_21f7f0;
        case 0x21f7f4u: goto label_21f7f4;
        case 0x21f7f8u: goto label_21f7f8;
        case 0x21f7fcu: goto label_21f7fc;
        case 0x21f800u: goto label_21f800;
        case 0x21f804u: goto label_21f804;
        case 0x21f808u: goto label_21f808;
        case 0x21f80cu: goto label_21f80c;
        case 0x21f810u: goto label_21f810;
        case 0x21f814u: goto label_21f814;
        case 0x21f818u: goto label_21f818;
        case 0x21f81cu: goto label_21f81c;
        case 0x21f820u: goto label_21f820;
        case 0x21f824u: goto label_21f824;
        case 0x21f828u: goto label_21f828;
        case 0x21f82cu: goto label_21f82c;
        case 0x21f830u: goto label_21f830;
        case 0x21f834u: goto label_21f834;
        case 0x21f838u: goto label_21f838;
        case 0x21f83cu: goto label_21f83c;
        case 0x21f840u: goto label_21f840;
        case 0x21f844u: goto label_21f844;
        case 0x21f848u: goto label_21f848;
        case 0x21f84cu: goto label_21f84c;
        case 0x21f850u: goto label_21f850;
        case 0x21f854u: goto label_21f854;
        case 0x21f858u: goto label_21f858;
        case 0x21f85cu: goto label_21f85c;
        default: break;
    }

    ctx->pc = 0x21f7f0u;

label_21f7f0:
    // 0x21f7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21f7f4:
    // 0x21f7f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f7f8:
    // 0x21f7f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21f7fc:
    // 0x21f7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21f800:
    // 0x21f800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21f804:
    // 0x21f804: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21f808:
    // 0x21f808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21f80c:
    // 0x21f80c: 0x40f809  jalr        $v0
label_21f810:
    if (ctx->pc == 0x21F810u) {
        ctx->pc = 0x21F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F80Cu;
        // 0x21f810: 0x240600f8  addiu       $a2, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F814u;
        goto label_21f814;
    }
    ctx->pc = 0x21F80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F814u);
        ctx->pc = 0x21F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F80Cu;
        // 0x21f810: 0x240600f8  addiu       $a2, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F80Cu, 0x21F814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F814u;
label_21f814:
    // 0x21f814: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x21f814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_21f818:
    // 0x21f818: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x21f818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_21f81c:
    // 0x21f81c: 0x2463e150  addiu       $v1, $v1, -0x1EB0
    ctx->pc = 0x21f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959440));
label_21f820:
    // 0x21f820: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x21f820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_21f824:
    // 0x21f824: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21f824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_21f828:
    // 0x21f828: 0x2484eac0  addiu       $a0, $a0, -0x1540
    ctx->pc = 0x21f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
label_21f82c:
    // 0x21f82c: 0x24430034  addiu       $v1, $v0, 0x34
    ctx->pc = 0x21f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_21f830:
    // 0x21f830: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x21f830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_21f834:
    // 0x21f834: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21f834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21f838:
    // 0x21f838: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x21f838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_21f83c:
    // 0x21f83c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21f840:
    // 0x21f840: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x21f840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_21f844:
    // 0x21f844: 0x0  nop
    ctx->pc = 0x21f844u;
    // NOP
label_21f848:
    // 0x21f848: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
label_21f84c:
    if (ctx->pc == 0x21F84Cu) {
        ctx->pc = 0x21F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F848u;
        // 0x21f84c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F850u;
        goto label_21f850;
    }
    ctx->pc = 0x21F848u;
    {
        const bool branch_taken_0x21f848 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x21F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F848u;
        // 0x21f84c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f848) {
            ctx->pc = 0x21F838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f838;
        }
    }
    ctx->pc = 0x21F850u;
label_21f850:
    // 0x21f850: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21f850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21f854:
    // 0x21f854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f858:
    // 0x21f858: 0x3e00008  jr          $ra
label_21f85c:
    if (ctx->pc == 0x21F85Cu) {
        ctx->pc = 0x21F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F858u;
        // 0x21f85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F860u;
        goto label_fallthrough_0x21f858;
    }
    ctx->pc = 0x21F858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F858u;
        // 0x21f85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21f858:
    ctx->pc = 0x21F860u;
}
