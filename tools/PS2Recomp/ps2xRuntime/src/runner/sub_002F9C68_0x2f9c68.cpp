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

// Function: sub_002F9C68
// Address: 0x2f9c68 - 0x2f9cd8
void sub_002F9C68_0x2f9c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9C68_0x2f9c68");
#endif

    switch (ctx->pc) {
        case 0x2f9cc4u: goto label_2f9cc4;
        default: break;
    }

    ctx->pc = 0x2f9c68u;

    // 0x2f9c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9c6c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2f9c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9c74: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9C74u;
    {
        const bool branch_taken_0x2f9c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c74) {
            ctx->pc = 0x2F9C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9C74u;
            // 0x2f9c78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9C7Cu;
            goto label_2f9c7c;
        }
    }
    ctx->pc = 0x2F9C7Cu;
label_2f9c7c:
    // 0x2f9c7c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2f9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f9c80: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2f9c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9c84: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2f9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f9c88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9c8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f9c90: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x2f9c90u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2f9c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f9c98: 0x1012  mflo        $v0
    ctx->pc = 0x2f9c98u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9c9c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2f9c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f9ca0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2f9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f9ca4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2f9ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f9ca8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9CA8u;
    {
        const bool branch_taken_0x2f9ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ca8) {
            ctx->pc = 0x2F9CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9CA8u;
            // 0x2f9cac: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9CB8u;
            goto label_2f9cb8;
        }
    }
    ctx->pc = 0x2F9CB0u;
    // 0x2f9cb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9CB0u;
    {
        const bool branch_taken_0x2f9cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CB0u;
        // 0x2f9cb4: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9cb0) {
            ctx->pc = 0x2F9CC8u;
            goto label_2f9cc8;
        }
    }
    ctx->pc = 0x2F9CB8u;
label_2f9cb8:
    // 0x2f9cb8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2f9cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9cbc: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2F9CBCu;
    SET_GPR_U32(ctx, 31, 0x2F9CC4u);
    ctx->pc = 0x2F9CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9CBCu;
    // 0x2f9cc0: 0x24a506b8  addiu       $a1, $a1, 0x6B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2F9CBCu, 0x2F9CC4u)) {
        return;
    }
    ctx->pc = 0x2F9CC4u;
label_2f9cc4:
    // 0x2f9cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9cc8:
    // 0x2f9cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CCCu;
        // 0x2f9cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9CD4u;
    // 0x2f9cd4: 0x0  nop
    ctx->pc = 0x2f9cd4u;
    // NOP
    ctx->pc = 0x2f9cd8u;
}
