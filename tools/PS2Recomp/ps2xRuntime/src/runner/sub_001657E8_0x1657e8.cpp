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

// Function: sub_001657E8
// Address: 0x1657e8 - 0x165828
void sub_001657E8_0x1657e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001657E8_0x1657e8");
#endif

    ctx->pc = 0x1657e8u;

    // 0x1657e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1657e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1657ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1657ECu;
    {
        const bool branch_taken_0x1657ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657ec) {
            ctx->pc = 0x16581Cu;
            goto label_16581c;
        }
    }
    ctx->pc = 0x1657F4u;
    // 0x1657f4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1657f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1657f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1657F8u;
    {
        const bool branch_taken_0x1657f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1657FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657F8u;
        // 0x1657fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657f8) {
            ctx->pc = 0x165810u;
            goto label_165810;
        }
    }
    ctx->pc = 0x165800u;
    // 0x165800: 0x94a20034  lhu         $v0, 0x34($a1)
    ctx->pc = 0x165800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x165804: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165808: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x165808u;
    {
        const bool branch_taken_0x165808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165808) {
            ctx->pc = 0x165814u;
            goto label_165814;
        }
    }
    ctx->pc = 0x165810u;
label_165810:
    // 0x165810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165814:
    // 0x165814: 0x3e00008  jr          $ra
    ctx->pc = 0x165814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165814u;
        // 0x165818: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16581Cu;
label_16581c:
    // 0x16581c: 0x3e00008  jr          $ra
    ctx->pc = 0x16581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16581Cu;
        // 0x165820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165824u;
    // 0x165824: 0x0  nop
    ctx->pc = 0x165824u;
    // NOP
    ctx->pc = 0x165828u;
}
