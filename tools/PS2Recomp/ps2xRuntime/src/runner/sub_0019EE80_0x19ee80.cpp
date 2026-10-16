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

// Function: sub_0019EE80
// Address: 0x19ee80 - 0x19eee0
void sub_0019EE80_0x19ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EE80_0x19ee80");
#endif

    switch (ctx->pc) {
        case 0x19eea0u: goto label_19eea0;
        case 0x19eeacu: goto label_19eeac;
        case 0x19eec0u: goto label_19eec0;
        default: break;
    }

    ctx->pc = 0x19ee80u;

    // 0x19ee80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ee84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ee84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ee88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ee8c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19ee90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19ee94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ee98: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19EE98u;
    SET_GPR_U32(ctx, 31, 0x19EEA0u);
    ctx->pc = 0x19EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EE98u;
    // 0x19ee9c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19EE98u, 0x19EEA0u)) {
        return;
    }
    ctx->pc = 0x19EEA0u;
label_19eea0:
    // 0x19eea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19eea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eea4: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19EEA4u;
    SET_GPR_U32(ctx, 31, 0x19EEACu);
    ctx->pc = 0x19EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEA4u;
    // 0x19eea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19EEA4u, 0x19EEACu)) {
        return;
    }
    ctx->pc = 0x19EEACu;
label_19eeac:
    // 0x19eeac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19eeb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19eeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eeb4: 0x2463a6f8  addiu       $v1, $v1, -0x5908
    ctx->pc = 0x19eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944504));
    // 0x19eeb8: 0xc0b6128  jal         func_2D84A0
    ctx->pc = 0x19EEB8u;
    SET_GPR_U32(ctx, 31, 0x19EEC0u);
    ctx->pc = 0x19EEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEB8u;
    // 0x19eebc: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D84A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D84A0u, 0x19EEB8u, 0x19EEC0u)) {
        return;
    }
    ctx->pc = 0x19EEC0u;
label_19eec0:
    // 0x19eec0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19eec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19eec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19eec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eecc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19eeccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19eed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19eed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eed4: 0x3e00008  jr          $ra
    ctx->pc = 0x19EED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED4u;
        // 0x19eed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EEDCu;
    // 0x19eedc: 0x0  nop
    ctx->pc = 0x19eedcu;
    // NOP
    ctx->pc = 0x19eee0u;
}
