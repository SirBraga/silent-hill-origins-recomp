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

// Function: sub_00228568
// Address: 0x228568 - 0x2285b8
void sub_00228568_0x228568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228568_0x228568");
#endif

    switch (ctx->pc) {
        case 0x228568u: goto label_228568;
        case 0x22856cu: goto label_22856c;
        case 0x228570u: goto label_228570;
        case 0x228574u: goto label_228574;
        case 0x228578u: goto label_228578;
        case 0x22857cu: goto label_22857c;
        case 0x228580u: goto label_228580;
        case 0x228584u: goto label_228584;
        case 0x228588u: goto label_228588;
        case 0x22858cu: goto label_22858c;
        case 0x228590u: goto label_228590;
        case 0x228594u: goto label_228594;
        case 0x228598u: goto label_228598;
        case 0x22859cu: goto label_22859c;
        case 0x2285a0u: goto label_2285a0;
        case 0x2285a4u: goto label_2285a4;
        case 0x2285a8u: goto label_2285a8;
        case 0x2285acu: goto label_2285ac;
        case 0x2285b0u: goto label_2285b0;
        case 0x2285b4u: goto label_2285b4;
        default: break;
    }

    ctx->pc = 0x228568u;

label_228568:
    // 0x228568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22856c:
    // 0x22856c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_228570:
    // 0x228570: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x228570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_228574:
    // 0x228574: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x228574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_228578:
    // 0x228578: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x228578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_22857c:
    // 0x22857c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_228580:
    if (ctx->pc == 0x228580u) {
        ctx->pc = 0x228580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22857Cu;
        // 0x228580: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228584u;
        goto label_228584;
    }
    ctx->pc = 0x22857Cu;
    {
        const bool branch_taken_0x22857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22857Cu;
        // 0x228580: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22857c) {
            ctx->pc = 0x22858Cu;
            goto label_22858c;
        }
    }
    ctx->pc = 0x228584u;
label_228584:
    // 0x228584: 0x10000009  b           . + 4 + (0x9 << 2)
label_228588:
    if (ctx->pc == 0x228588u) {
        ctx->pc = 0x228588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228584u;
        // 0x228588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22858Cu;
        goto label_22858c;
    }
    ctx->pc = 0x228584u;
    {
        const bool branch_taken_0x228584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228584u;
        // 0x228588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228584) {
            ctx->pc = 0x2285ACu;
            goto label_2285ac;
        }
    }
    ctx->pc = 0x22858Cu;
label_22858c:
    // 0x22858c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22858cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228590:
    // 0x228590: 0x8c621080  lw          $v0, 0x1080($v1)
    ctx->pc = 0x228590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4224)));
label_228594:
    // 0x228594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x228594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228598:
    // 0x228598: 0x40f809  jalr        $v0
label_22859c:
    if (ctx->pc == 0x22859Cu) {
        ctx->pc = 0x22859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228598u;
        // 0x22859c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285A0u;
        goto label_2285a0;
    }
    ctx->pc = 0x228598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2285A0u);
        ctx->pc = 0x22859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228598u;
        // 0x22859c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228598u, 0x2285A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2285A0u;
label_2285a0:
    // 0x2285a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2285a4:
    if (ctx->pc == 0x2285A4u) {
        ctx->pc = 0x2285A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285A0u;
        // 0x2285a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285A8u;
        goto label_2285a8;
    }
    ctx->pc = 0x2285A0u;
    {
        const bool branch_taken_0x2285a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2285A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285A0u;
        // 0x2285a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285a0) {
            ctx->pc = 0x2285ACu;
            goto label_2285ac;
        }
    }
    ctx->pc = 0x2285A8u;
label_2285a8:
    // 0x2285a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2285a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2285ac:
    // 0x2285ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2285acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2285b0:
    // 0x2285b0: 0x3e00008  jr          $ra
label_2285b4:
    if (ctx->pc == 0x2285B4u) {
        ctx->pc = 0x2285B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285B0u;
        // 0x2285b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285B8u;
        goto label_fallthrough_0x2285b0;
    }
    ctx->pc = 0x2285B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2285B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285B0u;
        // 0x2285b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2285B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2285b0:
    ctx->pc = 0x2285B8u;
}
