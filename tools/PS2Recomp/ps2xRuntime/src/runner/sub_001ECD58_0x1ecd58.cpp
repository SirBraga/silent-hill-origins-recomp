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

// Function: sub_001ECD58
// Address: 0x1ecd58 - 0x1ecda0
void sub_001ECD58_0x1ecd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECD58_0x1ecd58");
#endif

    switch (ctx->pc) {
        case 0x1ecd58u: goto label_1ecd58;
        case 0x1ecd5cu: goto label_1ecd5c;
        case 0x1ecd60u: goto label_1ecd60;
        case 0x1ecd64u: goto label_1ecd64;
        case 0x1ecd68u: goto label_1ecd68;
        case 0x1ecd6cu: goto label_1ecd6c;
        case 0x1ecd70u: goto label_1ecd70;
        case 0x1ecd74u: goto label_1ecd74;
        case 0x1ecd78u: goto label_1ecd78;
        case 0x1ecd7cu: goto label_1ecd7c;
        case 0x1ecd80u: goto label_1ecd80;
        case 0x1ecd84u: goto label_1ecd84;
        case 0x1ecd88u: goto label_1ecd88;
        case 0x1ecd8cu: goto label_1ecd8c;
        case 0x1ecd90u: goto label_1ecd90;
        case 0x1ecd94u: goto label_1ecd94;
        case 0x1ecd98u: goto label_1ecd98;
        case 0x1ecd9cu: goto label_1ecd9c;
        default: break;
    }

    ctx->pc = 0x1ecd58u;

label_1ecd58:
    // 0x1ecd58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ecd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ecd5c:
    // 0x1ecd5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ecd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ecd60:
    // 0x1ecd60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ecd64:
    // 0x1ecd64: 0xc07b368  jal         func_1ECDA0
label_1ecd68:
    if (ctx->pc == 0x1ECD68u) {
        ctx->pc = 0x1ECD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD64u;
        // 0x1ecd68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD6Cu;
        goto label_1ecd6c;
    }
    ctx->pc = 0x1ECD64u;
    SET_GPR_U32(ctx, 31, 0x1ECD6Cu);
    ctx->pc = 0x1ECD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD64u;
    // 0x1ecd68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECDA0u, 0x1ECD64u, 0x1ECD6Cu)) {
        return;
    }
    ctx->pc = 0x1ECD6Cu;
label_1ecd6c:
    // 0x1ecd6c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ecd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1ecd70:
    // 0x1ecd70: 0x8c62e7b4  lw          $v0, -0x184C($v1)
    ctx->pc = 0x1ecd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961076)));
label_1ecd74:
    // 0x1ecd74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ecd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ecd78:
    // 0x1ecd78: 0xc0932d4  jal         func_24CB50
label_1ecd7c:
    if (ctx->pc == 0x1ECD7Cu) {
        ctx->pc = 0x1ECD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD78u;
        // 0x1ecd7c: 0xac62e7b4  sw          $v0, -0x184C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD80u;
        goto label_1ecd80;
    }
    ctx->pc = 0x1ECD78u;
    SET_GPR_U32(ctx, 31, 0x1ECD80u);
    ctx->pc = 0x1ECD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD78u;
    // 0x1ecd7c: 0xac62e7b4  sw          $v0, -0x184C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1ECD78u, 0x1ECD80u)) {
        return;
    }
    ctx->pc = 0x1ECD80u;
label_1ecd80:
    // 0x1ecd80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ecd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ecd84:
    // 0x1ecd84: 0x60f809  jalr        $v1
label_1ecd88:
    if (ctx->pc == 0x1ECD88u) {
        ctx->pc = 0x1ECD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD84u;
        // 0x1ecd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD8Cu;
        goto label_1ecd8c;
    }
    ctx->pc = 0x1ECD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ECD8Cu);
        ctx->pc = 0x1ECD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD84u;
        // 0x1ecd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECD84u, 0x1ECD8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECD8Cu;
label_1ecd8c:
    // 0x1ecd8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ecd8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecd90:
    // 0x1ecd90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecd94:
    // 0x1ecd94: 0x3e00008  jr          $ra
label_1ecd98:
    if (ctx->pc == 0x1ECD98u) {
        ctx->pc = 0x1ECD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD94u;
        // 0x1ecd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD9Cu;
        goto label_1ecd9c;
    }
    ctx->pc = 0x1ECD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD94u;
        // 0x1ecd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECD9Cu;
label_1ecd9c:
    // 0x1ecd9c: 0x0  nop
    ctx->pc = 0x1ecd9cu;
    // NOP
    ctx->pc = 0x1ecda0u;
}
