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

// Function: sub_001A4B50
// Address: 0x1a4b50 - 0x1a4ba0
void sub_001A4B50_0x1a4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4B50_0x1a4b50");
#endif

    switch (ctx->pc) {
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b84u: goto label_1a4b84;
        default: break;
    }

    ctx->pc = 0x1a4b50u;

    // 0x1a4b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4b54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a4b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4b5c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4B5Cu;
    {
        const bool branch_taken_0x1a4b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B5Cu;
        // 0x1a4b60: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b5c) {
            ctx->pc = 0x1A4B8Cu;
            goto label_1a4b8c;
        }
    }
    ctx->pc = 0x1A4B64u;
    // 0x1a4b64: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A4B64u;
    {
        const bool branch_taken_0x1a4b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B64u;
        // 0x1a4b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b64) {
            ctx->pc = 0x1A4B90u;
            goto label_1a4b90;
        }
    }
    ctx->pc = 0x1A4B6Cu;
    // 0x1a4b6c: 0xc069350  jal         func_1A4D40
    ctx->pc = 0x1A4B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B74u);
    ctx->pc = 0x1A4D40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4D40u, 0x1A4B6Cu, 0x1A4B74u)) {
        return;
    }
    ctx->pc = 0x1A4B74u;
label_1a4b74:
    // 0x1a4b74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4B74u;
    {
        const bool branch_taken_0x1a4b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B74u;
        // 0x1a4b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b74) {
            ctx->pc = 0x1A4B8Cu;
            goto label_1a4b8c;
        }
    }
    ctx->pc = 0x1A4B7Cu;
    // 0x1a4b7c: 0xc0693a0  jal         func_1A4E80
    ctx->pc = 0x1A4B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B84u);
    ctx->pc = 0x1A4B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B7Cu;
    // 0x1a4b80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4E80u, 0x1A4B7Cu, 0x1A4B84u)) {
        return;
    }
    ctx->pc = 0x1A4B84u;
label_1a4b84:
    // 0x1a4b84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4B84u;
    {
        const bool branch_taken_0x1a4b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B84u;
        // 0x1a4b88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b84) {
            ctx->pc = 0x1A4B94u;
            goto label_1a4b94;
        }
    }
    ctx->pc = 0x1A4B8Cu;
label_1a4b8c:
    // 0x1a4b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b90:
    // 0x1a4b90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a4b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4b94:
    // 0x1a4b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B98u;
        // 0x1a4b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BA0u;
}
