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

// Function: sub_002D5570
// Address: 0x2d5570 - 0x2d5608
void sub_002D5570_0x2d5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5570_0x2d5570");
#endif

    switch (ctx->pc) {
        case 0x2d5598u: goto label_2d5598;
        default: break;
    }

    ctx->pc = 0x2d5570u;

    // 0x2d5570: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2d5570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2d5574: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d5574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d5578: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2d5578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d557c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2d557cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2d5580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5584: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x2d5584u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2d5588: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d5588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d558c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d5590: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5590u;
    {
        const bool branch_taken_0x2d5590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5590u;
        // 0x2d5594: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5590) {
            ctx->pc = 0x2D55B4u;
            goto label_2d55b4;
        }
    }
    ctx->pc = 0x2D5598u;
label_2d5598:
    // 0x2d5598: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x2d5598u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2d559c: 0x0  nop
    ctx->pc = 0x2d559cu;
    // NOP
    // 0x2d55a0: 0x0  nop
    ctx->pc = 0x2d55a0u;
    // NOP
    // 0x2d55a4: 0x0  nop
    ctx->pc = 0x2d55a4u;
    // NOP
    // 0x2d55a8: 0x0  nop
    ctx->pc = 0x2d55a8u;
    // NOP
    // 0x2d55ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D55ACu;
    {
        const bool branch_taken_0x2d55ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55ACu;
        // 0x2d55b0: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d55ac) {
            ctx->pc = 0x2D5598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5598;
        }
    }
    ctx->pc = 0x2D55B4u;
label_2d55b4:
    // 0x2d55b4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d55b8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d55b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d55bc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d55c0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2d55c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2d55c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d55c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d55c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D55C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55C8u;
        // 0x2d55cc: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D55D0u;
    // 0x2d55d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d55d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d55d4: 0x0  nop
    ctx->pc = 0x2d55d4u;
    // NOP
    // 0x2d55d8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2d55d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55dc: 0x0  nop
    ctx->pc = 0x2d55dcu;
    // NOP
    // 0x2d55e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2d55e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d55e4: 0x0  nop
    ctx->pc = 0x2d55e4u;
    // NOP
    // 0x2d55e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d55e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d55ec: 0x0  nop
    ctx->pc = 0x2d55ecu;
    // NOP
    // 0x2d55f0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2d55f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d55f4: 0x0  nop
    ctx->pc = 0x2d55f4u;
    // NOP
    // 0x2d55f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d55f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d55fc: 0x0  nop
    ctx->pc = 0x2d55fcu;
    // NOP
    // 0x2d5600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5604: 0x0  nop
    ctx->pc = 0x2d5604u;
    // NOP
    ctx->pc = 0x2d5608u;
}
