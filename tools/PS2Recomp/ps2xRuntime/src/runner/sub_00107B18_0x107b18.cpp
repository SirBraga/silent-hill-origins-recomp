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

// Function: sub_00107B18
// Address: 0x107b18 - 0x107b60
void sub_00107B18_0x107b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107B18_0x107b18");
#endif

    switch (ctx->pc) {
        case 0x107b54u: goto label_107b54;
        default: break;
    }

    ctx->pc = 0x107b18u;

    // 0x107b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107b1c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x107b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x107b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107b24: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x107b24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x107b28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x107b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107b2c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x107B2Cu;
    {
        const bool branch_taken_0x107b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x107B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B2Cu;
        // 0x107b30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b2c) {
            ctx->pc = 0x107B58u;
            goto label_107b58;
        }
    }
    ctx->pc = 0x107B34u;
    // 0x107b34: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x107b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x107b38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107B38u;
    {
        const bool branch_taken_0x107b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b38) {
            ctx->pc = 0x107B58u;
            goto label_107b58;
        }
    }
    ctx->pc = 0x107B40u;
    // 0x107b40: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x107b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x107b44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107B44u;
    {
        const bool branch_taken_0x107b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b44) {
            ctx->pc = 0x107B58u;
            goto label_107b58;
        }
    }
    ctx->pc = 0x107B4Cu;
    // 0x107b4c: 0xc041df2  jal         func_1077C8
    ctx->pc = 0x107B4Cu;
    SET_GPR_U32(ctx, 31, 0x107B54u);
    ctx->pc = 0x107B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B4Cu;
    // 0x107b50: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1077C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1077C8u, 0x107B4Cu, 0x107B54u)) {
        return;
    }
    ctx->pc = 0x107B54u;
label_107b54:
    // 0x107b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107b58:
    // 0x107b58: 0x3e00008  jr          $ra
    ctx->pc = 0x107B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B58u;
        // 0x107b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107B60u;
}
