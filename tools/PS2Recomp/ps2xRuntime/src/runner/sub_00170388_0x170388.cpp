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

// Function: sub_00170388
// Address: 0x170388 - 0x1703d0
void sub_00170388_0x170388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170388_0x170388");
#endif

    switch (ctx->pc) {
        case 0x1703c0u: goto label_1703c0;
        default: break;
    }

    ctx->pc = 0x170388u;

    // 0x170388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17038c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x17038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x170390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170394: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x170394u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x170398: 0x8c84011c  lw          $a0, 0x11C($a0)
    ctx->pc = 0x170398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x17039c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17039Cu;
    {
        const bool branch_taken_0x17039c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1703A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17039Cu;
        // 0x1703a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17039c) {
            ctx->pc = 0x1703C4u;
            goto label_1703c4;
        }
    }
    ctx->pc = 0x1703A4u;
    // 0x1703a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1703a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1703a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1703A8u;
    {
        const bool branch_taken_0x1703a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703a8) {
            ctx->pc = 0x1703C4u;
            goto label_1703c4;
        }
    }
    ctx->pc = 0x1703B0u;
    // 0x1703b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1703b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1703b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1703b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703b8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1703B8u;
    SET_GPR_U32(ctx, 31, 0x1703C0u);
    ctx->pc = 0x1703BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703B8u;
    // 0x1703bc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1703B8u, 0x1703C0u)) {
        return;
    }
    ctx->pc = 0x1703C0u;
label_1703c0:
    // 0x1703c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1703c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1703c4:
    // 0x1703c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1703C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1703C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703C4u;
        // 0x1703c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1703C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1703CCu;
    // 0x1703cc: 0x0  nop
    ctx->pc = 0x1703ccu;
    // NOP
    ctx->pc = 0x1703d0u;
}
