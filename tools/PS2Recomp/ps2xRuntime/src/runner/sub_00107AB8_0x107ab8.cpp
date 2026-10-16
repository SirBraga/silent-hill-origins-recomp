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

// Function: sub_00107AB8
// Address: 0x107ab8 - 0x107b18
void sub_00107AB8_0x107ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107AB8_0x107ab8");
#endif

    switch (ctx->pc) {
        case 0x107aecu: goto label_107aec;
        case 0x107b00u: goto label_107b00;
        default: break;
    }

    ctx->pc = 0x107ab8u;

    // 0x107ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107abc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x107abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x107ac0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x107ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x107ac4: 0x24429bb0  addiu       $v0, $v0, -0x6450
    ctx->pc = 0x107ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941616));
    // 0x107ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x107acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107ad4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x107ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x107ad8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x107ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x107adc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107ADCu;
    {
        const bool branch_taken_0x107adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ADCu;
        // 0x107ae0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107adc) {
            ctx->pc = 0x107AECu;
            goto label_107aec;
        }
    }
    ctx->pc = 0x107AE4u;
    // 0x107ae4: 0xc07b542  jal         func_1ED508
    ctx->pc = 0x107AE4u;
    SET_GPR_U32(ctx, 31, 0x107AECu);
    ctx->pc = 0x107AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107AE4u;
    // 0x107ae8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED508u, 0x107AE4u, 0x107AECu)) {
        return;
    }
    ctx->pc = 0x107AECu;
label_107aec:
    // 0x107aec: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x107aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x107af0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x107AF0u;
    {
        const bool branch_taken_0x107af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107af0) {
            ctx->pc = 0x107AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107AF0u;
            // 0x107af4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B04u;
            goto label_107b04;
        }
    }
    ctx->pc = 0x107AF8u;
    // 0x107af8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x107AF8u;
    SET_GPR_U32(ctx, 31, 0x107B00u);
    ctx->pc = 0x107AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107AF8u;
    // 0x107afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x107AF8u, 0x107B00u)) {
        return;
    }
    ctx->pc = 0x107B00u;
label_107b00:
    // 0x107b00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x107b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_107b04:
    // 0x107b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x107B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B0Cu;
        // 0x107b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107B14u;
    // 0x107b14: 0x0  nop
    ctx->pc = 0x107b14u;
    // NOP
    ctx->pc = 0x107b18u;
}
