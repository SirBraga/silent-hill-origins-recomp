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

// Function: sub_002BDD88
// Address: 0x2bdd88 - 0x2bddf8
void sub_002BDD88_0x2bdd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDD88_0x2bdd88");
#endif

    ctx->pc = 0x2bdd88u;

    // 0x2bdd88: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x2bdd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
    // 0x2bdd8c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2bdd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2bdd90: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2bdd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2bdd94: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2bdd94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2bdd98: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2bdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2bdd9c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2bdd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2bdda0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2bdda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2bdda4: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x2bdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x2bdda8: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x2bdda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x2bddac: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x2bddacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x2bddb0: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x2bddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x2bddb4: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x2bddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x2bddb8: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x2bddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x2bddbc: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x2bddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x2bddc0: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x2bddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x2bddc4: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x2bddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x2bddc8: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x2bddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x2bddcc: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x2bddccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x2bddd0: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x2bddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x2bddd4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x2bddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x2bddd8: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x2bddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x2bdddc: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x2bdddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x2bdde0: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x2bdde0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x2bdde4: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x2bdde4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x2bdde8: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x2bdde8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x2bddec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDECu;
        // 0x2bddf0: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDDF4u;
    // 0x2bddf4: 0x0  nop
    ctx->pc = 0x2bddf4u;
    // NOP
    ctx->pc = 0x2bddf8u;
}
