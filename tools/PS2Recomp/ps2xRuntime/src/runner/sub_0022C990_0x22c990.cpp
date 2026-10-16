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

// Function: sub_0022C990
// Address: 0x22c990 - 0x22ca10
void sub_0022C990_0x22c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C990_0x22c990");
#endif

    switch (ctx->pc) {
        case 0x22c9c0u: goto label_22c9c0;
        case 0x22c9d4u: goto label_22c9d4;
        default: break;
    }

    ctx->pc = 0x22c990u;

label_22c990:
    // 0x22c990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22c998: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22c99c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22c99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22c9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22c9a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22c9a8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x22C9A8u;
    {
        const bool branch_taken_0x22c9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9A8u;
        // 0x22c9ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9a8) {
            ctx->pc = 0x22C9E8u;
            goto label_22c9e8;
        }
    }
    ctx->pc = 0x22C9B0u;
    // 0x22c9b0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x22C9B0u;
    {
        const bool branch_taken_0x22c9b0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x22C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9B0u;
        // 0x22c9b4: 0x24b3ffff  addiu       $s3, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9b0) {
            ctx->pc = 0x22C9E4u;
            goto label_22c9e4;
        }
    }
    ctx->pc = 0x22C9B8u;
    // 0x22c9b8: 0x2490001c  addiu       $s0, $a0, 0x1C
    ctx->pc = 0x22c9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x22c9bc: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x22c9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22c9c0:
    // 0x22c9c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c9c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22c9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x22c9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x22c9cc: 0xc08b264  jal         func_22C990
    ctx->pc = 0x22C9CCu;
    SET_GPR_U32(ctx, 31, 0x22C9D4u);
    ctx->pc = 0x22C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9CCu;
    // 0x22c9d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C990u;
    goto label_22c990;
    ctx->pc = 0x22C9D4u;
label_22c9d4:
    // 0x22c9d4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22C9D4u;
    {
        const bool branch_taken_0x22c9d4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x22C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9D4u;
        // 0x22c9d8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9d4) {
            ctx->pc = 0x22C9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c9c0;
        }
    }
    ctx->pc = 0x22C9DCu;
    // 0x22c9dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22C9DCu;
    {
        const bool branch_taken_0x22c9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9DCu;
        // 0x22c9e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9dc) {
            ctx->pc = 0x22C9ECu;
            goto label_22c9ec;
        }
    }
    ctx->pc = 0x22C9E4u;
label_22c9e4:
    // 0x22c9e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22c9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c9e8:
    // 0x22c9e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22c9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c9ec:
    // 0x22c9ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22c9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c9f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22c9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c9f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c9f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22c9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ca00: 0x3e00008  jr          $ra
    ctx->pc = 0x22CA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA00u;
        // 0x22ca04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CA08u;
    // 0x22ca08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22ca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22ca0c: 0x0  nop
    ctx->pc = 0x22ca0cu;
    // NOP
    ctx->pc = 0x22ca10u;
}
