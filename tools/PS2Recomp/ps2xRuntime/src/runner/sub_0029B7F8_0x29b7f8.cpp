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

// Function: sub_0029B7F8
// Address: 0x29b7f8 - 0x29b850
void sub_0029B7F8_0x29b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B7F8_0x29b7f8");
#endif

    switch (ctx->pc) {
        case 0x29b824u: goto label_29b824;
        case 0x29b838u: goto label_29b838;
        default: break;
    }

    ctx->pc = 0x29b7f8u;

    // 0x29b7f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b7fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29b800: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b804: 0x2442d9b0  addiu       $v0, $v0, -0x2650
    ctx->pc = 0x29b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957488));
    // 0x29b808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b80c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b810: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b814: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29b814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b818: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x29b818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x29b81c: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x29B81Cu;
    SET_GPR_U32(ctx, 31, 0x29B824u);
    ctx->pc = 0x29B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B81Cu;
    // 0x29b820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D0A0u, 0x29B81Cu, 0x29B824u)) {
        return;
    }
    ctx->pc = 0x29B824u;
label_29b824:
    // 0x29b824: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x29b824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29b828: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B828u;
    {
        const bool branch_taken_0x29b828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B828u;
        // 0x29b82c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b828) {
            ctx->pc = 0x29B83Cu;
            goto label_29b83c;
        }
    }
    ctx->pc = 0x29B830u;
    // 0x29b830: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x29B830u;
    SET_GPR_U32(ctx, 31, 0x29B838u);
    ctx->pc = 0x29B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B830u;
    // 0x29b834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x29B830u, 0x29B838u)) {
        return;
    }
    ctx->pc = 0x29B838u;
label_29b838:
    // 0x29b838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29b83c:
    // 0x29b83c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b844: 0x3e00008  jr          $ra
    ctx->pc = 0x29B844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B844u;
        // 0x29b848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B84Cu;
    // 0x29b84c: 0x0  nop
    ctx->pc = 0x29b84cu;
    // NOP
    ctx->pc = 0x29b850u;
}
