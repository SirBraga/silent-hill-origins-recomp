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

// Function: sub_00175D48
// Address: 0x175d48 - 0x175d98
void sub_00175D48_0x175d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175D48_0x175d48");
#endif

    switch (ctx->pc) {
        case 0x175d78u: goto label_175d78;
        case 0x175d88u: goto label_175d88;
        default: break;
    }

    ctx->pc = 0x175d48u;

    // 0x175d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175d50: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x175d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x175d54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x175d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175d58: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x175D58u;
    {
        const bool branch_taken_0x175d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x175D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D58u;
        // 0x175d5c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d58) {
            ctx->pc = 0x175D80u;
            goto label_175d80;
        }
    }
    ctx->pc = 0x175D60u;
    // 0x175d60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x175d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d64: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x175d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x175d68: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x175d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x175d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175d70: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x175D70u;
    SET_GPR_U32(ctx, 31, 0x175D78u);
    ctx->pc = 0x175D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D70u;
    // 0x175d74: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x175D70u, 0x175D78u)) {
        return;
    }
    ctx->pc = 0x175D78u;
label_175d78:
    // 0x175d78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175D78u;
    {
        const bool branch_taken_0x175d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D78u;
        // 0x175d7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d78) {
            ctx->pc = 0x175D8Cu;
            goto label_175d8c;
        }
    }
    ctx->pc = 0x175D80u;
label_175d80:
    // 0x175d80: 0xc05d852  jal         func_176148
    ctx->pc = 0x175D80u;
    SET_GPR_U32(ctx, 31, 0x175D88u);
    ctx->pc = 0x176148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176148u, 0x175D80u, 0x175D88u)) {
        return;
    }
    ctx->pc = 0x175D88u;
label_175d88:
    // 0x175d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175d8c:
    // 0x175d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x175D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D8Cu;
        // 0x175d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175D94u;
    // 0x175d94: 0x0  nop
    ctx->pc = 0x175d94u;
    // NOP
    ctx->pc = 0x175d98u;
}
