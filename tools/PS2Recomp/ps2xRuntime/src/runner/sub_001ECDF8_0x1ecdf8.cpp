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

// Function: sub_001ECDF8
// Address: 0x1ecdf8 - 0x1ece68
void sub_001ECDF8_0x1ecdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECDF8_0x1ecdf8");
#endif

    switch (ctx->pc) {
        case 0x1ece30u: goto label_1ece30;
        default: break;
    }

    ctx->pc = 0x1ecdf8u;

    // 0x1ecdf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ecdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ecdfc: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x1ecdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x1ece00: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1ece00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ece04: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ece08: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1ece08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x1ece0c: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1ece0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1ece10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ece10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece14: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1ece14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ece18: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ECE18u;
    {
        const bool branch_taken_0x1ece18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE18u;
        // 0x1ece1c: 0xa21023  subu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece18) {
            ctx->pc = 0x1ECE5Cu;
            goto label_1ece5c;
        }
    }
    ctx->pc = 0x1ECE20u;
    // 0x1ece20: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECE20u;
    {
        const bool branch_taken_0x1ece20 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x1ece20) {
            ctx->pc = 0x1ECE48u;
            goto label_1ece48;
        }
    }
    ctx->pc = 0x1ECE28u;
    // 0x1ece28: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1ece28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ece2c: 0x0  nop
    ctx->pc = 0x1ece2cu;
    // NOP
label_1ece30:
    // 0x1ece30: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1ECE30u;
    {
        const bool branch_taken_0x1ece30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE30u;
        // 0x1ece34: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece30) {
            ctx->pc = 0x1ECE5Cu;
            goto label_1ece5c;
        }
    }
    ctx->pc = 0x1ECE38u;
    // 0x1ece38: 0x0  nop
    ctx->pc = 0x1ece38u;
    // NOP
    // 0x1ece3c: 0x0  nop
    ctx->pc = 0x1ece3cu;
    // NOP
    // 0x1ece40: 0x5c80fffb  bgtzl       $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ECE40u;
    {
        const bool branch_taken_0x1ece40 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x1ece40) {
            ctx->pc = 0x1ECE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECE40u;
            // 0x1ece44: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ece30;
        }
    }
    ctx->pc = 0x1ECE48u;
label_1ece48:
    // 0x1ece48: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECE48u;
    {
        const bool branch_taken_0x1ece48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE48u;
        // 0x1ece4c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece48) {
            ctx->pc = 0x1ECE5Cu;
            goto label_1ece5c;
        }
    }
    ctx->pc = 0x1ECE50u;
    // 0x1ece50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ece50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ece54: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE54u;
        // 0x1ece58: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECE5Cu;
label_1ece5c:
    // 0x1ece5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE5Cu;
        // 0x1ece60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECE64u;
    // 0x1ece64: 0x0  nop
    ctx->pc = 0x1ece64u;
    // NOP
    ctx->pc = 0x1ece68u;
}
