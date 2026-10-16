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

// Function: sub_0028F030
// Address: 0x28f030 - 0x28f098
void sub_0028F030_0x28f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F030_0x28f030");
#endif

    switch (ctx->pc) {
        case 0x28f030u: goto label_28f030;
        case 0x28f034u: goto label_28f034;
        case 0x28f038u: goto label_28f038;
        case 0x28f03cu: goto label_28f03c;
        case 0x28f040u: goto label_28f040;
        case 0x28f044u: goto label_28f044;
        case 0x28f048u: goto label_28f048;
        case 0x28f04cu: goto label_28f04c;
        case 0x28f050u: goto label_28f050;
        case 0x28f054u: goto label_28f054;
        case 0x28f058u: goto label_28f058;
        case 0x28f05cu: goto label_28f05c;
        case 0x28f060u: goto label_28f060;
        case 0x28f064u: goto label_28f064;
        case 0x28f068u: goto label_28f068;
        case 0x28f06cu: goto label_28f06c;
        case 0x28f070u: goto label_28f070;
        case 0x28f074u: goto label_28f074;
        case 0x28f078u: goto label_28f078;
        case 0x28f07cu: goto label_28f07c;
        case 0x28f080u: goto label_28f080;
        case 0x28f084u: goto label_28f084;
        case 0x28f088u: goto label_28f088;
        case 0x28f08cu: goto label_28f08c;
        case 0x28f090u: goto label_28f090;
        case 0x28f094u: goto label_28f094;
        default: break;
    }

    ctx->pc = 0x28f030u;

label_28f030:
    // 0x28f030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28f034:
    // 0x28f034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28f034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28f038:
    // 0x28f038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28f03c:
    // 0x28f03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28f040:
    // 0x28f040: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x28f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_28f044:
    // 0x28f044: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28f048:
    // 0x28f048: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
label_28f04c:
    if (ctx->pc == 0x28F04Cu) {
        ctx->pc = 0x28F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F048u;
        // 0x28f04c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F050u;
        goto label_28f050;
    }
    ctx->pc = 0x28F048u;
    {
        const bool branch_taken_0x28f048 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x28F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F048u;
        // 0x28f04c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f048) {
            ctx->pc = 0x28F084u;
            goto label_28f084;
        }
    }
    ctx->pc = 0x28F050u;
label_28f050:
    // 0x28f050: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x28f050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_28f054:
    // 0x28f054: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_28f058:
    if (ctx->pc == 0x28F058u) {
        ctx->pc = 0x28F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F054u;
        // 0x28f058: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F05Cu;
        goto label_28f05c;
    }
    ctx->pc = 0x28F054u;
    {
        const bool branch_taken_0x28f054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F054u;
        // 0x28f058: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f054) {
            ctx->pc = 0x28F068u;
            goto label_28f068;
        }
    }
    ctx->pc = 0x28F05Cu;
label_28f05c:
    // 0x28f05c: 0xc08ab74  jal         func_22ADD0
label_28f060:
    if (ctx->pc == 0x28F060u) {
        ctx->pc = 0x28F064u;
        goto label_28f064;
    }
    ctx->pc = 0x28F05Cu;
    SET_GPR_U32(ctx, 31, 0x28F064u);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x28F05Cu, 0x28F064u)) {
        return;
    }
    ctx->pc = 0x28F064u;
label_28f064:
    // 0x28f064: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_28f068:
    // 0x28f068: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x28f068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_28f06c:
    // 0x28f06c: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x28f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_28f070:
    // 0x28f070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f074:
    // 0x28f074: 0x40f809  jalr        $v0
label_28f078:
    if (ctx->pc == 0x28F078u) {
        ctx->pc = 0x28F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F074u;
        // 0x28f078: 0x8cc468b0  lw          $a0, 0x68B0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 26800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F07Cu;
        goto label_28f07c;
    }
    ctx->pc = 0x28F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F07Cu);
        ctx->pc = 0x28F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F074u;
        // 0x28f078: 0x8cc468b0  lw          $a0, 0x68B0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 26800)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F074u, 0x28F07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F07Cu;
label_28f07c:
    // 0x28f07c: 0x10000002  b           . + 4 + (0x2 << 2)
label_28f080:
    if (ctx->pc == 0x28F080u) {
        ctx->pc = 0x28F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F07Cu;
        // 0x28f080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F084u;
        goto label_28f084;
    }
    ctx->pc = 0x28F07Cu;
    {
        const bool branch_taken_0x28f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F07Cu;
        // 0x28f080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f07c) {
            ctx->pc = 0x28F088u;
            goto label_28f088;
        }
    }
    ctx->pc = 0x28F084u;
label_28f084:
    // 0x28f084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f088:
    // 0x28f088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28f088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28f08c:
    // 0x28f08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f090:
    // 0x28f090: 0x3e00008  jr          $ra
label_28f094:
    if (ctx->pc == 0x28F094u) {
        ctx->pc = 0x28F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F090u;
        // 0x28f094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F098u;
        goto label_fallthrough_0x28f090;
    }
    ctx->pc = 0x28F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F090u;
        // 0x28f094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f090:
    ctx->pc = 0x28F098u;
}
