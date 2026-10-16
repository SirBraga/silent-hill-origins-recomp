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

// Function: sub_0013B600
// Address: 0x13b600 - 0x13b640
void sub_0013B600_0x13b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B600_0x13b600");
#endif

    switch (ctx->pc) {
        case 0x13b624u: goto label_13b624;
        default: break;
    }

    ctx->pc = 0x13b600u;

    // 0x13b600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b604: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13b604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13b608: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B608u;
    {
        const bool branch_taken_0x13b608 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B608u;
        // 0x13b60c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b608) {
            ctx->pc = 0x13B62Cu;
            goto label_13b62c;
        }
    }
    ctx->pc = 0x13B610u;
    // 0x13b610: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B610u;
    {
        const bool branch_taken_0x13b610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B610u;
        // 0x13b614: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b610) {
            ctx->pc = 0x13B630u;
            goto label_13b630;
        }
    }
    ctx->pc = 0x13B618u;
    // 0x13b618: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13b618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13b61c: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13B61Cu;
    SET_GPR_U32(ctx, 31, 0x13B624u);
    ctx->pc = 0x13B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B61Cu;
    // 0x13b620: 0x2484f5f0  addiu       $a0, $a0, -0xA10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13B61Cu, 0x13B624u)) {
        return;
    }
    ctx->pc = 0x13B624u;
label_13b624:
    // 0x13b624: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13b624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13b628: 0xac6247b8  sw          $v0, 0x47B8($v1)
    ctx->pc = 0x13b628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B47B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B47B8u, _value); } while (0);
label_13b62c:
    // 0x13b62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b630:
    // 0x13b630: 0x3e00008  jr          $ra
    ctx->pc = 0x13B630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B630u;
        // 0x13b634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B638u;
    // 0x13b638: 0x0  nop
    ctx->pc = 0x13b638u;
    // NOP
    // 0x13b63c: 0x0  nop
    ctx->pc = 0x13b63cu;
    // NOP
    ctx->pc = 0x13b640u;
}
