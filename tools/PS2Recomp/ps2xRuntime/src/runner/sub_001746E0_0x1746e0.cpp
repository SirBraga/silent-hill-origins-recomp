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

// Function: sub_001746E0
// Address: 0x1746e0 - 0x174828
void sub_001746E0_0x1746e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001746E0_0x1746e0");
#endif

    switch (ctx->pc) {
        case 0x174730u: goto label_174730;
        case 0x174748u: goto label_174748;
        case 0x174760u: goto label_174760;
        case 0x174778u: goto label_174778;
        case 0x17478cu: goto label_17478c;
        case 0x17479cu: goto label_17479c;
        case 0x1747a4u: goto label_1747a4;
        case 0x1747acu: goto label_1747ac;
        case 0x1747b4u: goto label_1747b4;
        case 0x1747c4u: goto label_1747c4;
        case 0x1747d0u: goto label_1747d0;
        case 0x1747dcu: goto label_1747dc;
        case 0x1747e8u: goto label_1747e8;
        case 0x1747f4u: goto label_1747f4;
        case 0x174800u: goto label_174800;
        default: break;
    }

    ctx->pc = 0x1746e0u;

    // 0x1746e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1746e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1746e4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1746e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1746e8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1746e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1746ec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1746ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1746f0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1746f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1746f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1746f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1746f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1746f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1746fc: 0x24425e70  addiu       $v0, $v0, 0x5E70
    ctx->pc = 0x1746fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24176));
    // 0x174700: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x174700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x174704: 0x24635e90  addiu       $v1, $v1, 0x5E90
    ctx->pc = 0x174704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24208));
    // 0x174708: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x174708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17470c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17470cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174710: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174718: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x174718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x17471c: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x17471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x174720: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174720u;
    {
        const bool branch_taken_0x174720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174720u;
        // 0x174724: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174720) {
            ctx->pc = 0x174734u;
            goto label_174734;
        }
    }
    ctx->pc = 0x174728u;
    // 0x174728: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x174728u;
    SET_GPR_U32(ctx, 31, 0x174730u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x174728u, 0x174730u)) {
        return;
    }
    ctx->pc = 0x174730u;
label_174730:
    // 0x174730: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x174730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
label_174734:
    // 0x174734: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x174734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x174738: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x174738u;
    {
        const bool branch_taken_0x174738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x174738) {
            ctx->pc = 0x17473Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174738u;
            // 0x17473c: 0x8e84006c  lw          $a0, 0x6C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174750u;
            goto label_174750;
        }
    }
    ctx->pc = 0x174740u;
    // 0x174740: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x174740u;
    SET_GPR_U32(ctx, 31, 0x174748u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x174740u, 0x174748u)) {
        return;
    }
    ctx->pc = 0x174748u;
label_174748:
    // 0x174748: 0xae800068  sw          $zero, 0x68($s4)
    ctx->pc = 0x174748u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 0));
    // 0x17474c: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x17474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_174750:
    // 0x174750: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x174750u;
    {
        const bool branch_taken_0x174750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x174750) {
            ctx->pc = 0x174754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174750u;
            // 0x174754: 0x8e840070  lw          $a0, 0x70($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174768u;
            goto label_174768;
        }
    }
    ctx->pc = 0x174758u;
    // 0x174758: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x174758u;
    SET_GPR_U32(ctx, 31, 0x174760u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x174758u, 0x174760u)) {
        return;
    }
    ctx->pc = 0x174760u;
label_174760:
    // 0x174760: 0xae80006c  sw          $zero, 0x6C($s4)
    ctx->pc = 0x174760u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 0));
    // 0x174764: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x174764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_174768:
    // 0x174768: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174768u;
    {
        const bool branch_taken_0x174768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174768u;
        // 0x17476c: 0x26900044  addiu       $s0, $s4, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174768) {
            ctx->pc = 0x17477Cu;
            goto label_17477c;
        }
    }
    ctx->pc = 0x174770u;
    // 0x174770: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x174770u;
    SET_GPR_U32(ctx, 31, 0x174778u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x174770u, 0x174778u)) {
        return;
    }
    ctx->pc = 0x174778u;
label_174778:
    // 0x174778: 0xae800070  sw          $zero, 0x70($s4)
    ctx->pc = 0x174778u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 0));
label_17477c:
    // 0x17477c: 0x26840038  addiu       $a0, $s4, 0x38
    ctx->pc = 0x17477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x174780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174784: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x174784u;
    SET_GPR_U32(ctx, 31, 0x17478Cu);
    ctx->pc = 0x174788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174784u;
    // 0x174788: 0x2693004c  addiu       $s3, $s4, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x174784u, 0x17478Cu)) {
        return;
    }
    ctx->pc = 0x17478Cu;
label_17478c:
    // 0x17478c: 0x26920054  addiu       $s2, $s4, 0x54
    ctx->pc = 0x17478cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
    // 0x174790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174794: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x174794u;
    SET_GPR_U32(ctx, 31, 0x17479Cu);
    ctx->pc = 0x174798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174794u;
    // 0x174798: 0x2691005c  addiu       $s1, $s4, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x174794u, 0x17479Cu)) {
        return;
    }
    ctx->pc = 0x17479Cu;
label_17479c:
    // 0x17479c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17479Cu;
    SET_GPR_U32(ctx, 31, 0x1747A4u);
    ctx->pc = 0x1747A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17479Cu;
    // 0x1747a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17479Cu, 0x1747A4u)) {
        return;
    }
    ctx->pc = 0x1747A4u;
label_1747a4:
    // 0x1747a4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1747A4u;
    SET_GPR_U32(ctx, 31, 0x1747ACu);
    ctx->pc = 0x1747A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747A4u;
    // 0x1747a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1747A4u, 0x1747ACu)) {
        return;
    }
    ctx->pc = 0x1747ACu;
label_1747ac:
    // 0x1747ac: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1747ACu;
    SET_GPR_U32(ctx, 31, 0x1747B4u);
    ctx->pc = 0x1747B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747ACu;
    // 0x1747b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1747ACu, 0x1747B4u)) {
        return;
    }
    ctx->pc = 0x1747B4u;
label_1747b4:
    // 0x1747b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1747b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1747b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1747b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1747bc: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x1747BCu;
    SET_GPR_U32(ctx, 31, 0x1747C4u);
    ctx->pc = 0x1747C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747BCu;
    // 0x1747c0: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x1747BCu, 0x1747C4u)) {
        return;
    }
    ctx->pc = 0x1747C4u;
label_1747c4:
    // 0x1747c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1747c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747c8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1747C8u;
    SET_GPR_U32(ctx, 31, 0x1747D0u);
    ctx->pc = 0x1747CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747C8u;
    // 0x1747cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1747C8u, 0x1747D0u)) {
        return;
    }
    ctx->pc = 0x1747D0u;
label_1747d0:
    // 0x1747d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1747d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747d4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1747D4u;
    SET_GPR_U32(ctx, 31, 0x1747DCu);
    ctx->pc = 0x1747D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747D4u;
    // 0x1747d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1747D4u, 0x1747DCu)) {
        return;
    }
    ctx->pc = 0x1747DCu;
label_1747dc:
    // 0x1747dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1747dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747e0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1747E0u;
    SET_GPR_U32(ctx, 31, 0x1747E8u);
    ctx->pc = 0x1747E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747E0u;
    // 0x1747e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1747E0u, 0x1747E8u)) {
        return;
    }
    ctx->pc = 0x1747E8u;
label_1747e8:
    // 0x1747e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1747e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747ec: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1747ECu;
    SET_GPR_U32(ctx, 31, 0x1747F4u);
    ctx->pc = 0x1747F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747ECu;
    // 0x1747f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1747ECu, 0x1747F4u)) {
        return;
    }
    ctx->pc = 0x1747F4u;
label_1747f4:
    // 0x1747f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1747f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747f8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1747F8u;
    SET_GPR_U32(ctx, 31, 0x174800u);
    ctx->pc = 0x1747FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747F8u;
    // 0x1747fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1747F8u, 0x174800u)) {
        return;
    }
    ctx->pc = 0x174800u;
label_174800:
    // 0x174800: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x174800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174804: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x174804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174808: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x174808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17480c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17480cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174810: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x174810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174814: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x174814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17481c: 0x3e00008  jr          $ra
    ctx->pc = 0x17481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17481Cu;
        // 0x174820: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17481Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174824u;
    // 0x174824: 0x0  nop
    ctx->pc = 0x174824u;
    // NOP
    ctx->pc = 0x174828u;
}
