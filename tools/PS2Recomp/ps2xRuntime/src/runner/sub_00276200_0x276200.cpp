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

// Function: sub_00276200
// Address: 0x276200 - 0x276238
void sub_00276200_0x276200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276200_0x276200");
#endif

    switch (ctx->pc) {
        case 0x276200u: goto label_276200;
        case 0x276204u: goto label_276204;
        case 0x276208u: goto label_276208;
        case 0x27620cu: goto label_27620c;
        case 0x276210u: goto label_276210;
        case 0x276214u: goto label_276214;
        case 0x276218u: goto label_276218;
        case 0x27621cu: goto label_27621c;
        case 0x276220u: goto label_276220;
        case 0x276224u: goto label_276224;
        case 0x276228u: goto label_276228;
        case 0x27622cu: goto label_27622c;
        case 0x276230u: goto label_276230;
        case 0x276234u: goto label_276234;
        default: break;
    }

    ctx->pc = 0x276200u;

label_276200:
    // 0x276200: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x276200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_276204:
    // 0x276204: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_276208:
    // 0x276208: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x276208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_27620c:
    // 0x27620c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_276210:
    // 0x276210: 0x40f809  jalr        $v0
label_276214:
    if (ctx->pc == 0x276214u) {
        ctx->pc = 0x276218u;
        goto label_276218;
    }
    ctx->pc = 0x276210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x276218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276210u, 0x276218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276218u;
label_276218:
    // 0x276218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27621c:
    // 0x27621c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276220:
    // 0x276220: 0x3e00008  jr          $ra
label_276224:
    if (ctx->pc == 0x276224u) {
        ctx->pc = 0x276224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276220u;
        // 0x276224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276228u;
        goto label_276228;
    }
    ctx->pc = 0x276220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276220u;
        // 0x276224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276228u;
label_276228:
    // 0x276228: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27622c:
    // 0x27622c: 0x0  nop
    ctx->pc = 0x27622cu;
    // NOP
label_276230:
    // 0x276230: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_276234:
    // 0x276234: 0x0  nop
    ctx->pc = 0x276234u;
    // NOP
    ctx->pc = 0x276238u;
}
