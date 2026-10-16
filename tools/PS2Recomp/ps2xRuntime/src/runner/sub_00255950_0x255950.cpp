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

// Function: sub_00255950
// Address: 0x255950 - 0x255988
void sub_00255950_0x255950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255950_0x255950");
#endif

    ctx->pc = 0x255950u;

    // 0x255950: 0x8f8285b8  lw          $v0, -0x7A48($gp)
    ctx->pc = 0x255950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935992)));
    // 0x255954: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x255954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x255958: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x25595c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x255960: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x255960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x255964: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x255964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x255968: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x255968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x25596c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25596cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255970: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x255974: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x255974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x255978: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x255978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x25597c: 0x3e00008  jr          $ra
    ctx->pc = 0x25597Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25597Cu;
        // 0x255980: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25597Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255984u;
    // 0x255984: 0x0  nop
    ctx->pc = 0x255984u;
    // NOP
    ctx->pc = 0x255988u;
}
