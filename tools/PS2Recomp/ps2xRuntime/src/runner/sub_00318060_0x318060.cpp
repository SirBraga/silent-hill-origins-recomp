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

// Function: sub_00318060
// Address: 0x318060 - 0x3190a8
void sub_00318060_0x318060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318060_0x318060");
#endif

    switch (ctx->pc) {
        case 0x31809cu: goto label_31809c;
        case 0x3180b8u: goto label_3180b8;
        case 0x3180c0u: goto label_3180c0;
        case 0x3180e0u: goto label_3180e0;
        case 0x318130u: goto label_318130;
        case 0x318158u: goto label_318158;
        case 0x318194u: goto label_318194;
        case 0x3181dcu: goto label_3181dc;
        case 0x3181e0u: goto label_3181e0;
        case 0x3181e4u: goto label_3181e4;
        case 0x3182a0u: goto label_3182a0;
        case 0x3182e8u: goto label_3182e8;
        case 0x3183f8u: goto label_3183f8;
        case 0x31840cu: goto label_31840c;
        case 0x31841cu: goto label_31841c;
        case 0x318428u: goto label_318428;
        case 0x318448u: goto label_318448;
        case 0x318458u: goto label_318458;
        case 0x318464u: goto label_318464;
        case 0x3184b0u: goto label_3184b0;
        case 0x3184c8u: goto label_3184c8;
        case 0x3185e0u: goto label_3185e0;
        case 0x318604u: goto label_318604;
        case 0x318728u: goto label_318728;
        case 0x318778u: goto label_318778;
        case 0x318780u: goto label_318780;
        case 0x31879cu: goto label_31879c;
        case 0x3187d0u: goto label_3187d0;
        case 0x318814u: goto label_318814;
        case 0x318848u: goto label_318848;
        case 0x3188f0u: goto label_3188f0;
        case 0x318958u: goto label_318958;
        case 0x318994u: goto label_318994;
        case 0x3189d0u: goto label_3189d0;
        case 0x3189f8u: goto label_3189f8;
        case 0x318a34u: goto label_318a34;
        case 0x318aa8u: goto label_318aa8;
        case 0x318b1cu: goto label_318b1c;
        case 0x318b5cu: goto label_318b5c;
        case 0x318b90u: goto label_318b90;
        case 0x318bf8u: goto label_318bf8;
        case 0x318c2cu: goto label_318c2c;
        case 0x318c68u: goto label_318c68;
        case 0x318c90u: goto label_318c90;
        case 0x318cccu: goto label_318ccc;
        case 0x318cf0u: goto label_318cf0;
        case 0x318d58u: goto label_318d58;
        case 0x318d8cu: goto label_318d8c;
        case 0x318dc8u: goto label_318dc8;
        case 0x318df0u: goto label_318df0;
        case 0x318e2cu: goto label_318e2c;
        case 0x318e54u: goto label_318e54;
        case 0x318e80u: goto label_318e80;
        case 0x318ec0u: goto label_318ec0;
        case 0x318ef0u: goto label_318ef0;
        case 0x318f58u: goto label_318f58;
        case 0x318f8cu: goto label_318f8c;
        case 0x318fc8u: goto label_318fc8;
        case 0x318ff0u: goto label_318ff0;
        case 0x31902cu: goto label_31902c;
        case 0x319070u: goto label_319070;
        default: break;
    }

    ctx->pc = 0x318060u;

    // 0x318060: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x318060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x318064: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x318064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
    // 0x318068: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x318068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
    // 0x31806c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31806cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318070: 0x7fbe01c0  sq          $fp, 0x1C0($sp)
    ctx->pc = 0x318070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 30));
    // 0x318074: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x318074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318078: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x318078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
    // 0x31807c: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x31807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
    // 0x318080: 0x7fb40200  sq          $s4, 0x200($sp)
    ctx->pc = 0x318080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 20));
    // 0x318084: 0x7fb501f0  sq          $s5, 0x1F0($sp)
    ctx->pc = 0x318084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 21));
    // 0x318088: 0x7fb601e0  sq          $s6, 0x1E0($sp)
    ctx->pc = 0x318088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 22));
    // 0x31808c: 0x7fb701d0  sq          $s7, 0x1D0($sp)
    ctx->pc = 0x31808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 23));
    // 0x318090: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x318090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x318094: 0xc0c79d0  jal         func_31E740
    ctx->pc = 0x318094u;
    SET_GPR_U32(ctx, 31, 0x31809Cu);
    ctx->pc = 0x318098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318094u;
    // 0x318098: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E740u, 0x318094u, 0x31809Cu)) {
        return;
    }
    ctx->pc = 0x31809Cu;
label_31809c:
    // 0x31809c: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3180a0: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x3180a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x3180a4: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x3180a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x3180a8: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x3180a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x3180ac: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x3180acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
    // 0x3180b0: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x3180b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x3180b4: 0x0  nop
    ctx->pc = 0x3180b4u;
    // NOP
label_3180b8:
    // 0x3180b8: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x3180b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180bc: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x3180bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3180c0:
    // 0x3180c0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3180c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3180c4: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3180c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3180c8: 0x8ca46ccc  lw          $a0, 0x6CCC($a1)
    ctx->pc = 0x3180c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x3180cc: 0x8cc77520  lw          $a3, 0x7520($a2)
    ctx->pc = 0x3180ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x687520u));
    // 0x3180d0: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x3180d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x3180d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3180d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180d8: 0xc0c5498  jal         func_315260
    ctx->pc = 0x3180D8u;
    SET_GPR_U32(ctx, 31, 0x3180E0u);
    ctx->pc = 0x3180DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3180D8u;
    // 0x3180dc: 0x8fa801a8  lw          $t0, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315260u, 0x3180D8u, 0x3180E0u)) {
        return;
    }
    ctx->pc = 0x3180E0u;
label_3180e0:
    // 0x3180e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3180e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180e4: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3180E4u;
    {
        const bool branch_taken_0x3180e4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3180E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3180E4u;
        // 0x3180e8: 0x97a20180  lhu         $v0, 0x180($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3180e4) {
            ctx->pc = 0x3180F8u;
            goto label_3180f8;
        }
    }
    ctx->pc = 0x3180ECu;
    // 0x3180ec: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x3180ECu;
    {
        const bool branch_taken_0x3180ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3180F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3180ECu;
        // 0x3180f0: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3180ec) {
            ctx->pc = 0x3180C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3180c0;
        }
    }
    ctx->pc = 0x3180F4u;
    // 0x3180f4: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x3180f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_3180f8:
    // 0x3180f8: 0x3d49023  subu        $s2, $fp, $s4
    ctx->pc = 0x3180f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x3180fc: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3180FCu;
    {
        const bool branch_taken_0x3180fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3180fc) {
            ctx->pc = 0x3181A0u;
            goto label_3181a0;
        }
    }
    ctx->pc = 0x318104u;
    // 0x318104: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318108: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31810c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31810Cu;
    {
        const bool branch_taken_0x31810c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31810c) {
            ctx->pc = 0x318110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31810Cu;
            // 0x318110: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318170u;
            goto label_318170;
        }
    }
    ctx->pc = 0x318114u;
    // 0x318114: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318118: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x318118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31811c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31811Cu;
    {
        const bool branch_taken_0x31811c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31811Cu;
        // 0x318120: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31811c) {
            ctx->pc = 0x31814Cu;
            goto label_31814c;
        }
    }
    ctx->pc = 0x318124u;
    // 0x318124: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x318124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318128: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318128u;
    SET_GPR_U32(ctx, 31, 0x318130u);
    ctx->pc = 0x31812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318128u;
    // 0x31812c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318128u, 0x318130u)) {
        return;
    }
    ctx->pc = 0x318130u;
label_318130:
    // 0x318130: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318134: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318138: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x318138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31813c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x31813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x318140: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318144: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x318144u;
    {
        const bool branch_taken_0x318144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318144u;
        // 0x318148: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318144) {
            ctx->pc = 0x318194u;
            goto label_318194;
        }
    }
    ctx->pc = 0x31814Cu;
label_31814c:
    // 0x31814c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318150: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318150u;
    SET_GPR_U32(ctx, 31, 0x318158u);
    ctx->pc = 0x318154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318150u;
    // 0x318154: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318150u, 0x318158u)) {
        return;
    }
    ctx->pc = 0x318158u;
label_318158:
    // 0x318158: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31815c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318160: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318168: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x318168u;
    {
        const bool branch_taken_0x318168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318168u;
        // 0x31816c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318168) {
            ctx->pc = 0x318194u;
            goto label_318194;
        }
    }
    ctx->pc = 0x318170u;
label_318170:
    // 0x318170: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318170u;
    {
        const bool branch_taken_0x318170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318170) {
            ctx->pc = 0x318174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318170u;
            // 0x318174: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318184u;
            goto label_318184;
        }
    }
    ctx->pc = 0x318178u;
    // 0x318178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31817c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31817cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x318180: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_318184:
    // 0x318184: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x318184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318188: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x318188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31818c: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x31818Cu;
    SET_GPR_U32(ctx, 31, 0x318194u);
    ctx->pc = 0x318190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31818Cu;
    // 0x318190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x31818Cu, 0x318194u)) {
        return;
    }
    ctx->pc = 0x318194u;
label_318194:
    // 0x318194: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x318194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x318198: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x318198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31819c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x31819cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_3181a0:
    // 0x3181a0: 0x5a0003ab  blezl       $s0, . + 4 + (0x3AB << 2)
    ctx->pc = 0x3181A0u;
    {
        const bool branch_taken_0x3181a0 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x3181a0) {
            ctx->pc = 0x3181A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3181A0u;
            // 0x3181a4: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319050u;
            goto label_319050;
        }
    }
    ctx->pc = 0x3181A8u;
    // 0x3181a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3181a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3181ac: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3181ACu;
    {
        const bool branch_taken_0x3181ac = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3181ac) {
            ctx->pc = 0x3181B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3181ACu;
            // 0x3181b0: 0xa3a00182  sb          $zero, 0x182($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3181C8u;
            goto label_3181c8;
        }
    }
    ctx->pc = 0x3181B4u;
    // 0x3181b4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3181b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3181b8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3181b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3181bc: 0x144003ad  bnez        $v0, . + 4 + (0x3AD << 2)
    ctx->pc = 0x3181BCu;
    {
        const bool branch_taken_0x3181bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3181C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181BCu;
        // 0x3181c0: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181bc) {
            ctx->pc = 0x319074u;
            goto label_319074;
        }
    }
    ctx->pc = 0x3181C4u;
    // 0x3181c4: 0xa3a00182  sb          $zero, 0x182($sp)
    ctx->pc = 0x3181c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
label_3181c8:
    // 0x3181c8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3181c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3181cc: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x3181ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x3181d0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3181d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181d4: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x3181d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x3181d8: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3181d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3181dc:
    // 0x3181dc: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3181dcu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_3181e0:
    // 0x3181e0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3181e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3181e4:
    // 0x3181e4: 0x26c3ffe0  addiu       $v1, $s6, -0x20
    ctx->pc = 0x3181e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967264));
    // 0x3181e8: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x3181e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x3181ec: 0x1040019c  beqz        $v0, . + 4 + (0x19C << 2)
    ctx->pc = 0x3181ECu;
    {
        const bool branch_taken_0x3181ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181ECu;
        // 0x3181f0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181ec) {
            ctx->pc = 0x318860u;
            goto label_318860;
        }
    }
    ctx->pc = 0x3181F4u;
    // 0x3181f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3181f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3181f8: 0x24421990  addiu       $v0, $v0, 0x1990
    ctx->pc = 0x3181f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6544));
    // 0x3181fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3181fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318200: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x318200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x318204: 0x800008  jr          $a0
    ctx->pc = 0x318204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31820Cu: goto label_31820c;
            case 0x318224u: goto label_318224;
            case 0x31822Cu: goto label_31822c;
            case 0x318234u: goto label_318234;
            case 0x31824Cu: goto label_31824c;
            case 0x318254u: goto label_318254;
            case 0x318260u: goto label_318260;
            case 0x3182D4u: goto label_3182d4;
            case 0x3182DCu: goto label_3182dc;
            case 0x318310u: goto label_318310;
            case 0x318318u: goto label_318318;
            case 0x318320u: goto label_318320;
            case 0x318334u: goto label_318334;
            case 0x31833Cu: goto label_31833c;
            case 0x318368u: goto label_318368;
            case 0x31836Cu: goto label_31836c;
            case 0x3183BCu: goto label_3183bc;
            case 0x3184E8u: goto label_3184e8;
            case 0x318550u: goto label_318550;
            case 0x318554u: goto label_318554;
            case 0x318594u: goto label_318594;
            case 0x3185B8u: goto label_3185b8;
            case 0x31861Cu: goto label_31861c;
            case 0x318620u: goto label_318620;
            case 0x318660u: goto label_318660;
            case 0x31866Cu: goto label_31866c;
            case 0x318860u: goto label_318860;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318204u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31820Cu;
label_31820c:
    // 0x31820c: 0x83a20182  lb          $v0, 0x182($sp)
    ctx->pc = 0x31820cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 386)));
    // 0x318210: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x318210u;
    {
        const bool branch_taken_0x318210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318210) {
            ctx->pc = 0x318214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318210u;
            // 0x318214: 0x83d60000  lb          $s6, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3181E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181e0;
        }
    }
    ctx->pc = 0x318218u;
    // 0x318218: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x318218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31821c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x31821Cu;
    {
        const bool branch_taken_0x31821c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31821Cu;
        // 0x318220: 0xa3a20182  sb          $v0, 0x182($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31821c) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x318224u;
label_318224:
    // 0x318224: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x318224u;
    {
        const bool branch_taken_0x318224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318224u;
        // 0x318228: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318224) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x31822Cu;
label_31822c:
    // 0x31822c: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x31822Cu;
    {
        const bool branch_taken_0x31822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31822Cu;
        // 0x318230: 0x36b50200  ori         $s5, $s5, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31822c) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x318234u;
label_318234:
    // 0x318234: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x318234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x318238: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x318238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31823c: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x31823Cu;
    {
        const bool branch_taken_0x31823c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x318240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31823Cu;
        // 0x318240: 0xafa30190  sw          $v1, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31823c) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x318244u;
    // 0x318244: 0x31823  negu        $v1, $v1
    ctx->pc = 0x318244u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x318248: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x318248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_31824c:
    // 0x31824c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x31824Cu;
    {
        const bool branch_taken_0x31824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31824Cu;
        // 0x318250: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31824c) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x318254u;
label_318254:
    // 0x318254: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x318254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x318258: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x318258u;
    {
        const bool branch_taken_0x318258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318258u;
        // 0x31825c: 0xa3a20182  sb          $v0, 0x182($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318258) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x318260u;
label_318260:
    // 0x318260: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x318260u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318264: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x318264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x318268: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x318268u;
    {
        const bool branch_taken_0x318268 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x31826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318268u;
        // 0x31826c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318268) {
            ctx->pc = 0x31828Cu;
            goto label_31828c;
        }
    }
    ctx->pc = 0x318270u;
    // 0x318270: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x318270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x318274: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x318274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x318278: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x318278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31827c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x31827cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x318280: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x318280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x318284: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x318284u;
    {
        const bool branch_taken_0x318284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318284u;
        // 0x318288: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318284) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x31828Cu;
label_31828c:
    // 0x31828c: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x31828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x318290: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x318290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x318294: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x318294u;
    {
        const bool branch_taken_0x318294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318294u;
        // 0x318298: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318294) {
            ctx->pc = 0x3182C0u;
            goto label_3182c0;
        }
    }
    ctx->pc = 0x31829Cu;
    // 0x31829c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x31829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3182a0:
    // 0x3182a0: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3182a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3182a4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3182a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3182a8: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x3182a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3182ac: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3182acu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3182b0: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x3182b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x3182b4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3182b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3182b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3182B8u;
    {
        const bool branch_taken_0x3182b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3182BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182B8u;
        // 0x3182bc: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182b8) {
            ctx->pc = 0x3182A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3182a0;
        }
    }
    ctx->pc = 0x3182C0u;
label_3182c0:
    // 0x3182c0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3182c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3182c4: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3182c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3182c8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3182c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3182cc: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x3182CCu;
    {
        const bool branch_taken_0x3182cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182CCu;
        // 0x3182d0: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182cc) {
            ctx->pc = 0x3181E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181e4;
        }
    }
    ctx->pc = 0x3182D4u;
label_3182d4:
    // 0x3182d4: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x3182D4u;
    {
        const bool branch_taken_0x3182d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3182D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182D4u;
        // 0x3182d8: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182d4) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x3182DCu;
label_3182dc:
    // 0x3182dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3182dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3182e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3182e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3182e4: 0x0  nop
    ctx->pc = 0x3182e4u;
    // NOP
label_3182e8:
    // 0x3182e8: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3182e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3182ec: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3182ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3182f0: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x3182f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3182f4: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3182f4u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3182f8: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x3182f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x3182fc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3182fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x318300: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x318300u;
    {
        const bool branch_taken_0x318300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318300u;
        // 0x318304: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318300) {
            ctx->pc = 0x3182E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3182e8;
        }
    }
    ctx->pc = 0x318308u;
    // 0x318308: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x318308u;
    {
        const bool branch_taken_0x318308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318308u;
        // 0x31830c: 0xafb00190  sw          $s0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318308) {
            ctx->pc = 0x3181E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181e4;
        }
    }
    ctx->pc = 0x318310u;
label_318310:
    // 0x318310: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x318310u;
    {
        const bool branch_taken_0x318310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318310u;
        // 0x318314: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318310) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x318318u;
label_318318:
    // 0x318318: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x318318u;
    {
        const bool branch_taken_0x318318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318318u;
        // 0x31831c: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318318) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x318320u;
label_318320:
    // 0x318320: 0x83c30000  lb          $v1, 0x0($fp)
    ctx->pc = 0x318320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318324: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x318324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x318328: 0x5462ffac  bnel        $v1, $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x318328u;
    {
        const bool branch_taken_0x318328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x318328) {
            ctx->pc = 0x31832Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318328u;
            // 0x31832c: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x318330u;
    // 0x318330: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x318330u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_318334:
    // 0x318334: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x318334u;
    {
        const bool branch_taken_0x318334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318334u;
        // 0x318338: 0x36b50020  ori         $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318334) {
            ctx->pc = 0x3181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3181dc;
        }
    }
    ctx->pc = 0x31833Cu;
label_31833c:
    // 0x31833c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31833cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x318340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318344: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x318344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x318348: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x318348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31834c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x31834cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x318350: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x318350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x318354: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x318354u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x318358: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x318358u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x31835c: 0xafa401ac  sw          $a0, 0x1AC($sp)
    ctx->pc = 0x31835cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 4));
    // 0x318360: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x318360u;
    {
        const bool branch_taken_0x318360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318360u;
        // 0x318364: 0xa3a00182  sb          $zero, 0x182($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318360) {
            ctx->pc = 0x318884u;
            goto label_318884;
        }
    }
    ctx->pc = 0x318368u;
label_318368:
    // 0x318368: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x318368u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_31836c:
    // 0x31836c: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x31836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x318370: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x318370u;
    {
        const bool branch_taken_0x318370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318370) {
            ctx->pc = 0x318374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318370u;
            // 0x318374: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318388u;
            goto label_318388;
        }
    }
    ctx->pc = 0x318378u;
    // 0x318378: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x318378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x31837c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31837Cu;
    {
        const bool branch_taken_0x31837c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31837Cu;
        // 0x318380: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31837c) {
            ctx->pc = 0x318390u;
            goto label_318390;
        }
    }
    ctx->pc = 0x318384u;
    // 0x318384: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x318384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_318388:
    // 0x318388: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x318388u;
    {
        const bool branch_taken_0x318388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318388u;
        // 0x31838c: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318388) {
            ctx->pc = 0x3183A4u;
            goto label_3183a4;
        }
    }
    ctx->pc = 0x318390u;
label_318390:
    // 0x318390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318390u;
    {
        const bool branch_taken_0x318390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318390u;
        // 0x318394: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318390) {
            ctx->pc = 0x3183A0u;
            goto label_3183a0;
        }
    }
    ctx->pc = 0x318398u;
    // 0x318398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x318398u;
    {
        const bool branch_taken_0x318398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318398u;
        // 0x31839c: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318398) {
            ctx->pc = 0x3183A4u;
            goto label_3183a4;
        }
    }
    ctx->pc = 0x3183A0u;
label_3183a0:
    // 0x3183a0: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3183a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3183a4:
    // 0x3183a4: 0x60100c8  bgez        $s0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x3183A4u;
    {
        const bool branch_taken_0x3183a4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3183A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183A4u;
        // 0x3183a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183a4) {
            ctx->pc = 0x3186C8u;
            goto label_3186c8;
        }
    }
    ctx->pc = 0x3183ACu;
    // 0x3183ac: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3183acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3183b0: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x3183b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x3183b4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x3183B4u;
    {
        const bool branch_taken_0x3183b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3183B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183B4u;
        // 0x3183b8: 0xa3a20182  sb          $v0, 0x182($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183b4) {
            ctx->pc = 0x3186C8u;
            goto label_3186c8;
        }
    }
    ctx->pc = 0x3183BCu;
label_3183bc:
    // 0x3183bc: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x3183bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x3183c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3183c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3183c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3183c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3183c8: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x3183c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3));
    // 0x3183cc: 0xde74fff8  ld          $s4, -0x8($s3)
    ctx->pc = 0x3183ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3183d0: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x3183d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x3183d4: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3183D4u;
    {
        const bool branch_taken_0x3183d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3183D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183D4u;
        // 0x3183d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183d4) {
            ctx->pc = 0x3183E8u;
            goto label_3183e8;
        }
    }
    ctx->pc = 0x3183DCu;
    // 0x3183dc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3183dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3183e0: 0x16c2002a  bne         $s6, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3183E0u;
    {
        const bool branch_taken_0x3183e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3183E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183E0u;
        // 0x3183e4: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183e0) {
            ctx->pc = 0x31848Cu;
            goto label_31848c;
        }
    }
    ctx->pc = 0x3183E8u;
label_3183e8:
    // 0x3183e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3183e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3183ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3183ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3183f0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x3183F0u;
    SET_GPR_U32(ctx, 31, 0x3183F8u);
    ctx->pc = 0x3183F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183F0u;
    // 0x3183f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x3183F0u, 0x3183F8u)) {
        return;
    }
    ctx->pc = 0x3183F8u;
label_3183f8:
    // 0x3183f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3183F8u;
    {
        const bool branch_taken_0x3183f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3183FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183F8u;
        // 0x3183fc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183f8) {
            ctx->pc = 0x318430u;
            goto label_318430;
        }
    }
    ctx->pc = 0x318400u;
    // 0x318400: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x318400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318404: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x318404u;
    SET_GPR_U32(ctx, 31, 0x31840Cu);
    ctx->pc = 0x318408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318404u;
    // 0x318408: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x318404u, 0x31840Cu)) {
        return;
    }
    ctx->pc = 0x31840Cu;
label_31840c:
    // 0x31840c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31840Cu;
    {
        const bool branch_taken_0x31840c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x318410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31840Cu;
        // 0x318410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31840c) {
            ctx->pc = 0x318420u;
            goto label_318420;
        }
    }
    ctx->pc = 0x318414u;
    // 0x318414: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x318414u;
    SET_GPR_U32(ctx, 31, 0x31841Cu);
    ctx->pc = 0x318418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318414u;
    // 0x318418: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x318414u, 0x31841Cu)) {
        return;
    }
    ctx->pc = 0x31841Cu;
label_31841c:
    // 0x31841c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31841cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318420:
    // 0x318420: 0xc0c7cee  jal         func_31F3B8
    ctx->pc = 0x318420u;
    SET_GPR_U32(ctx, 31, 0x318428u);
    ctx->pc = 0x318424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318420u;
    // 0x318424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F3B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F3B8u, 0x318420u, 0x318428u)) {
        return;
    }
    ctx->pc = 0x318428u;
label_318428:
    // 0x318428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x318428u;
    {
        const bool branch_taken_0x318428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318428u;
        // 0x31842c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318428) {
            ctx->pc = 0x318438u;
            goto label_318438;
        }
    }
    ctx->pc = 0x318430u;
label_318430:
    // 0x318430: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x318430u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x318434: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x318434u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_318438:
    // 0x318438: 0x3405c010  ori         $a1, $zero, 0xC010
    ctx->pc = 0x318438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49168);
    // 0x31843c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x31843cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x318440: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x318440u;
    SET_GPR_U32(ctx, 31, 0x318448u);
    ctx->pc = 0x318444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318440u;
    // 0x318444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x318440u, 0x318448u)) {
        return;
    }
    ctx->pc = 0x318448u;
label_318448:
    // 0x318448: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x318448u;
    {
        const bool branch_taken_0x318448 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318448u;
        // 0x31844c: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318448) {
            ctx->pc = 0x31846Cu;
            goto label_31846c;
        }
    }
    ctx->pc = 0x318450u;
    // 0x318450: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x318450u;
    SET_GPR_U32(ctx, 31, 0x318458u);
    ctx->pc = 0x318454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318450u;
    // 0x318454: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x318450u, 0x318458u)) {
        return;
    }
    ctx->pc = 0x318458u;
label_318458:
    // 0x318458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31845c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31845Cu;
    SET_GPR_U32(ctx, 31, 0x318464u);
    ctx->pc = 0x318460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31845Cu;
    // 0x318460: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31845Cu, 0x318464u)) {
        return;
    }
    ctx->pc = 0x318464u;
label_318464:
    // 0x318464: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x318464u;
    {
        const bool branch_taken_0x318464 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x318468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318464u;
        // 0x318468: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318464) {
            ctx->pc = 0x318480u;
            goto label_318480;
        }
    }
    ctx->pc = 0x31846Cu;
label_31846c:
    // 0x31846c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x31846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x318470: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x318470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x318474: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x318474u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x318478u;
    {
        const bool branch_taken_0x318478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318478u;
        // 0x31847c: 0x64b00b  movn        $s6, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318478) {
            ctx->pc = 0x318484u;
            goto label_318484;
        }
    }
    ctx->pc = 0x318480u;
label_318480:
    // 0x318480: 0x24160066  addiu       $s6, $zero, 0x66
    ctx->pc = 0x318480u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_318484:
    // 0x318484: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x318484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318488: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x318488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_31848c:
    // 0x31848c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31848Cu;
    {
        const bool branch_taken_0x31848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31848Cu;
        // 0x318490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31848c) {
            ctx->pc = 0x31849Cu;
            goto label_31849c;
        }
    }
    ctx->pc = 0x318494u;
    // 0x318494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x318494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318498: 0x57b80a  movz        $s7, $v0, $s7
    ctx->pc = 0x318498u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2));
label_31849c:
    // 0x31849c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31849cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3184a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184a4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3184a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184a8: 0xc0c5e32  jal         func_3178C8
    ctx->pc = 0x3184A8u;
    SET_GPR_U32(ctx, 31, 0x3184B0u);
    ctx->pc = 0x3184ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184A8u;
    // 0x3184ac: 0x27a80182  addiu       $t0, $sp, 0x182 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 386));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3178C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3178C8u, 0x3184A8u, 0x3184B0u)) {
        return;
    }
    ctx->pc = 0x3184B0u;
label_3184b0:
    // 0x3184b0: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3184b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3184b4: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x3184b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3184b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3184b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184bc: 0xafa501ac  sw          $a1, 0x1AC($sp)
    ctx->pc = 0x3184bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 5));
    // 0x3184c0: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x3184C0u;
    SET_GPR_U32(ctx, 31, 0x3184C8u);
    ctx->pc = 0x3184C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184C0u;
    // 0x3184c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x3184C0u, 0x3184C8u)) {
        return;
    }
    ctx->pc = 0x3184C8u;
label_3184c8:
    // 0x3184c8: 0x32a30200  andi        $v1, $s5, 0x200
    ctx->pc = 0x3184c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x3184cc: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x3184CCu;
    {
        const bool branch_taken_0x3184cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184CCu;
        // 0x3184d0: 0xafa20188  sw          $v0, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184cc) {
            ctx->pc = 0x318884u;
            goto label_318884;
        }
    }
    ctx->pc = 0x3184D4u;
    // 0x3184d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3184d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184d8: 0x27a70188  addiu       $a3, $sp, 0x188
    ctx->pc = 0x3184d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x3184dc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x3184dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3184e0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x3184E0u;
    {
        const bool branch_taken_0x3184e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184E0u;
        // 0x3184e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184e0) {
            ctx->pc = 0x318840u;
            goto label_318840;
        }
    }
    ctx->pc = 0x3184E8u;
label_3184e8:
    // 0x3184e8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3184e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3184ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3184ECu;
    {
        const bool branch_taken_0x3184ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184ECu;
        // 0x3184f0: 0x8fa6018c  lw          $a2, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184ec) {
            ctx->pc = 0x318504u;
            goto label_318504;
        }
    }
    ctx->pc = 0x3184F4u;
    // 0x3184f4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3184f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3184f8: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3184f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3184fc: 0x1000feee  b           . + 4 + (-0x112 << 2)
    ctx->pc = 0x3184FCu;
    {
        const bool branch_taken_0x3184fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184FCu;
        // 0x318500: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184fc) {
            ctx->pc = 0x3180B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3180b8;
        }
    }
    ctx->pc = 0x318504u;
label_318504:
    // 0x318504: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x318504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x318508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318508u;
    {
        const bool branch_taken_0x318508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318508u;
        // 0x31850c: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318508) {
            ctx->pc = 0x318520u;
            goto label_318520;
        }
    }
    ctx->pc = 0x318510u;
    // 0x318510: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x318510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x318514: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x318514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x318518: 0x1000fee7  b           . + 4 + (-0x119 << 2)
    ctx->pc = 0x318518u;
    {
        const bool branch_taken_0x318518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318518u;
        // 0x31851c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318518) {
            ctx->pc = 0x3180B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3180b8;
        }
    }
    ctx->pc = 0x318520u;
label_318520:
    // 0x318520: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x318520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x318524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318524u;
    {
        const bool branch_taken_0x318524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318524u;
        // 0x318528: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318524) {
            ctx->pc = 0x31853Cu;
            goto label_31853c;
        }
    }
    ctx->pc = 0x31852Cu;
    // 0x31852c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31852cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x318530: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x318530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x318534: 0x1000fee0  b           . + 4 + (-0x120 << 2)
    ctx->pc = 0x318534u;
    {
        const bool branch_taken_0x318534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318534u;
        // 0x318538: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318534) {
            ctx->pc = 0x3180B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3180b8;
        }
    }
    ctx->pc = 0x31853Cu;
label_31853c:
    // 0x31853c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31853cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x318540: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x318540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x318544: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x318544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x318548: 0x1000fedb  b           . + 4 + (-0x125 << 2)
    ctx->pc = 0x318548u;
    {
        const bool branch_taken_0x318548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318548u;
        // 0x31854c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318548) {
            ctx->pc = 0x3180B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3180b8;
        }
    }
    ctx->pc = 0x318550u;
label_318550:
    // 0x318550: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x318550u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_318554:
    // 0x318554: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x318554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x318558: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x318558u;
    {
        const bool branch_taken_0x318558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318558) {
            ctx->pc = 0x31855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318558u;
            // 0x31855c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318570u;
            goto label_318570;
        }
    }
    ctx->pc = 0x318560u;
    // 0x318560: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x318560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x318564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318564u;
    {
        const bool branch_taken_0x318564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318564u;
        // 0x318568: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318564) {
            ctx->pc = 0x318578u;
            goto label_318578;
        }
    }
    ctx->pc = 0x31856Cu;
    // 0x31856c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31856cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_318570:
    // 0x318570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x318570u;
    {
        const bool branch_taken_0x318570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318570u;
        // 0x318574: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318570) {
            ctx->pc = 0x31858Cu;
            goto label_31858c;
        }
    }
    ctx->pc = 0x318578u;
label_318578:
    // 0x318578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318578u;
    {
        const bool branch_taken_0x318578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318578u;
        // 0x31857c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318578) {
            ctx->pc = 0x318588u;
            goto label_318588;
        }
    }
    ctx->pc = 0x318580u;
    // 0x318580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x318580u;
    {
        const bool branch_taken_0x318580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318580u;
        // 0x318584: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318580) {
            ctx->pc = 0x31858Cu;
            goto label_31858c;
        }
    }
    ctx->pc = 0x318588u;
label_318588:
    // 0x318588: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x318588u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31858c:
    // 0x31858c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31858Cu;
    {
        const bool branch_taken_0x31858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31858Cu;
        // 0x318590: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31858c) {
            ctx->pc = 0x3186C4u;
            goto label_3186c4;
        }
    }
    ctx->pc = 0x318594u;
label_318594:
    // 0x318594: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x318594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x318598: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x318598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31859c: 0x24421930  addiu       $v0, $v0, 0x1930
    ctx->pc = 0x31859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6448));
    // 0x3185a0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3185a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3185a4: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x3185a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x3185a8: 0x36b50002  ori         $s5, $s5, 0x2
    ctx->pc = 0x3185a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x3185ac: 0x24160078  addiu       $s6, $zero, 0x78
    ctx->pc = 0x3185acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3185b0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3185B0u;
    {
        const bool branch_taken_0x3185b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3185B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185B0u;
        // 0x3185b4: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185b0) {
            ctx->pc = 0x3186C4u;
            goto label_3186c4;
        }
    }
    ctx->pc = 0x3185B8u;
label_3185b8:
    // 0x3185b8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3185b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3185bc: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x3185bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3185c0: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3185C0u;
    {
        const bool branch_taken_0x3185c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3185C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185C0u;
        // 0x3185c4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185c0) {
            ctx->pc = 0x3185CCu;
            goto label_3185cc;
        }
    }
    ctx->pc = 0x3185C8u;
    // 0x3185c8: 0x24541948  addiu       $s4, $v0, 0x1948
    ctx->pc = 0x3185c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6472));
label_3185cc:
    // 0x3185cc: 0x6e0000b  bltz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x3185CCu;
    {
        const bool branch_taken_0x3185cc = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x3185D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185CCu;
        // 0x3185d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185cc) {
            ctx->pc = 0x3185FCu;
            goto label_3185fc;
        }
    }
    ctx->pc = 0x3185D4u;
    // 0x3185d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3185d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3185d8: 0xc0c489e  jal         func_312278
    ctx->pc = 0x3185D8u;
    SET_GPR_U32(ctx, 31, 0x3185E0u);
    ctx->pc = 0x3185DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3185D8u;
    // 0x3185dc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312278u, 0x3185D8u, 0x3185E0u)) {
        return;
    }
    ctx->pc = 0x3185E0u;
label_3185e0:
    // 0x3185e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3185E0u;
    {
        const bool branch_taken_0x3185e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3185E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185E0u;
        // 0x3185e4: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185e0) {
            ctx->pc = 0x3185F4u;
            goto label_3185f4;
        }
    }
    ctx->pc = 0x3185E8u;
    // 0x3185e8: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x3185e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3185ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3185ECu;
    {
        const bool branch_taken_0x3185ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3185F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185ECu;
        // 0x3185f0: 0xafa20188  sw          $v0, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185ec) {
            ctx->pc = 0x318608u;
            goto label_318608;
        }
    }
    ctx->pc = 0x3185F4u;
label_3185f4:
    // 0x3185f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3185F4u;
    {
        const bool branch_taken_0x3185f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3185F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185F4u;
        // 0x3185f8: 0xafb70188  sw          $s7, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185f4) {
            ctx->pc = 0x318608u;
            goto label_318608;
        }
    }
    ctx->pc = 0x3185FCu;
label_3185fc:
    // 0x3185fc: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x3185FCu;
    SET_GPR_U32(ctx, 31, 0x318604u);
    ctx->pc = 0x318600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3185FCu;
    // 0x318600: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x3185FCu, 0x318604u)) {
        return;
    }
    ctx->pc = 0x318604u;
label_318604:
    // 0x318604: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x318604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_318608:
    // 0x318608: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x318608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31860c: 0xa3a00182  sb          $zero, 0x182($sp)
    ctx->pc = 0x31860cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
    // 0x318610: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x318610u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x318614: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x318614u;
    {
        const bool branch_taken_0x318614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318614u;
        // 0x318618: 0xafa601ac  sw          $a2, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318614) {
            ctx->pc = 0x318884u;
            goto label_318884;
        }
    }
    ctx->pc = 0x31861Cu;
label_31861c:
    // 0x31861c: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x31861cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_318620:
    // 0x318620: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x318620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x318624: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x318624u;
    {
        const bool branch_taken_0x318624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318624) {
            ctx->pc = 0x318628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318624u;
            // 0x318628: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31863Cu;
            goto label_31863c;
        }
    }
    ctx->pc = 0x31862Cu;
    // 0x31862c: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x31862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x318630: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318630u;
    {
        const bool branch_taken_0x318630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318630u;
        // 0x318634: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318630) {
            ctx->pc = 0x318644u;
            goto label_318644;
        }
    }
    ctx->pc = 0x318638u;
    // 0x318638: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x318638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31863c:
    // 0x31863c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31863Cu;
    {
        const bool branch_taken_0x31863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31863Cu;
        // 0x318640: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31863c) {
            ctx->pc = 0x318658u;
            goto label_318658;
        }
    }
    ctx->pc = 0x318644u;
label_318644:
    // 0x318644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318644u;
    {
        const bool branch_taken_0x318644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318644u;
        // 0x318648: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318644) {
            ctx->pc = 0x318654u;
            goto label_318654;
        }
    }
    ctx->pc = 0x31864Cu;
    // 0x31864c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31864Cu;
    {
        const bool branch_taken_0x31864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31864Cu;
        // 0x318650: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31864c) {
            ctx->pc = 0x318658u;
            goto label_318658;
        }
    }
    ctx->pc = 0x318654u;
label_318654:
    // 0x318654: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x318654u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_318658:
    // 0x318658: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x318658u;
    {
        const bool branch_taken_0x318658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318658u;
        // 0x31865c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318658) {
            ctx->pc = 0x3186C4u;
            goto label_3186c4;
        }
    }
    ctx->pc = 0x318660u;
label_318660:
    // 0x318660: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x318660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x318664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x318664u;
    {
        const bool branch_taken_0x318664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318664u;
        // 0x318668: 0x24421950  addiu       $v0, $v0, 0x1950 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318664) {
            ctx->pc = 0x318674u;
            goto label_318674;
        }
    }
    ctx->pc = 0x31866Cu;
label_31866c:
    // 0x31866c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31866cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x318670: 0x24421930  addiu       $v0, $v0, 0x1930
    ctx->pc = 0x318670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6448));
label_318674:
    // 0x318674: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x318674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x318678: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x318678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x31867c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31867Cu;
    {
        const bool branch_taken_0x31867c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31867c) {
            ctx->pc = 0x318680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31867Cu;
            // 0x318680: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318694u;
            goto label_318694;
        }
    }
    ctx->pc = 0x318684u;
    // 0x318684: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x318684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x318688: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318688u;
    {
        const bool branch_taken_0x318688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318688u;
        // 0x31868c: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318688) {
            ctx->pc = 0x31869Cu;
            goto label_31869c;
        }
    }
    ctx->pc = 0x318690u;
    // 0x318690: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x318690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_318694:
    // 0x318694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x318694u;
    {
        const bool branch_taken_0x318694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318694u;
        // 0x318698: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318694) {
            ctx->pc = 0x3186B0u;
            goto label_3186b0;
        }
    }
    ctx->pc = 0x31869Cu;
label_31869c:
    // 0x31869c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31869Cu;
    {
        const bool branch_taken_0x31869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31869Cu;
        // 0x3186a0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31869c) {
            ctx->pc = 0x3186ACu;
            goto label_3186ac;
        }
    }
    ctx->pc = 0x3186A4u;
    // 0x3186a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3186A4u;
    {
        const bool branch_taken_0x3186a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186A4u;
        // 0x3186a8: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186a4) {
            ctx->pc = 0x3186B0u;
            goto label_3186b0;
        }
    }
    ctx->pc = 0x3186ACu;
label_3186ac:
    // 0x3186ac: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3186acu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3186b0:
    // 0x3186b0: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x3186b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3186b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3186B4u;
    {
        const bool branch_taken_0x3186b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186B4u;
        // 0x3186b8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186b4) {
            ctx->pc = 0x3186C4u;
            goto label_3186c4;
        }
    }
    ctx->pc = 0x3186BCu;
    // 0x3186bc: 0x36a20002  ori         $v0, $s5, 0x2
    ctx->pc = 0x3186bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x3186c0: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x3186c0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
label_3186c4:
    // 0x3186c4: 0xa3a00182  sb          $zero, 0x182($sp)
    ctx->pc = 0x3186c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
label_3186c8:
    // 0x3186c8: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x3186C8u;
    {
        const bool branch_taken_0x3186c8 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x3186CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186C8u;
        // 0x3186cc: 0xafb70194  sw          $s7, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186c8) {
            ctx->pc = 0x3186D8u;
            goto label_3186d8;
        }
    }
    ctx->pc = 0x3186D0u;
    // 0x3186d0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x3186d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x3186d4: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x3186d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_3186d8:
    // 0x3186d8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3186D8u;
    {
        const bool branch_taken_0x3186d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3186DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186D8u;
        // 0x3186dc: 0x27b4016c  addiu       $s4, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186d8) {
            ctx->pc = 0x3186F4u;
            goto label_3186f4;
        }
    }
    ctx->pc = 0x3186E0u;
    // 0x3186e0: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3186e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3186e4: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x3186e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3186e8: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3186e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3186ec: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x3186ECu;
    {
        const bool branch_taken_0x3186ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186ECu;
        // 0x3186f0: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186ec) {
            ctx->pc = 0x31881Cu;
            goto label_31881c;
        }
    }
    ctx->pc = 0x3186F4u;
label_3186f4:
    // 0x3186f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3186f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3186f8: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3186F8u;
    {
        const bool branch_taken_0x3186f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3186FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186F8u;
        // 0x3186fc: 0x32a50004  andi        $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186f8) {
            ctx->pc = 0x318760u;
            goto label_318760;
        }
    }
    ctx->pc = 0x318700u;
    // 0x318700: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x318700u;
    {
        const bool branch_taken_0x318700 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x318704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318700u;
        // 0x318704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318700) {
            ctx->pc = 0x318718u;
            goto label_318718;
        }
    }
    ctx->pc = 0x318708u;
    // 0x318708: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x318708u;
    {
        const bool branch_taken_0x318708 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x31870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318708u;
        // 0x31870c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318708) {
            ctx->pc = 0x3187C0u;
            goto label_3187c0;
        }
    }
    ctx->pc = 0x318710u;
    // 0x318710: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x318710u;
    {
        const bool branch_taken_0x318710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318710u;
        // 0x318714: 0x32a40004  andi        $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318710) {
            ctx->pc = 0x318800u;
            goto label_318800;
        }
    }
    ctx->pc = 0x318718u;
label_318718:
    // 0x318718: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x318718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31871c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x31871cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x318720: 0xafa401ac  sw          $a0, 0x1AC($sp)
    ctx->pc = 0x318720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 4));
    // 0x318724: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x318724u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
label_318728:
    // 0x318728: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x318728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x31872c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x31872cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x318730: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x318730u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x318734: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x318734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x318738: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x318738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31873c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31873Cu;
    {
        const bool branch_taken_0x31873c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x318740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31873Cu;
        // 0x318740: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31873c) {
            ctx->pc = 0x318728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318728;
        }
    }
    ctx->pc = 0x318744u;
    // 0x318744: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x318744u;
    {
        const bool branch_taken_0x318744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318744u;
        // 0x318748: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318744) {
            ctx->pc = 0x31881Cu;
            goto label_31881c;
        }
    }
    ctx->pc = 0x31874Cu;
    // 0x31874c: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x31874Cu;
    {
        const bool branch_taken_0x31874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x318750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31874Cu;
        // 0x318750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31874c) {
            ctx->pc = 0x318820u;
            goto label_318820;
        }
    }
    ctx->pc = 0x318754u;
    // 0x318754: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x318754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x318758: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x318758u;
    {
        const bool branch_taken_0x318758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318758u;
        // 0x31875c: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318758) {
            ctx->pc = 0x318820u;
            goto label_318820;
        }
    }
    ctx->pc = 0x318760u;
label_318760:
    // 0x318760: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x318760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x318764: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x318764u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x318768: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x318768u;
    {
        const bool branch_taken_0x318768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318768u;
        // 0x31876c: 0xafa501ac  sw          $a1, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318768) {
            ctx->pc = 0x3187ACu;
            goto label_3187ac;
        }
    }
    ctx->pc = 0x318770u;
    // 0x318770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318774: 0x0  nop
    ctx->pc = 0x318774u;
    // NOP
label_318778:
    // 0x318778: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x318778u;
    SET_GPR_U32(ctx, 31, 0x318780u);
    ctx->pc = 0x31877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318778u;
    // 0x31877c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x318778u, 0x318780u)) {
        return;
    }
    ctx->pc = 0x318780u;
label_318780:
    // 0x318780: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x318780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x318784: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x318784u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x318788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31878c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x318790: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x318790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x318794: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x318794u;
    SET_GPR_U32(ctx, 31, 0x31879Cu);
    ctx->pc = 0x318798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318794u;
    // 0x318798: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x318794u, 0x31879Cu)) {
        return;
    }
    ctx->pc = 0x31879Cu;
label_31879c:
    // 0x31879c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31879cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3187a0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3187a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3187a4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3187A4u;
    {
        const bool branch_taken_0x3187a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3187A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187A4u;
        // 0x3187a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187a4) {
            ctx->pc = 0x318778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318778;
        }
    }
    ctx->pc = 0x3187ACu;
label_3187ac:
    // 0x3187ac: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x3187acu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x3187b0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3187b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3187b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3187b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3187b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3187B8u;
    {
        const bool branch_taken_0x3187b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3187BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187B8u;
        // 0x3187bc: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187b8) {
            ctx->pc = 0x31881Cu;
            goto label_31881c;
        }
    }
    ctx->pc = 0x3187C0u;
label_3187c0:
    // 0x3187c0: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x3187c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3187c4: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3187c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3187c8: 0xafa601ac  sw          $a2, 0x1AC($sp)
    ctx->pc = 0x3187c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 6));
    // 0x3187cc: 0x0  nop
    ctx->pc = 0x3187ccu;
    // NOP
label_3187d0:
    // 0x3187d0: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x3187d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3187d4: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3187d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3187d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3187d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3187dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3187dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3187e0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3187e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3187e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3187e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3187e8: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3187e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x3187ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3187ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3187f0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3187F0u;
    {
        const bool branch_taken_0x3187f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3187F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187F0u;
        // 0x3187f4: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187f0) {
            ctx->pc = 0x3187D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3187d0;
        }
    }
    ctx->pc = 0x3187F8u;
    // 0x3187f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3187F8u;
    {
        const bool branch_taken_0x3187f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3187FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187F8u;
        // 0x3187fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187f8) {
            ctx->pc = 0x318820u;
            goto label_318820;
        }
    }
    ctx->pc = 0x318800u;
label_318800:
    // 0x318800: 0x24541968  addiu       $s4, $v0, 0x1968
    ctx->pc = 0x318800u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6504));
    // 0x318804: 0xafa401ac  sw          $a0, 0x1AC($sp)
    ctx->pc = 0x318804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 4));
    // 0x318808: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x318808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31880c: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x31880Cu;
    SET_GPR_U32(ctx, 31, 0x318814u);
    ctx->pc = 0x318810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31880Cu;
    // 0x318810: 0x32b70084  andi        $s7, $s5, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x31880Cu, 0x318814u)) {
        return;
    }
    ctx->pc = 0x318814u;
label_318814:
    // 0x318814: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x318814u;
    {
        const bool branch_taken_0x318814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318814u;
        // 0x318818: 0xafa20188  sw          $v0, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318814) {
            ctx->pc = 0x318884u;
            goto label_318884;
        }
    }
    ctx->pc = 0x31881Cu;
label_31881c:
    // 0x31881c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318820:
    // 0x318820: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x318820u;
    {
        const bool branch_taken_0x318820 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x318824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318820u;
        // 0x318824: 0x3b41023  subu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318820) {
            ctx->pc = 0x318854u;
            goto label_318854;
        }
    }
    ctx->pc = 0x318828u;
    // 0x318828: 0x32a20200  andi        $v0, $s5, 0x200
    ctx->pc = 0x318828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x31882c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31882Cu;
    {
        const bool branch_taken_0x31882c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31882Cu;
        // 0x318830: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31882c) {
            ctx->pc = 0x318850u;
            goto label_318850;
        }
    }
    ctx->pc = 0x318834u;
    // 0x318834: 0x27a6016c  addiu       $a2, $sp, 0x16C
    ctx->pc = 0x318834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x318838: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x318838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31883c: 0x27a70188  addiu       $a3, $sp, 0x188
    ctx->pc = 0x31883cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_318840:
    // 0x318840: 0xc0c642a  jal         func_3190A8
    ctx->pc = 0x318840u;
    SET_GPR_U32(ctx, 31, 0x318848u);
    ctx->pc = 0x3190A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3190A8u, 0x318840u, 0x318848u)) {
        return;
    }
    ctx->pc = 0x318848u;
label_318848:
    // 0x318848: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x318848u;
    {
        const bool branch_taken_0x318848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318848u;
        // 0x31884c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318848) {
            ctx->pc = 0x318884u;
            goto label_318884;
        }
    }
    ctx->pc = 0x318850u;
label_318850:
    // 0x318850: 0x3b41023  subu        $v0, $sp, $s4
    ctx->pc = 0x318850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
label_318854:
    // 0x318854: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x318854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x318858: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x318858u;
    {
        const bool branch_taken_0x318858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318858u;
        // 0x31885c: 0xafa20188  sw          $v0, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318858) {
            ctx->pc = 0x318884u;
            goto label_318884;
        }
    }
    ctx->pc = 0x318860u;
label_318860:
    // 0x318860: 0x12c001fa  beqz        $s6, . + 4 + (0x1FA << 2)
    ctx->pc = 0x318860u;
    {
        const bool branch_taken_0x318860 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x318864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318860u;
        // 0x318864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318860) {
            ctx->pc = 0x31904Cu;
            goto label_31904c;
        }
    }
    ctx->pc = 0x318868u;
    // 0x318868: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x318868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31886c: 0xa3b60010  sb          $s6, 0x10($sp)
    ctx->pc = 0x31886cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 22));
    // 0x318870: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x318870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x318874: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x318874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x318878: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x318878u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x31887c: 0xa3a00182  sb          $zero, 0x182($sp)
    ctx->pc = 0x31887cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
    // 0x318880: 0xafa501ac  sw          $a1, 0x1AC($sp)
    ctx->pc = 0x318880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 5));
label_318884:
    // 0x318884: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x318884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x318888: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x318888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x31888c: 0x83a30182  lb          $v1, 0x182($sp)
    ctx->pc = 0x31888cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 386)));
    // 0x318890: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x318890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x318894: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x318894u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6));
    // 0x318898: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x318898u;
    {
        const bool branch_taken_0x318898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318898u;
        // 0x31889c: 0xafa40198  sw          $a0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318898) {
            ctx->pc = 0x3188ACu;
            goto label_3188ac;
        }
    }
    ctx->pc = 0x3188A0u;
    // 0x3188a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3188a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3188a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3188A4u;
    {
        const bool branch_taken_0x3188a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3188A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188A4u;
        // 0x3188a8: 0xafa40198  sw          $a0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188a4) {
            ctx->pc = 0x3188BCu;
            goto label_3188bc;
        }
    }
    ctx->pc = 0x3188ACu;
label_3188ac:
    // 0x3188ac: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x3188acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3188b0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x3188b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x3188b4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3188b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3188b8: 0xafa50198  sw          $a1, 0x198($sp)
    ctx->pc = 0x3188b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 5));
label_3188bc:
    // 0x3188bc: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x3188bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3188c0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x3188c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3188c4: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x3188c4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3188c8: 0x16e0005a  bnez        $s7, . + 4 + (0x5A << 2)
    ctx->pc = 0x3188C8u;
    {
        const bool branch_taken_0x3188c8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x3188CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188C8u;
        // 0x3188cc: 0xafa601a0  sw          $a2, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188c8) {
            ctx->pc = 0x318A34u;
            goto label_318a34;
        }
    }
    ctx->pc = 0x3188D0u;
    // 0x3188d0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x3188d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3188d4: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x3188d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3188d8: 0x1a000056  blez        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3188D8u;
    {
        const bool branch_taken_0x3188d8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3188DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188D8u;
        // 0x3188dc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188d8) {
            ctx->pc = 0x318A34u;
            goto label_318a34;
        }
    }
    ctx->pc = 0x3188E0u;
    // 0x3188e0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3188E0u;
    {
        const bool branch_taken_0x3188e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3188E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188E0u;
        // 0x3188e4: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188e0) {
            ctx->pc = 0x3189A4u;
            goto label_3189a4;
        }
    }
    ctx->pc = 0x3188E8u;
    // 0x3188e8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3188e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3188ec: 0x0  nop
    ctx->pc = 0x3188ecu;
    // NOP
label_3188f0:
    // 0x3188f0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3188f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3188f4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3188F4u;
    {
        const bool branch_taken_0x3188f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3188f4) {
            ctx->pc = 0x3188F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3188F4u;
            // 0x3188f8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318970u;
            goto label_318970;
        }
    }
    ctx->pc = 0x3188FCu;
    // 0x3188fc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3188fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318900: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x318900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x318904: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x318904u;
    {
        const bool branch_taken_0x318904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318904) {
            ctx->pc = 0x318908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318904u;
            // 0x318908: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318950u;
            goto label_318950;
        }
    }
    ctx->pc = 0x31890Cu;
    // 0x31890c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318910: 0x26431910  addiu       $v1, $s2, 0x1910
    ctx->pc = 0x318910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    // 0x318914: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x318914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x318918: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x318918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x31891c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x31891cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x318920: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x318920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x318924: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x318924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318928: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x318928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31892c: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x31892cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318930: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x318930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318934: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318938: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31893c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x31893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x318940: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x318940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x318944: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318948: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x318948u;
    {
        const bool branch_taken_0x318948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318948u;
        // 0x31894c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318948) {
            ctx->pc = 0x318994u;
            goto label_318994;
        }
    }
    ctx->pc = 0x318950u;
label_318950:
    // 0x318950: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318950u;
    SET_GPR_U32(ctx, 31, 0x318958u);
    ctx->pc = 0x318954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318950u;
    // 0x318954: 0x26451910  addiu       $a1, $s2, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318950u, 0x318958u)) {
        return;
    }
    ctx->pc = 0x318958u;
label_318958:
    // 0x318958: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31895c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318960: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318968: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x318968u;
    {
        const bool branch_taken_0x318968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318968u;
        // 0x31896c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318968) {
            ctx->pc = 0x318994u;
            goto label_318994;
        }
    }
    ctx->pc = 0x318970u;
label_318970:
    // 0x318970: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318970u;
    {
        const bool branch_taken_0x318970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318970) {
            ctx->pc = 0x318974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318970u;
            // 0x318974: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318984u;
            goto label_318984;
        }
    }
    ctx->pc = 0x318978u;
    // 0x318978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x318978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31897c: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x31897cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x318980: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_318984:
    // 0x318984: 0x26451910  addiu       $a1, $s2, 0x1910
    ctx->pc = 0x318984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    // 0x318988: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x318988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31898c: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x31898Cu;
    SET_GPR_U32(ctx, 31, 0x318994u);
    ctx->pc = 0x318990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31898Cu;
    // 0x318990: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x31898Cu, 0x318994u)) {
        return;
    }
    ctx->pc = 0x318994u;
label_318994:
    // 0x318994: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x318994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x318998: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x318998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31899c: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x31899Cu;
    {
        const bool branch_taken_0x31899c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31899c) {
            ctx->pc = 0x3189A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31899Cu;
            // 0x3189a0: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3188F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3188f0;
        }
    }
    ctx->pc = 0x3189A4u;
label_3189a4:
    // 0x3189a4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3189a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3189a8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3189a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3189ac: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3189ACu;
    {
        const bool branch_taken_0x3189ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3189ac) {
            ctx->pc = 0x3189B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3189ACu;
            // 0x3189b0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318A10u;
            goto label_318a10;
        }
    }
    ctx->pc = 0x3189B4u;
    // 0x3189b4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3189b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3189b8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3189b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3189bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3189BCu;
    {
        const bool branch_taken_0x3189bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3189C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189BCu;
        // 0x3189c0: 0x26451910  addiu       $a1, $s2, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189bc) {
            ctx->pc = 0x3189ECu;
            goto label_3189ec;
        }
    }
    ctx->pc = 0x3189C4u;
    // 0x3189c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3189c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3189c8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x3189C8u;
    SET_GPR_U32(ctx, 31, 0x3189D0u);
    ctx->pc = 0x3189CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3189C8u;
    // 0x3189cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x3189C8u, 0x3189D0u)) {
        return;
    }
    ctx->pc = 0x3189D0u;
label_3189d0:
    // 0x3189d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3189d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3189d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3189d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3189d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3189d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3189dc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3189dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3189e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3189e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3189e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3189E4u;
    {
        const bool branch_taken_0x3189e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3189E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189E4u;
        // 0x3189e8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189e4) {
            ctx->pc = 0x318A34u;
            goto label_318a34;
        }
    }
    ctx->pc = 0x3189ECu;
label_3189ec:
    // 0x3189ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3189ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3189f0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x3189F0u;
    SET_GPR_U32(ctx, 31, 0x3189F8u);
    ctx->pc = 0x3189F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3189F0u;
    // 0x3189f4: 0x26451910  addiu       $a1, $s2, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x3189F0u, 0x3189F8u)) {
        return;
    }
    ctx->pc = 0x3189F8u;
label_3189f8:
    // 0x3189f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3189f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3189fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3189fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318a00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318a04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318a08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x318A08u;
    {
        const bool branch_taken_0x318a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A08u;
        // 0x318a0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a08) {
            ctx->pc = 0x318A34u;
            goto label_318a34;
        }
    }
    ctx->pc = 0x318A10u;
label_318a10:
    // 0x318a10: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318A10u;
    {
        const bool branch_taken_0x318a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318a10) {
            ctx->pc = 0x318A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318A10u;
            // 0x318a14: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318A24u;
            goto label_318a24;
        }
    }
    ctx->pc = 0x318A18u;
    // 0x318a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318a1c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x318a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x318a20: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_318a24:
    // 0x318a24: 0x26451910  addiu       $a1, $s2, 0x1910
    ctx->pc = 0x318a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    // 0x318a28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x318a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318a2c: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318A2Cu;
    SET_GPR_U32(ctx, 31, 0x318A34u);
    ctx->pc = 0x318A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318A2Cu;
    // 0x318a30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318A2Cu, 0x318A34u)) {
        return;
    }
    ctx->pc = 0x318A34u;
label_318a34:
    // 0x318a34: 0x83a20182  lb          $v0, 0x182($sp)
    ctx->pc = 0x318a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 386)));
    // 0x318a38: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x318A38u;
    {
        const bool branch_taken_0x318a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A38u;
        // 0x318a3c: 0x93a30182  lbu         $v1, 0x182($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a38) {
            ctx->pc = 0x318AB0u;
            goto label_318ab0;
        }
    }
    ctx->pc = 0x318A40u;
    // 0x318a40: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318a44: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318a48: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x318A48u;
    {
        const bool branch_taken_0x318a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a48) {
            ctx->pc = 0x318A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318A48u;
            // 0x318a4c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318A84u;
            goto label_318a84;
        }
    }
    ctx->pc = 0x318A50u;
    // 0x318a50: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318a54: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x318a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x318a58: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x318A58u;
    {
        const bool branch_taken_0x318a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318a58) {
            ctx->pc = 0x318A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318A58u;
            // 0x318a5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318A7Cu;
            goto label_318a7c;
        }
    }
    ctx->pc = 0x318A60u;
    // 0x318a60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x318a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318a64: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x318a64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x318a68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318a6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318a70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318a74: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x318A74u;
    {
        const bool branch_taken_0x318a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A74u;
        // 0x318a78: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a74) {
            ctx->pc = 0x318B04u;
            goto label_318b04;
        }
    }
    ctx->pc = 0x318A7Cu;
label_318a7c:
    // 0x318a7c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x318A7Cu;
    {
        const bool branch_taken_0x318a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A7Cu;
        // 0x318a80: 0x27a50182  addiu       $a1, $sp, 0x182 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a7c) {
            ctx->pc = 0x318B14u;
            goto label_318b14;
        }
    }
    ctx->pc = 0x318A84u;
label_318a84:
    // 0x318a84: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318A84u;
    {
        const bool branch_taken_0x318a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318a84) {
            ctx->pc = 0x318A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318A84u;
            // 0x318a88: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318A98u;
            goto label_318a98;
        }
    }
    ctx->pc = 0x318A8Cu;
    // 0x318a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318a90: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x318a90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x318a94: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_318a98:
    // 0x318a98: 0x27a50182  addiu       $a1, $sp, 0x182
    ctx->pc = 0x318a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 386));
    // 0x318a9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x318a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318aa0: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318AA0u;
    SET_GPR_U32(ctx, 31, 0x318AA8u);
    ctx->pc = 0x318AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318AA0u;
    // 0x318aa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318AA0u, 0x318AA8u)) {
        return;
    }
    ctx->pc = 0x318AA8u;
label_318aa8:
    // 0x318aa8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x318AA8u;
    {
        const bool branch_taken_0x318aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AA8u;
        // 0x318aac: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318aa8) {
            ctx->pc = 0x318B60u;
            goto label_318b60;
        }
    }
    ctx->pc = 0x318AB0u;
label_318ab0:
    // 0x318ab0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x318ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x318ab4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x318AB4u;
    {
        const bool branch_taken_0x318ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AB4u;
        // 0x318ab8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ab4) {
            ctx->pc = 0x318B5Cu;
            goto label_318b5c;
        }
    }
    ctx->pc = 0x318ABCu;
    // 0x318abc: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x318abcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318ac0: 0xa3a20170  sb          $v0, 0x170($sp)
    ctx->pc = 0x318ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x318ac4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x318ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x318ac8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x318AC8u;
    {
        const bool branch_taken_0x318ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AC8u;
        // 0x318acc: 0xa3b60171  sb          $s6, 0x171($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 369), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ac8) {
            ctx->pc = 0x318B34u;
            goto label_318b34;
        }
    }
    ctx->pc = 0x318AD0u;
    // 0x318ad0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318ad4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x318ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x318ad8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x318AD8u;
    {
        const bool branch_taken_0x318ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318ad8) {
            ctx->pc = 0x318ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318AD8u;
            // 0x318adc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318B10u;
            goto label_318b10;
        }
    }
    ctx->pc = 0x318AE0u;
    // 0x318ae0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x318ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318ae4: 0x83a50170  lb          $a1, 0x170($sp)
    ctx->pc = 0x318ae4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x318ae8: 0x83a60171  lb          $a2, 0x171($sp)
    ctx->pc = 0x318ae8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 369)));
    // 0x318aec: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x318aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x318af0: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x318af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x318af4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318af8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318afc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x318afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x318b00: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x318b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_318b04:
    // 0x318b04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318b08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x318B08u;
    {
        const bool branch_taken_0x318b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B08u;
        // 0x318b0c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b08) {
            ctx->pc = 0x318B5Cu;
            goto label_318b5c;
        }
    }
    ctx->pc = 0x318B10u;
label_318b10:
    // 0x318b10: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x318b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_318b14:
    // 0x318b14: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318B14u;
    SET_GPR_U32(ctx, 31, 0x318B1Cu);
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318B14u, 0x318B1Cu)) {
        return;
    }
    ctx->pc = 0x318B1Cu;
label_318b1c:
    // 0x318b1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318b20: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318b24: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318b28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318b2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x318B2Cu;
    {
        const bool branch_taken_0x318b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B2Cu;
        // 0x318b30: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b2c) {
            ctx->pc = 0x318B5Cu;
            goto label_318b5c;
        }
    }
    ctx->pc = 0x318B34u;
label_318b34:
    // 0x318b34: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x318b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318b38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318B38u;
    {
        const bool branch_taken_0x318b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318b38) {
            ctx->pc = 0x318B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318B38u;
            // 0x318b3c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318B4Cu;
            goto label_318b4c;
        }
    }
    ctx->pc = 0x318B40u;
    // 0x318b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318b44: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x318b44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x318b48: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_318b4c:
    // 0x318b4c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x318b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x318b50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x318b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318b54: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318B54u;
    SET_GPR_U32(ctx, 31, 0x318B5Cu);
    ctx->pc = 0x318B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B54u;
    // 0x318b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318B54u, 0x318B5Cu)) {
        return;
    }
    ctx->pc = 0x318B5Cu;
label_318b5c:
    // 0x318b5c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x318b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_318b60:
    // 0x318b60: 0x16e2005b  bne         $s7, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x318B60u;
    {
        const bool branch_taken_0x318b60 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x318B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B60u;
        // 0x318b64: 0x8fa20188  lw          $v0, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b60) {
            ctx->pc = 0x318CD0u;
            goto label_318cd0;
        }
    }
    ctx->pc = 0x318B68u;
    // 0x318b68: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x318b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x318b6c: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x318b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x318b70: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x318b70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x318b74: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x318B74u;
    {
        const bool branch_taken_0x318b74 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x318B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B74u;
        // 0x318b78: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b74) {
            ctx->pc = 0x318CCCu;
            goto label_318ccc;
        }
    }
    ctx->pc = 0x318B7Cu;
    // 0x318b7c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x318B7Cu;
    {
        const bool branch_taken_0x318b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B7Cu;
        // 0x318b80: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b7c) {
            ctx->pc = 0x318C3Cu;
            goto label_318c3c;
        }
    }
    ctx->pc = 0x318B84u;
    // 0x318b84: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x318b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318b88: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318b88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318b8c: 0x0  nop
    ctx->pc = 0x318b8cu;
    // NOP
label_318b90:
    // 0x318b90: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318b94: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x318B94u;
    {
        const bool branch_taken_0x318b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318b94) {
            ctx->pc = 0x318B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318B94u;
            // 0x318b98: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318C10u;
            goto label_318c10;
        }
    }
    ctx->pc = 0x318B9Cu;
    // 0x318b9c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318ba0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x318ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x318ba4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x318BA4u;
    {
        const bool branch_taken_0x318ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318ba4) {
            ctx->pc = 0x318BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318BA4u;
            // 0x318ba8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318BF0u;
            goto label_318bf0;
        }
    }
    ctx->pc = 0x318BACu;
    // 0x318bac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x318bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318bb0: 0x26461920  addiu       $a2, $s2, 0x1920
    ctx->pc = 0x318bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    // 0x318bb4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x318bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x318bb8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x318bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x318bbc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x318bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x318bc0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x318bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x318bc4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x318bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318bc8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x318bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318bcc: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x318bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318bd0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x318bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318bd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318bd8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318bdc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x318bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x318be0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x318be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x318be4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318be8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x318BE8u;
    {
        const bool branch_taken_0x318be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BE8u;
        // 0x318bec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318be8) {
            ctx->pc = 0x318C2Cu;
            goto label_318c2c;
        }
    }
    ctx->pc = 0x318BF0u;
label_318bf0:
    // 0x318bf0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318BF0u;
    SET_GPR_U32(ctx, 31, 0x318BF8u);
    ctx->pc = 0x318BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BF0u;
    // 0x318bf4: 0x26451920  addiu       $a1, $s2, 0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318BF0u, 0x318BF8u)) {
        return;
    }
    ctx->pc = 0x318BF8u;
label_318bf8:
    // 0x318bf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318bfc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318c00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318c04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318c08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x318C08u;
    {
        const bool branch_taken_0x318c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C08u;
        // 0x318c0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c08) {
            ctx->pc = 0x318C2Cu;
            goto label_318c2c;
        }
    }
    ctx->pc = 0x318C10u;
label_318c10:
    // 0x318c10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x318C10u;
    {
        const bool branch_taken_0x318c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c10) {
            ctx->pc = 0x318C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318C10u;
            // 0x318c14: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318C18u;
            goto label_318c18;
        }
    }
    ctx->pc = 0x318C18u;
label_318c18:
    // 0x318c18: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x318c1c: 0x26451920  addiu       $a1, $s2, 0x1920
    ctx->pc = 0x318c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    // 0x318c20: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x318c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x318c24: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318C24u;
    SET_GPR_U32(ctx, 31, 0x318C2Cu);
    ctx->pc = 0x318C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C24u;
    // 0x318c28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318C24u, 0x318C2Cu)) {
        return;
    }
    ctx->pc = 0x318C2Cu;
label_318c2c:
    // 0x318c2c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x318c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x318c30: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x318c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x318c34: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x318C34u;
    {
        const bool branch_taken_0x318c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c34) {
            ctx->pc = 0x318C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318C34u;
            // 0x318c38: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318b90;
        }
    }
    ctx->pc = 0x318C3Cu;
label_318c3c:
    // 0x318c3c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318c40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318c44: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x318C44u;
    {
        const bool branch_taken_0x318c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c44) {
            ctx->pc = 0x318C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318C44u;
            // 0x318c48: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318CA8u;
            goto label_318ca8;
        }
    }
    ctx->pc = 0x318C4Cu;
    // 0x318c4c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318c50: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x318c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x318c54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x318C54u;
    {
        const bool branch_taken_0x318c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C54u;
        // 0x318c58: 0x26451920  addiu       $a1, $s2, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c54) {
            ctx->pc = 0x318C84u;
            goto label_318c84;
        }
    }
    ctx->pc = 0x318C5Cu;
    // 0x318c5c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x318c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318c60: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318C60u;
    SET_GPR_U32(ctx, 31, 0x318C68u);
    ctx->pc = 0x318C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C60u;
    // 0x318c64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318C60u, 0x318C68u)) {
        return;
    }
    ctx->pc = 0x318C68u;
label_318c68:
    // 0x318c68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318c6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318c70: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x318c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x318c74: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x318c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x318c78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318c7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x318C7Cu;
    {
        const bool branch_taken_0x318c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C7Cu;
        // 0x318c80: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c7c) {
            ctx->pc = 0x318CCCu;
            goto label_318ccc;
        }
    }
    ctx->pc = 0x318C84u;
label_318c84:
    // 0x318c84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x318c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318c88: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318C88u;
    SET_GPR_U32(ctx, 31, 0x318C90u);
    ctx->pc = 0x318C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C88u;
    // 0x318c8c: 0x26451920  addiu       $a1, $s2, 0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318C88u, 0x318C90u)) {
        return;
    }
    ctx->pc = 0x318C90u;
label_318c90:
    // 0x318c90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318c94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318c98: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318c9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318ca0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x318CA0u;
    {
        const bool branch_taken_0x318ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CA0u;
        // 0x318ca4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ca0) {
            ctx->pc = 0x318CCCu;
            goto label_318ccc;
        }
    }
    ctx->pc = 0x318CA8u;
label_318ca8:
    // 0x318ca8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318CA8u;
    {
        const bool branch_taken_0x318ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318ca8) {
            ctx->pc = 0x318CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318CA8u;
            // 0x318cac: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318CBCu;
            goto label_318cbc;
        }
    }
    ctx->pc = 0x318CB0u;
    // 0x318cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318cb4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x318cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x318cb8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318cb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_318cbc:
    // 0x318cbc: 0x26451920  addiu       $a1, $s2, 0x1920
    ctx->pc = 0x318cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    // 0x318cc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x318cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318cc4: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318CC4u;
    SET_GPR_U32(ctx, 31, 0x318CCCu);
    ctx->pc = 0x318CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CC4u;
    // 0x318cc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318CC4u, 0x318CCCu)) {
        return;
    }
    ctx->pc = 0x318CCCu;
label_318ccc:
    // 0x318ccc: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x318cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_318cd0:
    // 0x318cd0: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x318cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x318cd4: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x318cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318cd8: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x318CD8u;
    {
        const bool branch_taken_0x318cd8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x318CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CD8u;
        // 0x318cdc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cd8) {
            ctx->pc = 0x318E2Cu;
            goto label_318e2c;
        }
    }
    ctx->pc = 0x318CE0u;
    // 0x318ce0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x318CE0u;
    {
        const bool branch_taken_0x318ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CE0u;
        // 0x318ce4: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ce0) {
            ctx->pc = 0x318D9Cu;
            goto label_318d9c;
        }
    }
    ctx->pc = 0x318CE8u;
    // 0x318ce8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x318ce8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318cec: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318cecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_318cf0:
    // 0x318cf0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318cf4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x318CF4u;
    {
        const bool branch_taken_0x318cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318cf4) {
            ctx->pc = 0x318CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318CF4u;
            // 0x318cf8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318D70u;
            goto label_318d70;
        }
    }
    ctx->pc = 0x318CFCu;
    // 0x318cfc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318d00: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x318d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x318d04: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x318D04u;
    {
        const bool branch_taken_0x318d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318d04) {
            ctx->pc = 0x318D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318D04u;
            // 0x318d08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318D50u;
            goto label_318d50;
        }
    }
    ctx->pc = 0x318D0Cu;
    // 0x318d0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x318d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318d10: 0x26431920  addiu       $v1, $s2, 0x1920
    ctx->pc = 0x318d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    // 0x318d14: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x318d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x318d18: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x318d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x318d1c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x318d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x318d20: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x318d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x318d24: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x318d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318d28: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x318d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318d2c: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x318d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318d30: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x318d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318d34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318d38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318d3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x318d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x318d40: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x318d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x318d44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318d48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x318D48u;
    {
        const bool branch_taken_0x318d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D48u;
        // 0x318d4c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d48) {
            ctx->pc = 0x318D8Cu;
            goto label_318d8c;
        }
    }
    ctx->pc = 0x318D50u;
label_318d50:
    // 0x318d50: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318D50u;
    SET_GPR_U32(ctx, 31, 0x318D58u);
    ctx->pc = 0x318D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D50u;
    // 0x318d54: 0x26451920  addiu       $a1, $s2, 0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318D50u, 0x318D58u)) {
        return;
    }
    ctx->pc = 0x318D58u;
label_318d58:
    // 0x318d58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318d5c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318d60: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318d64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318d68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x318D68u;
    {
        const bool branch_taken_0x318d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D68u;
        // 0x318d6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d68) {
            ctx->pc = 0x318D8Cu;
            goto label_318d8c;
        }
    }
    ctx->pc = 0x318D70u;
label_318d70:
    // 0x318d70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x318D70u;
    {
        const bool branch_taken_0x318d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d70) {
            ctx->pc = 0x318D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318D70u;
            // 0x318d74: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318D78u;
            goto label_318d78;
        }
    }
    ctx->pc = 0x318D78u;
label_318d78:
    // 0x318d78: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x318d7c: 0x26451920  addiu       $a1, $s2, 0x1920
    ctx->pc = 0x318d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    // 0x318d80: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x318d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x318d84: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318D84u;
    SET_GPR_U32(ctx, 31, 0x318D8Cu);
    ctx->pc = 0x318D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D84u;
    // 0x318d88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318D84u, 0x318D8Cu)) {
        return;
    }
    ctx->pc = 0x318D8Cu;
label_318d8c:
    // 0x318d8c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x318d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x318d90: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x318d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x318d94: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x318D94u;
    {
        const bool branch_taken_0x318d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d94) {
            ctx->pc = 0x318D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318D94u;
            // 0x318d98: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318cf0;
        }
    }
    ctx->pc = 0x318D9Cu;
label_318d9c:
    // 0x318d9c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318da0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318da4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x318DA4u;
    {
        const bool branch_taken_0x318da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318da4) {
            ctx->pc = 0x318DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318DA4u;
            // 0x318da8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E08u;
            goto label_318e08;
        }
    }
    ctx->pc = 0x318DACu;
    // 0x318dac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318db0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x318db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x318db4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x318DB4u;
    {
        const bool branch_taken_0x318db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DB4u;
        // 0x318db8: 0x26451920  addiu       $a1, $s2, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318db4) {
            ctx->pc = 0x318DE4u;
            goto label_318de4;
        }
    }
    ctx->pc = 0x318DBCu;
    // 0x318dbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x318dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318dc0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318DC0u;
    SET_GPR_U32(ctx, 31, 0x318DC8u);
    ctx->pc = 0x318DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318DC0u;
    // 0x318dc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318DC0u, 0x318DC8u)) {
        return;
    }
    ctx->pc = 0x318DC8u;
label_318dc8:
    // 0x318dc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318dcc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318dd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x318dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x318dd4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x318dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x318dd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318ddc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x318DDCu;
    {
        const bool branch_taken_0x318ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DDCu;
        // 0x318de0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ddc) {
            ctx->pc = 0x318E2Cu;
            goto label_318e2c;
        }
    }
    ctx->pc = 0x318DE4u;
label_318de4:
    // 0x318de4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x318de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318de8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318DE8u;
    SET_GPR_U32(ctx, 31, 0x318DF0u);
    ctx->pc = 0x318DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318DE8u;
    // 0x318dec: 0x26451920  addiu       $a1, $s2, 0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318DE8u, 0x318DF0u)) {
        return;
    }
    ctx->pc = 0x318DF0u;
label_318df0:
    // 0x318df0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318df4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318df8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318dfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318e00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x318E00u;
    {
        const bool branch_taken_0x318e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E00u;
        // 0x318e04: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e00) {
            ctx->pc = 0x318E2Cu;
            goto label_318e2c;
        }
    }
    ctx->pc = 0x318E08u;
label_318e08:
    // 0x318e08: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318E08u;
    {
        const bool branch_taken_0x318e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318e08) {
            ctx->pc = 0x318E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E08u;
            // 0x318e0c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E1Cu;
            goto label_318e1c;
        }
    }
    ctx->pc = 0x318E10u;
    // 0x318e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318e14: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x318e14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x318e18: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_318e1c:
    // 0x318e1c: 0x26451920  addiu       $a1, $s2, 0x1920
    ctx->pc = 0x318e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6432));
    // 0x318e20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x318e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e24: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318E24u;
    SET_GPR_U32(ctx, 31, 0x318E2Cu);
    ctx->pc = 0x318E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E24u;
    // 0x318e28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318E24u, 0x318E2Cu)) {
        return;
    }
    ctx->pc = 0x318E2Cu;
label_318e2c:
    // 0x318e2c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318e30: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318e34: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x318E34u;
    {
        const bool branch_taken_0x318e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E34u;
        // 0x318e38: 0x8fa60188  lw          $a2, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e34) {
            ctx->pc = 0x318E98u;
            goto label_318e98;
        }
    }
    ctx->pc = 0x318E3Cu;
    // 0x318e3c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x318e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318e40: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x318e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x318e44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x318E44u;
    {
        const bool branch_taken_0x318e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E44u;
        // 0x318e48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e44) {
            ctx->pc = 0x318E74u;
            goto label_318e74;
        }
    }
    ctx->pc = 0x318E4Cu;
    // 0x318e4c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318E4Cu;
    SET_GPR_U32(ctx, 31, 0x318E54u);
    ctx->pc = 0x318E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E4Cu;
    // 0x318e50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318E4Cu, 0x318E54u)) {
        return;
    }
    ctx->pc = 0x318E54u;
label_318e54:
    // 0x318e54: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x318e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x318e58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318e5c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318e60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x318e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x318e64: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x318e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x318e68: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318e6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x318E6Cu;
    {
        const bool branch_taken_0x318e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E6Cu;
        // 0x318e70: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e6c) {
            ctx->pc = 0x318EC0u;
            goto label_318ec0;
        }
    }
    ctx->pc = 0x318E74u;
label_318e74:
    // 0x318e74: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x318e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e78: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318E78u;
    SET_GPR_U32(ctx, 31, 0x318E80u);
    ctx->pc = 0x318E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E78u;
    // 0x318e7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318E78u, 0x318E80u)) {
        return;
    }
    ctx->pc = 0x318E80u;
label_318e80:
    // 0x318e80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318e84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318e88: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318e90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x318E90u;
    {
        const bool branch_taken_0x318e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E90u;
        // 0x318e94: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e90) {
            ctx->pc = 0x318EC0u;
            goto label_318ec0;
        }
    }
    ctx->pc = 0x318E98u;
label_318e98:
    // 0x318e98: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x318e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318e9c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318E9Cu;
    {
        const bool branch_taken_0x318e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318e9c) {
            ctx->pc = 0x318EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E9Cu;
            // 0x318ea0: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318EB0u;
            goto label_318eb0;
        }
    }
    ctx->pc = 0x318EA4u;
    // 0x318ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318ea8: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x318ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x318eac: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_318eb0:
    // 0x318eb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x318eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318eb4: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x318eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x318eb8: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318EB8u;
    SET_GPR_U32(ctx, 31, 0x318EC0u);
    ctx->pc = 0x318EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318EB8u;
    // 0x318ebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318EB8u, 0x318EC0u)) {
        return;
    }
    ctx->pc = 0x318EC0u;
label_318ec0:
    // 0x318ec0: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x318ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x318ec4: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x318EC4u;
    {
        const bool branch_taken_0x318ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x318EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EC4u;
        // 0x318ec8: 0x8fa50190  lw          $a1, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ec4) {
            ctx->pc = 0x31902Cu;
            goto label_31902c;
        }
    }
    ctx->pc = 0x318ECCu;
    // 0x318ecc: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x318eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x318ed0: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x318ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x318ed4: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x318ED4u;
    {
        const bool branch_taken_0x318ed4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x318ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318ED4u;
        // 0x318ed8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ed4) {
            ctx->pc = 0x31902Cu;
            goto label_31902c;
        }
    }
    ctx->pc = 0x318EDCu;
    // 0x318edc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x318EDCu;
    {
        const bool branch_taken_0x318edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EDCu;
        // 0x318ee0: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318edc) {
            ctx->pc = 0x318F9Cu;
            goto label_318f9c;
        }
    }
    ctx->pc = 0x318EE4u;
    // 0x318ee4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x318ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318ee8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318eec: 0x0  nop
    ctx->pc = 0x318eecu;
    // NOP
label_318ef0:
    // 0x318ef0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318ef4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x318EF4u;
    {
        const bool branch_taken_0x318ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ef4) {
            ctx->pc = 0x318EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318EF4u;
            // 0x318ef8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318F70u;
            goto label_318f70;
        }
    }
    ctx->pc = 0x318EFCu;
    // 0x318efc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318f00: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x318f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x318f04: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x318F04u;
    {
        const bool branch_taken_0x318f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318f04) {
            ctx->pc = 0x318F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318F04u;
            // 0x318f08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318F50u;
            goto label_318f50;
        }
    }
    ctx->pc = 0x318F0Cu;
    // 0x318f0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x318f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318f10: 0x26461910  addiu       $a2, $s2, 0x1910
    ctx->pc = 0x318f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    // 0x318f14: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x318f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x318f18: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x318f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x318f1c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x318f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x318f20: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x318f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x318f24: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x318f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318f28: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x318f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318f2c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x318f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318f30: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x318f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x318f34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318f38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318f3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x318f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x318f40: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x318f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x318f44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318f48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x318F48u;
    {
        const bool branch_taken_0x318f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F48u;
        // 0x318f4c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f48) {
            ctx->pc = 0x318F8Cu;
            goto label_318f8c;
        }
    }
    ctx->pc = 0x318F50u;
label_318f50:
    // 0x318f50: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318F50u;
    SET_GPR_U32(ctx, 31, 0x318F58u);
    ctx->pc = 0x318F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F50u;
    // 0x318f54: 0x26451910  addiu       $a1, $s2, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318F50u, 0x318F58u)) {
        return;
    }
    ctx->pc = 0x318F58u;
label_318f58:
    // 0x318f58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318f5c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318f60: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318f68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x318F68u;
    {
        const bool branch_taken_0x318f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F68u;
        // 0x318f6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f68) {
            ctx->pc = 0x318F8Cu;
            goto label_318f8c;
        }
    }
    ctx->pc = 0x318F70u;
label_318f70:
    // 0x318f70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x318F70u;
    {
        const bool branch_taken_0x318f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318f70) {
            ctx->pc = 0x318F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318F70u;
            // 0x318f74: 0xa634000e  sh          $s4, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318F78u;
            goto label_318f78;
        }
    }
    ctx->pc = 0x318F78u;
label_318f78:
    // 0x318f78: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x318f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x318f7c: 0x26451910  addiu       $a1, $s2, 0x1910
    ctx->pc = 0x318f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    // 0x318f80: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x318f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x318f84: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x318F84u;
    SET_GPR_U32(ctx, 31, 0x318F8Cu);
    ctx->pc = 0x318F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F84u;
    // 0x318f88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x318F84u, 0x318F8Cu)) {
        return;
    }
    ctx->pc = 0x318F8Cu;
label_318f8c:
    // 0x318f8c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x318f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x318f90: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x318f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x318f94: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x318F94u;
    {
        const bool branch_taken_0x318f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318f94) {
            ctx->pc = 0x318F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318F94u;
            // 0x318f98: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318ef0;
        }
    }
    ctx->pc = 0x318F9Cu;
label_318f9c:
    // 0x318f9c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x318f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318fa0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318fa4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x318FA4u;
    {
        const bool branch_taken_0x318fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318fa4) {
            ctx->pc = 0x318FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318FA4u;
            // 0x318fa8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319008u;
            goto label_319008;
        }
    }
    ctx->pc = 0x318FACu;
    // 0x318fac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x318facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318fb0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x318fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x318fb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x318FB4u;
    {
        const bool branch_taken_0x318fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FB4u;
        // 0x318fb8: 0x26451910  addiu       $a1, $s2, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fb4) {
            ctx->pc = 0x318FE4u;
            goto label_318fe4;
        }
    }
    ctx->pc = 0x318FBCu;
    // 0x318fbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x318fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318fc0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318FC0u;
    SET_GPR_U32(ctx, 31, 0x318FC8u);
    ctx->pc = 0x318FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318FC0u;
    // 0x318fc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318FC0u, 0x318FC8u)) {
        return;
    }
    ctx->pc = 0x318FC8u;
label_318fc8:
    // 0x318fc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318fcc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318fd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x318fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x318fd4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x318fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x318fd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x318fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x318fdc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x318FDCu;
    {
        const bool branch_taken_0x318fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FDCu;
        // 0x318fe0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fdc) {
            ctx->pc = 0x31902Cu;
            goto label_31902c;
        }
    }
    ctx->pc = 0x318FE4u;
label_318fe4:
    // 0x318fe4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x318fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318fe8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x318FE8u;
    SET_GPR_U32(ctx, 31, 0x318FF0u);
    ctx->pc = 0x318FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318FE8u;
    // 0x318fec: 0x26451910  addiu       $a1, $s2, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x318FE8u, 0x318FF0u)) {
        return;
    }
    ctx->pc = 0x318FF0u;
label_318ff0:
    // 0x318ff0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x318ff4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x318ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x318ff8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x318ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x318ffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319000: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319000u;
    {
        const bool branch_taken_0x319000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319000u;
        // 0x319004: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319000) {
            ctx->pc = 0x31902Cu;
            goto label_31902c;
        }
    }
    ctx->pc = 0x319008u;
label_319008:
    // 0x319008: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319008u;
    {
        const bool branch_taken_0x319008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319008) {
            ctx->pc = 0x31900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319008u;
            // 0x31900c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31901Cu;
            goto label_31901c;
        }
    }
    ctx->pc = 0x319010u;
    // 0x319010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319014: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x319014u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x319018: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31901c:
    // 0x31901c: 0x26451910  addiu       $a1, $s2, 0x1910
    ctx->pc = 0x31901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6416));
    // 0x319020: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x319020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319024: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x319024u;
    SET_GPR_U32(ctx, 31, 0x31902Cu);
    ctx->pc = 0x319028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319024u;
    // 0x319028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x319024u, 0x31902Cu)) {
        return;
    }
    ctx->pc = 0x31902Cu;
label_31902c:
    // 0x31902c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x31902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x319030: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x319030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x319034: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x319034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x319038: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x319038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x31903c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x31903cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x319040: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x319040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x319044: 0x1000fc1c  b           . + 4 + (-0x3E4 << 2)
    ctx->pc = 0x319044u;
    {
        const bool branch_taken_0x319044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319044u;
        // 0x319048: 0xafa5018c  sw          $a1, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319044) {
            ctx->pc = 0x3180B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3180b8;
        }
    }
    ctx->pc = 0x31904Cu;
label_31904c:
    // 0x31904c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31904cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_319050:
    // 0x319050: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319054: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x319054u;
    {
        const bool branch_taken_0x319054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319054u;
        // 0x319058: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319054) {
            ctx->pc = 0x319074u;
            goto label_319074;
        }
    }
    ctx->pc = 0x31905Cu;
    // 0x31905c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x319060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x319060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x319064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319068: 0xc0c5fa2  jal         func_317E88
    ctx->pc = 0x319068u;
    SET_GPR_U32(ctx, 31, 0x319070u);
    ctx->pc = 0x31906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319068u;
    // 0x31906c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317E88u, 0x319068u, 0x319070u)) {
        return;
    }
    ctx->pc = 0x319070u;
label_319070:
    // 0x319070: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x319070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_319074:
    // 0x319074: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x319074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x319078: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x319078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x31907c: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x31907cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x319080: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x319080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x319084: 0x7bb40200  lq          $s4, 0x200($sp)
    ctx->pc = 0x319084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x319088: 0x7bb501f0  lq          $s5, 0x1F0($sp)
    ctx->pc = 0x319088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x31908c: 0x7bb601e0  lq          $s6, 0x1E0($sp)
    ctx->pc = 0x31908cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x319090: 0x7bb701d0  lq          $s7, 0x1D0($sp)
    ctx->pc = 0x319090u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x319094: 0x7bbe01c0  lq          $fp, 0x1C0($sp)
    ctx->pc = 0x319094u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x319098: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x319098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x31909c: 0x3e00008  jr          $ra
    ctx->pc = 0x31909Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3190A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31909Cu;
        // 0x3190a0: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31909Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3190A4u;
    // 0x3190a4: 0x0  nop
    ctx->pc = 0x3190a4u;
    // NOP
    ctx->pc = 0x3190a8u;
}
