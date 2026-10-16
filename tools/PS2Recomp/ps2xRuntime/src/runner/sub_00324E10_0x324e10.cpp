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

// Function: sub_00324E10
// Address: 0x324e10 - 0x324e88
void sub_00324E10_0x324e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324E10_0x324e10");
#endif

    switch (ctx->pc) {
        case 0x324e50u: goto label_324e50;
        case 0x324e68u: goto label_324e68;
        default: break;
    }

    ctx->pc = 0x324e10u;

    // 0x324e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x324e14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x324e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324e18: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x324e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x324e1c: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x324e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x324e20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x324e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x324e24: 0x8e0275e8  lw          $v0, 0x75E8($s0)
    ctx->pc = 0x324e24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6875E8u));
    // 0x324e28: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x324E28u;
    {
        const bool branch_taken_0x324e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x324E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E28u;
        // 0x324e2c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e28) {
            ctx->pc = 0x324E74u;
            goto label_324e74;
        }
    }
    ctx->pc = 0x324E30u;
    // 0x324e30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x324e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x324e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x324e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324e38: 0x24422790  addiu       $v0, $v0, 0x2790
    ctx->pc = 0x324e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10128));
    // 0x324e3c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x324e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x324e40: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x324e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x324e44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x324e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e48: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x324E48u;
    SET_GPR_U32(ctx, 31, 0x324E50u);
    ctx->pc = 0x324E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E48u;
    // 0x324e4c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x324E48u, 0x324E50u)) {
        return;
    }
    ctx->pc = 0x324E50u;
label_324e50:
    // 0x324e50: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x324e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x324e54: 0xae0275e8  sw          $v0, 0x75E8($s0)
    ctx->pc = 0x324e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30184), GPR_U32(ctx, 2));
    // 0x324e58: 0x246327a0  addiu       $v1, $v1, 0x27A0
    ctx->pc = 0x324e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10144));
    // 0x324e5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x324e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e60: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x324E60u;
    SET_GPR_U32(ctx, 31, 0x324E68u);
    ctx->pc = 0x324E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E60u;
    // 0x324e64: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x324E60u, 0x324E68u)) {
        return;
    }
    ctx->pc = 0x324E68u;
label_324e68:
    // 0x324e68: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x324e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x324e6c: 0xac6275ec  sw          $v0, 0x75EC($v1)
    ctx->pc = 0x324e6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6875ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6875ECu, _value); } while (0);
    // 0x324e70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x324e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_324e74:
    // 0x324e74: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x324e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324e78: 0x3e00008  jr          $ra
    ctx->pc = 0x324E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E78u;
        // 0x324e7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324E80u;
    // 0x324e80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x324e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324e84: 0x0  nop
    ctx->pc = 0x324e84u;
    // NOP
    ctx->pc = 0x324e88u;
}
