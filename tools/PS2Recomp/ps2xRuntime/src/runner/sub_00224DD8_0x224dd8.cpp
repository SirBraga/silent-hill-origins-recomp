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

// Function: sub_00224DD8
// Address: 0x224dd8 - 0x224e68
void sub_00224DD8_0x224dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224DD8_0x224dd8");
#endif

    switch (ctx->pc) {
        case 0x224e18u: goto label_224e18;
        default: break;
    }

    ctx->pc = 0x224dd8u;

    // 0x224dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224ddc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x224ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x224de0: 0xac253e80  sw          $a1, 0x3E80($at)
    ctx->pc = 0x224de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E80u, _value); } while (0);
    // 0x224de4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224de8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x224de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x224dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224df0: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x224df0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x224df4: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x224df4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C02D0u));
    // 0x224df8: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x224df8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x224dfc: 0x8f858394  lw          $a1, -0x7C6C($gp)
    ctx->pc = 0x224dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935444)));
    // 0x224e00: 0x25082d58  addiu       $t0, $t0, 0x2D58
    ctx->pc = 0x224e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11608));
    // 0x224e04: 0x8f878398  lw          $a3, -0x7C68($gp)
    ctx->pc = 0x224e04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935448)));
    // 0x224e08: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x224e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x224e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224e10: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x224E10u;
    SET_GPR_U32(ctx, 31, 0x224E18u);
    ctx->pc = 0x224E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E10u;
    // 0x224e14: 0x35290005  ori         $t1, $t1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x224E10u, 0x224E18u)) {
        return;
    }
    ctx->pc = 0x224E18u;
label_224e18:
    // 0x224e18: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x224e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x224e1c: 0x8c843e80  lw          $a0, 0x3E80($a0)
    ctx->pc = 0x224e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3E80u));
    // 0x224e20: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x224e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x224e24: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x224e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x224e28: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x224e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x224e2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x224E2Cu;
    {
        const bool branch_taken_0x224e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E2Cu;
        // 0x224e30: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e2c) {
            ctx->pc = 0x224E50u;
            goto label_224e50;
        }
    }
    ctx->pc = 0x224E34u;
    // 0x224e34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x224e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x224e38: 0x8c633e84  lw          $v1, 0x3E84($v1)
    ctx->pc = 0x224e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E84u));
    // 0x224e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x224e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224e40: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x224e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x224e44: 0xac233e84  sw          $v1, 0x3E84($at)
    ctx->pc = 0x224e44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3E84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E84u, _value); } while (0);
    // 0x224e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x224E48u;
    {
        const bool branch_taken_0x224e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E48u;
        // 0x224e4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e48) {
            ctx->pc = 0x224E54u;
            goto label_224e54;
        }
    }
    ctx->pc = 0x224E50u;
label_224e50:
    // 0x224e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224e54:
    // 0x224e54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x224E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E5Cu;
        // 0x224e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224E64u;
    // 0x224e64: 0x0  nop
    ctx->pc = 0x224e64u;
    // NOP
    ctx->pc = 0x224e68u;
}
