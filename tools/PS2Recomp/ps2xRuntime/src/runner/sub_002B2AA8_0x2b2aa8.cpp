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

// Function: sub_002B2AA8
// Address: 0x2b2aa8 - 0x2b2af8
void sub_002B2AA8_0x2b2aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2AA8_0x2b2aa8");
#endif

    switch (ctx->pc) {
        case 0x2b2aa8u: goto label_2b2aa8;
        case 0x2b2aacu: goto label_2b2aac;
        case 0x2b2ab0u: goto label_2b2ab0;
        case 0x2b2ab4u: goto label_2b2ab4;
        case 0x2b2ab8u: goto label_2b2ab8;
        case 0x2b2abcu: goto label_2b2abc;
        case 0x2b2ac0u: goto label_2b2ac0;
        case 0x2b2ac4u: goto label_2b2ac4;
        case 0x2b2ac8u: goto label_2b2ac8;
        case 0x2b2accu: goto label_2b2acc;
        case 0x2b2ad0u: goto label_2b2ad0;
        case 0x2b2ad4u: goto label_2b2ad4;
        case 0x2b2ad8u: goto label_2b2ad8;
        case 0x2b2adcu: goto label_2b2adc;
        case 0x2b2ae0u: goto label_2b2ae0;
        case 0x2b2ae4u: goto label_2b2ae4;
        case 0x2b2ae8u: goto label_2b2ae8;
        case 0x2b2aecu: goto label_2b2aec;
        case 0x2b2af0u: goto label_2b2af0;
        case 0x2b2af4u: goto label_2b2af4;
        default: break;
    }

    ctx->pc = 0x2b2aa8u;

label_2b2aa8:
    // 0x2b2aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b2aac:
    // 0x2b2aac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b2aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2b2ab0:
    // 0x2b2ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b2ab4:
    // 0x2b2ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b2ab8:
    // 0x2b2ab8: 0xc0b1460  jal         func_2C5180
label_2b2abc:
    if (ctx->pc == 0x2B2ABCu) {
        ctx->pc = 0x2B2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AB8u;
        // 0x2b2abc: 0x2604037c  addiu       $a0, $s0, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 892));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AC0u;
        goto label_2b2ac0;
    }
    ctx->pc = 0x2B2AB8u;
    SET_GPR_U32(ctx, 31, 0x2B2AC0u);
    ctx->pc = 0x2B2ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AB8u;
    // 0x2b2abc: 0x2604037c  addiu       $a0, $s0, 0x37C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C5180u, 0x2B2AB8u, 0x2B2AC0u)) {
        return;
    }
    ctx->pc = 0x2B2AC0u;
label_2b2ac0:
    // 0x2b2ac0: 0xc0ad2d0  jal         func_2B4B40
label_2b2ac4:
    if (ctx->pc == 0x2B2AC4u) {
        ctx->pc = 0x2B2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AC0u;
        // 0x2b2ac4: 0x8e04040c  lw          $a0, 0x40C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AC8u;
        goto label_2b2ac8;
    }
    ctx->pc = 0x2B2AC0u;
    SET_GPR_U32(ctx, 31, 0x2B2AC8u);
    ctx->pc = 0x2B2AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AC0u;
    // 0x2b2ac4: 0x8e04040c  lw          $a0, 0x40C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1036)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2B2AC0u, 0x2B2AC8u)) {
        return;
    }
    ctx->pc = 0x2B2AC8u;
label_2b2ac8:
    // 0x2b2ac8: 0xc0ad2d0  jal         func_2B4B40
label_2b2acc:
    if (ctx->pc == 0x2B2ACCu) {
        ctx->pc = 0x2B2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AC8u;
        // 0x2b2acc: 0x8e040418  lw          $a0, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AD0u;
        goto label_2b2ad0;
    }
    ctx->pc = 0x2B2AC8u;
    SET_GPR_U32(ctx, 31, 0x2B2AD0u);
    ctx->pc = 0x2B2ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AC8u;
    // 0x2b2acc: 0x8e040418  lw          $a0, 0x418($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2B2AC8u, 0x2B2AD0u)) {
        return;
    }
    ctx->pc = 0x2B2AD0u;
label_2b2ad0:
    // 0x2b2ad0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2b2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2b2ad4:
    // 0x2b2ad4: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2b2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2b2ad8:
    // 0x2b2ad8: 0x40f809  jalr        $v0
label_2b2adc:
    if (ctx->pc == 0x2B2ADCu) {
        ctx->pc = 0x2B2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AD8u;
        // 0x2b2adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AE0u;
        goto label_2b2ae0;
    }
    ctx->pc = 0x2B2AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2AE0u);
        ctx->pc = 0x2B2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AD8u;
        // 0x2b2adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2AD8u, 0x2B2AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2AE0u;
label_2b2ae0:
    // 0x2b2ae0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b2ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2ae4:
    // 0x2b2ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2ae8:
    // 0x2b2ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2aec:
    // 0x2b2aec: 0x3e00008  jr          $ra
label_2b2af0:
    if (ctx->pc == 0x2B2AF0u) {
        ctx->pc = 0x2B2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AECu;
        // 0x2b2af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AF4u;
        goto label_2b2af4;
    }
    ctx->pc = 0x2B2AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AECu;
        // 0x2b2af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2AF4u;
label_2b2af4:
    // 0x2b2af4: 0x0  nop
    ctx->pc = 0x2b2af4u;
    // NOP
    ctx->pc = 0x2b2af8u;
}
