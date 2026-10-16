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

// Function: sub_001B4010
// Address: 0x1b4010 - 0x1b4078
void sub_001B4010_0x1b4010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4010_0x1b4010");
#endif

    switch (ctx->pc) {
        case 0x1b4010u: goto label_1b4010;
        case 0x1b4014u: goto label_1b4014;
        case 0x1b4018u: goto label_1b4018;
        case 0x1b401cu: goto label_1b401c;
        case 0x1b4020u: goto label_1b4020;
        case 0x1b4024u: goto label_1b4024;
        case 0x1b4028u: goto label_1b4028;
        case 0x1b402cu: goto label_1b402c;
        case 0x1b4030u: goto label_1b4030;
        case 0x1b4034u: goto label_1b4034;
        case 0x1b4038u: goto label_1b4038;
        case 0x1b403cu: goto label_1b403c;
        case 0x1b4040u: goto label_1b4040;
        case 0x1b4044u: goto label_1b4044;
        case 0x1b4048u: goto label_1b4048;
        case 0x1b404cu: goto label_1b404c;
        case 0x1b4050u: goto label_1b4050;
        case 0x1b4054u: goto label_1b4054;
        case 0x1b4058u: goto label_1b4058;
        case 0x1b405cu: goto label_1b405c;
        case 0x1b4060u: goto label_1b4060;
        case 0x1b4064u: goto label_1b4064;
        case 0x1b4068u: goto label_1b4068;
        case 0x1b406cu: goto label_1b406c;
        case 0x1b4070u: goto label_1b4070;
        case 0x1b4074u: goto label_1b4074;
        default: break;
    }

    ctx->pc = 0x1b4010u;

label_1b4010:
    // 0x1b4010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b4014:
    // 0x1b4014: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b4014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4018:
    // 0x1b4018: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
label_1b401c:
    if (ctx->pc == 0x1B401Cu) {
        ctx->pc = 0x1B401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4018u;
        // 0x1b401c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4020u;
        goto label_1b4020;
    }
    ctx->pc = 0x1B4018u;
    {
        const bool branch_taken_0x1b4018 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4018u;
        // 0x1b401c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4018) {
            ctx->pc = 0x1B4054u;
            goto label_1b4054;
        }
    }
    ctx->pc = 0x1B4020u;
label_1b4020:
    // 0x1b4020: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x1b4020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_1b4024:
    // 0x1b4024: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b4024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b4028:
    // 0x1b4028: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1b4028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_1b402c:
    // 0x1b402c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x1b402cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_1b4030:
    // 0x1b4030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b4030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b4034:
    // 0x1b4034: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1b4034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1b4038:
    // 0x1b4038: 0x34633300  ori         $v1, $v1, 0x3300
    ctx->pc = 0x1b4038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13056);
label_1b403c:
    // 0x1b403c: 0xace30050  sw          $v1, 0x50($a3)
    ctx->pc = 0x1b403cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
label_1b4040:
    // 0x1b4040: 0x8cc20fe8  lw          $v0, 0xFE8($a2)
    ctx->pc = 0x1b4040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4072)));
label_1b4044:
    // 0x1b4044: 0x40f809  jalr        $v0
label_1b4048:
    if (ctx->pc == 0x1B4048u) {
        ctx->pc = 0x1B4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4044u;
        // 0x1b4048: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B404Cu;
        goto label_1b404c;
    }
    ctx->pc = 0x1B4044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B404Cu);
        ctx->pc = 0x1B4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4044u;
        // 0x1b4048: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4044u, 0x1B404Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B404Cu;
label_1b404c:
    // 0x1b404c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b4050:
    if (ctx->pc == 0x1B4050u) {
        ctx->pc = 0x1B4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B404Cu;
        // 0x1b4050: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4054u;
        goto label_1b4054;
    }
    ctx->pc = 0x1B404Cu;
    {
        const bool branch_taken_0x1b404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B404Cu;
        // 0x1b4050: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b404c) {
            ctx->pc = 0x1B406Cu;
            goto label_1b406c;
        }
    }
    ctx->pc = 0x1B4054u;
label_1b4054:
    // 0x1b4054: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1b4054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1b4058:
    // 0x1b4058: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b405c:
    // 0x1b405c: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1b405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_1b4060:
    // 0x1b4060: 0x40f809  jalr        $v0
label_1b4064:
    if (ctx->pc == 0x1B4064u) {
        ctx->pc = 0x1B4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4060u;
        // 0x1b4064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4068u;
        goto label_1b4068;
    }
    ctx->pc = 0x1B4060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4068u);
        ctx->pc = 0x1B4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4060u;
        // 0x1b4064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4060u, 0x1B4068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4068u;
label_1b4068:
    // 0x1b4068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b406c:
    // 0x1b406c: 0x3e00008  jr          $ra
label_1b4070:
    if (ctx->pc == 0x1B4070u) {
        ctx->pc = 0x1B4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B406Cu;
        // 0x1b4070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4074u;
        goto label_1b4074;
    }
    ctx->pc = 0x1B406Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B406Cu;
        // 0x1b4070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B406Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4074u;
label_1b4074:
    // 0x1b4074: 0x0  nop
    ctx->pc = 0x1b4074u;
    // NOP
    ctx->pc = 0x1b4078u;
}
