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

// Function: sub_001588C8
// Address: 0x1588c8 - 0x158930
void sub_001588C8_0x1588c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001588C8_0x1588c8");
#endif

    switch (ctx->pc) {
        case 0x1588f0u: goto label_1588f0;
        case 0x158904u: goto label_158904;
        case 0x158918u: goto label_158918;
        default: break;
    }

    ctx->pc = 0x1588c8u;

    // 0x1588c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1588c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1588cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1588ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1588d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1588d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1588d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1588d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1588d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1588dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1588dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1588e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1588E0u;
    {
        const bool branch_taken_0x1588e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1588E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588E0u;
        // 0x1588e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588e0) {
            ctx->pc = 0x1588F0u;
            goto label_1588f0;
        }
    }
    ctx->pc = 0x1588E8u;
    // 0x1588e8: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1588E8u;
    SET_GPR_U32(ctx, 31, 0x1588F0u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1588E8u, 0x1588F0u)) {
        return;
    }
    ctx->pc = 0x1588F0u;
label_1588f0:
    // 0x1588f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1588f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1588f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1588F4u;
    {
        const bool branch_taken_0x1588f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1588F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588F4u;
        // 0x1588f8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588f4) {
            ctx->pc = 0x158908u;
            goto label_158908;
        }
    }
    ctx->pc = 0x1588FCu;
    // 0x1588fc: 0xc0563e6  jal         func_158F98
    ctx->pc = 0x1588FCu;
    SET_GPR_U32(ctx, 31, 0x158904u);
    ctx->pc = 0x158900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588FCu;
    // 0x158900: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158F98u, 0x1588FCu, 0x158904u)) {
        return;
    }
    ctx->pc = 0x158904u;
label_158904:
    // 0x158904: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x158904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_158908:
    // 0x158908: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x158908u;
    {
        const bool branch_taken_0x158908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158908) {
            ctx->pc = 0x15890Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158908u;
            // 0x15890c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15891Cu;
            goto label_15891c;
        }
    }
    ctx->pc = 0x158910u;
    // 0x158910: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x158910u;
    SET_GPR_U32(ctx, 31, 0x158918u);
    ctx->pc = 0x158914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158910u;
    // 0x158914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x158910u, 0x158918u)) {
        return;
    }
    ctx->pc = 0x158918u;
label_158918:
    // 0x158918: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x158918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15891c:
    // 0x15891c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15891cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158924: 0x3e00008  jr          $ra
    ctx->pc = 0x158924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158924u;
        // 0x158928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15892Cu;
    // 0x15892c: 0x0  nop
    ctx->pc = 0x15892cu;
    // NOP
    ctx->pc = 0x158930u;
}
