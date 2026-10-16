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

// Function: sub_002E1B50
// Address: 0x2e1b50 - 0x2e1bc0
void sub_002E1B50_0x2e1b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1B50_0x2e1b50");
#endif

    switch (ctx->pc) {
        case 0x2e1b6cu: goto label_2e1b6c;
        case 0x2e1b84u: goto label_2e1b84;
        case 0x2e1ba4u: goto label_2e1ba4;
        default: break;
    }

    ctx->pc = 0x2e1b50u;

    // 0x2e1b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1b54: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e1b58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1b5c: 0x245081a8  addiu       $s0, $v0, -0x7E58
    ctx->pc = 0x2e1b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934952));
    // 0x2e1b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1b64: 0xc0b6c62  jal         func_2DB188
    ctx->pc = 0x2E1B64u;
    SET_GPR_U32(ctx, 31, 0x2E1B6Cu);
    ctx->pc = 0x2E1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B64u;
    // 0x2e1b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB188u, 0x2E1B64u, 0x2E1B6Cu)) {
        return;
    }
    ctx->pc = 0x2E1B6Cu;
label_2e1b6c:
    // 0x2e1b6c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1B6Cu;
    {
        const bool branch_taken_0x2e1b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B6Cu;
        // 0x2e1b70: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b6c) {
            ctx->pc = 0x2E1BACu;
            goto label_2e1bac;
        }
    }
    ctx->pc = 0x2E1B74u;
    // 0x2e1b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b78: 0x24a5f490  addiu       $a1, $a1, -0xB70
    ctx->pc = 0x2e1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964368));
    // 0x2e1b7c: 0xc0b6c52  jal         func_2DB148
    ctx->pc = 0x2E1B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B84u);
    ctx->pc = 0x2E1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B7Cu;
    // 0x2e1b80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB148u, 0x2E1B7Cu, 0x2E1B84u)) {
        return;
    }
    ctx->pc = 0x2E1B84u;
label_2e1b84:
    // 0x2e1b84: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e1b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e1b88: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e1b88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e1b8c: 0x24a54e30  addiu       $a1, $a1, 0x4E30
    ctx->pc = 0x2e1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20016));
    // 0x2e1b90: 0x24e74ea8  addiu       $a3, $a3, 0x4EA8
    ctx->pc = 0x2e1b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20136));
    // 0x2e1b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b98: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2e1b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e1b9c: 0xc0b6cfc  jal         func_2DB3F0
    ctx->pc = 0x2E1B9Cu;
    SET_GPR_U32(ctx, 31, 0x2E1BA4u);
    ctx->pc = 0x2E1BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B9Cu;
    // 0x2e1ba0: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB3F0u, 0x2E1B9Cu, 0x2E1BA4u)) {
        return;
    }
    ctx->pc = 0x2E1BA4u;
label_2e1ba4:
    // 0x2e1ba4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1BA4u;
    {
        const bool branch_taken_0x2e1ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BA4u;
        // 0x2e1ba8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ba4) {
            ctx->pc = 0x2E1BB0u;
            goto label_2e1bb0;
        }
    }
    ctx->pc = 0x2E1BACu;
label_2e1bac:
    // 0x2e1bac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1bb0:
    // 0x2e1bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BB8u;
        // 0x2e1bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1BC0u;
}
