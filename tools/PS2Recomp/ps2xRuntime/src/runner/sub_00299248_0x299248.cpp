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

// Function: sub_00299248
// Address: 0x299248 - 0x2994a8
void sub_00299248_0x299248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299248_0x299248");
#endif

    switch (ctx->pc) {
        case 0x299248u: goto label_299248;
        case 0x29924cu: goto label_29924c;
        case 0x299250u: goto label_299250;
        case 0x299254u: goto label_299254;
        case 0x299258u: goto label_299258;
        case 0x29925cu: goto label_29925c;
        case 0x299260u: goto label_299260;
        case 0x299264u: goto label_299264;
        case 0x299268u: goto label_299268;
        case 0x29926cu: goto label_29926c;
        case 0x299270u: goto label_299270;
        case 0x299274u: goto label_299274;
        case 0x299278u: goto label_299278;
        case 0x29927cu: goto label_29927c;
        case 0x299280u: goto label_299280;
        case 0x299284u: goto label_299284;
        case 0x299288u: goto label_299288;
        case 0x29928cu: goto label_29928c;
        case 0x299290u: goto label_299290;
        case 0x299294u: goto label_299294;
        case 0x299298u: goto label_299298;
        case 0x29929cu: goto label_29929c;
        case 0x2992a0u: goto label_2992a0;
        case 0x2992a4u: goto label_2992a4;
        case 0x2992a8u: goto label_2992a8;
        case 0x2992acu: goto label_2992ac;
        case 0x2992b0u: goto label_2992b0;
        case 0x2992b4u: goto label_2992b4;
        case 0x2992b8u: goto label_2992b8;
        case 0x2992bcu: goto label_2992bc;
        case 0x2992c0u: goto label_2992c0;
        case 0x2992c4u: goto label_2992c4;
        case 0x2992c8u: goto label_2992c8;
        case 0x2992ccu: goto label_2992cc;
        case 0x2992d0u: goto label_2992d0;
        case 0x2992d4u: goto label_2992d4;
        case 0x2992d8u: goto label_2992d8;
        case 0x2992dcu: goto label_2992dc;
        case 0x2992e0u: goto label_2992e0;
        case 0x2992e4u: goto label_2992e4;
        case 0x2992e8u: goto label_2992e8;
        case 0x2992ecu: goto label_2992ec;
        case 0x2992f0u: goto label_2992f0;
        case 0x2992f4u: goto label_2992f4;
        case 0x2992f8u: goto label_2992f8;
        case 0x2992fcu: goto label_2992fc;
        case 0x299300u: goto label_299300;
        case 0x299304u: goto label_299304;
        case 0x299308u: goto label_299308;
        case 0x29930cu: goto label_29930c;
        case 0x299310u: goto label_299310;
        case 0x299314u: goto label_299314;
        case 0x299318u: goto label_299318;
        case 0x29931cu: goto label_29931c;
        case 0x299320u: goto label_299320;
        case 0x299324u: goto label_299324;
        case 0x299328u: goto label_299328;
        case 0x29932cu: goto label_29932c;
        case 0x299330u: goto label_299330;
        case 0x299334u: goto label_299334;
        case 0x299338u: goto label_299338;
        case 0x29933cu: goto label_29933c;
        case 0x299340u: goto label_299340;
        case 0x299344u: goto label_299344;
        case 0x299348u: goto label_299348;
        case 0x29934cu: goto label_29934c;
        case 0x299350u: goto label_299350;
        case 0x299354u: goto label_299354;
        case 0x299358u: goto label_299358;
        case 0x29935cu: goto label_29935c;
        case 0x299360u: goto label_299360;
        case 0x299364u: goto label_299364;
        case 0x299368u: goto label_299368;
        case 0x29936cu: goto label_29936c;
        case 0x299370u: goto label_299370;
        case 0x299374u: goto label_299374;
        case 0x299378u: goto label_299378;
        case 0x29937cu: goto label_29937c;
        case 0x299380u: goto label_299380;
        case 0x299384u: goto label_299384;
        case 0x299388u: goto label_299388;
        case 0x29938cu: goto label_29938c;
        case 0x299390u: goto label_299390;
        case 0x299394u: goto label_299394;
        case 0x299398u: goto label_299398;
        case 0x29939cu: goto label_29939c;
        case 0x2993a0u: goto label_2993a0;
        case 0x2993a4u: goto label_2993a4;
        case 0x2993a8u: goto label_2993a8;
        case 0x2993acu: goto label_2993ac;
        case 0x2993b0u: goto label_2993b0;
        case 0x2993b4u: goto label_2993b4;
        case 0x2993b8u: goto label_2993b8;
        case 0x2993bcu: goto label_2993bc;
        case 0x2993c0u: goto label_2993c0;
        case 0x2993c4u: goto label_2993c4;
        case 0x2993c8u: goto label_2993c8;
        case 0x2993ccu: goto label_2993cc;
        case 0x2993d0u: goto label_2993d0;
        case 0x2993d4u: goto label_2993d4;
        case 0x2993d8u: goto label_2993d8;
        case 0x2993dcu: goto label_2993dc;
        case 0x2993e0u: goto label_2993e0;
        case 0x2993e4u: goto label_2993e4;
        case 0x2993e8u: goto label_2993e8;
        case 0x2993ecu: goto label_2993ec;
        case 0x2993f0u: goto label_2993f0;
        case 0x2993f4u: goto label_2993f4;
        case 0x2993f8u: goto label_2993f8;
        case 0x2993fcu: goto label_2993fc;
        case 0x299400u: goto label_299400;
        case 0x299404u: goto label_299404;
        case 0x299408u: goto label_299408;
        case 0x29940cu: goto label_29940c;
        case 0x299410u: goto label_299410;
        case 0x299414u: goto label_299414;
        case 0x299418u: goto label_299418;
        case 0x29941cu: goto label_29941c;
        case 0x299420u: goto label_299420;
        case 0x299424u: goto label_299424;
        case 0x299428u: goto label_299428;
        case 0x29942cu: goto label_29942c;
        case 0x299430u: goto label_299430;
        case 0x299434u: goto label_299434;
        case 0x299438u: goto label_299438;
        case 0x29943cu: goto label_29943c;
        case 0x299440u: goto label_299440;
        case 0x299444u: goto label_299444;
        case 0x299448u: goto label_299448;
        case 0x29944cu: goto label_29944c;
        case 0x299450u: goto label_299450;
        case 0x299454u: goto label_299454;
        case 0x299458u: goto label_299458;
        case 0x29945cu: goto label_29945c;
        case 0x299460u: goto label_299460;
        case 0x299464u: goto label_299464;
        case 0x299468u: goto label_299468;
        case 0x29946cu: goto label_29946c;
        case 0x299470u: goto label_299470;
        case 0x299474u: goto label_299474;
        case 0x299478u: goto label_299478;
        case 0x29947cu: goto label_29947c;
        case 0x299480u: goto label_299480;
        case 0x299484u: goto label_299484;
        case 0x299488u: goto label_299488;
        case 0x29948cu: goto label_29948c;
        case 0x299490u: goto label_299490;
        case 0x299494u: goto label_299494;
        case 0x299498u: goto label_299498;
        case 0x29949cu: goto label_29949c;
        case 0x2994a0u: goto label_2994a0;
        case 0x2994a4u: goto label_2994a4;
        default: break;
    }

    ctx->pc = 0x299248u;

label_299248:
    // 0x299248: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x299248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_29924c:
    // 0x29924c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_299250:
    // 0x299250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x299250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_299254:
    // 0x299254: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x299254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_299258:
    // 0x299258: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x299258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29925c:
    // 0x29925c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x29925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_299260:
    // 0x299260: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_299264:
    // 0x299264: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x299264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_299268:
    // 0x299268: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x299268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29926c:
    // 0x29926c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_299270:
    // 0x299270: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x299270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299274:
    // 0x299274: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x299274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_299278:
    // 0x299278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29927c:
    if (ctx->pc == 0x29927Cu) {
        ctx->pc = 0x29927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299278u;
        // 0x29927c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299280u;
        goto label_299280;
    }
    ctx->pc = 0x299278u;
    {
        const bool branch_taken_0x299278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299278u;
        // 0x29927c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299278) {
            ctx->pc = 0x299288u;
            goto label_299288;
        }
    }
    ctx->pc = 0x299280u;
label_299280:
    // 0x299280: 0x10000007  b           . + 4 + (0x7 << 2)
label_299284:
    if (ctx->pc == 0x299284u) {
        ctx->pc = 0x299284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299280u;
        // 0x299284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299288u;
        goto label_299288;
    }
    ctx->pc = 0x299280u;
    {
        const bool branch_taken_0x299280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299280u;
        // 0x299284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299280) {
            ctx->pc = 0x2992A0u;
            goto label_2992a0;
        }
    }
    ctx->pc = 0x299288u;
label_299288:
    // 0x299288: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x299288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_29928c:
    // 0x29928c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_299290:
    if (ctx->pc == 0x299290u) {
        ctx->pc = 0x299290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29928Cu;
        // 0x299290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299294u;
        goto label_299294;
    }
    ctx->pc = 0x29928Cu;
    {
        const bool branch_taken_0x29928c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29928Cu;
        // 0x299290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29928c) {
            ctx->pc = 0x2992A0u;
            goto label_2992a0;
        }
    }
    ctx->pc = 0x299294u;
label_299294:
    // 0x299294: 0xc0a65a0  jal         func_299680
label_299298:
    if (ctx->pc == 0x299298u) {
        ctx->pc = 0x29929Cu;
        goto label_29929c;
    }
    ctx->pc = 0x299294u;
    SET_GPR_U32(ctx, 31, 0x29929Cu);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x299294u, 0x29929Cu)) {
        return;
    }
    ctx->pc = 0x29929Cu;
label_29929c:
    // 0x29929c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2992a0:
    // 0x2992a0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_2992a4:
    if (ctx->pc == 0x2992A4u) {
        ctx->pc = 0x2992A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992A0u;
        // 0x2992a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2992A8u;
        goto label_2992a8;
    }
    ctx->pc = 0x2992A0u;
    {
        const bool branch_taken_0x2992a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992A0u;
        // 0x2992a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992a0) {
            ctx->pc = 0x2993A0u;
            goto label_2993a0;
        }
    }
    ctx->pc = 0x2992A8u;
label_2992a8:
    // 0x2992a8: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_2992ac:
    if (ctx->pc == 0x2992ACu) {
        ctx->pc = 0x2992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992A8u;
        // 0x2992ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2992B0u;
        goto label_2992b0;
    }
    ctx->pc = 0x2992A8u;
    {
        const bool branch_taken_0x2992a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992A8u;
        // 0x2992ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992a8) {
            ctx->pc = 0x2992BCu;
            goto label_2992bc;
        }
    }
    ctx->pc = 0x2992B0u;
label_2992b0:
    // 0x2992b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2992b4:
    // 0x2992b4: 0x2455d830  addiu       $s5, $v0, -0x27D0
    ctx->pc = 0x2992b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
label_2992b8:
    // 0x2992b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2992b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2992bc:
    // 0x2992bc: 0xc0c4ab8  jal         func_312AE0
label_2992c0:
    if (ctx->pc == 0x2992C0u) {
        ctx->pc = 0x2992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992BCu;
        // 0x2992c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2992C4u;
        goto label_2992c4;
    }
    ctx->pc = 0x2992BCu;
    SET_GPR_U32(ctx, 31, 0x2992C4u);
    ctx->pc = 0x2992C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992BCu;
    // 0x2992c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2992BCu, 0x2992C4u)) {
        return;
    }
    ctx->pc = 0x2992C4u;
label_2992c4:
    // 0x2992c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2992c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2992c8:
    // 0x2992c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2992c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2992cc:
    // 0x2992cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2992d0:
    // 0x2992d0: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x2992d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_2992d4:
    // 0x2992d4: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x2992d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2992d8:
    // 0x2992d8: 0x80760018  lb          $s6, 0x18($v1)
    ctx->pc = 0x2992d8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2992dc:
    // 0x2992dc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2992dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2992e0:
    // 0x2992e0: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2992e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2992e4:
    // 0x2992e4: 0xa2880b  movn        $s1, $a1, $v0
    ctx->pc = 0x2992e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5));
label_2992e8:
    // 0x2992e8: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x2992e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_2992ec:
    // 0x2992ec: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_2992f0:
    if (ctx->pc == 0x2992F0u) {
        ctx->pc = 0x2992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992ECu;
        // 0x2992f0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2992F4u;
        goto label_2992f4;
    }
    ctx->pc = 0x2992ECu;
    {
        const bool branch_taken_0x2992ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992ECu;
        // 0x2992f0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992ec) {
            ctx->pc = 0x299314u;
            goto label_299314;
        }
    }
    ctx->pc = 0x2992F4u;
label_2992f4:
    // 0x2992f4: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
label_2992f8:
    if (ctx->pc == 0x2992F8u) {
        ctx->pc = 0x2992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992F4u;
        // 0x2992f8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2992FCu;
        goto label_2992fc;
    }
    ctx->pc = 0x2992F4u;
    {
        const bool branch_taken_0x2992f4 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992F4u;
        // 0x2992f8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992f4) {
            ctx->pc = 0x299314u;
            goto label_299314;
        }
    }
    ctx->pc = 0x2992FCu;
label_2992fc:
    // 0x2992fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2992fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_299300:
    // 0x299300: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x299300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_299304:
    // 0x299304: 0xc0a7954  jal         func_29E550
label_299308:
    if (ctx->pc == 0x299308u) {
        ctx->pc = 0x299308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299304u;
        // 0x299308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29930Cu;
        goto label_29930c;
    }
    ctx->pc = 0x299304u;
    SET_GPR_U32(ctx, 31, 0x29930Cu);
    ctx->pc = 0x299308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299304u;
    // 0x299308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x299304u, 0x29930Cu)) {
        return;
    }
    ctx->pc = 0x29930Cu;
label_29930c:
    // 0x29930c: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
label_299310:
    if (ctx->pc == 0x299310u) {
        ctx->pc = 0x299310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29930Cu;
        // 0x299310: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299314u;
        goto label_299314;
    }
    ctx->pc = 0x29930Cu;
    {
        const bool branch_taken_0x29930c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x29930c) {
            ctx->pc = 0x299310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29930Cu;
            // 0x299310: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299334u;
            goto label_299334;
        }
    }
    ctx->pc = 0x299314u;
label_299314:
    // 0x299314: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x299314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_299318:
    // 0x299318: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x299318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29931c:
    // 0x29931c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_299320:
    // 0x299320: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x299320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_299324:
    // 0x299324: 0x40f809  jalr        $v0
label_299328:
    if (ctx->pc == 0x299328u) {
        ctx->pc = 0x299328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299324u;
        // 0x299328: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29932Cu;
        goto label_29932c;
    }
    ctx->pc = 0x299324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29932Cu);
        ctx->pc = 0x299328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299324u;
        // 0x299328: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299324u, 0x29932Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29932Cu;
label_29932c:
    // 0x29932c: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
label_299330:
    if (ctx->pc == 0x299330u) {
        ctx->pc = 0x299330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29932Cu;
        // 0x299330: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299334u;
        goto label_299334;
    }
    ctx->pc = 0x29932Cu;
    {
        const bool branch_taken_0x29932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x299330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29932Cu;
        // 0x299330: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29932c) {
            ctx->pc = 0x299344u;
            goto label_299344;
        }
    }
    ctx->pc = 0x299334u;
label_299334:
    // 0x299334: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x299334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_299338:
    // 0x299338: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x299338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_29933c:
    // 0x29933c: 0x10000017  b           . + 4 + (0x17 << 2)
label_299340:
    if (ctx->pc == 0x299340u) {
        ctx->pc = 0x299340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29933Cu;
        // 0x299340: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299344u;
        goto label_299344;
    }
    ctx->pc = 0x29933Cu;
    {
        const bool branch_taken_0x29933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29933Cu;
        // 0x299340: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29933c) {
            ctx->pc = 0x29939Cu;
            goto label_29939c;
        }
    }
    ctx->pc = 0x299344u;
label_299344:
    // 0x299344: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x299344u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_299348:
    // 0x299348: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x299348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_29934c:
    // 0x29934c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_299350:
    if (ctx->pc == 0x299350u) {
        ctx->pc = 0x299350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29934Cu;
        // 0x299350: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299354u;
        goto label_299354;
    }
    ctx->pc = 0x29934Cu;
    {
        const bool branch_taken_0x29934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29934c) {
            ctx->pc = 0x299350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29934Cu;
            // 0x299350: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299388u;
            goto label_299388;
        }
    }
    ctx->pc = 0x299354u;
label_299354:
    // 0x299354: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
label_299358:
    if (ctx->pc == 0x299358u) {
        ctx->pc = 0x299358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299354u;
        // 0x299358: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29935Cu;
        goto label_29935c;
    }
    ctx->pc = 0x299354u;
    {
        const bool branch_taken_0x299354 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x299358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299354u;
        // 0x299358: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299354) {
            ctx->pc = 0x299384u;
            goto label_299384;
        }
    }
    ctx->pc = 0x29935Cu;
label_29935c:
    // 0x29935c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_299360:
    // 0x299360: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x299360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_299364:
    // 0x299364: 0xc0a7954  jal         func_29E550
label_299368:
    if (ctx->pc == 0x299368u) {
        ctx->pc = 0x299368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299364u;
        // 0x299368: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29936Cu;
        goto label_29936c;
    }
    ctx->pc = 0x299364u;
    SET_GPR_U32(ctx, 31, 0x29936Cu);
    ctx->pc = 0x299368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299364u;
    // 0x299368: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x299364u, 0x29936Cu)) {
        return;
    }
    ctx->pc = 0x29936Cu;
label_29936c:
    // 0x29936c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_299370:
    if (ctx->pc == 0x299370u) {
        ctx->pc = 0x299370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29936Cu;
        // 0x299370: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299374u;
        goto label_299374;
    }
    ctx->pc = 0x29936Cu;
    {
        const bool branch_taken_0x29936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x299370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29936Cu;
        // 0x299370: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29936c) {
            ctx->pc = 0x299384u;
            goto label_299384;
        }
    }
    ctx->pc = 0x299374u;
label_299374:
    // 0x299374: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x299374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_299378:
    // 0x299378: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x299378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_29937c:
    // 0x29937c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x29937cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_299380:
    // 0x299380: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x299380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299384:
    // 0x299384: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x299384u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_299388:
    // 0x299388: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x299388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_29938c:
    // 0x29938c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_299390:
    if (ctx->pc == 0x299390u) {
        ctx->pc = 0x299390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29938Cu;
        // 0x299390: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299394u;
        goto label_299394;
    }
    ctx->pc = 0x29938Cu;
    {
        const bool branch_taken_0x29938c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29938Cu;
        // 0x299390: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29938c) {
            ctx->pc = 0x2993A0u;
            goto label_2993a0;
        }
    }
    ctx->pc = 0x299394u;
label_299394:
    // 0x299394: 0xc0a6658  jal         func_299960
label_299398:
    if (ctx->pc == 0x299398u) {
        ctx->pc = 0x299398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299394u;
        // 0x299398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29939Cu;
        goto label_29939c;
    }
    ctx->pc = 0x299394u;
    SET_GPR_U32(ctx, 31, 0x29939Cu);
    ctx->pc = 0x299398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299394u;
    // 0x299398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299960u, 0x299394u, 0x29939Cu)) {
        return;
    }
    ctx->pc = 0x29939Cu;
label_29939c:
    // 0x29939c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29939cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2993a0:
    // 0x2993a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2993a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2993a4:
    // 0x2993a4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2993a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2993a8:
    // 0x2993a8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2993a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2993ac:
    // 0x2993ac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2993acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2993b0:
    // 0x2993b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2993b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2993b4:
    // 0x2993b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2993b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2993b8:
    // 0x2993b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2993b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2993bc:
    // 0x2993bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2993bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2993c0:
    // 0x2993c0: 0x3e00008  jr          $ra
label_2993c4:
    if (ctx->pc == 0x2993C4u) {
        ctx->pc = 0x2993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993C0u;
        // 0x2993c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2993C8u;
        goto label_2993c8;
    }
    ctx->pc = 0x2993C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993C0u;
        // 0x2993c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2993C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2993C8u;
label_2993c8:
    // 0x2993c8: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x2993c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_2993cc:
    // 0x2993cc: 0xffb30430  sd          $s3, 0x430($sp)
    ctx->pc = 0x2993ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 19));
label_2993d0:
    // 0x2993d0: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x2993d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
label_2993d4:
    // 0x2993d4: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x2993d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_2993d8:
    // 0x2993d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2993d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2993dc:
    // 0x2993dc: 0xffb10410  sd          $s1, 0x410($sp)
    ctx->pc = 0x2993dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 17));
label_2993e0:
    // 0x2993e0: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x2993e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
label_2993e4:
    // 0x2993e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2993e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2993e8:
    // 0x2993e8: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x2993e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_2993ec:
    // 0x2993ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2993f0:
    if (ctx->pc == 0x2993F0u) {
        ctx->pc = 0x2993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993ECu;
        // 0x2993f0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2993F4u;
        goto label_2993f4;
    }
    ctx->pc = 0x2993ECu;
    {
        const bool branch_taken_0x2993ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993ECu;
        // 0x2993f0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993ec) {
            ctx->pc = 0x2993FCu;
            goto label_2993fc;
        }
    }
    ctx->pc = 0x2993F4u;
label_2993f4:
    // 0x2993f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2993f8:
    if (ctx->pc == 0x2993F8u) {
        ctx->pc = 0x2993F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993F4u;
        // 0x2993f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2993FCu;
        goto label_2993fc;
    }
    ctx->pc = 0x2993F4u;
    {
        const bool branch_taken_0x2993f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2993F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993F4u;
        // 0x2993f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993f4) {
            ctx->pc = 0x299414u;
            goto label_299414;
        }
    }
    ctx->pc = 0x2993FCu;
label_2993fc:
    // 0x2993fc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2993fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_299400:
    // 0x299400: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_299404:
    if (ctx->pc == 0x299404u) {
        ctx->pc = 0x299404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299400u;
        // 0x299404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299408u;
        goto label_299408;
    }
    ctx->pc = 0x299400u;
    {
        const bool branch_taken_0x299400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299400u;
        // 0x299404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299400) {
            ctx->pc = 0x299414u;
            goto label_299414;
        }
    }
    ctx->pc = 0x299408u;
label_299408:
    // 0x299408: 0xc0a65a0  jal         func_299680
label_29940c:
    if (ctx->pc == 0x29940Cu) {
        ctx->pc = 0x299410u;
        goto label_299410;
    }
    ctx->pc = 0x299408u;
    SET_GPR_U32(ctx, 31, 0x299410u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x299408u, 0x299410u)) {
        return;
    }
    ctx->pc = 0x299410u;
label_299410:
    // 0x299410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299414:
    // 0x299414: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_299418:
    if (ctx->pc == 0x299418u) {
        ctx->pc = 0x299418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299414u;
        // 0x299418: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29941Cu;
        goto label_29941c;
    }
    ctx->pc = 0x299414u;
    {
        const bool branch_taken_0x299414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299414u;
        // 0x299418: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299414) {
            ctx->pc = 0x29948Cu;
            goto label_29948c;
        }
    }
    ctx->pc = 0x29941Cu;
label_29941c:
    // 0x29941c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299420:
    // 0x299420: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x299420u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_299424:
    // 0x299424: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x299424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_299428:
    // 0x299428: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x299428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29942c:
    // 0x29942c: 0xc0a7380  jal         func_29CE00
label_299430:
    if (ctx->pc == 0x299430u) {
        ctx->pc = 0x299430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29942Cu;
        // 0x299430: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299434u;
        goto label_299434;
    }
    ctx->pc = 0x29942Cu;
    SET_GPR_U32(ctx, 31, 0x299434u);
    ctx->pc = 0x299430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29942Cu;
    // 0x299430: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CE00u, 0x29942Cu, 0x299434u)) {
        return;
    }
    ctx->pc = 0x299434u;
label_299434:
    // 0x299434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_299438:
    // 0x299438: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_29943c:
    if (ctx->pc == 0x29943Cu) {
        ctx->pc = 0x29943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299438u;
        // 0x29943c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299440u;
        goto label_299440;
    }
    ctx->pc = 0x299438u;
    {
        const bool branch_taken_0x299438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299438u;
        // 0x29943c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299438) {
            ctx->pc = 0x29946Cu;
            goto label_29946c;
        }
    }
    ctx->pc = 0x299440u;
label_299440:
    // 0x299440: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x299440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_299444:
    // 0x299444: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x299444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_299448:
    // 0x299448: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x299448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29944c:
    // 0x29944c: 0x40f809  jalr        $v0
label_299450:
    if (ctx->pc == 0x299450u) {
        ctx->pc = 0x299450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29944Cu;
        // 0x299450: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299454u;
        goto label_299454;
    }
    ctx->pc = 0x29944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x299454u);
        ctx->pc = 0x299450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29944Cu;
        // 0x299450: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29944Cu, 0x299454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299454u;
label_299454:
    // 0x299454: 0x1050fff4  beq         $v0, $s0, . + 4 + (-0xC << 2)
label_299458:
    if (ctx->pc == 0x299458u) {
        ctx->pc = 0x299458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299454u;
        // 0x299458: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29945Cu;
        goto label_29945c;
    }
    ctx->pc = 0x299454u;
    {
        const bool branch_taken_0x299454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x299458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299454u;
        // 0x299458: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299454) {
            ctx->pc = 0x299428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299428;
        }
    }
    ctx->pc = 0x29945Cu;
label_29945c:
    // 0x29945c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299460:
    // 0x299460: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x299460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_299464:
    // 0x299464: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x299464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_299468:
    // 0x299468: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x299468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_29946c:
    // 0x29946c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_299470:
    // 0x299470: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x299470u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_299474:
    // 0x299474: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x299474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_299478:
    // 0x299478: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29947c:
    if (ctx->pc == 0x29947Cu) {
        ctx->pc = 0x29947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299478u;
        // 0x29947c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299480u;
        goto label_299480;
    }
    ctx->pc = 0x299478u;
    {
        const bool branch_taken_0x299478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299478u;
        // 0x29947c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299478) {
            ctx->pc = 0x29948Cu;
            goto label_29948c;
        }
    }
    ctx->pc = 0x299480u;
label_299480:
    // 0x299480: 0xc0a6658  jal         func_299960
label_299484:
    if (ctx->pc == 0x299484u) {
        ctx->pc = 0x299484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299480u;
        // 0x299484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299488u;
        goto label_299488;
    }
    ctx->pc = 0x299480u;
    SET_GPR_U32(ctx, 31, 0x299488u);
    ctx->pc = 0x299484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299480u;
    // 0x299484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299960u, 0x299480u, 0x299488u)) {
        return;
    }
    ctx->pc = 0x299488u;
label_299488:
    // 0x299488: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x299488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29948c:
    // 0x29948c: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x29948cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_299490:
    // 0x299490: 0xdfb30430  ld          $s3, 0x430($sp)
    ctx->pc = 0x299490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_299494:
    // 0x299494: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x299494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_299498:
    // 0x299498: 0xdfb10410  ld          $s1, 0x410($sp)
    ctx->pc = 0x299498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_29949c:
    // 0x29949c: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x29949cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_2994a0:
    // 0x2994a0: 0x3e00008  jr          $ra
label_2994a4:
    if (ctx->pc == 0x2994A4u) {
        ctx->pc = 0x2994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2994A0u;
        // 0x2994a4: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2994A8u;
        goto label_fallthrough_0x2994a0;
    }
    ctx->pc = 0x2994A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2994A0u;
        // 0x2994a4: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2994A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2994a0:
    ctx->pc = 0x2994A8u;
}
