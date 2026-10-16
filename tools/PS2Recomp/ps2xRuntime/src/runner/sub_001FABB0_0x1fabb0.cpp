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

// Function: sub_001FABB0
// Address: 0x1fabb0 - 0x1fabf0
void sub_001FABB0_0x1fabb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FABB0_0x1fabb0");
#endif

    switch (ctx->pc) {
        case 0x1fabd0u: goto label_1fabd0;
        default: break;
    }

    ctx->pc = 0x1fabb0u;

    // 0x1fabb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fabb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fabb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fabb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fabb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fabb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fabbc: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FABBCu;
    {
        const bool branch_taken_0x1fabbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABBCu;
        // 0x1fabc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabbc) {
            ctx->pc = 0x1FABD8u;
            goto label_1fabd8;
        }
    }
    ctx->pc = 0x1FABC4u;
    // 0x1fabc4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fabc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fabc8: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FABC8u;
    SET_GPR_U32(ctx, 31, 0x1FABD0u);
    ctx->pc = 0x1FABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FABC8u;
    // 0x1fabcc: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FABC8u, 0x1FABD0u)) {
        return;
    }
    ctx->pc = 0x1FABD0u;
label_1fabd0:
    // 0x1fabd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FABD0u;
    {
        const bool branch_taken_0x1fabd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABD0u;
        // 0x1fabd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabd0) {
            ctx->pc = 0x1FABE0u;
            goto label_1fabe0;
        }
    }
    ctx->pc = 0x1FABD8u;
label_1fabd8:
    // 0x1fabd8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fabd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fabdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fabdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fabe0:
    // 0x1fabe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fabe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fabe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fabe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fabe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FABE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABE8u;
        // 0x1fabec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FABE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FABF0u;
}
