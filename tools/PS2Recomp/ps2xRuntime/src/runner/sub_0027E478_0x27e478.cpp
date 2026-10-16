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

// Function: sub_0027E478
// Address: 0x27e478 - 0x27e4d0
void sub_0027E478_0x27e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E478_0x27e478");
#endif

    switch (ctx->pc) {
        case 0x27e4b0u: goto label_27e4b0;
        default: break;
    }

    ctx->pc = 0x27e478u;

    // 0x27e478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e47c: 0x8f8287f0  lw          $v0, -0x7810($gp)
    ctx->pc = 0x27e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
    // 0x27e480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27e480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27e484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27e488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e48c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27e490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E494u;
    {
        const bool branch_taken_0x27e494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E494u;
        // 0x27e498: 0x8f8387f0  lw          $v1, -0x7810($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e494) {
            ctx->pc = 0x27E4B4u;
            goto label_27e4b4;
        }
    }
    ctx->pc = 0x27E49Cu;
    // 0x27e49c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e4a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E4A0u;
    {
        const bool branch_taken_0x27e4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4A0u;
        // 0x27e4a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4a0) {
            ctx->pc = 0x27E4B8u;
            goto label_27e4b8;
        }
    }
    ctx->pc = 0x27E4A8u;
    // 0x27e4a8: 0xc09f8ba  jal         func_27E2E8
    ctx->pc = 0x27E4A8u;
    SET_GPR_U32(ctx, 31, 0x27E4B0u);
    ctx->pc = 0x27E2E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E2E8u, 0x27E4A8u, 0x27E4B0u)) {
        return;
    }
    ctx->pc = 0x27E4B0u;
label_27e4b0:
    // 0x27e4b0: 0x8f8387f0  lw          $v1, -0x7810($gp)
    ctx->pc = 0x27e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_27e4b4:
    // 0x27e4b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27e4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e4b8:
    // 0x27e4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e4bc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x27e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x27e4c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27e4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e4c4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x27e4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27E4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4C8u;
        // 0x27e4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E4D0u;
}
