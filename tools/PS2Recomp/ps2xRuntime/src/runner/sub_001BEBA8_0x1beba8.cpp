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

// Function: sub_001BEBA8
// Address: 0x1beba8 - 0x1bec10
void sub_001BEBA8_0x1beba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEBA8_0x1beba8");
#endif

    switch (ctx->pc) {
        case 0x1bebd0u: goto label_1bebd0;
        default: break;
    }

    ctx->pc = 0x1beba8u;

    // 0x1beba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1beba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bebac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bebb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bebb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bebb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bebbc: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1bebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1bebc0: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BEBC0u;
    {
        const bool branch_taken_0x1bebc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBC0u;
        // 0x1bebc4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebc0) {
            ctx->pc = 0x1BEBFCu;
            goto label_1bebfc;
        }
    }
    ctx->pc = 0x1BEBC8u;
    // 0x1bebc8: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1BEBC8u;
    SET_GPR_U32(ctx, 31, 0x1BEBD0u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1BEBC8u, 0x1BEBD0u)) {
        return;
    }
    ctx->pc = 0x1BEBD0u;
label_1bebd0:
    // 0x1bebd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bebd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebd4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1bebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1bebd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bebdc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEBDCu;
    {
        const bool branch_taken_0x1bebdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBDCu;
        // 0x1bebe0: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebdc) {
            ctx->pc = 0x1BEBFCu;
            goto label_1bebfc;
        }
    }
    ctx->pc = 0x1BEBE4u;
    // 0x1bebe4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEBE4u;
    {
        const bool branch_taken_0x1bebe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBE4u;
        // 0x1bebe8: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebe4) {
            ctx->pc = 0x1BEBF4u;
            goto label_1bebf4;
        }
    }
    ctx->pc = 0x1BEBECu;
    // 0x1bebec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEBECu;
    {
        const bool branch_taken_0x1bebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBECu;
        // 0x1bebf0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebec) {
            ctx->pc = 0x1BEBF8u;
            goto label_1bebf8;
        }
    }
    ctx->pc = 0x1BEBF4u;
label_1bebf4:
    // 0x1bebf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bebf8:
    // 0x1bebf8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1bebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1bebfc:
    // 0x1bebfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bebfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bec00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec08: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC08u;
        // 0x1bec0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC10u;
}
