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

// Function: sub_002579B0
// Address: 0x2579b0 - 0x257a40
void sub_002579B0_0x2579b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002579B0_0x2579b0");
#endif

    switch (ctx->pc) {
        case 0x2579f0u: goto label_2579f0;
        default: break;
    }

    ctx->pc = 0x2579b0u;

    // 0x2579b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2579b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2579b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2579b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2579b8: 0xac253fc0  sw          $a1, 0x3FC0($at)
    ctx->pc = 0x2579b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3FC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FC0u, _value); } while (0);
    // 0x2579bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2579bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2579c0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2579c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2579c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2579c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579c8: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x2579c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x2579cc: 0x8c441228  lw          $a0, 0x1228($v0)
    ctx->pc = 0x2579ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C1228u));
    // 0x2579d0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2579d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2579d4: 0x8f8585d4  lw          $a1, -0x7A2C($gp)
    ctx->pc = 0x2579d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
    // 0x2579d8: 0x250842e8  addiu       $t0, $t0, 0x42E8
    ctx->pc = 0x2579d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17128));
    // 0x2579dc: 0x8f8785d8  lw          $a3, -0x7A28($gp)
    ctx->pc = 0x2579dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
    // 0x2579e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2579e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2579e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2579e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2579e8: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x2579E8u;
    SET_GPR_U32(ctx, 31, 0x2579F0u);
    ctx->pc = 0x2579ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2579E8u;
    // 0x2579ec: 0x35290012  ori         $t1, $t1, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x2579E8u, 0x2579F0u)) {
        return;
    }
    ctx->pc = 0x2579F0u;
label_2579f0:
    // 0x2579f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2579f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2579f4: 0x8c843fc0  lw          $a0, 0x3FC0($a0)
    ctx->pc = 0x2579f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3FC0u));
    // 0x2579f8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2579f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2579fc: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2579fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x257a00: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x257a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x257a04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257A04u;
    {
        const bool branch_taken_0x257a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A04u;
        // 0x257a08: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a04) {
            ctx->pc = 0x257A14u;
            goto label_257a14;
        }
    }
    ctx->pc = 0x257A0Cu;
    // 0x257a0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x257A0Cu;
    {
        const bool branch_taken_0x257a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A0Cu;
        // 0x257a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a0c) {
            ctx->pc = 0x257A2Cu;
            goto label_257a2c;
        }
    }
    ctx->pc = 0x257A14u;
label_257a14:
    // 0x257a14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x257a18: 0x8c633fc4  lw          $v1, 0x3FC4($v1)
    ctx->pc = 0x257a18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FC4u));
    // 0x257a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x257a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257a24: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x257a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x257a28: 0xac233fc4  sw          $v1, 0x3FC4($at)
    ctx->pc = 0x257a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FC4u, _value); } while (0);
label_257a2c:
    // 0x257a2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x257a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257a34: 0x3e00008  jr          $ra
    ctx->pc = 0x257A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A34u;
        // 0x257a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257A3Cu;
    // 0x257a3c: 0x0  nop
    ctx->pc = 0x257a3cu;
    // NOP
    ctx->pc = 0x257a40u;
}
