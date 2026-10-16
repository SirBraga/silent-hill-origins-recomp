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

// Function: sub_00171168
// Address: 0x171168 - 0x1711f0
void sub_00171168_0x171168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171168_0x171168");
#endif

    switch (ctx->pc) {
        case 0x1711a8u: goto label_1711a8;
        case 0x1711bcu: goto label_1711bc;
        case 0x1711d4u: goto label_1711d4;
        default: break;
    }

    ctx->pc = 0x171168u;

    // 0x171168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x171168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17116c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171174: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x171174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x171178: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x171178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17117c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17117cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171180: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x171180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x171184: 0x24425448  addiu       $v0, $v0, 0x5448
    ctx->pc = 0x171184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21576));
    // 0x171188: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x171188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17118c: 0x24635468  addiu       $v1, $v1, 0x5468
    ctx->pc = 0x17118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21608));
    // 0x171190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171194: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x171194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171198: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x171198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x17119c: 0x2650012c  addiu       $s0, $s2, 0x12C
    ctx->pc = 0x17119cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
    // 0x1711a0: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x1711a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x1711a4: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1711a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1711a8:
    // 0x1711a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1711a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1711ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1711ACu;
    {
        const bool branch_taken_0x1711ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711ACu;
        // 0x1711b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711ac) {
            ctx->pc = 0x1711C0u;
            goto label_1711c0;
        }
    }
    ctx->pc = 0x1711B4u;
    // 0x1711b4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1711B4u;
    SET_GPR_U32(ctx, 31, 0x1711BCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1711B4u, 0x1711BCu)) {
        return;
    }
    ctx->pc = 0x1711BCu;
label_1711bc:
    // 0x1711bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1711bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1711c0:
    // 0x1711c0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1711C0u;
    {
        const bool branch_taken_0x1711c0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1711C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711C0u;
        // 0x1711c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711c0) {
            ctx->pc = 0x1711A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1711a8;
        }
    }
    ctx->pc = 0x1711C8u;
    // 0x1711c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1711c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711cc: 0xc05c68a  jal         func_171A28
    ctx->pc = 0x1711CCu;
    SET_GPR_U32(ctx, 31, 0x1711D4u);
    ctx->pc = 0x1711D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1711CCu;
    // 0x1711d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171A28u, 0x1711CCu, 0x1711D4u)) {
        return;
    }
    ctx->pc = 0x1711D4u;
label_1711d4:
    // 0x1711d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1711d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1711d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1711d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1711dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1711dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1711e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1711e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1711e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1711e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1711e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1711E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711E8u;
        // 0x1711ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1711E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1711F0u;
}
