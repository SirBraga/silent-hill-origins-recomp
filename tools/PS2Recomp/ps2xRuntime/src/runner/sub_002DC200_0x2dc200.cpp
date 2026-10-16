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

// Function: sub_002DC200
// Address: 0x2dc200 - 0x2dc230
void sub_002DC200_0x2dc200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC200_0x2dc200");
#endif

    switch (ctx->pc) {
        case 0x2dc200u: goto label_2dc200;
        case 0x2dc204u: goto label_2dc204;
        case 0x2dc208u: goto label_2dc208;
        case 0x2dc20cu: goto label_2dc20c;
        case 0x2dc210u: goto label_2dc210;
        case 0x2dc214u: goto label_2dc214;
        case 0x2dc218u: goto label_2dc218;
        case 0x2dc21cu: goto label_2dc21c;
        case 0x2dc220u: goto label_2dc220;
        case 0x2dc224u: goto label_2dc224;
        case 0x2dc228u: goto label_2dc228;
        case 0x2dc22cu: goto label_2dc22c;
        default: break;
    }

    ctx->pc = 0x2dc200u;

label_2dc200:
    // 0x2dc200: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2dc200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2dc204:
    // 0x2dc204: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dc208:
    // 0x2dc208: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2dc208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2dc20c:
    // 0x2dc20c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dc210:
    // 0x2dc210: 0x40f809  jalr        $v0
label_2dc214:
    if (ctx->pc == 0x2DC214u) {
        ctx->pc = 0x2DC218u;
        goto label_2dc218;
    }
    ctx->pc = 0x2DC210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DC218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC210u, 0x2DC218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC218u;
label_2dc218:
    // 0x2dc218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc21c:
    // 0x2dc21c: 0x3e00008  jr          $ra
label_2dc220:
    if (ctx->pc == 0x2DC220u) {
        ctx->pc = 0x2DC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC21Cu;
        // 0x2dc220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC224u;
        goto label_2dc224;
    }
    ctx->pc = 0x2DC21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC21Cu;
        // 0x2dc220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC224u;
label_2dc224:
    // 0x2dc224: 0x0  nop
    ctx->pc = 0x2dc224u;
    // NOP
label_2dc228:
    // 0x2dc228: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2dc228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dc22c:
    // 0x2dc22c: 0x0  nop
    ctx->pc = 0x2dc22cu;
    // NOP
    ctx->pc = 0x2dc230u;
}
