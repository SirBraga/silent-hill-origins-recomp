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

// Function: sub_00204718
// Address: 0x204718 - 0x204780
void sub_00204718_0x204718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204718_0x204718");
#endif

    switch (ctx->pc) {
        case 0x204744u: goto label_204744;
        case 0x204760u: goto label_204760;
        default: break;
    }

    ctx->pc = 0x204718u;

    // 0x204718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20471c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x204720: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x204720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x204724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204728: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x204728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20472c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204734: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x204734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204738: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x204738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20473c: 0xc04efa4  jal         func_13BE90
    ctx->pc = 0x20473Cu;
    SET_GPR_U32(ctx, 31, 0x204744u);
    ctx->pc = 0x204740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20473Cu;
    // 0x204740: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BE90u, 0x20473Cu, 0x204744u)) {
        return;
    }
    ctx->pc = 0x204744u;
label_204744:
    // 0x204744: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204744u;
    {
        const bool branch_taken_0x204744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204744u;
        // 0x204748: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204744) {
            ctx->pc = 0x204768u;
            goto label_204768;
        }
    }
    ctx->pc = 0x20474Cu;
    // 0x20474c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204754: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x204754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x204758: 0xc07f7a6  jal         func_1FDE98
    ctx->pc = 0x204758u;
    SET_GPR_U32(ctx, 31, 0x204760u);
    ctx->pc = 0x20475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204758u;
    // 0x20475c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FDE98u, 0x204758u, 0x204760u)) {
        return;
    }
    ctx->pc = 0x204760u;
label_204760:
    // 0x204760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x204760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204764: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x204764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204768:
    // 0x204768: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x204768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20476c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20476cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204770: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x204770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204778: 0x3e00008  jr          $ra
    ctx->pc = 0x204778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204778u;
        // 0x20477c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204780u;
}
