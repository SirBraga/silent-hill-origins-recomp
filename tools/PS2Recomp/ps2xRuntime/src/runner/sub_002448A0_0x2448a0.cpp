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

// Function: sub_002448A0
// Address: 0x2448a0 - 0x244908
void sub_002448A0_0x2448a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002448A0_0x2448a0");
#endif

    switch (ctx->pc) {
        case 0x2448a0u: goto label_2448a0;
        case 0x2448a4u: goto label_2448a4;
        case 0x2448a8u: goto label_2448a8;
        case 0x2448acu: goto label_2448ac;
        case 0x2448b0u: goto label_2448b0;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448b8u: goto label_2448b8;
        case 0x2448bcu: goto label_2448bc;
        case 0x2448c0u: goto label_2448c0;
        case 0x2448c4u: goto label_2448c4;
        case 0x2448c8u: goto label_2448c8;
        case 0x2448ccu: goto label_2448cc;
        case 0x2448d0u: goto label_2448d0;
        case 0x2448d4u: goto label_2448d4;
        case 0x2448d8u: goto label_2448d8;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448e4u: goto label_2448e4;
        case 0x2448e8u: goto label_2448e8;
        case 0x2448ecu: goto label_2448ec;
        case 0x2448f0u: goto label_2448f0;
        case 0x2448f4u: goto label_2448f4;
        case 0x2448f8u: goto label_2448f8;
        case 0x2448fcu: goto label_2448fc;
        case 0x244900u: goto label_244900;
        case 0x244904u: goto label_244904;
        default: break;
    }

    ctx->pc = 0x2448a0u;

label_2448a0:
    // 0x2448a0: 0x938284e0  lbu         $v0, -0x7B20($gp)
    ctx->pc = 0x2448a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_2448a4:
    // 0x2448a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2448a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2448a8:
    // 0x2448a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2448a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2448ac:
    // 0x2448ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2448b0:
    if (ctx->pc == 0x2448B0u) {
        ctx->pc = 0x2448B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448ACu;
        // 0x2448b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448B4u;
        goto label_2448b4;
    }
    ctx->pc = 0x2448ACu;
    {
        const bool branch_taken_0x2448ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448ACu;
        // 0x2448b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448ac) {
            ctx->pc = 0x2448C0u;
            goto label_2448c0;
        }
    }
    ctx->pc = 0x2448B4u;
label_2448b4:
    // 0x2448b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2448b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2448b8:
    // 0x2448b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2448bc:
    if (ctx->pc == 0x2448BCu) {
        ctx->pc = 0x2448BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B8u;
        // 0x2448bc: 0x2449b5a0  addiu       $t1, $v0, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448C0u;
        goto label_2448c0;
    }
    ctx->pc = 0x2448B8u;
    {
        const bool branch_taken_0x2448b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B8u;
        // 0x2448bc: 0x2449b5a0  addiu       $t1, $v0, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448b8) {
            ctx->pc = 0x2448C8u;
            goto label_2448c8;
        }
    }
    ctx->pc = 0x2448C0u;
label_2448c0:
    // 0x2448c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2448c4:
    // 0x2448c4: 0x2449b590  addiu       $t1, $v0, -0x4A70
    ctx->pc = 0x2448c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
label_2448c8:
    // 0x2448c8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2448c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2448cc:
    // 0x2448cc: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2448ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2448d0:
    // 0x2448d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2448d4:
    if (ctx->pc == 0x2448D4u) {
        ctx->pc = 0x2448D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448D0u;
        // 0x2448d4: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448D8u;
        goto label_2448d8;
    }
    ctx->pc = 0x2448D0u;
    {
        const bool branch_taken_0x2448d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448D0u;
        // 0x2448d4: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448d0) {
            ctx->pc = 0x2448F8u;
            goto label_2448f8;
        }
    }
    ctx->pc = 0x2448D8u;
label_2448d8:
    // 0x2448d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2448d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2448dc:
    // 0x2448dc: 0x24421150  addiu       $v0, $v0, 0x1150
    ctx->pc = 0x2448dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
label_2448e0:
    // 0x2448e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2448e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2448e4:
    // 0x2448e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2448e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2448e8:
    // 0x2448e8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2448e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2448ec:
    // 0x2448ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2448ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2448f0:
    // 0x2448f0: 0x40f809  jalr        $v0
label_2448f4:
    if (ctx->pc == 0x2448F4u) {
        ctx->pc = 0x2448F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F0u;
        // 0x2448f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448F8u;
        goto label_2448f8;
    }
    ctx->pc = 0x2448F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2448F8u);
        ctx->pc = 0x2448F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F0u;
        // 0x2448f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2448F0u, 0x2448F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2448F8u;
label_2448f8:
    // 0x2448f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2448f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2448fc:
    // 0x2448fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2448fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244900:
    // 0x244900: 0x3e00008  jr          $ra
label_244904:
    if (ctx->pc == 0x244904u) {
        ctx->pc = 0x244904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244900u;
        // 0x244904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244908u;
        goto label_fallthrough_0x244900;
    }
    ctx->pc = 0x244900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244900u;
        // 0x244904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244900:
    ctx->pc = 0x244908u;
}
