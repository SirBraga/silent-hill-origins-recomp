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

// Function: sub_00174268
// Address: 0x174268 - 0x1742b8
void sub_00174268_0x174268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174268_0x174268");
#endif

    switch (ctx->pc) {
        case 0x174298u: goto label_174298;
        case 0x1742a8u: goto label_1742a8;
        default: break;
    }

    ctx->pc = 0x174268u;

    // 0x174268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17426c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174270: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x174274: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174278: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x174278u;
    {
        const bool branch_taken_0x174278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174278u;
        // 0x17427c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174278) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x174280u;
    // 0x174280: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x174280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174284: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x174284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x174288: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x174288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x17428c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17428cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174290: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x174290u;
    SET_GPR_U32(ctx, 31, 0x174298u);
    ctx->pc = 0x174294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174290u;
    // 0x174294: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x174290u, 0x174298u)) {
        return;
    }
    ctx->pc = 0x174298u;
label_174298:
    // 0x174298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x174298u;
    {
        const bool branch_taken_0x174298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174298u;
        // 0x17429c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174298) {
            ctx->pc = 0x1742ACu;
            goto label_1742ac;
        }
    }
    ctx->pc = 0x1742A0u;
label_1742a0:
    // 0x1742a0: 0xc05d852  jal         func_176148
    ctx->pc = 0x1742A0u;
    SET_GPR_U32(ctx, 31, 0x1742A8u);
    ctx->pc = 0x176148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176148u, 0x1742A0u, 0x1742A8u)) {
        return;
    }
    ctx->pc = 0x1742A8u;
label_1742a8:
    // 0x1742a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1742a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1742ac:
    // 0x1742ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1742ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1742B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742ACu;
        // 0x1742b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1742ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1742B4u;
    // 0x1742b4: 0x0  nop
    ctx->pc = 0x1742b4u;
    // NOP
    ctx->pc = 0x1742b8u;
}
