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

// Function: sub_001FA780
// Address: 0x1fa780 - 0x1fa958
void sub_001FA780_0x1fa780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA780_0x1fa780");
#endif

    switch (ctx->pc) {
        case 0x1fa7b4u: goto label_1fa7b4;
        case 0x1fa7c8u: goto label_1fa7c8;
        case 0x1fa7ecu: goto label_1fa7ec;
        case 0x1fa828u: goto label_1fa828;
        case 0x1fa838u: goto label_1fa838;
        case 0x1fa878u: goto label_1fa878;
        case 0x1fa8b0u: goto label_1fa8b0;
        case 0x1fa8c0u: goto label_1fa8c0;
        case 0x1fa8e4u: goto label_1fa8e4;
        default: break;
    }

    ctx->pc = 0x1fa780u;

    // 0x1fa780: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x1fa780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x1fa784: 0xffb60390  sd          $s6, 0x390($sp)
    ctx->pc = 0x1fa784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 22));
    // 0x1fa788: 0xffb703a0  sd          $s7, 0x3A0($sp)
    ctx->pc = 0x1fa788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 23));
    // 0x1fa78c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1fa78cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa790: 0xffb20350  sd          $s2, 0x350($sp)
    ctx->pc = 0x1fa790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 18));
    // 0x1fa794: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1fa794u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa798: 0xffbf03b0  sd          $ra, 0x3B0($sp)
    ctx->pc = 0x1fa798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 31));
    // 0x1fa79c: 0xffb50380  sd          $s5, 0x380($sp)
    ctx->pc = 0x1fa79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 21));
    // 0x1fa7a0: 0xffb40370  sd          $s4, 0x370($sp)
    ctx->pc = 0x1fa7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 20));
    // 0x1fa7a4: 0xffb30360  sd          $s3, 0x360($sp)
    ctx->pc = 0x1fa7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 19));
    // 0x1fa7a8: 0xffb10340  sd          $s1, 0x340($sp)
    ctx->pc = 0x1fa7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 17));
    // 0x1fa7ac: 0xc07e856  jal         func_1FA158
    ctx->pc = 0x1FA7ACu;
    SET_GPR_U32(ctx, 31, 0x1FA7B4u);
    ctx->pc = 0x1FA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7ACu;
    // 0x1fa7b0: 0xffb00330  sd          $s0, 0x330($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FA158u, 0x1FA7ACu, 0x1FA7B4u)) {
        return;
    }
    ctx->pc = 0x1FA7B4u;
label_1fa7b4:
    // 0x1fa7b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fa7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7b8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA7B8u;
    {
        const bool branch_taken_0x1fa7b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7B8u;
        // 0x1fa7bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7b8) {
            ctx->pc = 0x1FA7D4u;
            goto label_1fa7d4;
        }
    }
    ctx->pc = 0x1FA7C0u;
    // 0x1fa7c0: 0xc07e890  jal         func_1FA240
    ctx->pc = 0x1FA7C0u;
    SET_GPR_U32(ctx, 31, 0x1FA7C8u);
    ctx->pc = 0x1FA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7C0u;
    // 0x1fa7c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FA240u, 0x1FA7C0u, 0x1FA7C8u)) {
        return;
    }
    ctx->pc = 0x1FA7C8u;
label_1fa7c8:
    // 0x1fa7c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7cc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA7CCu;
    {
        const bool branch_taken_0x1fa7cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7CCu;
        // 0x1fa7d0: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7cc) {
            ctx->pc = 0x1FA7DCu;
            goto label_1fa7dc;
        }
    }
    ctx->pc = 0x1FA7D4u;
label_1fa7d4:
    // 0x1fa7d4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1FA7D4u;
    {
        const bool branch_taken_0x1fa7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7D4u;
        // 0x1fa7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7d4) {
            ctx->pc = 0x1FA92Cu;
            goto label_1fa92c;
        }
    }
    ctx->pc = 0x1FA7DCu;
label_1fa7dc:
    // 0x1fa7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fa7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1FA7E4u;
    SET_GPR_U32(ctx, 31, 0x1FA7ECu);
    ctx->pc = 0x1FA7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7E4u;
    // 0x1fa7e8: 0x240602f8  addiu       $a2, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1FA7E4u, 0x1FA7ECu)) {
        return;
    }
    ctx->pc = 0x1FA7ECu;
label_1fa7ec:
    // 0x1fa7ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1fa7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fa7f0: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x1fa7f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa7f4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1fa7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1fa7f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fa7fc: 0xa7a402ba  sh          $a0, 0x2BA($sp)
    ctx->pc = 0x1fa7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 698), (uint16_t)GPR_U32(ctx, 4));
    // 0x1fa800: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1fa800u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1fa804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fa804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa808: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa80c: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x1fa80cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1fa810: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1fa810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fa814: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FA814u;
    {
        const bool branch_taken_0x1fa814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA814u;
        // 0x1fa818: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa814) {
            ctx->pc = 0x1FA850u;
            goto label_1fa850;
        }
    }
    ctx->pc = 0x1FA81Cu;
    // 0x1fa81c: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x1fa81cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1fa820: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1fa824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa828:
    // 0x1fa828: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fa828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa82c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fa82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa830: 0xc07e8d2  jal         func_1FA348
    ctx->pc = 0x1FA830u;
    SET_GPR_U32(ctx, 31, 0x1FA838u);
    ctx->pc = 0x1FA834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA830u;
    // 0x1fa834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FA348u, 0x1FA830u, 0x1FA838u)) {
        return;
    }
    ctx->pc = 0x1FA838u;
label_1fa838:
    // 0x1fa838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa83c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1fa83cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fa840: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FA840u;
    {
        const bool branch_taken_0x1fa840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA840u;
        // 0x1fa844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa840) {
            ctx->pc = 0x1FA828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa828;
        }
    }
    ctx->pc = 0x1FA848u;
    // 0x1fa848: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA848u;
    {
        const bool branch_taken_0x1fa848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA848u;
        // 0x1fa84c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa848) {
            ctx->pc = 0x1FA85Cu;
            goto label_1fa85c;
        }
    }
    ctx->pc = 0x1FA850u;
label_1fa850:
    // 0x1fa850: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x1fa850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1fa854: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x1fa854u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1fa858: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fa858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa85c:
    // 0x1fa85c: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x1fa85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1fa860: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fa860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa864: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA864u;
    {
        const bool branch_taken_0x1fa864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FA868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA864u;
        // 0x1fa868: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa864) {
            ctx->pc = 0x1FA880u;
            goto label_1fa880;
        }
    }
    ctx->pc = 0x1FA86Cu;
    // 0x1fa86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa870: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA870u;
    SET_GPR_U32(ctx, 31, 0x1FA878u);
    ctx->pc = 0x1FA874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA870u;
    // 0x1fa874: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA870u, 0x1FA878u)) {
        return;
    }
    ctx->pc = 0x1FA878u;
label_1fa878:
    // 0x1fa878: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1fa878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1fa87c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fa87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fa880:
    // 0x1fa880: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fa880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fa884: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1fa884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fa888: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fa888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fa88c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1fa88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1fa890: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1fa890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fa894: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA894u;
    {
        const bool branch_taken_0x1fa894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA894u;
        // 0x1fa898: 0xafa50324  sw          $a1, 0x324($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa894) {
            ctx->pc = 0x1FA8DCu;
            goto label_1fa8dc;
        }
    }
    ctx->pc = 0x1FA89Cu;
    // 0x1fa89c: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x1fa89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1fa8a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FA8A0u;
    {
        const bool branch_taken_0x1fa8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8A0u;
        // 0x1fa8a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8a0) {
            ctx->pc = 0x1FA8E0u;
            goto label_1fa8e0;
        }
    }
    ctx->pc = 0x1FA8A8u;
    // 0x1fa8a8: 0x27b20324  addiu       $s2, $sp, 0x324
    ctx->pc = 0x1fa8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
    // 0x1fa8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa8b0:
    // 0x1fa8b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fa8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa8b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fa8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa8b8: 0xc07e8d2  jal         func_1FA348
    ctx->pc = 0x1FA8B8u;
    SET_GPR_U32(ctx, 31, 0x1FA8C0u);
    ctx->pc = 0x1FA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8B8u;
    // 0x1fa8bc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FA348u, 0x1FA8B8u, 0x1FA8C0u)) {
        return;
    }
    ctx->pc = 0x1FA8C0u;
label_1fa8c0:
    // 0x1fa8c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa8c4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1fa8c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fa8c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA8C8u;
    {
        const bool branch_taken_0x1fa8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8C8u;
        // 0x1fa8cc: 0x8fa20324  lw          $v0, 0x324($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8c8) {
            ctx->pc = 0x1FA8DCu;
            goto label_1fa8dc;
        }
    }
    ctx->pc = 0x1FA8D0u;
    // 0x1fa8d0: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1fa8d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fa8d4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FA8D4u;
    {
        const bool branch_taken_0x1fa8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8D4u;
        // 0x1fa8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8d4) {
            ctx->pc = 0x1FA8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa8b0;
        }
    }
    ctx->pc = 0x1FA8DCu;
label_1fa8dc:
    // 0x1fa8dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fa8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fa8e0:
    // 0x1fa8e0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1fa8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fa8e4:
    // 0x1fa8e4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1fa8e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa8e8: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x1fa8e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fa8ec: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x1fa8ecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fa8f0: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x1fa8f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1fa8f4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1fa8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1fa8f8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1fa8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1fa8fc: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x1fa8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x1fa900: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x1fa900u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x1fa904: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1fa904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1fa908: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1fa908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1fa90c: 0x0  nop
    ctx->pc = 0x1fa90cu;
    // NOP
    // 0x1fa910: 0x1495fff4  bne         $a0, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FA910u;
    {
        const bool branch_taken_0x1fa910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x1fa910) {
            ctx->pc = 0x1FA8E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa8e4;
        }
    }
    ctx->pc = 0x1FA918u;
    // 0x1fa918: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1fa918u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa91c: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x1fa91cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fa920: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1fa920u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1fa924: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1fa924u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1fa928: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1fa928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fa92c:
    // 0x1fa92c: 0xdfbf03b0  ld          $ra, 0x3B0($sp)
    ctx->pc = 0x1fa92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1fa930: 0xdfb703a0  ld          $s7, 0x3A0($sp)
    ctx->pc = 0x1fa930u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1fa934: 0xdfb60390  ld          $s6, 0x390($sp)
    ctx->pc = 0x1fa934u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1fa938: 0xdfb50380  ld          $s5, 0x380($sp)
    ctx->pc = 0x1fa938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1fa93c: 0xdfb40370  ld          $s4, 0x370($sp)
    ctx->pc = 0x1fa93cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1fa940: 0xdfb30360  ld          $s3, 0x360($sp)
    ctx->pc = 0x1fa940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1fa944: 0xdfb20350  ld          $s2, 0x350($sp)
    ctx->pc = 0x1fa944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1fa948: 0xdfb10340  ld          $s1, 0x340($sp)
    ctx->pc = 0x1fa948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1fa94c: 0xdfb00330  ld          $s0, 0x330($sp)
    ctx->pc = 0x1fa94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1fa950: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA950u;
        // 0x1fa954: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA958u;
}
