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

// Function: sub_00317740
// Address: 0x317740 - 0x3177b0
void sub_00317740_0x317740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317740_0x317740");
#endif

    switch (ctx->pc) {
        case 0x317768u: goto label_317768;
        default: break;
    }

    ctx->pc = 0x317740u;

    // 0x317740: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x317740u;
    {
        const bool branch_taken_0x317740 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x317744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317740u;
        // 0x317744: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317740) {
            ctx->pc = 0x3177A4u;
            goto label_3177a4;
        }
    }
    ctx->pc = 0x317748u;
    // 0x317748: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x317748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31774c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x31774cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x317750: 0x28420035  slti        $v0, $v0, 0x35
    ctx->pc = 0x317750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x317754: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x317754u;
    {
        const bool branch_taken_0x317754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317754u;
        // 0x317758: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317754) {
            ctx->pc = 0x3177A4u;
            goto label_3177a4;
        }
    }
    ctx->pc = 0x31775Cu;
    // 0x31775c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x31775cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x317760: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x317760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x317764: 0x0  nop
    ctx->pc = 0x317764u;
    // NOP
label_317768:
    // 0x317768: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x317768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31776c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31776Cu;
    {
        const bool branch_taken_0x31776c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x317770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31776Cu;
        // 0x317770: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31776c) {
            ctx->pc = 0x317780u;
            goto label_317780;
        }
    }
    ctx->pc = 0x317774u;
    // 0x317774: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x317774u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x317778: 0x5046fffb  beql        $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317778u;
    {
        const bool branch_taken_0x317778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x317778) {
            ctx->pc = 0x31777Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317778u;
            // 0x31777c: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317768;
        }
    }
    ctx->pc = 0x317780u;
label_317780:
    // 0x317780: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x317780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x317784: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x317784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x317788: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x317788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31778c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31778Cu;
    {
        const bool branch_taken_0x31778c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x317790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31778Cu;
        // 0x317790: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31778c) {
            ctx->pc = 0x31779Cu;
            goto label_31779c;
        }
    }
    ctx->pc = 0x317794u;
    // 0x317794: 0x3e00008  jr          $ra
    ctx->pc = 0x317794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317794u;
        // 0x317798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31779Cu;
label_31779c:
    // 0x31779c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x31779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3177a0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3177a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3177a4:
    // 0x3177a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3177A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3177A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177A4u;
        // 0x3177a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3177A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3177ACu;
    // 0x3177ac: 0x0  nop
    ctx->pc = 0x3177acu;
    // NOP
    ctx->pc = 0x3177b0u;
}
