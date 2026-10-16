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

// Function: sub_0024F168
// Address: 0x24f168 - 0x24f1b0
void sub_0024F168_0x24f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F168_0x24f168");
#endif

    switch (ctx->pc) {
        case 0x24f180u: goto label_24f180;
        default: break;
    }

    ctx->pc = 0x24f168u;

    // 0x24f168: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x24F168u;
    {
        const bool branch_taken_0x24f168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f168) {
            ctx->pc = 0x24F1A4u;
            goto label_24f1a4;
        }
    }
    ctx->pc = 0x24F170u;
    // 0x24f170: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x24f170u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f174: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F174u;
    {
        const bool branch_taken_0x24f174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F174u;
        // 0x24f178: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f174) {
            ctx->pc = 0x24F1A4u;
            goto label_24f1a4;
        }
    }
    ctx->pc = 0x24F17Cu;
    // 0x24f17c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x24f17cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24f180:
    // 0x24f180: 0x24a2ffbf  addiu       $v0, $a1, -0x41
    ctx->pc = 0x24f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967231));
    // 0x24f184: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x24f184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x24f188: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F188u;
    {
        const bool branch_taken_0x24f188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F188u;
        // 0x24f18c: 0x24a20020  addiu       $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f188) {
            ctx->pc = 0x24F194u;
            goto label_24f194;
        }
    }
    ctx->pc = 0x24F190u;
    // 0x24f190: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x24f190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_24f194:
    // 0x24f194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f198: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24f198u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f19c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F19Cu;
    {
        const bool branch_taken_0x24f19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f19c) {
            ctx->pc = 0x24F1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F19Cu;
            // 0x24f1a0: 0x80650000  lb          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f180;
        }
    }
    ctx->pc = 0x24F1A4u;
label_24f1a4:
    // 0x24f1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24F1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1A4u;
        // 0x24f1a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F1ACu;
    // 0x24f1ac: 0x0  nop
    ctx->pc = 0x24f1acu;
    // NOP
    ctx->pc = 0x24f1b0u;
}
