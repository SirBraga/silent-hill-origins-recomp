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

// Function: sub_0016AD28
// Address: 0x16ad28 - 0x16ada0
void sub_0016AD28_0x16ad28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AD28_0x16ad28");
#endif

    switch (ctx->pc) {
        case 0x16ad3cu: goto label_16ad3c;
        case 0x16ad5cu: goto label_16ad5c;
        case 0x16ad64u: goto label_16ad64;
        case 0x16ad6cu: goto label_16ad6c;
        case 0x16ad74u: goto label_16ad74;
        case 0x16ad7cu: goto label_16ad7c;
        case 0x16ad84u: goto label_16ad84;
        default: break;
    }

    ctx->pc = 0x16ad28u;

    // 0x16ad28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ad28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ad2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ad30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ad34: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16AD34u;
    SET_GPR_U32(ctx, 31, 0x16AD3Cu);
    ctx->pc = 0x16AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD34u;
    // 0x16ad38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16AD34u, 0x16AD3Cu)) {
        return;
    }
    ctx->pc = 0x16AD3Cu;
label_16ad3c:
    // 0x16ad3c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16ad40: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16ad44: 0x246346b8  addiu       $v1, $v1, 0x46B8
    ctx->pc = 0x16ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18104));
    // 0x16ad48: 0x24424670  addiu       $v0, $v0, 0x4670
    ctx->pc = 0x16ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18032));
    // 0x16ad4c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16ad50: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16ad54: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16AD54u;
    SET_GPR_U32(ctx, 31, 0x16AD5Cu);
    ctx->pc = 0x16AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD54u;
    // 0x16ad58: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16AD54u, 0x16AD5Cu)) {
        return;
    }
    ctx->pc = 0x16AD5Cu;
label_16ad5c:
    // 0x16ad5c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16AD5Cu;
    SET_GPR_U32(ctx, 31, 0x16AD64u);
    ctx->pc = 0x16AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD5Cu;
    // 0x16ad60: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16AD5Cu, 0x16AD64u)) {
        return;
    }
    ctx->pc = 0x16AD64u;
label_16ad64:
    // 0x16ad64: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16AD64u;
    SET_GPR_U32(ctx, 31, 0x16AD6Cu);
    ctx->pc = 0x16AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD64u;
    // 0x16ad68: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16AD64u, 0x16AD6Cu)) {
        return;
    }
    ctx->pc = 0x16AD6Cu;
label_16ad6c:
    // 0x16ad6c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16AD6Cu;
    SET_GPR_U32(ctx, 31, 0x16AD74u);
    ctx->pc = 0x16AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD6Cu;
    // 0x16ad70: 0x2604005c  addiu       $a0, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16AD6Cu, 0x16AD74u)) {
        return;
    }
    ctx->pc = 0x16AD74u;
label_16ad74:
    // 0x16ad74: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16AD74u;
    SET_GPR_U32(ctx, 31, 0x16AD7Cu);
    ctx->pc = 0x16AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD74u;
    // 0x16ad78: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16AD74u, 0x16AD7Cu)) {
        return;
    }
    ctx->pc = 0x16AD7Cu;
label_16ad7c:
    // 0x16ad7c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16AD7Cu;
    SET_GPR_U32(ctx, 31, 0x16AD84u);
    ctx->pc = 0x16AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD7Cu;
    // 0x16ad80: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16AD7Cu, 0x16AD84u)) {
        return;
    }
    ctx->pc = 0x16AD84u;
label_16ad84:
    // 0x16ad84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ad84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad88: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x16ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x16ad8c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x16ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x16ad90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ad90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ad94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ad94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x16AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD98u;
        // 0x16ad9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ADA0u;
}
