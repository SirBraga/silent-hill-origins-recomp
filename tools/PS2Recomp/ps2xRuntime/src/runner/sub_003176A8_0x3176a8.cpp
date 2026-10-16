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

// Function: sub_003176A8
// Address: 0x3176a8 - 0x317700
void sub_003176A8_0x3176a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003176A8_0x3176a8");
#endif

    switch (ctx->pc) {
        case 0x3176c0u: goto label_3176c0;
        default: break;
    }

    ctx->pc = 0x3176a8u;

    // 0x3176a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3176a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3176acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176b0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x3176b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3176b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3176B4u;
    {
        const bool branch_taken_0x3176b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3176B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176B4u;
        // 0x3176b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176b4) {
            ctx->pc = 0x3176E0u;
            goto label_3176e0;
        }
    }
    ctx->pc = 0x3176BCu;
    // 0x3176bc: 0x0  nop
    ctx->pc = 0x3176bcu;
    // NOP
label_3176c0:
    // 0x3176c0: 0x24e40002  addiu       $a0, $a3, 0x2
    ctx->pc = 0x3176c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3176c4: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3176c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3176c8: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x3176c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3176cc: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x3176ccu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
    // 0x3176d0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3176d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3176d4: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3176D4u;
    {
        const bool branch_taken_0x3176d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3176D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176D4u;
        // 0x3176d8: 0x43300b  movn        $a2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176d4) {
            ctx->pc = 0x3176F4u;
            goto label_3176f4;
        }
    }
    ctx->pc = 0x3176DCu;
    // 0x3176dc: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x3176dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3176e0:
    // 0x3176e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3176E0u;
    {
        const bool branch_taken_0x3176e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3176e0) {
            ctx->pc = 0x3176E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3176E0u;
            // 0x3176e4: 0x94e50000  lhu         $a1, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3176C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3176c0;
        }
    }
    ctx->pc = 0x3176E8u;
    // 0x3176e8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x3176e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3176ec: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3176ECu;
    {
        const bool branch_taken_0x3176ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3176ec) {
            ctx->pc = 0x3176F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3176ECu;
            // 0x3176f0: 0x94e50000  lhu         $a1, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3176C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3176c0;
        }
    }
    ctx->pc = 0x3176F4u;
label_3176f4:
    // 0x3176f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3176F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176F4u;
        // 0x3176f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3176F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3176FCu;
    // 0x3176fc: 0x0  nop
    ctx->pc = 0x3176fcu;
    // NOP
    ctx->pc = 0x317700u;
}
