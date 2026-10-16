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

// Function: sub_001D7DD8
// Address: 0x1d7dd8 - 0x1d7e98
void sub_001D7DD8_0x1d7dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7DD8_0x1d7dd8");
#endif

    switch (ctx->pc) {
        case 0x1d7e18u: goto label_1d7e18;
        case 0x1d7e20u: goto label_1d7e20;
        case 0x1d7e28u: goto label_1d7e28;
        case 0x1d7e30u: goto label_1d7e30;
        case 0x1d7e38u: goto label_1d7e38;
        case 0x1d7e40u: goto label_1d7e40;
        case 0x1d7e48u: goto label_1d7e48;
        case 0x1d7e50u: goto label_1d7e50;
        case 0x1d7e58u: goto label_1d7e58;
        case 0x1d7e88u: goto label_1d7e88;
        default: break;
    }

    ctx->pc = 0x1d7dd8u;

    // 0x1d7dd8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d7ddc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7de0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d7de4: 0x8c648900  lw          $a0, -0x7700($v1)
    ctx->pc = 0x1d7de4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F8900u));
    // 0x1d7de8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d7de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d7dec: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1d7decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d7df0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7df4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7DF4u;
    {
        const bool branch_taken_0x1d7df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DF4u;
        // 0x1d7df8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7df4) {
            ctx->pc = 0x1D7E18u;
            goto label_1d7e18;
        }
    }
    ctx->pc = 0x1D7DFCu;
    // 0x1d7dfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7E00u;
    {
        const bool branch_taken_0x1d7e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e00) {
            ctx->pc = 0x1D7E18u;
            goto label_1d7e18;
        }
    }
    ctx->pc = 0x1D7E08u;
    // 0x1d7e08: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d7e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d7e0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e10: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D7E10u;
    SET_GPR_U32(ctx, 31, 0x1D7E18u);
    ctx->pc = 0x1D7E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E10u;
    // 0x1d7e14: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D7E10u, 0x1D7E18u)) {
        return;
    }
    ctx->pc = 0x1D7E18u;
label_1d7e18:
    // 0x1d7e18: 0xc075b02  jal         func_1D6C08
    ctx->pc = 0x1D7E18u;
    SET_GPR_U32(ctx, 31, 0x1D7E20u);
    ctx->pc = 0x1D6C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6C08u, 0x1D7E18u, 0x1D7E20u)) {
        return;
    }
    ctx->pc = 0x1D7E20u;
label_1d7e20:
    // 0x1d7e20: 0xc07c3a2  jal         func_1F0E88
    ctx->pc = 0x1D7E20u;
    SET_GPR_U32(ctx, 31, 0x1D7E28u);
    ctx->pc = 0x1F0E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0E88u, 0x1D7E20u, 0x1D7E28u)) {
        return;
    }
    ctx->pc = 0x1D7E28u;
label_1d7e28:
    // 0x1d7e28: 0xc059cd6  jal         func_167358
    ctx->pc = 0x1D7E28u;
    SET_GPR_U32(ctx, 31, 0x1D7E30u);
    ctx->pc = 0x167358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167358u, 0x1D7E28u, 0x1D7E30u)) {
        return;
    }
    ctx->pc = 0x1D7E30u;
label_1d7e30:
    // 0x1d7e30: 0xc0761f6  jal         func_1D87D8
    ctx->pc = 0x1D7E30u;
    SET_GPR_U32(ctx, 31, 0x1D7E38u);
    ctx->pc = 0x1D87D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D87D8u, 0x1D7E30u, 0x1D7E38u)) {
        return;
    }
    ctx->pc = 0x1D7E38u;
label_1d7e38:
    // 0x1d7e38: 0xc074bac  jal         func_1D2EB0
    ctx->pc = 0x1D7E38u;
    SET_GPR_U32(ctx, 31, 0x1D7E40u);
    ctx->pc = 0x1D7E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E38u;
    // 0x1d7e3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2EB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2EB0u, 0x1D7E38u, 0x1D7E40u)) {
        return;
    }
    ctx->pc = 0x1D7E40u;
label_1d7e40:
    // 0x1d7e40: 0xc085bb0  jal         func_216EC0
    ctx->pc = 0x1D7E40u;
    SET_GPR_U32(ctx, 31, 0x1D7E48u);
    ctx->pc = 0x216EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EC0u, 0x1D7E40u, 0x1D7E48u)) {
        return;
    }
    ctx->pc = 0x1D7E48u;
label_1d7e48:
    // 0x1d7e48: 0xc075db8  jal         func_1D76E0
    ctx->pc = 0x1D7E48u;
    SET_GPR_U32(ctx, 31, 0x1D7E50u);
    ctx->pc = 0x1D76E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D76E0u, 0x1D7E48u, 0x1D7E50u)) {
        return;
    }
    ctx->pc = 0x1D7E50u;
label_1d7e50:
    // 0x1d7e50: 0xc0810ec  jal         func_2043B0
    ctx->pc = 0x1D7E50u;
    SET_GPR_U32(ctx, 31, 0x1D7E58u);
    ctx->pc = 0x2043B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2043B0u, 0x1D7E50u, 0x1D7E58u)) {
        return;
    }
    ctx->pc = 0x1D7E58u;
label_1d7e58:
    // 0x1d7e58: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d7e5c: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d7e60: 0x8c448908  lw          $a0, -0x76F8($v0)
    ctx->pc = 0x1d7e60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F8908u));
    // 0x1d7e64: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7E64u;
    {
        const bool branch_taken_0x1d7e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E64u;
        // 0x1d7e68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e64) {
            ctx->pc = 0x1D7E8Cu;
            goto label_1d7e8c;
        }
    }
    ctx->pc = 0x1D7E6Cu;
    // 0x1d7e6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7E70u;
    {
        const bool branch_taken_0x1d7e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E70u;
        // 0x1d7e74: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e70) {
            ctx->pc = 0x1D7E90u;
            goto label_1d7e90;
        }
    }
    ctx->pc = 0x1D7E78u;
    // 0x1d7e78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d7e7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e80: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D7E80u;
    SET_GPR_U32(ctx, 31, 0x1D7E88u);
    ctx->pc = 0x1D7E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E80u;
    // 0x1d7e84: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D7E80u, 0x1D7E88u)) {
        return;
    }
    ctx->pc = 0x1D7E88u;
label_1d7e88:
    // 0x1d7e88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d7e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7e8c:
    // 0x1d7e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7e90:
    // 0x1d7e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E90u;
        // 0x1d7e94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E98u;
}
