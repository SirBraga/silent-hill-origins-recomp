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

// Function: sub_00107070
// Address: 0x107070 - 0x107270
void sub_00107070_0x107070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107070_0x107070");
#endif

    switch (ctx->pc) {
        case 0x1070bcu: goto label_1070bc;
        case 0x1070d4u: goto label_1070d4;
        case 0x1070e8u: goto label_1070e8;
        case 0x1070fcu: goto label_1070fc;
        case 0x107110u: goto label_107110;
        case 0x107124u: goto label_107124;
        case 0x107150u: goto label_107150;
        case 0x10716cu: goto label_10716c;
        case 0x107188u: goto label_107188;
        case 0x1071a0u: goto label_1071a0;
        case 0x1071b0u: goto label_1071b0;
        case 0x1071c0u: goto label_1071c0;
        case 0x1071d8u: goto label_1071d8;
        case 0x1071ecu: goto label_1071ec;
        case 0x1071f8u: goto label_1071f8;
        case 0x107208u: goto label_107208;
        case 0x107230u: goto label_107230;
        case 0x107238u: goto label_107238;
        default: break;
    }

    ctx->pc = 0x107070u;

    // 0x107070: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x107074: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x107074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x107078: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x107078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x10707c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10707cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107080: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x107080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x107084: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107088: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x107088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x10708c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x10708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x107090: 0x24459b28  addiu       $a1, $v0, -0x64D8
    ctx->pc = 0x107090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941480));
    // 0x107094: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x107094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x107098: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x107098u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10709c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x10709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1070a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1070a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070a4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1070a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1070a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1070a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1070ac: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1070acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1070b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1070b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1070b4: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x1070B4u;
    SET_GPR_U32(ctx, 31, 0x1070BCu);
    ctx->pc = 0x1070B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070B4u;
    // 0x1070b8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x1070B4u, 0x1070BCu)) {
        return;
    }
    ctx->pc = 0x1070BCu;
label_1070bc:
    // 0x1070bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1070bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070c0: 0x1220005d  beqz        $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1070C0u;
    {
        const bool branch_taken_0x1070c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070C0u;
        // 0x1070c4: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070c0) {
            ctx->pc = 0x107238u;
            goto label_107238;
        }
    }
    ctx->pc = 0x1070C8u;
    // 0x1070c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1070c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070cc: 0xc065ae2  jal         func_196B88
    ctx->pc = 0x1070CCu;
    SET_GPR_U32(ctx, 31, 0x1070D4u);
    ctx->pc = 0x1070D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070CCu;
    // 0x1070d0: 0x24a59ab8  addiu       $a1, $a1, -0x6548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x1070CCu, 0x1070D4u)) {
        return;
    }
    ctx->pc = 0x1070D4u;
label_1070d4:
    // 0x1070d4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1070d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1070d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1070d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070dc: 0x24a59ac0  addiu       $a1, $a1, -0x6540
    ctx->pc = 0x1070dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941376));
    // 0x1070e0: 0xc065ae2  jal         func_196B88
    ctx->pc = 0x1070E0u;
    SET_GPR_U32(ctx, 31, 0x1070E8u);
    ctx->pc = 0x1070E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070E0u;
    // 0x1070e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x1070E0u, 0x1070E8u)) {
        return;
    }
    ctx->pc = 0x1070E8u;
label_1070e8:
    // 0x1070e8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1070e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1070ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1070ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070f0: 0x24a59ac8  addiu       $a1, $a1, -0x6538
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941384));
    // 0x1070f4: 0xc065ae2  jal         func_196B88
    ctx->pc = 0x1070F4u;
    SET_GPR_U32(ctx, 31, 0x1070FCu);
    ctx->pc = 0x1070F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070F4u;
    // 0x1070f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x1070F4u, 0x1070FCu)) {
        return;
    }
    ctx->pc = 0x1070FCu;
label_1070fc:
    // 0x1070fc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1070fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x107100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107104: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x107104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x107108: 0xc065ae2  jal         func_196B88
    ctx->pc = 0x107108u;
    SET_GPR_U32(ctx, 31, 0x107110u);
    ctx->pc = 0x10710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107108u;
    // 0x10710c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x107108u, 0x107110u)) {
        return;
    }
    ctx->pc = 0x107110u;
label_107110:
    // 0x107110: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x107110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x107114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107118: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x107118u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10711c: 0xc065ae2  jal         func_196B88
    ctx->pc = 0x10711Cu;
    SET_GPR_U32(ctx, 31, 0x107124u);
    ctx->pc = 0x107120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10711Cu;
    // 0x107120: 0x24a599f8  addiu       $a1, $a1, -0x6608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x10711Cu, 0x107124u)) {
        return;
    }
    ctx->pc = 0x107124u;
label_107124:
    // 0x107124: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x107124u;
    {
        const bool branch_taken_0x107124 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x107128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107124u;
        // 0x107128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107124) {
            ctx->pc = 0x107130u;
            goto label_107130;
        }
    }
    ctx->pc = 0x10712Cu;
    // 0x10712c: 0x8e970018  lw          $s7, 0x18($s4)
    ctx->pc = 0x10712cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_107130:
    // 0x107130: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x107130u;
    {
        const bool branch_taken_0x107130 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x107130) {
            ctx->pc = 0x107134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107130u;
            // 0x107134: 0x8e760018  lw          $s6, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107138u;
            goto label_107138;
        }
    }
    ctx->pc = 0x107138u;
label_107138:
    // 0x107138: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x107138u;
    {
        const bool branch_taken_0x107138 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x107138) {
            ctx->pc = 0x10713Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107138u;
            // 0x10713c: 0x8e5e0018  lw          $fp, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107140u;
            goto label_107140;
        }
    }
    ctx->pc = 0x107140u;
label_107140:
    // 0x107140: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x107140u;
    {
        const bool branch_taken_0x107140 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x107140) {
            ctx->pc = 0x107208u;
            goto label_107208;
        }
    }
    ctx->pc = 0x107148u;
    // 0x107148: 0xc095596  jal         func_255658
    ctx->pc = 0x107148u;
    SET_GPR_U32(ctx, 31, 0x107150u);
    ctx->pc = 0x10714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107148u;
    // 0x10714c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x107148u, 0x107150u)) {
        return;
    }
    ctx->pc = 0x107150u;
label_107150:
    // 0x107150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107154: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x107154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x107158: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x107158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10715c: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10715Cu;
    {
        const bool branch_taken_0x10715c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10715Cu;
        // 0x107160: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10715c) {
            ctx->pc = 0x107208u;
            goto label_107208;
        }
    }
    ctx->pc = 0x107164u;
    // 0x107164: 0xc081be4  jal         func_206F90
    ctx->pc = 0x107164u;
    SET_GPR_U32(ctx, 31, 0x10716Cu);
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x107164u, 0x10716Cu)) {
        return;
    }
    ctx->pc = 0x10716Cu;
label_10716c:
    // 0x10716c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10716Cu;
    {
        const bool branch_taken_0x10716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10716Cu;
        // 0x107170: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10716c) {
            ctx->pc = 0x1071B4u;
            goto label_1071b4;
        }
    }
    ctx->pc = 0x107174u;
    // 0x107174: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x107174u;
    {
        const bool branch_taken_0x107174 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x107178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107174u;
        // 0x107178: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107174) {
            ctx->pc = 0x1071A8u;
            goto label_1071a8;
        }
    }
    ctx->pc = 0x10717Cu;
    // 0x10717c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x107180: 0xc081bfa  jal         func_206FE8
    ctx->pc = 0x107180u;
    SET_GPR_U32(ctx, 31, 0x107188u);
    ctx->pc = 0x107184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107180u;
    // 0x107184: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206FE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206FE8u, 0x107180u, 0x107188u)) {
        return;
    }
    ctx->pc = 0x107188u;
label_107188:
    // 0x107188: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x107188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10718c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107190: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x107190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x107194: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x107194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x107198: 0xc09418e  jal         func_250638
    ctx->pc = 0x107198u;
    SET_GPR_U32(ctx, 31, 0x1071A0u);
    ctx->pc = 0x10719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107198u;
    // 0x10719c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250638u, 0x107198u, 0x1071A0u)) {
        return;
    }
    ctx->pc = 0x1071A0u;
label_1071a0:
    // 0x1071a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1071A0u;
    {
        const bool branch_taken_0x1071a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071A0u;
        // 0x1071a4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071a0) {
            ctx->pc = 0x1071B8u;
            goto label_1071b8;
        }
    }
    ctx->pc = 0x1071A8u;
label_1071a8:
    // 0x1071a8: 0xc041e86  jal         func_107A18
    ctx->pc = 0x1071A8u;
    SET_GPR_U32(ctx, 31, 0x1071B0u);
    ctx->pc = 0x1071ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071A8u;
    // 0x1071ac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x1071A8u, 0x1071B0u)) {
        return;
    }
    ctx->pc = 0x1071B0u;
label_1071b0:
    // 0x1071b0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1071b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1071b4:
    // 0x1071b4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1071b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1071b8:
    // 0x1071b8: 0xc077dca  jal         func_1DF728
    ctx->pc = 0x1071B8u;
    SET_GPR_U32(ctx, 31, 0x1071C0u);
    ctx->pc = 0x1071BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071B8u;
    // 0x1071bc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DF728u, 0x1071B8u, 0x1071C0u)) {
        return;
    }
    ctx->pc = 0x1071C0u;
label_1071c0:
    // 0x1071c0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1071c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1071c4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1071c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1071c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1071cc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1071ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071d0: 0xc076e1e  jal         func_1DB878
    ctx->pc = 0x1071D0u;
    SET_GPR_U32(ctx, 31, 0x1071D8u);
    ctx->pc = 0x1071D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071D0u;
    // 0x1071d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB878u, 0x1071D0u, 0x1071D8u)) {
        return;
    }
    ctx->pc = 0x1071D8u;
label_1071d8:
    // 0x1071d8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1071d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1071dc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1071DCu;
    {
        const bool branch_taken_0x1071dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1071dc) {
            ctx->pc = 0x1071E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1071DCu;
            // 0x1071e0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1071F0u;
            goto label_1071f0;
        }
    }
    ctx->pc = 0x1071E4u;
    // 0x1071e4: 0xc07b542  jal         func_1ED508
    ctx->pc = 0x1071E4u;
    SET_GPR_U32(ctx, 31, 0x1071ECu);
    ctx->pc = 0x1071E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071E4u;
    // 0x1071e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED508u, 0x1071E4u, 0x1071ECu)) {
        return;
    }
    ctx->pc = 0x1071ECu;
label_1071ec:
    // 0x1071ec: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1071ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1071f0:
    // 0x1071f0: 0xc07b39a  jal         func_1ECE68
    ctx->pc = 0x1071F0u;
    SET_GPR_U32(ctx, 31, 0x1071F8u);
    ctx->pc = 0x1071F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071F0u;
    // 0x1071f4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECE68u, 0x1071F0u, 0x1071F8u)) {
        return;
    }
    ctx->pc = 0x1071F8u;
label_1071f8:
    // 0x1071f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1071F8u;
    {
        const bool branch_taken_0x1071f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071F8u;
        // 0x1071fc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071f8) {
            ctx->pc = 0x107208u;
            goto label_107208;
        }
    }
    ctx->pc = 0x107200u;
    // 0x107200: 0xc07b570  jal         func_1ED5C0
    ctx->pc = 0x107200u;
    SET_GPR_U32(ctx, 31, 0x107208u);
    ctx->pc = 0x107204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107200u;
    // 0x107204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED5C0u, 0x107200u, 0x107208u)) {
        return;
    }
    ctx->pc = 0x107208u;
label_107208:
    // 0x107208: 0x52a0000c  beql        $s5, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x107208u;
    {
        const bool branch_taken_0x107208 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x107208) {
            ctx->pc = 0x10720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107208u;
            // 0x10720c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10723Cu;
            goto label_10723c;
        }
    }
    ctx->pc = 0x107210u;
    // 0x107210: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x107210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x107214: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x107214u;
    {
        const bool branch_taken_0x107214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x107214) {
            ctx->pc = 0x107218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107214u;
            // 0x107218: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10723Cu;
            goto label_10723c;
        }
    }
    ctx->pc = 0x10721Cu;
    // 0x10721c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x107220: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x107220u;
    {
        const bool branch_taken_0x107220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107220) {
            ctx->pc = 0x107224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107220u;
            // 0x107224: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10723Cu;
            goto label_10723c;
        }
    }
    ctx->pc = 0x107228u;
    // 0x107228: 0xc09d55c  jal         func_275570
    ctx->pc = 0x107228u;
    SET_GPR_U32(ctx, 31, 0x107230u);
    ctx->pc = 0x10722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107228u;
    // 0x10722c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x107228u, 0x107230u)) {
        return;
    }
    ctx->pc = 0x107230u;
label_107230:
    // 0x107230: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x107230u;
    SET_GPR_U32(ctx, 31, 0x107238u);
    ctx->pc = 0x107234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107230u;
    // 0x107234: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x107230u, 0x107238u)) {
        return;
    }
    ctx->pc = 0x107238u;
label_107238:
    // 0x107238: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x107238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_10723c:
    // 0x10723c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10723cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107240: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x107240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107244: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x107244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107248: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x107248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10724c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x10724cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107250: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x107250u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107254: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x107254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107258: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x107258u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10725c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107260: 0x3e00008  jr          $ra
    ctx->pc = 0x107260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107260u;
        // 0x107264: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107268u;
    // 0x107268: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x107268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x10726c: 0x0  nop
    ctx->pc = 0x10726cu;
    // NOP
    ctx->pc = 0x107270u;
}
