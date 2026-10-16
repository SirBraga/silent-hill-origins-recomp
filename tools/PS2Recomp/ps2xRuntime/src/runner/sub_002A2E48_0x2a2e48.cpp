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

// Function: sub_002A2E48
// Address: 0x2a2e48 - 0x2a2e98
void sub_002A2E48_0x2a2e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2E48_0x2a2e48");
#endif

    switch (ctx->pc) {
        case 0x2a2e5cu: goto label_2a2e5c;
        default: break;
    }

    ctx->pc = 0x2a2e48u;

    // 0x2a2e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2e50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2e54: 0xc0a73d0  jal         func_29CF40
    ctx->pc = 0x2A2E54u;
    SET_GPR_U32(ctx, 31, 0x2A2E5Cu);
    ctx->pc = 0x2A2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E54u;
    // 0x2a2e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CF40u, 0x2A2E54u, 0x2A2E5Cu)) {
        return;
    }
    ctx->pc = 0x2A2E5Cu;
label_2a2e5c:
    // 0x2a2e5c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2E5Cu;
    {
        const bool branch_taken_0x2a2e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e5c) {
            ctx->pc = 0x2A2E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2E5Cu;
            // 0x2a2e60: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2E6Cu;
            goto label_2a2e6c;
        }
    }
    ctx->pc = 0x2A2E64u;
    // 0x2a2e64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2E64u;
    {
        const bool branch_taken_0x2a2e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E64u;
        // 0x2a2e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e64) {
            ctx->pc = 0x2A2E88u;
            goto label_2a2e88;
        }
    }
    ctx->pc = 0x2A2E6Cu;
label_2a2e6c:
    // 0x2a2e6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e70: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2a2e74: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2a2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2a2e78: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2a2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2a2e7c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2a2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2a2e80: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2a2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2a2e84: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2a2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2a2e88:
    // 0x2a2e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E90u;
        // 0x2a2e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2E98u;
}
