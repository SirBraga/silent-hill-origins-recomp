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

// Function: sub_00253270
// Address: 0x253270 - 0x2532d0
void sub_00253270_0x253270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253270_0x253270");
#endif

    switch (ctx->pc) {
        case 0x253290u: goto label_253290;
        case 0x25329cu: goto label_25329c;
        case 0x2532b8u: goto label_2532b8;
        default: break;
    }

    ctx->pc = 0x253270u;

    // 0x253270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253274: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x253274u;
    {
        const bool branch_taken_0x253274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x253278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253274u;
        // 0x253278: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253274) {
            ctx->pc = 0x2532A4u;
            goto label_2532a4;
        }
    }
    ctx->pc = 0x25327Cu;
    // 0x25327c: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x25327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x253280: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253284: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x253284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x253288: 0xc092848  jal         func_24A120
    ctx->pc = 0x253288u;
    SET_GPR_U32(ctx, 31, 0x253290u);
    ctx->pc = 0x25328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253288u;
    // 0x25328c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253288u, 0x253290u)) {
        return;
    }
    ctx->pc = 0x253290u;
label_253290:
    // 0x253290: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x253290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253294: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253294u;
    SET_GPR_U32(ctx, 31, 0x25329Cu);
    ctx->pc = 0x253298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253294u;
    // 0x253298: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253294u, 0x25329Cu)) {
        return;
    }
    ctx->pc = 0x25329Cu;
label_25329c:
    // 0x25329c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25329Cu;
    {
        const bool branch_taken_0x25329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25329Cu;
        // 0x2532a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25329c) {
            ctx->pc = 0x2532C0u;
            goto label_2532c0;
        }
    }
    ctx->pc = 0x2532A4u;
label_2532a4:
    // 0x2532a4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x2532a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x2532a8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2532a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2532ac: 0x24a53210  addiu       $a1, $a1, 0x3210
    ctx->pc = 0x2532acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12816));
    // 0x2532b0: 0xc0972f2  jal         func_25CBC8
    ctx->pc = 0x2532B0u;
    SET_GPR_U32(ctx, 31, 0x2532B8u);
    ctx->pc = 0x2532B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2532B0u;
    // 0x2532b4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CBC8u, 0x2532B0u, 0x2532B8u)) {
        return;
    }
    ctx->pc = 0x2532B8u;
label_2532b8:
    // 0x2532b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2532b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2532bc: 0x0  nop
    ctx->pc = 0x2532bcu;
    // NOP
label_2532c0:
    // 0x2532c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2532c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2532c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2532C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2532C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532C4u;
        // 0x2532c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2532C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2532CCu;
    // 0x2532cc: 0x0  nop
    ctx->pc = 0x2532ccu;
    // NOP
    ctx->pc = 0x2532d0u;
}
