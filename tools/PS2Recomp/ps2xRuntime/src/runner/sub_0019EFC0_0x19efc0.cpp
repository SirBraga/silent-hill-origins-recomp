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

// Function: sub_0019EFC0
// Address: 0x19efc0 - 0x19f010
void sub_0019EFC0_0x19efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EFC0_0x19efc0");
#endif

    switch (ctx->pc) {
        case 0x19efe4u: goto label_19efe4;
        case 0x19eff4u: goto label_19eff4;
        default: break;
    }

    ctx->pc = 0x19efc0u;

    // 0x19efc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19efc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19efc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19efc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19efcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19efd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19efd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efd4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19efd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19efdc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19EFDCu;
    SET_GPR_U32(ctx, 31, 0x19EFE4u);
    ctx->pc = 0x19EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFDCu;
    // 0x19efe0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19EFDCu, 0x19EFE4u)) {
        return;
    }
    ctx->pc = 0x19EFE4u;
label_19efe4:
    // 0x19efe4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x19efe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19efe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19efe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efec: 0xc06734a  jal         func_19CD28
    ctx->pc = 0x19EFECu;
    SET_GPR_U32(ctx, 31, 0x19EFF4u);
    ctx->pc = 0x19EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFECu;
    // 0x19eff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19CD28u, 0x19EFECu, 0x19EFF4u)) {
        return;
    }
    ctx->pc = 0x19EFF4u;
label_19eff4:
    // 0x19eff4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19eff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19eff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19eff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19effc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19effcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f000: 0x3e00008  jr          $ra
    ctx->pc = 0x19F000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F000u;
        // 0x19f004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F008u;
    // 0x19f008: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f00c: 0x0  nop
    ctx->pc = 0x19f00cu;
    // NOP
    ctx->pc = 0x19f010u;
}
