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

// Function: sub_002E37C0
// Address: 0x2e37c0 - 0x2e39a0
void sub_002E37C0_0x2e37c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E37C0_0x2e37c0");
#endif

    switch (ctx->pc) {
        case 0x2e37c0u: goto label_2e37c0;
        case 0x2e37c4u: goto label_2e37c4;
        case 0x2e37c8u: goto label_2e37c8;
        case 0x2e37ccu: goto label_2e37cc;
        case 0x2e37d0u: goto label_2e37d0;
        case 0x2e37d4u: goto label_2e37d4;
        case 0x2e37d8u: goto label_2e37d8;
        case 0x2e37dcu: goto label_2e37dc;
        case 0x2e37e0u: goto label_2e37e0;
        case 0x2e37e4u: goto label_2e37e4;
        case 0x2e37e8u: goto label_2e37e8;
        case 0x2e37ecu: goto label_2e37ec;
        case 0x2e37f0u: goto label_2e37f0;
        case 0x2e37f4u: goto label_2e37f4;
        case 0x2e37f8u: goto label_2e37f8;
        case 0x2e37fcu: goto label_2e37fc;
        case 0x2e3800u: goto label_2e3800;
        case 0x2e3804u: goto label_2e3804;
        case 0x2e3808u: goto label_2e3808;
        case 0x2e380cu: goto label_2e380c;
        case 0x2e3810u: goto label_2e3810;
        case 0x2e3814u: goto label_2e3814;
        case 0x2e3818u: goto label_2e3818;
        case 0x2e381cu: goto label_2e381c;
        case 0x2e3820u: goto label_2e3820;
        case 0x2e3824u: goto label_2e3824;
        case 0x2e3828u: goto label_2e3828;
        case 0x2e382cu: goto label_2e382c;
        case 0x2e3830u: goto label_2e3830;
        case 0x2e3834u: goto label_2e3834;
        case 0x2e3838u: goto label_2e3838;
        case 0x2e383cu: goto label_2e383c;
        case 0x2e3840u: goto label_2e3840;
        case 0x2e3844u: goto label_2e3844;
        case 0x2e3848u: goto label_2e3848;
        case 0x2e384cu: goto label_2e384c;
        case 0x2e3850u: goto label_2e3850;
        case 0x2e3854u: goto label_2e3854;
        case 0x2e3858u: goto label_2e3858;
        case 0x2e385cu: goto label_2e385c;
        case 0x2e3860u: goto label_2e3860;
        case 0x2e3864u: goto label_2e3864;
        case 0x2e3868u: goto label_2e3868;
        case 0x2e386cu: goto label_2e386c;
        case 0x2e3870u: goto label_2e3870;
        case 0x2e3874u: goto label_2e3874;
        case 0x2e3878u: goto label_2e3878;
        case 0x2e387cu: goto label_2e387c;
        case 0x2e3880u: goto label_2e3880;
        case 0x2e3884u: goto label_2e3884;
        case 0x2e3888u: goto label_2e3888;
        case 0x2e388cu: goto label_2e388c;
        case 0x2e3890u: goto label_2e3890;
        case 0x2e3894u: goto label_2e3894;
        case 0x2e3898u: goto label_2e3898;
        case 0x2e389cu: goto label_2e389c;
        case 0x2e38a0u: goto label_2e38a0;
        case 0x2e38a4u: goto label_2e38a4;
        case 0x2e38a8u: goto label_2e38a8;
        case 0x2e38acu: goto label_2e38ac;
        case 0x2e38b0u: goto label_2e38b0;
        case 0x2e38b4u: goto label_2e38b4;
        case 0x2e38b8u: goto label_2e38b8;
        case 0x2e38bcu: goto label_2e38bc;
        case 0x2e38c0u: goto label_2e38c0;
        case 0x2e38c4u: goto label_2e38c4;
        case 0x2e38c8u: goto label_2e38c8;
        case 0x2e38ccu: goto label_2e38cc;
        case 0x2e38d0u: goto label_2e38d0;
        case 0x2e38d4u: goto label_2e38d4;
        case 0x2e38d8u: goto label_2e38d8;
        case 0x2e38dcu: goto label_2e38dc;
        case 0x2e38e0u: goto label_2e38e0;
        case 0x2e38e4u: goto label_2e38e4;
        case 0x2e38e8u: goto label_2e38e8;
        case 0x2e38ecu: goto label_2e38ec;
        case 0x2e38f0u: goto label_2e38f0;
        case 0x2e38f4u: goto label_2e38f4;
        case 0x2e38f8u: goto label_2e38f8;
        case 0x2e38fcu: goto label_2e38fc;
        case 0x2e3900u: goto label_2e3900;
        case 0x2e3904u: goto label_2e3904;
        case 0x2e3908u: goto label_2e3908;
        case 0x2e390cu: goto label_2e390c;
        case 0x2e3910u: goto label_2e3910;
        case 0x2e3914u: goto label_2e3914;
        case 0x2e3918u: goto label_2e3918;
        case 0x2e391cu: goto label_2e391c;
        case 0x2e3920u: goto label_2e3920;
        case 0x2e3924u: goto label_2e3924;
        case 0x2e3928u: goto label_2e3928;
        case 0x2e392cu: goto label_2e392c;
        case 0x2e3930u: goto label_2e3930;
        case 0x2e3934u: goto label_2e3934;
        case 0x2e3938u: goto label_2e3938;
        case 0x2e393cu: goto label_2e393c;
        case 0x2e3940u: goto label_2e3940;
        case 0x2e3944u: goto label_2e3944;
        case 0x2e3948u: goto label_2e3948;
        case 0x2e394cu: goto label_2e394c;
        case 0x2e3950u: goto label_2e3950;
        case 0x2e3954u: goto label_2e3954;
        case 0x2e3958u: goto label_2e3958;
        case 0x2e395cu: goto label_2e395c;
        case 0x2e3960u: goto label_2e3960;
        case 0x2e3964u: goto label_2e3964;
        case 0x2e3968u: goto label_2e3968;
        case 0x2e396cu: goto label_2e396c;
        case 0x2e3970u: goto label_2e3970;
        case 0x2e3974u: goto label_2e3974;
        case 0x2e3978u: goto label_2e3978;
        case 0x2e397cu: goto label_2e397c;
        case 0x2e3980u: goto label_2e3980;
        case 0x2e3984u: goto label_2e3984;
        case 0x2e3988u: goto label_2e3988;
        case 0x2e398cu: goto label_2e398c;
        case 0x2e3990u: goto label_2e3990;
        case 0x2e3994u: goto label_2e3994;
        case 0x2e3998u: goto label_2e3998;
        case 0x2e399cu: goto label_2e399c;
        default: break;
    }

    ctx->pc = 0x2e37c0u;

label_2e37c0:
    // 0x2e37c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e37c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e37c4:
    // 0x2e37c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e37c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2e37c8:
    // 0x2e37c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e37c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2e37cc:
    // 0x2e37cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e37ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e37d0:
    // 0x2e37d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e37d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e37d4:
    // 0x2e37d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e37d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2e37d8:
    // 0x2e37d8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2e37d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2e37dc:
    // 0x2e37dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e37dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e37e0:
    // 0x2e37e0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2e37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e37e4:
    // 0x2e37e4: 0x5090000a  beql        $a0, $s0, . + 4 + (0xA << 2)
label_2e37e8:
    if (ctx->pc == 0x2E37E8u) {
        ctx->pc = 0x2E37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37E4u;
        // 0x2e37e8: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37ECu;
        goto label_2e37ec;
    }
    ctx->pc = 0x2E37E4u;
    {
        const bool branch_taken_0x2e37e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e37e4) {
            ctx->pc = 0x2E37E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E37E4u;
            // 0x2e37e8: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3810u;
            goto label_2e3810;
        }
    }
    ctx->pc = 0x2E37ECu;
label_2e37ec:
    // 0x2e37ec: 0x0  nop
    ctx->pc = 0x2e37ecu;
    // NOP
label_2e37f0:
    // 0x2e37f0: 0xc0b8df0  jal         func_2E37C0
label_2e37f4:
    if (ctx->pc == 0x2E37F4u) {
        ctx->pc = 0x2E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37F0u;
        // 0x2e37f4: 0x2484ffe8  addiu       $a0, $a0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37F8u;
        goto label_2e37f8;
    }
    ctx->pc = 0x2E37F0u;
    SET_GPR_U32(ctx, 31, 0x2E37F8u);
    ctx->pc = 0x2E37F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E37F0u;
    // 0x2e37f4: 0x2484ffe8  addiu       $a0, $a0, -0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    goto label_2e37c0;
    ctx->pc = 0x2E37F8u;
label_2e37f8:
    // 0x2e37f8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2e37fc:
    if (ctx->pc == 0x2E37FCu) {
        ctx->pc = 0x2E37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37F8u;
        // 0x2e37fc: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3800u;
        goto label_2e3800;
    }
    ctx->pc = 0x2E37F8u;
    {
        const bool branch_taken_0x2e37f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37F8u;
        // 0x2e37fc: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37f8) {
            ctx->pc = 0x2E38C0u;
            goto label_2e38c0;
        }
    }
    ctx->pc = 0x2E3800u;
label_2e3800:
    // 0x2e3800: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2e3800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e3804:
    // 0x2e3804: 0x1490fffa  bne         $a0, $s0, . + 4 + (-0x6 << 2)
label_2e3808:
    if (ctx->pc == 0x2E3808u) {
        ctx->pc = 0x2E380Cu;
        goto label_2e380c;
    }
    ctx->pc = 0x2E3804u;
    {
        const bool branch_taken_0x2e3804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e3804) {
            ctx->pc = 0x2E37F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e37f0;
        }
    }
    ctx->pc = 0x2E380Cu;
label_2e380c:
    // 0x2e380c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2e380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2e3810:
    // 0x2e3810: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e3814:
    if (ctx->pc == 0x2E3814u) {
        ctx->pc = 0x2E3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3810u;
        // 0x2e3814: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3818u;
        goto label_2e3818;
    }
    ctx->pc = 0x2E3810u;
    {
        const bool branch_taken_0x2e3810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3810) {
            ctx->pc = 0x2E3814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3810u;
            // 0x2e3814: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3824u;
            goto label_2e3824;
        }
    }
    ctx->pc = 0x2E3818u;
label_2e3818:
    // 0x2e3818: 0x40f809  jalr        $v0
label_2e381c:
    if (ctx->pc == 0x2E381Cu) {
        ctx->pc = 0x2E381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3818u;
        // 0x2e381c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3820u;
        goto label_2e3820;
    }
    ctx->pc = 0x2E3818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E3820u);
        ctx->pc = 0x2E381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3818u;
        // 0x2e381c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3818u, 0x2E3820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3820u;
label_2e3820:
    // 0x2e3820: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e3820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e3824:
    // 0x2e3824: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e3824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e3828:
    // 0x2e3828: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2e382c:
    if (ctx->pc == 0x2E382Cu) {
        ctx->pc = 0x2E382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3828u;
        // 0x2e382c: 0x3c130071  lui         $s3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3830u;
        goto label_2e3830;
    }
    ctx->pc = 0x2E3828u;
    {
        const bool branch_taken_0x2e3828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3828u;
        // 0x2e382c: 0x3c130071  lui         $s3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3828) {
            ctx->pc = 0x2E385Cu;
            goto label_2e385c;
        }
    }
    ctx->pc = 0x2E3830u;
label_2e3830:
    // 0x2e3830: 0x8e32004c  lw          $s2, 0x4C($s1)
    ctx->pc = 0x2e3830u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2e3834:
    // 0x2e3834: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2e3834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e3838:
    // 0x2e3838: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x2e3838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2e383c:
    // 0x2e383c: 0x50900008  beql        $a0, $s0, . + 4 + (0x8 << 2)
label_2e3840:
    if (ctx->pc == 0x2E3840u) {
        ctx->pc = 0x2E3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E383Cu;
        // 0x2e3840: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3844u;
        goto label_2e3844;
    }
    ctx->pc = 0x2E383Cu;
    {
        const bool branch_taken_0x2e383c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e383c) {
            ctx->pc = 0x2E3840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E383Cu;
            // 0x2e3840: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3860u;
            goto label_2e3860;
        }
    }
    ctx->pc = 0x2E3844u;
label_2e3844:
    // 0x2e3844: 0x0  nop
    ctx->pc = 0x2e3844u;
    // NOP
label_2e3848:
    // 0x2e3848: 0xc0b6c38  jal         func_2DB0E0
label_2e384c:
    if (ctx->pc == 0x2E384Cu) {
        ctx->pc = 0x2E384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3848u;
        // 0x2e384c: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3850u;
        goto label_2e3850;
    }
    ctx->pc = 0x2E3848u;
    SET_GPR_U32(ctx, 31, 0x2E3850u);
    ctx->pc = 0x2E384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3848u;
    // 0x2e384c: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB0E0u, 0x2E3848u, 0x2E3850u)) {
        return;
    }
    ctx->pc = 0x2E3850u;
label_2e3850:
    // 0x2e3850: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2e3850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e3854:
    // 0x2e3854: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
label_2e3858:
    if (ctx->pc == 0x2E3858u) {
        ctx->pc = 0x2E385Cu;
        goto label_2e385c;
    }
    ctx->pc = 0x2E3854u;
    {
        const bool branch_taken_0x2e3854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e3854) {
            ctx->pc = 0x2E3848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3848;
        }
    }
    ctx->pc = 0x2E385Cu;
label_2e385c:
    // 0x2e385c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e3860:
    // 0x2e3860: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e3860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2e3864:
    // 0x2e3864: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2e3868:
    if (ctx->pc == 0x2E3868u) {
        ctx->pc = 0x2E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3864u;
        // 0x2e3868: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E386Cu;
        goto label_2e386c;
    }
    ctx->pc = 0x2E3864u;
    {
        const bool branch_taken_0x2e3864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3864) {
            ctx->pc = 0x2E3868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3864u;
            // 0x2e3868: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3898u;
            goto label_2e3898;
        }
    }
    ctx->pc = 0x2E386Cu;
label_2e386c:
    // 0x2e386c: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x2e386cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2e3870:
    // 0x2e3870: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e3870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e3874:
    // 0x2e3874: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2e3874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e3878:
    // 0x2e3878: 0x50900007  beql        $a0, $s0, . + 4 + (0x7 << 2)
label_2e387c:
    if (ctx->pc == 0x2E387Cu) {
        ctx->pc = 0x2E387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3878u;
        // 0x2e387c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3880u;
        goto label_2e3880;
    }
    ctx->pc = 0x2E3878u;
    {
        const bool branch_taken_0x2e3878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e3878) {
            ctx->pc = 0x2E387Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3878u;
            // 0x2e387c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3898u;
            goto label_2e3898;
        }
    }
    ctx->pc = 0x2E3880u;
label_2e3880:
    // 0x2e3880: 0xc0ba27e  jal         func_2E89F8
label_2e3884:
    if (ctx->pc == 0x2E3884u) {
        ctx->pc = 0x2E3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3880u;
        // 0x2e3884: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3888u;
        goto label_2e3888;
    }
    ctx->pc = 0x2E3880u;
    SET_GPR_U32(ctx, 31, 0x2E3888u);
    ctx->pc = 0x2E3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3880u;
    // 0x2e3884: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E89F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E89F8u, 0x2E3880u, 0x2E3888u)) {
        return;
    }
    ctx->pc = 0x2E3888u;
label_2e3888:
    // 0x2e3888: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e3888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e388c:
    // 0x2e388c: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
label_2e3890:
    if (ctx->pc == 0x2E3890u) {
        ctx->pc = 0x2E3894u;
        goto label_2e3894;
    }
    ctx->pc = 0x2E388Cu;
    {
        const bool branch_taken_0x2e388c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e388c) {
            ctx->pc = 0x2E3880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3880;
        }
    }
    ctx->pc = 0x2E3894u;
label_2e3894:
    // 0x2e3894: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x2e3894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2e3898:
    // 0x2e3898: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_2e389c:
    if (ctx->pc == 0x2E389Cu) {
        ctx->pc = 0x2E389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3898u;
        // 0x2e389c: 0x26628388  addiu       $v0, $s3, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38A0u;
        goto label_2e38a0;
    }
    ctx->pc = 0x2E3898u;
    {
        const bool branch_taken_0x2e3898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3898u;
        // 0x2e389c: 0x26628388  addiu       $v0, $s3, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3898) {
            ctx->pc = 0x2E38E0u;
            goto label_2e38e0;
        }
    }
    ctx->pc = 0x2E38A0u;
label_2e38a0:
    // 0x2e38a0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e38a4:
    // 0x2e38a4: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2e38a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_2e38a8:
    // 0x2e38a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e38ac:
    if (ctx->pc == 0x2E38ACu) {
        ctx->pc = 0x2E38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38A8u;
        // 0x2e38ac: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38B0u;
        goto label_2e38b0;
    }
    ctx->pc = 0x2E38A8u;
    {
        const bool branch_taken_0x2e38a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38A8u;
        // 0x2e38ac: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38a8) {
            ctx->pc = 0x2E38C8u;
            goto label_2e38c8;
        }
    }
    ctx->pc = 0x2E38B0u;
label_2e38b0:
    // 0x2e38b0: 0xc0b82d0  jal         func_2E0B40
label_2e38b4:
    if (ctx->pc == 0x2E38B4u) {
        ctx->pc = 0x2E38B8u;
        goto label_2e38b8;
    }
    ctx->pc = 0x2E38B0u;
    SET_GPR_U32(ctx, 31, 0x2E38B8u);
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2E38B0u, 0x2E38B8u)) {
        return;
    }
    ctx->pc = 0x2E38B8u;
label_2e38b8:
    // 0x2e38b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e38bc:
    if (ctx->pc == 0x2E38BCu) {
        ctx->pc = 0x2E38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38B8u;
        // 0x2e38bc: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38C0u;
        goto label_2e38c0;
    }
    ctx->pc = 0x2E38B8u;
    {
        const bool branch_taken_0x2e38b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38B8u;
        // 0x2e38bc: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38b8) {
            ctx->pc = 0x2E38DCu;
            goto label_2e38dc;
        }
    }
    ctx->pc = 0x2E38C0u;
label_2e38c0:
    // 0x2e38c0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2e38c4:
    if (ctx->pc == 0x2E38C4u) {
        ctx->pc = 0x2E38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38C0u;
        // 0x2e38c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38C8u;
        goto label_2e38c8;
    }
    ctx->pc = 0x2E38C0u;
    {
        const bool branch_taken_0x2e38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38C0u;
        // 0x2e38c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38c0) {
            ctx->pc = 0x2E3980u;
            goto label_2e3980;
        }
    }
    ctx->pc = 0x2E38C8u;
label_2e38c8:
    // 0x2e38c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e38cc:
    if (ctx->pc == 0x2E38CCu) {
        ctx->pc = 0x2E38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38C8u;
        // 0x2e38cc: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38D0u;
        goto label_2e38d0;
    }
    ctx->pc = 0x2E38C8u;
    {
        const bool branch_taken_0x2e38c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e38c8) {
            ctx->pc = 0x2E38CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E38C8u;
            // 0x2e38cc: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E38DCu;
            goto label_2e38dc;
        }
    }
    ctx->pc = 0x2E38D0u;
label_2e38d0:
    // 0x2e38d0: 0xc0b849a  jal         func_2E1268
label_2e38d4:
    if (ctx->pc == 0x2E38D4u) {
        ctx->pc = 0x2E38D8u;
        goto label_2e38d8;
    }
    ctx->pc = 0x2E38D0u;
    SET_GPR_U32(ctx, 31, 0x2E38D8u);
    ctx->pc = 0x2E1268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1268u, 0x2E38D0u, 0x2E38D8u)) {
        return;
    }
    ctx->pc = 0x2E38D8u;
label_2e38d8:
    // 0x2e38d8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x2e38d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_2e38dc:
    // 0x2e38dc: 0x26628388  addiu       $v0, $s3, -0x7C78
    ctx->pc = 0x2e38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935432));
label_2e38e0:
    // 0x2e38e0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_2e38e4:
    if (ctx->pc == 0x2E38E4u) {
        ctx->pc = 0x2E38E8u;
        goto label_2e38e8;
    }
    ctx->pc = 0x2E38E0u;
    {
        const bool branch_taken_0x2e38e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e38e0) {
            ctx->pc = 0x2E3900u;
            goto label_2e3900;
        }
    }
    ctx->pc = 0x2E38E8u;
label_2e38e8:
    // 0x2e38e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2e38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2e38ec:
    // 0x2e38ec: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2e38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2e38f0:
    // 0x2e38f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2e38f4:
    // 0x2e38f4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2e38f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2e38f8:
    // 0x2e38f8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2e38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2e38fc:
    // 0x2e38fc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2e3900:
    // 0x2e3900: 0xc0b90fe  jal         func_2E43F8
label_2e3904:
    if (ctx->pc == 0x2E3904u) {
        ctx->pc = 0x2E3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3900u;
        // 0x2e3904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3908u;
        goto label_2e3908;
    }
    ctx->pc = 0x2E3900u;
    SET_GPR_U32(ctx, 31, 0x2E3908u);
    ctx->pc = 0x2E3904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3900u;
    // 0x2e3904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E43F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E43F8u, 0x2E3900u, 0x2E3908u)) {
        return;
    }
    ctx->pc = 0x2E3908u;
label_2e3908:
    // 0x2e3908: 0xc0b7d76  jal         func_2DF5D8
label_2e390c:
    if (ctx->pc == 0x2E390Cu) {
        ctx->pc = 0x2E390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3908u;
        // 0x2e390c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3910u;
        goto label_2e3910;
    }
    ctx->pc = 0x2E3908u;
    SET_GPR_U32(ctx, 31, 0x2E3910u);
    ctx->pc = 0x2E390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3908u;
    // 0x2e390c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2E3908u, 0x2E3910u)) {
        return;
    }
    ctx->pc = 0x2E3910u;
label_2e3910:
    // 0x2e3910: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e3910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e3914:
    // 0x2e3914: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2e3914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2e3918:
    // 0x2e3918: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e391c:
    if (ctx->pc == 0x2E391Cu) {
        ctx->pc = 0x2E391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3918u;
        // 0x2e391c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3920u;
        goto label_2e3920;
    }
    ctx->pc = 0x2E3918u;
    {
        const bool branch_taken_0x2e3918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3918u;
        // 0x2e391c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3918) {
            ctx->pc = 0x2E393Cu;
            goto label_2e393c;
        }
    }
    ctx->pc = 0x2E3920u;
label_2e3920:
    // 0x2e3920: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2e3924:
    if (ctx->pc == 0x2E3924u) {
        ctx->pc = 0x2E3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3920u;
        // 0x2e3924: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3928u;
        goto label_2e3928;
    }
    ctx->pc = 0x2E3920u;
    {
        const bool branch_taken_0x2e3920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3920u;
        // 0x2e3924: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3920) {
            ctx->pc = 0x2E3940u;
            goto label_2e3940;
        }
    }
    ctx->pc = 0x2E3928u;
label_2e3928:
    // 0x2e3928: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e3928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2e392c:
    // 0x2e392c: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2e392cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2e3930:
    // 0x2e3930: 0xc0b81ea  jal         func_2E07A8
label_2e3934:
    if (ctx->pc == 0x2E3934u) {
        ctx->pc = 0x2E3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3930u;
        // 0x2e3934: 0x24848360  addiu       $a0, $a0, -0x7CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3938u;
        goto label_2e3938;
    }
    ctx->pc = 0x2E3930u;
    SET_GPR_U32(ctx, 31, 0x2E3938u);
    ctx->pc = 0x2E3934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3930u;
    // 0x2e3934: 0x24848360  addiu       $a0, $a0, -0x7CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E3930u, 0x2E3938u)) {
        return;
    }
    ctx->pc = 0x2E3938u;
label_2e3938:
    // 0x2e3938: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e3938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e393c:
    // 0x2e393c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2e393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2e3940:
    // 0x2e3940: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e3944:
    if (ctx->pc == 0x2E3944u) {
        ctx->pc = 0x2E3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3940u;
        // 0x2e3944: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3948u;
        goto label_2e3948;
    }
    ctx->pc = 0x2E3940u;
    {
        const bool branch_taken_0x2e3940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3940u;
        // 0x2e3944: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3940) {
            ctx->pc = 0x2E3960u;
            goto label_2e3960;
        }
    }
    ctx->pc = 0x2E3948u;
label_2e3948:
    // 0x2e3948: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2e394c:
    if (ctx->pc == 0x2E394Cu) {
        ctx->pc = 0x2E394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3948u;
        // 0x2e394c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3950u;
        goto label_2e3950;
    }
    ctx->pc = 0x2E3948u;
    {
        const bool branch_taken_0x2e3948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3948) {
            ctx->pc = 0x2E394Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3948u;
            // 0x2e394c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3964u;
            goto label_2e3964;
        }
    }
    ctx->pc = 0x2E3950u;
label_2e3950:
    // 0x2e3950: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e3950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2e3954:
    // 0x2e3954: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x2e3954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2e3958:
    // 0x2e3958: 0xc0b81ea  jal         func_2E07A8
label_2e395c:
    if (ctx->pc == 0x2E395Cu) {
        ctx->pc = 0x2E395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3958u;
        // 0x2e395c: 0x24848338  addiu       $a0, $a0, -0x7CC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3960u;
        goto label_2e3960;
    }
    ctx->pc = 0x2E3958u;
    SET_GPR_U32(ctx, 31, 0x2E3960u);
    ctx->pc = 0x2E395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3958u;
    // 0x2e395c: 0x24848338  addiu       $a0, $a0, -0x7CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E3958u, 0x2E3960u)) {
        return;
    }
    ctx->pc = 0x2E3960u;
label_2e3960:
    // 0x2e3960: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e3960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e3964:
    // 0x2e3964: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e3964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2e3968:
    // 0x2e3968: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e396c:
    if (ctx->pc == 0x2E396Cu) {
        ctx->pc = 0x2E396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3968u;
        // 0x2e396c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3970u;
        goto label_2e3970;
    }
    ctx->pc = 0x2E3968u;
    {
        const bool branch_taken_0x2e3968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3968u;
        // 0x2e396c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3968) {
            ctx->pc = 0x2E397Cu;
            goto label_2e397c;
        }
    }
    ctx->pc = 0x2E3970u;
label_2e3970:
    // 0x2e3970: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e3970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2e3974:
    // 0x2e3974: 0xc0b81ea  jal         func_2E07A8
label_2e3978:
    if (ctx->pc == 0x2E3978u) {
        ctx->pc = 0x2E3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3974u;
        // 0x2e3978: 0x24848310  addiu       $a0, $a0, -0x7CF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E397Cu;
        goto label_2e397c;
    }
    ctx->pc = 0x2E3974u;
    SET_GPR_U32(ctx, 31, 0x2E397Cu);
    ctx->pc = 0x2E3978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3974u;
    // 0x2e3978: 0x24848310  addiu       $a0, $a0, -0x7CF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E3974u, 0x2E397Cu)) {
        return;
    }
    ctx->pc = 0x2E397Cu;
label_2e397c:
    // 0x2e397c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3980:
    // 0x2e3980: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e3980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e3984:
    // 0x2e3984: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e3984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e3988:
    // 0x2e3988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e398c:
    // 0x2e398c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e398cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e3990:
    // 0x2e3990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3994:
    // 0x2e3994: 0x3e00008  jr          $ra
label_2e3998:
    if (ctx->pc == 0x2E3998u) {
        ctx->pc = 0x2E3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3994u;
        // 0x2e3998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E399Cu;
        goto label_2e399c;
    }
    ctx->pc = 0x2E3994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3994u;
        // 0x2e3998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E399Cu;
label_2e399c:
    // 0x2e399c: 0x0  nop
    ctx->pc = 0x2e399cu;
    // NOP
    ctx->pc = 0x2e39a0u;
}
