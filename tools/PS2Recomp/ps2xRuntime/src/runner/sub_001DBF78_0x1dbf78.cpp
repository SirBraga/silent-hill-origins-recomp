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

// Function: sub_001DBF78
// Address: 0x1dbf78 - 0x1dbfb8
void sub_001DBF78_0x1dbf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBF78_0x1dbf78");
#endif

    switch (ctx->pc) {
        case 0x1dbfa0u: goto label_1dbfa0;
        default: break;
    }

    ctx->pc = 0x1dbf78u;

    // 0x1dbf78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbf7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1dbf7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbf80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dbf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dbf84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbf88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBF88u;
    {
        const bool branch_taken_0x1dbf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF88u;
        // 0x1dbf8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf88) {
            ctx->pc = 0x1DBFA0u;
            goto label_1dbfa0;
        }
    }
    ctx->pc = 0x1DBF90u;
    // 0x1dbf90: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1dbf90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dbf94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dbf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbf98: 0xc076cf8  jal         func_1DB3E0
    ctx->pc = 0x1DBF98u;
    SET_GPR_U32(ctx, 31, 0x1DBFA0u);
    ctx->pc = 0x1DBF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF98u;
    // 0x1dbf9c: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB3E0u, 0x1DBF98u, 0x1DBFA0u)) {
        return;
    }
    ctx->pc = 0x1DBFA0u;
label_1dbfa0:
    // 0x1dbfa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dbfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbfa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbfa8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dbfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbfac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFACu;
        // 0x1dbfb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBFB4u;
    // 0x1dbfb4: 0x0  nop
    ctx->pc = 0x1dbfb4u;
    // NOP
    ctx->pc = 0x1dbfb8u;
}
