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

// Function: sub_001689F0
// Address: 0x1689f0 - 0x168a50
void sub_001689F0_0x1689f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001689F0_0x1689f0");
#endif

    switch (ctx->pc) {
        case 0x168a08u: goto label_168a08;
        default: break;
    }

    ctx->pc = 0x1689f0u;

    // 0x1689f0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1689f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1689f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1689f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1689f8: 0x8c4286ac  lw          $v0, -0x7954($v0)
    ctx->pc = 0x1689f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3386ACu));
    // 0x1689fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1689FCu;
    {
        const bool branch_taken_0x1689fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1689fc) {
            ctx->pc = 0x168A20u;
            goto label_168a20;
        }
    }
    ctx->pc = 0x168A04u;
    // 0x168a04: 0x0  nop
    ctx->pc = 0x168a04u;
    // NOP
label_168a08:
    // 0x168a08: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x168a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168a0c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x168a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x168a10: 0x0  nop
    ctx->pc = 0x168a10u;
    // NOP
    // 0x168a14: 0x0  nop
    ctx->pc = 0x168a14u;
    // NOP
    // 0x168a18: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168A18u;
    {
        const bool branch_taken_0x168a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A18u;
        // 0x168a1c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a18) {
            ctx->pc = 0x168A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168a08;
        }
    }
    ctx->pc = 0x168A20u;
label_168a20:
    // 0x168a20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x168a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x168a24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168a28: 0x0  nop
    ctx->pc = 0x168a28u;
    // NOP
    // 0x168a2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x168a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168a30: 0x0  nop
    ctx->pc = 0x168a30u;
    // NOP
    // 0x168a34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x168A34u;
    {
        const bool branch_taken_0x168a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168a34) {
            ctx->pc = 0x168A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168A34u;
            // 0x168a38: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x168A3Cu;
            goto label_168a3c;
        }
    }
    ctx->pc = 0x168A3Cu;
label_168a3c:
    // 0x168a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x168A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A3Cu;
        // 0x168a40: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168A44u;
    // 0x168a44: 0x0  nop
    ctx->pc = 0x168a44u;
    // NOP
    // 0x168a48: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x168a48u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x168a4c: 0x0  nop
    ctx->pc = 0x168a4cu;
    // NOP
    ctx->pc = 0x168a50u;
}
