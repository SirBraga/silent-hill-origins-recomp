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

// Function: sub_0019EAD0
// Address: 0x19ead0 - 0x19eb50
void sub_0019EAD0_0x19ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EAD0_0x19ead0");
#endif

    switch (ctx->pc) {
        case 0x19eafcu: goto label_19eafc;
        case 0x19eb0cu: goto label_19eb0c;
        case 0x19eb24u: goto label_19eb24;
        default: break;
    }

    ctx->pc = 0x19ead0u;

    // 0x19ead0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19ead4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ead8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19eadc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19eae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19eae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eae4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x19eae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eae8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19eaec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19eaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19eaf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19eaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19eaf4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19EAF4u;
    SET_GPR_U32(ctx, 31, 0x19EAFCu);
    ctx->pc = 0x19EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAF4u;
    // 0x19eaf8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19EAF4u, 0x19EAFCu)) {
        return;
    }
    ctx->pc = 0x19EAFCu;
label_19eafc:
    // 0x19eafc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19eafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb00: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x19eb00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19eb04: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19EB04u;
    SET_GPR_U32(ctx, 31, 0x19EB0Cu);
    ctx->pc = 0x19EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB04u;
    // 0x19eb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19EB04u, 0x19EB0Cu)) {
        return;
    }
    ctx->pc = 0x19EB0Cu;
label_19eb0c:
    // 0x19eb0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19eb10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19eb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb14: 0x2463a658  addiu       $v1, $v1, -0x59A8
    ctx->pc = 0x19eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944344));
    // 0x19eb18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19eb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb1c: 0xc06536e  jal         func_194DB8
    ctx->pc = 0x19EB1Cu;
    SET_GPR_U32(ctx, 31, 0x19EB24u);
    ctx->pc = 0x19EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB1Cu;
    // 0x19eb20: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x194DB8u, 0x19EB1Cu, 0x19EB24u)) {
        return;
    }
    ctx->pc = 0x19EB24u;
label_19eb24:
    // 0x19eb24: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19eb28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19eb28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19eb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19eb30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19eb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19eb34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19eb34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19eb38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19eb38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eb3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19eb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eb40: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB40u;
        // 0x19eb44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EB48u;
    // 0x19eb48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19eb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19eb4c: 0x0  nop
    ctx->pc = 0x19eb4cu;
    // NOP
    ctx->pc = 0x19eb50u;
}
