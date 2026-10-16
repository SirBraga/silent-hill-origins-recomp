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

// Function: sub_0019E9F8
// Address: 0x19e9f8 - 0x19ea60
void sub_0019E9F8_0x19e9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E9F8_0x19e9f8");
#endif

    switch (ctx->pc) {
        case 0x19ea18u: goto label_19ea18;
        case 0x19ea24u: goto label_19ea24;
        case 0x19ea38u: goto label_19ea38;
        default: break;
    }

    ctx->pc = 0x19e9f8u;

    // 0x19e9f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e9fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ea00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ea04: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19ea08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19ea0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ea10: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19EA10u;
    SET_GPR_U32(ctx, 31, 0x19EA18u);
    ctx->pc = 0x19EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA10u;
    // 0x19ea14: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19EA10u, 0x19EA18u)) {
        return;
    }
    ctx->pc = 0x19EA18u;
label_19ea18:
    // 0x19ea18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ea18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea1c: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19EA1Cu;
    SET_GPR_U32(ctx, 31, 0x19EA24u);
    ctx->pc = 0x19EA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA1Cu;
    // 0x19ea20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19EA1Cu, 0x19EA24u)) {
        return;
    }
    ctx->pc = 0x19EA24u;
label_19ea24:
    // 0x19ea24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19ea28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea2c: 0x2463a798  addiu       $v1, $v1, -0x5868
    ctx->pc = 0x19ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944664));
    // 0x19ea30: 0xc065a2a  jal         func_1968A8
    ctx->pc = 0x19EA30u;
    SET_GPR_U32(ctx, 31, 0x19EA38u);
    ctx->pc = 0x19EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA30u;
    // 0x19ea34: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1968A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1968A8u, 0x19EA30u, 0x19EA38u)) {
        return;
    }
    ctx->pc = 0x19EA38u;
label_19ea38:
    // 0x19ea38: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19ea3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ea3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ea40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ea44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19ea44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ea48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ea48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ea4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA4Cu;
        // 0x19ea50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EA54u;
    // 0x19ea54: 0x0  nop
    ctx->pc = 0x19ea54u;
    // NOP
    // 0x19ea58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19ea5c: 0x0  nop
    ctx->pc = 0x19ea5cu;
    // NOP
    ctx->pc = 0x19ea60u;
}
