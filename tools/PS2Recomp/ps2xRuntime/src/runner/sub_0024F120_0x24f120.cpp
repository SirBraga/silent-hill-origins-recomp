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

// Function: sub_0024F120
// Address: 0x24f120 - 0x24f168
void sub_0024F120_0x24f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F120_0x24f120");
#endif

    switch (ctx->pc) {
        case 0x24f138u: goto label_24f138;
        default: break;
    }

    ctx->pc = 0x24f120u;

    // 0x24f120: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x24F120u;
    {
        const bool branch_taken_0x24f120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f120) {
            ctx->pc = 0x24F15Cu;
            goto label_24f15c;
        }
    }
    ctx->pc = 0x24F128u;
    // 0x24f128: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x24f128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f12c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F12Cu;
    {
        const bool branch_taken_0x24f12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F12Cu;
        // 0x24f130: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f12c) {
            ctx->pc = 0x24F15Cu;
            goto label_24f15c;
        }
    }
    ctx->pc = 0x24F134u;
    // 0x24f134: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x24f134u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24f138:
    // 0x24f138: 0x24a2ff9f  addiu       $v0, $a1, -0x61
    ctx->pc = 0x24f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x24f13c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x24f13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x24f140: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F140u;
    {
        const bool branch_taken_0x24f140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F140u;
        // 0x24f144: 0x24a2ffe0  addiu       $v0, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f140) {
            ctx->pc = 0x24F14Cu;
            goto label_24f14c;
        }
    }
    ctx->pc = 0x24F148u;
    // 0x24f148: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x24f148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_24f14c:
    // 0x24f14c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f150: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24f150u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f154: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F154u;
    {
        const bool branch_taken_0x24f154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f154) {
            ctx->pc = 0x24F158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F154u;
            // 0x24f158: 0x80650000  lb          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f138;
        }
    }
    ctx->pc = 0x24F15Cu;
label_24f15c:
    // 0x24f15c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F15Cu;
        // 0x24f160: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F164u;
    // 0x24f164: 0x0  nop
    ctx->pc = 0x24f164u;
    // NOP
    ctx->pc = 0x24f168u;
}
