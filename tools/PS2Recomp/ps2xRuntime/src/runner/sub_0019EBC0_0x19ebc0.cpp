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

// Function: sub_0019EBC0
// Address: 0x19ebc0 - 0x19ec28
void sub_0019EBC0_0x19ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EBC0_0x19ebc0");
#endif

    switch (ctx->pc) {
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebecu: goto label_19ebec;
        case 0x19ec00u: goto label_19ec00;
        default: break;
    }

    ctx->pc = 0x19ebc0u;

    // 0x19ebc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ebc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ebc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ebcc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19ebd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19ebd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19ebd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ebd8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19EBD8u;
    SET_GPR_U32(ctx, 31, 0x19EBE0u);
    ctx->pc = 0x19EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBD8u;
    // 0x19ebdc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19EBD8u, 0x19EBE0u)) {
        return;
    }
    ctx->pc = 0x19EBE0u;
label_19ebe0:
    // 0x19ebe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ebe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebe4: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19EBE4u;
    SET_GPR_U32(ctx, 31, 0x19EBECu);
    ctx->pc = 0x19EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBE4u;
    // 0x19ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19EBE4u, 0x19EBECu)) {
        return;
    }
    ctx->pc = 0x19EBECu;
label_19ebec:
    // 0x19ebec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19ebf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebf4: 0x2463a608  addiu       $v1, $v1, -0x59F8
    ctx->pc = 0x19ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944264));
    // 0x19ebf8: 0xc0654f2  jal         func_1953C8
    ctx->pc = 0x19EBF8u;
    SET_GPR_U32(ctx, 31, 0x19EC00u);
    ctx->pc = 0x19EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBF8u;
    // 0x19ebfc: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1953C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1953C8u, 0x19EBF8u, 0x19EC00u)) {
        return;
    }
    ctx->pc = 0x19EC00u;
label_19ec00:
    // 0x19ec00: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19ec04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ec04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ec08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ec0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19ec0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ec10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ec14: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC14u;
        // 0x19ec18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EC1Cu;
    // 0x19ec1c: 0x0  nop
    ctx->pc = 0x19ec1cu;
    // NOP
    // 0x19ec20: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19ec24: 0x0  nop
    ctx->pc = 0x19ec24u;
    // NOP
    ctx->pc = 0x19ec28u;
}
