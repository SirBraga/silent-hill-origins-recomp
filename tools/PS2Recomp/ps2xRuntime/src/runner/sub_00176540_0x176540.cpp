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

// Function: sub_00176540
// Address: 0x176540 - 0x176590
void sub_00176540_0x176540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176540_0x176540");
#endif

    switch (ctx->pc) {
        case 0x176570u: goto label_176570;
        case 0x176580u: goto label_176580;
        default: break;
    }

    ctx->pc = 0x176540u;

    // 0x176540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176548: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x176548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x17654c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176550: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x176550u;
    {
        const bool branch_taken_0x176550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x176554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176550u;
        // 0x176554: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176550) {
            ctx->pc = 0x176578u;
            goto label_176578;
        }
    }
    ctx->pc = 0x176558u;
    // 0x176558: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x176558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17655c: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x17655cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x176560: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x176564: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x176564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176568: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x176568u;
    SET_GPR_U32(ctx, 31, 0x176570u);
    ctx->pc = 0x17656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176568u;
    // 0x17656c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x176568u, 0x176570u)) {
        return;
    }
    ctx->pc = 0x176570u;
label_176570:
    // 0x176570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176570u;
    {
        const bool branch_taken_0x176570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176570u;
        // 0x176574: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176570) {
            ctx->pc = 0x176584u;
            goto label_176584;
        }
    }
    ctx->pc = 0x176578u;
label_176578:
    // 0x176578: 0xc05d852  jal         func_176148
    ctx->pc = 0x176578u;
    SET_GPR_U32(ctx, 31, 0x176580u);
    ctx->pc = 0x176148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176148u, 0x176578u, 0x176580u)) {
        return;
    }
    ctx->pc = 0x176580u;
label_176580:
    // 0x176580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176584:
    // 0x176584: 0x3e00008  jr          $ra
    ctx->pc = 0x176584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176584u;
        // 0x176588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17658Cu;
    // 0x17658c: 0x0  nop
    ctx->pc = 0x17658cu;
    // NOP
    ctx->pc = 0x176590u;
}
