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

// Function: sub_00280AB8
// Address: 0x280ab8 - 0x280b18
void sub_00280AB8_0x280ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280AB8_0x280ab8");
#endif

    switch (ctx->pc) {
        case 0x280ae8u: goto label_280ae8;
        default: break;
    }

    ctx->pc = 0x280ab8u;

    // 0x280ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280abc: 0x8f83881c  lw          $v1, -0x77E4($gp)
    ctx->pc = 0x280abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x280ac0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x280ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x280ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280ad0: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x280ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x280ad4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x280ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x280ad8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280AD8u;
    {
        const bool branch_taken_0x280ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AD8u;
        // 0x280adc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ad8) {
            ctx->pc = 0x280B00u;
            goto label_280b00;
        }
    }
    ctx->pc = 0x280AE0u;
    // 0x280ae0: 0xc0a0610  jal         func_281840
    ctx->pc = 0x280AE0u;
    SET_GPR_U32(ctx, 31, 0x280AE8u);
    ctx->pc = 0x281840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281840u, 0x280AE0u, 0x280AE8u)) {
        return;
    }
    ctx->pc = 0x280AE8u;
label_280ae8:
    // 0x280ae8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280AE8u;
    {
        const bool branch_taken_0x280ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AE8u;
        // 0x280aec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ae8) {
            ctx->pc = 0x280AF8u;
            goto label_280af8;
        }
    }
    ctx->pc = 0x280AF0u;
    // 0x280af0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280AF0u;
    {
        const bool branch_taken_0x280af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AF0u;
        // 0x280af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280af0) {
            ctx->pc = 0x280B00u;
            goto label_280b00;
        }
    }
    ctx->pc = 0x280AF8u;
label_280af8:
    // 0x280af8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x280af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x280afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280b00:
    // 0x280b00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x280b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x280B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B0Cu;
        // 0x280b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280B14u;
    // 0x280b14: 0x0  nop
    ctx->pc = 0x280b14u;
    // NOP
    ctx->pc = 0x280b18u;
}
