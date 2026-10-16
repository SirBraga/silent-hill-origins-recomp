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

// Function: sub_00280F70
// Address: 0x280f70 - 0x280fb8
void sub_00280F70_0x280f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F70_0x280f70");
#endif

    switch (ctx->pc) {
        case 0x280f88u: goto label_280f88;
        default: break;
    }

    ctx->pc = 0x280f70u;

    // 0x280f70: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280f74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x280f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x280f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280f80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x280f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280f84: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x280f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_280f88:
    // 0x280f88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280f8c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280f90: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x280F90u;
    {
        const bool branch_taken_0x280f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x280f90) {
            ctx->pc = 0x280FB0u;
            goto label_280fb0;
        }
    }
    ctx->pc = 0x280F98u;
    // 0x280f98: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x280f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x280f9c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x280f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280fa0: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x280fa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280fa4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x280FA4u;
    {
        const bool branch_taken_0x280fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FA4u;
        // 0x280fa8: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fa4) {
            ctx->pc = 0x280F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280f88;
        }
    }
    ctx->pc = 0x280FACu;
    // 0x280fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280fb0:
    // 0x280fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x280FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FB0u;
        // 0x280fb4: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280FB8u;
}
