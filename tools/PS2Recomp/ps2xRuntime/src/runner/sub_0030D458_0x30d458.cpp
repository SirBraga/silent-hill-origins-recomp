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

// Function: sub_0030D458
// Address: 0x30d458 - 0x30d4b8
void sub_0030D458_0x30d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D458_0x30d458");
#endif

    switch (ctx->pc) {
        case 0x30d484u: goto label_30d484;
        default: break;
    }

    ctx->pc = 0x30d458u;

    // 0x30d458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d45c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30d460: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d468: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d46c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d470: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D470u;
    {
        const bool branch_taken_0x30d470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D470u;
        // 0x30d474: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d470) {
            ctx->pc = 0x30D490u;
            goto label_30d490;
        }
    }
    ctx->pc = 0x30D478u;
    // 0x30d478: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d47c: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D47Cu;
    SET_GPR_U32(ctx, 31, 0x30D484u);
    ctx->pc = 0x30D480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D47Cu;
    // 0x30d480: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D47Cu, 0x30D484u)) {
        return;
    }
    ctx->pc = 0x30D484u;
label_30d484:
    // 0x30d484: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D484u;
    {
        const bool branch_taken_0x30d484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D484u;
        // 0x30d488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d484) {
            ctx->pc = 0x30D4A8u;
            goto label_30d4a8;
        }
    }
    ctx->pc = 0x30D48Cu;
    // 0x30d48c: 0x0  nop
    ctx->pc = 0x30d48cu;
    // NOP
label_30d490:
    // 0x30d490: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D490u;
    {
        const bool branch_taken_0x30d490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D490u;
        // 0x30d494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d490) {
            ctx->pc = 0x30D4A8u;
            goto label_30d4a8;
        }
    }
    ctx->pc = 0x30D498u;
    // 0x30d498: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d49c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d4a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d4a8:
    // 0x30d4a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30d4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30D4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4B0u;
        // 0x30d4b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D4B8u;
}
