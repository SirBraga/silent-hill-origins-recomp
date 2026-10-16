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

// Function: sub_001DDA70
// Address: 0x1dda70 - 0x1ddb00
void sub_001DDA70_0x1dda70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDA70_0x1dda70");
#endif

    switch (ctx->pc) {
        case 0x1dda90u: goto label_1dda90;
        case 0x1ddaacu: goto label_1ddaac;
        case 0x1ddac8u: goto label_1ddac8;
        case 0x1ddadcu: goto label_1ddadc;
        default: break;
    }

    ctx->pc = 0x1dda70u;

    // 0x1dda70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dda70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dda74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dda74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dda78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dda78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dda7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dda7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dda80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dda84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dda84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda88: 0xc09d8c4  jal         func_276310
    ctx->pc = 0x1DDA88u;
    SET_GPR_U32(ctx, 31, 0x1DDA90u);
    ctx->pc = 0x1DDA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA88u;
    // 0x1dda8c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276310u, 0x1DDA88u, 0x1DDA90u)) {
        return;
    }
    ctx->pc = 0x1DDA90u;
label_1dda90:
    // 0x1dda90: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1dda90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1dda94: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1dda94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dda98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dda98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda9c: 0x24050a05  addiu       $a1, $zero, 0xA05
    ctx->pc = 0x1dda9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2565));
    // 0x1ddaa0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x1ddaa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x1ddaa4: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x1DDAA4u;
    SET_GPR_U32(ctx, 31, 0x1DDAACu);
    ctx->pc = 0x1DDAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAA4u;
    // 0x1ddaa8: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x1DDAA4u, 0x1DDAACu)) {
        return;
    }
    ctx->pc = 0x1DDAACu;
label_1ddaac:
    // 0x1ddaac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DDAACu;
    {
        const bool branch_taken_0x1ddaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAACu;
        // 0x1ddab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddaac) {
            ctx->pc = 0x1DDAE4u;
            goto label_1ddae4;
        }
    }
    ctx->pc = 0x1DDAB4u;
    // 0x1ddab4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ddab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ddab8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ddab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddabc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ddabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ddac0: 0xc092782  jal         func_249E08
    ctx->pc = 0x1DDAC0u;
    SET_GPR_U32(ctx, 31, 0x1DDAC8u);
    ctx->pc = 0x1DDAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAC0u;
    // 0x1ddac4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1DDAC0u, 0x1DDAC8u)) {
        return;
    }
    ctx->pc = 0x1DDAC8u;
label_1ddac8:
    // 0x1ddac8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDAC8u;
    {
        const bool branch_taken_0x1ddac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAC8u;
        // 0x1ddacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddac8) {
            ctx->pc = 0x1DDAE8u;
            goto label_1ddae8;
        }
    }
    ctx->pc = 0x1DDAD0u;
    // 0x1ddad0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ddad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ddad4: 0xc09d88e  jal         func_276238
    ctx->pc = 0x1DDAD4u;
    SET_GPR_U32(ctx, 31, 0x1DDADCu);
    ctx->pc = 0x1DDAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAD4u;
    // 0x1ddad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276238u, 0x1DDAD4u, 0x1DDADCu)) {
        return;
    }
    ctx->pc = 0x1DDADCu;
label_1ddadc:
    // 0x1ddadc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDADCu;
    {
        const bool branch_taken_0x1ddadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDADCu;
        // 0x1ddae0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddadc) {
            ctx->pc = 0x1DDAE8u;
            goto label_1ddae8;
        }
    }
    ctx->pc = 0x1DDAE4u;
label_1ddae4:
    // 0x1ddae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ddae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddae8:
    // 0x1ddae8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ddae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddaec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ddaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddaf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAF4u;
        // 0x1ddaf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDAFCu;
    // 0x1ddafc: 0x0  nop
    ctx->pc = 0x1ddafcu;
    // NOP
    ctx->pc = 0x1ddb00u;
}
