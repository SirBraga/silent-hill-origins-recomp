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

// Function: sub_002E1A30
// Address: 0x2e1a30 - 0x2e1aa0
void sub_002E1A30_0x2e1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1A30_0x2e1a30");
#endif

    switch (ctx->pc) {
        case 0x2e1a4cu: goto label_2e1a4c;
        case 0x2e1a64u: goto label_2e1a64;
        case 0x2e1a84u: goto label_2e1a84;
        default: break;
    }

    ctx->pc = 0x2e1a30u;

    // 0x2e1a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1a34: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e1a38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1a3c: 0x24508158  addiu       $s0, $v0, -0x7EA8
    ctx->pc = 0x2e1a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934872));
    // 0x2e1a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1a44: 0xc0b6c62  jal         func_2DB188
    ctx->pc = 0x2E1A44u;
    SET_GPR_U32(ctx, 31, 0x2E1A4Cu);
    ctx->pc = 0x2E1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A44u;
    // 0x2e1a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB188u, 0x2E1A44u, 0x2E1A4Cu)) {
        return;
    }
    ctx->pc = 0x2E1A4Cu;
label_2e1a4c:
    // 0x2e1a4c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1A4Cu;
    {
        const bool branch_taken_0x2e1a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A4Cu;
        // 0x2e1a50: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a4c) {
            ctx->pc = 0x2E1A8Cu;
            goto label_2e1a8c;
        }
    }
    ctx->pc = 0x2E1A54u;
    // 0x2e1a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a58: 0x24a5f2b0  addiu       $a1, $a1, -0xD50
    ctx->pc = 0x2e1a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963888));
    // 0x2e1a5c: 0xc0b6c52  jal         func_2DB148
    ctx->pc = 0x2E1A5Cu;
    SET_GPR_U32(ctx, 31, 0x2E1A64u);
    ctx->pc = 0x2E1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A5Cu;
    // 0x2e1a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB148u, 0x2E1A5Cu, 0x2E1A64u)) {
        return;
    }
    ctx->pc = 0x2E1A64u;
label_2e1a64:
    // 0x2e1a64: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e1a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e1a68: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e1a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e1a6c: 0x24a54bf8  addiu       $a1, $a1, 0x4BF8
    ctx->pc = 0x2e1a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19448));
    // 0x2e1a70: 0x24e74c98  addiu       $a3, $a3, 0x4C98
    ctx->pc = 0x2e1a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19608));
    // 0x2e1a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a78: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e1a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1a7c: 0xc0b6cfc  jal         func_2DB3F0
    ctx->pc = 0x2E1A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E1A84u);
    ctx->pc = 0x2E1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A7Cu;
    // 0x2e1a80: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB3F0u, 0x2E1A7Cu, 0x2E1A84u)) {
        return;
    }
    ctx->pc = 0x2E1A84u;
label_2e1a84:
    // 0x2e1a84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1A84u;
    {
        const bool branch_taken_0x2e1a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A84u;
        // 0x2e1a88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a84) {
            ctx->pc = 0x2E1A90u;
            goto label_2e1a90;
        }
    }
    ctx->pc = 0x2E1A8Cu;
label_2e1a8c:
    // 0x2e1a8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a90:
    // 0x2e1a90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1a98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A98u;
        // 0x2e1a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1AA0u;
}
