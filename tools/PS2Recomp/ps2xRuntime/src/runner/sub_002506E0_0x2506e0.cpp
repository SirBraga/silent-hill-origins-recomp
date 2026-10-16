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

// Function: sub_002506E0
// Address: 0x2506e0 - 0x250738
void sub_002506E0_0x2506e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002506E0_0x2506e0");
#endif

    switch (ctx->pc) {
        case 0x250708u: goto label_250708;
        default: break;
    }

    ctx->pc = 0x2506e0u;

    // 0x2506e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2506e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2506e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2506e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2506e8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x2506e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2506ec: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2506ECu;
    {
        const bool branch_taken_0x2506ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2506F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506ECu;
        // 0x2506f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506ec) {
            ctx->pc = 0x25072Cu;
            goto label_25072c;
        }
    }
    ctx->pc = 0x2506F4u;
    // 0x2506f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2506f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2506f8: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2506F8u;
    {
        const bool branch_taken_0x2506f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2506f8) {
            ctx->pc = 0x2506FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2506F8u;
            // 0x2506fc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250708u;
            goto label_250708;
        }
    }
    ctx->pc = 0x250700u;
    // 0x250700: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x250700u;
    {
        const bool branch_taken_0x250700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250700u;
        // 0x250704: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250700) {
            ctx->pc = 0x25072Cu;
            goto label_25072c;
        }
    }
    ctx->pc = 0x250708u;
label_250708:
    // 0x250708: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x250708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25070c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x25070cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250710: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x250710u;
    {
        const bool branch_taken_0x250710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250710u;
        // 0x250714: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250710) {
            ctx->pc = 0x25072Cu;
            goto label_25072c;
        }
    }
    ctx->pc = 0x250718u;
    // 0x250718: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x250718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25071c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250720: 0x54a3fff9  bnel        $a1, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x250720u;
    {
        const bool branch_taken_0x250720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x250720) {
            ctx->pc = 0x250724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250720u;
            // 0x250724: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250708;
        }
    }
    ctx->pc = 0x250728u;
    // 0x250728: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x250728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25072c:
    // 0x25072c: 0x3e00008  jr          $ra
    ctx->pc = 0x25072Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25072Cu;
        // 0x250730: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25072Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250734u;
    // 0x250734: 0x0  nop
    ctx->pc = 0x250734u;
    // NOP
    ctx->pc = 0x250738u;
}
