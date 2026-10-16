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

// Function: sub_002906C8
// Address: 0x2906c8 - 0x2907f8
void sub_002906C8_0x2906c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002906C8_0x2906c8");
#endif

    switch (ctx->pc) {
        case 0x2906c8u: goto label_2906c8;
        case 0x2906ccu: goto label_2906cc;
        case 0x2906d0u: goto label_2906d0;
        case 0x2906d4u: goto label_2906d4;
        case 0x2906d8u: goto label_2906d8;
        case 0x2906dcu: goto label_2906dc;
        case 0x2906e0u: goto label_2906e0;
        case 0x2906e4u: goto label_2906e4;
        case 0x2906e8u: goto label_2906e8;
        case 0x2906ecu: goto label_2906ec;
        case 0x2906f0u: goto label_2906f0;
        case 0x2906f4u: goto label_2906f4;
        case 0x2906f8u: goto label_2906f8;
        case 0x2906fcu: goto label_2906fc;
        case 0x290700u: goto label_290700;
        case 0x290704u: goto label_290704;
        case 0x290708u: goto label_290708;
        case 0x29070cu: goto label_29070c;
        case 0x290710u: goto label_290710;
        case 0x290714u: goto label_290714;
        case 0x290718u: goto label_290718;
        case 0x29071cu: goto label_29071c;
        case 0x290720u: goto label_290720;
        case 0x290724u: goto label_290724;
        case 0x290728u: goto label_290728;
        case 0x29072cu: goto label_29072c;
        case 0x290730u: goto label_290730;
        case 0x290734u: goto label_290734;
        case 0x290738u: goto label_290738;
        case 0x29073cu: goto label_29073c;
        case 0x290740u: goto label_290740;
        case 0x290744u: goto label_290744;
        case 0x290748u: goto label_290748;
        case 0x29074cu: goto label_29074c;
        case 0x290750u: goto label_290750;
        case 0x290754u: goto label_290754;
        case 0x290758u: goto label_290758;
        case 0x29075cu: goto label_29075c;
        case 0x290760u: goto label_290760;
        case 0x290764u: goto label_290764;
        case 0x290768u: goto label_290768;
        case 0x29076cu: goto label_29076c;
        case 0x290770u: goto label_290770;
        case 0x290774u: goto label_290774;
        case 0x290778u: goto label_290778;
        case 0x29077cu: goto label_29077c;
        case 0x290780u: goto label_290780;
        case 0x290784u: goto label_290784;
        case 0x290788u: goto label_290788;
        case 0x29078cu: goto label_29078c;
        case 0x290790u: goto label_290790;
        case 0x290794u: goto label_290794;
        case 0x290798u: goto label_290798;
        case 0x29079cu: goto label_29079c;
        case 0x2907a0u: goto label_2907a0;
        case 0x2907a4u: goto label_2907a4;
        case 0x2907a8u: goto label_2907a8;
        case 0x2907acu: goto label_2907ac;
        case 0x2907b0u: goto label_2907b0;
        case 0x2907b4u: goto label_2907b4;
        case 0x2907b8u: goto label_2907b8;
        case 0x2907bcu: goto label_2907bc;
        case 0x2907c0u: goto label_2907c0;
        case 0x2907c4u: goto label_2907c4;
        case 0x2907c8u: goto label_2907c8;
        case 0x2907ccu: goto label_2907cc;
        case 0x2907d0u: goto label_2907d0;
        case 0x2907d4u: goto label_2907d4;
        case 0x2907d8u: goto label_2907d8;
        case 0x2907dcu: goto label_2907dc;
        case 0x2907e0u: goto label_2907e0;
        case 0x2907e4u: goto label_2907e4;
        case 0x2907e8u: goto label_2907e8;
        case 0x2907ecu: goto label_2907ec;
        case 0x2907f0u: goto label_2907f0;
        case 0x2907f4u: goto label_2907f4;
        default: break;
    }

    ctx->pc = 0x2906c8u;

label_2906c8:
    // 0x2906c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2906c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2906cc:
    // 0x2906cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2906ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2906d0:
    // 0x2906d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2906d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2906d4:
    // 0x2906d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2906d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2906d8:
    // 0x2906d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2906d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2906dc:
    // 0x2906dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2906dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2906e0:
    // 0x2906e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2906e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2906e4:
    // 0x2906e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2906e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2906e8:
    // 0x2906e8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2906ec:
    // 0x2906ec: 0xc0a3f78  jal         func_28FDE0
label_2906f0:
    if (ctx->pc == 0x2906F0u) {
        ctx->pc = 0x2906F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906ECu;
        // 0x2906f0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906F4u;
        goto label_2906f4;
    }
    ctx->pc = 0x2906ECu;
    SET_GPR_U32(ctx, 31, 0x2906F4u);
    ctx->pc = 0x2906F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2906ECu;
    // 0x2906f0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FDE0u, 0x2906ECu, 0x2906F4u)) {
        return;
    }
    ctx->pc = 0x2906F4u;
label_2906f4:
    // 0x2906f4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2906f8:
    if (ctx->pc == 0x2906F8u) {
        ctx->pc = 0x2906F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906F4u;
        // 0x2906f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906FCu;
        goto label_2906fc;
    }
    ctx->pc = 0x2906F4u;
    {
        const bool branch_taken_0x2906f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906F4u;
        // 0x2906f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906f4) {
            ctx->pc = 0x290780u;
            goto label_290780;
        }
    }
    ctx->pc = 0x2906FCu;
label_2906fc:
    // 0x2906fc: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2906fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_290700:
    // 0x290700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x290700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290704:
    // 0x290704: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_290708:
    if (ctx->pc == 0x290708u) {
        ctx->pc = 0x290708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290704u;
        // 0x290708: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29070Cu;
        goto label_29070c;
    }
    ctx->pc = 0x290704u;
    {
        const bool branch_taken_0x290704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290704u;
        // 0x290708: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290704) {
            ctx->pc = 0x290718u;
            goto label_290718;
        }
    }
    ctx->pc = 0x29070Cu;
label_29070c:
    // 0x29070c: 0x82420001  lb          $v0, 0x1($s2)
    ctx->pc = 0x29070cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_290710:
    // 0x290710: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_290714:
    if (ctx->pc == 0x290714u) {
        ctx->pc = 0x290714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290710u;
        // 0x290714: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290718u;
        goto label_290718;
    }
    ctx->pc = 0x290710u;
    {
        const bool branch_taken_0x290710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290710u;
        // 0x290714: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290710) {
            ctx->pc = 0x290744u;
            goto label_290744;
        }
    }
    ctx->pc = 0x290718u;
label_290718:
    // 0x290718: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x290718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_29071c:
    // 0x29071c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x29071cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_290720:
    // 0x290720: 0x0  nop
    ctx->pc = 0x290720u;
    // NOP
label_290724:
    // 0x290724: 0x0  nop
    ctx->pc = 0x290724u;
    // NOP
label_290728:
    // 0x290728: 0x0  nop
    ctx->pc = 0x290728u;
    // NOP
label_29072c:
    // 0x29072c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_290730:
    if (ctx->pc == 0x290730u) {
        ctx->pc = 0x290730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29072Cu;
        // 0x290730: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290734u;
        goto label_290734;
    }
    ctx->pc = 0x29072Cu;
    {
        const bool branch_taken_0x29072c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29072Cu;
        // 0x290730: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29072c) {
            ctx->pc = 0x290718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290718;
        }
    }
    ctx->pc = 0x290734u;
label_290734:
    // 0x290734: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x290734u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_290738:
    // 0x290738: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_29073c:
    if (ctx->pc == 0x29073Cu) {
        ctx->pc = 0x29073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290738u;
        // 0x29073c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290740u;
        goto label_290740;
    }
    ctx->pc = 0x290738u;
    {
        const bool branch_taken_0x290738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290738) {
            ctx->pc = 0x29073Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290738u;
            // 0x29073c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29071Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29071c;
        }
    }
    ctx->pc = 0x290740u;
label_290740:
    // 0x290740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290744:
    // 0x290744: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x290744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_290748:
    // 0x290748: 0x26110002  addiu       $s1, $s0, 0x2
    ctx->pc = 0x290748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_29074c:
    // 0x29074c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x29074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_290750:
    // 0x290750: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x290750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_290754:
    // 0x290754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290758:
    // 0x290758: 0x40f809  jalr        $v0
label_29075c:
    if (ctx->pc == 0x29075Cu) {
        ctx->pc = 0x29075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290758u;
        // 0x29075c: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290760u;
        goto label_290760;
    }
    ctx->pc = 0x290758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290760u);
        ctx->pc = 0x29075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290758u;
        // 0x29075c: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290758u, 0x290760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290760u;
label_290760:
    // 0x290760: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_290764:
    if (ctx->pc == 0x290764u) {
        ctx->pc = 0x290764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290760u;
        // 0x290764: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290768u;
        goto label_290768;
    }
    ctx->pc = 0x290760u;
    {
        const bool branch_taken_0x290760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290760u;
        // 0x290764: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290760) {
            ctx->pc = 0x2907B8u;
            goto label_2907b8;
        }
    }
    ctx->pc = 0x290768u;
label_290768:
    // 0x290768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x290768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29076c:
    // 0x29076c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290770:
    // 0x290770: 0xc075fdc  jal         func_1D7F70
label_290774:
    if (ctx->pc == 0x290774u) {
        ctx->pc = 0x290774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290770u;
        // 0x290774: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290778u;
        goto label_290778;
    }
    ctx->pc = 0x290770u;
    SET_GPR_U32(ctx, 31, 0x290778u);
    ctx->pc = 0x290774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290770u;
    // 0x290774: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x290770u, 0x290778u)) {
        return;
    }
    ctx->pc = 0x290778u;
label_290778:
    // 0x290778: 0x10000015  b           . + 4 + (0x15 << 2)
label_29077c:
    if (ctx->pc == 0x29077Cu) {
        ctx->pc = 0x29077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290778u;
        // 0x29077c: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290780u;
        goto label_290780;
    }
    ctx->pc = 0x290778u;
    {
        const bool branch_taken_0x290778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290778u;
        // 0x29077c: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290778) {
            ctx->pc = 0x2907D0u;
            goto label_2907d0;
        }
    }
    ctx->pc = 0x290780u;
label_290780:
    // 0x290780: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x290780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_290784:
    // 0x290784: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x290784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_290788:
    // 0x290788: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x290788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_29078c:
    // 0x29078c: 0x40f809  jalr        $v0
label_290790:
    if (ctx->pc == 0x290790u) {
        ctx->pc = 0x290790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29078Cu;
        // 0x290790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290794u;
        goto label_290794;
    }
    ctx->pc = 0x29078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290794u);
        ctx->pc = 0x290790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29078Cu;
        // 0x290790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29078Cu, 0x290794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290794u;
label_290794:
    // 0x290794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290798:
    // 0x290798: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x290798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_29079c:
    // 0x29079c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x29079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_2907a0:
    // 0x2907a0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2907a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2907a4:
    // 0x2907a4: 0x40f809  jalr        $v0
label_2907a8:
    if (ctx->pc == 0x2907A8u) {
        ctx->pc = 0x2907A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907A4u;
        // 0x2907a8: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907ACu;
        goto label_2907ac;
    }
    ctx->pc = 0x2907A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2907ACu);
        ctx->pc = 0x2907A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907A4u;
        // 0x2907a8: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2907A4u, 0x2907ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2907ACu;
label_2907ac:
    // 0x2907ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2907acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2907b0:
    // 0x2907b0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2907b4:
    if (ctx->pc == 0x2907B4u) {
        ctx->pc = 0x2907B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907B0u;
        // 0x2907b4: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907B8u;
        goto label_2907b8;
    }
    ctx->pc = 0x2907B0u;
    {
        const bool branch_taken_0x2907b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2907B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907B0u;
        // 0x2907b4: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907b0) {
            ctx->pc = 0x2907C0u;
            goto label_2907c0;
        }
    }
    ctx->pc = 0x2907B8u;
label_2907b8:
    // 0x2907b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2907bc:
    if (ctx->pc == 0x2907BCu) {
        ctx->pc = 0x2907BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907B8u;
        // 0x2907bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907C0u;
        goto label_2907c0;
    }
    ctx->pc = 0x2907B8u;
    {
        const bool branch_taken_0x2907b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907B8u;
        // 0x2907bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907b8) {
            ctx->pc = 0x2907D4u;
            goto label_2907d4;
        }
    }
    ctx->pc = 0x2907C0u;
label_2907c0:
    // 0x2907c0: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x2907c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2907c4:
    // 0x2907c4: 0x40f809  jalr        $v0
label_2907c8:
    if (ctx->pc == 0x2907C8u) {
        ctx->pc = 0x2907C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907C4u;
        // 0x2907c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907CCu;
        goto label_2907cc;
    }
    ctx->pc = 0x2907C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2907CCu);
        ctx->pc = 0x2907C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907C4u;
        // 0x2907c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2907C4u, 0x2907CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2907CCu;
label_2907cc:
    // 0x2907cc: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x2907ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_2907d0:
    // 0x2907d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2907d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2907d4:
    // 0x2907d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2907d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2907d8:
    // 0x2907d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2907d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2907dc:
    // 0x2907dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2907dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2907e0:
    // 0x2907e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2907e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2907e4:
    // 0x2907e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2907e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2907e8:
    // 0x2907e8: 0x3e00008  jr          $ra
label_2907ec:
    if (ctx->pc == 0x2907ECu) {
        ctx->pc = 0x2907ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907E8u;
        // 0x2907ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907F0u;
        goto label_2907f0;
    }
    ctx->pc = 0x2907E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2907ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907E8u;
        // 0x2907ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2907E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2907F0u;
label_2907f0:
    // 0x2907f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2907f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2907f4:
    // 0x2907f4: 0x0  nop
    ctx->pc = 0x2907f4u;
    // NOP
    ctx->pc = 0x2907f8u;
}
