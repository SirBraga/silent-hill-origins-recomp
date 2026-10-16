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

// Function: sub_00151268
// Address: 0x151268 - 0x1512a8
void sub_00151268_0x151268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151268_0x151268");
#endif

    switch (ctx->pc) {
        case 0x15128cu: goto label_15128c;
        default: break;
    }

    ctx->pc = 0x151268u;

    // 0x151268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15126c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151270: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151270u;
    {
        const bool branch_taken_0x151270 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x151274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151270u;
        // 0x151274: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151270) {
            ctx->pc = 0x151294u;
            goto label_151294;
        }
    }
    ctx->pc = 0x151278u;
    // 0x151278: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151278u;
    {
        const bool branch_taken_0x151278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151278u;
        // 0x15127c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151278) {
            ctx->pc = 0x151298u;
            goto label_151298;
        }
    }
    ctx->pc = 0x151280u;
    // 0x151280: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x151280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x151284: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x151284u;
    SET_GPR_U32(ctx, 31, 0x15128Cu);
    ctx->pc = 0x151288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151284u;
    // 0x151288: 0x24842338  addiu       $a0, $a0, 0x2338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x151284u, 0x15128Cu)) {
        return;
    }
    ctx->pc = 0x15128Cu;
label_15128c:
    // 0x15128c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15128cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x151290: 0xac62efd0  sw          $v0, -0x1030($v1)
    ctx->pc = 0x151290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEFD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEFD0u, _value); } while (0);
label_151294:
    // 0x151294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151298:
    // 0x151298: 0x3e00008  jr          $ra
    ctx->pc = 0x151298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151298u;
        // 0x15129c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1512A0u;
    // 0x1512a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1512a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1512a4: 0x0  nop
    ctx->pc = 0x1512a4u;
    // NOP
    ctx->pc = 0x1512a8u;
}
