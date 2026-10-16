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

// Function: sub_003177B0
// Address: 0x3177b0 - 0x317828
void sub_003177B0_0x3177b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003177B0_0x3177b0");
#endif

    switch (ctx->pc) {
        case 0x3177c8u: goto label_3177c8;
        case 0x3177f8u: goto label_3177f8;
        default: break;
    }

    ctx->pc = 0x3177b0u;

    // 0x3177b0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3177b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177b4: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x3177b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3177b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3177B8u;
    {
        const bool branch_taken_0x3177b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177B8u;
        // 0x3177bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177b8) {
            ctx->pc = 0x3177E0u;
            goto label_3177e0;
        }
    }
    ctx->pc = 0x3177C0u;
    // 0x3177c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3177c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3177c4: 0x0  nop
    ctx->pc = 0x3177c4u;
    // NOP
label_3177c8:
    // 0x3177c8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x3177c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3177cc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3177ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3177d0: 0x0  nop
    ctx->pc = 0x3177d0u;
    // NOP
    // 0x3177d4: 0x0  nop
    ctx->pc = 0x3177d4u;
    // NOP
    // 0x3177d8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3177D8u;
    {
        const bool branch_taken_0x3177d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3177d8) {
            ctx->pc = 0x3177DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3177D8u;
            // 0x3177dc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3177C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3177c8;
        }
    }
    ctx->pc = 0x3177E0u;
label_3177e0:
    // 0x3177e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3177e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3177e4: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x3177E4u;
    {
        const bool branch_taken_0x3177e4 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x3177E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177E4u;
        // 0x3177e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177e4) {
            ctx->pc = 0x317820u;
            goto label_317820;
        }
    }
    ctx->pc = 0x3177ECu;
    // 0x3177ec: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x3177ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3177f0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3177f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177f4: 0x0  nop
    ctx->pc = 0x3177f4u;
    // NOP
label_3177f8:
    // 0x3177f8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3177f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3177fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3177fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x317800: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x317800u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x317804: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x317804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x317808: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x317808u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31780c: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x31780cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x317810: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x317810u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x317814: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x317814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x317818: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x317818u;
    {
        const bool branch_taken_0x317818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317818u;
        // 0x31781c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317818) {
            ctx->pc = 0x3177F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3177f8;
        }
    }
    ctx->pc = 0x317820u;
label_317820:
    // 0x317820: 0x3e00008  jr          $ra
    ctx->pc = 0x317820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317820u;
        // 0x317824: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317828u;
}
