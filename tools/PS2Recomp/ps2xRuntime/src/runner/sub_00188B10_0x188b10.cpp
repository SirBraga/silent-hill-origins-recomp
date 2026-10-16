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

// Function: sub_00188B10
// Address: 0x188b10 - 0x188b68
void sub_00188B10_0x188b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188B10_0x188b10");
#endif

    switch (ctx->pc) {
        case 0x188b2cu: goto label_188b2c;
        default: break;
    }

    ctx->pc = 0x188b10u;

    // 0x188b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188b14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x188b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x188b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188b24: 0xc0622f6  jal         func_188BD8
    ctx->pc = 0x188B24u;
    SET_GPR_U32(ctx, 31, 0x188B2Cu);
    ctx->pc = 0x188B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B24u;
    // 0x188b28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188BD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188BD8u, 0x188B24u, 0x188B2Cu)) {
        return;
    }
    ctx->pc = 0x188B2Cu;
label_188b2c:
    // 0x188b2c: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188B2Cu;
    {
        const bool branch_taken_0x188b2c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x188b2c) {
            ctx->pc = 0x188B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B2Cu;
            // 0x188b30: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B54u;
            goto label_188b54;
        }
    }
    ctx->pc = 0x188B34u;
    // 0x188b34: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x188b38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188b3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x188b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x188b40: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x188b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x188b44: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x188b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x188b48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x188b4c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x188b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x188b50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x188b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_188b54:
    // 0x188b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x188B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B5Cu;
        // 0x188b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188B64u;
    // 0x188b64: 0x0  nop
    ctx->pc = 0x188b64u;
    // NOP
    ctx->pc = 0x188b68u;
}
