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

// Function: sub_0014CF78
// Address: 0x14cf78 - 0x14cfc0
void sub_0014CF78_0x14cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CF78_0x14cf78");
#endif

    switch (ctx->pc) {
        case 0x14cf94u: goto label_14cf94;
        case 0x14cfa8u: goto label_14cfa8;
        default: break;
    }

    ctx->pc = 0x14cf78u;

    // 0x14cf78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14cf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14cf7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14cf80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cf84: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CF84u;
    {
        const bool branch_taken_0x14cf84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF84u;
        // 0x14cf88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf84) {
            ctx->pc = 0x14CF9Cu;
            goto label_14cf9c;
        }
    }
    ctx->pc = 0x14CF8Cu;
    // 0x14cf8c: 0xc076a1a  jal         func_1DA868
    ctx->pc = 0x14CF8Cu;
    SET_GPR_U32(ctx, 31, 0x14CF94u);
    ctx->pc = 0x14CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF8Cu;
    // 0x14cf90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA868u, 0x14CF8Cu, 0x14CF94u)) {
        return;
    }
    ctx->pc = 0x14CF94u;
label_14cf94:
    // 0x14cf94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14CF94u;
    {
        const bool branch_taken_0x14cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF94u;
        // 0x14cf98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf94) {
            ctx->pc = 0x14CFACu;
            goto label_14cfac;
        }
    }
    ctx->pc = 0x14CF9Cu;
label_14cf9c:
    // 0x14cf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfa0: 0xc076a1a  jal         func_1DA868
    ctx->pc = 0x14CFA0u;
    SET_GPR_U32(ctx, 31, 0x14CFA8u);
    ctx->pc = 0x14CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CFA0u;
    // 0x14cfa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA868u, 0x14CFA0u, 0x14CFA8u)) {
        return;
    }
    ctx->pc = 0x14CFA8u;
label_14cfa8:
    // 0x14cfa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14cfa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cfac:
    // 0x14cfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cfb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14cfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x14CFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFB4u;
        // 0x14cfb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CFBCu;
    // 0x14cfbc: 0x0  nop
    ctx->pc = 0x14cfbcu;
    // NOP
    ctx->pc = 0x14cfc0u;
}
