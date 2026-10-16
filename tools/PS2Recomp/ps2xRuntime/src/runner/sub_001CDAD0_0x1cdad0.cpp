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

// Function: sub_001CDAD0
// Address: 0x1cdad0 - 0x1cdb50
void sub_001CDAD0_0x1cdad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDAD0_0x1cdad0");
#endif

    switch (ctx->pc) {
        case 0x1cdaecu: goto label_1cdaec;
        case 0x1cdb00u: goto label_1cdb00;
        case 0x1cdb38u: goto label_1cdb38;
        default: break;
    }

    ctx->pc = 0x1cdad0u;

    // 0x1cdad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdad4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cdad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cdad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cdad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cdadc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdae4: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1CDAE4u;
    SET_GPR_U32(ctx, 31, 0x1CDAECu);
    ctx->pc = 0x1CDAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAE4u;
    // 0x1cdae8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1CDAE4u, 0x1CDAECu)) {
        return;
    }
    ctx->pc = 0x1CDAECu;
label_1cdaec:
    // 0x1cdaec: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1cdaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1cdaf0: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CDAF0u;
    {
        const bool branch_taken_0x1cdaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdaf0) {
            ctx->pc = 0x1CDAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDAF0u;
            // 0x1cdaf4: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB28u;
            goto label_1cdb28;
        }
    }
    ctx->pc = 0x1CDAF8u;
    // 0x1cdaf8: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CDAF8u;
    SET_GPR_U32(ctx, 31, 0x1CDB00u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CDAF8u, 0x1CDB00u)) {
        return;
    }
    ctx->pc = 0x1CDB00u;
label_1cdb00:
    // 0x1cdb00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cdb00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDB04u;
    {
        const bool branch_taken_0x1cdb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB04u;
        // 0x1cdb08: 0xae03026c  sw          $v1, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb04) {
            ctx->pc = 0x1CDB24u;
            goto label_1cdb24;
        }
    }
    ctx->pc = 0x1CDB0Cu;
    // 0x1cdb0c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDB0Cu;
    {
        const bool branch_taken_0x1cdb0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB0Cu;
        // 0x1cdb10: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb0c) {
            ctx->pc = 0x1CDB1Cu;
            goto label_1cdb1c;
        }
    }
    ctx->pc = 0x1CDB14u;
    // 0x1cdb14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDB14u;
    {
        const bool branch_taken_0x1cdb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB14u;
        // 0x1cdb18: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb14) {
            ctx->pc = 0x1CDB20u;
            goto label_1cdb20;
        }
    }
    ctx->pc = 0x1CDB1Cu;
label_1cdb1c:
    // 0x1cdb1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cdb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cdb20:
    // 0x1cdb20: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1cdb20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1cdb24:
    // 0x1cdb24: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cdb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cdb28:
    // 0x1cdb28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDB28u;
    {
        const bool branch_taken_0x1cdb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB28u;
        // 0x1cdb2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb28) {
            ctx->pc = 0x1CDB3Cu;
            goto label_1cdb3c;
        }
    }
    ctx->pc = 0x1CDB30u;
    // 0x1cdb30: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1CDB30u;
    SET_GPR_U32(ctx, 31, 0x1CDB38u);
    ctx->pc = 0x1CDB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB30u;
    // 0x1cdb34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1CDB30u, 0x1CDB38u)) {
        return;
    }
    ctx->pc = 0x1CDB38u;
label_1cdb38:
    // 0x1cdb38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cdb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cdb3c:
    // 0x1cdb3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cdb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdb40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB44u;
        // 0x1cdb48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB4Cu;
    // 0x1cdb4c: 0x0  nop
    ctx->pc = 0x1cdb4cu;
    // NOP
    ctx->pc = 0x1cdb50u;
}
