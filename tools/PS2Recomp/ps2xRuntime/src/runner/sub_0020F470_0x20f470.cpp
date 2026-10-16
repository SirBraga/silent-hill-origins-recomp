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

// Function: sub_0020F470
// Address: 0x20f470 - 0x20f4a8
void sub_0020F470_0x20f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F470_0x20f470");
#endif

    switch (ctx->pc) {
        case 0x20f470u: goto label_20f470;
        case 0x20f474u: goto label_20f474;
        case 0x20f478u: goto label_20f478;
        case 0x20f47cu: goto label_20f47c;
        case 0x20f480u: goto label_20f480;
        case 0x20f484u: goto label_20f484;
        case 0x20f488u: goto label_20f488;
        case 0x20f48cu: goto label_20f48c;
        case 0x20f490u: goto label_20f490;
        case 0x20f494u: goto label_20f494;
        case 0x20f498u: goto label_20f498;
        case 0x20f49cu: goto label_20f49c;
        case 0x20f4a0u: goto label_20f4a0;
        case 0x20f4a4u: goto label_20f4a4;
        default: break;
    }

    ctx->pc = 0x20f470u;

label_20f470:
    // 0x20f470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20f474:
    // 0x20f474: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20f474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f478:
    // 0x20f478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20f47c:
    // 0x20f47c: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x20f47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_20f480:
    // 0x20f480: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20f484:
    // 0x20f484: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x20f484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_20f488:
    // 0x20f488: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20f48c:
    // 0x20f48c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f490:
    // 0x20f490: 0x60f809  jalr        $v1
label_20f494:
    if (ctx->pc == 0x20F494u) {
        ctx->pc = 0x20F498u;
        goto label_20f498;
    }
    ctx->pc = 0x20F490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20F498u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F490u, 0x20F498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F498u;
label_20f498:
    // 0x20f498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f49c:
    // 0x20f49c: 0x3e00008  jr          $ra
label_20f4a0:
    if (ctx->pc == 0x20F4A0u) {
        ctx->pc = 0x20F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F49Cu;
        // 0x20f4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4A4u;
        goto label_20f4a4;
    }
    ctx->pc = 0x20F49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F49Cu;
        // 0x20f4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F4A4u;
label_20f4a4:
    // 0x20f4a4: 0x0  nop
    ctx->pc = 0x20f4a4u;
    // NOP
    ctx->pc = 0x20f4a8u;
}
