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

// Function: sub_00248AB0
// Address: 0x248ab0 - 0x248b20
void sub_00248AB0_0x248ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248AB0_0x248ab0");
#endif

    switch (ctx->pc) {
        case 0x248ae0u: goto label_248ae0;
        case 0x248af8u: goto label_248af8;
        default: break;
    }

    ctx->pc = 0x248ab0u;

    // 0x248ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248ab4: 0x8f828518  lw          $v0, -0x7AE8($gp)
    ctx->pc = 0x248ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
    // 0x248ab8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x248ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x248abc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x248ABCu;
    {
        const bool branch_taken_0x248abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248ABCu;
        // 0x248ac0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248abc) {
            ctx->pc = 0x248B00u;
            goto label_248b00;
        }
    }
    ctx->pc = 0x248AC4u;
    // 0x248ac4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x248ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248ac8: 0x8c424190  lw          $v0, 0x4190($v0)
    ctx->pc = 0x248ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4190u));
    // 0x248acc: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x248accu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x248ad0: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x248ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x248ad4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x248ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x248ad8: 0xc093106  jal         func_24C418
    ctx->pc = 0x248AD8u;
    SET_GPR_U32(ctx, 31, 0x248AE0u);
    ctx->pc = 0x248ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248AD8u;
    // 0x248adc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x248AD8u, 0x248AE0u)) {
        return;
    }
    ctx->pc = 0x248AE0u;
label_248ae0:
    // 0x248ae0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248ae4: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x248ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x248ae8: 0x8f84851c  lw          $a0, -0x7AE4($gp)
    ctx->pc = 0x248ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    // 0x248aec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x248aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x248af0: 0xc0925d4  jal         func_249750
    ctx->pc = 0x248AF0u;
    SET_GPR_U32(ctx, 31, 0x248AF8u);
    ctx->pc = 0x248AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248AF0u;
    // 0x248af4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249750u, 0x248AF0u, 0x248AF8u)) {
        return;
    }
    ctx->pc = 0x248AF8u;
label_248af8:
    // 0x248af8: 0xaf80851c  sw          $zero, -0x7AE4($gp)
    ctx->pc = 0x248af8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935836), GPR_U32(ctx, 0));
    // 0x248afc: 0xaf808518  sw          $zero, -0x7AE8($gp)
    ctx->pc = 0x248afcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935832), GPR_U32(ctx, 0));
label_248b00:
    // 0x248b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x248b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x248B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B0Cu;
        // 0x248b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248B14u;
    // 0x248b14: 0x0  nop
    ctx->pc = 0x248b14u;
    // NOP
    // 0x248b18: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x248b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x248b1c: 0x0  nop
    ctx->pc = 0x248b1cu;
    // NOP
    ctx->pc = 0x248b20u;
}
