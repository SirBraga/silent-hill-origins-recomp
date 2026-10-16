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

// Function: sub_00280BF0
// Address: 0x280bf0 - 0x280c48
void sub_00280BF0_0x280bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280BF0_0x280bf0");
#endif

    switch (ctx->pc) {
        case 0x280c08u: goto label_280c08;
        default: break;
    }

    ctx->pc = 0x280bf0u;

    // 0x280bf0: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280bf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x280bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bfc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280c00: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x280c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280c04: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x280c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_280c08:
    // 0x280c08: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x280c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x280c0c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280c10: 0x54670003  bnel        $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x280C10u;
    {
        const bool branch_taken_0x280c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x280c10) {
            ctx->pc = 0x280C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280C10u;
            // 0x280c14: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280C20u;
            goto label_280c20;
        }
    }
    ctx->pc = 0x280C18u;
    // 0x280c18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280C18u;
    {
        const bool branch_taken_0x280c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C18u;
        // 0x280c1c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c18) {
            ctx->pc = 0x280C34u;
            goto label_280c34;
        }
    }
    ctx->pc = 0x280C20u;
label_280c20:
    // 0x280c20: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x280c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280c24: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x280c24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280c28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x280C28u;
    {
        const bool branch_taken_0x280c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C28u;
        // 0x280c2c: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c28) {
            ctx->pc = 0x280C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280c08;
        }
    }
    ctx->pc = 0x280C30u;
    // 0x280c30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x280c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280c34:
    // 0x280c34: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x280c34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x280c38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x280c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x280C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C3Cu;
        // 0x280c40: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280C44u;
    // 0x280c44: 0x0  nop
    ctx->pc = 0x280c44u;
    // NOP
    ctx->pc = 0x280c48u;
}
