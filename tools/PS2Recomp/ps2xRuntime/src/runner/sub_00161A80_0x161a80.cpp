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

// Function: sub_00161A80
// Address: 0x161a80 - 0x161af0
void sub_00161A80_0x161a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161A80_0x161a80");
#endif

    switch (ctx->pc) {
        case 0x161ab0u: goto label_161ab0;
        case 0x161ac0u: goto label_161ac0;
        case 0x161ad0u: goto label_161ad0;
        case 0x161adcu: goto label_161adc;
        default: break;
    }

    ctx->pc = 0x161a80u;

    // 0x161a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161a84: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x161a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x161a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161a8c: 0x24423640  addiu       $v0, $v0, 0x3640
    ctx->pc = 0x161a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13888));
    // 0x161a90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x161a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x161a94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x161a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161aa0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x161aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x161aa4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x161aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x161aa8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x161AA8u;
    SET_GPR_U32(ctx, 31, 0x161AB0u);
    ctx->pc = 0x161AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161AA8u;
    // 0x161aac: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x161AA8u, 0x161AB0u)) {
        return;
    }
    ctx->pc = 0x161AB0u;
label_161ab0:
    // 0x161ab0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x161ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x161ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ab8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x161AB8u;
    SET_GPR_U32(ctx, 31, 0x161AC0u);
    ctx->pc = 0x161ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161AB8u;
    // 0x161abc: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x161AB8u, 0x161AC0u)) {
        return;
    }
    ctx->pc = 0x161AC0u;
label_161ac0:
    // 0x161ac0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x161ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ac8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x161AC8u;
    SET_GPR_U32(ctx, 31, 0x161AD0u);
    ctx->pc = 0x161ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161AC8u;
    // 0x161acc: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x161AC8u, 0x161AD0u)) {
        return;
    }
    ctx->pc = 0x161AD0u;
label_161ad0:
    // 0x161ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ad4: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x161AD4u;
    SET_GPR_U32(ctx, 31, 0x161ADCu);
    ctx->pc = 0x161AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161AD4u;
    // 0x161ad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x161AD4u, 0x161ADCu)) {
        return;
    }
    ctx->pc = 0x161ADCu;
label_161adc:
    // 0x161adc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x161adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x161AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AE8u;
        // 0x161aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161AF0u;
}
