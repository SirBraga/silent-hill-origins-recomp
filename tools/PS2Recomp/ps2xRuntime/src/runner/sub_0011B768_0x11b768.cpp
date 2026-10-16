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

// Function: sub_0011B768
// Address: 0x11b768 - 0x11b848
void sub_0011B768_0x11b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B768_0x11b768");
#endif

    switch (ctx->pc) {
        case 0x11b794u: goto label_11b794;
        case 0x11b7a4u: goto label_11b7a4;
        case 0x11b7bcu: goto label_11b7bc;
        case 0x11b7e0u: goto label_11b7e0;
        case 0x11b7fcu: goto label_11b7fc;
        case 0x11b810u: goto label_11b810;
        case 0x11b820u: goto label_11b820;
        case 0x11b830u: goto label_11b830;
        default: break;
    }

    ctx->pc = 0x11b768u;

    // 0x11b768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b76c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11b770: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11b774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b778: 0x14a2002d  bne         $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11B778u;
    {
        const bool branch_taken_0x11b778 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B778u;
        // 0x11b77c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b778) {
            ctx->pc = 0x11B830u;
            goto label_11b830;
        }
    }
    ctx->pc = 0x11B780u;
    // 0x11b780: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x11B780u;
    {
        const bool branch_taken_0x11b780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b780) {
            ctx->pc = 0x11B784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B780u;
            // 0x11b784: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B804u;
            goto label_11b804;
        }
    }
    ctx->pc = 0x11B788u;
    // 0x11b788: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11b788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11b78c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11B78Cu;
    SET_GPR_U32(ctx, 31, 0x11B794u);
    ctx->pc = 0x11B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B78Cu;
    // 0x11b790: 0x24844548  addiu       $a0, $a0, 0x4548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11B78Cu, 0x11B794u)) {
        return;
    }
    ctx->pc = 0x11B794u;
label_11b794:
    // 0x11b794: 0x3c110069  lui         $s1, 0x69
    ctx->pc = 0x11b794u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
    // 0x11b798: 0x2631b138  addiu       $s1, $s1, -0x4EC8
    ctx->pc = 0x11b798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947128));
    // 0x11b79c: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x11B79Cu;
    SET_GPR_U32(ctx, 31, 0x11B7A4u);
    ctx->pc = 0x11B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B79Cu;
    // 0x11b7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x11B79Cu, 0x11B7A4u)) {
        return;
    }
    ctx->pc = 0x11B7A4u;
label_11b7a4:
    // 0x11b7a4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x11b7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x11b7a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x11b7ac: 0x2610b148  addiu       $s0, $s0, -0x4EB8
    ctx->pc = 0x11b7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947144));
    // 0x11b7b0: 0xac624550  sw          $v0, 0x4550($v1)
    ctx->pc = 0x11b7b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4550u, _value); } while (0);
    // 0x11b7b4: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x11B7B4u;
    SET_GPR_U32(ctx, 31, 0x11B7BCu);
    ctx->pc = 0x11B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7B4u;
    // 0x11b7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x11B7B4u, 0x11B7BCu)) {
        return;
    }
    ctx->pc = 0x11B7BCu;
label_11b7bc:
    // 0x11b7bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x11b7c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11b7c4: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11b7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11b7c8: 0x24844558  addiu       $a0, $a0, 0x4558
    ctx->pc = 0x11b7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17752));
    // 0x11b7cc: 0x24c6b890  addiu       $a2, $a2, -0x4770
    ctx->pc = 0x11b7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949008));
    // 0x11b7d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7d4: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x11b7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x11b7d8: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x11B7D8u;
    SET_GPR_U32(ctx, 31, 0x11B7E0u);
    ctx->pc = 0x11B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7D8u;
    // 0x11b7dc: 0xac624554  sw          $v0, 0x4554($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 17748), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x11B7D8u, 0x11B7E0u)) {
        return;
    }
    ctx->pc = 0x11B7E0u;
label_11b7e0:
    // 0x11b7e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11b7e4: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11b7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11b7e8: 0x24844560  addiu       $a0, $a0, 0x4560
    ctx->pc = 0x11b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17760));
    // 0x11b7ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7f0: 0x24c6b848  addiu       $a2, $a2, -0x47B8
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948936));
    // 0x11b7f4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x11B7F4u;
    SET_GPR_U32(ctx, 31, 0x11B7FCu);
    ctx->pc = 0x11B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7F4u;
    // 0x11b7f8: 0x24070098  addiu       $a3, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x11B7F4u, 0x11B7FCu)) {
        return;
    }
    ctx->pc = 0x11B7FCu;
label_11b7fc:
    // 0x11b7fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B7FCu;
    {
        const bool branch_taken_0x11b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7FCu;
        // 0x11b800: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7fc) {
            ctx->pc = 0x11B834u;
            goto label_11b834;
        }
    }
    ctx->pc = 0x11B804u;
label_11b804:
    // 0x11b804: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11b804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b808: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x11B808u;
    SET_GPR_U32(ctx, 31, 0x11B810u);
    ctx->pc = 0x11B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B808u;
    // 0x11b80c: 0x24844560  addiu       $a0, $a0, 0x4560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x11B808u, 0x11B810u)) {
        return;
    }
    ctx->pc = 0x11B810u;
label_11b810:
    // 0x11b810: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11b810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11b814: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b818: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x11B818u;
    SET_GPR_U32(ctx, 31, 0x11B820u);
    ctx->pc = 0x11B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B818u;
    // 0x11b81c: 0x24844558  addiu       $a0, $a0, 0x4558 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x11B818u, 0x11B820u)) {
        return;
    }
    ctx->pc = 0x11B820u;
label_11b820:
    // 0x11b820: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11b820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11b824: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11b824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b828: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11B828u;
    SET_GPR_U32(ctx, 31, 0x11B830u);
    ctx->pc = 0x11B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B828u;
    // 0x11b82c: 0x24844548  addiu       $a0, $a0, 0x4548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11B828u, 0x11B830u)) {
        return;
    }
    ctx->pc = 0x11B830u;
label_11b830:
    // 0x11b830: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11b830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11b834:
    // 0x11b834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b83c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B83Cu;
        // 0x11b840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B844u;
    // 0x11b844: 0x0  nop
    ctx->pc = 0x11b844u;
    // NOP
    ctx->pc = 0x11b848u;
}
