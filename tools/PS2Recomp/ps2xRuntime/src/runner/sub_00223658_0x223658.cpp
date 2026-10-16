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

// Function: sub_00223658
// Address: 0x223658 - 0x223938
void sub_00223658_0x223658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223658_0x223658");
#endif

    switch (ctx->pc) {
        case 0x223658u: goto label_223658;
        case 0x22365cu: goto label_22365c;
        case 0x223660u: goto label_223660;
        case 0x223664u: goto label_223664;
        case 0x223668u: goto label_223668;
        case 0x22366cu: goto label_22366c;
        case 0x223670u: goto label_223670;
        case 0x223674u: goto label_223674;
        case 0x223678u: goto label_223678;
        case 0x22367cu: goto label_22367c;
        case 0x223680u: goto label_223680;
        case 0x223684u: goto label_223684;
        case 0x223688u: goto label_223688;
        case 0x22368cu: goto label_22368c;
        case 0x223690u: goto label_223690;
        case 0x223694u: goto label_223694;
        case 0x223698u: goto label_223698;
        case 0x22369cu: goto label_22369c;
        case 0x2236a0u: goto label_2236a0;
        case 0x2236a4u: goto label_2236a4;
        case 0x2236a8u: goto label_2236a8;
        case 0x2236acu: goto label_2236ac;
        case 0x2236b0u: goto label_2236b0;
        case 0x2236b4u: goto label_2236b4;
        case 0x2236b8u: goto label_2236b8;
        case 0x2236bcu: goto label_2236bc;
        case 0x2236c0u: goto label_2236c0;
        case 0x2236c4u: goto label_2236c4;
        case 0x2236c8u: goto label_2236c8;
        case 0x2236ccu: goto label_2236cc;
        case 0x2236d0u: goto label_2236d0;
        case 0x2236d4u: goto label_2236d4;
        case 0x2236d8u: goto label_2236d8;
        case 0x2236dcu: goto label_2236dc;
        case 0x2236e0u: goto label_2236e0;
        case 0x2236e4u: goto label_2236e4;
        case 0x2236e8u: goto label_2236e8;
        case 0x2236ecu: goto label_2236ec;
        case 0x2236f0u: goto label_2236f0;
        case 0x2236f4u: goto label_2236f4;
        case 0x2236f8u: goto label_2236f8;
        case 0x2236fcu: goto label_2236fc;
        case 0x223700u: goto label_223700;
        case 0x223704u: goto label_223704;
        case 0x223708u: goto label_223708;
        case 0x22370cu: goto label_22370c;
        case 0x223710u: goto label_223710;
        case 0x223714u: goto label_223714;
        case 0x223718u: goto label_223718;
        case 0x22371cu: goto label_22371c;
        case 0x223720u: goto label_223720;
        case 0x223724u: goto label_223724;
        case 0x223728u: goto label_223728;
        case 0x22372cu: goto label_22372c;
        case 0x223730u: goto label_223730;
        case 0x223734u: goto label_223734;
        case 0x223738u: goto label_223738;
        case 0x22373cu: goto label_22373c;
        case 0x223740u: goto label_223740;
        case 0x223744u: goto label_223744;
        case 0x223748u: goto label_223748;
        case 0x22374cu: goto label_22374c;
        case 0x223750u: goto label_223750;
        case 0x223754u: goto label_223754;
        case 0x223758u: goto label_223758;
        case 0x22375cu: goto label_22375c;
        case 0x223760u: goto label_223760;
        case 0x223764u: goto label_223764;
        case 0x223768u: goto label_223768;
        case 0x22376cu: goto label_22376c;
        case 0x223770u: goto label_223770;
        case 0x223774u: goto label_223774;
        case 0x223778u: goto label_223778;
        case 0x22377cu: goto label_22377c;
        case 0x223780u: goto label_223780;
        case 0x223784u: goto label_223784;
        case 0x223788u: goto label_223788;
        case 0x22378cu: goto label_22378c;
        case 0x223790u: goto label_223790;
        case 0x223794u: goto label_223794;
        case 0x223798u: goto label_223798;
        case 0x22379cu: goto label_22379c;
        case 0x2237a0u: goto label_2237a0;
        case 0x2237a4u: goto label_2237a4;
        case 0x2237a8u: goto label_2237a8;
        case 0x2237acu: goto label_2237ac;
        case 0x2237b0u: goto label_2237b0;
        case 0x2237b4u: goto label_2237b4;
        case 0x2237b8u: goto label_2237b8;
        case 0x2237bcu: goto label_2237bc;
        case 0x2237c0u: goto label_2237c0;
        case 0x2237c4u: goto label_2237c4;
        case 0x2237c8u: goto label_2237c8;
        case 0x2237ccu: goto label_2237cc;
        case 0x2237d0u: goto label_2237d0;
        case 0x2237d4u: goto label_2237d4;
        case 0x2237d8u: goto label_2237d8;
        case 0x2237dcu: goto label_2237dc;
        case 0x2237e0u: goto label_2237e0;
        case 0x2237e4u: goto label_2237e4;
        case 0x2237e8u: goto label_2237e8;
        case 0x2237ecu: goto label_2237ec;
        case 0x2237f0u: goto label_2237f0;
        case 0x2237f4u: goto label_2237f4;
        case 0x2237f8u: goto label_2237f8;
        case 0x2237fcu: goto label_2237fc;
        case 0x223800u: goto label_223800;
        case 0x223804u: goto label_223804;
        case 0x223808u: goto label_223808;
        case 0x22380cu: goto label_22380c;
        case 0x223810u: goto label_223810;
        case 0x223814u: goto label_223814;
        case 0x223818u: goto label_223818;
        case 0x22381cu: goto label_22381c;
        case 0x223820u: goto label_223820;
        case 0x223824u: goto label_223824;
        case 0x223828u: goto label_223828;
        case 0x22382cu: goto label_22382c;
        case 0x223830u: goto label_223830;
        case 0x223834u: goto label_223834;
        case 0x223838u: goto label_223838;
        case 0x22383cu: goto label_22383c;
        case 0x223840u: goto label_223840;
        case 0x223844u: goto label_223844;
        case 0x223848u: goto label_223848;
        case 0x22384cu: goto label_22384c;
        case 0x223850u: goto label_223850;
        case 0x223854u: goto label_223854;
        case 0x223858u: goto label_223858;
        case 0x22385cu: goto label_22385c;
        case 0x223860u: goto label_223860;
        case 0x223864u: goto label_223864;
        case 0x223868u: goto label_223868;
        case 0x22386cu: goto label_22386c;
        case 0x223870u: goto label_223870;
        case 0x223874u: goto label_223874;
        case 0x223878u: goto label_223878;
        case 0x22387cu: goto label_22387c;
        case 0x223880u: goto label_223880;
        case 0x223884u: goto label_223884;
        case 0x223888u: goto label_223888;
        case 0x22388cu: goto label_22388c;
        case 0x223890u: goto label_223890;
        case 0x223894u: goto label_223894;
        case 0x223898u: goto label_223898;
        case 0x22389cu: goto label_22389c;
        case 0x2238a0u: goto label_2238a0;
        case 0x2238a4u: goto label_2238a4;
        case 0x2238a8u: goto label_2238a8;
        case 0x2238acu: goto label_2238ac;
        case 0x2238b0u: goto label_2238b0;
        case 0x2238b4u: goto label_2238b4;
        case 0x2238b8u: goto label_2238b8;
        case 0x2238bcu: goto label_2238bc;
        case 0x2238c0u: goto label_2238c0;
        case 0x2238c4u: goto label_2238c4;
        case 0x2238c8u: goto label_2238c8;
        case 0x2238ccu: goto label_2238cc;
        case 0x2238d0u: goto label_2238d0;
        case 0x2238d4u: goto label_2238d4;
        case 0x2238d8u: goto label_2238d8;
        case 0x2238dcu: goto label_2238dc;
        case 0x2238e0u: goto label_2238e0;
        case 0x2238e4u: goto label_2238e4;
        case 0x2238e8u: goto label_2238e8;
        case 0x2238ecu: goto label_2238ec;
        case 0x2238f0u: goto label_2238f0;
        case 0x2238f4u: goto label_2238f4;
        case 0x2238f8u: goto label_2238f8;
        case 0x2238fcu: goto label_2238fc;
        case 0x223900u: goto label_223900;
        case 0x223904u: goto label_223904;
        case 0x223908u: goto label_223908;
        case 0x22390cu: goto label_22390c;
        case 0x223910u: goto label_223910;
        case 0x223914u: goto label_223914;
        case 0x223918u: goto label_223918;
        case 0x22391cu: goto label_22391c;
        case 0x223920u: goto label_223920;
        case 0x223924u: goto label_223924;
        case 0x223928u: goto label_223928;
        case 0x22392cu: goto label_22392c;
        case 0x223930u: goto label_223930;
        case 0x223934u: goto label_223934;
        default: break;
    }

    ctx->pc = 0x223658u;

label_223658:
    // 0x223658: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x223658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_22365c:
    // 0x22365c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22365cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223660:
    // 0x223660: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x223660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_223664:
    // 0x223664: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x223664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_223668:
    // 0x223668: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22366c:
    // 0x22366c: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x22366cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_223670:
    // 0x223670: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x223670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_223674:
    // 0x223674: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x223674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_223678:
    // 0x223678: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x223678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22367c:
    // 0x22367c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x22367cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_223680:
    // 0x223680: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x223680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_223684:
    // 0x223684: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x223684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_223688:
    // 0x223688: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x223688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_22368c:
    // 0x22368c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x22368cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_223690:
    // 0x223690: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x223690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_223694:
    // 0x223694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x223694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_223698:
    // 0x223698: 0xc09270a  jal         func_249C28
label_22369c:
    if (ctx->pc == 0x22369Cu) {
        ctx->pc = 0x22369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223698u;
        // 0x22369c: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236A0u;
        goto label_2236a0;
    }
    ctx->pc = 0x223698u;
    SET_GPR_U32(ctx, 31, 0x2236A0u);
    ctx->pc = 0x22369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223698u;
    // 0x22369c: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x223698u, 0x2236A0u)) {
        return;
    }
    ctx->pc = 0x2236A0u;
label_2236a0:
    // 0x2236a0: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_2236a4:
    if (ctx->pc == 0x2236A4u) {
        ctx->pc = 0x2236A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236A0u;
        // 0x2236a4: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236A8u;
        goto label_2236a8;
    }
    ctx->pc = 0x2236A0u;
    {
        const bool branch_taken_0x2236a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2236A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236A0u;
        // 0x2236a4: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236a0) {
            ctx->pc = 0x2238FCu;
            goto label_2238fc;
        }
    }
    ctx->pc = 0x2236A8u;
label_2236a8:
    // 0x2236a8: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x2236a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_2236ac:
    // 0x2236ac: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x2236acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_2236b0:
    // 0x2236b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2236b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2236b4:
    // 0x2236b4: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x2236b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_2236b8:
    // 0x2236b8: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_2236bc:
    if (ctx->pc == 0x2236BCu) {
        ctx->pc = 0x2236BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236B8u;
        // 0x2236bc: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236C0u;
        goto label_2236c0;
    }
    ctx->pc = 0x2236B8u;
    {
        const bool branch_taken_0x2236b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2236BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236B8u;
        // 0x2236bc: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236b8) {
            ctx->pc = 0x2238D8u;
            goto label_2238d8;
        }
    }
    ctx->pc = 0x2236C0u;
label_2236c0:
    // 0x2236c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2236c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2236c4:
    // 0x2236c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2236c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2236c8:
    // 0x2236c8: 0xc093546  jal         func_24D518
label_2236cc:
    if (ctx->pc == 0x2236CCu) {
        ctx->pc = 0x2236CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236C8u;
        // 0x2236cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236D0u;
        goto label_2236d0;
    }
    ctx->pc = 0x2236C8u;
    SET_GPR_U32(ctx, 31, 0x2236D0u);
    ctx->pc = 0x2236CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2236C8u;
    // 0x2236cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2236C8u, 0x2236D0u)) {
        return;
    }
    ctx->pc = 0x2236D0u;
label_2236d0:
    // 0x2236d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2236d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2236d4:
    // 0x2236d4: 0x1443008a  bne         $v0, $v1, . + 4 + (0x8A << 2)
label_2236d8:
    if (ctx->pc == 0x2236D8u) {
        ctx->pc = 0x2236D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236D4u;
        // 0x2236d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236DCu;
        goto label_2236dc;
    }
    ctx->pc = 0x2236D4u;
    {
        const bool branch_taken_0x2236d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2236D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236D4u;
        // 0x2236d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236d4) {
            ctx->pc = 0x223900u;
            goto label_223900;
        }
    }
    ctx->pc = 0x2236DCu;
label_2236dc:
    // 0x2236dc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x2236dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_2236e0:
    // 0x2236e0: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x2236e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
label_2236e4:
    // 0x2236e4: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x2236e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
label_2236e8:
    // 0x2236e8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2236e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2236ec:
    // 0x2236ec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2236ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2236f0:
    // 0x2236f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2236f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2236f4:
    // 0x2236f4: 0xc08959e  jal         func_225678
label_2236f8:
    if (ctx->pc == 0x2236F8u) {
        ctx->pc = 0x2236F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236F4u;
        // 0x2236f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236FCu;
        goto label_2236fc;
    }
    ctx->pc = 0x2236F4u;
    SET_GPR_U32(ctx, 31, 0x2236FCu);
    ctx->pc = 0x2236F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2236F4u;
    // 0x2236f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x2236F4u, 0x2236FCu)) {
        return;
    }
    ctx->pc = 0x2236FCu;
label_2236fc:
    // 0x2236fc: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x2236fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_223700:
    // 0x223700: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x223700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_223704:
    // 0x223704: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_223708:
    if (ctx->pc == 0x223708u) {
        ctx->pc = 0x223708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223704u;
        // 0x223708: 0xa7a30010  sh          $v1, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22370Cu;
        goto label_22370c;
    }
    ctx->pc = 0x223704u;
    {
        const bool branch_taken_0x223704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x223708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223704u;
        // 0x223708: 0xa7a30010  sh          $v1, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223704) {
            ctx->pc = 0x223720u;
            goto label_223720;
        }
    }
    ctx->pc = 0x22370Cu;
label_22370c:
    // 0x22370c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x22370cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_223710:
    // 0x223710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_223714:
    if (ctx->pc == 0x223714u) {
        ctx->pc = 0x223718u;
        goto label_223718;
    }
    ctx->pc = 0x223710u;
    {
        const bool branch_taken_0x223710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223710) {
            ctx->pc = 0x223720u;
            goto label_223720;
        }
    }
    ctx->pc = 0x223718u;
label_223718:
    // 0x223718: 0x14820079  bne         $a0, $v0, . + 4 + (0x79 << 2)
label_22371c:
    if (ctx->pc == 0x22371Cu) {
        ctx->pc = 0x22371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223718u;
        // 0x22371c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223720u;
        goto label_223720;
    }
    ctx->pc = 0x223718u;
    {
        const bool branch_taken_0x223718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223718u;
        // 0x22371c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223718) {
            ctx->pc = 0x223900u;
            goto label_223900;
        }
    }
    ctx->pc = 0x223720u;
label_223720:
    // 0x223720: 0xc08aab2  jal         func_22AAC8
label_223724:
    if (ctx->pc == 0x223724u) {
        ctx->pc = 0x223728u;
        goto label_223728;
    }
    ctx->pc = 0x223720u;
    SET_GPR_U32(ctx, 31, 0x223728u);
    ctx->pc = 0x22AAC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AAC8u, 0x223720u, 0x223728u)) {
        return;
    }
    ctx->pc = 0x223728u;
label_223728:
    // 0x223728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22372c:
    // 0x22372c: 0x12000073  beqz        $s0, . + 4 + (0x73 << 2)
label_223730:
    if (ctx->pc == 0x223730u) {
        ctx->pc = 0x223730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22372Cu;
        // 0x223730: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223734u;
        goto label_223734;
    }
    ctx->pc = 0x22372Cu;
    {
        const bool branch_taken_0x22372c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22372Cu;
        // 0x223730: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22372c) {
            ctx->pc = 0x2238FCu;
            goto label_2238fc;
        }
    }
    ctx->pc = 0x223734u;
label_223734:
    // 0x223734: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x223734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_223738:
    // 0x223738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x223738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22373c:
    // 0x22373c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x22373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_223740:
    // 0x223740: 0x10640032  beq         $v1, $a0, . + 4 + (0x32 << 2)
label_223744:
    if (ctx->pc == 0x223744u) {
        ctx->pc = 0x223744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223740u;
        // 0x223744: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223748u;
        goto label_223748;
    }
    ctx->pc = 0x223740u;
    {
        const bool branch_taken_0x223740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x223744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223740u;
        // 0x223744: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223740) {
            ctx->pc = 0x22380Cu;
            goto label_22380c;
        }
    }
    ctx->pc = 0x223748u;
label_223748:
    // 0x223748: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x223748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_22374c:
    // 0x22374c: 0x3c12fffc  lui         $s2, 0xFFFC
    ctx->pc = 0x22374cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65532 << 16));
label_223750:
    // 0x223750: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x223750u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_223754:
    // 0x223754: 0x3652b000  ori         $s2, $s2, 0xB000
    ctx->pc = 0x223754u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45056);
label_223758:
    // 0x223758: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x223758u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_22375c:
    // 0x22375c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22375cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223760:
    // 0x223760: 0x3c14005c  lui         $s4, 0x5C
    ctx->pc = 0x223760u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)92 << 16));
label_223764:
    // 0x223764: 0x0  nop
    ctx->pc = 0x223764u;
    // NOP
label_223768:
    // 0x223768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22376c:
    // 0x22376c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x22376cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_223770:
    // 0x223770: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x223770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_223774:
    // 0x223774: 0xc09270a  jal         func_249C28
label_223778:
    if (ctx->pc == 0x223778u) {
        ctx->pc = 0x223778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223774u;
        // 0x223778: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22377Cu;
        goto label_22377c;
    }
    ctx->pc = 0x223774u;
    SET_GPR_U32(ctx, 31, 0x22377Cu);
    ctx->pc = 0x223778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223774u;
    // 0x223778: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x223774u, 0x22377Cu)) {
        return;
    }
    ctx->pc = 0x22377Cu;
label_22377c:
    // 0x22377c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_223780:
    if (ctx->pc == 0x223780u) {
        ctx->pc = 0x223780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22377Cu;
        // 0x223780: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223784u;
        goto label_223784;
    }
    ctx->pc = 0x22377Cu;
    {
        const bool branch_taken_0x22377c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22377Cu;
        // 0x223780: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22377c) {
            ctx->pc = 0x22384Cu;
            goto label_22384c;
        }
    }
    ctx->pc = 0x223784u;
label_223784:
    // 0x223784: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x223784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_223788:
    // 0x223788: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x223788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_22378c:
    // 0x22378c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_223790:
    if (ctx->pc == 0x223790u) {
        ctx->pc = 0x223790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22378Cu;
        // 0x223790: 0x8ec200b0  lw          $v0, 0xB0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223794u;
        goto label_223794;
    }
    ctx->pc = 0x22378Cu;
    {
        const bool branch_taken_0x22378c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22378c) {
            ctx->pc = 0x223790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22378Cu;
            // 0x223790: 0x8ec200b0  lw          $v0, 0xB0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2237B8u;
            goto label_2237b8;
        }
    }
    ctx->pc = 0x223794u;
label_223794:
    // 0x223794: 0x26a53630  addiu       $a1, $s5, 0x3630
    ctx->pc = 0x223794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 13872));
label_223798:
    // 0x223798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22379c:
    // 0x22379c: 0xc08ab16  jal         func_22AC58
label_2237a0:
    if (ctx->pc == 0x2237A0u) {
        ctx->pc = 0x2237A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22379Cu;
        // 0x2237a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237A4u;
        goto label_2237a4;
    }
    ctx->pc = 0x22379Cu;
    SET_GPR_U32(ctx, 31, 0x2237A4u);
    ctx->pc = 0x2237A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22379Cu;
    // 0x2237a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x22379Cu, 0x2237A4u)) {
        return;
    }
    ctx->pc = 0x2237A4u;
label_2237a4:
    // 0x2237a4: 0xc08aaec  jal         func_22ABB0
label_2237a8:
    if (ctx->pc == 0x2237A8u) {
        ctx->pc = 0x2237A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237A4u;
        // 0x2237a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237ACu;
        goto label_2237ac;
    }
    ctx->pc = 0x2237A4u;
    SET_GPR_U32(ctx, 31, 0x2237ACu);
    ctx->pc = 0x2237A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237A4u;
    // 0x2237a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ABB0u, 0x2237A4u, 0x2237ACu)) {
        return;
    }
    ctx->pc = 0x2237ACu;
label_2237ac:
    // 0x2237ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2237acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2237b0:
    // 0x2237b0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2237b4:
    if (ctx->pc == 0x2237B4u) {
        ctx->pc = 0x2237B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237B0u;
        // 0x2237b4: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237B8u;
        goto label_2237b8;
    }
    ctx->pc = 0x2237B0u;
    {
        const bool branch_taken_0x2237b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2237B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237B0u;
        // 0x2237b4: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237b0) {
            ctx->pc = 0x2238E8u;
            goto label_2238e8;
        }
    }
    ctx->pc = 0x2237B8u;
label_2237b8:
    // 0x2237b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2237b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2237bc:
    // 0x2237bc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2237bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2237c0:
    // 0x2237c0: 0x40f809  jalr        $v0
label_2237c4:
    if (ctx->pc == 0x2237C4u) {
        ctx->pc = 0x2237C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237C0u;
        // 0x2237c4: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237C8u;
        goto label_2237c8;
    }
    ctx->pc = 0x2237C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2237C8u);
        ctx->pc = 0x2237C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237C0u;
        // 0x2237c4: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2237C0u, 0x2237C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2237C8u;
label_2237c8:
    // 0x2237c8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2237cc:
    if (ctx->pc == 0x2237CCu) {
        ctx->pc = 0x2237CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237C8u;
        // 0x2237cc: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237D0u;
        goto label_2237d0;
    }
    ctx->pc = 0x2237C8u;
    {
        const bool branch_taken_0x2237c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2237CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237C8u;
        // 0x2237cc: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237c8) {
            ctx->pc = 0x223870u;
            goto label_223870;
        }
    }
    ctx->pc = 0x2237D0u;
label_2237d0:
    // 0x2237d0: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
label_2237d4:
    if (ctx->pc == 0x2237D4u) {
        ctx->pc = 0x2237D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237D0u;
        // 0x2237d4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237D8u;
        goto label_2237d8;
    }
    ctx->pc = 0x2237D0u;
    {
        const bool branch_taken_0x2237d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2237D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237D0u;
        // 0x2237d4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237d0) {
            ctx->pc = 0x223894u;
            goto label_223894;
        }
    }
    ctx->pc = 0x2237D8u;
label_2237d8:
    // 0x2237d8: 0x26840448  addiu       $a0, $s4, 0x448
    ctx->pc = 0x2237d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1096));
label_2237dc:
    // 0x2237dc: 0xc093708  jal         func_24DC20
label_2237e0:
    if (ctx->pc == 0x2237E0u) {
        ctx->pc = 0x2237E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237DCu;
        // 0x2237e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237E4u;
        goto label_2237e4;
    }
    ctx->pc = 0x2237DCu;
    SET_GPR_U32(ctx, 31, 0x2237E4u);
    ctx->pc = 0x2237E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237DCu;
    // 0x2237e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x2237DCu, 0x2237E4u)) {
        return;
    }
    ctx->pc = 0x2237E4u;
label_2237e4:
    // 0x2237e4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2237e8:
    if (ctx->pc == 0x2237E8u) {
        ctx->pc = 0x2237E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237E4u;
        // 0x2237e8: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237ECu;
        goto label_2237ec;
    }
    ctx->pc = 0x2237E4u;
    {
        const bool branch_taken_0x2237e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2237E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237E4u;
        // 0x2237e8: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237e4) {
            ctx->pc = 0x2238B4u;
            goto label_2238b4;
        }
    }
    ctx->pc = 0x2237ECu;
label_2237ec:
    // 0x2237ec: 0xc08abd2  jal         func_22AF48
label_2237f0:
    if (ctx->pc == 0x2237F0u) {
        ctx->pc = 0x2237F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237ECu;
        // 0x2237f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237F4u;
        goto label_2237f4;
    }
    ctx->pc = 0x2237ECu;
    SET_GPR_U32(ctx, 31, 0x2237F4u);
    ctx->pc = 0x2237F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237ECu;
    // 0x2237f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AF48u, 0x2237ECu, 0x2237F4u)) {
        return;
    }
    ctx->pc = 0x2237F4u;
label_2237f4:
    // 0x2237f4: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x2237f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_2237f8:
    // 0x2237f8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2237f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2237fc:
    // 0x2237fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2237fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_223800:
    // 0x223800: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x223800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_223804:
    // 0x223804: 0x1444ffd8  bne         $v0, $a0, . + 4 + (-0x28 << 2)
label_223808:
    if (ctx->pc == 0x223808u) {
        ctx->pc = 0x223808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223804u;
        // 0x223808: 0xa7a30000  sh          $v1, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22380Cu;
        goto label_22380c;
    }
    ctx->pc = 0x223804u;
    {
        const bool branch_taken_0x223804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x223808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223804u;
        // 0x223808: 0xa7a30000  sh          $v1, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223804) {
            ctx->pc = 0x223768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223768;
        }
    }
    ctx->pc = 0x22380Cu;
label_22380c:
    // 0x22380c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x22380cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_223810:
    // 0x223810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223814:
    // 0x223814: 0x24840460  addiu       $a0, $a0, 0x460
    ctx->pc = 0x223814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
label_223818:
    // 0x223818: 0xc093708  jal         func_24DC20
label_22381c:
    if (ctx->pc == 0x22381Cu) {
        ctx->pc = 0x22381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223818u;
        // 0x22381c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223820u;
        goto label_223820;
    }
    ctx->pc = 0x223818u;
    SET_GPR_U32(ctx, 31, 0x223820u);
    ctx->pc = 0x22381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223818u;
    // 0x22381c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x223818u, 0x223820u)) {
        return;
    }
    ctx->pc = 0x223820u;
label_223820:
    // 0x223820: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_223824:
    if (ctx->pc == 0x223824u) {
        ctx->pc = 0x223824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223820u;
        // 0x223824: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223828u;
        goto label_223828;
    }
    ctx->pc = 0x223820u;
    {
        const bool branch_taken_0x223820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223820u;
        // 0x223824: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223820) {
            ctx->pc = 0x223900u;
            goto label_223900;
        }
    }
    ctx->pc = 0x223828u;
label_223828:
    // 0x223828: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x223828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_22382c:
    // 0x22382c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223830:
    // 0x223830: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x223830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
label_223834:
    // 0x223834: 0xc08ab16  jal         func_22AC58
label_223838:
    if (ctx->pc == 0x223838u) {
        ctx->pc = 0x223838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223834u;
        // 0x223838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22383Cu;
        goto label_22383c;
    }
    ctx->pc = 0x223834u;
    SET_GPR_U32(ctx, 31, 0x22383Cu);
    ctx->pc = 0x223838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223834u;
    // 0x223838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x223834u, 0x22383Cu)) {
        return;
    }
    ctx->pc = 0x22383Cu;
label_22383c:
    // 0x22383c: 0xc08aaec  jal         func_22ABB0
label_223840:
    if (ctx->pc == 0x223840u) {
        ctx->pc = 0x223840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22383Cu;
        // 0x223840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223844u;
        goto label_223844;
    }
    ctx->pc = 0x22383Cu;
    SET_GPR_U32(ctx, 31, 0x223844u);
    ctx->pc = 0x223840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22383Cu;
    // 0x223840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ABB0u, 0x22383Cu, 0x223844u)) {
        return;
    }
    ctx->pc = 0x223844u;
label_223844:
    // 0x223844: 0x1000002e  b           . + 4 + (0x2E << 2)
label_223848:
    if (ctx->pc == 0x223848u) {
        ctx->pc = 0x223848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223844u;
        // 0x223848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22384Cu;
        goto label_22384c;
    }
    ctx->pc = 0x223844u;
    {
        const bool branch_taken_0x223844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223844u;
        // 0x223848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223844) {
            ctx->pc = 0x223900u;
            goto label_223900;
        }
    }
    ctx->pc = 0x22384Cu;
label_22384c:
    // 0x22384c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x22384cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_223850:
    // 0x223850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223854:
    // 0x223854: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x223854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
label_223858:
    // 0x223858: 0xc08ab16  jal         func_22AC58
label_22385c:
    if (ctx->pc == 0x22385Cu) {
        ctx->pc = 0x22385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223858u;
        // 0x22385c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223860u;
        goto label_223860;
    }
    ctx->pc = 0x223858u;
    SET_GPR_U32(ctx, 31, 0x223860u);
    ctx->pc = 0x22385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223858u;
    // 0x22385c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x223858u, 0x223860u)) {
        return;
    }
    ctx->pc = 0x223860u;
label_223860:
    // 0x223860: 0xc08aaec  jal         func_22ABB0
label_223864:
    if (ctx->pc == 0x223864u) {
        ctx->pc = 0x223864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223860u;
        // 0x223864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223868u;
        goto label_223868;
    }
    ctx->pc = 0x223860u;
    SET_GPR_U32(ctx, 31, 0x223868u);
    ctx->pc = 0x223864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223860u;
    // 0x223864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ABB0u, 0x223860u, 0x223868u)) {
        return;
    }
    ctx->pc = 0x223868u;
label_223868:
    // 0x223868: 0x10000025  b           . + 4 + (0x25 << 2)
label_22386c:
    if (ctx->pc == 0x22386Cu) {
        ctx->pc = 0x22386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223868u;
        // 0x22386c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223870u;
        goto label_223870;
    }
    ctx->pc = 0x223868u;
    {
        const bool branch_taken_0x223868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223868u;
        // 0x22386c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223868) {
            ctx->pc = 0x223900u;
            goto label_223900;
        }
    }
    ctx->pc = 0x223870u;
label_223870:
    // 0x223870: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x223870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_223874:
    // 0x223874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223878:
    // 0x223878: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x223878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
label_22387c:
    // 0x22387c: 0xc08ab16  jal         func_22AC58
label_223880:
    if (ctx->pc == 0x223880u) {
        ctx->pc = 0x223880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22387Cu;
        // 0x223880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223884u;
        goto label_223884;
    }
    ctx->pc = 0x22387Cu;
    SET_GPR_U32(ctx, 31, 0x223884u);
    ctx->pc = 0x223880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22387Cu;
    // 0x223880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x22387Cu, 0x223884u)) {
        return;
    }
    ctx->pc = 0x223884u;
label_223884:
    // 0x223884: 0xc08aaec  jal         func_22ABB0
label_223888:
    if (ctx->pc == 0x223888u) {
        ctx->pc = 0x223888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223884u;
        // 0x223888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22388Cu;
        goto label_22388c;
    }
    ctx->pc = 0x223884u;
    SET_GPR_U32(ctx, 31, 0x22388Cu);
    ctx->pc = 0x223888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223884u;
    // 0x223888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ABB0u, 0x223884u, 0x22388Cu)) {
        return;
    }
    ctx->pc = 0x22388Cu;
label_22388c:
    // 0x22388c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_223890:
    if (ctx->pc == 0x223890u) {
        ctx->pc = 0x223890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22388Cu;
        // 0x223890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223894u;
        goto label_223894;
    }
    ctx->pc = 0x22388Cu;
    {
        const bool branch_taken_0x22388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22388Cu;
        // 0x223890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22388c) {
            ctx->pc = 0x223900u;
            goto label_223900;
        }
    }
    ctx->pc = 0x223894u;
label_223894:
    // 0x223894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223898:
    // 0x223898: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
label_22389c:
    // 0x22389c: 0xc08ab16  jal         func_22AC58
label_2238a0:
    if (ctx->pc == 0x2238A0u) {
        ctx->pc = 0x2238A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22389Cu;
        // 0x2238a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238A4u;
        goto label_2238a4;
    }
    ctx->pc = 0x22389Cu;
    SET_GPR_U32(ctx, 31, 0x2238A4u);
    ctx->pc = 0x2238A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22389Cu;
    // 0x2238a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x22389Cu, 0x2238A4u)) {
        return;
    }
    ctx->pc = 0x2238A4u;
label_2238a4:
    // 0x2238a4: 0xc08aaec  jal         func_22ABB0
label_2238a8:
    if (ctx->pc == 0x2238A8u) {
        ctx->pc = 0x2238A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238A4u;
        // 0x2238a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238ACu;
        goto label_2238ac;
    }
    ctx->pc = 0x2238A4u;
    SET_GPR_U32(ctx, 31, 0x2238ACu);
    ctx->pc = 0x2238A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238A4u;
    // 0x2238a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ABB0u, 0x2238A4u, 0x2238ACu)) {
        return;
    }
    ctx->pc = 0x2238ACu;
label_2238ac:
    // 0x2238ac: 0x10000014  b           . + 4 + (0x14 << 2)
label_2238b0:
    if (ctx->pc == 0x2238B0u) {
        ctx->pc = 0x2238B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238ACu;
        // 0x2238b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238B4u;
        goto label_2238b4;
    }
    ctx->pc = 0x2238ACu;
    {
        const bool branch_taken_0x2238ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238ACu;
        // 0x2238b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238ac) {
            ctx->pc = 0x223900u;
            goto label_223900;
        }
    }
    ctx->pc = 0x2238B4u;
label_2238b4:
    // 0x2238b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x2238b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_2238b8:
    // 0x2238b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2238b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2238bc:
    // 0x2238bc: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x2238bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
label_2238c0:
    // 0x2238c0: 0xc08ab16  jal         func_22AC58
label_2238c4:
    if (ctx->pc == 0x2238C4u) {
        ctx->pc = 0x2238C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238C0u;
        // 0x2238c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238C8u;
        goto label_2238c8;
    }
    ctx->pc = 0x2238C0u;
    SET_GPR_U32(ctx, 31, 0x2238C8u);
    ctx->pc = 0x2238C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238C0u;
    // 0x2238c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x2238C0u, 0x2238C8u)) {
        return;
    }
    ctx->pc = 0x2238C8u;
label_2238c8:
    // 0x2238c8: 0xc08aaec  jal         func_22ABB0
label_2238cc:
    if (ctx->pc == 0x2238CCu) {
        ctx->pc = 0x2238CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238C8u;
        // 0x2238cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238D0u;
        goto label_2238d0;
    }
    ctx->pc = 0x2238C8u;
    SET_GPR_U32(ctx, 31, 0x2238D0u);
    ctx->pc = 0x2238CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238C8u;
    // 0x2238cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ABB0u, 0x2238C8u, 0x2238D0u)) {
        return;
    }
    ctx->pc = 0x2238D0u;
label_2238d0:
    // 0x2238d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_2238d4:
    if (ctx->pc == 0x2238D4u) {
        ctx->pc = 0x2238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238D0u;
        // 0x2238d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238D8u;
        goto label_2238d8;
    }
    ctx->pc = 0x2238D0u;
    {
        const bool branch_taken_0x2238d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238D0u;
        // 0x2238d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238d0) {
            ctx->pc = 0x223900u;
            goto label_223900;
        }
    }
    ctx->pc = 0x2238D8u;
label_2238d8:
    // 0x2238d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2238d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2238dc:
    // 0x2238dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2238dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2238e0:
    // 0x2238e0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2238e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2238e4:
    // 0x2238e4: 0x0  nop
    ctx->pc = 0x2238e4u;
    // NOP
label_2238e8:
    // 0x2238e8: 0xc092848  jal         func_24A120
label_2238ec:
    if (ctx->pc == 0x2238ECu) {
        ctx->pc = 0x2238ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238E8u;
        // 0x2238ec: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238F0u;
        goto label_2238f0;
    }
    ctx->pc = 0x2238E8u;
    SET_GPR_U32(ctx, 31, 0x2238F0u);
    ctx->pc = 0x2238ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238E8u;
    // 0x2238ec: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2238E8u, 0x2238F0u)) {
        return;
    }
    ctx->pc = 0x2238F0u;
label_2238f0:
    // 0x2238f0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2238f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_2238f4:
    // 0x2238f4: 0xc09281a  jal         func_24A068
label_2238f8:
    if (ctx->pc == 0x2238F8u) {
        ctx->pc = 0x2238F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238F4u;
        // 0x2238f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238FCu;
        goto label_2238fc;
    }
    ctx->pc = 0x2238F4u;
    SET_GPR_U32(ctx, 31, 0x2238FCu);
    ctx->pc = 0x2238F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238F4u;
    // 0x2238f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2238F4u, 0x2238FCu)) {
        return;
    }
    ctx->pc = 0x2238FCu;
label_2238fc:
    // 0x2238fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2238fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223900:
    // 0x223900: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x223900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_223904:
    // 0x223904: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x223904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_223908:
    // 0x223908: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x223908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_22390c:
    // 0x22390c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x22390cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_223910:
    // 0x223910: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x223910u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_223914:
    // 0x223914: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x223914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_223918:
    // 0x223918: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x223918u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22391c:
    // 0x22391c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x22391cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_223920:
    // 0x223920: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x223920u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_223924:
    // 0x223924: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x223924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_223928:
    // 0x223928: 0x3e00008  jr          $ra
label_22392c:
    if (ctx->pc == 0x22392Cu) {
        ctx->pc = 0x22392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223928u;
        // 0x22392c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223930u;
        goto label_223930;
    }
    ctx->pc = 0x223928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223928u;
        // 0x22392c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223930u;
label_223930:
    // 0x223930: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x223930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_223934:
    // 0x223934: 0x0  nop
    ctx->pc = 0x223934u;
    // NOP
    ctx->pc = 0x223938u;
}
