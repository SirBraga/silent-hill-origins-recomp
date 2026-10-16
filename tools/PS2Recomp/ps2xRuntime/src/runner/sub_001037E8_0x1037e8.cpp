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

// Function: sub_001037E8
// Address: 0x1037e8 - 0x103880
void sub_001037E8_0x1037e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001037E8_0x1037e8");
#endif

    switch (ctx->pc) {
        case 0x103810u: goto label_103810;
        default: break;
    }

    ctx->pc = 0x1037e8u;

    // 0x1037e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1037e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1037ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037f0: 0x8ce2028c  lw          $v0, 0x28C($a3)
    ctx->pc = 0x1037f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
    // 0x1037f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1037F4u;
    {
        const bool branch_taken_0x1037f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037F4u;
        // 0x1037f8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037f4) {
            ctx->pc = 0x103834u;
            goto label_103834;
        }
    }
    ctx->pc = 0x1037FCu;
    // 0x1037fc: 0x8ce20274  lw          $v0, 0x274($a3)
    ctx->pc = 0x1037fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 628)));
    // 0x103800: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103800u;
    {
        const bool branch_taken_0x103800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x103800) {
            ctx->pc = 0x103804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103800u;
            // 0x103804: 0x8ce2028c  lw          $v0, 0x28C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103810u;
            goto label_103810;
        }
    }
    ctx->pc = 0x103808u;
    // 0x103808: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x103808u;
    {
        const bool branch_taken_0x103808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103808u;
        // 0x10380c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103808) {
            ctx->pc = 0x103834u;
            goto label_103834;
        }
    }
    ctx->pc = 0x103810u;
label_103810:
    // 0x103810: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x103810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x103814: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x103814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x103818: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103818u;
    {
        const bool branch_taken_0x103818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103818u;
        // 0x10381c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103818) {
            ctx->pc = 0x103834u;
            goto label_103834;
        }
    }
    ctx->pc = 0x103820u;
    // 0x103820: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x103820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x103824: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x103824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x103828: 0x5465fff9  bnel        $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x103828u;
    {
        const bool branch_taken_0x103828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x103828) {
            ctx->pc = 0x10382Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103828u;
            // 0x10382c: 0x8ce2028c  lw          $v0, 0x28C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103810;
        }
    }
    ctx->pc = 0x103830u;
    // 0x103830: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x103830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_103834:
    // 0x103834: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x103834u;
    {
        const bool branch_taken_0x103834 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x103834) {
            ctx->pc = 0x103878u;
            goto label_103878;
        }
    }
    ctx->pc = 0x10383Cu;
    // 0x10383c: 0x8ce2028c  lw          $v0, 0x28C($a3)
    ctx->pc = 0x10383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
    // 0x103840: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x103840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x103844: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x103844u;
    {
        const bool branch_taken_0x103844 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x103848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103844u;
        // 0x103848: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103844) {
            ctx->pc = 0x10386Cu;
            goto label_10386c;
        }
    }
    ctx->pc = 0x10384Cu;
    // 0x10384c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10384Cu;
    {
        const bool branch_taken_0x10384c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10384Cu;
        // 0x103850: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10384c) {
            ctx->pc = 0x10386Cu;
            goto label_10386c;
        }
    }
    ctx->pc = 0x103854u;
    // 0x103854: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x103854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x103858: 0x24e30274  addiu       $v1, $a3, 0x274
    ctx->pc = 0x103858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 628));
    // 0x10385c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103860: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x103860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x103864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103868: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x103868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_10386c:
    // 0x10386c: 0x8ce2028c  lw          $v0, 0x28C($a3)
    ctx->pc = 0x10386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
    // 0x103870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x103870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x103874: 0xace2028c  sw          $v0, 0x28C($a3)
    ctx->pc = 0x103874u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 652), GPR_U32(ctx, 2));
label_103878:
    // 0x103878: 0x3e00008  jr          $ra
    ctx->pc = 0x103878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103880u;
}
