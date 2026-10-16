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

// Function: sub_00239628
// Address: 0x239628 - 0x23a358
void sub_00239628_0x239628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239628_0x239628");
#endif

    switch (ctx->pc) {
        case 0x2398f8u: goto label_2398f8;
        case 0x239900u: goto label_239900;
        case 0x239908u: goto label_239908;
        case 0x239a08u: goto label_239a08;
        case 0x239a6cu: goto label_239a6c;
        case 0x239a90u: goto label_239a90;
        case 0x239aa8u: goto label_239aa8;
        case 0x239ab0u: goto label_239ab0;
        case 0x239ac8u: goto label_239ac8;
        case 0x239ad0u: goto label_239ad0;
        case 0x239ad8u: goto label_239ad8;
        case 0x239b2cu: goto label_239b2c;
        case 0x239b5cu: goto label_239b5c;
        case 0x239b94u: goto label_239b94;
        case 0x239bc8u: goto label_239bc8;
        case 0x239bfcu: goto label_239bfc;
        case 0x239c30u: goto label_239c30;
        case 0x23a094u: goto label_23a094;
        case 0x23a0a8u: goto label_23a0a8;
        case 0x23a0c0u: goto label_23a0c0;
        case 0x23a0d0u: goto label_23a0d0;
        case 0x23a0d8u: goto label_23a0d8;
        case 0x23a0e0u: goto label_23a0e0;
        case 0x23a218u: goto label_23a218;
        case 0x23a22cu: goto label_23a22c;
        case 0x23a230u: goto label_23a230;
        case 0x23a238u: goto label_23a238;
        case 0x23a270u: goto label_23a270;
        case 0x23a284u: goto label_23a284;
        case 0x23a2e0u: goto label_23a2e0;
        case 0x23a314u: goto label_23a314;
        default: break;
    }

    ctx->pc = 0x239628u;

    // 0x239628: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x239628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23962c: 0x3c0b0070  lui         $t3, 0x70
    ctx->pc = 0x23962cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)112 << 16));
    // 0x239630: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x239630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x239634: 0x25663bc0  addiu       $a2, $t3, 0x3BC0
    ctx->pc = 0x239634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 15296));
    // 0x239638: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x239638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x23963c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x23963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x239640: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x239640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x239644: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x239644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x239648: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x239648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x23964c: 0x2404ff0f  addiu       $a0, $zero, -0xF1
    ctx->pc = 0x23964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x239650: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x239650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x239654: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x239654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x239658: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x239658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x23965c: 0x2408f0ff  addiu       $t0, $zero, -0xF01
    ctx->pc = 0x23965cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x239660: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x239660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x239664: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x239664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x239668: 0x35290fff  ori         $t1, $t1, 0xFFF
    ctx->pc = 0x239668u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4095);
    // 0x23966c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x23966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x239670: 0x3c0afff0  lui         $t2, 0xFFF0
    ctx->pc = 0x239670u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65520 << 16));
    // 0x239674: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x239674u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x239678: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x239678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x23967c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x23967cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239684: 0x340cffc0  ori         $t4, $zero, 0xFFC0
    ctx->pc = 0x239684u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x239688: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x239688u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x23968c: 0x358cffc0  ori         $t4, $t4, 0xFFC0
    ctx->pc = 0x23968cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65472);
    // 0x239690: 0xc62b8  dsll        $t4, $t4, 10
    ctx->pc = 0x239690u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 10);
    // 0x239694: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x239694u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x239698: 0x3c0e0003  lui         $t6, 0x3
    ctx->pc = 0x239698u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3 << 16));
    // 0x23969c: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x23969cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2396a0: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2396a4: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x2396a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2396a8: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x2396a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2396ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2396acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2396b0: 0x34118500  ori         $s1, $zero, 0x8500
    ctx->pc = 0x2396b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x2396b4: 0x118c78  dsll        $s1, $s1, 17
    ctx->pc = 0x2396b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 17);
    // 0x2396b8: 0x36310100  ori         $s1, $s1, 0x100
    ctx->pc = 0x2396b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
    // 0x2396bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2396bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2396c0: 0x24050e00  addiu       $a1, $zero, 0xE00
    ctx->pc = 0x2396c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x2396c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2396c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2396c8: 0xdd633bc0  ld          $v1, 0x3BC0($t3)
    ctx->pc = 0x2396c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 15296)));
    // 0x2396cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2396ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2396d0: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x2396d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x2396d4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2396d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2396d8: 0x3c07000e  lui         $a3, 0xE
    ctx->pc = 0x2396d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14 << 16));
    // 0x2396dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2396dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2396e0: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x2396e4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2396e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2396e8: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x2396e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2396ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2396ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2396f0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2396f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2396f4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2396f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2396f8: 0x3c04ff0f  lui         $a0, 0xFF0F
    ctx->pc = 0x2396f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65295 << 16));
    // 0x2396fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2396fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x239700: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x239700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x239704: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x239704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x239708: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x239708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23970c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23970cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x239710: 0x3c0400e0  lui         $a0, 0xE0
    ctx->pc = 0x239710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)224 << 16));
    // 0x239714: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x239714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x239718: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x239718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23971c: 0x3c050e00  lui         $a1, 0xE00
    ctx->pc = 0x23971cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3584 << 16));
    // 0x239720: 0x3c04f0ff  lui         $a0, 0xF0FF
    ctx->pc = 0x239720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61695 << 16));
    // 0x239724: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x239724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x239728: 0xfd633bc0  sd          $v1, 0x3BC0($t3)
    ctx->pc = 0x239728u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 15296), GPR_U64(ctx, 3));
    // 0x23972c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x239730: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x239730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x239734: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x239734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x239738: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x239738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23973c: 0x3c0487ff  lui         $a0, 0x87FF
    ctx->pc = 0x23973cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34815 << 16));
    // 0x239740: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x239740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x239744: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x239744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x239748: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x239748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x23974c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x239750: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x239750u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x239754: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x239758: 0x3c0487ff  lui         $a0, 0x87FF
    ctx->pc = 0x239758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34815 << 16));
    // 0x23975c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x23975cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x239760: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x239760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x239764: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x239764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x239768: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x239768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23976c: 0xdd633bc0  ld          $v1, 0x3BC0($t3)
    ctx->pc = 0x23976cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 15296)));
    // 0x239770: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x239770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x239774: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x239774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x239778: 0x3c0587ff  lui         $a1, 0x87FF
    ctx->pc = 0x239778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34815 << 16));
    // 0x23977c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x23977cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x239780: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x239780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
    // 0x239784: 0x34a501ff  ori         $a1, $a1, 0x1FF
    ctx->pc = 0x239784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)511);
    // 0x239788: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x239788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23978c: 0x3c078001  lui         $a3, 0x8001
    ctx->pc = 0x23978cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32769 << 16));
    // 0x239790: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x239790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x239794: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x239794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x239798: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x23979c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x23979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2397a0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x2397a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2397a4: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x2397a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x2397a8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2397a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2397ac: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2397acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2397b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2397b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2397b4: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x2397b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x2397b8: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2397b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2397bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2397bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2397c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2397c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2397c4: 0x3404fc00  ori         $a0, $zero, 0xFC00
    ctx->pc = 0x2397c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x2397c8: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x2397c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x2397cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2397ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2397d0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2397d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2397d4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2397d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2397d8: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x2397d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x2397dc: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x2397dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x2397e0: 0x3c0587ff  lui         $a1, 0x87FF
    ctx->pc = 0x2397e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34815 << 16));
    // 0x2397e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2397e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2397e8: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x2397e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x2397ec: 0x34a51fff  ori         $a1, $a1, 0x1FFF
    ctx->pc = 0x2397ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8191);
    // 0x2397f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2397f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2397f4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2397f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2397f8: 0x3404f3ff  ori         $a0, $zero, 0xF3FF
    ctx->pc = 0x2397f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62463);
    // 0x2397fc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2397fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x239800: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x239800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x239804: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x239804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x239808: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x239808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x23980c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23980cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x239810: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x239810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x239814: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x239814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x239818: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x239818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x23981c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23981cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x239820: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x239820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x239824: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x239824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239828: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x239828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x23982c: 0x3c0587ff  lui         $a1, 0x87FF
    ctx->pc = 0x23982cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34815 << 16));
    // 0x239830: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x239830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x239834: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x239834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x239838: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x239838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x23983c: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x23983cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
    // 0x239840: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x239840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x239844: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x239844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x239848: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x239848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x23984c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x23984cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239850: 0x73fbc  dsll32      $a3, $a3, 30
    ctx->pc = 0x239850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 30));
    // 0x239854: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x239854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x239858: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x239858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x23985c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x23985cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x239860: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x239860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x239864: 0xfd633bc0  sd          $v1, 0x3BC0($t3)
    ctx->pc = 0x239864u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 15296), GPR_U64(ctx, 3));
    // 0x239868: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x239868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x23986c: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x23986cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x239870: 0x240a001a  addiu       $t2, $zero, 0x1A
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x239874: 0x2412004e  addiu       $s2, $zero, 0x4E
    ctx->pc = 0x239874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x239878: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x239878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23987c: 0x3c153fff  lui         $s5, 0x3FFF
    ctx->pc = 0x23987cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16383 << 16));
    // 0x239880: 0x36b53fff  ori         $s5, $s5, 0x3FFF
    ctx->pc = 0x239880u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16383);
    // 0x239884: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x239884u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x239888: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x239888u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x23988c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x23988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239890: 0xfcc80020  sd          $t0, 0x20($a2)
    ctx->pc = 0x239890u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 8));
    // 0x239894: 0x2485014f  addiu       $a1, $a0, 0x14F
    ctx->pc = 0x239894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 335));
    // 0x239898: 0xfcc90028  sd          $t1, 0x28($a2)
    ctx->pc = 0x239898u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 9));
    // 0x23989c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x23989cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398a0: 0xfcca0038  sd          $t2, 0x38($a2)
    ctx->pc = 0x2398a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 10));
    // 0x2398a4: 0xfccc0040  sd          $t4, 0x40($a2)
    ctx->pc = 0x2398a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 12));
    // 0x2398a8: 0xfccd0048  sd          $t5, 0x48($a2)
    ctx->pc = 0x2398a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 13));
    // 0x2398ac: 0xfcce0050  sd          $t6, 0x50($a2)
    ctx->pc = 0x2398acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 14));
    // 0x2398b0: 0xfccf0058  sd          $t7, 0x58($a2)
    ctx->pc = 0x2398b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 15));
    // 0x2398b4: 0xfcd00068  sd          $s0, 0x68($a2)
    ctx->pc = 0x2398b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 16));
    // 0x2398b8: 0xfcd10070  sd          $s1, 0x70($a2)
    ctx->pc = 0x2398b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 112), GPR_U64(ctx, 17));
    // 0x2398bc: 0xfcd20078  sd          $s2, 0x78($a2)
    ctx->pc = 0x2398bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 120), GPR_U64(ctx, 18));
    // 0x2398c0: 0xfcd30080  sd          $s3, 0x80($a2)
    ctx->pc = 0x2398c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 128), GPR_U64(ctx, 19));
    // 0x2398c4: 0xfcd400b8  sd          $s4, 0xB8($a2)
    ctx->pc = 0x2398c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 184), GPR_U64(ctx, 20));
    // 0x2398c8: 0xfcd500c0  sd          $s5, 0xC0($a2)
    ctx->pc = 0x2398c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 192), GPR_U64(ctx, 21));
    // 0x2398cc: 0xfcd600c8  sd          $s6, 0xC8($a2)
    ctx->pc = 0x2398ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 200), GPR_U64(ctx, 22));
    // 0x2398d0: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x2398d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x2398d4: 0xfcd40030  sd          $s4, 0x30($a2)
    ctx->pc = 0x2398d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 20));
    // 0x2398d8: 0xfcc00060  sd          $zero, 0x60($a2)
    ctx->pc = 0x2398d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 0));
    // 0x2398dc: 0xfcc00088  sd          $zero, 0x88($a2)
    ctx->pc = 0x2398dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 136), GPR_U64(ctx, 0));
    // 0x2398e0: 0xfcc00090  sd          $zero, 0x90($a2)
    ctx->pc = 0x2398e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 144), GPR_U64(ctx, 0));
    // 0x2398e4: 0xfcd40098  sd          $s4, 0x98($a2)
    ctx->pc = 0x2398e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 152), GPR_U64(ctx, 20));
    // 0x2398e8: 0xfcc000a0  sd          $zero, 0xA0($a2)
    ctx->pc = 0x2398e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 160), GPR_U64(ctx, 0));
    // 0x2398ec: 0xfcd600a8  sd          $s6, 0xA8($a2)
    ctx->pc = 0x2398ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 168), GPR_U64(ctx, 22));
    // 0x2398f0: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2398F0u;
    SET_GPR_U32(ctx, 31, 0x2398F8u);
    ctx->pc = 0x2398F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398F0u;
    // 0x2398f4: 0xfcc000b0  sd          $zero, 0xB0($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 176), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2398F0u, 0x2398F8u)) {
        return;
    }
    ctx->pc = 0x2398F8u;
label_2398f8:
    // 0x2398f8: 0xc093e4a  jal         func_24F928
    ctx->pc = 0x2398F8u;
    SET_GPR_U32(ctx, 31, 0x239900u);
    ctx->pc = 0x24F928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F928u, 0x2398F8u, 0x239900u)) {
        return;
    }
    ctx->pc = 0x239900u;
label_239900:
    // 0x239900: 0xc0a534a  jal         func_294D28
    ctx->pc = 0x239900u;
    SET_GPR_U32(ctx, 31, 0x239908u);
    ctx->pc = 0x239904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239900u;
    // 0x239904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294D28u, 0x239900u, 0x239908u)) {
        return;
    }
    ctx->pc = 0x239908u;
label_239908:
    // 0x239908: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x239908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x23990c: 0x8ca53f18  lw          $a1, 0x3F18($a1)
    ctx->pc = 0x23990cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3F18u));
    // 0x239910: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239914: 0x10a2003a  beq         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x239914u;
    {
        const bool branch_taken_0x239914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x239918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239914u;
        // 0x239918: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239914) {
            ctx->pc = 0x239A00u;
            goto label_239a00;
        }
    }
    ctx->pc = 0x23991Cu;
    // 0x23991c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x23991cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x239920: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x239920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x239924: 0x24840478  addiu       $a0, $a0, 0x478
    ctx->pc = 0x239924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1144));
    // 0x239928: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x23992c: 0x24453c90  addiu       $a1, $v0, 0x3C90
    ctx->pc = 0x23992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x239930: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x239930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x239934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239938: 0x24483c90  addiu       $t0, $v0, 0x3C90
    ctx->pc = 0x239938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x23993c: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x23993cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x239940: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x239940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x239944: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x239944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x239948: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x239948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x23994c: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x23994cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x239950: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x239950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x239954: 0xb1040007  sdl         $a0, 0x7($t0)
    ctx->pc = 0x239954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239958: 0xb5040000  sdr         $a0, 0x0($t0)
    ctx->pc = 0x239958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23995c: 0xb106000f  sdl         $a2, 0xF($t0)
    ctx->pc = 0x23995cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239960: 0xb5060008  sdr         $a2, 0x8($t0)
    ctx->pc = 0x239960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239964: 0xb1070017  sdl         $a3, 0x17($t0)
    ctx->pc = 0x239964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239968: 0xb5070010  sdr         $a3, 0x10($t0)
    ctx->pc = 0x239968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23996c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x23996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x239970: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x239970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x239974: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x239974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x239978: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x239978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23997c: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x23997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x239980: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x239980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x239984: 0xb0a2001f  sdl         $v0, 0x1F($a1)
    ctx->pc = 0x239984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239988: 0xb4a20018  sdr         $v0, 0x18($a1)
    ctx->pc = 0x239988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23998c: 0xb0a40027  sdl         $a0, 0x27($a1)
    ctx->pc = 0x23998cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239990: 0xb4a40020  sdr         $a0, 0x20($a1)
    ctx->pc = 0x239990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239994: 0xb0a6002f  sdl         $a2, 0x2F($a1)
    ctx->pc = 0x239994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239998: 0xb4a60028  sdr         $a2, 0x28($a1)
    ctx->pc = 0x239998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23999c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x23999cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x703CB4u));
    // 0x2399a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2399a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2399a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2399A4u;
    {
        const bool branch_taken_0x2399a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399A4u;
        // 0x2399a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399a4) {
            ctx->pc = 0x2399E4u;
            goto label_2399e4;
        }
    }
    ctx->pc = 0x2399ACu;
    // 0x2399ac: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2399acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2399b0: 0x8f8484d0  lw          $a0, -0x7B30($gp)
    ctx->pc = 0x2399b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x2399b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2399b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2399b8: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x2399b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x2399bc: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2399bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2399c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2399C0u;
    {
        const bool branch_taken_0x2399c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399C0u;
        // 0x2399c4: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399c0) {
            ctx->pc = 0x2399D0u;
            goto label_2399d0;
        }
    }
    ctx->pc = 0x2399C8u;
    // 0x2399c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2399C8u;
    {
        const bool branch_taken_0x2399c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399C8u;
        // 0x2399cc: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399c8) {
            ctx->pc = 0x2399D8u;
            goto label_2399d8;
        }
    }
    ctx->pc = 0x2399D0u;
label_2399d0:
    // 0x2399d0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2399d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2399d4: 0xaf8284d0  sw          $v0, -0x7B30($gp)
    ctx->pc = 0x2399d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935760), GPR_U32(ctx, 2));
label_2399d8:
    // 0x2399d8: 0x26c23c90  addiu       $v0, $s6, 0x3C90
    ctx->pc = 0x2399d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
    // 0x2399dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2399DCu;
    {
        const bool branch_taken_0x2399dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399DCu;
        // 0x2399e0: 0xa0400033  sb          $zero, 0x33($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399dc) {
            ctx->pc = 0x2399FCu;
            goto label_2399fc;
        }
    }
    ctx->pc = 0x2399E4u;
label_2399e4:
    // 0x2399e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2399e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2399e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2399ec: 0xa0a20033  sb          $v0, 0x33($a1)
    ctx->pc = 0x2399ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x2399f0: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x2399f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x2399f4: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x2399f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x2399f8: 0x26c23c90  addiu       $v0, $s6, 0x3C90
    ctx->pc = 0x2399f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
label_2399fc:
    // 0x2399fc: 0xa0400032  sb          $zero, 0x32($v0)
    ctx->pc = 0x2399fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
label_239a00:
    // 0x239a00: 0xc08e4b4  jal         func_2392D0
    ctx->pc = 0x239A00u;
    SET_GPR_U32(ctx, 31, 0x239A08u);
    ctx->pc = 0x2392D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2392D0u, 0x239A00u, 0x239A08u)) {
        return;
    }
    ctx->pc = 0x239A08u;
label_239a08:
    // 0x239a08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239A08u;
    {
        const bool branch_taken_0x239a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A08u;
        // 0x239a0c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a08) {
            ctx->pc = 0x239A18u;
            goto label_239a18;
        }
    }
    ctx->pc = 0x239A10u;
    // 0x239a10: 0x10000244  b           . + 4 + (0x244 << 2)
    ctx->pc = 0x239A10u;
    {
        const bool branch_taken_0x239a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A10u;
        // 0x239a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a10) {
            ctx->pc = 0x23A324u;
            goto label_23a324;
        }
    }
    ctx->pc = 0x239A18u;
label_239a18:
    // 0x239a18: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x239a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x239a1c: 0x24453c90  addiu       $a1, $v0, 0x3C90
    ctx->pc = 0x239a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x239a20: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x239a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a24: 0x90a30032  lbu         $v1, 0x32($a1)
    ctx->pc = 0x239a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x239a28: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239A28u;
    {
        const bool branch_taken_0x239a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x239A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A28u;
        // 0x239a2c: 0xaf858428  sw          $a1, -0x7BD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a28) {
            ctx->pc = 0x239A40u;
            goto label_239a40;
        }
    }
    ctx->pc = 0x239A30u;
    // 0x239a30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x239A38u;
    {
        const bool branch_taken_0x239a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A38u;
        // 0x239a3c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a38) {
            ctx->pc = 0x239A88u;
            goto label_239a88;
        }
    }
    ctx->pc = 0x239A40u;
label_239a40:
    // 0x239a40: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x239a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x239a44: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x239a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x239a48: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x239A48u;
    {
        const bool branch_taken_0x239a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239a48) {
            ctx->pc = 0x239A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239A48u;
            // 0x239a4c: 0x90a60032  lbu         $a2, 0x32($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239A80u;
            goto label_239a80;
        }
    }
    ctx->pc = 0x239A50u;
    // 0x239a50: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x239a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x239a54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239A54u;
    {
        const bool branch_taken_0x239a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A54u;
        // 0x239a58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a54) {
            ctx->pc = 0x239A74u;
            goto label_239a74;
        }
    }
    ctx->pc = 0x239A5Cu;
    // 0x239a5c: 0x90a60032  lbu         $a2, 0x32($a1)
    ctx->pc = 0x239a5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x239a60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x239a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239a64: 0xc0a5114  jal         func_294450
    ctx->pc = 0x239A64u;
    SET_GPR_U32(ctx, 31, 0x239A6Cu);
    ctx->pc = 0x239A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A64u;
    // 0x239a68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294450u, 0x239A64u, 0x239A6Cu)) {
        return;
    }
    ctx->pc = 0x239A6Cu;
label_239a6c:
    // 0x239a6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x239A6Cu;
    {
        const bool branch_taken_0x239a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a6c) {
            ctx->pc = 0x239AA8u;
            goto label_239aa8;
        }
    }
    ctx->pc = 0x239A74u;
label_239a74:
    // 0x239a74: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x239a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x239a78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239A78u;
    {
        const bool branch_taken_0x239a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A78u;
        // 0x239a7c: 0x90a60032  lbu         $a2, 0x32($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a78) {
            ctx->pc = 0x239A98u;
            goto label_239a98;
        }
    }
    ctx->pc = 0x239A80u;
label_239a80:
    // 0x239a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x239a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239a88:
    // 0x239a88: 0xc0a5114  jal         func_294450
    ctx->pc = 0x239A88u;
    SET_GPR_U32(ctx, 31, 0x239A90u);
    ctx->pc = 0x239A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A88u;
    // 0x239a8c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294450u, 0x239A88u, 0x239A90u)) {
        return;
    }
    ctx->pc = 0x239A90u;
label_239a90:
    // 0x239a90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239A90u;
    {
        const bool branch_taken_0x239a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a90) {
            ctx->pc = 0x239AA8u;
            goto label_239aa8;
        }
    }
    ctx->pc = 0x239A98u;
label_239a98:
    // 0x239a98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239aa0: 0xc0a5114  jal         func_294450
    ctx->pc = 0x239AA0u;
    SET_GPR_U32(ctx, 31, 0x239AA8u);
    ctx->pc = 0x239AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AA0u;
    // 0x239aa4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294450u, 0x239AA0u, 0x239AA8u)) {
        return;
    }
    ctx->pc = 0x239AA8u;
label_239aa8:
    // 0x239aa8: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x239AA8u;
    SET_GPR_U32(ctx, 31, 0x239AB0u);
    ctx->pc = 0x239AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AA8u;
    // 0x239aac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x239AA8u, 0x239AB0u)) {
        return;
    }
    ctx->pc = 0x239AB0u;
label_239ab0:
    // 0x239ab0: 0x3c150073  lui         $s5, 0x73
    ctx->pc = 0x239ab0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    // 0x239ab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ab8: 0x26e53bc0  addiu       $a1, $s7, 0x3BC0
    ctx->pc = 0x239ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 15296));
    // 0x239abc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x239abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x239ac0: 0xc0a5da0  jal         func_297680
    ctx->pc = 0x239AC0u;
    SET_GPR_U32(ctx, 31, 0x239AC8u);
    ctx->pc = 0x239AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AC0u;
    // 0x239ac4: 0x3c1e0073  lui         $fp, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297680u, 0x239AC0u, 0x239AC8u)) {
        return;
    }
    ctx->pc = 0x239AC8u;
label_239ac8:
    // 0x239ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239acc: 0x0  nop
    ctx->pc = 0x239accu;
    // NOP
label_239ad0:
    // 0x239ad0: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x239AD0u;
    SET_GPR_U32(ctx, 31, 0x239AD8u);
    ctx->pc = 0x239AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AD0u;
    // 0x239ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x239AD0u, 0x239AD8u)) {
        return;
    }
    ctx->pc = 0x239AD8u;
label_239ad8:
    // 0x239ad8: 0x0  nop
    ctx->pc = 0x239ad8u;
    // NOP
    // 0x239adc: 0x0  nop
    ctx->pc = 0x239adcu;
    // NOP
    // 0x239ae0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x239AE0u;
    {
        const bool branch_taken_0x239ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AE0u;
        // 0x239ae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ae0) {
            ctx->pc = 0x239AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239ad0;
        }
    }
    ctx->pc = 0x239AE8u;
    // 0x239ae8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x239ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x239aec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x239aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239af0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x239af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x239af4: 0x26d43c90  addiu       $s4, $s6, 0x3C90
    ctx->pc = 0x239af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
    // 0x239af8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x239af8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x239afc: 0x26b050c0  addiu       $s0, $s5, 0x50C0
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    // 0x239b00: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x239b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x239b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b08: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x239b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x239b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b10: 0x86860018  lh          $a2, 0x18($s4)
    ctx->pc = 0x239b10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x239b14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b18: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239b1c: 0x8687001c  lh          $a3, 0x1C($s4)
    ctx->pc = 0x239b1cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x239b20: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x239b20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17));
    // 0x239b24: 0xc0a51c2  jal         func_294708
    ctx->pc = 0x239B24u;
    SET_GPR_U32(ctx, 31, 0x239B2Cu);
    ctx->pc = 0x239B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B24u;
    // 0x239b28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294708u, 0x239B24u, 0x239B2Cu)) {
        return;
    }
    ctx->pc = 0x239B2Cu;
label_239b2c:
    // 0x239b2c: 0x2412003a  addiu       $s2, $zero, 0x3A
    ctx->pc = 0x239b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x239b30: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x239b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x239b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b38: 0x86860018  lh          $a2, 0x18($s4)
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x239b3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239b3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b40: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239b44: 0x8687001c  lh          $a3, 0x1C($s4)
    ctx->pc = 0x239b44u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x239b48: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x239b48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17));
    // 0x239b4c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x239b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x239b50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b54: 0xc0a51c2  jal         func_294708
    ctx->pc = 0x239B54u;
    SET_GPR_U32(ctx, 31, 0x239B5Cu);
    ctx->pc = 0x239B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B54u;
    // 0x239b58: 0x24130031  addiu       $s3, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294708u, 0x239B54u, 0x239B5Cu)) {
        return;
    }
    ctx->pc = 0x239B5Cu;
label_239b5c:
    // 0x239b5c: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x239b5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239b60: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x239b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x239b64: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x239b64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x239b68: 0x8f8284cc  lw          $v0, -0x7B34($gp)
    ctx->pc = 0x239b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x239b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b70: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x239b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x239b74: 0x86c63c90  lh          $a2, 0x3C90($s6)
    ctx->pc = 0x239b74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 15504)));
    // 0x239b78: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239b7c: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x239b7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x239b80: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x239b80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17));
    // 0x239b84: 0x242480a  movz        $t1, $s2, $v0
    ctx->pc = 0x239b84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18));
    // 0x239b88: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x239b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x239b8c: 0xc0a52d0  jal         func_294B40
    ctx->pc = 0x239B8Cu;
    SET_GPR_U32(ctx, 31, 0x239B94u);
    ctx->pc = 0x239B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B8Cu;
    // 0x239b90: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294B40u, 0x239B8Cu, 0x239B94u)) {
        return;
    }
    ctx->pc = 0x239B94u;
label_239b94:
    // 0x239b94: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x239b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x239b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b9c: 0x8f8284cc  lw          $v0, -0x7B34($gp)
    ctx->pc = 0x239b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x239ba0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x239ba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ba4: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x239ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x239ba8: 0x86c63c90  lh          $a2, 0x3C90($s6)
    ctx->pc = 0x239ba8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 15504)));
    // 0x239bac: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239bb0: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x239bb4: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x239bb4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17));
    // 0x239bb8: 0x262480b  movn        $t1, $s3, $v0
    ctx->pc = 0x239bb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19));
    // 0x239bbc: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x239bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x239bc0: 0xc0a562a  jal         func_2958A8
    ctx->pc = 0x239BC0u;
    SET_GPR_U32(ctx, 31, 0x239BC8u);
    ctx->pc = 0x239BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BC0u;
    // 0x239bc4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2958A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2958A8u, 0x239BC0u, 0x239BC8u)) {
        return;
    }
    ctx->pc = 0x239BC8u;
label_239bc8:
    // 0x239bc8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x239bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x239bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bd0: 0x8f8284cc  lw          $v0, -0x7B34($gp)
    ctx->pc = 0x239bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x239bd4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x239bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bd8: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x239bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x239bdc: 0x86c63c90  lh          $a2, 0x3C90($s6)
    ctx->pc = 0x239bdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 15504)));
    // 0x239be0: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239be4: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x239be4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x239be8: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x239be8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17));
    // 0x239bec: 0x262480b  movn        $t1, $s3, $v0
    ctx->pc = 0x239becu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19));
    // 0x239bf0: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x239bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x239bf4: 0xc0a52d0  jal         func_294B40
    ctx->pc = 0x239BF4u;
    SET_GPR_U32(ctx, 31, 0x239BFCu);
    ctx->pc = 0x239BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BF4u;
    // 0x239bf8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294B40u, 0x239BF4u, 0x239BFCu)) {
        return;
    }
    ctx->pc = 0x239BFCu;
label_239bfc:
    // 0x239bfc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x239bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x239c00: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x239c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c04: 0x8f8284cc  lw          $v0, -0x7B34($gp)
    ctx->pc = 0x239c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x239c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c0c: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x239c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x239c10: 0x86c63c90  lh          $a2, 0x3C90($s6)
    ctx->pc = 0x239c10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 15504)));
    // 0x239c14: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239c18: 0x86870004  lh          $a3, 0x4($s4)
    ctx->pc = 0x239c18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x239c1c: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x239c1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17));
    // 0x239c20: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x239c24: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x239c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239c28: 0xc0a562a  jal         func_2958A8
    ctx->pc = 0x239C28u;
    SET_GPR_U32(ctx, 31, 0x239C30u);
    ctx->pc = 0x239C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C28u;
    // 0x239c2c: 0x262480b  movn        $t1, $s3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2958A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2958A8u, 0x239C28u, 0x239C30u)) {
        return;
    }
    ctx->pc = 0x239C30u;
label_239c30:
    // 0x239c30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x239c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c34: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x239c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x239c38: 0x70631b89  pcpyld      $v1, $v1, $v1
    ctx->pc = 0x239c38u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x239c3c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x239c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239c40: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x239c40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x239c44: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x239c44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x239c48: 0x7e0301c0  sq          $v1, 0x1C0($s0)
    ctx->pc = 0x239c48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 448), GPR_VEC(ctx, 3));
    // 0x239c4c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x239c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239c50: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x239c50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
    // 0x239c54: 0xde020050  ld          $v0, 0x50($s0)
    ctx->pc = 0x239c54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x239c58: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x239c5c: 0xde0301c0  ld          $v1, 0x1C0($s0)
    ctx->pc = 0x239c5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x239c60: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x239c60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x239c64: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x239c64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x239c68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x239c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x239c6c: 0xde060058  ld          $a2, 0x58($s0)
    ctx->pc = 0x239c6cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x239c70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x239c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x239c74: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x239c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x239c78: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x239c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x239c7c: 0xde0401c8  ld          $a0, 0x1C8($s0)
    ctx->pc = 0x239c7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x239c80: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x239c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x239c84: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x239c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x239c88: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x239c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x239c8c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x239c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x239c90: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x239c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x239c94: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x239c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x239c98: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x239c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x239c9c: 0x92870033  lbu         $a3, 0x33($s4)
    ctx->pc = 0x239c9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 51)));
    // 0x239ca0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x239ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x239ca4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x239ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x239ca8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x239ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x239cac: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x239cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x239cb0: 0xfe0401c8  sd          $a0, 0x1C8($s0)
    ctx->pc = 0x239cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 456), GPR_U64(ctx, 4));
    // 0x239cb4: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x239cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x239cb8: 0xfe060058  sd          $a2, 0x58($s0)
    ctx->pc = 0x239cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 6));
    // 0x239cbc: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x239CBCu;
    {
        const bool branch_taken_0x239cbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CBCu;
        // 0x239cc0: 0xfe0301c0  sd          $v1, 0x1C0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 448), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cbc) {
            ctx->pc = 0x239D5Cu;
            goto label_239d5c;
        }
    }
    ctx->pc = 0x239CC4u;
    // 0x239cc4: 0x8ec23c90  lw          $v0, 0x3C90($s6)
    ctx->pc = 0x239cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15504)));
    // 0x239cc8: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x239cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x239ccc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x239cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x239cd0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239cd4: 0x14770005  bne         $v1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x239CD4u;
    {
        const bool branch_taken_0x239cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x239CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CD4u;
        // 0x239cd8: 0x442824  and         $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cd4) {
            ctx->pc = 0x239CECu;
            goto label_239cec;
        }
    }
    ctx->pc = 0x239CDCu;
    // 0x239cdc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x239cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x239ce0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239ce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239CE4u;
    {
        const bool branch_taken_0x239ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE4u;
        // 0x239ce8: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ce4) {
            ctx->pc = 0x239CFCu;
            goto label_239cfc;
        }
    }
    ctx->pc = 0x239CECu;
label_239cec:
    // 0x239cec: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x239cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x239cf0: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x239cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x239cf4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x239cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x239cf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239cfc:
    // 0x239cfc: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x239cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x239d00: 0x26c33c90  addiu       $v1, $s6, 0x3C90
    ctx->pc = 0x239d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
    // 0x239d04: 0x26a750c0  addiu       $a3, $s5, 0x50C0
    ctx->pc = 0x239d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    // 0x239d08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x239d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x239d0c: 0xa4042  srl         $t0, $t2, 1
    ctx->pc = 0x239d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x239d10: 0xdce60038  ld          $a2, 0x38($a3)
    ctx->pc = 0x239d10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x239d14: 0x2404fe00  addiu       $a0, $zero, -0x200
    ctx->pc = 0x239d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x239d18: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239d1c: 0xdce50060  ld          $a1, 0x60($a3)
    ctx->pc = 0x239d1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x239d20: 0x102500a  movz        $t2, $t0, $v0
    ctx->pc = 0x239d20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8));
    // 0x239d24: 0xdce300e0  ld          $v1, 0xE0($a3)
    ctx->pc = 0x239d24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x239d28: 0xa52c2  srl         $t2, $t2, 11
    ctx->pc = 0x239d28u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 11));
    // 0x239d2c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x239d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x239d30: 0x314201ff  andi        $v0, $t2, 0x1FF
    ctx->pc = 0x239d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x239d34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x239d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x239d38: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x239d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x239d3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x239d40: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x239d40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x239d44: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x239d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x239d48: 0xfce300e0  sd          $v1, 0xE0($a3)
    ctx->pc = 0x239d48u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 224), GPR_U64(ctx, 3));
    // 0x239d4c: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x239d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x239d50: 0xfce60038  sd          $a2, 0x38($a3)
    ctx->pc = 0x239d50u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 6));
    // 0x239d54: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x239D54u;
    {
        const bool branch_taken_0x239d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D54u;
        // 0x239d58: 0xfce50060  sd          $a1, 0x60($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d54) {
            ctx->pc = 0x239EA0u;
            goto label_239ea0;
        }
    }
    ctx->pc = 0x239D5Cu;
label_239d5c:
    // 0x239d5c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x239d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x239d60: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x239d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x239d64: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x239d68: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239d6c: 0x14770005  bne         $v1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x239D6Cu;
    {
        const bool branch_taken_0x239d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x239D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D6Cu;
        // 0x239d70: 0x442824  and         $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d6c) {
            ctx->pc = 0x239D84u;
            goto label_239d84;
        }
    }
    ctx->pc = 0x239D74u;
    // 0x239d74: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x239d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x239d78: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239d7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239D7Cu;
    {
        const bool branch_taken_0x239d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D7Cu;
        // 0x239d80: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d7c) {
            ctx->pc = 0x239D94u;
            goto label_239d94;
        }
    }
    ctx->pc = 0x239D84u;
label_239d84:
    // 0x239d84: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x239d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x239d88: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x239d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x239d8c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x239d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x239d90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239d94:
    // 0x239d94: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x239d94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x239d98: 0x26c93c90  addiu       $t1, $s6, 0x3C90
    ctx->pc = 0x239d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
    // 0x239d9c: 0xa2842  srl         $a1, $t2, 1
    ctx->pc = 0x239d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x239da0: 0x8d220020  lw          $v0, 0x20($t1)
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x239da4: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x239da4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239da8: 0x91240031  lbu         $a0, 0x31($t1)
    ctx->pc = 0x239da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 49)));
    // 0x239dac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x239dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239db0: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239db4: 0xa2500a  movz        $t2, $a1, $v0
    ctx->pc = 0x239db4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5));
    // 0x239db8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x239DB8u;
    {
        const bool branch_taken_0x239db8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x239DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DB8u;
        // 0x239dbc: 0xa52c2  srl         $t2, $t2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239db8) {
            ctx->pc = 0x239DE0u;
            goto label_239de0;
        }
    }
    ctx->pc = 0x239DC0u;
    // 0x239dc0: 0x26a550c0  addiu       $a1, $s5, 0x50C0
    ctx->pc = 0x239dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    // 0x239dc4: 0x2404fe00  addiu       $a0, $zero, -0x200
    ctx->pc = 0x239dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x239dc8: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x239dc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x239dcc: 0x314301ff  andi        $v1, $t2, 0x1FF
    ctx->pc = 0x239dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x239dd0: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x239dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x239dd4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x239dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x239dd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x239ddc: 0xfca20038  sd          $v0, 0x38($a1)
    ctx->pc = 0x239ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
label_239de0:
    // 0x239de0: 0x26a550c0  addiu       $a1, $s5, 0x50C0
    ctx->pc = 0x239de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    // 0x239de4: 0x2406fe00  addiu       $a2, $zero, -0x200
    ctx->pc = 0x239de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x239de8: 0xdca401d0  ld          $a0, 0x1D0($a1)
    ctx->pc = 0x239de8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x239dec: 0x314701ff  andi        $a3, $t2, 0x1FF
    ctx->pc = 0x239decu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x239df0: 0xdca30250  ld          $v1, 0x250($a1)
    ctx->pc = 0x239df0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x239df4: 0x240bffc0  addiu       $t3, $zero, -0x40
    ctx->pc = 0x239df4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x239df8: 0x8ec23c90  lw          $v0, 0x3C90($s6)
    ctx->pc = 0x239df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15504)));
    // 0x239dfc: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x239dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x239e00: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x239e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x239e04: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x239e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x239e08: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x239e0c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x239e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x239e10: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239e14: 0xfca30250  sd          $v1, 0x250($a1)
    ctx->pc = 0x239e14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 592), GPR_U64(ctx, 3));
    // 0x239e18: 0x4b4024  and         $t0, $v0, $t3
    ctx->pc = 0x239e18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x239e1c: 0x14cc0005  bne         $a2, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x239E1Cu;
    {
        const bool branch_taken_0x239e1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 12));
        ctx->pc = 0x239E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E1Cu;
        // 0x239e20: 0xfca401d0  sd          $a0, 0x1D0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 464), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e1c) {
            ctx->pc = 0x239E34u;
            goto label_239e34;
        }
    }
    ctx->pc = 0x239E24u;
    // 0x239e24: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x239e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x239e28: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239e2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239E2Cu;
    {
        const bool branch_taken_0x239e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E2Cu;
        // 0x239e30: 0x4b1024  and         $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e2c) {
            ctx->pc = 0x239E44u;
            goto label_239e44;
        }
    }
    ctx->pc = 0x239E34u;
label_239e34:
    // 0x239e34: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x239e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x239e38: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x239e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x239e3c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x239e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x239e40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239e44:
    // 0x239e44: 0x1024818  mult        $t1, $t0, $v0
    ctx->pc = 0x239e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x239e48: 0x26c33c90  addiu       $v1, $s6, 0x3C90
    ctx->pc = 0x239e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
    // 0x239e4c: 0x94042  srl         $t0, $t1, 1
    ctx->pc = 0x239e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x239e50: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x239e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x239e54: 0x26a650c0  addiu       $a2, $s5, 0x50C0
    ctx->pc = 0x239e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    // 0x239e58: 0x90650030  lbu         $a1, 0x30($v1)
    ctx->pc = 0x239e58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x239e5c: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x239e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x239e60: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239e64: 0xdcc40060  ld          $a0, 0x60($a2)
    ctx->pc = 0x239e64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x239e68: 0x102480a  movz        $t1, $t0, $v0
    ctx->pc = 0x239e68u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8));
    // 0x239e6c: 0x38a50002  xori        $a1, $a1, 0x2
    ctx->pc = 0x239e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x239e70: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x239e74: 0xdcc200e0  ld          $v0, 0xE0($a2)
    ctx->pc = 0x239e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x239e78: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x239e7c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x239e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x239e80: 0x65500a  movz        $t2, $v1, $a1
    ctx->pc = 0x239e80u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3));
    // 0x239e84: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x239e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x239e88: 0x314301ff  andi        $v1, $t2, 0x1FF
    ctx->pc = 0x239e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x239e8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x239e90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x239e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x239e94: 0xfcc200e0  sd          $v0, 0xE0($a2)
    ctx->pc = 0x239e94u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 224), GPR_U64(ctx, 2));
    // 0x239e98: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x239e98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x239e9c: 0xfcc40060  sd          $a0, 0x60($a2)
    ctx->pc = 0x239e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 4));
label_239ea0:
    // 0x239ea0: 0x26a350c0  addiu       $v1, $s5, 0x50C0
    ctx->pc = 0x239ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    // 0x239ea4: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x239ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x239ea8: 0xdc680070  ld          $t0, 0x70($v1)
    ctx->pc = 0x239ea8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x239eac: 0x314601ff  andi        $a2, $t2, 0x1FF
    ctx->pc = 0x239eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x239eb0: 0xdc6900f0  ld          $t1, 0xF0($v1)
    ctx->pc = 0x239eb0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x239eb4: 0x240cffc0  addiu       $t4, $zero, -0x40
    ctx->pc = 0x239eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x239eb8: 0xdc6701e0  ld          $a3, 0x1E0($v1)
    ctx->pc = 0x239eb8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x239ebc: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x239ebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x239ec0: 0xdc640260  ld          $a0, 0x260($v1)
    ctx->pc = 0x239ec0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 608)));
    // 0x239ec4: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x239ec4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x239ec8: 0x8ec23c90  lw          $v0, 0x3C90($s6)
    ctx->pc = 0x239ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15504)));
    // 0x239ecc: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x239eccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x239ed0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x239ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x239ed4: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x239ed4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x239ed8: 0x8f8584cc  lw          $a1, -0x7B34($gp)
    ctx->pc = 0x239ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x239edc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x239edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x239ee0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239ee4: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x239ee4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x239ee8: 0x4c5824  and         $t3, $v0, $t4
    ctx->pc = 0x239ee8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x239eec: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x239eecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x239ef0: 0xfc640260  sd          $a0, 0x260($v1)
    ctx->pc = 0x239ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 608), GPR_U64(ctx, 4));
    // 0x239ef4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x239ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239ef8: 0x26c43c90  addiu       $a0, $s6, 0x3C90
    ctx->pc = 0x239ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
    // 0x239efc: 0xfc680070  sd          $t0, 0x70($v1)
    ctx->pc = 0x239efcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 8));
    // 0x239f00: 0xfc6900f0  sd          $t1, 0xF0($v1)
    ctx->pc = 0x239f00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 9));
    // 0x239f04: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239F04u;
    {
        const bool branch_taken_0x239f04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x239F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F04u;
        // 0x239f08: 0xfc6701e0  sd          $a3, 0x1E0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 480), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f04) {
            ctx->pc = 0x239F1Cu;
            goto label_239f1c;
        }
    }
    ctx->pc = 0x239F0Cu;
    // 0x239f0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x239f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239f10: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x239f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x239f14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x239F14u;
    {
        const bool branch_taken_0x239f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F14u;
        // 0x239f18: 0x4c1024  and         $v0, $v0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f14) {
            ctx->pc = 0x239F2Cu;
            goto label_239f2c;
        }
    }
    ctx->pc = 0x239F1Cu;
label_239f1c:
    // 0x239f1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x239f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239f20: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x239f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x239f24: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x239f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x239f28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239f2c:
    // 0x239f2c: 0x1624818  mult        $t1, $t3, $v0
    ctx->pc = 0x239f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x239f30: 0x8f8284cc  lw          $v0, -0x7B34($gp)
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x239f34: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x239f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x239f38: 0x26c33c90  addiu       $v1, $s6, 0x3C90
    ctx->pc = 0x239f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
    // 0x239f3c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x239f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x239f40: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x239f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x239f44: 0x82480a  movz        $t1, $a0, $v0
    ctx->pc = 0x239f44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4));
    // 0x239f48: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x239f4c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x239f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x239f50: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x239f54: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x239f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x239f58: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x239F58u;
    {
        const bool branch_taken_0x239f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F58u;
        // 0x239f5c: 0xaf828ebc  sw          $v0, -0x7144($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f58) {
            ctx->pc = 0x23A094u;
            goto label_23a094;
        }
    }
    ctx->pc = 0x239F60u;
    // 0x239f60: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x239f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x239f64: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x239F64u;
    {
        const bool branch_taken_0x239f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F64u;
        // 0x239f68: 0x26a250c0  addiu       $v0, $s5, 0x50C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f64) {
            ctx->pc = 0x23A088u;
            goto label_23a088;
        }
    }
    ctx->pc = 0x239F6Cu;
    // 0x239f6c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x239f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x239f70: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x239f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x239f74: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x239f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x239f78: 0xb048033f  sdl         $t0, 0x33F($v0)
    ctx->pc = 0x239f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239f7c: 0xb4480338  sdr         $t0, 0x338($v0)
    ctx->pc = 0x239f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239f80: 0x340bffc0  ori         $t3, $zero, 0xFFC0
    ctx->pc = 0x239f80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x239f84: 0xb5d78  dsll        $t3, $t3, 21
    ctx->pc = 0x239f84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 21);
    // 0x239f88: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x239f88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x239f8c: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x239f8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x239f90: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x239f90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x239f94: 0xb5af8  dsll        $t3, $t3, 11
    ctx->pc = 0x239f94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 11);
    // 0x239f98: 0x356b07ff  ori         $t3, $t3, 0x7FF
    ctx->pc = 0x239f98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)2047);
    // 0x239f9c: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x239f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x239fa0: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x239fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x239fa4: 0xb0470337  sdl         $a3, 0x337($v0)
    ctx->pc = 0x239fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239fa8: 0xb4470330  sdr         $a3, 0x330($v0)
    ctx->pc = 0x239fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239fac: 0x340eff80  ori         $t6, $zero, 0xFF80
    ctx->pc = 0x239facu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x239fb0: 0xe7538  dsll        $t6, $t6, 20
    ctx->pc = 0x239fb0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 20);
    // 0x239fb4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x239fb4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x239fb8: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x239fb8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x239fbc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x239fbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x239fc0: 0xe7338  dsll        $t6, $t6, 12
    ctx->pc = 0x239fc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 12);
    // 0x239fc4: 0x35ce0fff  ori         $t6, $t6, 0xFFF
    ctx->pc = 0x239fc4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4095);
    // 0x239fc8: 0x68460047  ldl         $a2, 0x47($v0)
    ctx->pc = 0x239fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x239fcc: 0x6c460040  ldr         $a2, 0x40($v0)
    ctx->pc = 0x239fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x239fd0: 0xb046034f  sdl         $a2, 0x34F($v0)
    ctx->pc = 0x239fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 847); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239fd4: 0xb4460348  sdr         $a2, 0x348($v0)
    ctx->pc = 0x239fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 840); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239fd8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x239fd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239fdc: 0x6845003f  ldl         $a1, 0x3F($v0)
    ctx->pc = 0x239fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x239fe0: 0x6c450038  ldr         $a1, 0x38($v0)
    ctx->pc = 0x239fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x239fe4: 0xb0450347  sdl         $a1, 0x347($v0)
    ctx->pc = 0x239fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239fe8: 0xb4450340  sdr         $a1, 0x340($v0)
    ctx->pc = 0x239fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239fec: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x239fecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x239ff0: 0xf7f38  dsll        $t7, $t7, 28
    ctx->pc = 0x239ff0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 28);
    // 0x239ff4: 0xa0440029  sb          $a0, 0x29($v0)
    ctx->pc = 0x239ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x239ff8: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x239ff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239ffc: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x239ffcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23a000: 0xdc4a0040  ld          $t2, 0x40($v0)
    ctx->pc = 0x23a000u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x23a004: 0x91b3e  dsrl32      $v1, $t1, 12
    ctx->pc = 0x23a004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> (32 + 12));
    // 0x23a008: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x23a008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23a00c: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x23a00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x23a010: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x23a010u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x23a014: 0xdc450028  ld          $a1, 0x28($v0)
    ctx->pc = 0x23a014u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x23a018: 0xa233e  dsrl32      $a0, $t2, 12
    ctx->pc = 0x23a018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) >> (32 + 12));
    // 0x23a01c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23a020: 0xdea850c0  ld          $t0, 0x50C0($s5)
    ctx->pc = 0x23a020u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 20672)));
    // 0x23a024: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x23a024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x23a028: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x23a028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x23a02c: 0xdc470038  ld          $a3, 0x38($v0)
    ctx->pc = 0x23a02cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x23a030: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23a030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23a034: 0xcb3024  and         $a2, $a2, $t3
    ctx->pc = 0x23a034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
    // 0x23a038: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x23a038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x23a03c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x23a03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x23a040: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x23a040u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x23a044: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x23a044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x23a048: 0x10c4025  or          $t0, $t0, $t4
    ctx->pc = 0x23a048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 12));
    // 0x23a04c: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x23a04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x23a050: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x23a050u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x23a054: 0xcf3025  or          $a2, $a2, $t7
    ctx->pc = 0x23a054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 15));
    // 0x23a058: 0x14e5024  and         $t2, $t2, $t6
    ctx->pc = 0x23a058u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 14));
    // 0x23a05c: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x23a05cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x23a060: 0x4233c  dsll32      $a0, $a0, 12
    ctx->pc = 0x23a060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
    // 0x23a064: 0x10d4025  or          $t0, $t0, $t5
    ctx->pc = 0x23a064u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 13));
    // 0x23a068: 0xfc450028  sd          $a1, 0x28($v0)
    ctx->pc = 0x23a068u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 5));
    // 0x23a06c: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x23a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x23a070: 0xef3825  or          $a3, $a3, $t7
    ctx->pc = 0x23a070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    // 0x23a074: 0xfc490018  sd          $t1, 0x18($v0)
    ctx->pc = 0x23a074u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 9));
    // 0x23a078: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x23a078u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x23a07c: 0xfea850c0  sd          $t0, 0x50C0($s5)
    ctx->pc = 0x23a07cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 20672), GPR_U64(ctx, 8));
    // 0x23a080: 0xfc470038  sd          $a3, 0x38($v0)
    ctx->pc = 0x23a080u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 7));
    // 0x23a084: 0xfc4a0040  sd          $t2, 0x40($v0)
    ctx->pc = 0x23a084u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 10));
label_23a088:
    // 0x23a088: 0x26a450c0  addiu       $a0, $s5, 0x50C0
    ctx->pc = 0x23a088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    // 0x23a08c: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x23A08Cu;
    SET_GPR_U32(ctx, 31, 0x23A094u);
    ctx->pc = 0x23A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A08Cu;
    // 0x23a090: 0x2485044f  addiu       $a1, $a0, 0x44F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x23A08Cu, 0x23A094u)) {
        return;
    }
    ctx->pc = 0x23A094u;
label_23a094:
    // 0x23a094: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23a094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23a098: 0x8c843f2c  lw          $a0, 0x3F2C($a0)
    ctx->pc = 0x23a098u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F2Cu));
    // 0x23a09c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x23a09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x23a0a0: 0xc09192e  jal         func_2464B8
    ctx->pc = 0x23A0A0u;
    SET_GPR_U32(ctx, 31, 0x23A0A8u);
    ctx->pc = 0x23A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0A0u;
    // 0x23a0a4: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2464B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2464B8u, 0x23A0A0u, 0x23A0A8u)) {
        return;
    }
    ctx->pc = 0x23A0A8u;
label_23a0a8:
    // 0x23a0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a0ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a0b0: 0xaf83842c  sw          $v1, -0x7BD4($gp)
    ctx->pc = 0x23a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935596), GPR_U32(ctx, 3));
    // 0x23a0b4: 0xaf8084d4  sw          $zero, -0x7B2C($gp)
    ctx->pc = 0x23a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935764), GPR_U32(ctx, 0));
    // 0x23a0b8: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x23A0B8u;
    SET_GPR_U32(ctx, 31, 0x23A0C0u);
    ctx->pc = 0x23A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0B8u;
    // 0x23a0bc: 0xaf80844c  sw          $zero, -0x7BB4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x23A0B8u, 0x23A0C0u)) {
        return;
    }
    ctx->pc = 0x23A0C0u;
label_23a0c0:
    // 0x23a0c0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x23a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x23a0c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0c8: 0xc0a5d86  jal         func_297618
    ctx->pc = 0x23A0C8u;
    SET_GPR_U32(ctx, 31, 0x23A0D0u);
    ctx->pc = 0x23A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0C8u;
    // 0x23a0cc: 0x24a59190  addiu       $a1, $a1, -0x6E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297618u, 0x23A0C8u, 0x23A0D0u)) {
        return;
    }
    ctx->pc = 0x23A0D0u;
label_23a0d0:
    // 0x23a0d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a0d4: 0x0  nop
    ctx->pc = 0x23a0d4u;
    // NOP
label_23a0d8:
    // 0x23a0d8: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x23A0D8u;
    SET_GPR_U32(ctx, 31, 0x23A0E0u);
    ctx->pc = 0x23A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0D8u;
    // 0x23a0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x23A0D8u, 0x23A0E0u)) {
        return;
    }
    ctx->pc = 0x23A0E0u;
label_23a0e0:
    // 0x23a0e0: 0x0  nop
    ctx->pc = 0x23a0e0u;
    // NOP
    // 0x23a0e4: 0x0  nop
    ctx->pc = 0x23a0e4u;
    // NOP
    // 0x23a0e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23A0E8u;
    {
        const bool branch_taken_0x23a0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a0e8) {
            ctx->pc = 0x23A0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0E8u;
            // 0x23a0ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a0d8;
        }
    }
    ctx->pc = 0x23A0F0u;
    // 0x23a0f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x23a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x23a0f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23a0f8: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x23a0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x23a0fc: 0x27c252b0  addiu       $v0, $fp, 0x52B0
    ctx->pc = 0x23a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 21168));
    // 0x23a100: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x23a100u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x23a104: 0x2408140b  addiu       $t0, $zero, 0x140B
    ctx->pc = 0x23a104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5131));
    // 0x23a108: 0x2450fe10  addiu       $s0, $v0, -0x1F0
    ctx->pc = 0x23a108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x23a10c: 0x2445025f  addiu       $a1, $v0, 0x25F
    ctx->pc = 0x23a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 607));
    // 0x23a110: 0xdc43fee0  ld          $v1, -0x120($v0)
    ctx->pc = 0x23a110u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967008)));
    // 0x23a114: 0xdc460050  ld          $a2, 0x50($v0)
    ctx->pc = 0x23a114u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x23a118: 0xdc47fe90  ld          $a3, -0x170($v0)
    ctx->pc = 0x23a118u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 4294966928)));
    // 0x23a11c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x23a11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x23a120: 0xfc43fee0  sd          $v1, -0x120($v0)
    ctx->pc = 0x23a120u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294967008), GPR_U64(ctx, 3));
    // 0x23a124: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x23a124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x23a128: 0xffc752b0  sd          $a3, 0x52B0($fp)
    ctx->pc = 0x23a128u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 21168), GPR_U64(ctx, 7));
    // 0x23a12c: 0xfc460050  sd          $a2, 0x50($v0)
    ctx->pc = 0x23a12cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 6));
    // 0x23a130: 0x6843fe17  ldl         $v1, -0x1E9($v0)
    ctx->pc = 0x23a130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23a134: 0x6c43fe10  ldr         $v1, -0x1F0($v0)
    ctx->pc = 0x23a134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23a138: 0x6846fe1f  ldl         $a2, -0x1E1($v0)
    ctx->pc = 0x23a138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966815); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x23a13c: 0x6c46fe18  ldr         $a2, -0x1E8($v0)
    ctx->pc = 0x23a13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x23a140: 0x6847fe27  ldl         $a3, -0x1D9($v0)
    ctx->pc = 0x23a140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x23a144: 0x6c47fe20  ldr         $a3, -0x1E0($v0)
    ctx->pc = 0x23a144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23a148: 0x6848fe2f  ldl         $t0, -0x1D1($v0)
    ctx->pc = 0x23a148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x23a14c: 0x6c48fe28  ldr         $t0, -0x1D8($v0)
    ctx->pc = 0x23a14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x23a150: 0xb0430167  sdl         $v1, 0x167($v0)
    ctx->pc = 0x23a150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a154: 0xb4430160  sdr         $v1, 0x160($v0)
    ctx->pc = 0x23a154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a158: 0xb046016f  sdl         $a2, 0x16F($v0)
    ctx->pc = 0x23a158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a15c: 0xb4460168  sdr         $a2, 0x168($v0)
    ctx->pc = 0x23a15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a160: 0xb0470177  sdl         $a3, 0x177($v0)
    ctx->pc = 0x23a160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a164: 0xb4470170  sdr         $a3, 0x170($v0)
    ctx->pc = 0x23a164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a168: 0xb048017f  sdl         $t0, 0x17F($v0)
    ctx->pc = 0x23a168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a16c: 0xb4480178  sdr         $t0, 0x178($v0)
    ctx->pc = 0x23a16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a170: 0x6843fe37  ldl         $v1, -0x1C9($v0)
    ctx->pc = 0x23a170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23a174: 0x6c43fe30  ldr         $v1, -0x1D0($v0)
    ctx->pc = 0x23a174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23a178: 0xb0430187  sdl         $v1, 0x187($v0)
    ctx->pc = 0x23a178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a17c: 0xb4430180  sdr         $v1, 0x180($v0)
    ctx->pc = 0x23a17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a180: 0x6843fe3f  ldl         $v1, -0x1C1($v0)
    ctx->pc = 0x23a180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966847); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23a184: 0x6c43fe38  ldr         $v1, -0x1C8($v0)
    ctx->pc = 0x23a184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966840); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23a188: 0x6846fe47  ldl         $a2, -0x1B9($v0)
    ctx->pc = 0x23a188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966855); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x23a18c: 0x6c46fe40  ldr         $a2, -0x1C0($v0)
    ctx->pc = 0x23a18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966848); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x23a190: 0x6847fe4f  ldl         $a3, -0x1B1($v0)
    ctx->pc = 0x23a190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966863); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x23a194: 0x6c47fe48  ldr         $a3, -0x1B8($v0)
    ctx->pc = 0x23a194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966856); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23a198: 0x6848fe57  ldl         $t0, -0x1A9($v0)
    ctx->pc = 0x23a198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966871); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x23a19c: 0x6c48fe50  ldr         $t0, -0x1B0($v0)
    ctx->pc = 0x23a19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x23a1a0: 0xb043018f  sdl         $v1, 0x18F($v0)
    ctx->pc = 0x23a1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1a4: 0xb4430188  sdr         $v1, 0x188($v0)
    ctx->pc = 0x23a1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1a8: 0xb0460197  sdl         $a2, 0x197($v0)
    ctx->pc = 0x23a1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1ac: 0xb4460190  sdr         $a2, 0x190($v0)
    ctx->pc = 0x23a1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1b0: 0xb047019f  sdl         $a3, 0x19F($v0)
    ctx->pc = 0x23a1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1b4: 0xb4470198  sdr         $a3, 0x198($v0)
    ctx->pc = 0x23a1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1b8: 0xb04801a7  sdl         $t0, 0x1A7($v0)
    ctx->pc = 0x23a1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1bc: 0xb44801a0  sdr         $t0, 0x1A0($v0)
    ctx->pc = 0x23a1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1c0: 0x6843fe5f  ldl         $v1, -0x1A1($v0)
    ctx->pc = 0x23a1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966879); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23a1c4: 0x6c43fe58  ldr         $v1, -0x1A8($v0)
    ctx->pc = 0x23a1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294966872); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23a1c8: 0xb04301af  sdl         $v1, 0x1AF($v0)
    ctx->pc = 0x23a1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1cc: 0xb44301a8  sdr         $v1, 0x1A8($v0)
    ctx->pc = 0x23a1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1d0: 0x68430147  ldl         $v1, 0x147($v0)
    ctx->pc = 0x23a1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23a1d4: 0x6c430140  ldr         $v1, 0x140($v0)
    ctx->pc = 0x23a1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23a1d8: 0x6846014f  ldl         $a2, 0x14F($v0)
    ctx->pc = 0x23a1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x23a1dc: 0x6c460148  ldr         $a2, 0x148($v0)
    ctx->pc = 0x23a1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x23a1e0: 0x68470157  ldl         $a3, 0x157($v0)
    ctx->pc = 0x23a1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x23a1e4: 0x6c470150  ldr         $a3, 0x150($v0)
    ctx->pc = 0x23a1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23a1e8: 0x6848015f  ldl         $t0, 0x15F($v0)
    ctx->pc = 0x23a1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x23a1ec: 0x6c480158  ldr         $t0, 0x158($v0)
    ctx->pc = 0x23a1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x23a1f0: 0xb04301b7  sdl         $v1, 0x1B7($v0)
    ctx->pc = 0x23a1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1f4: 0xb44301b0  sdr         $v1, 0x1B0($v0)
    ctx->pc = 0x23a1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1f8: 0xb04601bf  sdl         $a2, 0x1BF($v0)
    ctx->pc = 0x23a1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a1fc: 0xb44601b8  sdr         $a2, 0x1B8($v0)
    ctx->pc = 0x23a1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a200: 0xb04701c7  sdl         $a3, 0x1C7($v0)
    ctx->pc = 0x23a200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a204: 0xb44701c0  sdr         $a3, 0x1C0($v0)
    ctx->pc = 0x23a204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a208: 0xb04801cf  sdl         $t0, 0x1CF($v0)
    ctx->pc = 0x23a208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a20c: 0xb44801c8  sdr         $t0, 0x1C8($v0)
    ctx->pc = 0x23a20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a210: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x23A210u;
    SET_GPR_U32(ctx, 31, 0x23A218u);
    ctx->pc = 0x23A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A210u;
    // 0x23a214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x23A210u, 0x23A218u)) {
        return;
    }
    ctx->pc = 0x23A218u;
label_23a218:
    // 0x23a218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a220: 0xaf8284b4  sw          $v0, -0x7B4C($gp)
    ctx->pc = 0x23a220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935732), GPR_U32(ctx, 2));
    // 0x23a224: 0xc0a56a2  jal         func_295A88
    ctx->pc = 0x23A224u;
    SET_GPR_U32(ctx, 31, 0x23A22Cu);
    ctx->pc = 0x23A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A224u;
    // 0x23a228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295A88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295A88u, 0x23A224u, 0x23A22Cu)) {
        return;
    }
    ctx->pc = 0x23A22Cu;
label_23a22c:
    // 0x23a22c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a230:
    // 0x23a230: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x23A230u;
    SET_GPR_U32(ctx, 31, 0x23A238u);
    ctx->pc = 0x23A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A230u;
    // 0x23a234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x23A230u, 0x23A238u)) {
        return;
    }
    ctx->pc = 0x23A238u;
label_23a238:
    // 0x23a238: 0x0  nop
    ctx->pc = 0x23a238u;
    // NOP
    // 0x23a23c: 0x0  nop
    ctx->pc = 0x23a23cu;
    // NOP
    // 0x23a240: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23A240u;
    {
        const bool branch_taken_0x23a240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A240u;
        // 0x23a244: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a240) {
            ctx->pc = 0x23A230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a230;
        }
    }
    ctx->pc = 0x23A248u;
    // 0x23a248: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x23a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x23a24c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23a250: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x23a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x23a254: 0x26b050c0  addiu       $s0, $s5, 0x50C0
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    // 0x23a258: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23a258u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x23a25c: 0xae0003cc  sw          $zero, 0x3CC($s0)
    ctx->pc = 0x23a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
    // 0x23a260: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x23a260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x23a264: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x23a264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x23a268: 0xc08bff4  jal         func_22FFD0
    ctx->pc = 0x23A268u;
    SET_GPR_U32(ctx, 31, 0x23A270u);
    ctx->pc = 0x23A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A268u;
    // 0x23a26c: 0xae0003c0  sw          $zero, 0x3C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22FFD0u, 0x23A268u, 0x23A270u)) {
        return;
    }
    ctx->pc = 0x23A270u;
label_23a270:
    // 0x23a270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23a270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a274: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A274u;
    {
        const bool branch_taken_0x23a274 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a274) {
            ctx->pc = 0x23A278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A274u;
            // 0x23a278: 0xde040080  ld          $a0, 0x80($s0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A28Cu;
            goto label_23a28c;
        }
    }
    ctx->pc = 0x23A27Cu;
    // 0x23a27c: 0xc09196e  jal         func_2465B8
    ctx->pc = 0x23A27Cu;
    SET_GPR_U32(ctx, 31, 0x23A284u);
    ctx->pc = 0x2465B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2465B8u, 0x23A27Cu, 0x23A284u)) {
        return;
    }
    ctx->pc = 0x23A284u;
label_23a284:
    // 0x23a284: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x23A284u;
    {
        const bool branch_taken_0x23a284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A284u;
        // 0x23a288: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a284) {
            ctx->pc = 0x23A324u;
            goto label_23a324;
        }
    }
    ctx->pc = 0x23A28Cu;
label_23a28c:
    // 0x23a28c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x23a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x23a290: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23a294: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x23a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x23a298: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x23a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x23a29c: 0xde070060  ld          $a3, 0x60($s0)
    ctx->pc = 0x23a29cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23a2a0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23a2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a2a4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x23a2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23a2a8: 0xde060070  ld          $a2, 0x70($s0)
    ctx->pc = 0x23a2a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x23a2ac: 0xde0500d0  ld          $a1, 0xD0($s0)
    ctx->pc = 0x23a2acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x23a2b0: 0x4193f  dsra32      $v1, $a0, 4
    ctx->pc = 0x23a2b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 4) >> (32 + 4));
    // 0x23a2b4: 0x4113b  dsra        $v0, $a0, 4
    ctx->pc = 0x23a2b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> 4);
    // 0x23a2b8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x23a2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x23a2bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23a2c0: 0xff8384c0  sd          $v1, -0x7B40($gp)
    ctx->pc = 0x23a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935744), GPR_U64(ctx, 3));
    // 0x23a2c4: 0xff8284b8  sd          $v0, -0x7B48($gp)
    ctx->pc = 0x23a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935736), GPR_U64(ctx, 2));
    // 0x23a2c8: 0xff878458  sd          $a3, -0x7BA8($gp)
    ctx->pc = 0x23a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U64(ctx, 7));
    // 0x23a2cc: 0xff868450  sd          $a2, -0x7BB0($gp)
    ctx->pc = 0x23a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935632), GPR_U64(ctx, 6));
    // 0x23a2d0: 0xff858460  sd          $a1, -0x7BA0($gp)
    ctx->pc = 0x23a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 5));
    // 0x23a2d4: 0xff848468  sd          $a0, -0x7B98($gp)
    ctx->pc = 0x23a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935656), GPR_U64(ctx, 4));
    // 0x23a2d8: 0xc08e078  jal         func_2381E0
    ctx->pc = 0x23A2D8u;
    SET_GPR_U32(ctx, 31, 0x23A2E0u);
    ctx->pc = 0x23A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2D8u;
    // 0x23a2dc: 0xaf929110  sw          $s2, -0x6EF0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2381E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2381E0u, 0x23A2D8u, 0x23A2E0u)) {
        return;
    }
    ctx->pc = 0x23A2E0u;
label_23a2e0:
    // 0x23a2e0: 0x26c33c90  addiu       $v1, $s6, 0x3C90
    ctx->pc = 0x23a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15504));
    // 0x23a2e4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23a2e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23a2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23a2ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A2ECu;
    {
        const bool branch_taken_0x23a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a2ec) {
            ctx->pc = 0x23A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A2ECu;
            // 0x23a2f0: 0xa38090c1  sb          $zero, -0x6F3F($gp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 28), 4294938817), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A2FCu;
            goto label_23a2fc;
        }
    }
    ctx->pc = 0x23A2F4u;
    // 0x23a2f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23a2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23a2f8: 0xa0324131  sb          $s2, 0x4131($at)
    ctx->pc = 0x23a2f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x6B4131u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B4131u, _value); } while (0);
label_23a2fc:
    // 0x23a2fc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x23a300: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x23a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x23a304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A304u;
    {
        const bool branch_taken_0x23a304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A304u;
        // 0x23a308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a304) {
            ctx->pc = 0x23A318u;
            goto label_23a318;
        }
    }
    ctx->pc = 0x23A30Cu;
    // 0x23a30c: 0xc08e31a  jal         func_238C68
    ctx->pc = 0x23A30Cu;
    SET_GPR_U32(ctx, 31, 0x23A314u);
    ctx->pc = 0x23A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A30Cu;
    // 0x23a310: 0x26a450c0  addiu       $a0, $s5, 0x50C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238C68u, 0x23A30Cu, 0x23A314u)) {
        return;
    }
    ctx->pc = 0x23A314u;
label_23a314:
    // 0x23a314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a318:
    // 0x23a318: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23a318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23a31c: 0xac223f20  sw          $v0, 0x3F20($at)
    ctx->pc = 0x23a31cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F20u, _value); } while (0);
    // 0x23a320: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23a320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23a324:
    // 0x23a324: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x23a324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23a328: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x23a328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23a32c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x23a32cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23a330: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x23a330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23a334: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23a334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23a338: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x23a338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a33c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x23a33cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a340: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x23a340u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a344: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x23a344u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a34c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A34Cu;
        // 0x23a350: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A354u;
    // 0x23a354: 0x0  nop
    ctx->pc = 0x23a354u;
    // NOP
    ctx->pc = 0x23a358u;
}
