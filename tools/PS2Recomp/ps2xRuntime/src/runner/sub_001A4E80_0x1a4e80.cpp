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

// Function: sub_001A4E80
// Address: 0x1a4e80 - 0x1a4f00
void sub_001A4E80_0x1a4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4E80_0x1a4e80");
#endif

    switch (ctx->pc) {
        case 0x1a4eb0u: goto label_1a4eb0;
        case 0x1a4ec0u: goto label_1a4ec0;
        default: break;
    }

    ctx->pc = 0x1a4e80u;

    // 0x1a4e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4e84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a4e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a4e88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4e8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a4e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e90: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a4e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a4e94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a4e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e98: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a4e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a4e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4ea0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a4ea4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4EA4u;
    {
        const bool branch_taken_0x1a4ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EA4u;
        // 0x1a4ea8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ea4) {
            ctx->pc = 0x1A4EE0u;
            goto label_1a4ee0;
        }
    }
    ctx->pc = 0x1A4EACu;
    // 0x1a4eac: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x1a4eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1a4eb0:
    // 0x1a4eb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4eb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a4eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4eb8: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x1A4EB8u;
    SET_GPR_U32(ctx, 31, 0x1A4EC0u);
    ctx->pc = 0x1A4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EB8u;
    // 0x1a4ebc: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x1A4EB8u, 0x1A4EC0u)) {
        return;
    }
    ctx->pc = 0x1A4EC0u;
label_1a4ec0:
    // 0x1a4ec0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EC0u;
    {
        const bool branch_taken_0x1a4ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ec0) {
            ctx->pc = 0x1A4EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4EC0u;
            // 0x1a4ec4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4ED0u;
            goto label_1a4ed0;
        }
    }
    ctx->pc = 0x1A4EC8u;
    // 0x1a4ec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4EC8u;
    {
        const bool branch_taken_0x1a4ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EC8u;
        // 0x1a4ecc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ec8) {
            ctx->pc = 0x1A4EE4u;
            goto label_1a4ee4;
        }
    }
    ctx->pc = 0x1A4ED0u;
label_1a4ed0:
    // 0x1a4ed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a4ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a4ed4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1a4ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a4ed8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A4ED8u;
    {
        const bool branch_taken_0x1a4ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ED8u;
        // 0x1a4edc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ed8) {
            ctx->pc = 0x1A4EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4eb0;
        }
    }
    ctx->pc = 0x1A4EE0u;
label_1a4ee0:
    // 0x1a4ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ee4:
    // 0x1a4ee4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a4ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4ee8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a4ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4eec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4ef0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a4ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EF8u;
        // 0x1a4efc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F00u;
}
