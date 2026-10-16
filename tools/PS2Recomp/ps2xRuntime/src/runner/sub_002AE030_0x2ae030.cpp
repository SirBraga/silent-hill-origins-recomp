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

// Function: sub_002AE030
// Address: 0x2ae030 - 0x2ae098
void sub_002AE030_0x2ae030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE030_0x2ae030");
#endif

    switch (ctx->pc) {
        case 0x2ae058u: goto label_2ae058;
        case 0x2ae074u: goto label_2ae074;
        default: break;
    }

    ctx->pc = 0x2ae030u;

    // 0x2ae030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ae030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ae034: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ae034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ae038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ae038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ae03c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ae03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae040: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ae040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ae044: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ae044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae048: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ae048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ae04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae050: 0xc0ab542  jal         func_2AD508
    ctx->pc = 0x2AE050u;
    SET_GPR_U32(ctx, 31, 0x2AE058u);
    ctx->pc = 0x2AE054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE050u;
    // 0x2ae054: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD508u, 0x2AE050u, 0x2AE058u)) {
        return;
    }
    ctx->pc = 0x2AE058u;
label_2ae058:
    // 0x2ae058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae05c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE05Cu;
    {
        const bool branch_taken_0x2ae05c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE05Cu;
        // 0x2ae060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae05c) {
            ctx->pc = 0x2AE074u;
            goto label_2ae074;
        }
    }
    ctx->pc = 0x2AE064u;
    // 0x2ae064: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ae064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae068: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ae068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae06c: 0xc0ab672  jal         func_2AD9C8
    ctx->pc = 0x2AE06Cu;
    SET_GPR_U32(ctx, 31, 0x2AE074u);
    ctx->pc = 0x2AE070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE06Cu;
    // 0x2ae070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD9C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD9C8u, 0x2AE06Cu, 0x2AE074u)) {
        return;
    }
    ctx->pc = 0x2AE074u;
label_2ae074:
    // 0x2ae074: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ae074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae078: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ae078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae07c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ae07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ae080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae084: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ae084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae08c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE08Cu;
        // 0x2ae090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE094u;
    // 0x2ae094: 0x0  nop
    ctx->pc = 0x2ae094u;
    // NOP
    ctx->pc = 0x2ae098u;
}
