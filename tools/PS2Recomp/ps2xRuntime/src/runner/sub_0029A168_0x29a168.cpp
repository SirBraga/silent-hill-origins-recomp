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

// Function: sub_0029A168
// Address: 0x29a168 - 0x29a188
void sub_0029A168_0x29a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A168_0x29a168");
#endif

    switch (ctx->pc) {
        case 0x29a168u: goto label_29a168;
        case 0x29a16cu: goto label_29a16c;
        case 0x29a170u: goto label_29a170;
        case 0x29a174u: goto label_29a174;
        case 0x29a178u: goto label_29a178;
        case 0x29a17cu: goto label_29a17c;
        case 0x29a180u: goto label_29a180;
        case 0x29a184u: goto label_29a184;
        default: break;
    }

    ctx->pc = 0x29a168u;

label_29a168:
    // 0x29a168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29a16c:
    // 0x29a16c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29a170:
    // 0x29a170: 0xa0f809  jalr        $a1
label_29a174:
    if (ctx->pc == 0x29A174u) {
        ctx->pc = 0x29A178u;
        goto label_29a178;
    }
    ctx->pc = 0x29A170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29A178u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A170u, 0x29A178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A178u;
label_29a178:
    // 0x29a178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a17c:
    // 0x29a17c: 0x3e00008  jr          $ra
label_29a180:
    if (ctx->pc == 0x29A180u) {
        ctx->pc = 0x29A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A17Cu;
        // 0x29a180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A184u;
        goto label_29a184;
    }
    ctx->pc = 0x29A17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A17Cu;
        // 0x29a180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A184u;
label_29a184:
    // 0x29a184: 0x0  nop
    ctx->pc = 0x29a184u;
    // NOP
    ctx->pc = 0x29a188u;
}
