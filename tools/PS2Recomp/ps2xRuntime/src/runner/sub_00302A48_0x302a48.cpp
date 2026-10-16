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

// Function: sub_00302A48
// Address: 0x302a48 - 0x302ae0
void sub_00302A48_0x302a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302A48_0x302a48");
#endif

    switch (ctx->pc) {
        case 0x302a60u: goto label_302a60;
        case 0x302a6cu: goto label_302a6c;
        case 0x302a78u: goto label_302a78;
        case 0x302a84u: goto label_302a84;
        case 0x302a90u: goto label_302a90;
        case 0x302a9cu: goto label_302a9c;
        case 0x302aa8u: goto label_302aa8;
        case 0x302ab4u: goto label_302ab4;
        case 0x302ac0u: goto label_302ac0;
        case 0x302accu: goto label_302acc;
        default: break;
    }

    ctx->pc = 0x302a48u;

    // 0x302a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x302a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x302a58: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A58u;
    SET_GPR_U32(ctx, 31, 0x302A60u);
    ctx->pc = 0x302A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A58u;
    // 0x302a5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A58u, 0x302A60u)) {
        return;
    }
    ctx->pc = 0x302A60u;
label_302a60:
    // 0x302a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a64: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A64u;
    SET_GPR_U32(ctx, 31, 0x302A6Cu);
    ctx->pc = 0x302A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A64u;
    // 0x302a68: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A64u, 0x302A6Cu)) {
        return;
    }
    ctx->pc = 0x302A6Cu;
label_302a6c:
    // 0x302a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a70: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A70u;
    SET_GPR_U32(ctx, 31, 0x302A78u);
    ctx->pc = 0x302A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A70u;
    // 0x302a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A70u, 0x302A78u)) {
        return;
    }
    ctx->pc = 0x302A78u;
label_302a78:
    // 0x302a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a7c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A7Cu;
    SET_GPR_U32(ctx, 31, 0x302A84u);
    ctx->pc = 0x302A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A7Cu;
    // 0x302a80: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A7Cu, 0x302A84u)) {
        return;
    }
    ctx->pc = 0x302A84u;
label_302a84:
    // 0x302a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a88: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A88u;
    SET_GPR_U32(ctx, 31, 0x302A90u);
    ctx->pc = 0x302A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A88u;
    // 0x302a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A88u, 0x302A90u)) {
        return;
    }
    ctx->pc = 0x302A90u;
label_302a90:
    // 0x302a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a94: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A94u;
    SET_GPR_U32(ctx, 31, 0x302A9Cu);
    ctx->pc = 0x302A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A94u;
    // 0x302a98: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A94u, 0x302A9Cu)) {
        return;
    }
    ctx->pc = 0x302A9Cu;
label_302a9c:
    // 0x302a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302aa0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302AA0u;
    SET_GPR_U32(ctx, 31, 0x302AA8u);
    ctx->pc = 0x302AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AA0u;
    // 0x302aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302AA0u, 0x302AA8u)) {
        return;
    }
    ctx->pc = 0x302AA8u;
label_302aa8:
    // 0x302aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302aac: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302AACu;
    SET_GPR_U32(ctx, 31, 0x302AB4u);
    ctx->pc = 0x302AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AACu;
    // 0x302ab0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302AACu, 0x302AB4u)) {
        return;
    }
    ctx->pc = 0x302AB4u;
label_302ab4:
    // 0x302ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ab8: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302AB8u;
    SET_GPR_U32(ctx, 31, 0x302AC0u);
    ctx->pc = 0x302ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AB8u;
    // 0x302abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302AB8u, 0x302AC0u)) {
        return;
    }
    ctx->pc = 0x302AC0u;
label_302ac0:
    // 0x302ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ac4: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302AC4u;
    SET_GPR_U32(ctx, 31, 0x302ACCu);
    ctx->pc = 0x302AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AC4u;
    // 0x302ac8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302AC4u, 0x302ACCu)) {
        return;
    }
    ctx->pc = 0x302ACCu;
label_302acc:
    // 0x302acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x302AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AD4u;
        // 0x302ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302ADCu;
    // 0x302adc: 0x0  nop
    ctx->pc = 0x302adcu;
    // NOP
    ctx->pc = 0x302ae0u;
}
