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

// Function: sub_002302C8
// Address: 0x2302c8 - 0x230310
void sub_002302C8_0x2302c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002302C8_0x2302c8");
#endif

    switch (ctx->pc) {
        case 0x2302c8u: goto label_2302c8;
        case 0x2302ccu: goto label_2302cc;
        case 0x2302d0u: goto label_2302d0;
        case 0x2302d4u: goto label_2302d4;
        case 0x2302d8u: goto label_2302d8;
        case 0x2302dcu: goto label_2302dc;
        case 0x2302e0u: goto label_2302e0;
        case 0x2302e4u: goto label_2302e4;
        case 0x2302e8u: goto label_2302e8;
        case 0x2302ecu: goto label_2302ec;
        case 0x2302f0u: goto label_2302f0;
        case 0x2302f4u: goto label_2302f4;
        case 0x2302f8u: goto label_2302f8;
        case 0x2302fcu: goto label_2302fc;
        case 0x230300u: goto label_230300;
        case 0x230304u: goto label_230304;
        case 0x230308u: goto label_230308;
        case 0x23030cu: goto label_23030c;
        default: break;
    }

    ctx->pc = 0x2302c8u;

label_2302c8:
    // 0x2302c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2302c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2302cc:
    // 0x2302cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2302ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2302d0:
    // 0x2302d0: 0xc08bf66  jal         func_22FD98
label_2302d4:
    if (ctx->pc == 0x2302D4u) {
        ctx->pc = 0x2302D8u;
        goto label_2302d8;
    }
    ctx->pc = 0x2302D0u;
    SET_GPR_U32(ctx, 31, 0x2302D8u);
    ctx->pc = 0x22FD98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22FD98u, 0x2302D0u, 0x2302D8u)) {
        return;
    }
    ctx->pc = 0x2302D8u;
label_2302d8:
    // 0x2302d8: 0x8f82840c  lw          $v0, -0x7BF4($gp)
    ctx->pc = 0x2302d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935564)));
label_2302dc:
    // 0x2302dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2302e0:
    if (ctx->pc == 0x2302E0u) {
        ctx->pc = 0x2302E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302DCu;
        // 0x2302e0: 0xaf8083fc  sw          $zero, -0x7C04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2302E4u;
        goto label_2302e4;
    }
    ctx->pc = 0x2302DCu;
    {
        const bool branch_taken_0x2302dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2302E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302DCu;
        // 0x2302e0: 0xaf8083fc  sw          $zero, -0x7C04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302dc) {
            ctx->pc = 0x2302F4u;
            goto label_2302f4;
        }
    }
    ctx->pc = 0x2302E4u;
label_2302e4:
    // 0x2302e4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2302e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2302e8:
    // 0x2302e8: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2302e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2302ec:
    // 0x2302ec: 0x40f809  jalr        $v0
label_2302f0:
    if (ctx->pc == 0x2302F0u) {
        ctx->pc = 0x2302F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302ECu;
        // 0x2302f0: 0x8f848408  lw          $a0, -0x7BF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2302F4u;
        goto label_2302f4;
    }
    ctx->pc = 0x2302ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2302F4u);
        ctx->pc = 0x2302F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302ECu;
        // 0x2302f0: 0x8f848408  lw          $a0, -0x7BF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935560)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2302ECu, 0x2302F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2302F4u;
label_2302f4:
    // 0x2302f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2302f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2302f8:
    // 0x2302f8: 0xaf808408  sw          $zero, -0x7BF8($gp)
    ctx->pc = 0x2302f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935560), GPR_U32(ctx, 0));
label_2302fc:
    // 0x2302fc: 0xaf80840c  sw          $zero, -0x7BF4($gp)
    ctx->pc = 0x2302fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935564), GPR_U32(ctx, 0));
label_230300:
    // 0x230300: 0xaf808400  sw          $zero, -0x7C00($gp)
    ctx->pc = 0x230300u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935552), GPR_U32(ctx, 0));
label_230304:
    // 0x230304: 0xa3808404  sb          $zero, -0x7BFC($gp)
    ctx->pc = 0x230304u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935556), (uint8_t)GPR_U32(ctx, 0));
label_230308:
    // 0x230308: 0x3e00008  jr          $ra
label_23030c:
    if (ctx->pc == 0x23030Cu) {
        ctx->pc = 0x23030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230308u;
        // 0x23030c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230310u;
        goto label_fallthrough_0x230308;
    }
    ctx->pc = 0x230308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230308u;
        // 0x23030c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x230308:
    ctx->pc = 0x230310u;
}
