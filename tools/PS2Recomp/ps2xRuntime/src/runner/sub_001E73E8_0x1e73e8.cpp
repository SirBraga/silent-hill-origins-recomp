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

// Function: sub_001E73E8
// Address: 0x1e73e8 - 0x1e7438
void sub_001E73E8_0x1e73e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E73E8_0x1e73e8");
#endif

    ctx->pc = 0x1e73e8u;

    // 0x1e73e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e73ec: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1e73ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1e73f0: 0x8c45e768  lw          $a1, -0x1898($v0)
    ctx->pc = 0x1e73f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E768u));
    // 0x1e73f4: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1e73f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1e73f8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E73F8u;
    {
        const bool branch_taken_0x1e73f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73F8u;
        // 0x1e73fc: 0xacc5e76c  sw          $a1, -0x1894($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294961004), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73f8) {
            ctx->pc = 0x1E7418u;
            goto label_1e7418;
        }
    }
    ctx->pc = 0x1E7400u;
    // 0x1e7400: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x1e7400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1e7404: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x1e7404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1e7408: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e7408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e740c: 0xacc2e76c  sw          $v0, -0x1894($a2)
    ctx->pc = 0x1e740cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294961004), GPR_U32(ctx, 2));
    // 0x1e7410: 0xac64e778  sw          $a0, -0x1888($v1)
    ctx->pc = 0x1e7410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x33E778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E778u, _value); } while (0);
    // 0x1e7414: 0xace5e77c  sw          $a1, -0x1884($a3)
    ctx->pc = 0x1e7414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961020), GPR_U32(ctx, 5));
label_1e7418:
    // 0x1e7418: 0x8cc3e76c  lw          $v1, -0x1894($a2)
    ctx->pc = 0x1e7418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294961004)));
    // 0x1e741c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1e741cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1e7420: 0x8ce2e77c  lw          $v0, -0x1884($a3)
    ctx->pc = 0x1e7420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294961020)));
    // 0x1e7424: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1e7424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e7428: 0xaca3e774  sw          $v1, -0x188C($a1)
    ctx->pc = 0x1e7428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x33E774u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E774u, _value); } while (0);
    // 0x1e742c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E742Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E742Cu;
        // 0x1e7430: 0xacc4e76c  sw          $a0, -0x1894($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294961004), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E742Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7434u;
    // 0x1e7434: 0x0  nop
    ctx->pc = 0x1e7434u;
    // NOP
    ctx->pc = 0x1e7438u;
}
