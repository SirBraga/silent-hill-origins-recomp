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

// Function: sub_0010FA40
// Address: 0x10fa40 - 0x10fa88
void sub_0010FA40_0x10fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA40_0x10fa40");
#endif

    switch (ctx->pc) {
        case 0x10fa78u: goto label_10fa78;
        default: break;
    }

    ctx->pc = 0x10fa40u;

    // 0x10fa40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x10fa44: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x10fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x10fa48: 0x8c454370  lw          $a1, 0x4370($v0)
    ctx->pc = 0x10fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4370u));
    // 0x10fa4c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10fa4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10fa50: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x10fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x10fa54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10fa54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa58: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10FA58u;
    {
        const bool branch_taken_0x10fa58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x10FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA58u;
        // 0x10fa5c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa58) {
            ctx->pc = 0x10FA78u;
            goto label_10fa78;
        }
    }
    ctx->pc = 0x10FA60u;
    // 0x10fa60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10fa64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FA64u;
    {
        const bool branch_taken_0x10fa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA64u;
        // 0x10fa68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa64) {
            ctx->pc = 0x10FA78u;
            goto label_10fa78;
        }
    }
    ctx->pc = 0x10FA6Cu;
    // 0x10fa6c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x10fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x10fa70: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x10FA70u;
    SET_GPR_U32(ctx, 31, 0x10FA78u);
    ctx->pc = 0x10FA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA70u;
    // 0x10fa74: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x10FA70u, 0x10FA78u)) {
        return;
    }
    ctx->pc = 0x10FA78u;
label_10fa78:
    // 0x10fa78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA7Cu;
        // 0x10fa80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA84u;
    // 0x10fa84: 0x0  nop
    ctx->pc = 0x10fa84u;
    // NOP
    ctx->pc = 0x10fa88u;
}
