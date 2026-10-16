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

// Function: sub_0011F768
// Address: 0x11f768 - 0x11ff30
void sub_0011F768_0x11f768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F768_0x11f768");
#endif

    switch (ctx->pc) {
        case 0x11f7a8u: goto label_11f7a8;
        case 0x11f7b0u: goto label_11f7b0;
        case 0x11f814u: goto label_11f814;
        case 0x11f81cu: goto label_11f81c;
        case 0x11f8e8u: goto label_11f8e8;
        case 0x11f91cu: goto label_11f91c;
        case 0x11f970u: goto label_11f970;
        case 0x11fb1cu: goto label_11fb1c;
        case 0x11fb34u: goto label_11fb34;
        case 0x11fb4cu: goto label_11fb4c;
        case 0x11fb64u: goto label_11fb64;
        case 0x11fb7cu: goto label_11fb7c;
        case 0x11fb90u: goto label_11fb90;
        case 0x11fba8u: goto label_11fba8;
        case 0x11fc14u: goto label_11fc14;
        case 0x11fc20u: goto label_11fc20;
        case 0x11fd70u: goto label_11fd70;
        case 0x11fd8cu: goto label_11fd8c;
        case 0x11fda4u: goto label_11fda4;
        case 0x11fdc0u: goto label_11fdc0;
        case 0x11fdd8u: goto label_11fdd8;
        case 0x11fdf4u: goto label_11fdf4;
        case 0x11fe0cu: goto label_11fe0c;
        case 0x11fe14u: goto label_11fe14;
        case 0x11fe34u: goto label_11fe34;
        case 0x11fe50u: goto label_11fe50;
        case 0x11fe68u: goto label_11fe68;
        case 0x11fe78u: goto label_11fe78;
        case 0x11fe80u: goto label_11fe80;
        case 0x11fe90u: goto label_11fe90;
        case 0x11fea0u: goto label_11fea0;
        case 0x11feb8u: goto label_11feb8;
        case 0x11fee0u: goto label_11fee0;
        case 0x11fef0u: goto label_11fef0;
        default: break;
    }

    ctx->pc = 0x11f768u;

    // 0x11f768: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11f768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11f76c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x11f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x11f770: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x11f770u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f774: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x11f774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x11f778: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x11f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x11f77c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x11f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x11f780: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x11f780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x11f784: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x11f784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x11f788: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x11f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x11f78c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11f790: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x11f790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x11f794: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x11f794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x11f798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f79c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x11f79cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x11f7a0: 0xc040000  jal         func_100000
    ctx->pc = 0x11F7A0u;
    SET_GPR_U32(ctx, 31, 0x11F7A8u);
    ctx->pc = 0x11F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7A0u;
    // 0x11f7a4: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x100000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100000u, 0x11F7A0u, 0x11F7A8u)) {
        return;
    }
    ctx->pc = 0x11F7A8u;
label_11f7a8:
    // 0x11f7a8: 0xc043c50  jal         func_10F140
    ctx->pc = 0x11F7A8u;
    SET_GPR_U32(ctx, 31, 0x11F7B0u);
    ctx->pc = 0x11F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7A8u;
    // 0x11f7ac: 0x27c40310  addiu       $a0, $fp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F140u, 0x11F7A8u, 0x11F7B0u)) {
        return;
    }
    ctx->pc = 0x11F7B0u;
label_11f7b0:
    // 0x11f7b0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11f7b4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11f7b8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11f7bc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11f7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11f7c0: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x11f7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x11f7c4: 0x2463c1c0  addiu       $v1, $v1, -0x3E40
    ctx->pc = 0x11f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951360));
    // 0x11f7c8: 0x2484c0a0  addiu       $a0, $a0, -0x3F60
    ctx->pc = 0x11f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951072));
    // 0x11f7cc: 0x24a5c060  addiu       $a1, $a1, -0x3FA0
    ctx->pc = 0x11f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951008));
    // 0x11f7d0: 0x24c6c048  addiu       $a2, $a2, -0x3FB8
    ctx->pc = 0x11f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950984));
    // 0x11f7d4: 0x24e7c1e0  addiu       $a3, $a3, -0x3E20
    ctx->pc = 0x11f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951392));
    // 0x11f7d8: 0xafc3003c  sw          $v1, 0x3C($fp)
    ctx->pc = 0x11f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 3));
    // 0x11f7dc: 0x27c20320  addiu       $v0, $fp, 0x320
    ctx->pc = 0x11f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 800));
    // 0x11f7e0: 0xafc40048  sw          $a0, 0x48($fp)
    ctx->pc = 0x11f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 4));
    // 0x11f7e4: 0xafc50084  sw          $a1, 0x84($fp)
    ctx->pc = 0x11f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 5));
    // 0x11f7e8: 0x27c40bf0  addiu       $a0, $fp, 0xBF0
    ctx->pc = 0x11f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3056));
    // 0x11f7ec: 0xafc60314  sw          $a2, 0x314($fp)
    ctx->pc = 0x11f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 788), GPR_U32(ctx, 6));
    // 0x11f7f0: 0xafc70034  sw          $a3, 0x34($fp)
    ctx->pc = 0x11f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 7));
    // 0x11f7f4: 0xac40082c  sw          $zero, 0x82C($v0)
    ctx->pc = 0x11f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2092), GPR_U32(ctx, 0));
    // 0x11f7f8: 0xac400804  sw          $zero, 0x804($v0)
    ctx->pc = 0x11f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2052), GPR_U32(ctx, 0));
    // 0x11f7fc: 0xac40080c  sw          $zero, 0x80C($v0)
    ctx->pc = 0x11f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 0));
    // 0x11f800: 0xac40084c  sw          $zero, 0x84C($v0)
    ctx->pc = 0x11f800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2124), GPR_U32(ctx, 0));
    // 0x11f804: 0xac400820  sw          $zero, 0x820($v0)
    ctx->pc = 0x11f804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2080), GPR_U32(ctx, 0));
    // 0x11f808: 0xac40081c  sw          $zero, 0x81C($v0)
    ctx->pc = 0x11f808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2076), GPR_U32(ctx, 0));
    // 0x11f80c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11F80Cu;
    SET_GPR_U32(ctx, 31, 0x11F814u);
    ctx->pc = 0x11F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F80Cu;
    // 0x11f810: 0xac400828  sw          $zero, 0x828($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 2088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11F80Cu, 0x11F814u)) {
        return;
    }
    ctx->pc = 0x11F814u;
label_11f814:
    // 0x11f814: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11F814u;
    SET_GPR_U32(ctx, 31, 0x11F81Cu);
    ctx->pc = 0x11F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F814u;
    // 0x11f818: 0x27c40bf8  addiu       $a0, $fp, 0xBF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11F814u, 0x11F81Cu)) {
        return;
    }
    ctx->pc = 0x11F81Cu;
label_11f81c:
    // 0x11f81c: 0xafc00d1c  sw          $zero, 0xD1C($fp)
    ctx->pc = 0x11f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3356), GPR_U32(ctx, 0));
    // 0x11f820: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f824: 0xafc00d20  sw          $zero, 0xD20($fp)
    ctx->pc = 0x11f824u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3360), GPR_U32(ctx, 0));
    // 0x11f828: 0x27c20f00  addiu       $v0, $fp, 0xF00
    ctx->pc = 0x11f828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 3840));
    // 0x11f82c: 0xafc00d24  sw          $zero, 0xD24($fp)
    ctx->pc = 0x11f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3364), GPR_U32(ctx, 0));
    // 0x11f830: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11f834: 0xafc00d28  sw          $zero, 0xD28($fp)
    ctx->pc = 0x11f834u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3368), GPR_U32(ctx, 0));
    // 0x11f838: 0xafc00d2c  sw          $zero, 0xD2C($fp)
    ctx->pc = 0x11f838u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3372), GPR_U32(ctx, 0));
    // 0x11f83c: 0xafc00d30  sw          $zero, 0xD30($fp)
    ctx->pc = 0x11f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3376), GPR_U32(ctx, 0));
    // 0x11f840: 0xafc00d34  sw          $zero, 0xD34($fp)
    ctx->pc = 0x11f840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3380), GPR_U32(ctx, 0));
    // 0x11f844: 0xafc00d38  sw          $zero, 0xD38($fp)
    ctx->pc = 0x11f844u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3384), GPR_U32(ctx, 0));
    // 0x11f848: 0xafc00d3c  sw          $zero, 0xD3C($fp)
    ctx->pc = 0x11f848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3388), GPR_U32(ctx, 0));
    // 0x11f84c: 0xafc00d40  sw          $zero, 0xD40($fp)
    ctx->pc = 0x11f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3392), GPR_U32(ctx, 0));
    // 0x11f850: 0xafc00d44  sw          $zero, 0xD44($fp)
    ctx->pc = 0x11f850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3396), GPR_U32(ctx, 0));
    // 0x11f854: 0xafc00d48  sw          $zero, 0xD48($fp)
    ctx->pc = 0x11f854u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3400), GPR_U32(ctx, 0));
    // 0x11f858: 0xafc00d4c  sw          $zero, 0xD4C($fp)
    ctx->pc = 0x11f858u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3404), GPR_U32(ctx, 0));
    // 0x11f85c: 0xafc00d50  sw          $zero, 0xD50($fp)
    ctx->pc = 0x11f85cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3408), GPR_U32(ctx, 0));
    // 0x11f860: 0xafc00d54  sw          $zero, 0xD54($fp)
    ctx->pc = 0x11f860u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3412), GPR_U32(ctx, 0));
    // 0x11f864: 0xafc00d58  sw          $zero, 0xD58($fp)
    ctx->pc = 0x11f864u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3416), GPR_U32(ctx, 0));
    // 0x11f868: 0xafc00d5c  sw          $zero, 0xD5C($fp)
    ctx->pc = 0x11f868u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3420), GPR_U32(ctx, 0));
    // 0x11f86c: 0xafc00d60  sw          $zero, 0xD60($fp)
    ctx->pc = 0x11f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3424), GPR_U32(ctx, 0));
    // 0x11f870: 0xafc00d64  sw          $zero, 0xD64($fp)
    ctx->pc = 0x11f870u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3428), GPR_U32(ctx, 0));
    // 0x11f874: 0xafc00d68  sw          $zero, 0xD68($fp)
    ctx->pc = 0x11f874u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3432), GPR_U32(ctx, 0));
    // 0x11f878: 0xafc00d6c  sw          $zero, 0xD6C($fp)
    ctx->pc = 0x11f878u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3436), GPR_U32(ctx, 0));
    // 0x11f87c: 0xafc00d70  sw          $zero, 0xD70($fp)
    ctx->pc = 0x11f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3440), GPR_U32(ctx, 0));
    // 0x11f880: 0xafc00d74  sw          $zero, 0xD74($fp)
    ctx->pc = 0x11f880u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3444), GPR_U32(ctx, 0));
    // 0x11f884: 0xafc00d78  sw          $zero, 0xD78($fp)
    ctx->pc = 0x11f884u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3448), GPR_U32(ctx, 0));
    // 0x11f888: 0xafc00d7c  sw          $zero, 0xD7C($fp)
    ctx->pc = 0x11f888u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3452), GPR_U32(ctx, 0));
    // 0x11f88c: 0xafc00d80  sw          $zero, 0xD80($fp)
    ctx->pc = 0x11f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3456), GPR_U32(ctx, 0));
    // 0x11f890: 0xafc00d84  sw          $zero, 0xD84($fp)
    ctx->pc = 0x11f890u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3460), GPR_U32(ctx, 0));
    // 0x11f894: 0xafc00d88  sw          $zero, 0xD88($fp)
    ctx->pc = 0x11f894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3464), GPR_U32(ctx, 0));
    // 0x11f898: 0xafc00d8c  sw          $zero, 0xD8C($fp)
    ctx->pc = 0x11f898u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3468), GPR_U32(ctx, 0));
    // 0x11f89c: 0xafc00d90  sw          $zero, 0xD90($fp)
    ctx->pc = 0x11f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3472), GPR_U32(ctx, 0));
    // 0x11f8a0: 0xafc00d94  sw          $zero, 0xD94($fp)
    ctx->pc = 0x11f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3476), GPR_U32(ctx, 0));
    // 0x11f8a4: 0xafc00d98  sw          $zero, 0xD98($fp)
    ctx->pc = 0x11f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3480), GPR_U32(ctx, 0));
    // 0x11f8a8: 0xafc00d9c  sw          $zero, 0xD9C($fp)
    ctx->pc = 0x11f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3484), GPR_U32(ctx, 0));
    // 0x11f8ac: 0xafc00da0  sw          $zero, 0xDA0($fp)
    ctx->pc = 0x11f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3488), GPR_U32(ctx, 0));
    // 0x11f8b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11f8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11f8b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f8b8: 0xafc00da4  sw          $zero, 0xDA4($fp)
    ctx->pc = 0x11f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3492), GPR_U32(ctx, 0));
    // 0x11f8bc: 0xafc00da8  sw          $zero, 0xDA8($fp)
    ctx->pc = 0x11f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3496), GPR_U32(ctx, 0));
    // 0x11f8c0: 0xafc00dac  sw          $zero, 0xDAC($fp)
    ctx->pc = 0x11f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3500), GPR_U32(ctx, 0));
    // 0x11f8c4: 0xafc00db0  sw          $zero, 0xDB0($fp)
    ctx->pc = 0x11f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3504), GPR_U32(ctx, 0));
    // 0x11f8c8: 0xafc00db4  sw          $zero, 0xDB4($fp)
    ctx->pc = 0x11f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3508), GPR_U32(ctx, 0));
    // 0x11f8cc: 0xafc00db8  sw          $zero, 0xDB8($fp)
    ctx->pc = 0x11f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3512), GPR_U32(ctx, 0));
    // 0x11f8d0: 0xafc00dbc  sw          $zero, 0xDBC($fp)
    ctx->pc = 0x11f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3516), GPR_U32(ctx, 0));
    // 0x11f8d4: 0xafc00dc0  sw          $zero, 0xDC0($fp)
    ctx->pc = 0x11f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3520), GPR_U32(ctx, 0));
    // 0x11f8d8: 0xafc00dc4  sw          $zero, 0xDC4($fp)
    ctx->pc = 0x11f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3524), GPR_U32(ctx, 0));
    // 0x11f8dc: 0xafc00dc8  sw          $zero, 0xDC8($fp)
    ctx->pc = 0x11f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3528), GPR_U32(ctx, 0));
    // 0x11f8e0: 0xafc00dcc  sw          $zero, 0xDCC($fp)
    ctx->pc = 0x11f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3532), GPR_U32(ctx, 0));
    // 0x11f8e4: 0xafc00dd0  sw          $zero, 0xDD0($fp)
    ctx->pc = 0x11f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3536), GPR_U32(ctx, 0));
label_11f8e8:
    // 0x11f8e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x11f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x11f8ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11f8f0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x11f8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11f8f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x11f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x11f8f8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11F8F8u;
    {
        const bool branch_taken_0x11f8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F8u;
        // 0x11f8fc: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f8) {
            ctx->pc = 0x11F8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f8e8;
        }
    }
    ctx->pc = 0x11F900u;
    // 0x11f900: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11f900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11f904: 0xafc00f78  sw          $zero, 0xF78($fp)
    ctx->pc = 0x11f904u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3960), GPR_U32(ctx, 0));
    // 0x11f908: 0x8fc500c4  lw          $a1, 0xC4($fp)
    ctx->pc = 0x11f908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
    // 0x11f90c: 0x27c40f84  addiu       $a0, $fp, 0xF84
    ctx->pc = 0x11f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3972));
    // 0x11f910: 0xafc20f7c  sw          $v0, 0xF7C($fp)
    ctx->pc = 0x11f910u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3964), GPR_U32(ctx, 2));
    // 0x11f914: 0xc0418ee  jal         func_1063B8
    ctx->pc = 0x11F914u;
    SET_GPR_U32(ctx, 31, 0x11F91Cu);
    ctx->pc = 0x11F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F914u;
    // 0x11f918: 0x27d60310  addiu       $s6, $fp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1063B8u, 0x11F914u, 0x11F91Cu)) {
        return;
    }
    ctx->pc = 0x11F91Cu;
label_11f91c:
    // 0x11f91c: 0x27d10038  addiu       $s1, $fp, 0x38
    ctx->pc = 0x11f91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    // 0x11f920: 0x27c40044  addiu       $a0, $fp, 0x44
    ctx->pc = 0x11f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 68));
    // 0x11f924: 0x27c80cc0  addiu       $t0, $fp, 0xCC0
    ctx->pc = 0x11f924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 3264));
    // 0x11f928: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x11f928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x11f92c: 0x27c90cf0  addiu       $t1, $fp, 0xCF0
    ctx->pc = 0x11f92cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 3312));
    // 0x11f930: 0x27c41460  addiu       $a0, $fp, 0x1460
    ctx->pc = 0x11f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5216));
    // 0x11f934: 0x27ca0d00  addiu       $t2, $fp, 0xD00
    ctx->pc = 0x11f934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 3328));
    // 0x11f938: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x11f938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x11f93c: 0x27cb0ce0  addiu       $t3, $fp, 0xCE0
    ctx->pc = 0x11f93cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 3296));
    // 0x11f940: 0x27c414a0  addiu       $a0, $fp, 0x14A0
    ctx->pc = 0x11f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5280));
    // 0x11f944: 0x27cc0e30  addiu       $t4, $fp, 0xE30
    ctx->pc = 0x11f944u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), 3632));
    // 0x11f948: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x11f948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x11f94c: 0x27cd0e40  addiu       $t5, $fp, 0xE40
    ctx->pc = 0x11f94cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 3648));
    // 0x11f950: 0x27ce0c60  addiu       $t6, $fp, 0xC60
    ctx->pc = 0x11f950u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 30), 3168));
    // 0x11f954: 0x27cf0c50  addiu       $t7, $fp, 0xC50
    ctx->pc = 0x11f954u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 30), 3152));
    // 0x11f958: 0x27d20cb0  addiu       $s2, $fp, 0xCB0
    ctx->pc = 0x11f958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 3248));
    // 0x11f95c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11f964: 0x27d40e88  addiu       $s4, $fp, 0xE88
    ctx->pc = 0x11f964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 3720));
    // 0x11f968: 0x27d30e00  addiu       $s3, $fp, 0xE00
    ctx->pc = 0x11f968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 3584));
    // 0x11f96c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_11f970:
    // 0x11f970: 0x0  nop
    ctx->pc = 0x11f970u;
    // NOP
    // 0x11f974: 0x0  nop
    ctx->pc = 0x11f974u;
    // NOP
    // 0x11f978: 0x0  nop
    ctx->pc = 0x11f978u;
    // NOP
    // 0x11f97c: 0x0  nop
    ctx->pc = 0x11f97cu;
    // NOP
    // 0x11f980: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11F980u;
    {
        const bool branch_taken_0x11f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F980u;
        // 0x11f984: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f980) {
            ctx->pc = 0x11F970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f970;
        }
    }
    ctx->pc = 0x11F988u;
    // 0x11f988: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11f988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f98c: 0xafc00c70  sw          $zero, 0xC70($fp)
    ctx->pc = 0x11f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3184), GPR_U32(ctx, 0));
    // 0x11f990: 0xafd00bd0  sw          $s0, 0xBD0($fp)
    ctx->pc = 0x11f990u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3024), GPR_U32(ctx, 16));
    // 0x11f994: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x11f994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x11f998: 0xafc00c78  sw          $zero, 0xC78($fp)
    ctx->pc = 0x11f998u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3192), GPR_U32(ctx, 0));
    // 0x11f99c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f9a0: 0xafc00f54  sw          $zero, 0xF54($fp)
    ctx->pc = 0x11f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3924), GPR_U32(ctx, 0));
    // 0x11f9a4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x11f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x11f9a8: 0xafc00f58  sw          $zero, 0xF58($fp)
    ctx->pc = 0x11f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3928), GPR_U32(ctx, 0));
    // 0x11f9ac: 0x2475f948  addiu       $s5, $v1, -0x6B8
    ctx->pc = 0x11f9acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965576));
    // 0x11f9b0: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x11f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x11f9b4: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x11f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x11f9b8: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x11f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x11f9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f9c0: 0xafc00cc0  sw          $zero, 0xCC0($fp)
    ctx->pc = 0x11f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3264), GPR_U32(ctx, 0));
    // 0x11f9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f9c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f9cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11f9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11f9d0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x11f9d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11f9d4: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x11f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x11f9d8: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x11f9d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x11f9dc: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x11f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x11f9e0: 0xe7d50cf8  swc1        $f21, 0xCF8($fp)
    ctx->pc = 0x11f9e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3320), bits); }
    // 0x11f9e4: 0xafc00cf0  sw          $zero, 0xCF0($fp)
    ctx->pc = 0x11f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3312), GPR_U32(ctx, 0));
    // 0x11f9e8: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x11f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x11f9ec: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x11f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x11f9f0: 0xafc00d00  sw          $zero, 0xD00($fp)
    ctx->pc = 0x11f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3328), GPR_U32(ctx, 0));
    // 0x11f9f4: 0xafc00bb8  sw          $zero, 0xBB8($fp)
    ctx->pc = 0x11f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3000), GPR_U32(ctx, 0));
    // 0x11f9f8: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x11f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x11f9fc: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x11f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x11fa00: 0xafd00e84  sw          $s0, 0xE84($fp)
    ctx->pc = 0x11fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3716), GPR_U32(ctx, 16));
    // 0x11fa04: 0xafc00ce0  sw          $zero, 0xCE0($fp)
    ctx->pc = 0x11fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3296), GPR_U32(ctx, 0));
    // 0x11fa08: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x11fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x11fa0c: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x11fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    // 0x11fa10: 0xafc00e30  sw          $zero, 0xE30($fp)
    ctx->pc = 0x11fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3632), GPR_U32(ctx, 0));
    // 0x11fa14: 0xada00004  sw          $zero, 0x4($t5)
    ctx->pc = 0x11fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
    // 0x11fa18: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x11fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x11fa1c: 0xafc00e40  sw          $zero, 0xE40($fp)
    ctx->pc = 0x11fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3648), GPR_U32(ctx, 0));
    // 0x11fa20: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x11fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x11fa24: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x11fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x11fa28: 0xafd00d10  sw          $s0, 0xD10($fp)
    ctx->pc = 0x11fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3344), GPR_U32(ctx, 16));
    // 0x11fa2c: 0xafc00c60  sw          $zero, 0xC60($fp)
    ctx->pc = 0x11fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3168), GPR_U32(ctx, 0));
    // 0x11fa30: 0xafc00ec8  sw          $zero, 0xEC8($fp)
    ctx->pc = 0x11fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3784), GPR_U32(ctx, 0));
    // 0x11fa34: 0xafc00ecc  sw          $zero, 0xECC($fp)
    ctx->pc = 0x11fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3788), GPR_U32(ctx, 0));
    // 0x11fa38: 0xafc00ed0  sw          $zero, 0xED0($fp)
    ctx->pc = 0x11fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3792), GPR_U32(ctx, 0));
    // 0x11fa3c: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x11fa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x11fa40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fa40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fa44: 0xafc00c7c  sw          $zero, 0xC7C($fp)
    ctx->pc = 0x11fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3196), GPR_U32(ctx, 0));
    // 0x11fa48: 0xe7c00e18  swc1        $f0, 0xE18($fp)
    ctx->pc = 0x11fa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3608), bits); }
    // 0x11fa4c: 0xafd00bd4  sw          $s0, 0xBD4($fp)
    ctx->pc = 0x11fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3028), GPR_U32(ctx, 16));
    // 0x11fa50: 0xafd00e5c  sw          $s0, 0xE5C($fp)
    ctx->pc = 0x11fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3676), GPR_U32(ctx, 16));
    // 0x11fa54: 0xafd00c8c  sw          $s0, 0xC8C($fp)
    ctx->pc = 0x11fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3212), GPR_U32(ctx, 16));
    // 0x11fa58: 0xafd00df0  sw          $s0, 0xDF0($fp)
    ctx->pc = 0x11fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3568), GPR_U32(ctx, 16));
    // 0x11fa5c: 0xe7d50e80  swc1        $f21, 0xE80($fp)
    ctx->pc = 0x11fa5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3712), bits); }
    // 0x11fa60: 0xafc00c90  sw          $zero, 0xC90($fp)
    ctx->pc = 0x11fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3216), GPR_U32(ctx, 0));
    // 0x11fa64: 0xafc00c98  sw          $zero, 0xC98($fp)
    ctx->pc = 0x11fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3224), GPR_U32(ctx, 0));
    // 0x11fa68: 0xafc00c80  sw          $zero, 0xC80($fp)
    ctx->pc = 0x11fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3200), GPR_U32(ctx, 0));
    // 0x11fa6c: 0xafc00c84  sw          $zero, 0xC84($fp)
    ctx->pc = 0x11fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3204), GPR_U32(ctx, 0));
    // 0x11fa70: 0xafc00c88  sw          $zero, 0xC88($fp)
    ctx->pc = 0x11fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3208), GPR_U32(ctx, 0));
    // 0x11fa74: 0xafc00e50  sw          $zero, 0xE50($fp)
    ctx->pc = 0x11fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3664), GPR_U32(ctx, 0));
    // 0x11fa78: 0xafc00e54  sw          $zero, 0xE54($fp)
    ctx->pc = 0x11fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3668), GPR_U32(ctx, 0));
    // 0x11fa7c: 0xafc00e58  sw          $zero, 0xE58($fp)
    ctx->pc = 0x11fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3672), GPR_U32(ctx, 0));
    // 0x11fa80: 0xafc00e64  sw          $zero, 0xE64($fp)
    ctx->pc = 0x11fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3684), GPR_U32(ctx, 0));
    // 0x11fa84: 0xafc00c94  sw          $zero, 0xC94($fp)
    ctx->pc = 0x11fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3220), GPR_U32(ctx, 0));
    // 0x11fa88: 0xafc00cd8  sw          $zero, 0xCD8($fp)
    ctx->pc = 0x11fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3288), GPR_U32(ctx, 0));
    // 0x11fa8c: 0xafc00e20  sw          $zero, 0xE20($fp)
    ctx->pc = 0x11fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3616), GPR_U32(ctx, 0));
    // 0x11fa90: 0xafc00e1c  sw          $zero, 0xE1C($fp)
    ctx->pc = 0x11fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3612), GPR_U32(ctx, 0));
    // 0x11fa94: 0xafc00e14  sw          $zero, 0xE14($fp)
    ctx->pc = 0x11fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3604), GPR_U32(ctx, 0));
    // 0x11fa98: 0xade00004  sw          $zero, 0x4($t7)
    ctx->pc = 0x11fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 0));
    // 0x11fa9c: 0xade00008  sw          $zero, 0x8($t7)
    ctx->pc = 0x11fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 0));
    // 0x11faa0: 0xe7d50e24  swc1        $f21, 0xE24($fp)
    ctx->pc = 0x11faa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3620), bits); }
    // 0x11faa4: 0xafc00c50  sw          $zero, 0xC50($fp)
    ctx->pc = 0x11faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3152), GPR_U32(ctx, 0));
    // 0x11faa8: 0xafc00dec  sw          $zero, 0xDEC($fp)
    ctx->pc = 0x11faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3564), GPR_U32(ctx, 0));
    // 0x11faac: 0xafc00c00  sw          $zero, 0xC00($fp)
    ctx->pc = 0x11faacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3072), GPR_U32(ctx, 0));
    // 0x11fab0: 0xafc00d18  sw          $zero, 0xD18($fp)
    ctx->pc = 0x11fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3352), GPR_U32(ctx, 0));
    // 0x11fab4: 0xafc00cd4  sw          $zero, 0xCD4($fp)
    ctx->pc = 0x11fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3284), GPR_U32(ctx, 0));
    // 0x11fab8: 0xafc00c9c  sw          $zero, 0xC9C($fp)
    ctx->pc = 0x11fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3228), GPR_U32(ctx, 0));
    // 0x11fabc: 0xafc00e60  sw          $zero, 0xE60($fp)
    ctx->pc = 0x11fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3680), GPR_U32(ctx, 0));
    // 0x11fac0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x11fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x11fac4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x11fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x11fac8: 0xafc00cb0  sw          $zero, 0xCB0($fp)
    ctx->pc = 0x11fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3248), GPR_U32(ctx, 0));
    // 0x11facc: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x11faccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x11fad0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x11fad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x11fad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fad8: 0xafc00cd0  sw          $zero, 0xCD0($fp)
    ctx->pc = 0x11fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3280), GPR_U32(ctx, 0));
    // 0x11fadc: 0xafd00cdc  sw          $s0, 0xCDC($fp)
    ctx->pc = 0x11fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3292), GPR_U32(ctx, 16));
    // 0x11fae0: 0xe7d50f5c  swc1        $f21, 0xF5C($fp)
    ctx->pc = 0x11fae0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3932), bits); }
    // 0x11fae4: 0xe7d50f60  swc1        $f21, 0xF60($fp)
    ctx->pc = 0x11fae4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3936), bits); }
    // 0x11fae8: 0xafc00be0  sw          $zero, 0xBE0($fp)
    ctx->pc = 0x11fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3040), GPR_U32(ctx, 0));
    // 0x11faec: 0xafc00be4  sw          $zero, 0xBE4($fp)
    ctx->pc = 0x11faecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3044), GPR_U32(ctx, 0));
    // 0x11faf0: 0xafc00be8  sw          $zero, 0xBE8($fp)
    ctx->pc = 0x11faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3048), GPR_U32(ctx, 0));
    // 0x11faf4: 0xafc00bec  sw          $zero, 0xBEC($fp)
    ctx->pc = 0x11faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3052), GPR_U32(ctx, 0));
    // 0x11faf8: 0xafc00bc4  sw          $zero, 0xBC4($fp)
    ctx->pc = 0x11faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3012), GPR_U32(ctx, 0));
    // 0x11fafc: 0xafc00bc0  sw          $zero, 0xBC0($fp)
    ctx->pc = 0x11fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3008), GPR_U32(ctx, 0));
    // 0x11fb00: 0xafc014b4  sw          $zero, 0x14B4($fp)
    ctx->pc = 0x11fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5300), GPR_U32(ctx, 0));
    // 0x11fb04: 0xafc00f64  sw          $zero, 0xF64($fp)
    ctx->pc = 0x11fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3940), GPR_U32(ctx, 0));
    // 0x11fb08: 0xafc00f68  sw          $zero, 0xF68($fp)
    ctx->pc = 0x11fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3944), GPR_U32(ctx, 0));
    // 0x11fb0c: 0xe7c00bdc  swc1        $f0, 0xBDC($fp)
    ctx->pc = 0x11fb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3036), bits); }
    // 0x11fb10: 0xe7c00bd8  swc1        $f0, 0xBD8($fp)
    ctx->pc = 0x11fb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3032), bits); }
    // 0x11fb14: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FB14u;
    SET_GPR_U32(ctx, 31, 0x11FB1Cu);
    ctx->pc = 0x11FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB14u;
    // 0x11fb18: 0xafc20ca8  sw          $v0, 0xCA8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 3240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FB14u, 0x11FB1Cu)) {
        return;
    }
    ctx->pc = 0x11FB1Cu;
label_11fb1c:
    // 0x11fb1c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x11fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x11fb20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb24: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x11fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x11fb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb2c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FB2Cu;
    SET_GPR_U32(ctx, 31, 0x11FB34u);
    ctx->pc = 0x11FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB2Cu;
    // 0x11fb30: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FB2Cu, 0x11FB34u)) {
        return;
    }
    ctx->pc = 0x11FB34u;
label_11fb34:
    // 0x11fb34: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x11fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x11fb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb3c: 0x24a586c8  addiu       $a1, $a1, -0x7938
    ctx->pc = 0x11fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    // 0x11fb40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb44: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FB44u;
    SET_GPR_U32(ctx, 31, 0x11FB4Cu);
    ctx->pc = 0x11FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB44u;
    // 0x11fb48: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FB44u, 0x11FB4Cu)) {
        return;
    }
    ctx->pc = 0x11FB4Cu;
label_11fb4c:
    // 0x11fb4c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x11fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x11fb50: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x11fb50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11fb54: 0x24a586d0  addiu       $a1, $a1, -0x7930
    ctx->pc = 0x11fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    // 0x11fb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb5c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FB5Cu;
    SET_GPR_U32(ctx, 31, 0x11FB64u);
    ctx->pc = 0x11FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB5Cu;
    // 0x11fb60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FB5Cu, 0x11FB64u)) {
        return;
    }
    ctx->pc = 0x11FB64u;
label_11fb64:
    // 0x11fb64: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11fb68: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11fb6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11fb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb70: 0x24a5bbc0  addiu       $a1, $a1, -0x4440
    ctx->pc = 0x11fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949824));
    // 0x11fb74: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x11FB74u;
    SET_GPR_U32(ctx, 31, 0x11FB7Cu);
    ctx->pc = 0x11FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB74u;
    // 0x11fb78: 0x24c6bbd0  addiu       $a2, $a2, -0x4430 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x11FB74u, 0x11FB7Cu)) {
        return;
    }
    ctx->pc = 0x11FB7Cu;
label_11fb7c:
    // 0x11fb7c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x11fb7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11fb80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11fb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb88: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FB88u;
    SET_GPR_U32(ctx, 31, 0x11FB90u);
    ctx->pc = 0x11FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB88u;
    // 0x11fb8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FB88u, 0x11FB90u)) {
        return;
    }
    ctx->pc = 0x11FB90u;
label_11fb90:
    // 0x11fb90: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x11fb90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x11fb94: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11fb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11fb98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11fb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11fb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fba0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x11FBA0u;
    SET_GPR_U32(ctx, 31, 0x11FBA8u);
    ctx->pc = 0x11FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBA0u;
    // 0x11fba4: 0x3c140069  lui         $s4, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11FBA0u, 0x11FBA8u)) {
        return;
    }
    ctx->pc = 0x11FBA8u;
label_11fba8:
    // 0x11fba8: 0xafc00ea8  sw          $zero, 0xEA8($fp)
    ctx->pc = 0x11fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3752), GPR_U32(ctx, 0));
    // 0x11fbac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11fbacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11fbb0: 0xafc00e10  sw          $zero, 0xE10($fp)
    ctx->pc = 0x11fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3600), GPR_U32(ctx, 0));
    // 0x11fbb4: 0x24a5bbd8  addiu       $a1, $a1, -0x4428
    ctx->pc = 0x11fbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949848));
    // 0x11fbb8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fbbc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x11fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x11fbc0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x11fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x11fbc4: 0xafc00e00  sw          $zero, 0xE00($fp)
    ctx->pc = 0x11fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3584), GPR_U32(ctx, 0));
    // 0x11fbc8: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x11fbc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x11fbcc: 0xafd00f34  sw          $s0, 0xF34($fp)
    ctx->pc = 0x11fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3892), GPR_U32(ctx, 16));
    // 0x11fbd0: 0xc7d40e00  lwc1        $f20, 0xE00($fp)
    ctx->pc = 0x11fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 3584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11fbd4: 0xe7d50e08  swc1        $f21, 0xE08($fp)
    ctx->pc = 0x11fbd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3592), bits); }
    // 0x11fbd8: 0xafd00ca4  sw          $s0, 0xCA4($fp)
    ctx->pc = 0x11fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3236), GPR_U32(ctx, 16));
    // 0x11fbdc: 0xe7d40f48  swc1        $f20, 0xF48($fp)
    ctx->pc = 0x11fbdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3912), bits); }
    // 0x11fbe0: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x11fbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x11fbe4: 0xe7d40f44  swc1        $f20, 0xF44($fp)
    ctx->pc = 0x11fbe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3908), bits); }
    // 0x11fbe8: 0xe7d40f40  swc1        $f20, 0xF40($fp)
    ctx->pc = 0x11fbe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3904), bits); }
    // 0x11fbec: 0xafc00eb8  sw          $zero, 0xEB8($fp)
    ctx->pc = 0x11fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3768), GPR_U32(ctx, 0));
    // 0x11fbf0: 0xafc00ebc  sw          $zero, 0xEBC($fp)
    ctx->pc = 0x11fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3772), GPR_U32(ctx, 0));
    // 0x11fbf4: 0xafc00ec0  sw          $zero, 0xEC0($fp)
    ctx->pc = 0x11fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3776), GPR_U32(ctx, 0));
    // 0x11fbf8: 0xafc00ec4  sw          $zero, 0xEC4($fp)
    ctx->pc = 0x11fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3780), GPR_U32(ctx, 0));
    // 0x11fbfc: 0xafc00f6c  sw          $zero, 0xF6C($fp)
    ctx->pc = 0x11fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3948), GPR_U32(ctx, 0));
    // 0x11fc00: 0xafc00bbc  sw          $zero, 0xBBC($fp)
    ctx->pc = 0x11fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3004), GPR_U32(ctx, 0));
    // 0x11fc04: 0xafc00f80  sw          $zero, 0xF80($fp)
    ctx->pc = 0x11fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3968), GPR_U32(ctx, 0));
    // 0x11fc08: 0xafc00f30  sw          $zero, 0xF30($fp)
    ctx->pc = 0x11fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3888), GPR_U32(ctx, 0));
    // 0x11fc0c: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x11FC0Cu;
    SET_GPR_U32(ctx, 31, 0x11FC14u);
    ctx->pc = 0x11FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC0Cu;
    // 0x11fc10: 0xafc00f50  sw          $zero, 0xF50($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 3920), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x11FC0Cu, 0x11FC14u)) {
        return;
    }
    ctx->pc = 0x11FC14u;
label_11fc14:
    // 0x11fc14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11fc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc18: 0xc043c72  jal         func_10F1C8
    ctx->pc = 0x11FC18u;
    SET_GPR_U32(ctx, 31, 0x11FC20u);
    ctx->pc = 0x11FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC18u;
    // 0x11fc1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1C8u, 0x11FC18u, 0x11FC20u)) {
        return;
    }
    ctx->pc = 0x11FC20u;
label_11fc20:
    // 0x11fc20: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x11fc20u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x11fc24: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11fc28: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11fc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11fc2c: 0x2459bc90  addiu       $t9, $v0, -0x4370
    ctx->pc = 0x11fc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950032));
    // 0x11fc30: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11fc34: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11fc38: 0x3c180069  lui         $t8, 0x69
    ctx->pc = 0x11fc38u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)105 << 16));
    // 0x11fc3c: 0x3c0f0069  lui         $t7, 0x69
    ctx->pc = 0x11fc3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)105 << 16));
    // 0x11fc40: 0x3c0e0069  lui         $t6, 0x69
    ctx->pc = 0x11fc40u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)105 << 16));
    // 0x11fc44: 0x3c0d0069  lui         $t5, 0x69
    ctx->pc = 0x11fc44u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)105 << 16));
    // 0x11fc48: 0x3c0c0069  lui         $t4, 0x69
    ctx->pc = 0x11fc48u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)105 << 16));
    // 0x11fc4c: 0x3c0b0069  lui         $t3, 0x69
    ctx->pc = 0x11fc4cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)105 << 16));
    // 0x11fc50: 0x3c0a0069  lui         $t2, 0x69
    ctx->pc = 0x11fc50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)105 << 16));
    // 0x11fc54: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x11fc54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x11fc58: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x11fc58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x11fc5c: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x11fc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x11fc60: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11fc64: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11fc68: 0x2718bc28  addiu       $t8, $t8, -0x43D8
    ctx->pc = 0x11fc68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294949928));
    // 0x11fc6c: 0x25efbcb0  addiu       $t7, $t7, -0x4350
    ctx->pc = 0x11fc6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950064));
    // 0x11fc70: 0x25cebcc0  addiu       $t6, $t6, -0x4340
    ctx->pc = 0x11fc70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950080));
    // 0x11fc74: 0x25adbcd0  addiu       $t5, $t5, -0x4330
    ctx->pc = 0x11fc74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294950096));
    // 0x11fc78: 0x258cbcd8  addiu       $t4, $t4, -0x4328
    ctx->pc = 0x11fc78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294950104));
    // 0x11fc7c: 0x256bbce8  addiu       $t3, $t3, -0x4318
    ctx->pc = 0x11fc7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294950120));
    // 0x11fc80: 0x254abd08  addiu       $t2, $t2, -0x42F8
    ctx->pc = 0x11fc80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294950152));
    // 0x11fc84: 0x2529bd28  addiu       $t1, $t1, -0x42D8
    ctx->pc = 0x11fc84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294950184));
    // 0x11fc88: 0x2508bd38  addiu       $t0, $t0, -0x42C8
    ctx->pc = 0x11fc88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950200));
    // 0x11fc8c: 0x2463bd58  addiu       $v1, $v1, -0x42A8
    ctx->pc = 0x11fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950232));
    // 0x11fc90: 0x2442bd68  addiu       $v0, $v0, -0x4298
    ctx->pc = 0x11fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950248));
    // 0x11fc94: 0x24e7bd48  addiu       $a3, $a3, -0x42B8
    ctx->pc = 0x11fc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950216));
    // 0x11fc98: 0x24a5bbe8  addiu       $a1, $a1, -0x4418
    ctx->pc = 0x11fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949864));
    // 0x11fc9c: 0x2484bbf8  addiu       $a0, $a0, -0x4408
    ctx->pc = 0x11fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949880));
    // 0x11fca0: 0x24c6bc08  addiu       $a2, $a2, -0x43F8
    ctx->pc = 0x11fca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949896));
    // 0x11fca4: 0x26f7bc18  addiu       $s7, $s7, -0x43E8
    ctx->pc = 0x11fca4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949912));
    // 0x11fca8: 0x26d6bc38  addiu       $s6, $s6, -0x43C8
    ctx->pc = 0x11fca8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949944));
    // 0x11fcac: 0x26b5bc50  addiu       $s5, $s5, -0x43B0
    ctx->pc = 0x11fcacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949968));
    // 0x11fcb0: 0x2694bc60  addiu       $s4, $s4, -0x43A0
    ctx->pc = 0x11fcb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949984));
    // 0x11fcb4: 0x2673bc70  addiu       $s3, $s3, -0x4390
    ctx->pc = 0x11fcb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950000));
    // 0x11fcb8: 0x2652bc80  addiu       $s2, $s2, -0x4380
    ctx->pc = 0x11fcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950016));
    // 0x11fcbc: 0x2610bca0  addiu       $s0, $s0, -0x4360
    ctx->pc = 0x11fcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950048));
    // 0x11fcc0: 0xafd80d3c  sw          $t8, 0xD3C($fp)
    ctx->pc = 0x11fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3388), GPR_U32(ctx, 24));
    // 0x11fcc4: 0xafd90d6c  sw          $t9, 0xD6C($fp)
    ctx->pc = 0x11fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3436), GPR_U32(ctx, 25));
    // 0x11fcc8: 0xafcf0d7c  sw          $t7, 0xD7C($fp)
    ctx->pc = 0x11fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3452), GPR_U32(ctx, 15));
    // 0x11fccc: 0xafce0d84  sw          $t6, 0xD84($fp)
    ctx->pc = 0x11fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3460), GPR_U32(ctx, 14));
    // 0x11fcd0: 0xafcd0d8c  sw          $t5, 0xD8C($fp)
    ctx->pc = 0x11fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3468), GPR_U32(ctx, 13));
    // 0x11fcd4: 0xafcc0d94  sw          $t4, 0xD94($fp)
    ctx->pc = 0x11fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3476), GPR_U32(ctx, 12));
    // 0x11fcd8: 0xafcb0d9c  sw          $t3, 0xD9C($fp)
    ctx->pc = 0x11fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3484), GPR_U32(ctx, 11));
    // 0x11fcdc: 0xafca0da4  sw          $t2, 0xDA4($fp)
    ctx->pc = 0x11fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3492), GPR_U32(ctx, 10));
    // 0x11fce0: 0xafc90dac  sw          $t1, 0xDAC($fp)
    ctx->pc = 0x11fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3500), GPR_U32(ctx, 9));
    // 0x11fce4: 0xafc80db4  sw          $t0, 0xDB4($fp)
    ctx->pc = 0x11fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3508), GPR_U32(ctx, 8));
    // 0x11fce8: 0xafc30dc4  sw          $v1, 0xDC4($fp)
    ctx->pc = 0x11fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3524), GPR_U32(ctx, 3));
    // 0x11fcec: 0xafc20dcc  sw          $v0, 0xDCC($fp)
    ctx->pc = 0x11fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3532), GPR_U32(ctx, 2));
    // 0x11fcf0: 0xafc70dbc  sw          $a3, 0xDBC($fp)
    ctx->pc = 0x11fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3516), GPR_U32(ctx, 7));
    // 0x11fcf4: 0xafc50d1c  sw          $a1, 0xD1C($fp)
    ctx->pc = 0x11fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3356), GPR_U32(ctx, 5));
    // 0x11fcf8: 0xafc40d24  sw          $a0, 0xD24($fp)
    ctx->pc = 0x11fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3364), GPR_U32(ctx, 4));
    // 0x11fcfc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11fd00: 0xafc60d2c  sw          $a2, 0xD2C($fp)
    ctx->pc = 0x11fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3372), GPR_U32(ctx, 6));
    // 0x11fd04: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11fd08: 0xafd70d34  sw          $s7, 0xD34($fp)
    ctx->pc = 0x11fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3380), GPR_U32(ctx, 23));
    // 0x11fd0c: 0x248445f8  addiu       $a0, $a0, 0x45F8
    ctx->pc = 0x11fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17912));
    // 0x11fd10: 0xafd60d44  sw          $s6, 0xD44($fp)
    ctx->pc = 0x11fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3396), GPR_U32(ctx, 22));
    // 0x11fd14: 0x24a5bd78  addiu       $a1, $a1, -0x4288
    ctx->pc = 0x11fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950264));
    // 0x11fd18: 0xafd50d4c  sw          $s5, 0xD4C($fp)
    ctx->pc = 0x11fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3404), GPR_U32(ctx, 21));
    // 0x11fd1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd20: 0xafd40d54  sw          $s4, 0xD54($fp)
    ctx->pc = 0x11fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3412), GPR_U32(ctx, 20));
    // 0x11fd24: 0xafd30d5c  sw          $s3, 0xD5C($fp)
    ctx->pc = 0x11fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3420), GPR_U32(ctx, 19));
    // 0x11fd28: 0xafd20d64  sw          $s2, 0xD64($fp)
    ctx->pc = 0x11fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3428), GPR_U32(ctx, 18));
    // 0x11fd2c: 0xafd00d74  sw          $s0, 0xD74($fp)
    ctx->pc = 0x11fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3444), GPR_U32(ctx, 16));
    // 0x11fd30: 0xe7d40d14  swc1        $f20, 0xD14($fp)
    ctx->pc = 0x11fd30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3348), bits); }
    // 0x11fd34: 0xe7d40ef8  swc1        $f20, 0xEF8($fp)
    ctx->pc = 0x11fd34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3832), bits); }
    // 0x11fd38: 0xe7d40ef4  swc1        $f20, 0xEF4($fp)
    ctx->pc = 0x11fd38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3828), bits); }
    // 0x11fd3c: 0xe7d40ef0  swc1        $f20, 0xEF0($fp)
    ctx->pc = 0x11fd3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3824), bits); }
    // 0x11fd40: 0xe7d40efc  swc1        $f20, 0xEFC($fp)
    ctx->pc = 0x11fd40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3836), bits); }
    // 0x11fd44: 0xafc00ca0  sw          $zero, 0xCA0($fp)
    ctx->pc = 0x11fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3232), GPR_U32(ctx, 0));
    // 0x11fd48: 0xafc00ddc  sw          $zero, 0xDDC($fp)
    ctx->pc = 0x11fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3548), GPR_U32(ctx, 0));
    // 0x11fd4c: 0xafc00de0  sw          $zero, 0xDE0($fp)
    ctx->pc = 0x11fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3552), GPR_U32(ctx, 0));
    // 0x11fd50: 0xafc00de4  sw          $zero, 0xDE4($fp)
    ctx->pc = 0x11fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3556), GPR_U32(ctx, 0));
    // 0x11fd54: 0xafc00de8  sw          $zero, 0xDE8($fp)
    ctx->pc = 0x11fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3560), GPR_U32(ctx, 0));
    // 0x11fd58: 0xafc00f70  sw          $zero, 0xF70($fp)
    ctx->pc = 0x11fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3952), GPR_U32(ctx, 0));
    // 0x11fd5c: 0xe7d40eb4  swc1        $f20, 0xEB4($fp)
    ctx->pc = 0x11fd5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3764), bits); }
    // 0x11fd60: 0xafc00f74  sw          $zero, 0xF74($fp)
    ctx->pc = 0x11fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3956), GPR_U32(ctx, 0));
    // 0x11fd64: 0xafc00eac  sw          $zero, 0xEAC($fp)
    ctx->pc = 0x11fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3756), GPR_U32(ctx, 0));
    // 0x11fd68: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x11FD68u;
    SET_GPR_U32(ctx, 31, 0x11FD70u);
    ctx->pc = 0x11FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD68u;
    // 0x11fd6c: 0xafc00bc8  sw          $zero, 0xBC8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 3016), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x11FD68u, 0x11FD70u)) {
        return;
    }
    ctx->pc = 0x11FD70u;
label_11fd70:
    // 0x11fd70: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11fd74: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11fd78: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11fd78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11fd7c: 0x24844600  addiu       $a0, $a0, 0x4600
    ctx->pc = 0x11fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x11fd80: 0x24a5bd88  addiu       $a1, $a1, -0x4278
    ctx->pc = 0x11fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950280));
    // 0x11fd84: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x11FD84u;
    SET_GPR_U32(ctx, 31, 0x11FD8Cu);
    ctx->pc = 0x11FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD84u;
    // 0x11fd88: 0x24c6bd98  addiu       $a2, $a2, -0x4268 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x11FD84u, 0x11FD8Cu)) {
        return;
    }
    ctx->pc = 0x11FD8Cu;
label_11fd8c:
    // 0x11fd8c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11fd90: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11fd94: 0x24a5bdb0  addiu       $a1, $a1, -0x4250
    ctx->pc = 0x11fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950320));
    // 0x11fd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd9c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x11FD9Cu;
    SET_GPR_U32(ctx, 31, 0x11FDA4u);
    ctx->pc = 0x11FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD9Cu;
    // 0x11fda0: 0x24844608  addiu       $a0, $a0, 0x4608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x11FD9Cu, 0x11FDA4u)) {
        return;
    }
    ctx->pc = 0x11FDA4u;
label_11fda4:
    // 0x11fda4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11fda8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11fda8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11fdac: 0x24a5bdc0  addiu       $a1, $a1, -0x4240
    ctx->pc = 0x11fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950336));
    // 0x11fdb0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11fdb4: 0x24844610  addiu       $a0, $a0, 0x4610
    ctx->pc = 0x11fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17936));
    // 0x11fdb8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x11FDB8u;
    SET_GPR_U32(ctx, 31, 0x11FDC0u);
    ctx->pc = 0x11FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDB8u;
    // 0x11fdbc: 0x24c6bdd0  addiu       $a2, $a2, -0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x11FDB8u, 0x11FDC0u)) {
        return;
    }
    ctx->pc = 0x11FDC0u;
label_11fdc0:
    // 0x11fdc0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11fdc4: 0x24a54610  addiu       $a1, $a1, 0x4610
    ctx->pc = 0x11fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17936));
    // 0x11fdc8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x11fdc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11fdcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdd0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FDD0u;
    SET_GPR_U32(ctx, 31, 0x11FDD8u);
    ctx->pc = 0x11FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDD0u;
    // 0x11fdd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FDD0u, 0x11FDD8u)) {
        return;
    }
    ctx->pc = 0x11FDD8u;
label_11fdd8:
    // 0x11fdd8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11fddc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11fde0: 0x24a5bde8  addiu       $a1, $a1, -0x4218
    ctx->pc = 0x11fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950376));
    // 0x11fde4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11fde8: 0x24844618  addiu       $a0, $a0, 0x4618
    ctx->pc = 0x11fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17944));
    // 0x11fdec: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x11FDECu;
    SET_GPR_U32(ctx, 31, 0x11FDF4u);
    ctx->pc = 0x11FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDECu;
    // 0x11fdf0: 0x24c6be00  addiu       $a2, $a2, -0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x11FDECu, 0x11FDF4u)) {
        return;
    }
    ctx->pc = 0x11FDF4u;
label_11fdf4:
    // 0x11fdf4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11fdf8: 0x24a54618  addiu       $a1, $a1, 0x4618
    ctx->pc = 0x11fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17944));
    // 0x11fdfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe00: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x11fe00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11fe04: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FE04u;
    SET_GPR_U32(ctx, 31, 0x11FE0Cu);
    ctx->pc = 0x11FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE04u;
    // 0x11fe08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FE04u, 0x11FE0Cu)) {
        return;
    }
    ctx->pc = 0x11FE0Cu;
label_11fe0c:
    // 0x11fe0c: 0xc050418  jal         func_141060
    ctx->pc = 0x11FE0Cu;
    SET_GPR_U32(ctx, 31, 0x11FE14u);
    ctx->pc = 0x11FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE0Cu;
    // 0x11fe10: 0x8fc400c4  lw          $a0, 0xC4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141060u, 0x11FE0Cu, 0x11FE14u)) {
        return;
    }
    ctx->pc = 0x11FE14u;
label_11fe14:
    // 0x11fe14: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x11fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x11fe18: 0xafc20f6c  sw          $v0, 0xF6C($fp)
    ctx->pc = 0x11fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3948), GPR_U32(ctx, 2));
    // 0x11fe1c: 0x24a5bcf0  addiu       $a1, $a1, -0x4310
    ctx->pc = 0x11fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950128));
    // 0x11fe20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe24: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11fe24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11fe28: 0x24c6be08  addiu       $a2, $a2, -0x41F8
    ctx->pc = 0x11fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950408));
    // 0x11fe2c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FE2Cu;
    SET_GPR_U32(ctx, 31, 0x11FE34u);
    ctx->pc = 0x11FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE2Cu;
    // 0x11fe30: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FE2Cu, 0x11FE34u)) {
        return;
    }
    ctx->pc = 0x11FE34u;
label_11fe34:
    // 0x11fe34: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x11fe34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x11fe38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe3c: 0x24a5bcf8  addiu       $a1, $a1, -0x4308
    ctx->pc = 0x11fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950136));
    // 0x11fe40: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11fe44: 0x24c6be08  addiu       $a2, $a2, -0x41F8
    ctx->pc = 0x11fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950408));
    // 0x11fe48: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FE48u;
    SET_GPR_U32(ctx, 31, 0x11FE50u);
    ctx->pc = 0x11FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE48u;
    // 0x11fe4c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FE48u, 0x11FE50u)) {
        return;
    }
    ctx->pc = 0x11FE50u;
label_11fe50:
    // 0x11fe50: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x11fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x11fe54: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x11fe54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11fe58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fe58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe60: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11FE60u;
    SET_GPR_U32(ctx, 31, 0x11FE68u);
    ctx->pc = 0x11FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE60u;
    // 0x11fe64: 0x24a5bd00  addiu       $a1, $a1, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11FE60u, 0x11FE68u)) {
        return;
    }
    ctx->pc = 0x11FE68u;
label_11fe68:
    // 0x11fe68: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11fe6c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x11fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11fe70: 0xc0544d8  jal         func_151360
    ctx->pc = 0x11FE70u;
    SET_GPR_U32(ctx, 31, 0x11FE78u);
    ctx->pc = 0x11FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE70u;
    // 0x11fe74: 0x8c4484fc  lw          $a0, -0x7B04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151360u, 0x11FE70u, 0x11FE78u)) {
        return;
    }
    ctx->pc = 0x11FE78u;
label_11fe78:
    // 0x11fe78: 0xc080858  jal         func_202160
    ctx->pc = 0x11FE78u;
    SET_GPR_U32(ctx, 31, 0x11FE80u);
    ctx->pc = 0x11FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE78u;
    // 0x11fe7c: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x11FE78u, 0x11FE80u)) {
        return;
    }
    ctx->pc = 0x11FE80u;
label_11fe80:
    // 0x11fe80: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fe84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fe84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe88: 0xc0597bc  jal         func_165EF0
    ctx->pc = 0x11FE88u;
    SET_GPR_U32(ctx, 31, 0x11FE90u);
    ctx->pc = 0x11FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE88u;
    // 0x11fe8c: 0x8fc600c4  lw          $a2, 0xC4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165EF0u, 0x11FE88u, 0x11FE90u)) {
        return;
    }
    ctx->pc = 0x11FE90u;
label_11fe90:
    // 0x11fe90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe94: 0xafc20eac  sw          $v0, 0xEAC($fp)
    ctx->pc = 0x11fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3756), GPR_U32(ctx, 2));
    // 0x11fe98: 0xc059cca  jal         func_167328
    ctx->pc = 0x11FE98u;
    SET_GPR_U32(ctx, 31, 0x11FEA0u);
    ctx->pc = 0x11FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE98u;
    // 0x11fe9c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x167328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167328u, 0x11FE98u, 0x11FEA0u)) {
        return;
    }
    ctx->pc = 0x11FEA0u;
label_11fea0:
    // 0x11fea0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x11fea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x11fea4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x11fea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x11fea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11fea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11feac: 0x8fc40eac  lw          $a0, 0xEAC($fp)
    ctx->pc = 0x11feacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3756)));
    // 0x11feb0: 0xc059cbc  jal         func_1672F0
    ctx->pc = 0x11FEB0u;
    SET_GPR_U32(ctx, 31, 0x11FEB8u);
    ctx->pc = 0x11FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEB0u;
    // 0x11feb4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1672F0u, 0x11FEB0u, 0x11FEB8u)) {
        return;
    }
    ctx->pc = 0x11FEB8u;
label_11feb8:
    // 0x11feb8: 0xafc0144c  sw          $zero, 0x144C($fp)
    ctx->pc = 0x11feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5196), GPR_U32(ctx, 0));
    // 0x11febc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11febcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fec0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x11fec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11fec4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x11fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11fec8: 0xafc01450  sw          $zero, 0x1450($fp)
    ctx->pc = 0x11fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5200), GPR_U32(ctx, 0));
    // 0x11fecc: 0xafc01454  sw          $zero, 0x1454($fp)
    ctx->pc = 0x11feccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5204), GPR_U32(ctx, 0));
    // 0x11fed0: 0xafc01458  sw          $zero, 0x1458($fp)
    ctx->pc = 0x11fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5208), GPR_U32(ctx, 0));
    // 0x11fed4: 0xafc0145c  sw          $zero, 0x145C($fp)
    ctx->pc = 0x11fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5212), GPR_U32(ctx, 0));
    // 0x11fed8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x11FED8u;
    SET_GPR_U32(ctx, 31, 0x11FEE0u);
    ctx->pc = 0x11FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FED8u;
    // 0x11fedc: 0xafc014b0  sw          $zero, 0x14B0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 5296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11FED8u, 0x11FEE0u)) {
        return;
    }
    ctx->pc = 0x11FEE0u;
label_11fee0:
    // 0x11fee0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x11fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11fee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11fee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fee8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x11FEE8u;
    SET_GPR_U32(ctx, 31, 0x11FEF0u);
    ctx->pc = 0x11FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEE8u;
    // 0x11feec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11FEE8u, 0x11FEF0u)) {
        return;
    }
    ctx->pc = 0x11FEF0u;
label_11fef0:
    // 0x11fef0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x11fef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fef4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x11fef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11fef8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x11fef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11fefc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x11fefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ff00: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x11ff00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ff04: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x11ff04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ff08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11ff08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ff0c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x11ff0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ff10: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x11ff10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ff14: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x11ff14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ff18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ff18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ff1c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x11ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11ff20: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x11ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ff24: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF24u;
        // 0x11ff28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF2Cu;
    // 0x11ff2c: 0x0  nop
    ctx->pc = 0x11ff2cu;
    // NOP
    ctx->pc = 0x11ff30u;
}
