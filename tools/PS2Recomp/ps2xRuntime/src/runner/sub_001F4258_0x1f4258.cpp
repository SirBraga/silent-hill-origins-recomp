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

// Function: sub_001F4258
// Address: 0x1f4258 - 0x1f4298
void sub_001F4258_0x1f4258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4258_0x1f4258");
#endif

    switch (ctx->pc) {
        case 0x1f4288u: goto label_1f4288;
        default: break;
    }

    ctx->pc = 0x1f4258u;

    // 0x1f4258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f425c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1f425cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1f4260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4264: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x1f4264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8918u));
    // 0x1f4268: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f4268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f426c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F426Cu;
    {
        const bool branch_taken_0x1f426c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F426Cu;
        // 0x1f4270: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f426c) {
            ctx->pc = 0x1F428Cu;
            goto label_1f428c;
        }
    }
    ctx->pc = 0x1F4274u;
    // 0x1f4274: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f4274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f4278: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4278u;
    {
        const bool branch_taken_0x1f4278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4278) {
            ctx->pc = 0x1F428Cu;
            goto label_1f428c;
        }
    }
    ctx->pc = 0x1F4280u;
    // 0x1f4280: 0xc07d0a6  jal         func_1F4298
    ctx->pc = 0x1F4280u;
    SET_GPR_U32(ctx, 31, 0x1F4288u);
    ctx->pc = 0x1F4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4280u;
    // 0x1f4284: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4298u, 0x1F4280u, 0x1F4288u)) {
        return;
    }
    ctx->pc = 0x1F4288u;
label_1f4288:
    // 0x1f4288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f428c:
    // 0x1f428c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F428Cu;
        // 0x1f4290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4294u;
    // 0x1f4294: 0x0  nop
    ctx->pc = 0x1f4294u;
    // NOP
    ctx->pc = 0x1f4298u;
}
