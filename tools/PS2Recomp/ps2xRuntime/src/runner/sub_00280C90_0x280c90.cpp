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

// Function: sub_00280C90
// Address: 0x280c90 - 0x280ce0
void sub_00280C90_0x280c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280C90_0x280c90");
#endif

    switch (ctx->pc) {
        case 0x280ca8u: goto label_280ca8;
        default: break;
    }

    ctx->pc = 0x280c90u;

    // 0x280c90: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x280c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x280c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280ca0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x280ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280ca4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x280ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_280ca8:
    // 0x280ca8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280cac: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280cb0: 0x50660008  beql        $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x280CB0u;
    {
        const bool branch_taken_0x280cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x280cb0) {
            ctx->pc = 0x280CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280CB0u;
            // 0x280cb4: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280CD4u;
            goto label_280cd4;
        }
    }
    ctx->pc = 0x280CB8u;
    // 0x280cb8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x280cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x280cbc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x280cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280cc0: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x280cc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280cc4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x280CC4u;
    {
        const bool branch_taken_0x280cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CC4u;
        // 0x280cc8: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cc4) {
            ctx->pc = 0x280CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280ca8;
        }
    }
    ctx->pc = 0x280CCCu;
    // 0x280ccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cd0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x280cd0u;
    { uint32_t bits = FAST_READ32(0xCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280cd4:
    // 0x280cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x280CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CD4u;
        // 0x280cd8: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280CDCu;
    // 0x280cdc: 0x0  nop
    ctx->pc = 0x280cdcu;
    // NOP
    ctx->pc = 0x280ce0u;
}
