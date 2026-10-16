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

// Function: sub_003052E0
// Address: 0x3052e0 - 0x305698
void sub_003052E0_0x3052e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003052E0_0x3052e0");
#endif

    switch (ctx->pc) {
        case 0x305330u: goto label_305330;
        case 0x305358u: goto label_305358;
        case 0x305384u: goto label_305384;
        case 0x305390u: goto label_305390;
        case 0x3053b0u: goto label_3053b0;
        case 0x3053dcu: goto label_3053dc;
        case 0x3053e8u: goto label_3053e8;
        case 0x305420u: goto label_305420;
        case 0x30542cu: goto label_30542c;
        case 0x305460u: goto label_305460;
        case 0x3054b8u: goto label_3054b8;
        case 0x3054d8u: goto label_3054d8;
        case 0x305518u: goto label_305518;
        case 0x305564u: goto label_305564;
        case 0x305570u: goto label_305570;
        case 0x305590u: goto label_305590;
        case 0x3055d8u: goto label_3055d8;
        case 0x30560cu: goto label_30560c;
        case 0x305624u: goto label_305624;
        case 0x305630u: goto label_305630;
        default: break;
    }

    ctx->pc = 0x3052e0u;

    // 0x3052e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3052e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3052e4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3052e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3052e8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3052e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3052ec: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3052ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3052f0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3052f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3052f4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3052f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3052f8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3052f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3052fc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3052fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x305300: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x305300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x305304: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x305304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x305308: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x305308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x30530c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x30530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x305310: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x305310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x305314: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x305314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x305318: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x305318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x30531c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x30531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x305320: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x305320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x305324: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x305324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x305328: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x305328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x30532c: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x30532cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_305330:
    // 0x305330: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x305330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x305334: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x305334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305338: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x305338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30533c: 0x24970020  addiu       $s7, $a0, 0x20
    ctx->pc = 0x30533cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x305340: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x305340u;
    {
        const bool branch_taken_0x305340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305340u;
        // 0x305344: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305340) {
            ctx->pc = 0x305418u;
            goto label_305418;
        }
    }
    ctx->pc = 0x305348u;
    // 0x305348: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x305348u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30534c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x30534cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305350: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x305350u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x305354: 0x24b1018  mult        $v0, $s2, $t3
    ctx->pc = 0x305354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_305358:
    // 0x305358: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x305358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30535c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x305360: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x305360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305364: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x305364u;
    {
        const bool branch_taken_0x305364 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x305364) {
            ctx->pc = 0x305368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305364u;
            // 0x305368: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305398u;
            goto label_305398;
        }
    }
    ctx->pc = 0x30536Cu;
    // 0x30536c: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x30536cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x305370: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x305370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305374: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x305374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x305378: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x305378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30537c: 0xc092848  jal         func_24A120
    ctx->pc = 0x30537Cu;
    SET_GPR_U32(ctx, 31, 0x305384u);
    ctx->pc = 0x305380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30537Cu;
    // 0x305380: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x30537Cu, 0x305384u)) {
        return;
    }
    ctx->pc = 0x305384u;
label_305384:
    // 0x305384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x305384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305388: 0xc09281a  jal         func_24A068
    ctx->pc = 0x305388u;
    SET_GPR_U32(ctx, 31, 0x305390u);
    ctx->pc = 0x30538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305388u;
    // 0x30538c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x305388u, 0x305390u)) {
        return;
    }
    ctx->pc = 0x305390u;
label_305390:
    // 0x305390: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x305390u;
    {
        const bool branch_taken_0x305390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305390u;
        // 0x305394: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305390) {
            ctx->pc = 0x305664u;
            goto label_305664;
        }
    }
    ctx->pc = 0x305398u;
label_305398:
    // 0x305398: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x305398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30539c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30539cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3053a0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3053A0u;
    {
        const bool branch_taken_0x3053a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3053A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053A0u;
        // 0x3053a4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053a0) {
            ctx->pc = 0x305400u;
            goto label_305400;
        }
    }
    ctx->pc = 0x3053A8u;
    // 0x3053a8: 0x22a2018  mult        $a0, $s1, $t2
    ctx->pc = 0x3053a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3053ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3053acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3053b0:
    // 0x3053b0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x3053b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3053b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3053b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3053b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3053b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3053bc: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3053BCu;
    {
        const bool branch_taken_0x3053bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x3053bc) {
            ctx->pc = 0x3053C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3053BCu;
            // 0x3053c0: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3053F0u;
            goto label_3053f0;
        }
    }
    ctx->pc = 0x3053C4u;
    // 0x3053c4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x3053c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x3053c8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3053c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3053cc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3053ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3053d0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3053d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3053d4: 0xc092848  jal         func_24A120
    ctx->pc = 0x3053D4u;
    SET_GPR_U32(ctx, 31, 0x3053DCu);
    ctx->pc = 0x3053D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053D4u;
    // 0x3053d8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x3053D4u, 0x3053DCu)) {
        return;
    }
    ctx->pc = 0x3053DCu;
label_3053dc:
    // 0x3053dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3053dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053e0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x3053E0u;
    SET_GPR_U32(ctx, 31, 0x3053E8u);
    ctx->pc = 0x3053E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053E0u;
    // 0x3053e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x3053E0u, 0x3053E8u)) {
        return;
    }
    ctx->pc = 0x3053E8u;
label_3053e8:
    // 0x3053e8: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x3053E8u;
    {
        const bool branch_taken_0x3053e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053E8u;
        // 0x3053ec: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053e8) {
            ctx->pc = 0x305664u;
            goto label_305664;
        }
    }
    ctx->pc = 0x3053F0u;
label_3053f0:
    // 0x3053f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3053f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3053f4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3053f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3053f8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3053F8u;
    {
        const bool branch_taken_0x3053f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3053FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053F8u;
        // 0x3053fc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053f8) {
            ctx->pc = 0x3053B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3053b0;
        }
    }
    ctx->pc = 0x305400u;
label_305400:
    // 0x305400: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x305400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305404: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x305404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305408: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x305408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30540c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x30540cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305410: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x305410u;
    {
        const bool branch_taken_0x305410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305410u;
        // 0x305414: 0x24b1018  mult        $v0, $s2, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305410) {
            ctx->pc = 0x305358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305358;
        }
    }
    ctx->pc = 0x305418u;
label_305418:
    // 0x305418: 0xc0c0d1c  jal         func_303470
    ctx->pc = 0x305418u;
    SET_GPR_U32(ctx, 31, 0x305420u);
    ctx->pc = 0x30541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305418u;
    // 0x30541c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303470u, 0x305418u, 0x305420u)) {
        return;
    }
    ctx->pc = 0x305420u;
label_305420:
    // 0x305420: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x305420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305424: 0xc0c138a  jal         func_304E28
    ctx->pc = 0x305424u;
    SET_GPR_U32(ctx, 31, 0x30542Cu);
    ctx->pc = 0x305428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305424u;
    // 0x305428: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304E28u, 0x305424u, 0x30542Cu)) {
        return;
    }
    ctx->pc = 0x30542Cu;
label_30542c:
    // 0x30542c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x30542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x305430: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305430u;
    {
        const bool branch_taken_0x305430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305430u;
        // 0x305434: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305430) {
            ctx->pc = 0x305448u;
            goto label_305448;
        }
    }
    ctx->pc = 0x305438u;
    // 0x305438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30543c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x30543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x305440: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x305440u;
    {
        const bool branch_taken_0x305440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305440u;
        // 0x305444: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305440) {
            ctx->pc = 0x30561Cu;
            goto label_30561c;
        }
    }
    ctx->pc = 0x305448u;
label_305448:
    // 0x305448: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x305448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x30544c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x30544Cu;
    {
        const bool branch_taken_0x30544c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30544Cu;
        // 0x305450: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30544c) {
            ctx->pc = 0x3055C0u;
            goto label_3055c0;
        }
    }
    ctx->pc = 0x305454u;
    // 0x305454: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x305454u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x305458: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x305458u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x30545c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x30545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_305460:
    // 0x305460: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x305460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x305464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x305468: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x305468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30546c: 0x1056004f  beq         $v0, $s6, . + 4 + (0x4F << 2)
    ctx->pc = 0x30546Cu;
    {
        const bool branch_taken_0x30546c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x305470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30546Cu;
        // 0x305470: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30546c) {
            ctx->pc = 0x3055ACu;
            goto label_3055ac;
        }
    }
    ctx->pc = 0x305474u;
    // 0x305474: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x305474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305478: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x305478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x30547c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x30547cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x305480: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x305480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x305484: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x305484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x305488: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x305488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30548c: 0xe59821  addu        $s3, $a3, $a1
    ctx->pc = 0x30548cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x305490: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x305490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x305494: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x305494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x305498: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x305498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30549c: 0xc3a821  addu        $s5, $a2, $v1
    ctx->pc = 0x30549cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3054a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3054a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3054a4: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3054A4u;
    {
        const bool branch_taken_0x3054a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054A4u;
        // 0x3054a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054a4) {
            ctx->pc = 0x3055ACu;
            goto label_3055ac;
        }
    }
    ctx->pc = 0x3054ACu;
    // 0x3054ac: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3054acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3054b0: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x3054b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3054b4: 0x0  nop
    ctx->pc = 0x3054b4u;
    // NOP
label_3054b8:
    // 0x3054b8: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3054b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3054bc: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x3054bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3054c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3054c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3054c4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3054c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3054c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3054c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3054cc: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x3054ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3054d0: 0xc0c1408  jal         func_305020
    ctx->pc = 0x3054D0u;
    SET_GPR_U32(ctx, 31, 0x3054D8u);
    ctx->pc = 0x3054D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054D0u;
    // 0x3054d4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305020u, 0x3054D0u, 0x3054D8u)) {
        return;
    }
    ctx->pc = 0x3054D8u;
label_3054d8:
    // 0x3054d8: 0x54560003  bnel        $v0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3054D8u;
    {
        const bool branch_taken_0x3054d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x3054d8) {
            ctx->pc = 0x3054DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3054D8u;
            // 0x3054dc: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3054E8u;
            goto label_3054e8;
        }
    }
    ctx->pc = 0x3054E0u;
    // 0x3054e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3054E0u;
    {
        const bool branch_taken_0x3054e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054E0u;
        // 0x3054e4: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054e0) {
            ctx->pc = 0x3054F4u;
            goto label_3054f4;
        }
    }
    ctx->pc = 0x3054E8u;
label_3054e8:
    // 0x3054e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3054e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3054ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3054f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3054f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3054f4:
    // 0x3054f4: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3054F4u;
    {
        const bool branch_taken_0x3054f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3054f4) {
            ctx->pc = 0x3054F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3054F4u;
            // 0x3054f8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305528u;
            goto label_305528;
        }
    }
    ctx->pc = 0x3054FCu;
    // 0x3054fc: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x3054fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x305500: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x305500u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x305504: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x305504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305508: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x305508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30550c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305510: 0xc0c13b8  jal         func_304EE0
    ctx->pc = 0x305510u;
    SET_GPR_U32(ctx, 31, 0x305518u);
    ctx->pc = 0x305514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305510u;
    // 0x305514: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304EE0u, 0x305510u, 0x305518u)) {
        return;
    }
    ctx->pc = 0x305518u;
label_305518:
    // 0x305518: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x305518u;
    {
        const bool branch_taken_0x305518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305518) {
            ctx->pc = 0x30551Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305518u;
            // 0x30551c: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305594u;
            goto label_305594;
        }
    }
    ctx->pc = 0x305520u;
    // 0x305520: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x305520u;
    {
        const bool branch_taken_0x305520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305520u;
        // 0x305524: 0xafbe0000  sw          $fp, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305520) {
            ctx->pc = 0x305618u;
            goto label_305618;
        }
    }
    ctx->pc = 0x305528u;
label_305528:
    // 0x305528: 0x545e0013  bnel        $v0, $fp, . + 4 + (0x13 << 2)
    ctx->pc = 0x305528u;
    {
        const bool branch_taken_0x305528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x305528) {
            ctx->pc = 0x30552Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305528u;
            // 0x30552c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305578u;
            goto label_305578;
        }
    }
    ctx->pc = 0x305530u;
    // 0x305530: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x305530u;
    {
        const bool branch_taken_0x305530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x305534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305530u;
        // 0x305534: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305530) {
            ctx->pc = 0x305590u;
            goto label_305590;
        }
    }
    ctx->pc = 0x305538u;
    // 0x305538: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x305538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x30553c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x30553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x305540: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x305540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x305544: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x305544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305548: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x305548u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30554c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305550: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x305550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x305554: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x305554u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x305558: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x305558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30555c: 0xc092848  jal         func_24A120
    ctx->pc = 0x30555Cu;
    SET_GPR_U32(ctx, 31, 0x305564u);
    ctx->pc = 0x305560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30555Cu;
    // 0x305560: 0x8d470000  lw          $a3, 0x0($t2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x30555Cu, 0x305564u)) {
        return;
    }
    ctx->pc = 0x305564u;
label_305564:
    // 0x305564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x305564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305568: 0xc09281a  jal         func_24A068
    ctx->pc = 0x305568u;
    SET_GPR_U32(ctx, 31, 0x305570u);
    ctx->pc = 0x30556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305568u;
    // 0x30556c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x305568u, 0x305570u)) {
        return;
    }
    ctx->pc = 0x305570u;
label_305570:
    // 0x305570: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x305570u;
    {
        const bool branch_taken_0x305570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305570u;
        // 0x305574: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305570) {
            ctx->pc = 0x305664u;
            goto label_305664;
        }
    }
    ctx->pc = 0x305578u;
label_305578:
    // 0x305578: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x305578u;
    {
        const bool branch_taken_0x305578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305578) {
            ctx->pc = 0x30557Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305578u;
            // 0x30557c: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305594u;
            goto label_305594;
        }
    }
    ctx->pc = 0x305580u;
    // 0x305580: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x305580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305584: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x305584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305588: 0xc0c1418  jal         func_305060
    ctx->pc = 0x305588u;
    SET_GPR_U32(ctx, 31, 0x305590u);
    ctx->pc = 0x30558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305588u;
    // 0x30558c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305060u, 0x305588u, 0x305590u)) {
        return;
    }
    ctx->pc = 0x305590u;
label_305590:
    // 0x305590: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x305590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_305594:
    // 0x305594: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x305594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x305598: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x305598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30559c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3055a0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3055a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3055a4: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3055A4u;
    {
        const bool branch_taken_0x3055a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3055a4) {
            ctx->pc = 0x3055A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3055A4u;
            // 0x3055a8: 0x8e66001c  lw          $a2, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3054B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3054b8;
        }
    }
    ctx->pc = 0x3055ACu;
label_3055ac:
    // 0x3055ac: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3055acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3055b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3055b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3055b4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3055b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3055b8: 0x5440ffa9  bnel        $v0, $zero, . + 4 + (-0x57 << 2)
    ctx->pc = 0x3055B8u;
    {
        const bool branch_taken_0x3055b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3055b8) {
            ctx->pc = 0x3055BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3055B8u;
            // 0x3055bc: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305460;
        }
    }
    ctx->pc = 0x3055C0u;
label_3055c0:
    // 0x3055c0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x3055c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3055c4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3055C4u;
    {
        const bool branch_taken_0x3055c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055C4u;
        // 0x3055c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055c4) {
            ctx->pc = 0x30564Cu;
            goto label_30564c;
        }
    }
    ctx->pc = 0x3055CCu;
    // 0x3055cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3055ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3055d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3055d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3055d4: 0x0  nop
    ctx->pc = 0x3055d4u;
    // NOP
label_3055d8:
    // 0x3055d8: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x3055d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3055dc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3055dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3055e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3055e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3055e4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3055e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3055e8: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3055E8u;
    {
        const bool branch_taken_0x3055e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055E8u;
        // 0x3055ec: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055e8) {
            ctx->pc = 0x305638u;
            goto label_305638;
        }
    }
    ctx->pc = 0x3055F0u;
    // 0x3055f0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3055f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3055f4: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3055f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x3055f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3055f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3055fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3055fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305600: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x305600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305604: 0xc0c13b8  jal         func_304EE0
    ctx->pc = 0x305604u;
    SET_GPR_U32(ctx, 31, 0x30560Cu);
    ctx->pc = 0x305608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305604u;
    // 0x305608: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304EE0u, 0x305604u, 0x30560Cu)) {
        return;
    }
    ctx->pc = 0x30560Cu;
label_30560c:
    // 0x30560c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x30560Cu;
    {
        const bool branch_taken_0x30560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30560c) {
            ctx->pc = 0x305610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30560Cu;
            // 0x305610: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30563Cu;
            goto label_30563c;
        }
    }
    ctx->pc = 0x305614u;
    // 0x305614: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x305614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_305618:
    // 0x305618: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x305618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_30561c:
    // 0x30561c: 0xc092848  jal         func_24A120
    ctx->pc = 0x30561Cu;
    SET_GPR_U32(ctx, 31, 0x305624u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x30561Cu, 0x305624u)) {
        return;
    }
    ctx->pc = 0x305624u;
label_305624:
    // 0x305624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x305624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305628: 0xc09281a  jal         func_24A068
    ctx->pc = 0x305628u;
    SET_GPR_U32(ctx, 31, 0x305630u);
    ctx->pc = 0x30562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305628u;
    // 0x30562c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x305628u, 0x305630u)) {
        return;
    }
    ctx->pc = 0x305630u;
label_305630:
    // 0x305630: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x305630u;
    {
        const bool branch_taken_0x305630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305630u;
        // 0x305634: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305630) {
            ctx->pc = 0x305664u;
            goto label_305664;
        }
    }
    ctx->pc = 0x305638u;
label_305638:
    // 0x305638: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x305638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_30563c:
    // 0x30563c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30563cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x305640: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x305640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305644: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x305644u;
    {
        const bool branch_taken_0x305644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305644u;
        // 0x305648: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305644) {
            ctx->pc = 0x3055D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3055d8;
        }
    }
    ctx->pc = 0x30564Cu;
label_30564c:
    // 0x30564c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x30564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x305650: 0x2694ffd8  addiu       $s4, $s4, -0x28
    ctx->pc = 0x305650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
    // 0x305654: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x305654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x305658: 0x1480ff35  bnez        $a0, . + 4 + (-0xCB << 2)
    ctx->pc = 0x305658u;
    {
        const bool branch_taken_0x305658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305658u;
        // 0x30565c: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305658) {
            ctx->pc = 0x305330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305330;
        }
    }
    ctx->pc = 0x305660u;
    // 0x305660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x305660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305664:
    // 0x305664: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x305664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x305668: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x305668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30566c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x30566cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305670: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x305670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305674: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x305674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305678: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x305678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30567c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x30567cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305680: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x305680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305684: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x305684u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x305688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30568c: 0x3e00008  jr          $ra
    ctx->pc = 0x30568Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30568Cu;
        // 0x305690: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30568Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305694u;
    // 0x305694: 0x0  nop
    ctx->pc = 0x305694u;
    // NOP
    ctx->pc = 0x305698u;
}
