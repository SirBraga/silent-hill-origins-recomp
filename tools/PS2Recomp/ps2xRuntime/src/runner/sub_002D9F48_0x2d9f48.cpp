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

// Function: sub_002D9F48
// Address: 0x2d9f48 - 0x2d9f98
void sub_002D9F48_0x2d9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9F48_0x2d9f48");
#endif

    switch (ctx->pc) {
        case 0x2d9f7cu: goto label_2d9f7c;
        default: break;
    }

    ctx->pc = 0x2d9f48u;

    // 0x2d9f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9f50: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2d9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d9f54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9F54u;
    {
        const bool branch_taken_0x2d9f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F54u;
        // 0x2d9f58: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f54) {
            ctx->pc = 0x2D9F68u;
            goto label_2d9f68;
        }
    }
    ctx->pc = 0x2D9F5Cu;
    // 0x2d9f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9f60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9F60u;
    {
        const bool branch_taken_0x2d9f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F60u;
        // 0x2d9f64: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f60) {
            ctx->pc = 0x2D9F84u;
            goto label_2d9f84;
        }
    }
    ctx->pc = 0x2D9F68u;
label_2d9f68:
    // 0x2d9f68: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2d9f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2d9f6c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2d9f70: 0x24847bf8  addiu       $a0, $a0, 0x7BF8
    ctx->pc = 0x2d9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31736));
    // 0x2d9f74: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2D9F74u;
    SET_GPR_U32(ctx, 31, 0x2D9F7Cu);
    ctx->pc = 0x2D9F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9F74u;
    // 0x2d9f78: 0x34a5080b  ori         $a1, $a1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2D9F74u, 0x2D9F7Cu)) {
        return;
    }
    ctx->pc = 0x2D9F7Cu;
label_2d9f7c:
    // 0x2d9f7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d9f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f80: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2d9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_2d9f84:
    // 0x2d9f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9f88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d9f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F8Cu;
        // 0x2d9f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9F94u;
    // 0x2d9f94: 0x0  nop
    ctx->pc = 0x2d9f94u;
    // NOP
    ctx->pc = 0x2d9f98u;
}
