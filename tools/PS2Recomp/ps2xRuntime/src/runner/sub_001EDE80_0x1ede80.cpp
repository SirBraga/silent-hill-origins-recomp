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

// Function: sub_001EDE80
// Address: 0x1ede80 - 0x1edee8
void sub_001EDE80_0x1ede80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDE80_0x1ede80");
#endif

    switch (ctx->pc) {
        case 0x1edeacu: goto label_1edeac;
        default: break;
    }

    ctx->pc = 0x1ede80u;

    // 0x1ede80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ede80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ede84: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ede84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ede88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ede88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ede8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ede8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ede90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ede90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede94: 0x8c45e7bc  lw          $a1, -0x1844($v0)
    ctx->pc = 0x1ede94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1ede98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ede98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ede9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edea0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1edea4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1EDEA4u;
    SET_GPR_U32(ctx, 31, 0x1EDEACu);
    ctx->pc = 0x1EDEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEA4u;
    // 0x1edea8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1EDEA4u, 0x1EDEACu)) {
        return;
    }
    ctx->pc = 0x1EDEACu;
label_1edeac:
    // 0x1edeac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDEACu;
    {
        const bool branch_taken_0x1edeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEACu;
        // 0x1edeb0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edeac) {
            ctx->pc = 0x1EDEBCu;
            goto label_1edebc;
        }
    }
    ctx->pc = 0x1EDEB4u;
    // 0x1edeb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EDEB4u;
    {
        const bool branch_taken_0x1edeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEB4u;
        // 0x1edeb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edeb4) {
            ctx->pc = 0x1EDED4u;
            goto label_1eded4;
        }
    }
    ctx->pc = 0x1EDEBCu;
label_1edebc:
    // 0x1edebc: 0x8c62e7c8  lw          $v0, -0x1838($v1)
    ctx->pc = 0x1edebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x1edec0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDEC0u;
    {
        const bool branch_taken_0x1edec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEC0u;
        // 0x1edec4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edec0) {
            ctx->pc = 0x1EDED4u;
            goto label_1eded4;
        }
    }
    ctx->pc = 0x1EDEC8u;
    // 0x1edec8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1edec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1edecc: 0xac62e7c8  sw          $v0, -0x1838($v1)
    ctx->pc = 0x1edeccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 2));
    // 0x1eded0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eded0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eded4:
    // 0x1eded4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1eded4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eded8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eded8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ededc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ededcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEE0u;
        // 0x1edee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDEE8u;
}
