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

// Function: sub_001C6840
// Address: 0x1c6840 - 0x1c69a8
void sub_001C6840_0x1c6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6840_0x1c6840");
#endif

    switch (ctx->pc) {
        case 0x1c6840u: goto label_1c6840;
        case 0x1c6844u: goto label_1c6844;
        case 0x1c6848u: goto label_1c6848;
        case 0x1c684cu: goto label_1c684c;
        case 0x1c6850u: goto label_1c6850;
        case 0x1c6854u: goto label_1c6854;
        case 0x1c6858u: goto label_1c6858;
        case 0x1c685cu: goto label_1c685c;
        case 0x1c6860u: goto label_1c6860;
        case 0x1c6864u: goto label_1c6864;
        case 0x1c6868u: goto label_1c6868;
        case 0x1c686cu: goto label_1c686c;
        case 0x1c6870u: goto label_1c6870;
        case 0x1c6874u: goto label_1c6874;
        case 0x1c6878u: goto label_1c6878;
        case 0x1c687cu: goto label_1c687c;
        case 0x1c6880u: goto label_1c6880;
        case 0x1c6884u: goto label_1c6884;
        case 0x1c6888u: goto label_1c6888;
        case 0x1c688cu: goto label_1c688c;
        case 0x1c6890u: goto label_1c6890;
        case 0x1c6894u: goto label_1c6894;
        case 0x1c6898u: goto label_1c6898;
        case 0x1c689cu: goto label_1c689c;
        case 0x1c68a0u: goto label_1c68a0;
        case 0x1c68a4u: goto label_1c68a4;
        case 0x1c68a8u: goto label_1c68a8;
        case 0x1c68acu: goto label_1c68ac;
        case 0x1c68b0u: goto label_1c68b0;
        case 0x1c68b4u: goto label_1c68b4;
        case 0x1c68b8u: goto label_1c68b8;
        case 0x1c68bcu: goto label_1c68bc;
        case 0x1c68c0u: goto label_1c68c0;
        case 0x1c68c4u: goto label_1c68c4;
        case 0x1c68c8u: goto label_1c68c8;
        case 0x1c68ccu: goto label_1c68cc;
        case 0x1c68d0u: goto label_1c68d0;
        case 0x1c68d4u: goto label_1c68d4;
        case 0x1c68d8u: goto label_1c68d8;
        case 0x1c68dcu: goto label_1c68dc;
        case 0x1c68e0u: goto label_1c68e0;
        case 0x1c68e4u: goto label_1c68e4;
        case 0x1c68e8u: goto label_1c68e8;
        case 0x1c68ecu: goto label_1c68ec;
        case 0x1c68f0u: goto label_1c68f0;
        case 0x1c68f4u: goto label_1c68f4;
        case 0x1c68f8u: goto label_1c68f8;
        case 0x1c68fcu: goto label_1c68fc;
        case 0x1c6900u: goto label_1c6900;
        case 0x1c6904u: goto label_1c6904;
        case 0x1c6908u: goto label_1c6908;
        case 0x1c690cu: goto label_1c690c;
        case 0x1c6910u: goto label_1c6910;
        case 0x1c6914u: goto label_1c6914;
        case 0x1c6918u: goto label_1c6918;
        case 0x1c691cu: goto label_1c691c;
        case 0x1c6920u: goto label_1c6920;
        case 0x1c6924u: goto label_1c6924;
        case 0x1c6928u: goto label_1c6928;
        case 0x1c692cu: goto label_1c692c;
        case 0x1c6930u: goto label_1c6930;
        case 0x1c6934u: goto label_1c6934;
        case 0x1c6938u: goto label_1c6938;
        case 0x1c693cu: goto label_1c693c;
        case 0x1c6940u: goto label_1c6940;
        case 0x1c6944u: goto label_1c6944;
        case 0x1c6948u: goto label_1c6948;
        case 0x1c694cu: goto label_1c694c;
        case 0x1c6950u: goto label_1c6950;
        case 0x1c6954u: goto label_1c6954;
        case 0x1c6958u: goto label_1c6958;
        case 0x1c695cu: goto label_1c695c;
        case 0x1c6960u: goto label_1c6960;
        case 0x1c6964u: goto label_1c6964;
        case 0x1c6968u: goto label_1c6968;
        case 0x1c696cu: goto label_1c696c;
        case 0x1c6970u: goto label_1c6970;
        case 0x1c6974u: goto label_1c6974;
        case 0x1c6978u: goto label_1c6978;
        case 0x1c697cu: goto label_1c697c;
        case 0x1c6980u: goto label_1c6980;
        case 0x1c6984u: goto label_1c6984;
        case 0x1c6988u: goto label_1c6988;
        case 0x1c698cu: goto label_1c698c;
        case 0x1c6990u: goto label_1c6990;
        case 0x1c6994u: goto label_1c6994;
        case 0x1c6998u: goto label_1c6998;
        case 0x1c699cu: goto label_1c699c;
        case 0x1c69a0u: goto label_1c69a0;
        case 0x1c69a4u: goto label_1c69a4;
        default: break;
    }

    ctx->pc = 0x1c6840u;

label_1c6840:
    // 0x1c6840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c6844:
    // 0x1c6844: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c6844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1c6848:
    // 0x1c6848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c684c:
    // 0x1c684c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c684cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6850:
    // 0x1c6850: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c6850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c6854:
    // 0x1c6854: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c6854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c6858:
    // 0x1c6858: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c685c:
    // 0x1c685c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c685cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1c6860:
    // 0x1c6860: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1c6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1c6864:
    // 0x1c6864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6868:
    // 0x1c6868: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1c6868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1c686c:
    // 0x1c686c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c6870:
    // 0x1c6870: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x1c6870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_1c6874:
    // 0x1c6874: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c6878:
    if (ctx->pc == 0x1C6878u) {
        ctx->pc = 0x1C6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6874u;
        // 0x1c6878: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C687Cu;
        goto label_1c687c;
    }
    ctx->pc = 0x1C6874u;
    {
        const bool branch_taken_0x1c6874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6874u;
        // 0x1c6878: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6874) {
            ctx->pc = 0x1C689Cu;
            goto label_1c689c;
        }
    }
    ctx->pc = 0x1C687Cu;
label_1c687c:
    // 0x1c687c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c6880:
    // 0x1c6880: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1c6880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_1c6884:
    // 0x1c6884: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c6888:
    if (ctx->pc == 0x1C6888u) {
        ctx->pc = 0x1C6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6884u;
        // 0x1c6888: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C688Cu;
        goto label_1c688c;
    }
    ctx->pc = 0x1C6884u;
    {
        const bool branch_taken_0x1c6884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6884u;
        // 0x1c6888: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6884) {
            ctx->pc = 0x1C68A0u;
            goto label_1c68a0;
        }
    }
    ctx->pc = 0x1C688Cu;
label_1c688c:
    // 0x1c688c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c6890:
    // 0x1c6890: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x1c6890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_1c6894:
    // 0x1c6894: 0x5060fffa  beql        $v1, $zero, . + 4 + (-0x6 << 2)
label_1c6898:
    if (ctx->pc == 0x1C6898u) {
        ctx->pc = 0x1C6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6894u;
        // 0x1c6898: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C689Cu;
        goto label_1c689c;
    }
    ctx->pc = 0x1C6894u;
    {
        const bool branch_taken_0x1c6894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6894) {
            ctx->pc = 0x1C6898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6894u;
            // 0x1c6898: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6880;
        }
    }
    ctx->pc = 0x1C689Cu;
label_1c689c:
    // 0x1c689c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c68a0:
    // 0x1c68a0: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x1c68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1c68a4:
    // 0x1c68a4: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_1c68a8:
    if (ctx->pc == 0x1C68A8u) {
        ctx->pc = 0x1C68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68A4u;
        // 0x1c68a8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68ACu;
        goto label_1c68ac;
    }
    ctx->pc = 0x1C68A4u;
    {
        const bool branch_taken_0x1c68a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c68a4) {
            ctx->pc = 0x1C68A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C68A4u;
            // 0x1c68a8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6970u;
            goto label_1c6970;
        }
    }
    ctx->pc = 0x1C68ACu;
label_1c68ac:
    // 0x1c68ac: 0x54a00030  bnel        $a1, $zero, . + 4 + (0x30 << 2)
label_1c68b0:
    if (ctx->pc == 0x1C68B0u) {
        ctx->pc = 0x1C68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68ACu;
        // 0x1c68b0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68B4u;
        goto label_1c68b4;
    }
    ctx->pc = 0x1C68ACu;
    {
        const bool branch_taken_0x1c68ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c68ac) {
            ctx->pc = 0x1C68B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C68ACu;
            // 0x1c68b0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6970u;
            goto label_1c6970;
        }
    }
    ctx->pc = 0x1C68B4u;
label_1c68b4:
    // 0x1c68b4: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x1c68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1c68b8:
    // 0x1c68b8: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_1c68bc:
    if (ctx->pc == 0x1C68BCu) {
        ctx->pc = 0x1C68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68B8u;
        // 0x1c68bc: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68C0u;
        goto label_1c68c0;
    }
    ctx->pc = 0x1C68B8u;
    {
        const bool branch_taken_0x1c68b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c68b8) {
            ctx->pc = 0x1C68BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C68B8u;
            // 0x1c68bc: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6970u;
            goto label_1c6970;
        }
    }
    ctx->pc = 0x1C68C0u;
label_1c68c0:
    // 0x1c68c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c68c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c68c4:
    // 0x1c68c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c68c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c68c8:
    // 0x1c68c8: 0xc06ba6c  jal         func_1AE9B0
label_1c68cc:
    if (ctx->pc == 0x1C68CCu) {
        ctx->pc = 0x1C68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68C8u;
        // 0x1c68cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68D0u;
        goto label_1c68d0;
    }
    ctx->pc = 0x1C68C8u;
    SET_GPR_U32(ctx, 31, 0x1C68D0u);
    ctx->pc = 0x1C68CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68C8u;
    // 0x1c68cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C68C8u, 0x1C68D0u)) {
        return;
    }
    ctx->pc = 0x1C68D0u;
label_1c68d0:
    // 0x1c68d0: 0x16400022  bnez        $s2, . + 4 + (0x22 << 2)
label_1c68d4:
    if (ctx->pc == 0x1C68D4u) {
        ctx->pc = 0x1C68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68D0u;
        // 0x1c68d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68D8u;
        goto label_1c68d8;
    }
    ctx->pc = 0x1C68D0u;
    {
        const bool branch_taken_0x1c68d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68D0u;
        // 0x1c68d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68d0) {
            ctx->pc = 0x1C695Cu;
            goto label_1c695c;
        }
    }
    ctx->pc = 0x1C68D8u;
label_1c68d8:
    // 0x1c68d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c68d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c68dc:
    // 0x1c68dc: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x1c68dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c68e0:
    // 0x1c68e0: 0x3c13006a  lui         $s3, 0x6A
    ctx->pc = 0x1c68e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)106 << 16));
label_1c68e4:
    // 0x1c68e4: 0x0  nop
    ctx->pc = 0x1c68e4u;
    // NOP
label_1c68e8:
    // 0x1c68e8: 0x16340011  bne         $s1, $s4, . + 4 + (0x11 << 2)
label_1c68ec:
    if (ctx->pc == 0x1C68ECu) {
        ctx->pc = 0x1C68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68E8u;
        // 0x1c68ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68F0u;
        goto label_1c68f0;
    }
    ctx->pc = 0x1C68E8u;
    {
        const bool branch_taken_0x1c68e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x1C68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68E8u;
        // 0x1c68ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68e8) {
            ctx->pc = 0x1C6930u;
            goto label_1c6930;
        }
    }
    ctx->pc = 0x1C68F0u;
label_1c68f0:
    // 0x1c68f0: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c68f4:
    // 0x1c68f4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1c68f8:
    if (ctx->pc == 0x1C68F8u) {
        ctx->pc = 0x1C68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68F4u;
        // 0x1c68f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68FCu;
        goto label_1c68fc;
    }
    ctx->pc = 0x1C68F4u;
    {
        const bool branch_taken_0x1c68f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68F4u;
        // 0x1c68f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68f4) {
            ctx->pc = 0x1C6934u;
            goto label_1c6934;
        }
    }
    ctx->pc = 0x1C68FCu;
label_1c68fc:
    // 0x1c68fc: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c68fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c6900:
    // 0x1c6900: 0xc06dc32  jal         func_1B70C8
label_1c6904:
    if (ctx->pc == 0x1C6904u) {
        ctx->pc = 0x1C6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6900u;
        // 0x1c6904: 0x2665f278  addiu       $a1, $s3, -0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6908u;
        goto label_1c6908;
    }
    ctx->pc = 0x1C6900u;
    SET_GPR_U32(ctx, 31, 0x1C6908u);
    ctx->pc = 0x1C6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6900u;
    // 0x1c6904: 0x2665f278  addiu       $a1, $s3, -0xD88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1C6900u, 0x1C6908u)) {
        return;
    }
    ctx->pc = 0x1C6908u;
label_1c6908:
    // 0x1c6908: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c690c:
    if (ctx->pc == 0x1C690Cu) {
        ctx->pc = 0x1C690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6908u;
        // 0x1c690c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6910u;
        goto label_1c6910;
    }
    ctx->pc = 0x1C6908u;
    {
        const bool branch_taken_0x1c6908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6908u;
        // 0x1c690c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6908) {
            ctx->pc = 0x1C6944u;
            goto label_1c6944;
        }
    }
    ctx->pc = 0x1C6910u;
label_1c6910:
    // 0x1c6910: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1c6910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c6914:
    // 0x1c6914: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c6914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c6918:
    // 0x1c6918: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c6918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c691c:
    // 0x1c691c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c6920:
    // 0x1c6920: 0x60f809  jalr        $v1
label_1c6924:
    if (ctx->pc == 0x1C6924u) {
        ctx->pc = 0x1C6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6920u;
        // 0x1c6924: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6928u;
        goto label_1c6928;
    }
    ctx->pc = 0x1C6920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C6928u);
        ctx->pc = 0x1C6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6920u;
        // 0x1c6924: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6920u, 0x1C6928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6928u;
label_1c6928:
    // 0x1c6928: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c692c:
    if (ctx->pc == 0x1C692Cu) {
        ctx->pc = 0x1C692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6928u;
        // 0x1c692c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6930u;
        goto label_1c6930;
    }
    ctx->pc = 0x1C6928u;
    {
        const bool branch_taken_0x1c6928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6928u;
        // 0x1c692c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6928) {
            ctx->pc = 0x1C6948u;
            goto label_1c6948;
        }
    }
    ctx->pc = 0x1C6930u;
label_1c6930:
    // 0x1c6930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c6934:
    // 0x1c6934: 0xc071a6a  jal         func_1C69A8
label_1c6938:
    if (ctx->pc == 0x1C6938u) {
        ctx->pc = 0x1C693Cu;
        goto label_1c693c;
    }
    ctx->pc = 0x1C6934u;
    SET_GPR_U32(ctx, 31, 0x1C693Cu);
    ctx->pc = 0x1C69A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C69A8u, 0x1C6934u, 0x1C693Cu)) {
        return;
    }
    ctx->pc = 0x1C693Cu;
label_1c693c:
    // 0x1c693c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c6940:
    if (ctx->pc == 0x1C6940u) {
        ctx->pc = 0x1C6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C693Cu;
        // 0x1c6940: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6944u;
        goto label_1c6944;
    }
    ctx->pc = 0x1C693Cu;
    {
        const bool branch_taken_0x1c693c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c693c) {
            ctx->pc = 0x1C6940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C693Cu;
            // 0x1c6940: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6984u;
            goto label_1c6984;
        }
    }
    ctx->pc = 0x1C6944u;
label_1c6944:
    // 0x1c6944: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c6944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c6948:
    // 0x1c6948: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1c6948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1c694c:
    // 0x1c694c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1c6950:
    if (ctx->pc == 0x1C6950u) {
        ctx->pc = 0x1C6954u;
        goto label_1c6954;
    }
    ctx->pc = 0x1C694Cu;
    {
        const bool branch_taken_0x1c694c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c694c) {
            ctx->pc = 0x1C68E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c68e8;
        }
    }
    ctx->pc = 0x1C6954u;
label_1c6954:
    // 0x1c6954: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c6958:
    if (ctx->pc == 0x1C6958u) {
        ctx->pc = 0x1C6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6954u;
        // 0x1c6958: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C695Cu;
        goto label_1c695c;
    }
    ctx->pc = 0x1C6954u;
    {
        const bool branch_taken_0x1c6954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6954u;
        // 0x1c6958: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6954) {
            ctx->pc = 0x1C6970u;
            goto label_1c6970;
        }
    }
    ctx->pc = 0x1C695Cu;
label_1c695c:
    // 0x1c695c: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
label_1c6960:
    if (ctx->pc == 0x1C6960u) {
        ctx->pc = 0x1C6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C695Cu;
        // 0x1c6960: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6964u;
        goto label_1c6964;
    }
    ctx->pc = 0x1C695Cu;
    {
        const bool branch_taken_0x1c695c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c695c) {
            ctx->pc = 0x1C6960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C695Cu;
            // 0x1c6960: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6970u;
            goto label_1c6970;
        }
    }
    ctx->pc = 0x1C6964u;
label_1c6964:
    // 0x1c6964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6968:
    // 0x1c6968: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1c6968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_1c696c:
    // 0x1c696c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c696cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c6970:
    // 0x1c6970: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c6974:
    if (ctx->pc == 0x1C6974u) {
        ctx->pc = 0x1C6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6970u;
        // 0x1c6974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6978u;
        goto label_1c6978;
    }
    ctx->pc = 0x1C6970u;
    {
        const bool branch_taken_0x1c6970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6970u;
        // 0x1c6974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6970) {
            ctx->pc = 0x1C6980u;
            goto label_1c6980;
        }
    }
    ctx->pc = 0x1C6978u;
label_1c6978:
    // 0x1c6978: 0xc06dbc8  jal         func_1B6F20
label_1c697c:
    if (ctx->pc == 0x1C697Cu) {
        ctx->pc = 0x1C697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6978u;
        // 0x1c697c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6980u;
        goto label_1c6980;
    }
    ctx->pc = 0x1C6978u;
    SET_GPR_U32(ctx, 31, 0x1C6980u);
    ctx->pc = 0x1C697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6978u;
    // 0x1c697c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1C6978u, 0x1C6980u)) {
        return;
    }
    ctx->pc = 0x1C6980u;
label_1c6980:
    // 0x1c6980: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c6980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c6984:
    // 0x1c6984: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c6984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c6988:
    // 0x1c6988: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c6988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c698c:
    // 0x1c698c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1c698cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6990:
    // 0x1c6990: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1c6990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c6994:
    // 0x1c6994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6998:
    // 0x1c6998: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c699c:
    // 0x1c699c: 0x3e00008  jr          $ra
label_1c69a0:
    if (ctx->pc == 0x1C69A0u) {
        ctx->pc = 0x1C69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C699Cu;
        // 0x1c69a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69A4u;
        goto label_1c69a4;
    }
    ctx->pc = 0x1C699Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C699Cu;
        // 0x1c69a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C699Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C69A4u;
label_1c69a4:
    // 0x1c69a4: 0x0  nop
    ctx->pc = 0x1c69a4u;
    // NOP
    ctx->pc = 0x1c69a8u;
}
