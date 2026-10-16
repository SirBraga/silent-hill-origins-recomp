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

// Function: sub_00103540
// Address: 0x103540 - 0x1035b8
void sub_00103540_0x103540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103540_0x103540");
#endif

    switch (ctx->pc) {
        case 0x103578u: goto label_103578;
        case 0x103588u: goto label_103588;
        default: break;
    }

    ctx->pc = 0x103540u;

    // 0x103540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x103540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x103544: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x103544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x103548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x103548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10354c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x103550: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x103550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103554: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x103554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x103558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10355c: 0x8e42028c  lw          $v0, 0x28C($s2)
    ctx->pc = 0x10355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x103560: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103560u;
    {
        const bool branch_taken_0x103560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103560u;
        // 0x103564: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103560) {
            ctx->pc = 0x103598u;
            goto label_103598;
        }
    }
    ctx->pc = 0x103568u;
    // 0x103568: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x103568u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x10356c: 0x26500274  addiu       $s0, $s2, 0x274
    ctx->pc = 0x10356cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 628));
    // 0x103570: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x103570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103574: 0x0  nop
    ctx->pc = 0x103574u;
    // NOP
label_103578:
    // 0x103578: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10357c: 0x8e648668  lw          $a0, -0x7998($s3)
    ctx->pc = 0x10357cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936168)));
    // 0x103580: 0xc059092  jal         func_164248
    ctx->pc = 0x103580u;
    SET_GPR_U32(ctx, 31, 0x103588u);
    ctx->pc = 0x103584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103580u;
    // 0x103584: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x103580u, 0x103588u)) {
        return;
    }
    ctx->pc = 0x103588u;
label_103588:
    // 0x103588: 0x8e42028c  lw          $v0, 0x28C($s2)
    ctx->pc = 0x103588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x10358c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10358cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x103590: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x103590u;
    {
        const bool branch_taken_0x103590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103590) {
            ctx->pc = 0x103594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103590u;
            // 0x103594: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103578;
        }
    }
    ctx->pc = 0x103598u;
label_103598:
    // 0x103598: 0xae40028c  sw          $zero, 0x28C($s2)
    ctx->pc = 0x103598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 652), GPR_U32(ctx, 0));
    // 0x10359c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10359cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1035a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1035a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1035a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1035a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1035a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1035a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1035ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1035acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1035b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1035B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1035B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035B0u;
        // 0x1035b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1035B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1035B8u;
}
