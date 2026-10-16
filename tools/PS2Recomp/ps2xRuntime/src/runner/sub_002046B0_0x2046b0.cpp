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

// Function: sub_002046B0
// Address: 0x2046b0 - 0x204708
void sub_002046B0_0x2046b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002046B0_0x2046b0");
#endif

    switch (ctx->pc) {
        case 0x2046d8u: goto label_2046d8;
        case 0x2046f4u: goto label_2046f4;
        default: break;
    }

    ctx->pc = 0x2046b0u;

    // 0x2046b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2046b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2046b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2046b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2046b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2046b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2046bc: 0x24423c48  addiu       $v0, $v0, 0x3C48
    ctx->pc = 0x2046bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15432));
    // 0x2046c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2046c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2046c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2046c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2046c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2046cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2046ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046d0: 0xc0811e0  jal         func_204780
    ctx->pc = 0x2046D0u;
    SET_GPR_U32(ctx, 31, 0x2046D8u);
    ctx->pc = 0x2046D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046D0u;
    // 0x2046d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204780u, 0x2046D0u, 0x2046D8u)) {
        return;
    }
    ctx->pc = 0x2046D8u;
label_2046d8:
    // 0x2046d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2046dc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2046dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2046e0: 0x24423cb8  addiu       $v0, $v0, 0x3CB8
    ctx->pc = 0x2046e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15544));
    // 0x2046e4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2046E4u;
    {
        const bool branch_taken_0x2046e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046E4u;
        // 0x2046e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046e4) {
            ctx->pc = 0x2046F4u;
            goto label_2046f4;
        }
    }
    ctx->pc = 0x2046ECu;
    // 0x2046ec: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2046ECu;
    SET_GPR_U32(ctx, 31, 0x2046F4u);
    ctx->pc = 0x2046F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046ECu;
    // 0x2046f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2046ECu, 0x2046F4u)) {
        return;
    }
    ctx->pc = 0x2046F4u;
label_2046f4:
    // 0x2046f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2046f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2046f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2046f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2046fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2046fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204700: 0x3e00008  jr          $ra
    ctx->pc = 0x204700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204700u;
        // 0x204704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204708u;
}
