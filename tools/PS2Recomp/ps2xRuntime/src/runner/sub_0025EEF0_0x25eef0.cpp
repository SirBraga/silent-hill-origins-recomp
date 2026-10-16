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

// Function: sub_0025EEF0
// Address: 0x25eef0 - 0x25ef88
void sub_0025EEF0_0x25eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EEF0_0x25eef0");
#endif

    switch (ctx->pc) {
        case 0x25ef34u: goto label_25ef34;
        case 0x25ef44u: goto label_25ef44;
        case 0x25ef54u: goto label_25ef54;
        case 0x25ef64u: goto label_25ef64;
        case 0x25ef74u: goto label_25ef74;
        default: break;
    }

    ctx->pc = 0x25eef0u;

    // 0x25eef0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25eef4: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x25eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x25eef8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25eefc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25eefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ef00: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x25ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x25ef04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ef08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ef0c: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x25ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x25ef10: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x25ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x25ef14: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x25ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x25ef18: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x25ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x25ef1c: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x25ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x25ef20: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x25ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x25ef24: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x25ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x25ef28: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x25ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x25ef2c: 0xc098da6  jal         func_263698
    ctx->pc = 0x25EF2Cu;
    SET_GPR_U32(ctx, 31, 0x25EF34u);
    ctx->pc = 0x25EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF2Cu;
    // 0x25ef30: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263698u, 0x25EF2Cu, 0x25EF34u)) {
        return;
    }
    ctx->pc = 0x25EF34u;
label_25ef34:
    // 0x25ef34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25EF34u;
    {
        const bool branch_taken_0x25ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef34) {
            ctx->pc = 0x25EF6Cu;
            goto label_25ef6c;
        }
    }
    ctx->pc = 0x25EF3Cu;
    // 0x25ef3c: 0xc098dfa  jal         func_2637E8
    ctx->pc = 0x25EF3Cu;
    SET_GPR_U32(ctx, 31, 0x25EF44u);
    ctx->pc = 0x2637E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2637E8u, 0x25EF3Cu, 0x25EF44u)) {
        return;
    }
    ctx->pc = 0x25EF44u;
label_25ef44:
    // 0x25ef44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25EF44u;
    {
        const bool branch_taken_0x25ef44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef44) {
            ctx->pc = 0x25EF6Cu;
            goto label_25ef6c;
        }
    }
    ctx->pc = 0x25EF4Cu;
    // 0x25ef4c: 0xc098dd0  jal         func_263740
    ctx->pc = 0x25EF4Cu;
    SET_GPR_U32(ctx, 31, 0x25EF54u);
    ctx->pc = 0x263740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263740u, 0x25EF4Cu, 0x25EF54u)) {
        return;
    }
    ctx->pc = 0x25EF54u;
label_25ef54:
    // 0x25ef54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EF54u;
    {
        const bool branch_taken_0x25ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef54) {
            ctx->pc = 0x25EF6Cu;
            goto label_25ef6c;
        }
    }
    ctx->pc = 0x25EF5Cu;
    // 0x25ef5c: 0xc097c2e  jal         func_25F0B8
    ctx->pc = 0x25EF5Cu;
    SET_GPR_U32(ctx, 31, 0x25EF64u);
    ctx->pc = 0x25F0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F0B8u, 0x25EF5Cu, 0x25EF64u)) {
        return;
    }
    ctx->pc = 0x25EF64u;
label_25ef64:
    // 0x25ef64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EF64u;
    {
        const bool branch_taken_0x25ef64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF64u;
        // 0x25ef68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef64) {
            ctx->pc = 0x25EF78u;
            goto label_25ef78;
        }
    }
    ctx->pc = 0x25EF6Cu;
label_25ef6c:
    // 0x25ef6c: 0xc097bae  jal         func_25EEB8
    ctx->pc = 0x25EF6Cu;
    SET_GPR_U32(ctx, 31, 0x25EF74u);
    ctx->pc = 0x25EEB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EEB8u, 0x25EF6Cu, 0x25EF74u)) {
        return;
    }
    ctx->pc = 0x25EF74u;
label_25ef74:
    // 0x25ef74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ef74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ef78:
    // 0x25ef78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ef7c: 0x3e00008  jr          $ra
    ctx->pc = 0x25EF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF7Cu;
        // 0x25ef80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EF84u;
    // 0x25ef84: 0x0  nop
    ctx->pc = 0x25ef84u;
    // NOP
    ctx->pc = 0x25ef88u;
}
