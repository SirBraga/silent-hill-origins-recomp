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

// Function: sub_001709E8
// Address: 0x1709e8 - 0x170a78
void sub_001709E8_0x1709e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001709E8_0x1709e8");
#endif

    switch (ctx->pc) {
        case 0x170a14u: goto label_170a14;
        case 0x170a2cu: goto label_170a2c;
        case 0x170a44u: goto label_170a44;
        case 0x170a5cu: goto label_170a5c;
        default: break;
    }

    ctx->pc = 0x1709e8u;

    // 0x1709e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1709e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1709ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1709ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1709f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1709f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1709f4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1709f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1709f8: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1709f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1709fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1709fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170a00: 0x26105288  addiu       $s0, $s0, 0x5288
    ctx->pc = 0x170a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21128));
    // 0x170a04: 0x2484f738  addiu       $a0, $a0, -0x8C8
    ctx->pc = 0x170a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965048));
    // 0x170a08: 0x24a55278  addiu       $a1, $a1, 0x5278
    ctx->pc = 0x170a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21112));
    // 0x170a0c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x170A0Cu;
    SET_GPR_U32(ctx, 31, 0x170A14u);
    ctx->pc = 0x170A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A0Cu;
    // 0x170a10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x170A0Cu, 0x170A14u)) {
        return;
    }
    ctx->pc = 0x170A14u;
label_170a14:
    // 0x170a14: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x170a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x170a18: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x170a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x170a1c: 0x2484f740  addiu       $a0, $a0, -0x8C0
    ctx->pc = 0x170a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965056));
    // 0x170a20: 0x24a55290  addiu       $a1, $a1, 0x5290
    ctx->pc = 0x170a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21136));
    // 0x170a24: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x170A24u;
    SET_GPR_U32(ctx, 31, 0x170A2Cu);
    ctx->pc = 0x170A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A24u;
    // 0x170a28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x170A24u, 0x170A2Cu)) {
        return;
    }
    ctx->pc = 0x170A2Cu;
label_170a2c:
    // 0x170a2c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x170a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x170a30: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x170a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x170a34: 0x2484f748  addiu       $a0, $a0, -0x8B8
    ctx->pc = 0x170a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965064));
    // 0x170a38: 0x24a552a0  addiu       $a1, $a1, 0x52A0
    ctx->pc = 0x170a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21152));
    // 0x170a3c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x170A3Cu;
    SET_GPR_U32(ctx, 31, 0x170A44u);
    ctx->pc = 0x170A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A3Cu;
    // 0x170a40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x170A3Cu, 0x170A44u)) {
        return;
    }
    ctx->pc = 0x170A44u;
label_170a44:
    // 0x170a44: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x170a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x170a48: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x170a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x170a4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x170a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a50: 0x2484f750  addiu       $a0, $a0, -0x8B0
    ctx->pc = 0x170a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965072));
    // 0x170a54: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x170A54u;
    SET_GPR_U32(ctx, 31, 0x170A5Cu);
    ctx->pc = 0x170A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A54u;
    // 0x170a58: 0x24a552b0  addiu       $a1, $a1, 0x52B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x170A54u, 0x170A5Cu)) {
        return;
    }
    ctx->pc = 0x170A5Cu;
label_170a5c:
    // 0x170a5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a64: 0x3e00008  jr          $ra
    ctx->pc = 0x170A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A64u;
        // 0x170a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170A6Cu;
    // 0x170a6c: 0x0  nop
    ctx->pc = 0x170a6cu;
    // NOP
    // 0x170a70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x170a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x170a74: 0x0  nop
    ctx->pc = 0x170a74u;
    // NOP
    ctx->pc = 0x170a78u;
}
