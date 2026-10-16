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

// Function: sub_00326EF8
// Address: 0x326ef8 - 0x326f60
void sub_00326EF8_0x326ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326EF8_0x326ef8");
#endif

    switch (ctx->pc) {
        case 0x326f34u: goto label_326f34;
        case 0x326f44u: goto label_326f44;
        default: break;
    }

    ctx->pc = 0x326ef8u;

    // 0x326ef8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x326ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x326efc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x326efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x326f00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x326f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x326f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x326f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326f08: 0x24422a80  addiu       $v0, $v0, 0x2A80
    ctx->pc = 0x326f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
    // 0x326f0c: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x326f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x326f10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x326f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x326f14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x326f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f18: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x326f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x326f1c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x326f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x326f20: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x326f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x326f24: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x326f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x326f28: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x326f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x326f2c: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x326F2Cu;
    SET_GPR_U32(ctx, 31, 0x326F34u);
    ctx->pc = 0x326F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F2Cu;
    // 0x326f30: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x326F2Cu, 0x326F34u)) {
        return;
    }
    ctx->pc = 0x326F34u;
label_326f34:
    // 0x326f34: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x326f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x326f38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x326f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x326f3c: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x326F3Cu;
    SET_GPR_U32(ctx, 31, 0x326F44u);
    ctx->pc = 0x326F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F3Cu;
    // 0x326f40: 0xac627618  sw          $v0, 0x7618($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 30232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x326F3Cu, 0x326F44u)) {
        return;
    }
    ctx->pc = 0x326F44u;
label_326f44:
    // 0x326f44: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x326f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x326f48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x326f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326f4c: 0xac62761c  sw          $v0, 0x761C($v1)
    ctx->pc = 0x326f4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x68761Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x68761Cu, _value); } while (0);
    // 0x326f50: 0x3e00008  jr          $ra
    ctx->pc = 0x326F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F50u;
        // 0x326f54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326F58u;
    // 0x326f58: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x326f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x326f5c: 0x0  nop
    ctx->pc = 0x326f5cu;
    // NOP
    ctx->pc = 0x326f60u;
}
