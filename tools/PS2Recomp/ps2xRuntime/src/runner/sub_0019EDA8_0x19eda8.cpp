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

// Function: sub_0019EDA8
// Address: 0x19eda8 - 0x19ee10
void sub_0019EDA8_0x19eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EDA8_0x19eda8");
#endif

    switch (ctx->pc) {
        case 0x19edc8u: goto label_19edc8;
        case 0x19edd4u: goto label_19edd4;
        case 0x19ede8u: goto label_19ede8;
        default: break;
    }

    ctx->pc = 0x19eda8u;

    // 0x19eda8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19eda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19edac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19edacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19edb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19edb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19edb4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19edb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19edbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19edbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19edc0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19EDC0u;
    SET_GPR_U32(ctx, 31, 0x19EDC8u);
    ctx->pc = 0x19EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDC0u;
    // 0x19edc4: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19EDC0u, 0x19EDC8u)) {
        return;
    }
    ctx->pc = 0x19EDC8u;
label_19edc8:
    // 0x19edc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19edc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19edcc: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19EDCCu;
    SET_GPR_U32(ctx, 31, 0x19EDD4u);
    ctx->pc = 0x19EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDCCu;
    // 0x19edd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19EDCCu, 0x19EDD4u)) {
        return;
    }
    ctx->pc = 0x19EDD4u;
label_19edd4:
    // 0x19edd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19edd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eddc: 0x2463a748  addiu       $v1, $v1, -0x58B8
    ctx->pc = 0x19eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944584));
    // 0x19ede0: 0xc0a162a  jal         func_2858A8
    ctx->pc = 0x19EDE0u;
    SET_GPR_U32(ctx, 31, 0x19EDE8u);
    ctx->pc = 0x19EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDE0u;
    // 0x19ede4: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2858A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2858A8u, 0x19EDE0u, 0x19EDE8u)) {
        return;
    }
    ctx->pc = 0x19EDE8u;
label_19ede8:
    // 0x19ede8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19edec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19edecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19edf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19edf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19edf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19edf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19edf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19edfc: 0x3e00008  jr          $ra
    ctx->pc = 0x19EDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDFCu;
        // 0x19ee00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE04u;
    // 0x19ee04: 0x0  nop
    ctx->pc = 0x19ee04u;
    // NOP
    // 0x19ee08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ee0c: 0x0  nop
    ctx->pc = 0x19ee0cu;
    // NOP
    ctx->pc = 0x19ee10u;
}
