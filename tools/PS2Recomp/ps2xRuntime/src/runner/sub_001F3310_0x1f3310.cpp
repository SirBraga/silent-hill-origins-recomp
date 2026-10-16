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

// Function: sub_001F3310
// Address: 0x1f3310 - 0x1f3560
void sub_001F3310_0x1f3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3310_0x1f3310");
#endif

    switch (ctx->pc) {
        case 0x1f3354u: goto label_1f3354;
        case 0x1f336cu: goto label_1f336c;
        case 0x1f3394u: goto label_1f3394;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33d4u: goto label_1f33d4;
        case 0x1f33e4u: goto label_1f33e4;
        case 0x1f3408u: goto label_1f3408;
        case 0x1f3418u: goto label_1f3418;
        case 0x1f3438u: goto label_1f3438;
        case 0x1f3470u: goto label_1f3470;
        case 0x1f3480u: goto label_1f3480;
        case 0x1f3498u: goto label_1f3498;
        case 0x1f34a8u: goto label_1f34a8;
        case 0x1f34b8u: goto label_1f34b8;
        case 0x1f34d0u: goto label_1f34d0;
        case 0x1f34e0u: goto label_1f34e0;
        case 0x1f34f0u: goto label_1f34f0;
        case 0x1f34f8u: goto label_1f34f8;
        case 0x1f350cu: goto label_1f350c;
        case 0x1f3518u: goto label_1f3518;
        default: break;
    }

    ctx->pc = 0x1f3310u;

    // 0x1f3310: 0x27bded60  addiu       $sp, $sp, -0x12A0
    ctx->pc = 0x1f3310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962528));
    // 0x1f3314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3318: 0x7fb01290  sq          $s0, 0x1290($sp)
    ctx->pc = 0x1f3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4752), GPR_VEC(ctx, 16));
    // 0x1f331c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f331cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3320: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1f3320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1f3324: 0x7fb11280  sq          $s1, 0x1280($sp)
    ctx->pc = 0x1f3324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4736), GPR_VEC(ctx, 17));
    // 0x1f3328: 0x8e04ead4  lw          $a0, -0x152C($s0)
    ctx->pc = 0x1f3328u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33EAD4u));
    // 0x1f332c: 0x7fb21270  sq          $s2, 0x1270($sp)
    ctx->pc = 0x1f332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4720), GPR_VEC(ctx, 18));
    // 0x1f3330: 0x7fb31260  sq          $s3, 0x1260($sp)
    ctx->pc = 0x1f3330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4704), GPR_VEC(ctx, 19));
    // 0x1f3334: 0x7fb41250  sq          $s4, 0x1250($sp)
    ctx->pc = 0x1f3334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4688), GPR_VEC(ctx, 20));
    // 0x1f3338: 0x7fb51240  sq          $s5, 0x1240($sp)
    ctx->pc = 0x1f3338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4672), GPR_VEC(ctx, 21));
    // 0x1f333c: 0x7fb61230  sq          $s6, 0x1230($sp)
    ctx->pc = 0x1f333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4656), GPR_VEC(ctx, 22));
    // 0x1f3340: 0x7fb71220  sq          $s7, 0x1220($sp)
    ctx->pc = 0x1f3340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4640), GPR_VEC(ctx, 23));
    // 0x1f3344: 0x7fbe1210  sq          $fp, 0x1210($sp)
    ctx->pc = 0x1f3344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4624), GPR_VEC(ctx, 30));
    // 0x1f3348: 0xffbf1200  sd          $ra, 0x1200($sp)
    ctx->pc = 0x1f3348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4608), GPR_U64(ctx, 31));
    // 0x1f334c: 0xc081782  jal         func_205E08
    ctx->pc = 0x1F334Cu;
    SET_GPR_U32(ctx, 31, 0x1F3354u);
    ctx->pc = 0x1F3350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F334Cu;
    // 0x1f3350: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205E08u, 0x1F334Cu, 0x1F3354u)) {
        return;
    }
    ctx->pc = 0x1F3354u;
label_1f3354:
    // 0x1f3354: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1F3354u;
    {
        const bool branch_taken_0x1f3354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3354u;
        // 0x1f3358: 0x8e04ead4  lw          $a0, -0x152C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3354) {
            ctx->pc = 0x1F3518u;
            goto label_1f3518;
        }
    }
    ctx->pc = 0x1F335Cu;
    // 0x1f335c: 0x27a511f0  addiu       $a1, $sp, 0x11F0
    ctx->pc = 0x1f335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4592));
    // 0x1f3360: 0xafa011f0  sw          $zero, 0x11F0($sp)
    ctx->pc = 0x1f3360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4592), GPR_U32(ctx, 0));
    // 0x1f3364: 0xc0814fa  jal         func_2053E8
    ctx->pc = 0x1F3364u;
    SET_GPR_U32(ctx, 31, 0x1F336Cu);
    ctx->pc = 0x1F3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3364u;
    // 0x1f3368: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2053E8u, 0x1F3364u, 0x1F336Cu)) {
        return;
    }
    ctx->pc = 0x1F336Cu;
label_1f336c:
    // 0x1f336c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f336cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3370: 0x12600069  beqz        $s3, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F3370u;
    {
        const bool branch_taken_0x1f3370 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3370u;
        // 0x1f3374: 0x8fa211f0  lw          $v0, 0x11F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3370) {
            ctx->pc = 0x1F3518u;
            goto label_1f3518;
        }
    }
    ctx->pc = 0x1F3378u;
    // 0x1f3378: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f3378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f337c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f3380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3384: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f3384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f3388: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f338c: 0xc065dea  jal         func_1977A8
    ctx->pc = 0x1F338Cu;
    SET_GPR_U32(ctx, 31, 0x1F3394u);
    ctx->pc = 0x1F3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F338Cu;
    // 0x1f3390: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1977A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1977A8u, 0x1F338Cu, 0x1F3394u)) {
        return;
    }
    ctx->pc = 0x1F3394u;
label_1f3394:
    // 0x1f3394: 0x8fa30dec  lw          $v1, 0xDEC($sp)
    ctx->pc = 0x1f3394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3564)));
    // 0x1f3398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f339c: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F339Cu;
    {
        const bool branch_taken_0x1f339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F339Cu;
        // 0x1f33a0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f339c) {
            ctx->pc = 0x1F3504u;
            goto label_1f3504;
        }
    }
    ctx->pc = 0x1F33A4u;
    // 0x1f33a4: 0x27b10df0  addiu       $s1, $sp, 0xDF0
    ctx->pc = 0x1f33a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 3568));
    // 0x1f33a8: 0x2456ea34  addiu       $s6, $v0, -0x15CC
    ctx->pc = 0x1f33a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961716));
    // 0x1f33ac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1f33acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f33b0: 0x24140032  addiu       $s4, $zero, 0x32
    ctx->pc = 0x1f33b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1f33b4: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x1f33b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x1f33b8: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1f33b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x1f33bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1f33c0:
    // 0x1f33c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f33c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33c4: 0x8c45ead8  lw          $a1, -0x1528($v0)
    ctx->pc = 0x1f33c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961880)));
    // 0x1f33c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f33c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33cc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1F33CCu;
    SET_GPR_U32(ctx, 31, 0x1F33D4u);
    ctx->pc = 0x1F33D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33CCu;
    // 0x1f33d0: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1F33CCu, 0x1F33D4u)) {
        return;
    }
    ctx->pc = 0x1F33D4u;
label_1f33d4:
    // 0x1f33d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F33D4u;
    {
        const bool branch_taken_0x1f33d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33D4u;
        // 0x1f33d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33d4) {
            ctx->pc = 0x1F33F0u;
            goto label_1f33f0;
        }
    }
    ctx->pc = 0x1F33DCu;
    // 0x1f33dc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1F33DCu;
    SET_GPR_U32(ctx, 31, 0x1F33E4u);
    ctx->pc = 0x1F33E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33DCu;
    // 0x1f33e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1F33DCu, 0x1F33E4u)) {
        return;
    }
    ctx->pc = 0x1F33E4u;
label_1f33e4:
    // 0x1f33e4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f33e8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1F33E8u;
    {
        const bool branch_taken_0x1f33e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33E8u;
        // 0x1f33ec: 0xac62ead0  sw          $v0, -0x1530($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33e8) {
            ctx->pc = 0x1F34F0u;
            goto label_1f34f0;
        }
    }
    ctx->pc = 0x1F33F0u;
label_1f33f0:
    // 0x1f33f0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f33f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f33f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33f8: 0x8c65eadc  lw          $a1, -0x1524($v1)
    ctx->pc = 0x1f33f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33EADCu));
    // 0x1f33fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f33fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3400: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1F3400u;
    SET_GPR_U32(ctx, 31, 0x1F3408u);
    ctx->pc = 0x1F3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3400u;
    // 0x1f3404: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1F3400u, 0x1F3408u)) {
        return;
    }
    ctx->pc = 0x1F3408u;
label_1f3408:
    // 0x1f3408: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F3408u;
    {
        const bool branch_taken_0x1f3408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3408u;
        // 0x1f340c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3408) {
            ctx->pc = 0x1F3458u;
            goto label_1f3458;
        }
    }
    ctx->pc = 0x1F3410u;
    // 0x1f3410: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1f3410u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1f3414: 0x0  nop
    ctx->pc = 0x1f3414u;
    // NOP
label_1f3418:
    // 0x1f3418: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1f3418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f341c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F341Cu;
    {
        const bool branch_taken_0x1f341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F341Cu;
        // 0x1f3420: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f341c) {
            ctx->pc = 0x1F3450u;
            goto label_1f3450;
        }
    }
    ctx->pc = 0x1F3424u;
    // 0x1f3424: 0x27a40df0  addiu       $a0, $sp, 0xDF0
    ctx->pc = 0x1f3424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3568));
    // 0x1f3428: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x1f3428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f342c: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x1f342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1f3430: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x1F3430u;
    SET_GPR_U32(ctx, 31, 0x1F3438u);
    ctx->pc = 0x1F3434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3430u;
    // 0x1f3434: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x1F3430u, 0x1F3438u)) {
        return;
    }
    ctx->pc = 0x1F3438u;
label_1f3438:
    // 0x1f3438: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3438u;
    {
        const bool branch_taken_0x1f3438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3438) {
            ctx->pc = 0x1F343Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3438u;
            // 0x1f343c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3418;
        }
    }
    ctx->pc = 0x1F3440u;
    // 0x1f3440: 0x8e42eac0  lw          $v0, -0x1540($s2)
    ctx->pc = 0x1f3440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961856)));
    // 0x1f3444: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3444u;
    {
        const bool branch_taken_0x1f3444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3444u;
        // 0x1f3448: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3444) {
            ctx->pc = 0x1F3450u;
            goto label_1f3450;
        }
    }
    ctx->pc = 0x1F344Cu;
    // 0x1f344c: 0xac50eac4  sw          $s0, -0x153C($v0)
    ctx->pc = 0x1f344cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961860), GPR_U32(ctx, 16));
label_1f3450:
    // 0x1f3450: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F3450u;
    {
        const bool branch_taken_0x1f3450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3450u;
        // 0x1f3454: 0xae55eac0  sw          $s5, -0x1540($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294961856), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3450) {
            ctx->pc = 0x1F34F0u;
            goto label_1f34f0;
        }
    }
    ctx->pc = 0x1F3458u;
label_1f3458:
    // 0x1f3458: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f3458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f345c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3460: 0x8c45eae0  lw          $a1, -0x1520($v0)
    ctx->pc = 0x1f3460u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33EAE0u));
    // 0x1f3464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3468: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1F3468u;
    SET_GPR_U32(ctx, 31, 0x1F3470u);
    ctx->pc = 0x1F346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3468u;
    // 0x1f346c: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1F3468u, 0x1F3470u)) {
        return;
    }
    ctx->pc = 0x1F3470u;
label_1f3470:
    // 0x1f3470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3470u;
    {
        const bool branch_taken_0x1f3470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3470u;
        // 0x1f3474: 0x8fc5eae4  lw          $a1, -0x151C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294961892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3470) {
            ctx->pc = 0x1F3488u;
            goto label_1f3488;
        }
    }
    ctx->pc = 0x1F3478u;
    // 0x1f3478: 0xc074b5a  jal         func_1D2D68
    ctx->pc = 0x1F3478u;
    SET_GPR_U32(ctx, 31, 0x1F3480u);
    ctx->pc = 0x1F347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3478u;
    // 0x1f347c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2D68u, 0x1F3478u, 0x1F3480u)) {
        return;
    }
    ctx->pc = 0x1F3480u;
label_1f3480:
    // 0x1f3480: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F3480u;
    {
        const bool branch_taken_0x1f3480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3480) {
            ctx->pc = 0x1F34F0u;
            goto label_1f34f0;
        }
    }
    ctx->pc = 0x1F3488u;
label_1f3488:
    // 0x1f3488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f3488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f348c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f348cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3490: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1F3490u;
    SET_GPR_U32(ctx, 31, 0x1F3498u);
    ctx->pc = 0x1F3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3490u;
    // 0x1f3494: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1F3490u, 0x1F3498u)) {
        return;
    }
    ctx->pc = 0x1F3498u;
label_1f3498:
    // 0x1f3498: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3498u;
    {
        const bool branch_taken_0x1f3498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3498u;
        // 0x1f349c: 0x8ee5eae8  lw          $a1, -0x1518($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294961896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3498) {
            ctx->pc = 0x1F34C0u;
            goto label_1f34c0;
        }
    }
    ctx->pc = 0x1F34A0u;
    // 0x1f34a0: 0xc06bb60  jal         func_1AED80
    ctx->pc = 0x1F34A0u;
    SET_GPR_U32(ctx, 31, 0x1F34A8u);
    ctx->pc = 0x1F34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34A0u;
    // 0x1f34a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AED80u, 0x1F34A0u, 0x1F34A8u)) {
        return;
    }
    ctx->pc = 0x1F34A8u;
label_1f34a8:
    // 0x1f34a8: 0x10540011  beq         $v0, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F34A8u;
    {
        const bool branch_taken_0x1f34a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1f34a8) {
            ctx->pc = 0x1F34F0u;
            goto label_1f34f0;
        }
    }
    ctx->pc = 0x1F34B0u;
    // 0x1f34b0: 0xc06ce1a  jal         func_1B3868
    ctx->pc = 0x1F34B0u;
    SET_GPR_U32(ctx, 31, 0x1F34B8u);
    ctx->pc = 0x1F34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34B0u;
    // 0x1f34b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3868u, 0x1F34B0u, 0x1F34B8u)) {
        return;
    }
    ctx->pc = 0x1F34B8u;
label_1f34b8:
    // 0x1f34b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F34B8u;
    {
        const bool branch_taken_0x1f34b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f34b8) {
            ctx->pc = 0x1F34F0u;
            goto label_1f34f0;
        }
    }
    ctx->pc = 0x1F34C0u;
label_1f34c0:
    // 0x1f34c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f34c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f34c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34c8: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1F34C8u;
    SET_GPR_U32(ctx, 31, 0x1F34D0u);
    ctx->pc = 0x1F34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34C8u;
    // 0x1f34cc: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1F34C8u, 0x1F34D0u)) {
        return;
    }
    ctx->pc = 0x1F34D0u;
label_1f34d0:
    // 0x1f34d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F34D0u;
    {
        const bool branch_taken_0x1f34d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f34d0) {
            ctx->pc = 0x1F34F0u;
            goto label_1f34f0;
        }
    }
    ctx->pc = 0x1F34D8u;
    // 0x1f34d8: 0xc06bb60  jal         func_1AED80
    ctx->pc = 0x1F34D8u;
    SET_GPR_U32(ctx, 31, 0x1F34E0u);
    ctx->pc = 0x1F34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34D8u;
    // 0x1f34dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AED80u, 0x1F34D8u, 0x1F34E0u)) {
        return;
    }
    ctx->pc = 0x1F34E0u;
label_1f34e0:
    // 0x1f34e0: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F34E0u;
    {
        const bool branch_taken_0x1f34e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1f34e0) {
            ctx->pc = 0x1F34F0u;
            goto label_1f34f0;
        }
    }
    ctx->pc = 0x1F34E8u;
    // 0x1f34e8: 0xc06ce1e  jal         func_1B3878
    ctx->pc = 0x1F34E8u;
    SET_GPR_U32(ctx, 31, 0x1F34F0u);
    ctx->pc = 0x1F34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34E8u;
    // 0x1f34ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3878u, 0x1F34E8u, 0x1F34F0u)) {
        return;
    }
    ctx->pc = 0x1F34F0u;
label_1f34f0:
    // 0x1f34f0: 0xc065cba  jal         func_1972E8
    ctx->pc = 0x1F34F0u;
    SET_GPR_U32(ctx, 31, 0x1F34F8u);
    ctx->pc = 0x1F34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34F0u;
    // 0x1f34f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1972E8u, 0x1F34F0u, 0x1F34F8u)) {
        return;
    }
    ctx->pc = 0x1F34F8u;
label_1f34f8:
    // 0x1f34f8: 0x8fa30dec  lw          $v1, 0xDEC($sp)
    ctx->pc = 0x1f34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3564)));
    // 0x1f34fc: 0x1475ffb0  bne         $v1, $s5, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1F34FCu;
    {
        const bool branch_taken_0x1f34fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x1F3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34FCu;
        // 0x1f3500: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34fc) {
            ctx->pc = 0x1F33C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f33c0;
        }
    }
    ctx->pc = 0x1F3504u;
label_1f3504:
    // 0x1f3504: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F3504u;
    SET_GPR_U32(ctx, 31, 0x1F350Cu);
    ctx->pc = 0x1F3508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3504u;
    // 0x1f3508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F3504u, 0x1F350Cu)) {
        return;
    }
    ctx->pc = 0x1F350Cu;
label_1f350c:
    // 0x1f350c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3510: 0xc065df8  jal         func_1977E0
    ctx->pc = 0x1F3510u;
    SET_GPR_U32(ctx, 31, 0x1F3518u);
    ctx->pc = 0x1F3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3510u;
    // 0x1f3514: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1977E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1977E0u, 0x1F3510u, 0x1F3518u)) {
        return;
    }
    ctx->pc = 0x1F3518u;
label_1f3518:
    // 0x1f3518: 0x7bb01290  lq          $s0, 0x1290($sp)
    ctx->pc = 0x1f3518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4752)));
    // 0x1f351c: 0x7bb11280  lq          $s1, 0x1280($sp)
    ctx->pc = 0x1f351cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4736)));
    // 0x1f3520: 0x7bb21270  lq          $s2, 0x1270($sp)
    ctx->pc = 0x1f3520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4720)));
    // 0x1f3524: 0x7bb31260  lq          $s3, 0x1260($sp)
    ctx->pc = 0x1f3524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4704)));
    // 0x1f3528: 0x7bb41250  lq          $s4, 0x1250($sp)
    ctx->pc = 0x1f3528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4688)));
    // 0x1f352c: 0x7bb51240  lq          $s5, 0x1240($sp)
    ctx->pc = 0x1f352cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4672)));
    // 0x1f3530: 0x7bb61230  lq          $s6, 0x1230($sp)
    ctx->pc = 0x1f3530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 4656)));
    // 0x1f3534: 0x7bb71220  lq          $s7, 0x1220($sp)
    ctx->pc = 0x1f3534u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 4640)));
    // 0x1f3538: 0x7bbe1210  lq          $fp, 0x1210($sp)
    ctx->pc = 0x1f3538u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 4624)));
    // 0x1f353c: 0xdfbf1200  ld          $ra, 0x1200($sp)
    ctx->pc = 0x1f353cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4608)));
    // 0x1f3540: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3540u;
        // 0x1f3544: 0x27bd12a0  addiu       $sp, $sp, 0x12A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3548u;
    // 0x1f3548: 0x27bd0460  addiu       $sp, $sp, 0x460
    ctx->pc = 0x1f3548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x1f354c: 0x0  nop
    ctx->pc = 0x1f354cu;
    // NOP
    // 0x1f3550: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f3550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3554: 0x0  nop
    ctx->pc = 0x1f3554u;
    // NOP
    // 0x1f3558: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f355c: 0x0  nop
    ctx->pc = 0x1f355cu;
    // NOP
    ctx->pc = 0x1f3560u;
}
