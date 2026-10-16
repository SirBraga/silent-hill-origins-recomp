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

// Function: sub_00305D38
// Address: 0x305d38 - 0x305e00
void sub_00305D38_0x305d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305D38_0x305d38");
#endif

    switch (ctx->pc) {
        case 0x305d68u: goto label_305d68;
        case 0x305df4u: goto label_305df4;
        default: break;
    }

    ctx->pc = 0x305d38u;

    // 0x305d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305d3c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x305d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305d44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x305d44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d48: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x305d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x305d4c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x305d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x305d50: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x305d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x305d54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x305d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305d58: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x305D58u;
    {
        const bool branch_taken_0x305d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D58u;
        // 0x305d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d58) {
            ctx->pc = 0x305DD0u;
            goto label_305dd0;
        }
    }
    ctx->pc = 0x305D60u;
    // 0x305d60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x305d60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x305d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305d68:
    // 0x305d68: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x305d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x305d6c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x305d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x305d70: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x305d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x305d74: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x305d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x305d78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x305d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x305d7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x305d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x305d80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x305d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x305d84: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x305D84u;
    {
        const bool branch_taken_0x305d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d84) {
            ctx->pc = 0x305D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D84u;
            // 0x305d88: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305DB8u;
            goto label_305db8;
        }
    }
    ctx->pc = 0x305D8Cu;
    // 0x305d8c: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x305d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x305d90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x305d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x305d94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x305d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305d98: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x305d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x305d9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x305d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x305da0: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x305da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x305da4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x305da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x305da8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x305da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x305dac: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x305dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x305db0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x305db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x305db4: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x305db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_305db8:
    // 0x305db8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x305db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x305dbc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x305dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x305dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x305dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305dc4: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x305dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305dc8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x305DC8u;
    {
        const bool branch_taken_0x305dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DC8u;
        // 0x305dcc: 0x25290024  addiu       $t1, $t1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305dc8) {
            ctx->pc = 0x305D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305d68;
        }
    }
    ctx->pc = 0x305DD0u;
label_305dd0:
    // 0x305dd0: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x305dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x305dd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x305dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305dd8: 0xace60018  sw          $a2, 0x18($a3)
    ctx->pc = 0x305dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 6));
    // 0x305ddc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x305ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x305de0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x305de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x305de4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x305de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305dec: 0xc0c1900  jal         func_306400
    ctx->pc = 0x305DECu;
    SET_GPR_U32(ctx, 31, 0x305DF4u);
    ctx->pc = 0x305DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305DECu;
    // 0x305df0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x306400u, 0x305DECu, 0x305DF4u)) {
        return;
    }
    ctx->pc = 0x305DF4u;
label_305df4:
    // 0x305df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305df8: 0x3e00008  jr          $ra
    ctx->pc = 0x305DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DF8u;
        // 0x305dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305E00u;
}
