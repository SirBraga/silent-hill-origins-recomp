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

// Function: sub_00205DC8
// Address: 0x205dc8 - 0x205e08
void sub_00205DC8_0x205dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205DC8_0x205dc8");
#endif

    switch (ctx->pc) {
        case 0x205de0u: goto label_205de0;
        default: break;
    }

    ctx->pc = 0x205dc8u;

    // 0x205dc8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x205dc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205dcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x205DCCu;
    {
        const bool branch_taken_0x205dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DCCu;
        // 0x205dd0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dcc) {
            ctx->pc = 0x205E00u;
            goto label_205e00;
        }
    }
    ctx->pc = 0x205DD4u;
    // 0x205dd4: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x205dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x205dd8: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x205dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x205ddc: 0x0  nop
    ctx->pc = 0x205ddcu;
    // NOP
label_205de0:
    // 0x205de0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x205de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x205de4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x205de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x205de8: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x205DE8u;
    {
        const bool branch_taken_0x205de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x205de8) {
            ctx->pc = 0x205DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205DE8u;
            // 0x205dec: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205DF0u;
            goto label_205df0;
        }
    }
    ctx->pc = 0x205DF0u;
label_205df0:
    // 0x205df0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x205df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x205df4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x205df4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205df8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205DF8u;
    {
        const bool branch_taken_0x205df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DF8u;
        // 0x205dfc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205df8) {
            ctx->pc = 0x205DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205de0;
        }
    }
    ctx->pc = 0x205E00u;
label_205e00:
    // 0x205e00: 0x3e00008  jr          $ra
    ctx->pc = 0x205E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205E08u;
}
