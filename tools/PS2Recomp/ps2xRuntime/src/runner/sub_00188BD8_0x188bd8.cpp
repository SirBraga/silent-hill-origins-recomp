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

// Function: sub_00188BD8
// Address: 0x188bd8 - 0x188c30
void sub_00188BD8_0x188bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188BD8_0x188bd8");
#endif

    switch (ctx->pc) {
        case 0x188c00u: goto label_188c00;
        default: break;
    }

    ctx->pc = 0x188bd8u;

    // 0x188bd8: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x188bdc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x188bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188be0: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x188BE0u;
    {
        const bool branch_taken_0x188be0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x188BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BE0u;
        // 0x188be4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188be0) {
            ctx->pc = 0x188C24u;
            goto label_188c24;
        }
    }
    ctx->pc = 0x188BE8u;
    // 0x188be8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188bec: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188BECu;
    {
        const bool branch_taken_0x188bec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x188bec) {
            ctx->pc = 0x188BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188BECu;
            // 0x188bf0: 0x8c820100  lw          $v0, 0x100($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C00u;
            goto label_188c00;
        }
    }
    ctx->pc = 0x188BF4u;
    // 0x188bf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x188BF4u;
    {
        const bool branch_taken_0x188bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF4u;
        // 0x188bf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bf4) {
            ctx->pc = 0x188C24u;
            goto label_188c24;
        }
    }
    ctx->pc = 0x188BFCu;
    // 0x188bfc: 0x0  nop
    ctx->pc = 0x188bfcu;
    // NOP
label_188c00:
    // 0x188c00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x188c04: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x188c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x188c08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188C08u;
    {
        const bool branch_taken_0x188c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C08u;
        // 0x188c0c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c08) {
            ctx->pc = 0x188C24u;
            goto label_188c24;
        }
    }
    ctx->pc = 0x188C10u;
    // 0x188c10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x188c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x188c14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188c18: 0x54a3fff9  bnel        $a1, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x188C18u;
    {
        const bool branch_taken_0x188c18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x188c18) {
            ctx->pc = 0x188C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C18u;
            // 0x188c1c: 0x8c820100  lw          $v0, 0x100($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188c00;
        }
    }
    ctx->pc = 0x188C20u;
    // 0x188c20: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x188c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_188c24:
    // 0x188c24: 0x3e00008  jr          $ra
    ctx->pc = 0x188C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C24u;
        // 0x188c28: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188C2Cu;
    // 0x188c2c: 0x0  nop
    ctx->pc = 0x188c2cu;
    // NOP
    ctx->pc = 0x188c30u;
}
