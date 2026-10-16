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

// Function: sub_001586E8
// Address: 0x1586e8 - 0x1587d0
void sub_001586E8_0x1586e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001586E8_0x1586e8");
#endif

    switch (ctx->pc) {
        case 0x158724u: goto label_158724;
        case 0x158738u: goto label_158738;
        case 0x158740u: goto label_158740;
        case 0x158748u: goto label_158748;
        case 0x158760u: goto label_158760;
        case 0x158790u: goto label_158790;
        case 0x1587b4u: goto label_1587b4;
        default: break;
    }

    ctx->pc = 0x1586e8u;

    // 0x1586e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1586e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1586ec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1586ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1586f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1586f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1586f4: 0x24422c30  addiu       $v0, $v0, 0x2C30
    ctx->pc = 0x1586f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11312));
    // 0x1586f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1586f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1586fc: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x1586fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x158700: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x158700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x158704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x158704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158708: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x158708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15870c: 0x263146a0  addiu       $s1, $s1, 0x46A0
    ctx->pc = 0x15870cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18080));
    // 0x158710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158714: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x158714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158718: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x158718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x15871c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15871Cu;
    SET_GPR_U32(ctx, 31, 0x158724u);
    ctx->pc = 0x158720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15871Cu;
    // 0x158720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15871Cu, 0x158724u)) {
        return;
    }
    ctx->pc = 0x158724u;
label_158724:
    // 0x158724: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x158724u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x158728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15872c: 0x261046a8  addiu       $s0, $s0, 0x46A8
    ctx->pc = 0x15872cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18088));
    // 0x158730: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x158730u;
    SET_GPR_U32(ctx, 31, 0x158738u);
    ctx->pc = 0x158734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158730u;
    // 0x158734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x158730u, 0x158738u)) {
        return;
    }
    ctx->pc = 0x158738u;
label_158738:
    // 0x158738: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x158738u;
    SET_GPR_U32(ctx, 31, 0x158740u);
    ctx->pc = 0x15873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158738u;
    // 0x15873c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x158738u, 0x158740u)) {
        return;
    }
    ctx->pc = 0x158740u;
label_158740:
    // 0x158740: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x158740u;
    SET_GPR_U32(ctx, 31, 0x158748u);
    ctx->pc = 0x158744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158740u;
    // 0x158744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x158740u, 0x158748u)) {
        return;
    }
    ctx->pc = 0x158748u;
label_158748:
    // 0x158748: 0x26430710  addiu       $v1, $s2, 0x710
    ctx->pc = 0x158748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1808));
    // 0x15874c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15874Cu;
    {
        const bool branch_taken_0x15874c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15874Cu;
        // 0x158750: 0x26420850  addiu       $v0, $s2, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15874c) {
            ctx->pc = 0x158778u;
            goto label_158778;
        }
    }
    ctx->pc = 0x158754u;
    // 0x158754: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158754u;
    {
        const bool branch_taken_0x158754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158754) {
            ctx->pc = 0x158758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158754u;
            // 0x158758: 0x26430010  addiu       $v1, $s2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15877Cu;
            goto label_15877c;
        }
    }
    ctx->pc = 0x15875Cu;
    // 0x15875c: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x15875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
label_158760:
    // 0x158760: 0x0  nop
    ctx->pc = 0x158760u;
    // NOP
    // 0x158764: 0x0  nop
    ctx->pc = 0x158764u;
    // NOP
    // 0x158768: 0x0  nop
    ctx->pc = 0x158768u;
    // NOP
    // 0x15876c: 0x0  nop
    ctx->pc = 0x15876cu;
    // NOP
    // 0x158770: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x158770u;
    {
        const bool branch_taken_0x158770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x158774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158770u;
        // 0x158774: 0x2442ffb0  addiu       $v0, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158770) {
            ctx->pc = 0x158760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158760;
        }
    }
    ctx->pc = 0x158778u;
label_158778:
    // 0x158778: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x158778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_15877c:
    // 0x15877c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15877Cu;
    {
        const bool branch_taken_0x15877c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15877Cu;
        // 0x158780: 0x26420710  addiu       $v0, $s2, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15877c) {
            ctx->pc = 0x1587A8u;
            goto label_1587a8;
        }
    }
    ctx->pc = 0x158784u;
    // 0x158784: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158784u;
    {
        const bool branch_taken_0x158784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158784) {
            ctx->pc = 0x158788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158784u;
            // 0x158788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1587ACu;
            goto label_1587ac;
        }
    }
    ctx->pc = 0x15878Cu;
    // 0x15878c: 0x2442ff90  addiu       $v0, $v0, -0x70
    ctx->pc = 0x15878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
label_158790:
    // 0x158790: 0x0  nop
    ctx->pc = 0x158790u;
    // NOP
    // 0x158794: 0x0  nop
    ctx->pc = 0x158794u;
    // NOP
    // 0x158798: 0x0  nop
    ctx->pc = 0x158798u;
    // NOP
    // 0x15879c: 0x0  nop
    ctx->pc = 0x15879cu;
    // NOP
    // 0x1587a0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1587A0u;
    {
        const bool branch_taken_0x1587a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1587A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587A0u;
        // 0x1587a4: 0x2442ff90  addiu       $v0, $v0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587a0) {
            ctx->pc = 0x158790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158790;
        }
    }
    ctx->pc = 0x1587A8u;
label_1587a8:
    // 0x1587a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1587a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1587ac:
    // 0x1587ac: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x1587ACu;
    SET_GPR_U32(ctx, 31, 0x1587B4u);
    ctx->pc = 0x1587B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587ACu;
    // 0x1587b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x1587ACu, 0x1587B4u)) {
        return;
    }
    ctx->pc = 0x1587B4u;
label_1587b4:
    // 0x1587b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1587b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1587b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1587b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1587bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1587bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1587c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1587c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1587c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1587c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1587c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1587C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1587CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C8u;
        // 0x1587cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1587C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1587D0u;
}
