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

// Function: sub_00100340
// Address: 0x100340 - 0x1004c8
void sub_00100340_0x100340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100340_0x100340");
#endif

    switch (ctx->pc) {
        case 0x1003a8u: goto label_1003a8;
        case 0x1003b4u: goto label_1003b4;
        case 0x1003c0u: goto label_1003c0;
        case 0x1003d0u: goto label_1003d0;
        case 0x1003e8u: goto label_1003e8;
        case 0x100430u: goto label_100430;
        case 0x100438u: goto label_100438;
        case 0x10044cu: goto label_10044c;
        case 0x10047cu: goto label_10047c;
        case 0x100494u: goto label_100494;
        case 0x1004a8u: goto label_1004a8;
        default: break;
    }

    ctx->pc = 0x100340u;

    // 0x100340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x100340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x100344: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x100344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x100348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x100348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10034c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10034cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x100350: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x100350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x100354: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x100354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100358: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x100358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10035c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x10035cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x100360: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x100360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x100364: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x100364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x100368: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x100368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10036c: 0x24429548  addiu       $v0, $v0, -0x6AB8
    ctx->pc = 0x10036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939976));
    // 0x100370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100374: 0x24639330  addiu       $v1, $v1, -0x6CD0
    ctx->pc = 0x100374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939440));
    // 0x100378: 0x24849508  addiu       $a0, $a0, -0x6AF8
    ctx->pc = 0x100378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939912));
    // 0x10037c: 0x24c69450  addiu       $a2, $a2, -0x6BB0
    ctx->pc = 0x10037cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939728));
    // 0x100380: 0x8e470214  lw          $a3, 0x214($s2)
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x100384: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x100384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100388: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x100388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x10038c: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x10038cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x100390: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x100390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
    // 0x100394: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x100394u;
    {
        const bool branch_taken_0x100394 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x100398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100394u;
        // 0x100398: 0xae460034  sw          $a2, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100394) {
            ctx->pc = 0x1003ACu;
            goto label_1003ac;
        }
    }
    ctx->pc = 0x10039Cu;
    // 0x10039c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x10039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003a0: 0xc04207c  jal         func_1081F0
    ctx->pc = 0x1003A0u;
    SET_GPR_U32(ctx, 31, 0x1003A8u);
    ctx->pc = 0x1003A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003A0u;
    // 0x1003a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1081F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1081F0u, 0x1003A0u, 0x1003A8u)) {
        return;
    }
    ctx->pc = 0x1003A8u;
label_1003a8:
    // 0x1003a8: 0xae400214  sw          $zero, 0x214($s2)
    ctx->pc = 0x1003a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
label_1003ac:
    // 0x1003ac: 0xc040d50  jal         func_103540
    ctx->pc = 0x1003ACu;
    SET_GPR_U32(ctx, 31, 0x1003B4u);
    ctx->pc = 0x1003B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003ACu;
    // 0x1003b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103540u, 0x1003ACu, 0x1003B4u)) {
        return;
    }
    ctx->pc = 0x1003B4u;
label_1003b4:
    // 0x1003b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1003b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003b8: 0xc040d6e  jal         func_1035B8
    ctx->pc = 0x1003B8u;
    SET_GPR_U32(ctx, 31, 0x1003C0u);
    ctx->pc = 0x1003BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003B8u;
    // 0x1003bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1035B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1035B8u, 0x1003B8u, 0x1003C0u)) {
        return;
    }
    ctx->pc = 0x1003C0u;
label_1003c0:
    // 0x1003c0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1003c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1003c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003c8: 0xc040b98  jal         func_102E60
    ctx->pc = 0x1003C8u;
    SET_GPR_U32(ctx, 31, 0x1003D0u);
    ctx->pc = 0x1003CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003C8u;
    // 0x1003cc: 0x8c448280  lw          $a0, -0x7D80($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102E60u, 0x1003C8u, 0x1003D0u)) {
        return;
    }
    ctx->pc = 0x1003D0u;
label_1003d0:
    // 0x1003d0: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x1003d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x1003d4: 0x26460188  addiu       $a2, $s2, 0x188
    ctx->pc = 0x1003d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 392));
    // 0x1003d8: 0xae40025c  sw          $zero, 0x25C($s2)
    ctx->pc = 0x1003d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 0));
    // 0x1003dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1003DCu;
    {
        const bool branch_taken_0x1003dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003DCu;
        // 0x1003e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003dc) {
            ctx->pc = 0x100420u;
            goto label_100420;
        }
    }
    ctx->pc = 0x1003E4u;
    // 0x1003e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1003e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1003e8:
    // 0x1003e8: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x1003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x1003ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1003ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1003f0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1003f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1003f4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1003F4u;
    {
        const bool branch_taken_0x1003f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003f4) {
            ctx->pc = 0x1003F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1003F4u;
            // 0x1003f8: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100410u;
            goto label_100410;
        }
    }
    ctx->pc = 0x1003FCu;
    // 0x1003fc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1003fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x100400: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x100400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x100404: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x100404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x100408: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x100408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x10040c: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x10040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_100410:
    // 0x100410: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x100410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x100414: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x100414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100418: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x100418u;
    {
        const bool branch_taken_0x100418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100418u;
        // 0x10041c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100418) {
            ctx->pc = 0x1003E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1003e8;
        }
    }
    ctx->pc = 0x100420u;
label_100420:
    // 0x100420: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x100420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x100424: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x100424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100428: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x100428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10042c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x10042cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_100430:
    // 0x100430: 0xc09d90a  jal         func_276428
    ctx->pc = 0x100430u;
    SET_GPR_U32(ctx, 31, 0x100438u);
    ctx->pc = 0x100434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100430u;
    // 0x100434: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x100430u, 0x100438u)) {
        return;
    }
    ctx->pc = 0x100438u;
label_100438:
    // 0x100438: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x100438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10043c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10043Cu;
    {
        const bool branch_taken_0x10043c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10043c) {
            ctx->pc = 0x100440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10043Cu;
            // 0x100440: 0xae000128  sw          $zero, 0x128($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100454u;
            goto label_100454;
        }
    }
    ctx->pc = 0x100444u;
    // 0x100444: 0xc09d90a  jal         func_276428
    ctx->pc = 0x100444u;
    SET_GPR_U32(ctx, 31, 0x10044Cu);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x100444u, 0x10044Cu)) {
        return;
    }
    ctx->pc = 0x10044Cu;
label_10044c:
    // 0x10044c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10044cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x100450: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x100450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_100454:
    // 0x100454: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x100454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x100458: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x100458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x10045c: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x10045cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x100460: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x100460u;
    {
        const bool branch_taken_0x100460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100460u;
        // 0x100464: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100460) {
            ctx->pc = 0x100430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100430;
        }
    }
    ctx->pc = 0x100468u;
    // 0x100468: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x100468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x10046c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10046Cu;
    {
        const bool branch_taken_0x10046c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10046c) {
            ctx->pc = 0x100470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10046Cu;
            // 0x100470: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100484u;
            goto label_100484;
        }
    }
    ctx->pc = 0x100474u;
    // 0x100474: 0xc0940f4  jal         func_2503D0
    ctx->pc = 0x100474u;
    SET_GPR_U32(ctx, 31, 0x10047Cu);
    ctx->pc = 0x2503D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2503D0u, 0x100474u, 0x10047Cu)) {
        return;
    }
    ctx->pc = 0x10047Cu;
label_10047c:
    // 0x10047c: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x10047cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x100480: 0x8e4400d8  lw          $a0, 0xD8($s2)
    ctx->pc = 0x100480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_100484:
    // 0x100484: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x100484u;
    {
        const bool branch_taken_0x100484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x100484) {
            ctx->pc = 0x100488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100484u;
            // 0x100488: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100498u;
            goto label_100498;
        }
    }
    ctx->pc = 0x10048Cu;
    // 0x10048c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x10048Cu;
    SET_GPR_U32(ctx, 31, 0x100494u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x10048Cu, 0x100494u)) {
        return;
    }
    ctx->pc = 0x100494u;
label_100494:
    // 0x100494: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x100494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_100498:
    // 0x100498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10049c: 0xae400218  sw          $zero, 0x218($s2)
    ctx->pc = 0x10049cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 0));
    // 0x1004a0: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x1004A0u;
    SET_GPR_U32(ctx, 31, 0x1004A8u);
    ctx->pc = 0x1004A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004A0u;
    // 0x1004a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x1004A0u, 0x1004A8u)) {
        return;
    }
    ctx->pc = 0x1004A8u;
label_1004a8:
    // 0x1004a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1004a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1004ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1004acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1004b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1004b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1004b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1004b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1004b8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1004b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1004bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1004bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1004c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1004C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004C0u;
        // 0x1004c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1004C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1004C8u;
}
