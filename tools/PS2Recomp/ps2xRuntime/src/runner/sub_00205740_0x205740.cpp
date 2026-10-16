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

// Function: sub_00205740
// Address: 0x205740 - 0x205870
void sub_00205740_0x205740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205740_0x205740");
#endif

    switch (ctx->pc) {
        case 0x205770u: goto label_205770;
        case 0x205788u: goto label_205788;
        case 0x2057e4u: goto label_2057e4;
        case 0x205804u: goto label_205804;
        case 0x20580cu: goto label_20580c;
        case 0x205814u: goto label_205814;
        case 0x20581cu: goto label_20581c;
        case 0x205830u: goto label_205830;
        default: break;
    }

    ctx->pc = 0x205740u;

    // 0x205740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x205740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x205744: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x205744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x205748: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x205748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x20574c: 0x24423eb8  addiu       $v0, $v0, 0x3EB8
    ctx->pc = 0x20574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16056));
    // 0x205750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205754: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x205754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x205758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20575c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205760: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x205760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205764: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x205764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x205768: 0xc0815b2  jal         func_2056C8
    ctx->pc = 0x205768u;
    SET_GPR_U32(ctx, 31, 0x205770u);
    ctx->pc = 0x20576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205768u;
    // 0x20576c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205768u, 0x205770u)) {
        return;
    }
    ctx->pc = 0x205770u;
label_205770:
    // 0x205770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x205770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205774: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x205778: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x205778u;
    {
        const bool branch_taken_0x205778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205778) {
            ctx->pc = 0x20577Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205778u;
            // 0x20577c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2057A4u;
            goto label_2057a4;
        }
    }
    ctx->pc = 0x205780u;
    // 0x205780: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x205780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205784: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205788:
    // 0x205788: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x205788u;
    {
        const bool branch_taken_0x205788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x205788) {
            ctx->pc = 0x2057A4u;
            goto label_2057a4;
        }
    }
    ctx->pc = 0x205790u;
    // 0x205790: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x205790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x205794: 0x0  nop
    ctx->pc = 0x205794u;
    // NOP
    // 0x205798: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x205798u;
    {
        const bool branch_taken_0x205798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x205798) {
            ctx->pc = 0x20579Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205798u;
            // 0x20579c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205788;
        }
    }
    ctx->pc = 0x2057A0u;
    // 0x2057a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2057a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2057a4:
    // 0x2057a4: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2057A4u;
    {
        const bool branch_taken_0x2057a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057a4) {
            ctx->pc = 0x2057A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2057A4u;
            // 0x2057a8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2057F4u;
            goto label_2057f4;
        }
    }
    ctx->pc = 0x2057ACu;
    // 0x2057ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2057b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2057B0u;
    {
        const bool branch_taken_0x2057b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2057B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B0u;
        // 0x2057b4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057b0) {
            ctx->pc = 0x2057C0u;
            goto label_2057c0;
        }
    }
    ctx->pc = 0x2057B8u;
    // 0x2057b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2057B8u;
    {
        const bool branch_taken_0x2057b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B8u;
        // 0x2057bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057b8) {
            ctx->pc = 0x2057C4u;
            goto label_2057c4;
        }
    }
    ctx->pc = 0x2057C0u;
label_2057c0:
    // 0x2057c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2057c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2057c4:
    // 0x2057c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2057c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2057c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2057C8u;
    {
        const bool branch_taken_0x2057c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2057CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057C8u;
        // 0x2057cc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057c8) {
            ctx->pc = 0x2057D8u;
            goto label_2057d8;
        }
    }
    ctx->pc = 0x2057D0u;
    // 0x2057d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2057D0u;
    {
        const bool branch_taken_0x2057d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057D0u;
        // 0x2057d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057d0) {
            ctx->pc = 0x2057DCu;
            goto label_2057dc;
        }
    }
    ctx->pc = 0x2057D8u;
label_2057d8:
    // 0x2057d8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2057d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2057dc:
    // 0x2057dc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2057DCu;
    SET_GPR_U32(ctx, 31, 0x2057E4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2057DCu, 0x2057E4u)) {
        return;
    }
    ctx->pc = 0x2057E4u;
label_2057e4:
    // 0x2057e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2057e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2057e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2057e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2057ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2057ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2057f0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2057f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2057f4:
    // 0x2057f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2057F4u;
    {
        const bool branch_taken_0x2057f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057f4) {
            ctx->pc = 0x205804u;
            goto label_205804;
        }
    }
    ctx->pc = 0x2057FCu;
    // 0x2057fc: 0xc09366a  jal         func_24D9A8
    ctx->pc = 0x2057FCu;
    SET_GPR_U32(ctx, 31, 0x205804u);
    ctx->pc = 0x205800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2057FCu;
    // 0x205800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x2057FCu, 0x205804u)) {
        return;
    }
    ctx->pc = 0x205804u;
label_205804:
    // 0x205804: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x205804u;
    SET_GPR_U32(ctx, 31, 0x20580Cu);
    ctx->pc = 0x205808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205804u;
    // 0x205808: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x205804u, 0x20580Cu)) {
        return;
    }
    ctx->pc = 0x20580Cu;
label_20580c:
    // 0x20580c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x20580Cu;
    SET_GPR_U32(ctx, 31, 0x205814u);
    ctx->pc = 0x205810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20580Cu;
    // 0x205810: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x20580Cu, 0x205814u)) {
        return;
    }
    ctx->pc = 0x205814u;
label_205814:
    // 0x205814: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x205814u;
    SET_GPR_U32(ctx, 31, 0x20581Cu);
    ctx->pc = 0x205818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205814u;
    // 0x205818: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x205814u, 0x20581Cu)) {
        return;
    }
    ctx->pc = 0x20581Cu;
label_20581c:
    // 0x20581c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x20581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x205820: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x205820u;
    {
        const bool branch_taken_0x205820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205820) {
            ctx->pc = 0x205824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205820u;
            // 0x205824: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205834u;
            goto label_205834;
        }
    }
    ctx->pc = 0x205828u;
    // 0x205828: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x205828u;
    SET_GPR_U32(ctx, 31, 0x205830u);
    ctx->pc = 0x20582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205828u;
    // 0x20582c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x205828u, 0x205830u)) {
        return;
    }
    ctx->pc = 0x205830u;
label_205830:
    // 0x205830: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x205830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_205834:
    // 0x205834: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x205834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205838: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x205838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20583c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205840: 0x3e00008  jr          $ra
    ctx->pc = 0x205840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205840u;
        // 0x205844: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205848u;
    // 0x205848: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x205848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20584c: 0x0  nop
    ctx->pc = 0x20584cu;
    // NOP
    // 0x205850: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x205850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x205854: 0x0  nop
    ctx->pc = 0x205854u;
    // NOP
    // 0x205858: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x205858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20585c: 0x0  nop
    ctx->pc = 0x20585cu;
    // NOP
    // 0x205860: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x205860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x205864: 0x0  nop
    ctx->pc = 0x205864u;
    // NOP
    // 0x205868: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x205868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20586c: 0x0  nop
    ctx->pc = 0x20586cu;
    // NOP
    ctx->pc = 0x205870u;
}
