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

// Function: sub_0028FDB8
// Address: 0x28fdb8 - 0x28fde0
void sub_0028FDB8_0x28fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FDB8_0x28fdb8");
#endif

    switch (ctx->pc) {
        case 0x28fdb8u: goto label_28fdb8;
        case 0x28fdbcu: goto label_28fdbc;
        case 0x28fdc0u: goto label_28fdc0;
        case 0x28fdc4u: goto label_28fdc4;
        case 0x28fdc8u: goto label_28fdc8;
        case 0x28fdccu: goto label_28fdcc;
        case 0x28fdd0u: goto label_28fdd0;
        case 0x28fdd4u: goto label_28fdd4;
        case 0x28fdd8u: goto label_28fdd8;
        case 0x28fddcu: goto label_28fddc;
        default: break;
    }

    ctx->pc = 0x28fdb8u;

label_28fdb8:
    // 0x28fdb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28fdbc:
    // 0x28fdbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28fdc0:
    // 0x28fdc0: 0x8c820138  lw          $v0, 0x138($a0)
    ctx->pc = 0x28fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
label_28fdc4:
    // 0x28fdc4: 0x40f809  jalr        $v0
label_28fdc8:
    if (ctx->pc == 0x28FDC8u) {
        ctx->pc = 0x28FDCCu;
        goto label_28fdcc;
    }
    ctx->pc = 0x28FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28FDCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FDC4u, 0x28FDCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FDCCu;
label_28fdcc:
    // 0x28fdcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28fdd0:
    // 0x28fdd0: 0x3e00008  jr          $ra
label_28fdd4:
    if (ctx->pc == 0x28FDD4u) {
        ctx->pc = 0x28FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDD0u;
        // 0x28fdd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FDD8u;
        goto label_28fdd8;
    }
    ctx->pc = 0x28FDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDD0u;
        // 0x28fdd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FDD8u;
label_28fdd8:
    // 0x28fdd8: 0xe44c000c  swc1        $f12, 0xC($v0)
    ctx->pc = 0x28fdd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_28fddc:
    // 0x28fddc: 0x0  nop
    ctx->pc = 0x28fddcu;
    // NOP
    ctx->pc = 0x28fde0u;
}
