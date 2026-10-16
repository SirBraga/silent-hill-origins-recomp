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

// Function: sub_001104F8
// Address: 0x1104f8 - 0x1109b8
void sub_001104F8_0x1104f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001104F8_0x1104f8");
#endif

    switch (ctx->pc) {
        case 0x110574u: goto label_110574;
        case 0x110584u: goto label_110584;
        case 0x110594u: goto label_110594;
        case 0x1105a4u: goto label_1105a4;
        case 0x1105b4u: goto label_1105b4;
        case 0x1105c4u: goto label_1105c4;
        case 0x1105d4u: goto label_1105d4;
        case 0x1105e4u: goto label_1105e4;
        case 0x1105f4u: goto label_1105f4;
        case 0x110604u: goto label_110604;
        case 0x110614u: goto label_110614;
        case 0x110624u: goto label_110624;
        case 0x110634u: goto label_110634;
        case 0x110644u: goto label_110644;
        case 0x110654u: goto label_110654;
        case 0x110664u: goto label_110664;
        case 0x110674u: goto label_110674;
        case 0x110684u: goto label_110684;
        case 0x110694u: goto label_110694;
        case 0x1106a4u: goto label_1106a4;
        case 0x1106b4u: goto label_1106b4;
        case 0x1106c4u: goto label_1106c4;
        case 0x1106d4u: goto label_1106d4;
        case 0x1106e4u: goto label_1106e4;
        case 0x1106f4u: goto label_1106f4;
        case 0x110704u: goto label_110704;
        case 0x110718u: goto label_110718;
        case 0x11072cu: goto label_11072c;
        case 0x110740u: goto label_110740;
        case 0x110754u: goto label_110754;
        case 0x110768u: goto label_110768;
        case 0x11077cu: goto label_11077c;
        case 0x110790u: goto label_110790;
        case 0x1107a0u: goto label_1107a0;
        case 0x1107b0u: goto label_1107b0;
        case 0x1107c0u: goto label_1107c0;
        case 0x1107d0u: goto label_1107d0;
        case 0x1107e0u: goto label_1107e0;
        case 0x1107f0u: goto label_1107f0;
        case 0x110800u: goto label_110800;
        case 0x110810u: goto label_110810;
        case 0x110820u: goto label_110820;
        case 0x110830u: goto label_110830;
        case 0x110840u: goto label_110840;
        case 0x110850u: goto label_110850;
        case 0x110860u: goto label_110860;
        case 0x110870u: goto label_110870;
        case 0x110880u: goto label_110880;
        case 0x110890u: goto label_110890;
        case 0x1108a0u: goto label_1108a0;
        case 0x1108b0u: goto label_1108b0;
        case 0x1108c0u: goto label_1108c0;
        case 0x1108d0u: goto label_1108d0;
        case 0x1108e0u: goto label_1108e0;
        case 0x1108f0u: goto label_1108f0;
        case 0x110900u: goto label_110900;
        case 0x110910u: goto label_110910;
        case 0x110920u: goto label_110920;
        case 0x110930u: goto label_110930;
        case 0x110938u: goto label_110938;
        case 0x110940u: goto label_110940;
        case 0x110948u: goto label_110948;
        case 0x110950u: goto label_110950;
        case 0x110958u: goto label_110958;
        case 0x110960u: goto label_110960;
        case 0x110968u: goto label_110968;
        case 0x11097cu: goto label_11097c;
        case 0x110988u: goto label_110988;
        default: break;
    }

    ctx->pc = 0x1104f8u;

    // 0x1104f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1104f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1104fc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1104fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x110500: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x110500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x110504: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x110504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x110508: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x110508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11050c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x11050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x110510: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x110510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x110514: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x110514u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110518: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x110518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x11051c: 0x2442a6c8  addiu       $v0, $v0, -0x5938
    ctx->pc = 0x11051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944456));
    // 0x110520: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x110520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x110524: 0x2463a6b0  addiu       $v1, $v1, -0x5950
    ctx->pc = 0x110524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944432));
    // 0x110528: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x110528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x11052c: 0x24c6a6e8  addiu       $a2, $a2, -0x5918
    ctx->pc = 0x11052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944488));
    // 0x110530: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x110530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x110534: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x110534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x110538: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x110538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x11053c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110540: 0xafc30048  sw          $v1, 0x48($fp)
    ctx->pc = 0x110540u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 3));
    // 0x110544: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x110544u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x110548: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x110548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x11054c: 0xafc60034  sw          $a2, 0x34($fp)
    ctx->pc = 0x11054cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 6));
    // 0x110550: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x110550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x110554: 0x8c628304  lw          $v0, -0x7CFC($v1)
    ctx->pc = 0x110554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338304u));
    // 0x110558: 0x545e0106  bnel        $v0, $fp, . + 4 + (0x106 << 2)
    ctx->pc = 0x110558u;
    {
        const bool branch_taken_0x110558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x110558) {
            ctx->pc = 0x11055Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110558u;
            // 0x11055c: 0x27c40044  addiu       $a0, $fp, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 68));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110974u;
            goto label_110974;
        }
    }
    ctx->pc = 0x110560u;
    // 0x110560: 0x27d00038  addiu       $s0, $fp, 0x38
    ctx->pc = 0x110560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    // 0x110564: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110568: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x110568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    // 0x11056c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11056Cu;
    SET_GPR_U32(ctx, 31, 0x110574u);
    ctx->pc = 0x110570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11056Cu;
    // 0x110570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11056Cu, 0x110574u)) {
        return;
    }
    ctx->pc = 0x110574u;
label_110574:
    // 0x110574: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110578: 0x24a54398  addiu       $a1, $a1, 0x4398
    ctx->pc = 0x110578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17304));
    // 0x11057c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11057Cu;
    SET_GPR_U32(ctx, 31, 0x110584u);
    ctx->pc = 0x110580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11057Cu;
    // 0x110580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11057Cu, 0x110584u)) {
        return;
    }
    ctx->pc = 0x110584u;
label_110584:
    // 0x110584: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110588: 0x24a543a0  addiu       $a1, $a1, 0x43A0
    ctx->pc = 0x110588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17312));
    // 0x11058c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11058Cu;
    SET_GPR_U32(ctx, 31, 0x110594u);
    ctx->pc = 0x110590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11058Cu;
    // 0x110590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11058Cu, 0x110594u)) {
        return;
    }
    ctx->pc = 0x110594u;
label_110594:
    // 0x110594: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110598: 0x24a543a8  addiu       $a1, $a1, 0x43A8
    ctx->pc = 0x110598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17320));
    // 0x11059c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11059Cu;
    SET_GPR_U32(ctx, 31, 0x1105A4u);
    ctx->pc = 0x1105A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11059Cu;
    // 0x1105a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11059Cu, 0x1105A4u)) {
        return;
    }
    ctx->pc = 0x1105A4u;
label_1105a4:
    // 0x1105a4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1105a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1105a8: 0x24a543b0  addiu       $a1, $a1, 0x43B0
    ctx->pc = 0x1105a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
    // 0x1105ac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1105ACu;
    SET_GPR_U32(ctx, 31, 0x1105B4u);
    ctx->pc = 0x1105B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105ACu;
    // 0x1105b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1105ACu, 0x1105B4u)) {
        return;
    }
    ctx->pc = 0x1105B4u;
label_1105b4:
    // 0x1105b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1105b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1105b8: 0x24a543b8  addiu       $a1, $a1, 0x43B8
    ctx->pc = 0x1105b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17336));
    // 0x1105bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1105BCu;
    SET_GPR_U32(ctx, 31, 0x1105C4u);
    ctx->pc = 0x1105C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105BCu;
    // 0x1105c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1105BCu, 0x1105C4u)) {
        return;
    }
    ctx->pc = 0x1105C4u;
label_1105c4:
    // 0x1105c4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1105c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1105c8: 0x24a543c0  addiu       $a1, $a1, 0x43C0
    ctx->pc = 0x1105c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17344));
    // 0x1105cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1105CCu;
    SET_GPR_U32(ctx, 31, 0x1105D4u);
    ctx->pc = 0x1105D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105CCu;
    // 0x1105d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1105CCu, 0x1105D4u)) {
        return;
    }
    ctx->pc = 0x1105D4u;
label_1105d4:
    // 0x1105d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1105d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1105d8: 0x24a543c8  addiu       $a1, $a1, 0x43C8
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17352));
    // 0x1105dc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1105DCu;
    SET_GPR_U32(ctx, 31, 0x1105E4u);
    ctx->pc = 0x1105E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105DCu;
    // 0x1105e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1105DCu, 0x1105E4u)) {
        return;
    }
    ctx->pc = 0x1105E4u;
label_1105e4:
    // 0x1105e4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1105e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1105e8: 0x24a543d0  addiu       $a1, $a1, 0x43D0
    ctx->pc = 0x1105e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17360));
    // 0x1105ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1105ECu;
    SET_GPR_U32(ctx, 31, 0x1105F4u);
    ctx->pc = 0x1105F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105ECu;
    // 0x1105f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1105ECu, 0x1105F4u)) {
        return;
    }
    ctx->pc = 0x1105F4u;
label_1105f4:
    // 0x1105f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1105f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1105f8: 0x24a543d8  addiu       $a1, $a1, 0x43D8
    ctx->pc = 0x1105f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17368));
    // 0x1105fc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1105FCu;
    SET_GPR_U32(ctx, 31, 0x110604u);
    ctx->pc = 0x110600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105FCu;
    // 0x110600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1105FCu, 0x110604u)) {
        return;
    }
    ctx->pc = 0x110604u;
label_110604:
    // 0x110604: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110608: 0x24a543e0  addiu       $a1, $a1, 0x43E0
    ctx->pc = 0x110608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
    // 0x11060c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11060Cu;
    SET_GPR_U32(ctx, 31, 0x110614u);
    ctx->pc = 0x110610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11060Cu;
    // 0x110610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11060Cu, 0x110614u)) {
        return;
    }
    ctx->pc = 0x110614u;
label_110614:
    // 0x110614: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110618: 0x24a543e8  addiu       $a1, $a1, 0x43E8
    ctx->pc = 0x110618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17384));
    // 0x11061c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11061Cu;
    SET_GPR_U32(ctx, 31, 0x110624u);
    ctx->pc = 0x110620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11061Cu;
    // 0x110620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11061Cu, 0x110624u)) {
        return;
    }
    ctx->pc = 0x110624u;
label_110624:
    // 0x110624: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110628: 0x24a543f0  addiu       $a1, $a1, 0x43F0
    ctx->pc = 0x110628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17392));
    // 0x11062c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11062Cu;
    SET_GPR_U32(ctx, 31, 0x110634u);
    ctx->pc = 0x110630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11062Cu;
    // 0x110630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11062Cu, 0x110634u)) {
        return;
    }
    ctx->pc = 0x110634u;
label_110634:
    // 0x110634: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110638: 0x24a543f8  addiu       $a1, $a1, 0x43F8
    ctx->pc = 0x110638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17400));
    // 0x11063c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11063Cu;
    SET_GPR_U32(ctx, 31, 0x110644u);
    ctx->pc = 0x110640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11063Cu;
    // 0x110640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11063Cu, 0x110644u)) {
        return;
    }
    ctx->pc = 0x110644u;
label_110644:
    // 0x110644: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110648: 0x24a54400  addiu       $a1, $a1, 0x4400
    ctx->pc = 0x110648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17408));
    // 0x11064c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11064Cu;
    SET_GPR_U32(ctx, 31, 0x110654u);
    ctx->pc = 0x110650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11064Cu;
    // 0x110650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11064Cu, 0x110654u)) {
        return;
    }
    ctx->pc = 0x110654u;
label_110654:
    // 0x110654: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110658: 0x24a54408  addiu       $a1, $a1, 0x4408
    ctx->pc = 0x110658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17416));
    // 0x11065c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11065Cu;
    SET_GPR_U32(ctx, 31, 0x110664u);
    ctx->pc = 0x110660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11065Cu;
    // 0x110660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11065Cu, 0x110664u)) {
        return;
    }
    ctx->pc = 0x110664u;
label_110664:
    // 0x110664: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110668: 0x24a54410  addiu       $a1, $a1, 0x4410
    ctx->pc = 0x110668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17424));
    // 0x11066c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11066Cu;
    SET_GPR_U32(ctx, 31, 0x110674u);
    ctx->pc = 0x110670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11066Cu;
    // 0x110670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11066Cu, 0x110674u)) {
        return;
    }
    ctx->pc = 0x110674u;
label_110674:
    // 0x110674: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110678: 0x24a54418  addiu       $a1, $a1, 0x4418
    ctx->pc = 0x110678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17432));
    // 0x11067c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11067Cu;
    SET_GPR_U32(ctx, 31, 0x110684u);
    ctx->pc = 0x110680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11067Cu;
    // 0x110680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11067Cu, 0x110684u)) {
        return;
    }
    ctx->pc = 0x110684u;
label_110684:
    // 0x110684: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110688: 0x24a54420  addiu       $a1, $a1, 0x4420
    ctx->pc = 0x110688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17440));
    // 0x11068c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11068Cu;
    SET_GPR_U32(ctx, 31, 0x110694u);
    ctx->pc = 0x110690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11068Cu;
    // 0x110690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11068Cu, 0x110694u)) {
        return;
    }
    ctx->pc = 0x110694u;
label_110694:
    // 0x110694: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110698: 0x24a54428  addiu       $a1, $a1, 0x4428
    ctx->pc = 0x110698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17448));
    // 0x11069c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11069Cu;
    SET_GPR_U32(ctx, 31, 0x1106A4u);
    ctx->pc = 0x1106A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11069Cu;
    // 0x1106a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11069Cu, 0x1106A4u)) {
        return;
    }
    ctx->pc = 0x1106A4u;
label_1106a4:
    // 0x1106a4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1106a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1106a8: 0x24a54430  addiu       $a1, $a1, 0x4430
    ctx->pc = 0x1106a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17456));
    // 0x1106ac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1106ACu;
    SET_GPR_U32(ctx, 31, 0x1106B4u);
    ctx->pc = 0x1106B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106ACu;
    // 0x1106b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1106ACu, 0x1106B4u)) {
        return;
    }
    ctx->pc = 0x1106B4u;
label_1106b4:
    // 0x1106b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1106b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1106b8: 0x24a54438  addiu       $a1, $a1, 0x4438
    ctx->pc = 0x1106b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
    // 0x1106bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1106BCu;
    SET_GPR_U32(ctx, 31, 0x1106C4u);
    ctx->pc = 0x1106C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106BCu;
    // 0x1106c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1106BCu, 0x1106C4u)) {
        return;
    }
    ctx->pc = 0x1106C4u;
label_1106c4:
    // 0x1106c4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1106c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1106c8: 0x24a54440  addiu       $a1, $a1, 0x4440
    ctx->pc = 0x1106c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17472));
    // 0x1106cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1106CCu;
    SET_GPR_U32(ctx, 31, 0x1106D4u);
    ctx->pc = 0x1106D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106CCu;
    // 0x1106d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1106CCu, 0x1106D4u)) {
        return;
    }
    ctx->pc = 0x1106D4u;
label_1106d4:
    // 0x1106d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1106d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1106d8: 0x24a54448  addiu       $a1, $a1, 0x4448
    ctx->pc = 0x1106d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17480));
    // 0x1106dc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1106DCu;
    SET_GPR_U32(ctx, 31, 0x1106E4u);
    ctx->pc = 0x1106E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106DCu;
    // 0x1106e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1106DCu, 0x1106E4u)) {
        return;
    }
    ctx->pc = 0x1106E4u;
label_1106e4:
    // 0x1106e4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1106e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1106e8: 0x24a54450  addiu       $a1, $a1, 0x4450
    ctx->pc = 0x1106e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17488));
    // 0x1106ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1106ECu;
    SET_GPR_U32(ctx, 31, 0x1106F4u);
    ctx->pc = 0x1106F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106ECu;
    // 0x1106f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1106ECu, 0x1106F4u)) {
        return;
    }
    ctx->pc = 0x1106F4u;
label_1106f4:
    // 0x1106f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1106f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1106f8: 0x24a54458  addiu       $a1, $a1, 0x4458
    ctx->pc = 0x1106f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17496));
    // 0x1106fc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1106FCu;
    SET_GPR_U32(ctx, 31, 0x110704u);
    ctx->pc = 0x110700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106FCu;
    // 0x110700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1106FCu, 0x110704u)) {
        return;
    }
    ctx->pc = 0x110704u;
label_110704:
    // 0x110704: 0x3c17006b  lui         $s7, 0x6B
    ctx->pc = 0x110704u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
    // 0x110708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11070c: 0x26f74460  addiu       $s7, $s7, 0x4460
    ctx->pc = 0x11070cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 17504));
    // 0x110710: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x110710u;
    SET_GPR_U32(ctx, 31, 0x110718u);
    ctx->pc = 0x110714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110710u;
    // 0x110714: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x110710u, 0x110718u)) {
        return;
    }
    ctx->pc = 0x110718u;
label_110718:
    // 0x110718: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x110718u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x11071c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110720: 0x26d64468  addiu       $s6, $s6, 0x4468
    ctx->pc = 0x110720u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 17512));
    // 0x110724: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x110724u;
    SET_GPR_U32(ctx, 31, 0x11072Cu);
    ctx->pc = 0x110728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110724u;
    // 0x110728: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x110724u, 0x11072Cu)) {
        return;
    }
    ctx->pc = 0x11072Cu;
label_11072c:
    // 0x11072c: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x11072cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x110730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110734: 0x26b54470  addiu       $s5, $s5, 0x4470
    ctx->pc = 0x110734u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 17520));
    // 0x110738: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x110738u;
    SET_GPR_U32(ctx, 31, 0x110740u);
    ctx->pc = 0x11073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110738u;
    // 0x11073c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x110738u, 0x110740u)) {
        return;
    }
    ctx->pc = 0x110740u;
label_110740:
    // 0x110740: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x110740u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x110744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110748: 0x26944478  addiu       $s4, $s4, 0x4478
    ctx->pc = 0x110748u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17528));
    // 0x11074c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11074Cu;
    SET_GPR_U32(ctx, 31, 0x110754u);
    ctx->pc = 0x110750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11074Cu;
    // 0x110750: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11074Cu, 0x110754u)) {
        return;
    }
    ctx->pc = 0x110754u;
label_110754:
    // 0x110754: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x110754u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x110758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11075c: 0x26734480  addiu       $s3, $s3, 0x4480
    ctx->pc = 0x11075cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 17536));
    // 0x110760: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x110760u;
    SET_GPR_U32(ctx, 31, 0x110768u);
    ctx->pc = 0x110764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110760u;
    // 0x110764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x110760u, 0x110768u)) {
        return;
    }
    ctx->pc = 0x110768u;
label_110768:
    // 0x110768: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x110768u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x11076c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110770: 0x26524488  addiu       $s2, $s2, 0x4488
    ctx->pc = 0x110770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17544));
    // 0x110774: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x110774u;
    SET_GPR_U32(ctx, 31, 0x11077Cu);
    ctx->pc = 0x110778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110774u;
    // 0x110778: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x110774u, 0x11077Cu)) {
        return;
    }
    ctx->pc = 0x11077Cu;
label_11077c:
    // 0x11077c: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x11077cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x110780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110784: 0x26314490  addiu       $s1, $s1, 0x4490
    ctx->pc = 0x110784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17552));
    // 0x110788: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x110788u;
    SET_GPR_U32(ctx, 31, 0x110790u);
    ctx->pc = 0x11078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110788u;
    // 0x11078c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x110788u, 0x110790u)) {
        return;
    }
    ctx->pc = 0x110790u;
label_110790:
    // 0x110790: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110794: 0x24844390  addiu       $a0, $a0, 0x4390
    ctx->pc = 0x110794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    // 0x110798: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110798u;
    SET_GPR_U32(ctx, 31, 0x1107A0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110798u, 0x1107A0u)) {
        return;
    }
    ctx->pc = 0x1107A0u;
label_1107a0:
    // 0x1107a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1107a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1107a4: 0x24844398  addiu       $a0, $a0, 0x4398
    ctx->pc = 0x1107a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17304));
    // 0x1107a8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1107A8u;
    SET_GPR_U32(ctx, 31, 0x1107B0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1107A8u, 0x1107B0u)) {
        return;
    }
    ctx->pc = 0x1107B0u;
label_1107b0:
    // 0x1107b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1107b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1107b4: 0x248443a0  addiu       $a0, $a0, 0x43A0
    ctx->pc = 0x1107b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17312));
    // 0x1107b8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1107B8u;
    SET_GPR_U32(ctx, 31, 0x1107C0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1107B8u, 0x1107C0u)) {
        return;
    }
    ctx->pc = 0x1107C0u;
label_1107c0:
    // 0x1107c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1107c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1107c4: 0x248443a8  addiu       $a0, $a0, 0x43A8
    ctx->pc = 0x1107c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17320));
    // 0x1107c8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1107C8u;
    SET_GPR_U32(ctx, 31, 0x1107D0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1107C8u, 0x1107D0u)) {
        return;
    }
    ctx->pc = 0x1107D0u;
label_1107d0:
    // 0x1107d0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1107d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1107d4: 0x248443b0  addiu       $a0, $a0, 0x43B0
    ctx->pc = 0x1107d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17328));
    // 0x1107d8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1107D8u;
    SET_GPR_U32(ctx, 31, 0x1107E0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1107D8u, 0x1107E0u)) {
        return;
    }
    ctx->pc = 0x1107E0u;
label_1107e0:
    // 0x1107e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1107e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1107e4: 0x248443b8  addiu       $a0, $a0, 0x43B8
    ctx->pc = 0x1107e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
    // 0x1107e8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1107E8u;
    SET_GPR_U32(ctx, 31, 0x1107F0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1107E8u, 0x1107F0u)) {
        return;
    }
    ctx->pc = 0x1107F0u;
label_1107f0:
    // 0x1107f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1107f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1107f4: 0x248443c0  addiu       $a0, $a0, 0x43C0
    ctx->pc = 0x1107f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17344));
    // 0x1107f8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1107F8u;
    SET_GPR_U32(ctx, 31, 0x110800u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1107F8u, 0x110800u)) {
        return;
    }
    ctx->pc = 0x110800u;
label_110800:
    // 0x110800: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110804: 0x248443c8  addiu       $a0, $a0, 0x43C8
    ctx->pc = 0x110804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17352));
    // 0x110808: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110808u;
    SET_GPR_U32(ctx, 31, 0x110810u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110808u, 0x110810u)) {
        return;
    }
    ctx->pc = 0x110810u;
label_110810:
    // 0x110810: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110814: 0x248443d0  addiu       $a0, $a0, 0x43D0
    ctx->pc = 0x110814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17360));
    // 0x110818: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110818u;
    SET_GPR_U32(ctx, 31, 0x110820u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110818u, 0x110820u)) {
        return;
    }
    ctx->pc = 0x110820u;
label_110820:
    // 0x110820: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110824: 0x248443d8  addiu       $a0, $a0, 0x43D8
    ctx->pc = 0x110824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x110828: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110828u;
    SET_GPR_U32(ctx, 31, 0x110830u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110828u, 0x110830u)) {
        return;
    }
    ctx->pc = 0x110830u;
label_110830:
    // 0x110830: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110834: 0x248443e0  addiu       $a0, $a0, 0x43E0
    ctx->pc = 0x110834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17376));
    // 0x110838: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110838u;
    SET_GPR_U32(ctx, 31, 0x110840u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110838u, 0x110840u)) {
        return;
    }
    ctx->pc = 0x110840u;
label_110840:
    // 0x110840: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110844: 0x248443e8  addiu       $a0, $a0, 0x43E8
    ctx->pc = 0x110844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17384));
    // 0x110848: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110848u;
    SET_GPR_U32(ctx, 31, 0x110850u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110848u, 0x110850u)) {
        return;
    }
    ctx->pc = 0x110850u;
label_110850:
    // 0x110850: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110854: 0x248443f0  addiu       $a0, $a0, 0x43F0
    ctx->pc = 0x110854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    // 0x110858: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110858u;
    SET_GPR_U32(ctx, 31, 0x110860u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110858u, 0x110860u)) {
        return;
    }
    ctx->pc = 0x110860u;
label_110860:
    // 0x110860: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110864: 0x248443f8  addiu       $a0, $a0, 0x43F8
    ctx->pc = 0x110864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17400));
    // 0x110868: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110868u;
    SET_GPR_U32(ctx, 31, 0x110870u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110868u, 0x110870u)) {
        return;
    }
    ctx->pc = 0x110870u;
label_110870:
    // 0x110870: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110874: 0x24844400  addiu       $a0, $a0, 0x4400
    ctx->pc = 0x110874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17408));
    // 0x110878: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110878u;
    SET_GPR_U32(ctx, 31, 0x110880u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110878u, 0x110880u)) {
        return;
    }
    ctx->pc = 0x110880u;
label_110880:
    // 0x110880: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110884: 0x24844408  addiu       $a0, $a0, 0x4408
    ctx->pc = 0x110884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17416));
    // 0x110888: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110888u;
    SET_GPR_U32(ctx, 31, 0x110890u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110888u, 0x110890u)) {
        return;
    }
    ctx->pc = 0x110890u;
label_110890:
    // 0x110890: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110894: 0x24844410  addiu       $a0, $a0, 0x4410
    ctx->pc = 0x110894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
    // 0x110898: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110898u;
    SET_GPR_U32(ctx, 31, 0x1108A0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110898u, 0x1108A0u)) {
        return;
    }
    ctx->pc = 0x1108A0u;
label_1108a0:
    // 0x1108a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1108a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1108a4: 0x24844418  addiu       $a0, $a0, 0x4418
    ctx->pc = 0x1108a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17432));
    // 0x1108a8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1108A8u;
    SET_GPR_U32(ctx, 31, 0x1108B0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1108A8u, 0x1108B0u)) {
        return;
    }
    ctx->pc = 0x1108B0u;
label_1108b0:
    // 0x1108b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1108b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1108b4: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x1108b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x1108b8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1108B8u;
    SET_GPR_U32(ctx, 31, 0x1108C0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1108B8u, 0x1108C0u)) {
        return;
    }
    ctx->pc = 0x1108C0u;
label_1108c0:
    // 0x1108c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1108c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1108c4: 0x24844428  addiu       $a0, $a0, 0x4428
    ctx->pc = 0x1108c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17448));
    // 0x1108c8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1108C8u;
    SET_GPR_U32(ctx, 31, 0x1108D0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1108C8u, 0x1108D0u)) {
        return;
    }
    ctx->pc = 0x1108D0u;
label_1108d0:
    // 0x1108d0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1108d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1108d4: 0x24844430  addiu       $a0, $a0, 0x4430
    ctx->pc = 0x1108d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
    // 0x1108d8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1108D8u;
    SET_GPR_U32(ctx, 31, 0x1108E0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1108D8u, 0x1108E0u)) {
        return;
    }
    ctx->pc = 0x1108E0u;
label_1108e0:
    // 0x1108e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1108e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1108e4: 0x24844438  addiu       $a0, $a0, 0x4438
    ctx->pc = 0x1108e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17464));
    // 0x1108e8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1108E8u;
    SET_GPR_U32(ctx, 31, 0x1108F0u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1108E8u, 0x1108F0u)) {
        return;
    }
    ctx->pc = 0x1108F0u;
label_1108f0:
    // 0x1108f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1108f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1108f4: 0x24844440  addiu       $a0, $a0, 0x4440
    ctx->pc = 0x1108f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
    // 0x1108f8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1108F8u;
    SET_GPR_U32(ctx, 31, 0x110900u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1108F8u, 0x110900u)) {
        return;
    }
    ctx->pc = 0x110900u;
label_110900:
    // 0x110900: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110904: 0x24844448  addiu       $a0, $a0, 0x4448
    ctx->pc = 0x110904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17480));
    // 0x110908: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110908u;
    SET_GPR_U32(ctx, 31, 0x110910u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110908u, 0x110910u)) {
        return;
    }
    ctx->pc = 0x110910u;
label_110910:
    // 0x110910: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110914: 0x24844450  addiu       $a0, $a0, 0x4450
    ctx->pc = 0x110914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
    // 0x110918: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110918u;
    SET_GPR_U32(ctx, 31, 0x110920u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110918u, 0x110920u)) {
        return;
    }
    ctx->pc = 0x110920u;
label_110920:
    // 0x110920: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110924: 0x24844458  addiu       $a0, $a0, 0x4458
    ctx->pc = 0x110924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    // 0x110928: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110928u;
    SET_GPR_U32(ctx, 31, 0x110930u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110928u, 0x110930u)) {
        return;
    }
    ctx->pc = 0x110930u;
label_110930:
    // 0x110930: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110930u;
    SET_GPR_U32(ctx, 31, 0x110938u);
    ctx->pc = 0x110934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110930u;
    // 0x110934: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110930u, 0x110938u)) {
        return;
    }
    ctx->pc = 0x110938u;
label_110938:
    // 0x110938: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110938u;
    SET_GPR_U32(ctx, 31, 0x110940u);
    ctx->pc = 0x11093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110938u;
    // 0x11093c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110938u, 0x110940u)) {
        return;
    }
    ctx->pc = 0x110940u;
label_110940:
    // 0x110940: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110940u;
    SET_GPR_U32(ctx, 31, 0x110948u);
    ctx->pc = 0x110944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110940u;
    // 0x110944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110940u, 0x110948u)) {
        return;
    }
    ctx->pc = 0x110948u;
label_110948:
    // 0x110948: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110948u;
    SET_GPR_U32(ctx, 31, 0x110950u);
    ctx->pc = 0x11094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110948u;
    // 0x11094c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110948u, 0x110950u)) {
        return;
    }
    ctx->pc = 0x110950u;
label_110950:
    // 0x110950: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110950u;
    SET_GPR_U32(ctx, 31, 0x110958u);
    ctx->pc = 0x110954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110950u;
    // 0x110954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110950u, 0x110958u)) {
        return;
    }
    ctx->pc = 0x110958u;
label_110958:
    // 0x110958: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110958u;
    SET_GPR_U32(ctx, 31, 0x110960u);
    ctx->pc = 0x11095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110958u;
    // 0x11095c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110958u, 0x110960u)) {
        return;
    }
    ctx->pc = 0x110960u;
label_110960:
    // 0x110960: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x110960u;
    SET_GPR_U32(ctx, 31, 0x110968u);
    ctx->pc = 0x110964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110960u;
    // 0x110964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x110960u, 0x110968u)) {
        return;
    }
    ctx->pc = 0x110968u;
label_110968:
    // 0x110968: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x110968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11096c: 0xac408304  sw          $zero, -0x7CFC($v0)
    ctx->pc = 0x11096cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x338304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338304u, _value); } while (0);
    // 0x110970: 0x27c40044  addiu       $a0, $fp, 0x44
    ctx->pc = 0x110970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 68));
label_110974:
    // 0x110974: 0xc043c56  jal         func_10F158
    ctx->pc = 0x110974u;
    SET_GPR_U32(ctx, 31, 0x11097Cu);
    ctx->pc = 0x110978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110974u;
    // 0x110978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F158u, 0x110974u, 0x11097Cu)) {
        return;
    }
    ctx->pc = 0x11097Cu;
label_11097c:
    // 0x11097c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11097cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110980: 0xc04f084  jal         func_13C210
    ctx->pc = 0x110980u;
    SET_GPR_U32(ctx, 31, 0x110988u);
    ctx->pc = 0x110984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110980u;
    // 0x110984: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x110980u, 0x110988u)) {
        return;
    }
    ctx->pc = 0x110988u;
label_110988:
    // 0x110988: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x110988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11098c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x11098cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x110990: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x110990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x110994: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x110994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x110998: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x110998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11099c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11099cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1109a0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1109a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1109a4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1109a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1109a8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1109a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1109ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1109acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1109b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1109B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1109B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109B0u;
        // 0x1109b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1109B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1109B8u;
}
