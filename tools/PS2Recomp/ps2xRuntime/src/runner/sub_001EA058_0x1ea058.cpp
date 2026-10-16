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

// Function: sub_001EA058
// Address: 0x1ea058 - 0x1ea090
void sub_001EA058_0x1ea058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA058_0x1ea058");
#endif

    switch (ctx->pc) {
        case 0x1ea058u: goto label_1ea058;
        case 0x1ea05cu: goto label_1ea05c;
        case 0x1ea060u: goto label_1ea060;
        case 0x1ea064u: goto label_1ea064;
        case 0x1ea068u: goto label_1ea068;
        case 0x1ea06cu: goto label_1ea06c;
        case 0x1ea070u: goto label_1ea070;
        case 0x1ea074u: goto label_1ea074;
        case 0x1ea078u: goto label_1ea078;
        case 0x1ea07cu: goto label_1ea07c;
        case 0x1ea080u: goto label_1ea080;
        case 0x1ea084u: goto label_1ea084;
        case 0x1ea088u: goto label_1ea088;
        case 0x1ea08cu: goto label_1ea08c;
        default: break;
    }

    ctx->pc = 0x1ea058u;

label_1ea058:
    // 0x1ea058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ea05c:
    // 0x1ea05c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ea05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ea060:
    // 0x1ea060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea064:
    // 0x1ea064: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1ea068:
    if (ctx->pc == 0x1EA068u) {
        ctx->pc = 0x1EA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA064u;
        // 0x1ea068: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA06Cu;
        goto label_1ea06c;
    }
    ctx->pc = 0x1EA064u;
    {
        const bool branch_taken_0x1ea064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA064u;
        // 0x1ea068: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea064) {
            ctx->pc = 0x1EA080u;
            goto label_1ea080;
        }
    }
    ctx->pc = 0x1EA06Cu;
label_1ea06c:
    // 0x1ea06c: 0xc0932d4  jal         func_24CB50
label_1ea070:
    if (ctx->pc == 0x1EA070u) {
        ctx->pc = 0x1EA074u;
        goto label_1ea074;
    }
    ctx->pc = 0x1EA06Cu;
    SET_GPR_U32(ctx, 31, 0x1EA074u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EA06Cu, 0x1EA074u)) {
        return;
    }
    ctx->pc = 0x1EA074u;
label_1ea074:
    // 0x1ea074: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ea074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ea078:
    // 0x1ea078: 0x60f809  jalr        $v1
label_1ea07c:
    if (ctx->pc == 0x1EA07Cu) {
        ctx->pc = 0x1EA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA078u;
        // 0x1ea07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA080u;
        goto label_1ea080;
    }
    ctx->pc = 0x1EA078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA080u);
        ctx->pc = 0x1EA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA078u;
        // 0x1ea07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA078u, 0x1EA080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA080u;
label_1ea080:
    // 0x1ea080: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ea080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea084:
    // 0x1ea084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea088:
    // 0x1ea088: 0x3e00008  jr          $ra
label_1ea08c:
    if (ctx->pc == 0x1EA08Cu) {
        ctx->pc = 0x1EA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA088u;
        // 0x1ea08c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA090u;
        goto label_fallthrough_0x1ea088;
    }
    ctx->pc = 0x1EA088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA088u;
        // 0x1ea08c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ea088:
    ctx->pc = 0x1EA090u;
}
