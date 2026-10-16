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

// Function: sub_00238160
// Address: 0x238160 - 0x2381e0
void sub_00238160_0x238160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238160_0x238160");
#endif

    switch (ctx->pc) {
        case 0x238178u: goto label_238178;
        case 0x2381a0u: goto label_2381a0;
        default: break;
    }

    ctx->pc = 0x238160u;

    // 0x238160: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x238160u;
    {
        const bool branch_taken_0x238160 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x238164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238160u;
        // 0x238164: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238160) {
            ctx->pc = 0x238190u;
            goto label_238190;
        }
    }
    ctx->pc = 0x238168u;
    // 0x238168: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x238168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23816c: 0x24428158  addiu       $v0, $v0, -0x7EA8
    ctx->pc = 0x23816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934872));
    // 0x238170: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x238170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238174: 0x0  nop
    ctx->pc = 0x238174u;
    // NOP
label_238178:
    // 0x238178: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x238178u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x23817c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238180: 0x0  nop
    ctx->pc = 0x238180u;
    // NOP
    // 0x238184: 0x0  nop
    ctx->pc = 0x238184u;
    // NOP
    // 0x238188: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x238188u;
    {
        const bool branch_taken_0x238188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238188u;
        // 0x23818c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238188) {
            ctx->pc = 0x238178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238178;
        }
    }
    ctx->pc = 0x238190u;
label_238190:
    // 0x238190: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x238190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238194: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x238194u;
    {
        const bool branch_taken_0x238194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238194u;
        // 0x238198: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238194) {
            ctx->pc = 0x2381D4u;
            goto label_2381d4;
        }
    }
    ctx->pc = 0x23819Cu;
    // 0x23819c: 0x0  nop
    ctx->pc = 0x23819cu;
    // NOP
label_2381a0:
    // 0x2381a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2381a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2381a4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2381a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2381a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2381A8u;
    {
        const bool branch_taken_0x2381a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381A8u;
        // 0x2381ac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381a8) {
            ctx->pc = 0x2381C8u;
            goto label_2381c8;
        }
    }
    ctx->pc = 0x2381B0u;
    // 0x2381b0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2381B0u;
    {
        const bool branch_taken_0x2381b0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2381B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381B0u;
        // 0x2381b4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381b0) {
            ctx->pc = 0x2381C4u;
            goto label_2381c4;
        }
    }
    ctx->pc = 0x2381B8u;
    // 0x2381b8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2381b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2381bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2381bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2381c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2381c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2381c4:
    // 0x2381c4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2381c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2381c8:
    // 0x2381c8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2381c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2381cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2381CCu;
    {
        const bool branch_taken_0x2381cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2381D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381CCu;
        // 0x2381d0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381cc) {
            ctx->pc = 0x2381A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2381a0;
        }
    }
    ctx->pc = 0x2381D4u;
label_2381d4:
    // 0x2381d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2381D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2381D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2381DCu;
    // 0x2381dc: 0x0  nop
    ctx->pc = 0x2381dcu;
    // NOP
    ctx->pc = 0x2381e0u;
}
