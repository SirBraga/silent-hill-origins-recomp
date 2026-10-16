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

// Function: sub_001036D8
// Address: 0x1036d8 - 0x103750
void sub_001036D8_0x1036d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001036D8_0x1036d8");
#endif

    switch (ctx->pc) {
        case 0x103710u: goto label_103710;
        case 0x103720u: goto label_103720;
        default: break;
    }

    ctx->pc = 0x1036d8u;

    // 0x1036d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1036d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1036dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1036dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1036e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1036e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1036e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1036e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1036e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1036e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1036ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1036f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1036f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1036f4: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x1036f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
    // 0x1036f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1036F8u;
    {
        const bool branch_taken_0x1036f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F8u;
        // 0x1036fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036f8) {
            ctx->pc = 0x103730u;
            goto label_103730;
        }
    }
    ctx->pc = 0x103700u;
    // 0x103700: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x103700u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x103704: 0x2650021c  addiu       $s0, $s2, 0x21C
    ctx->pc = 0x103704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 540));
    // 0x103708: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x103708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10370c: 0x0  nop
    ctx->pc = 0x10370cu;
    // NOP
label_103710:
    // 0x103710: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x103714: 0x8e648668  lw          $a0, -0x7998($s3)
    ctx->pc = 0x103714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936168)));
    // 0x103718: 0xc0596f0  jal         func_165BC0
    ctx->pc = 0x103718u;
    SET_GPR_U32(ctx, 31, 0x103720u);
    ctx->pc = 0x10371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103718u;
    // 0x10371c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165BC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165BC0u, 0x103718u, 0x103720u)) {
        return;
    }
    ctx->pc = 0x103720u;
label_103720:
    // 0x103720: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x103720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
    // 0x103724: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x103724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x103728: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x103728u;
    {
        const bool branch_taken_0x103728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103728) {
            ctx->pc = 0x10372Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103728u;
            // 0x10372c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103710;
        }
    }
    ctx->pc = 0x103730u;
label_103730:
    // 0x103730: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x103730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103734: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x103734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x103738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10373c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10373cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103744: 0x3e00008  jr          $ra
    ctx->pc = 0x103744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103744u;
        // 0x103748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10374Cu;
    // 0x10374c: 0x0  nop
    ctx->pc = 0x10374cu;
    // NOP
    ctx->pc = 0x103750u;
}
