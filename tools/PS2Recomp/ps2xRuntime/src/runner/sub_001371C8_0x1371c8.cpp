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

// Function: sub_001371C8
// Address: 0x1371c8 - 0x137210
void sub_001371C8_0x1371c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001371C8_0x1371c8");
#endif

    switch (ctx->pc) {
        case 0x1371e8u: goto label_1371e8;
        default: break;
    }

    ctx->pc = 0x1371c8u;

    // 0x1371c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1371c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1371cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1371ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1371d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1371d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1371d4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1371d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1371d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1371D8u;
    {
        const bool branch_taken_0x1371d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1371DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371D8u;
        // 0x1371dc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371d8) {
            ctx->pc = 0x1371F0u;
            goto label_1371f0;
        }
    }
    ctx->pc = 0x1371E0u;
    // 0x1371e0: 0xc049a0e  jal         func_126838
    ctx->pc = 0x1371E0u;
    SET_GPR_U32(ctx, 31, 0x1371E8u);
    ctx->pc = 0x126838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126838u, 0x1371E0u, 0x1371E8u)) {
        return;
    }
    ctx->pc = 0x1371E8u;
label_1371e8:
    // 0x1371e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1371E8u;
    {
        const bool branch_taken_0x1371e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371E8u;
        // 0x1371ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371e8) {
            ctx->pc = 0x137204u;
            goto label_137204;
        }
    }
    ctx->pc = 0x1371F0u;
label_1371f0:
    // 0x1371f0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1371f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1371f4: 0x24428380  addiu       $v0, $v0, -0x7C80
    ctx->pc = 0x1371f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935424));
    // 0x1371f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1371f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1371fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1371fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137204:
    // 0x137204: 0x3e00008  jr          $ra
    ctx->pc = 0x137204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137204u;
        // 0x137208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13720Cu;
    // 0x13720c: 0x0  nop
    ctx->pc = 0x13720cu;
    // NOP
    ctx->pc = 0x137210u;
}
