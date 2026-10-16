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

// Function: sub_00152358
// Address: 0x152358 - 0x1524d8
void sub_00152358_0x152358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152358_0x152358");
#endif

    switch (ctx->pc) {
        case 0x152380u: goto label_152380;
        case 0x1523b0u: goto label_1523b0;
        case 0x1523c0u: goto label_1523c0;
        case 0x1523dcu: goto label_1523dc;
        case 0x1523f8u: goto label_1523f8;
        case 0x152418u: goto label_152418;
        case 0x15242cu: goto label_15242c;
        case 0x152448u: goto label_152448;
        case 0x15245cu: goto label_15245c;
        case 0x152474u: goto label_152474;
        case 0x15248cu: goto label_15248c;
        case 0x1524a0u: goto label_1524a0;
        case 0x1524b4u: goto label_1524b4;
        default: break;
    }

    ctx->pc = 0x152358u;

    // 0x152358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x152358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15235c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x152360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152364: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x152364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x152368: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15236c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x152370: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x152370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x152374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152378: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x152378u;
    SET_GPR_U32(ctx, 31, 0x152380u);
    ctx->pc = 0x15237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152378u;
    // 0x15237c: 0x26320038  addiu       $s2, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x152378u, 0x152380u)) {
        return;
    }
    ctx->pc = 0x152380u;
label_152380:
    // 0x152380: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x152380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x152384: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x152384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x152388: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x152388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x15238c: 0x244225a0  addiu       $v0, $v0, 0x25A0
    ctx->pc = 0x15238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9632));
    // 0x152390: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x152390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x152394: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x152394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x152398: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x152398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x15239c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15239cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523a0: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x1523a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x1523a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1523a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1523a8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1523A8u;
    SET_GPR_U32(ctx, 31, 0x1523B0u);
    ctx->pc = 0x1523ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523A8u;
    // 0x1523ac: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1523A8u, 0x1523B0u)) {
        return;
    }
    ctx->pc = 0x1523B0u;
label_1523b0:
    // 0x1523b0: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1523b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1523b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1523b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523b8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1523B8u;
    SET_GPR_U32(ctx, 31, 0x1523C0u);
    ctx->pc = 0x1523BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523B8u;
    // 0x1523bc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1523B8u, 0x1523C0u)) {
        return;
    }
    ctx->pc = 0x1523C0u;
label_1523c0:
    // 0x1523c0: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x1523c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x1523c4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1523c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1523c8: 0x2694efe8  addiu       $s4, $s4, -0x1018
    ctx->pc = 0x1523c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963176));
    // 0x1523cc: 0x24a52530  addiu       $a1, $a1, 0x2530
    ctx->pc = 0x1523ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
    // 0x1523d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1523d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523d4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1523D4u;
    SET_GPR_U32(ctx, 31, 0x1523DCu);
    ctx->pc = 0x1523D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523D4u;
    // 0x1523d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1523D4u, 0x1523DCu)) {
        return;
    }
    ctx->pc = 0x1523DCu;
label_1523dc:
    // 0x1523dc: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x1523dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x1523e0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1523e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1523e4: 0x2673eff0  addiu       $s3, $s3, -0x1010
    ctx->pc = 0x1523e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963184));
    // 0x1523e8: 0x24a52548  addiu       $a1, $a1, 0x2548
    ctx->pc = 0x1523e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9544));
    // 0x1523ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1523ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523f0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1523F0u;
    SET_GPR_U32(ctx, 31, 0x1523F8u);
    ctx->pc = 0x1523F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523F0u;
    // 0x1523f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1523F0u, 0x1523F8u)) {
        return;
    }
    ctx->pc = 0x1523F8u;
label_1523f8:
    // 0x1523f8: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1523f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1523fc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1523fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x152400: 0x26104548  addiu       $s0, $s0, 0x4548
    ctx->pc = 0x152400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17736));
    // 0x152404: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x152404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x152408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15240c: 0x24a52560  addiu       $a1, $a1, 0x2560
    ctx->pc = 0x15240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9568));
    // 0x152410: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x152410u;
    SET_GPR_U32(ctx, 31, 0x152418u);
    ctx->pc = 0x152414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152410u;
    // 0x152414: 0x24c62578  addiu       $a2, $a2, 0x2578 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x152410u, 0x152418u)) {
        return;
    }
    ctx->pc = 0x152418u;
label_152418:
    // 0x152418: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15241c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152424: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152424u;
    SET_GPR_U32(ctx, 31, 0x15242Cu);
    ctx->pc = 0x152428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152424u;
    // 0x152428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152424u, 0x15242Cu)) {
        return;
    }
    ctx->pc = 0x15242Cu;
label_15242c:
    // 0x15242c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x15242cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x152430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152434: 0x26108918  addiu       $s0, $s0, -0x76E8
    ctx->pc = 0x152434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936856));
    // 0x152438: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15243c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15243cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152440: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152440u;
    SET_GPR_U32(ctx, 31, 0x152448u);
    ctx->pc = 0x152444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152440u;
    // 0x152444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152440u, 0x152448u)) {
        return;
    }
    ctx->pc = 0x152448u;
label_152448:
    // 0x152448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15244c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15244cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152454: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152454u;
    SET_GPR_U32(ctx, 31, 0x15245Cu);
    ctx->pc = 0x152458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152454u;
    // 0x152458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152454u, 0x15245Cu)) {
        return;
    }
    ctx->pc = 0x15245Cu;
label_15245c:
    // 0x15245c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15245cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x152460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152464: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x152464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x152468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15246c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15246Cu;
    SET_GPR_U32(ctx, 31, 0x152474u);
    ctx->pc = 0x152470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15246Cu;
    // 0x152470: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15246Cu, 0x152474u)) {
        return;
    }
    ctx->pc = 0x152474u;
label_152474:
    // 0x152474: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x152474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x152478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15247c: 0x24a5eff8  addiu       $a1, $a1, -0x1008
    ctx->pc = 0x15247cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963192));
    // 0x152480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152484: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152484u;
    SET_GPR_U32(ctx, 31, 0x15248Cu);
    ctx->pc = 0x152488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152484u;
    // 0x152488: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152484u, 0x15248Cu)) {
        return;
    }
    ctx->pc = 0x15248Cu;
label_15248c:
    // 0x15248c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15248cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152498: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152498u;
    SET_GPR_U32(ctx, 31, 0x1524A0u);
    ctx->pc = 0x15249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152498u;
    // 0x15249c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152498u, 0x1524A0u)) {
        return;
    }
    ctx->pc = 0x1524A0u;
label_1524a0:
    // 0x1524a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1524a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1524a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1524a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524ac: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1524ACu;
    SET_GPR_U32(ctx, 31, 0x1524B4u);
    ctx->pc = 0x1524B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524ACu;
    // 0x1524b0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1524ACu, 0x1524B4u)) {
        return;
    }
    ctx->pc = 0x1524B4u;
label_1524b4:
    // 0x1524b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1524b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1524b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1524bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1524bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1524c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1524c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1524c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1524c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1524c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1524c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1524cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1524ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1524d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1524D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1524D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524D0u;
        // 0x1524d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1524D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1524D8u;
}
