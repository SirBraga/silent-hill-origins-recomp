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

// Function: sub_002DC230
// Address: 0x2dc230 - 0x2dc258
void sub_002DC230_0x2dc230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC230_0x2dc230");
#endif

    switch (ctx->pc) {
        case 0x2dc230u: goto label_2dc230;
        case 0x2dc234u: goto label_2dc234;
        case 0x2dc238u: goto label_2dc238;
        case 0x2dc23cu: goto label_2dc23c;
        case 0x2dc240u: goto label_2dc240;
        case 0x2dc244u: goto label_2dc244;
        case 0x2dc248u: goto label_2dc248;
        case 0x2dc24cu: goto label_2dc24c;
        case 0x2dc250u: goto label_2dc250;
        case 0x2dc254u: goto label_2dc254;
        default: break;
    }

    ctx->pc = 0x2dc230u;

label_2dc230:
    // 0x2dc230: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2dc230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2dc234:
    // 0x2dc234: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dc238:
    // 0x2dc238: 0x8c6210dc  lw          $v0, 0x10DC($v1)
    ctx->pc = 0x2dc238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4316)));
label_2dc23c:
    // 0x2dc23c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dc240:
    // 0x2dc240: 0x40f809  jalr        $v0
label_2dc244:
    if (ctx->pc == 0x2DC244u) {
        ctx->pc = 0x2DC248u;
        goto label_2dc248;
    }
    ctx->pc = 0x2DC240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DC248u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC240u, 0x2DC248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC248u;
label_2dc248:
    // 0x2dc248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc24c:
    // 0x2dc24c: 0x3e00008  jr          $ra
label_2dc250:
    if (ctx->pc == 0x2DC250u) {
        ctx->pc = 0x2DC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC24Cu;
        // 0x2dc250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC254u;
        goto label_2dc254;
    }
    ctx->pc = 0x2DC24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC24Cu;
        // 0x2dc250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC254u;
label_2dc254:
    // 0x2dc254: 0x0  nop
    ctx->pc = 0x2dc254u;
    // NOP
    ctx->pc = 0x2dc258u;
}
