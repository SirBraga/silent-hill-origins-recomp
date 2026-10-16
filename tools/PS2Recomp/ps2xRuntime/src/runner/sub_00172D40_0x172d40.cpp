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

// Function: sub_00172D40
// Address: 0x172d40 - 0x172da8
void sub_00172D40_0x172d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172D40_0x172d40");
#endif

    switch (ctx->pc) {
        case 0x172d74u: goto label_172d74;
        case 0x172d8cu: goto label_172d8c;
        case 0x172d9cu: goto label_172d9c;
        default: break;
    }

    ctx->pc = 0x172d40u;

    // 0x172d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172d48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x172d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x172d4c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x172d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x172d50: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x172D50u;
    {
        const bool branch_taken_0x172d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172d50) {
            ctx->pc = 0x172D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172D50u;
            // 0x172d54: 0x8c82008c  lw          $v0, 0x8C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172D7Cu;
            goto label_172d7c;
        }
    }
    ctx->pc = 0x172D58u;
    // 0x172d58: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x172d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x172d5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x172d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d60: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x172d64: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x172d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x172d68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x172d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172d6c: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x172D6Cu;
    SET_GPR_U32(ctx, 31, 0x172D74u);
    ctx->pc = 0x172D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D6Cu;
    // 0x172d70: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x172D6Cu, 0x172D74u)) {
        return;
    }
    ctx->pc = 0x172D74u;
label_172d74:
    // 0x172d74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x172D74u;
    {
        const bool branch_taken_0x172d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D74u;
        // 0x172d78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d74) {
            ctx->pc = 0x172DA0u;
            goto label_172da0;
        }
    }
    ctx->pc = 0x172D7Cu;
label_172d7c:
    // 0x172d7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172D7Cu;
    {
        const bool branch_taken_0x172d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172d7c) {
            ctx->pc = 0x172D94u;
            goto label_172d94;
        }
    }
    ctx->pc = 0x172D84u;
    // 0x172d84: 0xc05ca44  jal         func_172910
    ctx->pc = 0x172D84u;
    SET_GPR_U32(ctx, 31, 0x172D8Cu);
    ctx->pc = 0x172910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x172910u, 0x172D84u, 0x172D8Cu)) {
        return;
    }
    ctx->pc = 0x172D8Cu;
label_172d8c:
    // 0x172d8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172D8Cu;
    {
        const bool branch_taken_0x172d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D8Cu;
        // 0x172d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d8c) {
            ctx->pc = 0x172DA0u;
            goto label_172da0;
        }
    }
    ctx->pc = 0x172D94u;
label_172d94:
    // 0x172d94: 0xc05d852  jal         func_176148
    ctx->pc = 0x172D94u;
    SET_GPR_U32(ctx, 31, 0x172D9Cu);
    ctx->pc = 0x176148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176148u, 0x172D94u, 0x172D9Cu)) {
        return;
    }
    ctx->pc = 0x172D9Cu;
label_172d9c:
    // 0x172d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172da0:
    // 0x172da0: 0x3e00008  jr          $ra
    ctx->pc = 0x172DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DA0u;
        // 0x172da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172DA8u;
}
