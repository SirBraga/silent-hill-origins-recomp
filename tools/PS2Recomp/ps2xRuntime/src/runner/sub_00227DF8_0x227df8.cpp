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

// Function: sub_00227DF8
// Address: 0x227df8 - 0x227e98
void sub_00227DF8_0x227df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227DF8_0x227df8");
#endif

    switch (ctx->pc) {
        case 0x227e28u: goto label_227e28;
        case 0x227e38u: goto label_227e38;
        default: break;
    }

    ctx->pc = 0x227df8u;

    // 0x227df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227dfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x227dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x227e00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x227e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227e0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x227e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x227e14: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x227e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x227e18: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227E18u;
    {
        const bool branch_taken_0x227e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227e18) {
            ctx->pc = 0x227E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227E18u;
            // 0x227e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227E30u;
            goto label_227e30;
        }
    }
    ctx->pc = 0x227E20u;
    // 0x227e20: 0xc089ed6  jal         func_227B58
    ctx->pc = 0x227E20u;
    SET_GPR_U32(ctx, 31, 0x227E28u);
    ctx->pc = 0x227B58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227B58u, 0x227E20u, 0x227E28u)) {
        return;
    }
    ctx->pc = 0x227E28u;
label_227e28:
    // 0x227e28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x227E28u;
    {
        const bool branch_taken_0x227e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E28u;
        // 0x227e2c: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e28) {
            ctx->pc = 0x227E3Cu;
            goto label_227e3c;
        }
    }
    ctx->pc = 0x227E30u;
label_227e30:
    // 0x227e30: 0xc089f0c  jal         func_227C30
    ctx->pc = 0x227E30u;
    SET_GPR_U32(ctx, 31, 0x227E38u);
    ctx->pc = 0x227E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E30u;
    // 0x227e34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227C30u, 0x227E30u, 0x227E38u)) {
        return;
    }
    ctx->pc = 0x227E38u;
label_227e38:
    // 0x227e38: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x227e38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_227e3c:
    // 0x227e3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227e40: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x227e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x227e44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x227e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x227e50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x227e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x227e54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x227e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227e5c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x227e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x227e60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x227e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x227e64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x227e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x227e68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x227e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x227E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E6Cu;
        // 0x227e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E74u;
    // 0x227e74: 0x0  nop
    ctx->pc = 0x227e74u;
    // NOP
    // 0x227e78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x227e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x227e7c: 0x0  nop
    ctx->pc = 0x227e7cu;
    // NOP
    // 0x227e80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x227e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x227e84: 0x0  nop
    ctx->pc = 0x227e84u;
    // NOP
    // 0x227e88: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x227e8c: 0x0  nop
    ctx->pc = 0x227e8cu;
    // NOP
    // 0x227e90: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x227e90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x227e94: 0x0  nop
    ctx->pc = 0x227e94u;
    // NOP
    ctx->pc = 0x227e98u;
}
