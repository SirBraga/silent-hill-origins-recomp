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

// Function: sub_002A0008
// Address: 0x2a0008 - 0x2a0080
void sub_002A0008_0x2a0008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0008_0x2a0008");
#endif

    switch (ctx->pc) {
        case 0x2a0028u: goto label_2a0028;
        case 0x2a0030u: goto label_2a0030;
        case 0x2a0070u: goto label_2a0070;
        default: break;
    }

    ctx->pc = 0x2a0008u;

    // 0x2a0008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a000c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0010: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a0010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0014: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2a0014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2a0018: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A0018u;
    {
        const bool branch_taken_0x2a0018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0018u;
        // 0x2a001c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0018) {
            ctx->pc = 0x2A0044u;
            goto label_2a0044;
        }
    }
    ctx->pc = 0x2A0020u;
    // 0x2a0020: 0x24053d09  addiu       $a1, $zero, 0x3D09
    ctx->pc = 0x2a0020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
    // 0x2a0024: 0x0  nop
    ctx->pc = 0x2a0024u;
    // NOP
label_2a0028:
    // 0x2a0028: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A0028u;
    SET_GPR_U32(ctx, 31, 0x2A0030u);
    ctx->pc = 0x2A002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0028u;
    // 0x2a002c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A0028u, 0x2A0030u)) {
        return;
    }
    ctx->pc = 0x2A0030u;
label_2a0030:
    // 0x2a0030: 0x2610fffa  addiu       $s0, $s0, -0x6
    ctx->pc = 0x2a0030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x2a0034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0038: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2a0038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2a003c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A003Cu;
    {
        const bool branch_taken_0x2a003c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A003Cu;
        // 0x2a0040: 0x24053d09  addiu       $a1, $zero, 0x3D09 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a003c) {
            ctx->pc = 0x2A0028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0028;
        }
    }
    ctx->pc = 0x2A0044u;
label_2a0044:
    // 0x2a0044: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0044u;
    {
        const bool branch_taken_0x2a0044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0044u;
        // 0x2a0048: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0044) {
            ctx->pc = 0x2A0054u;
            goto label_2a0054;
        }
    }
    ctx->pc = 0x2A004Cu;
    // 0x2a004c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A004Cu;
    {
        const bool branch_taken_0x2a004c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A004Cu;
        // 0x2a0050: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a004c) {
            ctx->pc = 0x2A0070u;
            goto label_2a0070;
        }
    }
    ctx->pc = 0x2A0054u;
label_2a0054:
    // 0x2a0054: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2a0054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2a0058: 0x24422c78  addiu       $v0, $v0, 0x2C78
    ctx->pc = 0x2a0058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11384));
    // 0x2a005c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a005cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a0060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a0060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a0064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0068: 0xc0a7e92  jal         func_29FA48
    ctx->pc = 0x2A0068u;
    SET_GPR_U32(ctx, 31, 0x2A0070u);
    ctx->pc = 0x2A006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0068u;
    // 0x2a006c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FA48u, 0x2A0068u, 0x2A0070u)) {
        return;
    }
    ctx->pc = 0x2A0070u;
label_2a0070:
    // 0x2a0070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0078: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0078u;
        // 0x2a007c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0080u;
}
