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

// Function: entry_327480
// Address: 0x327480 - 0x3274f0
void entry_327480_0x3274f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_327480_0x3274f0");
#endif

    switch (ctx->pc) {
        case 0x327498u: goto label_327498;
        default: break;
    }

    ctx->pc = 0x327480u;

    // 0x327480: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x327480u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x327484: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x327484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x327488: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x327488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32748c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32748Cu;
    {
        const bool branch_taken_0x32748c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32748Cu;
        // 0x327490: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32748c) {
            ctx->pc = 0x3274BCu;
            goto label_3274bc;
        }
    }
    ctx->pc = 0x327494u;
    // 0x327494: 0x0  nop
    ctx->pc = 0x327494u;
    // NOP
label_327498:
    // 0x327498: 0x42000039  di
    ctx->pc = 0x327498u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x32749c: 0x40f  sync.p
    ctx->pc = 0x32749cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3274a0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3274a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3274a4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3274a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3274a8: 0x0  nop
    ctx->pc = 0x3274a8u;
    // NOP
    // 0x3274ac: 0x0  nop
    ctx->pc = 0x3274acu;
    // NOP
    // 0x3274b0: 0x0  nop
    ctx->pc = 0x3274b0u;
    // NOP
    // 0x3274b4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3274B4u;
    {
        const bool branch_taken_0x3274b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3274b4) {
            ctx->pc = 0x327498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327498;
        }
    }
    ctx->pc = 0x3274BCu;
label_3274bc:
    // 0x3274bc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3274bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3274c0: 0x40f  sync.p
    ctx->pc = 0x3274c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3274c4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x3274c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3274c8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x3274c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x3274cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3274ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3274d0: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x3274d0u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x3274d4: 0x40f  sync.p
    ctx->pc = 0x3274d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3274d8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3274d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3274dc: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x3274dcu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x3274e0: 0x40f  sync.p
    ctx->pc = 0x3274e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3274e4: 0x42000018  eret
    ctx->pc = 0x3274e4u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x3274e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3274E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3274E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3274F0u;
}
