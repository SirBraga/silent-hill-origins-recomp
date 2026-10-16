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

// Function: sub_00263740
// Address: 0x263740 - 0x2637c8
void sub_00263740_0x263740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263740_0x263740");
#endif

    switch (ctx->pc) {
        case 0x263750u: goto label_263750;
        case 0x263778u: goto label_263778;
        case 0x263794u: goto label_263794;
        case 0x2637a0u: goto label_2637a0;
        case 0x2637b0u: goto label_2637b0;
        default: break;
    }

    ctx->pc = 0x263740u;

    // 0x263740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263748: 0xc09945a  jal         func_265168
    ctx->pc = 0x263748u;
    SET_GPR_U32(ctx, 31, 0x263750u);
    ctx->pc = 0x26374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263748u;
    // 0x26374c: 0x24041003  addiu       $a0, $zero, 0x1003 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x263748u, 0x263750u)) {
        return;
    }
    ctx->pc = 0x263750u;
label_263750:
    // 0x263750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263754: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x263754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x263758: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x263758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x26375c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x26375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x263760: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x263760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x263764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263768: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x263768u;
    {
        const bool branch_taken_0x263768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263768u;
        // 0x26376c: 0xac640058  sw          $a0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263768) {
            ctx->pc = 0x2637A8u;
            goto label_2637a8;
        }
    }
    ctx->pc = 0x263770u;
    // 0x263770: 0xc098dc8  jal         func_263720
    ctx->pc = 0x263770u;
    SET_GPR_U32(ctx, 31, 0x263778u);
    ctx->pc = 0x263720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263720u, 0x263770u, 0x263778u)) {
        return;
    }
    ctx->pc = 0x263778u;
label_263778:
    // 0x263778: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26377c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x26377cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x263780: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x263780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x263784: 0x24a5b868  addiu       $a1, $a1, -0x4798
    ctx->pc = 0x263784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
    // 0x263788: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x263788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x26378c: 0xc092848  jal         func_24A120
    ctx->pc = 0x26378Cu;
    SET_GPR_U32(ctx, 31, 0x263794u);
    ctx->pc = 0x263790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26378Cu;
    // 0x263790: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x26378Cu, 0x263794u)) {
        return;
    }
    ctx->pc = 0x263794u;
label_263794:
    // 0x263794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x263794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263798: 0xc09281a  jal         func_24A068
    ctx->pc = 0x263798u;
    SET_GPR_U32(ctx, 31, 0x2637A0u);
    ctx->pc = 0x26379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263798u;
    // 0x26379c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x263798u, 0x2637A0u)) {
        return;
    }
    ctx->pc = 0x2637A0u;
label_2637a0:
    // 0x2637a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2637A0u;
    {
        const bool branch_taken_0x2637a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2637A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637A0u;
        // 0x2637a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637a0) {
            ctx->pc = 0x2637B8u;
            goto label_2637b8;
        }
    }
    ctx->pc = 0x2637A8u;
label_2637a8:
    // 0x2637a8: 0xc097b8a  jal         func_25EE28
    ctx->pc = 0x2637A8u;
    SET_GPR_U32(ctx, 31, 0x2637B0u);
    ctx->pc = 0x25EE28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EE28u, 0x2637A8u, 0x2637B0u)) {
        return;
    }
    ctx->pc = 0x2637B0u;
label_2637b0:
    // 0x2637b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2637b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2637b4: 0x0  nop
    ctx->pc = 0x2637b4u;
    // NOP
label_2637b8:
    // 0x2637b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2637b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2637bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2637BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2637C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637BCu;
        // 0x2637c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2637BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2637C4u;
    // 0x2637c4: 0x0  nop
    ctx->pc = 0x2637c4u;
    // NOP
    ctx->pc = 0x2637c8u;
}
