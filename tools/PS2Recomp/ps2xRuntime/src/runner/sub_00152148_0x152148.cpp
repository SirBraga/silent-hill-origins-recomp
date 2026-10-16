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

// Function: sub_00152148
// Address: 0x152148 - 0x152190
void sub_00152148_0x152148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152148_0x152148");
#endif

    switch (ctx->pc) {
        case 0x152178u: goto label_152178;
        case 0x152180u: goto label_152180;
        default: break;
    }

    ctx->pc = 0x152148u;

    // 0x152148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15214c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x152150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152154: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x152154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x152158: 0x24428598  addiu       $v0, $v0, -0x7A68
    ctx->pc = 0x152158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935960));
    // 0x15215c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x15215cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x152160: 0x8c64830c  lw          $a0, -0x7CF4($v1)
    ctx->pc = 0x152160u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33830Cu));
    // 0x152164: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x152164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x152168: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x152168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15216c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x152170: 0xc0603ce  jal         func_180F38
    ctx->pc = 0x152170u;
    SET_GPR_U32(ctx, 31, 0x152178u);
    ctx->pc = 0x152174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152170u;
    // 0x152174: 0xac830198  sw          $v1, 0x198($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x152170u, 0x152178u)) {
        return;
    }
    ctx->pc = 0x152178u;
label_152178:
    // 0x152178: 0xc07cd70  jal         func_1F35C0
    ctx->pc = 0x152178u;
    SET_GPR_U32(ctx, 31, 0x152180u);
    ctx->pc = 0x1F35C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F35C0u, 0x152178u, 0x152180u)) {
        return;
    }
    ctx->pc = 0x152180u;
label_152180:
    // 0x152180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152184: 0x3e00008  jr          $ra
    ctx->pc = 0x152184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152184u;
        // 0x152188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15218Cu;
    // 0x15218c: 0x0  nop
    ctx->pc = 0x15218cu;
    // NOP
    ctx->pc = 0x152190u;
}
