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

// Function: sub_002EDD08
// Address: 0x2edd08 - 0x2edd38
void sub_002EDD08_0x2edd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDD08_0x2edd08");
#endif

    ctx->pc = 0x2edd08u;

    // 0x2edd08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2edd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2edd0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2edd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2edd10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EDD10u;
    {
        const bool branch_taken_0x2edd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD10u;
        // 0x2edd14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd10) {
            ctx->pc = 0x2EDD2Cu;
            goto label_2edd2c;
        }
    }
    ctx->pc = 0x2EDD18u;
    // 0x2edd18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2edd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2edd1c: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x2edd1cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2edd20: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2edd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2edd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD24u;
        // 0x2edd28: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDD2Cu;
label_2edd2c:
    // 0x2edd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD2Cu;
        // 0x2edd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDD34u;
    // 0x2edd34: 0x0  nop
    ctx->pc = 0x2edd34u;
    // NOP
    ctx->pc = 0x2edd38u;
}
