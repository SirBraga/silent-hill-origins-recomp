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

// Function: sub_00197160
// Address: 0x197160 - 0x1971a0
void sub_00197160_0x197160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197160_0x197160");
#endif

    switch (ctx->pc) {
        case 0x197168u: goto label_197168;
        case 0x19716cu: goto label_19716c;
        default: break;
    }

    ctx->pc = 0x197160u;

    // 0x197160: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197160u;
    {
        const bool branch_taken_0x197160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197160u;
        // 0x197164: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197160) {
            ctx->pc = 0x197184u;
            goto label_197184;
        }
    }
    ctx->pc = 0x197168u;
label_197168:
    // 0x197168: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x197168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19716c:
    // 0x19716c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19716Cu;
    {
        const bool branch_taken_0x19716c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19716Cu;
        // 0x197170: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19716c) {
            ctx->pc = 0x19717Cu;
            goto label_19717c;
        }
    }
    ctx->pc = 0x197174u;
    // 0x197174: 0x3e00008  jr          $ra
    ctx->pc = 0x197174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197174u;
        // 0x197178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19717Cu;
label_19717c:
    // 0x19717c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x197180: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x197180u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_197184:
    // 0x197184: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x197184u;
    {
        const bool branch_taken_0x197184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197184) {
            ctx->pc = 0x197188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197184u;
            // 0x197188: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197168;
        }
    }
    ctx->pc = 0x19718Cu;
    // 0x19718c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19718cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197190: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x197190u;
    {
        const bool branch_taken_0x197190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197190) {
            ctx->pc = 0x197194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197190u;
            // 0x197194: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19716Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19716c;
        }
    }
    ctx->pc = 0x197198u;
    // 0x197198: 0x3e00008  jr          $ra
    ctx->pc = 0x197198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197198u;
        // 0x19719c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1971A0u;
}
