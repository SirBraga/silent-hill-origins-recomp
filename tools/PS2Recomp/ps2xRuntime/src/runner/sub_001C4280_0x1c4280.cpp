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

// Function: sub_001C4280
// Address: 0x1c4280 - 0x1c42b0
void sub_001C4280_0x1c4280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4280_0x1c4280");
#endif

    switch (ctx->pc) {
        case 0x1c42a0u: goto label_1c42a0;
        default: break;
    }

    ctx->pc = 0x1c4280u;

    // 0x1c4280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4284: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c4284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c428c: 0xc44002d4  lwc1        $f0, 0x2D4($v0)
    ctx->pc = 0x1c428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4290: 0x8c4302dc  lw          $v1, 0x2DC($v0)
    ctx->pc = 0x1c4290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
    // 0x1c4294: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x1c4294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x1c4298: 0xc0710e8  jal         func_1C43A0
    ctx->pc = 0x1C4298u;
    SET_GPR_U32(ctx, 31, 0x1C42A0u);
    ctx->pc = 0x1C429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4298u;
    // 0x1c429c: 0xac4302d8  sw          $v1, 0x2D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 728), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C43A0u, 0x1C4298u, 0x1C42A0u)) {
        return;
    }
    ctx->pc = 0x1C42A0u;
label_1c42a0:
    // 0x1c42a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c42a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c42a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C42A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42A4u;
        // 0x1c42a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C42A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C42ACu;
    // 0x1c42ac: 0x0  nop
    ctx->pc = 0x1c42acu;
    // NOP
    ctx->pc = 0x1c42b0u;
}
