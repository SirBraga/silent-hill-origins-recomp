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

// Function: sub_00153F28
// Address: 0x153f28 - 0x153f70
void sub_00153F28_0x153f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153F28_0x153f28");
#endif

    switch (ctx->pc) {
        case 0x153f5cu: goto label_153f5c;
        default: break;
    }

    ctx->pc = 0x153f28u;

    // 0x153f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153f2c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x153f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x153f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153f34: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x153f34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x153f38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x153f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153f3c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x153f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x153f40: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x153F40u;
    {
        const bool branch_taken_0x153f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x153F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F40u;
        // 0x153f44: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f40) {
            ctx->pc = 0x153F5Cu;
            goto label_153f5c;
        }
    }
    ctx->pc = 0x153F48u;
    // 0x153f48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x153f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153F4Cu;
    {
        const bool branch_taken_0x153f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F4Cu;
        // 0x153f50: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f4c) {
            ctx->pc = 0x153F60u;
            goto label_153f60;
        }
    }
    ctx->pc = 0x153F54u;
    // 0x153f54: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x153F54u;
    SET_GPR_U32(ctx, 31, 0x153F5Cu);
    ctx->pc = 0x153F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F54u;
    // 0x153f58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x153F54u, 0x153F5Cu)) {
        return;
    }
    ctx->pc = 0x153F5Cu;
label_153f5c:
    // 0x153f5c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x153f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_153f60:
    // 0x153f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f64: 0x3e00008  jr          $ra
    ctx->pc = 0x153F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F64u;
        // 0x153f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F6Cu;
    // 0x153f6c: 0x0  nop
    ctx->pc = 0x153f6cu;
    // NOP
    ctx->pc = 0x153f70u;
}
