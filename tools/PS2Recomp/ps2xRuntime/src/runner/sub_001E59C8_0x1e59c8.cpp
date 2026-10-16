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

// Function: sub_001E59C8
// Address: 0x1e59c8 - 0x1e5a80
void sub_001E59C8_0x1e59c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E59C8_0x1e59c8");
#endif

    switch (ctx->pc) {
        case 0x1e59fcu: goto label_1e59fc;
        case 0x1e5a0cu: goto label_1e5a0c;
        case 0x1e5a14u: goto label_1e5a14;
        case 0x1e5a1cu: goto label_1e5a1c;
        case 0x1e5a2cu: goto label_1e5a2c;
        case 0x1e5a38u: goto label_1e5a38;
        case 0x1e5a40u: goto label_1e5a40;
        case 0x1e5a48u: goto label_1e5a48;
        case 0x1e5a58u: goto label_1e5a58;
        case 0x1e5a60u: goto label_1e5a60;
        default: break;
    }

    ctx->pc = 0x1e59c8u;

    // 0x1e59c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e59c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e59cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e59ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e59d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e59d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e59d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e59d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e59d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e59dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e59dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e59e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e59e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e59e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59e8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1e59e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1e59ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e59ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59f0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1e59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1e59f4: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E59F4u;
    SET_GPR_U32(ctx, 31, 0x1E59FCu);
    ctx->pc = 0x1E59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E59F4u;
    // 0x1e59f8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E59F4u, 0x1E59FCu)) {
        return;
    }
    ctx->pc = 0x1E59FCu;
label_1e59fc:
    // 0x1e59fc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e5a00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e5a04: 0xc079256  jal         func_1E4958
    ctx->pc = 0x1E5A04u;
    SET_GPR_U32(ctx, 31, 0x1E5A0Cu);
    ctx->pc = 0x1E5A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A04u;
    // 0x1e5a08: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4958u, 0x1E5A04u, 0x1E5A0Cu)) {
        return;
    }
    ctx->pc = 0x1E5A0Cu;
label_1e5a0c:
    // 0x1e5a0c: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E5A0Cu;
    SET_GPR_U32(ctx, 31, 0x1E5A14u);
    ctx->pc = 0x1E5A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A0Cu;
    // 0x1e5a10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E5A0Cu, 0x1E5A14u)) {
        return;
    }
    ctx->pc = 0x1E5A14u;
label_1e5a14:
    // 0x1e5a14: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E5A14u;
    SET_GPR_U32(ctx, 31, 0x1E5A1Cu);
    ctx->pc = 0x1E5A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A14u;
    // 0x1e5a18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E5A14u, 0x1E5A1Cu)) {
        return;
    }
    ctx->pc = 0x1E5A1Cu;
label_1e5a1c:
    // 0x1e5a1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e5a20: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e5a24: 0xc0792b0  jal         func_1E4AC0
    ctx->pc = 0x1E5A24u;
    SET_GPR_U32(ctx, 31, 0x1E5A2Cu);
    ctx->pc = 0x1E5A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A24u;
    // 0x1e5a28: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4AC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4AC0u, 0x1E5A24u, 0x1E5A2Cu)) {
        return;
    }
    ctx->pc = 0x1E5A2Cu;
label_1e5a2c:
    // 0x1e5a2c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e5a30: 0xc079330  jal         func_1E4CC0
    ctx->pc = 0x1E5A30u;
    SET_GPR_U32(ctx, 31, 0x1E5A38u);
    ctx->pc = 0x1E5A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A30u;
    // 0x1e5a34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4CC0u, 0x1E5A30u, 0x1E5A38u)) {
        return;
    }
    ctx->pc = 0x1E5A38u;
label_1e5a38:
    // 0x1e5a38: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E5A38u;
    SET_GPR_U32(ctx, 31, 0x1E5A40u);
    ctx->pc = 0x1E5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A38u;
    // 0x1e5a3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E5A38u, 0x1E5A40u)) {
        return;
    }
    ctx->pc = 0x1E5A40u;
label_1e5a40:
    // 0x1e5a40: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E5A40u;
    SET_GPR_U32(ctx, 31, 0x1E5A48u);
    ctx->pc = 0x1E5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A40u;
    // 0x1e5a44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E5A40u, 0x1E5A48u)) {
        return;
    }
    ctx->pc = 0x1E5A48u;
label_1e5a48:
    // 0x1e5a48: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1e5a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1e5a4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e5a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a50: 0xc079400  jal         func_1E5000
    ctx->pc = 0x1E5A50u;
    SET_GPR_U32(ctx, 31, 0x1E5A58u);
    ctx->pc = 0x1E5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A50u;
    // 0x1e5a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E5000u, 0x1E5A50u, 0x1E5A58u)) {
        return;
    }
    ctx->pc = 0x1E5A58u;
label_1e5a58:
    // 0x1e5a58: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E5A58u;
    SET_GPR_U32(ctx, 31, 0x1E5A60u);
    ctx->pc = 0x1E5A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A58u;
    // 0x1e5a5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E5A58u, 0x1E5A60u)) {
        return;
    }
    ctx->pc = 0x1E5A60u;
label_1e5a60:
    // 0x1e5a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5a68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e5a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5a6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e5a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A74u;
        // 0x1e5a78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5A7Cu;
    // 0x1e5a7c: 0x0  nop
    ctx->pc = 0x1e5a7cu;
    // NOP
    ctx->pc = 0x1e5a80u;
}
