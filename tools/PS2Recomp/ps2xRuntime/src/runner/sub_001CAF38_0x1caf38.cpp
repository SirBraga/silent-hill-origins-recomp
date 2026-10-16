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

// Function: sub_001CAF38
// Address: 0x1caf38 - 0x1cafb8
void sub_001CAF38_0x1caf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAF38_0x1caf38");
#endif

    switch (ctx->pc) {
        case 0x1caf54u: goto label_1caf54;
        case 0x1caf68u: goto label_1caf68;
        case 0x1cafa0u: goto label_1cafa0;
        default: break;
    }

    ctx->pc = 0x1caf38u;

    // 0x1caf38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1caf3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1caf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1caf40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1caf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1caf44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1caf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1caf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1caf4c: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1CAF4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF54u);
    ctx->pc = 0x1CAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF4Cu;
    // 0x1caf50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1CAF4Cu, 0x1CAF54u)) {
        return;
    }
    ctx->pc = 0x1CAF54u;
label_1caf54:
    // 0x1caf54: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x1caf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1caf58: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CAF58u;
    {
        const bool branch_taken_0x1caf58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf58) {
            ctx->pc = 0x1CAF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAF58u;
            // 0x1caf5c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF90u;
            goto label_1caf90;
        }
    }
    ctx->pc = 0x1CAF60u;
    // 0x1caf60: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CAF60u;
    SET_GPR_U32(ctx, 31, 0x1CAF68u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CAF60u, 0x1CAF68u)) {
        return;
    }
    ctx->pc = 0x1CAF68u;
label_1caf68:
    // 0x1caf68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1caf68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf6c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAF6Cu;
    {
        const bool branch_taken_0x1caf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF6Cu;
        // 0x1caf70: 0xae030278  sw          $v1, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf6c) {
            ctx->pc = 0x1CAF8Cu;
            goto label_1caf8c;
        }
    }
    ctx->pc = 0x1CAF74u;
    // 0x1caf74: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF74u;
    {
        const bool branch_taken_0x1caf74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF74u;
        // 0x1caf78: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf74) {
            ctx->pc = 0x1CAF84u;
            goto label_1caf84;
        }
    }
    ctx->pc = 0x1CAF7Cu;
    // 0x1caf7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAF7Cu;
    {
        const bool branch_taken_0x1caf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF7Cu;
        // 0x1caf80: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf7c) {
            ctx->pc = 0x1CAF88u;
            goto label_1caf88;
        }
    }
    ctx->pc = 0x1CAF84u;
label_1caf84:
    // 0x1caf84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1caf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1caf88:
    // 0x1caf88: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1caf88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1caf8c:
    // 0x1caf8c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1caf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1caf90:
    // 0x1caf90: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAF90u;
    {
        const bool branch_taken_0x1caf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF90u;
        // 0x1caf94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf90) {
            ctx->pc = 0x1CAFA4u;
            goto label_1cafa4;
        }
    }
    ctx->pc = 0x1CAF98u;
    // 0x1caf98: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1CAF98u;
    SET_GPR_U32(ctx, 31, 0x1CAFA0u);
    ctx->pc = 0x1CAF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF98u;
    // 0x1caf9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1CAF98u, 0x1CAFA0u)) {
        return;
    }
    ctx->pc = 0x1CAFA0u;
label_1cafa0:
    // 0x1cafa0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cafa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cafa4:
    // 0x1cafa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cafa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cafa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cafa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cafac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFACu;
        // 0x1cafb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAFB4u;
    // 0x1cafb4: 0x0  nop
    ctx->pc = 0x1cafb4u;
    // NOP
    ctx->pc = 0x1cafb8u;
}
