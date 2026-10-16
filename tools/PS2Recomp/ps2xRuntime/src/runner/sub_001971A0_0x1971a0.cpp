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

// Function: sub_001971A0
// Address: 0x1971a0 - 0x1971f0
void sub_001971A0_0x1971a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001971A0_0x1971a0");
#endif

    switch (ctx->pc) {
        case 0x1971a8u: goto label_1971a8;
        default: break;
    }

    ctx->pc = 0x1971a0u;

    // 0x1971a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1971A0u;
    {
        const bool branch_taken_0x1971a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971A0u;
        // 0x1971a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971a0) {
            ctx->pc = 0x1971CCu;
            goto label_1971cc;
        }
    }
    ctx->pc = 0x1971A8u;
label_1971a8:
    // 0x1971a8: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x1971a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1971ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1971acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1971b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1971b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1971b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1971b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1971b8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1971B8u;
    {
        const bool branch_taken_0x1971b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1971BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971B8u;
        // 0x1971bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971b8) {
            ctx->pc = 0x1971C8u;
            goto label_1971c8;
        }
    }
    ctx->pc = 0x1971C0u;
    // 0x1971c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1971C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1971C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971C0u;
        // 0x1971c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1971C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1971C8u;
label_1971c8:
    // 0x1971c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1971c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1971cc:
    // 0x1971cc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1971ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1971d0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1971D0u;
    {
        const bool branch_taken_0x1971d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1971d0) {
            ctx->pc = 0x1971D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1971D0u;
            // 0x1971d4: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1971A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1971a8;
        }
    }
    ctx->pc = 0x1971D8u;
    // 0x1971d8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1971d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1971dc: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1971DCu;
    {
        const bool branch_taken_0x1971dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1971dc) {
            ctx->pc = 0x1971E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1971DCu;
            // 0x1971e0: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1971A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1971a8;
        }
    }
    ctx->pc = 0x1971E4u;
    // 0x1971e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1971E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1971E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971E4u;
        // 0x1971e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1971E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1971ECu;
    // 0x1971ec: 0x0  nop
    ctx->pc = 0x1971ecu;
    // NOP
    ctx->pc = 0x1971f0u;
}
