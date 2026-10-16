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

// Function: sub_0031A2D8
// Address: 0x31a2d8 - 0x31a350
void sub_0031A2D8_0x31a2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A2D8_0x31a2d8");
#endif

    switch (ctx->pc) {
        case 0x31a2f0u: goto label_31a2f0;
        case 0x31a320u: goto label_31a320;
        default: break;
    }

    ctx->pc = 0x31a2d8u;

    // 0x31a2d8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x31a2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2dc: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x31a2dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x31a2e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31A2E0u;
    {
        const bool branch_taken_0x31a2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2E0u;
        // 0x31a2e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2e0) {
            ctx->pc = 0x31A308u;
            goto label_31a308;
        }
    }
    ctx->pc = 0x31A2E8u;
    // 0x31a2e8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x31a2e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2ec: 0x0  nop
    ctx->pc = 0x31a2ecu;
    // NOP
label_31a2f0:
    // 0x31a2f0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x31a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x31a2f4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31a2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a2f8: 0x0  nop
    ctx->pc = 0x31a2f8u;
    // NOP
    // 0x31a2fc: 0x0  nop
    ctx->pc = 0x31a2fcu;
    // NOP
    // 0x31a300: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31A300u;
    {
        const bool branch_taken_0x31a300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A300u;
        // 0x31a304: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a300) {
            ctx->pc = 0x31A2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a2f0;
        }
    }
    ctx->pc = 0x31A308u;
label_31a308:
    // 0x31a308: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x31a308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x31a30c: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x31A30Cu;
    {
        const bool branch_taken_0x31a30c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x31A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A30Cu;
        // 0x31a310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a30c) {
            ctx->pc = 0x31A348u;
            goto label_31a348;
        }
    }
    ctx->pc = 0x31A314u;
    // 0x31a314: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x31a314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31a318: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x31a318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a31c: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x31a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_31a320:
    // 0x31a320: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x31a320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31a324: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31a324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31a328: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x31a328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31a32c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x31a32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x31a330: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x31a330u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a334: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x31a334u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31a338: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x31a338u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a33c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x31a33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x31a340: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31A340u;
    {
        const bool branch_taken_0x31a340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A340u;
        // 0x31a344: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a340) {
            ctx->pc = 0x31A320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a320;
        }
    }
    ctx->pc = 0x31A348u;
label_31a348:
    // 0x31a348: 0x3e00008  jr          $ra
    ctx->pc = 0x31A348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A348u;
        // 0x31a34c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A350u;
}
