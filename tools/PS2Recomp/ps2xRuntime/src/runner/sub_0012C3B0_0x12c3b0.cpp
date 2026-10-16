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

// Function: sub_0012C3B0
// Address: 0x12c3b0 - 0x12d250
void sub_0012C3B0_0x12c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C3B0_0x12c3b0");
#endif

    switch (ctx->pc) {
        case 0x12c408u: goto label_12c408;
        case 0x12c44cu: goto label_12c44c;
        case 0x12c45cu: goto label_12c45c;
        case 0x12c46cu: goto label_12c46c;
        case 0x12c560u: goto label_12c560;
        case 0x12c56cu: goto label_12c56c;
        case 0x12c58cu: goto label_12c58c;
        case 0x12c5a4u: goto label_12c5a4;
        case 0x12c5b4u: goto label_12c5b4;
        case 0x12c5c4u: goto label_12c5c4;
        case 0x12c5d4u: goto label_12c5d4;
        case 0x12c5f4u: goto label_12c5f4;
        case 0x12c618u: goto label_12c618;
        case 0x12c644u: goto label_12c644;
        case 0x12c670u: goto label_12c670;
        case 0x12c684u: goto label_12c684;
        case 0x12c698u: goto label_12c698;
        case 0x12c6b0u: goto label_12c6b0;
        case 0x12c6c8u: goto label_12c6c8;
        case 0x12c6e4u: goto label_12c6e4;
        case 0x12c6fcu: goto label_12c6fc;
        case 0x12c714u: goto label_12c714;
        case 0x12c72cu: goto label_12c72c;
        case 0x12c744u: goto label_12c744;
        case 0x12c75cu: goto label_12c75c;
        case 0x12c774u: goto label_12c774;
        case 0x12c78cu: goto label_12c78c;
        case 0x12c7a4u: goto label_12c7a4;
        case 0x12c7bcu: goto label_12c7bc;
        case 0x12c7d4u: goto label_12c7d4;
        case 0x12c7ecu: goto label_12c7ec;
        case 0x12c804u: goto label_12c804;
        case 0x12c81cu: goto label_12c81c;
        case 0x12c834u: goto label_12c834;
        case 0x12c84cu: goto label_12c84c;
        case 0x12c864u: goto label_12c864;
        case 0x12c87cu: goto label_12c87c;
        case 0x12c894u: goto label_12c894;
        case 0x12c8acu: goto label_12c8ac;
        case 0x12c8c4u: goto label_12c8c4;
        case 0x12c8dcu: goto label_12c8dc;
        case 0x12c8f8u: goto label_12c8f8;
        case 0x12c90cu: goto label_12c90c;
        case 0x12c924u: goto label_12c924;
        case 0x12c93cu: goto label_12c93c;
        case 0x12c954u: goto label_12c954;
        case 0x12c96cu: goto label_12c96c;
        case 0x12c988u: goto label_12c988;
        case 0x12c9a0u: goto label_12c9a0;
        case 0x12c9b8u: goto label_12c9b8;
        case 0x12c9d0u: goto label_12c9d0;
        case 0x12c9e8u: goto label_12c9e8;
        case 0x12ca00u: goto label_12ca00;
        case 0x12ca18u: goto label_12ca18;
        case 0x12ca30u: goto label_12ca30;
        case 0x12ca48u: goto label_12ca48;
        case 0x12ca60u: goto label_12ca60;
        case 0x12ca78u: goto label_12ca78;
        case 0x12ca90u: goto label_12ca90;
        case 0x12caa8u: goto label_12caa8;
        case 0x12cac0u: goto label_12cac0;
        case 0x12cad8u: goto label_12cad8;
        case 0x12caf0u: goto label_12caf0;
        case 0x12cb08u: goto label_12cb08;
        case 0x12cb20u: goto label_12cb20;
        case 0x12cb38u: goto label_12cb38;
        case 0x12cb50u: goto label_12cb50;
        case 0x12cb68u: goto label_12cb68;
        case 0x12cb80u: goto label_12cb80;
        case 0x12cb98u: goto label_12cb98;
        case 0x12cbb0u: goto label_12cbb0;
        case 0x12cbc4u: goto label_12cbc4;
        case 0x12cbe0u: goto label_12cbe0;
        case 0x12cc58u: goto label_12cc58;
        case 0x12cc6cu: goto label_12cc6c;
        case 0x12cf20u: goto label_12cf20;
        case 0x12cf30u: goto label_12cf30;
        case 0x12cf54u: goto label_12cf54;
        case 0x12cf6cu: goto label_12cf6c;
        case 0x12cf8cu: goto label_12cf8c;
        case 0x12cfa4u: goto label_12cfa4;
        case 0x12cfbcu: goto label_12cfbc;
        case 0x12cfccu: goto label_12cfcc;
        case 0x12d104u: goto label_12d104;
        default: break;
    }

    ctx->pc = 0x12c3b0u;

    // 0x12c3b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x12c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x12c3b4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x12c3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x12c3b8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x12c3b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3bc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x12c3c0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12c3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x12c3c4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12c3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x12c3c8: 0x27d11630  addiu       $s1, $fp, 0x1630
    ctx->pc = 0x12c3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 5680));
    // 0x12c3cc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x12c3d0: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x12c3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12c3d4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x12c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x12c3d8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x12c3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c3dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12c3e0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x12c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x12c3e4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x12c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x12c3e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12c3ec: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x12c3ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x12c3f0: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x12c3f0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x12c3f4: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x12c3f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x12c3f8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x12c3f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x12c3fc: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x12c3fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x12c400: 0xc047dda  jal         func_11F768
    ctx->pc = 0x12C400u;
    SET_GPR_U32(ctx, 31, 0x12C408u);
    ctx->pc = 0x12C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C400u;
    // 0x12c404: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11F768u, 0x12C400u, 0x12C408u)) {
        return;
    }
    ctx->pc = 0x12C408u;
label_12c408:
    // 0x12c408: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x12c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x12c40c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x12c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x12c410: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c414: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12c414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12c418: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x12c418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x12c41c: 0x2463e008  addiu       $v1, $v1, -0x1FF8
    ctx->pc = 0x12c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959112));
    // 0x12c420: 0x24e7e148  addiu       $a3, $a3, -0x1EB8
    ctx->pc = 0x12c420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959432));
    // 0x12c424: 0x24a5dfc8  addiu       $a1, $a1, -0x2038
    ctx->pc = 0x12c424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959048));
    // 0x12c428: 0x24c6dfb0  addiu       $a2, $a2, -0x2050
    ctx->pc = 0x12c428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959024));
    // 0x12c42c: 0x2442e128  addiu       $v0, $v0, -0x1ED8
    ctx->pc = 0x12c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959400));
    // 0x12c430: 0xafc30048  sw          $v1, 0x48($fp)
    ctx->pc = 0x12c430u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 3));
    // 0x12c434: 0x27c414c4  addiu       $a0, $fp, 0x14C4
    ctx->pc = 0x12c434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5316));
    // 0x12c438: 0xafc70034  sw          $a3, 0x34($fp)
    ctx->pc = 0x12c438u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 7));
    // 0x12c43c: 0xafc50084  sw          $a1, 0x84($fp)
    ctx->pc = 0x12c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 5));
    // 0x12c440: 0xafc60314  sw          $a2, 0x314($fp)
    ctx->pc = 0x12c440u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 788), GPR_U32(ctx, 6));
    // 0x12c444: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12C444u;
    SET_GPR_U32(ctx, 31, 0x12C44Cu);
    ctx->pc = 0x12C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C444u;
    // 0x12c448: 0xafc2003c  sw          $v0, 0x3C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12C444u, 0x12C44Cu)) {
        return;
    }
    ctx->pc = 0x12C44Cu;
label_12c44c:
    // 0x12c44c: 0x27c41504  addiu       $a0, $fp, 0x1504
    ctx->pc = 0x12c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5380));
    // 0x12c450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c454: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x12C454u;
    SET_GPR_U32(ctx, 31, 0x12C45Cu);
    ctx->pc = 0x12C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C454u;
    // 0x12c458: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x12C454u, 0x12C45Cu)) {
        return;
    }
    ctx->pc = 0x12C45Cu;
label_12c45c:
    // 0x12c45c: 0x27c41514  addiu       $a0, $fp, 0x1514
    ctx->pc = 0x12c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5396));
    // 0x12c460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c464: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x12C464u;
    SET_GPR_U32(ctx, 31, 0x12C46Cu);
    ctx->pc = 0x12C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C464u;
    // 0x12c468: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x12C464u, 0x12C46Cu)) {
        return;
    }
    ctx->pc = 0x12C46Cu;
label_12c46c:
    // 0x12c46c: 0xafc01540  sw          $zero, 0x1540($fp)
    ctx->pc = 0x12c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5440), GPR_U32(ctx, 0));
    // 0x12c470: 0xafc01544  sw          $zero, 0x1544($fp)
    ctx->pc = 0x12c470u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5444), GPR_U32(ctx, 0));
    // 0x12c474: 0xafc01548  sw          $zero, 0x1548($fp)
    ctx->pc = 0x12c474u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5448), GPR_U32(ctx, 0));
    // 0x12c478: 0xafc0154c  sw          $zero, 0x154C($fp)
    ctx->pc = 0x12c478u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5452), GPR_U32(ctx, 0));
    // 0x12c47c: 0xafc01550  sw          $zero, 0x1550($fp)
    ctx->pc = 0x12c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5456), GPR_U32(ctx, 0));
    // 0x12c480: 0xafc01554  sw          $zero, 0x1554($fp)
    ctx->pc = 0x12c480u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5460), GPR_U32(ctx, 0));
    // 0x12c484: 0xafc01558  sw          $zero, 0x1558($fp)
    ctx->pc = 0x12c484u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5464), GPR_U32(ctx, 0));
    // 0x12c488: 0xafc0155c  sw          $zero, 0x155C($fp)
    ctx->pc = 0x12c488u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5468), GPR_U32(ctx, 0));
    // 0x12c48c: 0xafc01560  sw          $zero, 0x1560($fp)
    ctx->pc = 0x12c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5472), GPR_U32(ctx, 0));
    // 0x12c490: 0xafc01564  sw          $zero, 0x1564($fp)
    ctx->pc = 0x12c490u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5476), GPR_U32(ctx, 0));
    // 0x12c494: 0xafc01568  sw          $zero, 0x1568($fp)
    ctx->pc = 0x12c494u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5480), GPR_U32(ctx, 0));
    // 0x12c498: 0xafc0156c  sw          $zero, 0x156C($fp)
    ctx->pc = 0x12c498u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5484), GPR_U32(ctx, 0));
    // 0x12c49c: 0xafc01570  sw          $zero, 0x1570($fp)
    ctx->pc = 0x12c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5488), GPR_U32(ctx, 0));
    // 0x12c4a0: 0xafc01574  sw          $zero, 0x1574($fp)
    ctx->pc = 0x12c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5492), GPR_U32(ctx, 0));
    // 0x12c4a4: 0xafc01578  sw          $zero, 0x1578($fp)
    ctx->pc = 0x12c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5496), GPR_U32(ctx, 0));
    // 0x12c4a8: 0xafc0157c  sw          $zero, 0x157C($fp)
    ctx->pc = 0x12c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5500), GPR_U32(ctx, 0));
    // 0x12c4ac: 0xafc01580  sw          $zero, 0x1580($fp)
    ctx->pc = 0x12c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5504), GPR_U32(ctx, 0));
    // 0x12c4b0: 0xafc01584  sw          $zero, 0x1584($fp)
    ctx->pc = 0x12c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5508), GPR_U32(ctx, 0));
    // 0x12c4b4: 0xafc01588  sw          $zero, 0x1588($fp)
    ctx->pc = 0x12c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5512), GPR_U32(ctx, 0));
    // 0x12c4b8: 0xafc0158c  sw          $zero, 0x158C($fp)
    ctx->pc = 0x12c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5516), GPR_U32(ctx, 0));
    // 0x12c4bc: 0xafc01590  sw          $zero, 0x1590($fp)
    ctx->pc = 0x12c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5520), GPR_U32(ctx, 0));
    // 0x12c4c0: 0xafc01594  sw          $zero, 0x1594($fp)
    ctx->pc = 0x12c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5524), GPR_U32(ctx, 0));
    // 0x12c4c4: 0xafc01598  sw          $zero, 0x1598($fp)
    ctx->pc = 0x12c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5528), GPR_U32(ctx, 0));
    // 0x12c4c8: 0xafc0159c  sw          $zero, 0x159C($fp)
    ctx->pc = 0x12c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5532), GPR_U32(ctx, 0));
    // 0x12c4cc: 0xafc015a0  sw          $zero, 0x15A0($fp)
    ctx->pc = 0x12c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5536), GPR_U32(ctx, 0));
    // 0x12c4d0: 0xafc015a4  sw          $zero, 0x15A4($fp)
    ctx->pc = 0x12c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5540), GPR_U32(ctx, 0));
    // 0x12c4d4: 0xafc015a8  sw          $zero, 0x15A8($fp)
    ctx->pc = 0x12c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5544), GPR_U32(ctx, 0));
    // 0x12c4d8: 0xafc015ac  sw          $zero, 0x15AC($fp)
    ctx->pc = 0x12c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5548), GPR_U32(ctx, 0));
    // 0x12c4dc: 0xafc015b0  sw          $zero, 0x15B0($fp)
    ctx->pc = 0x12c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5552), GPR_U32(ctx, 0));
    // 0x12c4e0: 0xafc015b4  sw          $zero, 0x15B4($fp)
    ctx->pc = 0x12c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5556), GPR_U32(ctx, 0));
    // 0x12c4e4: 0xafc015b8  sw          $zero, 0x15B8($fp)
    ctx->pc = 0x12c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5560), GPR_U32(ctx, 0));
    // 0x12c4e8: 0xafc015bc  sw          $zero, 0x15BC($fp)
    ctx->pc = 0x12c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5564), GPR_U32(ctx, 0));
    // 0x12c4ec: 0xafc015c0  sw          $zero, 0x15C0($fp)
    ctx->pc = 0x12c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5568), GPR_U32(ctx, 0));
    // 0x12c4f0: 0xafc015c4  sw          $zero, 0x15C4($fp)
    ctx->pc = 0x12c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5572), GPR_U32(ctx, 0));
    // 0x12c4f4: 0xafc015c8  sw          $zero, 0x15C8($fp)
    ctx->pc = 0x12c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5576), GPR_U32(ctx, 0));
    // 0x12c4f8: 0xafc015cc  sw          $zero, 0x15CC($fp)
    ctx->pc = 0x12c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5580), GPR_U32(ctx, 0));
    // 0x12c4fc: 0xafc015d0  sw          $zero, 0x15D0($fp)
    ctx->pc = 0x12c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5584), GPR_U32(ctx, 0));
    // 0x12c500: 0xafc015d4  sw          $zero, 0x15D4($fp)
    ctx->pc = 0x12c500u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5588), GPR_U32(ctx, 0));
    // 0x12c504: 0xafc015d8  sw          $zero, 0x15D8($fp)
    ctx->pc = 0x12c504u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5592), GPR_U32(ctx, 0));
    // 0x12c508: 0xafc015dc  sw          $zero, 0x15DC($fp)
    ctx->pc = 0x12c508u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5596), GPR_U32(ctx, 0));
    // 0x12c50c: 0xafc015e0  sw          $zero, 0x15E0($fp)
    ctx->pc = 0x12c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5600), GPR_U32(ctx, 0));
    // 0x12c510: 0xafc015e4  sw          $zero, 0x15E4($fp)
    ctx->pc = 0x12c510u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5604), GPR_U32(ctx, 0));
    // 0x12c514: 0xafc015e8  sw          $zero, 0x15E8($fp)
    ctx->pc = 0x12c514u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5608), GPR_U32(ctx, 0));
    // 0x12c518: 0xafc015ec  sw          $zero, 0x15EC($fp)
    ctx->pc = 0x12c518u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5612), GPR_U32(ctx, 0));
    // 0x12c51c: 0xafc015f0  sw          $zero, 0x15F0($fp)
    ctx->pc = 0x12c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5616), GPR_U32(ctx, 0));
    // 0x12c520: 0xafc015f4  sw          $zero, 0x15F4($fp)
    ctx->pc = 0x12c520u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5620), GPR_U32(ctx, 0));
    // 0x12c524: 0xafc015f8  sw          $zero, 0x15F8($fp)
    ctx->pc = 0x12c524u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5624), GPR_U32(ctx, 0));
    // 0x12c528: 0xafc015fc  sw          $zero, 0x15FC($fp)
    ctx->pc = 0x12c528u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5628), GPR_U32(ctx, 0));
    // 0x12c52c: 0xafc01600  sw          $zero, 0x1600($fp)
    ctx->pc = 0x12c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5632), GPR_U32(ctx, 0));
    // 0x12c530: 0xafc01604  sw          $zero, 0x1604($fp)
    ctx->pc = 0x12c530u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5636), GPR_U32(ctx, 0));
    // 0x12c534: 0xafc01608  sw          $zero, 0x1608($fp)
    ctx->pc = 0x12c534u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5640), GPR_U32(ctx, 0));
    // 0x12c538: 0xafc0160c  sw          $zero, 0x160C($fp)
    ctx->pc = 0x12c538u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5644), GPR_U32(ctx, 0));
    // 0x12c53c: 0xafc01610  sw          $zero, 0x1610($fp)
    ctx->pc = 0x12c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5648), GPR_U32(ctx, 0));
    // 0x12c540: 0xafc01614  sw          $zero, 0x1614($fp)
    ctx->pc = 0x12c540u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5652), GPR_U32(ctx, 0));
    // 0x12c544: 0xafc01618  sw          $zero, 0x1618($fp)
    ctx->pc = 0x12c544u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5656), GPR_U32(ctx, 0));
    // 0x12c548: 0xafc0161c  sw          $zero, 0x161C($fp)
    ctx->pc = 0x12c548u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5660), GPR_U32(ctx, 0));
    // 0x12c54c: 0xafc01620  sw          $zero, 0x1620($fp)
    ctx->pc = 0x12c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5664), GPR_U32(ctx, 0));
    // 0x12c550: 0xafc01624  sw          $zero, 0x1624($fp)
    ctx->pc = 0x12c550u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5668), GPR_U32(ctx, 0));
    // 0x12c554: 0xafc01628  sw          $zero, 0x1628($fp)
    ctx->pc = 0x12c554u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5672), GPR_U32(ctx, 0));
    // 0x12c558: 0xafc0162c  sw          $zero, 0x162C($fp)
    ctx->pc = 0x12c558u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5676), GPR_U32(ctx, 0));
    // 0x12c55c: 0x0  nop
    ctx->pc = 0x12c55cu;
    // NOP
label_12c560:
    // 0x12c560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c564: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12C564u;
    SET_GPR_U32(ctx, 31, 0x12C56Cu);
    ctx->pc = 0x12C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C564u;
    // 0x12c568: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12C564u, 0x12C56Cu)) {
        return;
    }
    ctx->pc = 0x12C56Cu;
label_12c56c:
    // 0x12c56c: 0x0  nop
    ctx->pc = 0x12c56cu;
    // NOP
    // 0x12c570: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12C570u;
    {
        const bool branch_taken_0x12c570 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x12C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C570u;
        // 0x12c574: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c570) {
            ctx->pc = 0x12C560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c560;
        }
    }
    ctx->pc = 0x12C578u;
    // 0x12c578: 0x27c21958  addiu       $v0, $fp, 0x1958
    ctx->pc = 0x12c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 6488));
    // 0x12c57c: 0x27c416c0  addiu       $a0, $fp, 0x16C0
    ctx->pc = 0x12c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
    // 0x12c580: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x12c580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x12c584: 0xc052e4e  jal         func_14B938
    ctx->pc = 0x12C584u;
    SET_GPR_U32(ctx, 31, 0x12C58Cu);
    ctx->pc = 0x12C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C584u;
    // 0x12c588: 0x3c16006b  lui         $s6, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14B938u, 0x12C584u, 0x12C58Cu)) {
        return;
    }
    ctx->pc = 0x12C58Cu;
label_12c58c:
    // 0x12c58c: 0x26d645e0  addiu       $s6, $s6, 0x45E0
    ctx->pc = 0x12c58cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 17888));
    // 0x12c590: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c594: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12c598: 0x24a5f738  addiu       $a1, $a1, -0x8C8
    ctx->pc = 0x12c598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965048));
    // 0x12c59c: 0xc05a2c2  jal         func_168B08
    ctx->pc = 0x12C59Cu;
    SET_GPR_U32(ctx, 31, 0x12C5A4u);
    ctx->pc = 0x12C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C59Cu;
    // 0x12c5a0: 0x3c14006b  lui         $s4, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168B08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168B08u, 0x12C59Cu, 0x12C5A4u)) {
        return;
    }
    ctx->pc = 0x12C5A4u;
label_12c5a4:
    // 0x12c5a4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x12c5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x12c5a8: 0x27c4196c  addiu       $a0, $fp, 0x196C
    ctx->pc = 0x12c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6508));
    // 0x12c5ac: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12C5ACu;
    SET_GPR_U32(ctx, 31, 0x12C5B4u);
    ctx->pc = 0x12C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5ACu;
    // 0x12c5b0: 0x269446b0  addiu       $s4, $s4, 0x46B0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 18096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12C5ACu, 0x12C5B4u)) {
        return;
    }
    ctx->pc = 0x12C5B4u;
label_12c5b4:
    // 0x12c5b4: 0x2610d5e0  addiu       $s0, $s0, -0x2A20
    ctx->pc = 0x12c5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956512));
    // 0x12c5b8: 0x27c41974  addiu       $a0, $fp, 0x1974
    ctx->pc = 0x12c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6516));
    // 0x12c5bc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12C5BCu;
    SET_GPR_U32(ctx, 31, 0x12C5C4u);
    ctx->pc = 0x12C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5BCu;
    // 0x12c5c0: 0x3c13006b  lui         $s3, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12C5BCu, 0x12C5C4u)) {
        return;
    }
    ctx->pc = 0x12C5C4u;
label_12c5c4:
    // 0x12c5c4: 0x267346b8  addiu       $s3, $s3, 0x46B8
    ctx->pc = 0x12c5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 18104));
    // 0x12c5c8: 0x27c41b2c  addiu       $a0, $fp, 0x1B2C
    ctx->pc = 0x12c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6956));
    // 0x12c5cc: 0xc04ad84  jal         func_12B610
    ctx->pc = 0x12C5CCu;
    SET_GPR_U32(ctx, 31, 0x12C5D4u);
    ctx->pc = 0x12C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5CCu;
    // 0x12c5d0: 0x3c110069  lui         $s1, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12B610u, 0x12C5CCu, 0x12C5D4u)) {
        return;
    }
    ctx->pc = 0x12C5D4u;
label_12c5d4:
    // 0x12c5d4: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x12c5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x12c5d8: 0xafc01bc8  sw          $zero, 0x1BC8($fp)
    ctx->pc = 0x12c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7112), GPR_U32(ctx, 0));
    // 0x12c5dc: 0x2631d618  addiu       $s1, $s1, -0x29E8
    ctx->pc = 0x12c5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956568));
    // 0x12c5e0: 0xafc01bcc  sw          $zero, 0x1BCC($fp)
    ctx->pc = 0x12c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7116), GPR_U32(ctx, 0));
    // 0x12c5e4: 0x265246c8  addiu       $s2, $s2, 0x46C8
    ctx->pc = 0x12c5e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18120));
    // 0x12c5e8: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x12c5e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x12c5ec: 0xc04e49a  jal         func_139268
    ctx->pc = 0x12C5ECu;
    SET_GPR_U32(ctx, 31, 0x12C5F4u);
    ctx->pc = 0x12C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5ECu;
    // 0x12c5f0: 0x27d70038  addiu       $s7, $fp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139268u, 0x12C5ECu, 0x12C5F4u)) {
        return;
    }
    ctx->pc = 0x12C5F4u;
label_12c5f4:
    // 0x12c5f4: 0x26b546c0  addiu       $s5, $s5, 0x46C0
    ctx->pc = 0x12c5f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 18112));
    // 0x12c5f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c5fc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c600: 0x248446a0  addiu       $a0, $a0, 0x46A0
    ctx->pc = 0x12c600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    // 0x12c604: 0x24a5d578  addiu       $a1, $a1, -0x2A88
    ctx->pc = 0x12c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956408));
    // 0x12c608: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x12c608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x12c60c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x12c60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x12c610: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C610u;
    SET_GPR_U32(ctx, 31, 0x12C618u);
    ctx->pc = 0x12C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C610u;
    // 0x12c614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C610u, 0x12C618u)) {
        return;
    }
    ctx->pc = 0x12C618u;
label_12c618:
    // 0x12c618: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x12c61c: 0x3421fa33  ori         $at, $at, 0xFA33
    ctx->pc = 0x12c61cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64051);
    // 0x12c620: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12c624: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c628: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c62c: 0x24a5d588  addiu       $a1, $a1, -0x2A78
    ctx->pc = 0x12c62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956424));
    // 0x12c630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c634: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x12c634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x12c638: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x12c638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x12c63c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C63Cu;
    SET_GPR_U32(ctx, 31, 0x12C644u);
    ctx->pc = 0x12C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C63Cu;
    // 0x12c640: 0x248446a8  addiu       $a0, $a0, 0x46A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C63Cu, 0x12C644u)) {
        return;
    }
    ctx->pc = 0x12C644u;
label_12c644:
    // 0x12c644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c648: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x12c648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12c64c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c650: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12c654: 0x24a5d5a0  addiu       $a1, $a1, -0x2A60
    ctx->pc = 0x12c654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956448));
    // 0x12c658: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12c658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c65c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x12c65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x12c660: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12c660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12c664: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x12c664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x12c668: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C668u;
    SET_GPR_U32(ctx, 31, 0x12C670u);
    ctx->pc = 0x12C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C668u;
    // 0x12c66c: 0x24c6d5b0  addiu       $a2, $a2, -0x2A50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C668u, 0x12C670u)) {
        return;
    }
    ctx->pc = 0x12C670u;
label_12c670:
    // 0x12c670: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c674: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c678: 0x24a5d5c8  addiu       $a1, $a1, -0x2A38
    ctx->pc = 0x12c678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956488));
    // 0x12c67c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C67Cu;
    SET_GPR_U32(ctx, 31, 0x12C684u);
    ctx->pc = 0x12C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C67Cu;
    // 0x12c680: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C67Cu, 0x12C684u)) {
        return;
    }
    ctx->pc = 0x12C684u;
label_12c684:
    // 0x12c684: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c688: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12c688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c68c: 0x24a5d5e8  addiu       $a1, $a1, -0x2A18
    ctx->pc = 0x12c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956520));
    // 0x12c690: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C690u;
    SET_GPR_U32(ctx, 31, 0x12C698u);
    ctx->pc = 0x12C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C690u;
    // 0x12c694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C690u, 0x12C698u)) {
        return;
    }
    ctx->pc = 0x12C698u;
label_12c698:
    // 0x12c698: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x12c698u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x12c69c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c6a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6a4: 0x24a5d600  addiu       $a1, $a1, -0x2A00
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x12c6a8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C6A8u;
    SET_GPR_U32(ctx, 31, 0x12C6B0u);
    ctx->pc = 0x12C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6A8u;
    // 0x12c6ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C6A8u, 0x12C6B0u)) {
        return;
    }
    ctx->pc = 0x12C6B0u;
label_12c6b0:
    // 0x12c6b0: 0x2610f950  addiu       $s0, $s0, -0x6B0
    ctx->pc = 0x12c6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965584));
    // 0x12c6b4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c6b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12c6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6bc: 0x24a5d620  addiu       $a1, $a1, -0x29E0
    ctx->pc = 0x12c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956576));
    // 0x12c6c0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C6C0u;
    SET_GPR_U32(ctx, 31, 0x12C6C8u);
    ctx->pc = 0x12C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6C0u;
    // 0x12c6c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C6C0u, 0x12C6C8u)) {
        return;
    }
    ctx->pc = 0x12C6C8u;
label_12c6c8:
    // 0x12c6c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c6cc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12c6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12c6d0: 0x24a5d638  addiu       $a1, $a1, -0x29C8
    ctx->pc = 0x12c6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956600));
    // 0x12c6d4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c6d8: 0x248446e8  addiu       $a0, $a0, 0x46E8
    ctx->pc = 0x12c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18152));
    // 0x12c6dc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C6DCu;
    SET_GPR_U32(ctx, 31, 0x12C6E4u);
    ctx->pc = 0x12C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6DCu;
    // 0x12c6e0: 0x24c6d650  addiu       $a2, $a2, -0x29B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C6DCu, 0x12C6E4u)) {
        return;
    }
    ctx->pc = 0x12C6E4u;
label_12c6e4:
    // 0x12c6e4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c6e8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c6ec: 0x248446f0  addiu       $a0, $a0, 0x46F0
    ctx->pc = 0x12c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18160));
    // 0x12c6f0: 0x24a5d660  addiu       $a1, $a1, -0x29A0
    ctx->pc = 0x12c6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956640));
    // 0x12c6f4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C6F4u;
    SET_GPR_U32(ctx, 31, 0x12C6FCu);
    ctx->pc = 0x12C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6F4u;
    // 0x12c6f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C6F4u, 0x12C6FCu)) {
        return;
    }
    ctx->pc = 0x12C6FCu;
label_12c6fc:
    // 0x12c6fc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c700: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c704: 0x248446f8  addiu       $a0, $a0, 0x46F8
    ctx->pc = 0x12c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18168));
    // 0x12c708: 0x24a5d678  addiu       $a1, $a1, -0x2988
    ctx->pc = 0x12c708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956664));
    // 0x12c70c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C70Cu;
    SET_GPR_U32(ctx, 31, 0x12C714u);
    ctx->pc = 0x12C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C70Cu;
    // 0x12c710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C70Cu, 0x12C714u)) {
        return;
    }
    ctx->pc = 0x12C714u;
label_12c714:
    // 0x12c714: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c718: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c71c: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x12c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x12c720: 0x24a5d688  addiu       $a1, $a1, -0x2978
    ctx->pc = 0x12c720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956680));
    // 0x12c724: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C724u;
    SET_GPR_U32(ctx, 31, 0x12C72Cu);
    ctx->pc = 0x12C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C724u;
    // 0x12c728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C724u, 0x12C72Cu)) {
        return;
    }
    ctx->pc = 0x12C72Cu;
label_12c72c:
    // 0x12c72c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c730: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c734: 0x24844708  addiu       $a0, $a0, 0x4708
    ctx->pc = 0x12c734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18184));
    // 0x12c738: 0x24a5d698  addiu       $a1, $a1, -0x2968
    ctx->pc = 0x12c738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956696));
    // 0x12c73c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C73Cu;
    SET_GPR_U32(ctx, 31, 0x12C744u);
    ctx->pc = 0x12C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C73Cu;
    // 0x12c740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C73Cu, 0x12C744u)) {
        return;
    }
    ctx->pc = 0x12C744u;
label_12c744:
    // 0x12c744: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c748: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c74c: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x12c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x12c750: 0x24a5d6b0  addiu       $a1, $a1, -0x2950
    ctx->pc = 0x12c750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956720));
    // 0x12c754: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C754u;
    SET_GPR_U32(ctx, 31, 0x12C75Cu);
    ctx->pc = 0x12C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C754u;
    // 0x12c758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C754u, 0x12C75Cu)) {
        return;
    }
    ctx->pc = 0x12C75Cu;
label_12c75c:
    // 0x12c75c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c760: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c764: 0x24844718  addiu       $a0, $a0, 0x4718
    ctx->pc = 0x12c764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18200));
    // 0x12c768: 0x24a5d6c8  addiu       $a1, $a1, -0x2938
    ctx->pc = 0x12c768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956744));
    // 0x12c76c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C76Cu;
    SET_GPR_U32(ctx, 31, 0x12C774u);
    ctx->pc = 0x12C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C76Cu;
    // 0x12c770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C76Cu, 0x12C774u)) {
        return;
    }
    ctx->pc = 0x12C774u;
label_12c774:
    // 0x12c774: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c778: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c77c: 0x24844720  addiu       $a0, $a0, 0x4720
    ctx->pc = 0x12c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18208));
    // 0x12c780: 0x24a5d6e0  addiu       $a1, $a1, -0x2920
    ctx->pc = 0x12c780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956768));
    // 0x12c784: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C784u;
    SET_GPR_U32(ctx, 31, 0x12C78Cu);
    ctx->pc = 0x12C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C784u;
    // 0x12c788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C784u, 0x12C78Cu)) {
        return;
    }
    ctx->pc = 0x12C78Cu;
label_12c78c:
    // 0x12c78c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c790: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c794: 0x24844728  addiu       $a0, $a0, 0x4728
    ctx->pc = 0x12c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18216));
    // 0x12c798: 0x24a5d6f8  addiu       $a1, $a1, -0x2908
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956792));
    // 0x12c79c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C79Cu;
    SET_GPR_U32(ctx, 31, 0x12C7A4u);
    ctx->pc = 0x12C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C79Cu;
    // 0x12c7a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C79Cu, 0x12C7A4u)) {
        return;
    }
    ctx->pc = 0x12C7A4u;
label_12c7a4:
    // 0x12c7a4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c7a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c7ac: 0x24844730  addiu       $a0, $a0, 0x4730
    ctx->pc = 0x12c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18224));
    // 0x12c7b0: 0x24a5d710  addiu       $a1, $a1, -0x28F0
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956816));
    // 0x12c7b4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C7B4u;
    SET_GPR_U32(ctx, 31, 0x12C7BCu);
    ctx->pc = 0x12C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7B4u;
    // 0x12c7b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C7B4u, 0x12C7BCu)) {
        return;
    }
    ctx->pc = 0x12C7BCu;
label_12c7bc:
    // 0x12c7bc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c7c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c7c4: 0x24844738  addiu       $a0, $a0, 0x4738
    ctx->pc = 0x12c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18232));
    // 0x12c7c8: 0x24a5d728  addiu       $a1, $a1, -0x28D8
    ctx->pc = 0x12c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956840));
    // 0x12c7cc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C7CCu;
    SET_GPR_U32(ctx, 31, 0x12C7D4u);
    ctx->pc = 0x12C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7CCu;
    // 0x12c7d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C7CCu, 0x12C7D4u)) {
        return;
    }
    ctx->pc = 0x12C7D4u;
label_12c7d4:
    // 0x12c7d4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c7d8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c7dc: 0x24844740  addiu       $a0, $a0, 0x4740
    ctx->pc = 0x12c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18240));
    // 0x12c7e0: 0x24a5d740  addiu       $a1, $a1, -0x28C0
    ctx->pc = 0x12c7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956864));
    // 0x12c7e4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C7E4u;
    SET_GPR_U32(ctx, 31, 0x12C7ECu);
    ctx->pc = 0x12C7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7E4u;
    // 0x12c7e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C7E4u, 0x12C7ECu)) {
        return;
    }
    ctx->pc = 0x12C7ECu;
label_12c7ec:
    // 0x12c7ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c7f0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c7f4: 0x24844620  addiu       $a0, $a0, 0x4620
    ctx->pc = 0x12c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17952));
    // 0x12c7f8: 0x24a5d758  addiu       $a1, $a1, -0x28A8
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956888));
    // 0x12c7fc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C7FCu;
    SET_GPR_U32(ctx, 31, 0x12C804u);
    ctx->pc = 0x12C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7FCu;
    // 0x12c800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C7FCu, 0x12C804u)) {
        return;
    }
    ctx->pc = 0x12C804u;
label_12c804:
    // 0x12c804: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c808: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c80c: 0x24844628  addiu       $a0, $a0, 0x4628
    ctx->pc = 0x12c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17960));
    // 0x12c810: 0x24a5d768  addiu       $a1, $a1, -0x2898
    ctx->pc = 0x12c810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956904));
    // 0x12c814: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C814u;
    SET_GPR_U32(ctx, 31, 0x12C81Cu);
    ctx->pc = 0x12C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C814u;
    // 0x12c818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C814u, 0x12C81Cu)) {
        return;
    }
    ctx->pc = 0x12C81Cu;
label_12c81c:
    // 0x12c81c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c820: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c824: 0x24844630  addiu       $a0, $a0, 0x4630
    ctx->pc = 0x12c824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17968));
    // 0x12c828: 0x24a5d780  addiu       $a1, $a1, -0x2880
    ctx->pc = 0x12c828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956928));
    // 0x12c82c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C82Cu;
    SET_GPR_U32(ctx, 31, 0x12C834u);
    ctx->pc = 0x12C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C82Cu;
    // 0x12c830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C82Cu, 0x12C834u)) {
        return;
    }
    ctx->pc = 0x12C834u;
label_12c834:
    // 0x12c834: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c838: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c83c: 0x24844638  addiu       $a0, $a0, 0x4638
    ctx->pc = 0x12c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17976));
    // 0x12c840: 0x24a5d798  addiu       $a1, $a1, -0x2868
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956952));
    // 0x12c844: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C844u;
    SET_GPR_U32(ctx, 31, 0x12C84Cu);
    ctx->pc = 0x12C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C844u;
    // 0x12c848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C844u, 0x12C84Cu)) {
        return;
    }
    ctx->pc = 0x12C84Cu;
label_12c84c:
    // 0x12c84c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c850: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c854: 0x24844640  addiu       $a0, $a0, 0x4640
    ctx->pc = 0x12c854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17984));
    // 0x12c858: 0x24a5d7b8  addiu       $a1, $a1, -0x2848
    ctx->pc = 0x12c858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956984));
    // 0x12c85c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C85Cu;
    SET_GPR_U32(ctx, 31, 0x12C864u);
    ctx->pc = 0x12C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C85Cu;
    // 0x12c860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C85Cu, 0x12C864u)) {
        return;
    }
    ctx->pc = 0x12C864u;
label_12c864:
    // 0x12c864: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c868: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c86c: 0x24844648  addiu       $a0, $a0, 0x4648
    ctx->pc = 0x12c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17992));
    // 0x12c870: 0x24a5d7d8  addiu       $a1, $a1, -0x2828
    ctx->pc = 0x12c870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957016));
    // 0x12c874: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C874u;
    SET_GPR_U32(ctx, 31, 0x12C87Cu);
    ctx->pc = 0x12C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C874u;
    // 0x12c878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C874u, 0x12C87Cu)) {
        return;
    }
    ctx->pc = 0x12C87Cu;
label_12c87c:
    // 0x12c87c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c880: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c884: 0x24844650  addiu       $a0, $a0, 0x4650
    ctx->pc = 0x12c884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18000));
    // 0x12c888: 0x24a5d7f0  addiu       $a1, $a1, -0x2810
    ctx->pc = 0x12c888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957040));
    // 0x12c88c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C88Cu;
    SET_GPR_U32(ctx, 31, 0x12C894u);
    ctx->pc = 0x12C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C88Cu;
    // 0x12c890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C88Cu, 0x12C894u)) {
        return;
    }
    ctx->pc = 0x12C894u;
label_12c894:
    // 0x12c894: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c898: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c89c: 0x24844658  addiu       $a0, $a0, 0x4658
    ctx->pc = 0x12c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18008));
    // 0x12c8a0: 0x24a5d808  addiu       $a1, $a1, -0x27F8
    ctx->pc = 0x12c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957064));
    // 0x12c8a4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C8A4u;
    SET_GPR_U32(ctx, 31, 0x12C8ACu);
    ctx->pc = 0x12C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8A4u;
    // 0x12c8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C8A4u, 0x12C8ACu)) {
        return;
    }
    ctx->pc = 0x12C8ACu;
label_12c8ac:
    // 0x12c8ac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c8b0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c8b4: 0x248446d0  addiu       $a0, $a0, 0x46D0
    ctx->pc = 0x12c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18128));
    // 0x12c8b8: 0x24a5d820  addiu       $a1, $a1, -0x27E0
    ctx->pc = 0x12c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957088));
    // 0x12c8bc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C8BCu;
    SET_GPR_U32(ctx, 31, 0x12C8C4u);
    ctx->pc = 0x12C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8BCu;
    // 0x12c8c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C8BCu, 0x12C8C4u)) {
        return;
    }
    ctx->pc = 0x12C8C4u;
label_12c8c4:
    // 0x12c8c4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c8c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c8cc: 0x248446d8  addiu       $a0, $a0, 0x46D8
    ctx->pc = 0x12c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18136));
    // 0x12c8d0: 0x24a5d840  addiu       $a1, $a1, -0x27C0
    ctx->pc = 0x12c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957120));
    // 0x12c8d4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C8D4u;
    SET_GPR_U32(ctx, 31, 0x12C8DCu);
    ctx->pc = 0x12C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8D4u;
    // 0x12c8d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C8D4u, 0x12C8DCu)) {
        return;
    }
    ctx->pc = 0x12C8DCu;
label_12c8dc:
    // 0x12c8dc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12c8e0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12c8e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12c8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e8: 0x248446e0  addiu       $a0, $a0, 0x46E0
    ctx->pc = 0x12c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
    // 0x12c8ec: 0x24a5d860  addiu       $a1, $a1, -0x27A0
    ctx->pc = 0x12c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957152));
    // 0x12c8f0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12C8F0u;
    SET_GPR_U32(ctx, 31, 0x12C8F8u);
    ctx->pc = 0x12C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8F0u;
    // 0x12c8f4: 0x3c110069  lui         $s1, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12C8F0u, 0x12C8F8u)) {
        return;
    }
    ctx->pc = 0x12C8F8u;
label_12c8f8:
    // 0x12c8f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12c8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c904: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C904u;
    SET_GPR_U32(ctx, 31, 0x12C90Cu);
    ctx->pc = 0x12C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C904u;
    // 0x12c908: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C904u, 0x12C90Cu)) {
        return;
    }
    ctx->pc = 0x12C90Cu;
label_12c90c:
    // 0x12c90c: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x12c90cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x12c910: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c914: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c91c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C91Cu;
    SET_GPR_U32(ctx, 31, 0x12C924u);
    ctx->pc = 0x12C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C91Cu;
    // 0x12c920: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C91Cu, 0x12C924u)) {
        return;
    }
    ctx->pc = 0x12C924u;
label_12c924:
    // 0x12c924: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x12c924u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x12c928: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12c928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c92c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c934: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C934u;
    SET_GPR_U32(ctx, 31, 0x12C93Cu);
    ctx->pc = 0x12C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C934u;
    // 0x12c938: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C934u, 0x12C93Cu)) {
        return;
    }
    ctx->pc = 0x12C93Cu;
label_12c93c:
    // 0x12c93c: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x12c93cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x12c940: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12c940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c944: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c94c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C94Cu;
    SET_GPR_U32(ctx, 31, 0x12C954u);
    ctx->pc = 0x12C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C94Cu;
    // 0x12c950: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C94Cu, 0x12C954u)) {
        return;
    }
    ctx->pc = 0x12C954u;
label_12c954:
    // 0x12c954: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x12c954u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x12c958: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c95c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c964: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C964u;
    SET_GPR_U32(ctx, 31, 0x12C96Cu);
    ctx->pc = 0x12C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C964u;
    // 0x12c968: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C964u, 0x12C96Cu)) {
        return;
    }
    ctx->pc = 0x12C96Cu;
label_12c96c:
    // 0x12c96c: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x12c96cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x12c970: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12c970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12c974: 0x24a546e8  addiu       $a1, $a1, 0x46E8
    ctx->pc = 0x12c974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18152));
    // 0x12c978: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c980: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C980u;
    SET_GPR_U32(ctx, 31, 0x12C988u);
    ctx->pc = 0x12C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C980u;
    // 0x12c984: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C980u, 0x12C988u)) {
        return;
    }
    ctx->pc = 0x12C988u;
label_12c988:
    // 0x12c988: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12c988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12c98c: 0x24a546f0  addiu       $a1, $a1, 0x46F0
    ctx->pc = 0x12c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18160));
    // 0x12c990: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c998: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C998u;
    SET_GPR_U32(ctx, 31, 0x12C9A0u);
    ctx->pc = 0x12C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C998u;
    // 0x12c99c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C998u, 0x12C9A0u)) {
        return;
    }
    ctx->pc = 0x12C9A0u;
label_12c9a0:
    // 0x12c9a0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12c9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12c9a4: 0x24a546f8  addiu       $a1, $a1, 0x46F8
    ctx->pc = 0x12c9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18168));
    // 0x12c9a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9b0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C9B0u;
    SET_GPR_U32(ctx, 31, 0x12C9B8u);
    ctx->pc = 0x12C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9B0u;
    // 0x12c9b4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C9B0u, 0x12C9B8u)) {
        return;
    }
    ctx->pc = 0x12C9B8u;
label_12c9b8:
    // 0x12c9b8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12c9bc: 0x24a54700  addiu       $a1, $a1, 0x4700
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
    // 0x12c9c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9c8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C9C8u;
    SET_GPR_U32(ctx, 31, 0x12C9D0u);
    ctx->pc = 0x12C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9C8u;
    // 0x12c9cc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C9C8u, 0x12C9D0u)) {
        return;
    }
    ctx->pc = 0x12C9D0u;
label_12c9d0:
    // 0x12c9d0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12c9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12c9d4: 0x24a54708  addiu       $a1, $a1, 0x4708
    ctx->pc = 0x12c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18184));
    // 0x12c9d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9e0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C9E0u;
    SET_GPR_U32(ctx, 31, 0x12C9E8u);
    ctx->pc = 0x12C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9E0u;
    // 0x12c9e4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C9E0u, 0x12C9E8u)) {
        return;
    }
    ctx->pc = 0x12C9E8u;
label_12c9e8:
    // 0x12c9e8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12c9ec: 0x24a54720  addiu       $a1, $a1, 0x4720
    ctx->pc = 0x12c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18208));
    // 0x12c9f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9f8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12C9F8u;
    SET_GPR_U32(ctx, 31, 0x12CA00u);
    ctx->pc = 0x12C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9F8u;
    // 0x12c9fc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12C9F8u, 0x12CA00u)) {
        return;
    }
    ctx->pc = 0x12CA00u;
label_12ca00:
    // 0x12ca00: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12ca04: 0x24a54728  addiu       $a1, $a1, 0x4728
    ctx->pc = 0x12ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18216));
    // 0x12ca08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ca08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ca0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca10: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CA10u;
    SET_GPR_U32(ctx, 31, 0x12CA18u);
    ctx->pc = 0x12CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA10u;
    // 0x12ca14: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CA10u, 0x12CA18u)) {
        return;
    }
    ctx->pc = 0x12CA18u;
label_12ca18:
    // 0x12ca18: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12ca18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12ca1c: 0x24a54730  addiu       $a1, $a1, 0x4730
    ctx->pc = 0x12ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18224));
    // 0x12ca20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ca24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca28: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CA28u;
    SET_GPR_U32(ctx, 31, 0x12CA30u);
    ctx->pc = 0x12CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA28u;
    // 0x12ca2c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CA28u, 0x12CA30u)) {
        return;
    }
    ctx->pc = 0x12CA30u;
label_12ca30:
    // 0x12ca30: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12ca34: 0x24a54738  addiu       $a1, $a1, 0x4738
    ctx->pc = 0x12ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18232));
    // 0x12ca38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ca38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ca3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca40: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CA40u;
    SET_GPR_U32(ctx, 31, 0x12CA48u);
    ctx->pc = 0x12CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA40u;
    // 0x12ca44: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CA40u, 0x12CA48u)) {
        return;
    }
    ctx->pc = 0x12CA48u;
label_12ca48:
    // 0x12ca48: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12ca4c: 0x24a54740  addiu       $a1, $a1, 0x4740
    ctx->pc = 0x12ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18240));
    // 0x12ca50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ca54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca58: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CA58u;
    SET_GPR_U32(ctx, 31, 0x12CA60u);
    ctx->pc = 0x12CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA58u;
    // 0x12ca5c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CA58u, 0x12CA60u)) {
        return;
    }
    ctx->pc = 0x12CA60u;
label_12ca60:
    // 0x12ca60: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12ca64: 0x24a54710  addiu       $a1, $a1, 0x4710
    ctx->pc = 0x12ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18192));
    // 0x12ca68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ca6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca70: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CA70u;
    SET_GPR_U32(ctx, 31, 0x12CA78u);
    ctx->pc = 0x12CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA70u;
    // 0x12ca74: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CA70u, 0x12CA78u)) {
        return;
    }
    ctx->pc = 0x12CA78u;
label_12ca78:
    // 0x12ca78: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12ca78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12ca7c: 0x24a54718  addiu       $a1, $a1, 0x4718
    ctx->pc = 0x12ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18200));
    // 0x12ca80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ca80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca88: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CA88u;
    SET_GPR_U32(ctx, 31, 0x12CA90u);
    ctx->pc = 0x12CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA88u;
    // 0x12ca8c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CA88u, 0x12CA90u)) {
        return;
    }
    ctx->pc = 0x12CA90u;
label_12ca90:
    // 0x12ca90: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x12ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x12ca94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca98: 0x24a5bd80  addiu       $a1, $a1, -0x4280
    ctx->pc = 0x12ca98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950272));
    // 0x12ca9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ca9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caa0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CAA0u;
    SET_GPR_U32(ctx, 31, 0x12CAA8u);
    ctx->pc = 0x12CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAA0u;
    // 0x12caa4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CAA0u, 0x12CAA8u)) {
        return;
    }
    ctx->pc = 0x12CAA8u;
label_12caa8:
    // 0x12caa8: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x12caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x12caac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cab0: 0x24a5bd88  addiu       $a1, $a1, -0x4278
    ctx->pc = 0x12cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950280));
    // 0x12cab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cab8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CAB8u;
    SET_GPR_U32(ctx, 31, 0x12CAC0u);
    ctx->pc = 0x12CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAB8u;
    // 0x12cabc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CAB8u, 0x12CAC0u)) {
        return;
    }
    ctx->pc = 0x12CAC0u;
label_12cac0:
    // 0x12cac0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12cac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12cac4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cac8: 0x24a54600  addiu       $a1, $a1, 0x4600
    ctx->pc = 0x12cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17920));
    // 0x12cacc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12caccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cad0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CAD0u;
    SET_GPR_U32(ctx, 31, 0x12CAD8u);
    ctx->pc = 0x12CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAD0u;
    // 0x12cad4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CAD0u, 0x12CAD8u)) {
        return;
    }
    ctx->pc = 0x12CAD8u;
label_12cad8:
    // 0x12cad8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12cadc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cae0: 0x24a54608  addiu       $a1, $a1, 0x4608
    ctx->pc = 0x12cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17928));
    // 0x12cae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cae8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CAE8u;
    SET_GPR_U32(ctx, 31, 0x12CAF0u);
    ctx->pc = 0x12CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAE8u;
    // 0x12caec: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CAE8u, 0x12CAF0u)) {
        return;
    }
    ctx->pc = 0x12CAF0u;
label_12caf0:
    // 0x12caf0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12caf4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12caf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caf8: 0x24a5f8e8  addiu       $a1, $a1, -0x718
    ctx->pc = 0x12caf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965480));
    // 0x12cafc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb00: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CB00u;
    SET_GPR_U32(ctx, 31, 0x12CB08u);
    ctx->pc = 0x12CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB00u;
    // 0x12cb04: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CB00u, 0x12CB08u)) {
        return;
    }
    ctx->pc = 0x12CB08u;
label_12cb08:
    // 0x12cb08: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12cb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12cb0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb10: 0x24a5f8f0  addiu       $a1, $a1, -0x710
    ctx->pc = 0x12cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
    // 0x12cb14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb18: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CB18u;
    SET_GPR_U32(ctx, 31, 0x12CB20u);
    ctx->pc = 0x12CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB18u;
    // 0x12cb1c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CB18u, 0x12CB20u)) {
        return;
    }
    ctx->pc = 0x12CB20u;
label_12cb20:
    // 0x12cb20: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12cb24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb28: 0x24a5f8f8  addiu       $a1, $a1, -0x708
    ctx->pc = 0x12cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965496));
    // 0x12cb2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb30: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CB30u;
    SET_GPR_U32(ctx, 31, 0x12CB38u);
    ctx->pc = 0x12CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB30u;
    // 0x12cb34: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CB30u, 0x12CB38u)) {
        return;
    }
    ctx->pc = 0x12CB38u;
label_12cb38:
    // 0x12cb38: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12cb3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb40: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x12cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    // 0x12cb44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb48: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CB48u;
    SET_GPR_U32(ctx, 31, 0x12CB50u);
    ctx->pc = 0x12CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB48u;
    // 0x12cb4c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CB48u, 0x12CB50u)) {
        return;
    }
    ctx->pc = 0x12CB50u;
label_12cb50:
    // 0x12cb50: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12cb54: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12cb54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12cb58: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x12cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x12cb5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb60: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CB60u;
    SET_GPR_U32(ctx, 31, 0x12CB68u);
    ctx->pc = 0x12CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB60u;
    // 0x12cb64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CB60u, 0x12CB68u)) {
        return;
    }
    ctx->pc = 0x12CB68u;
label_12cb68:
    // 0x12cb68: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12cb6c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x12cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x12cb70: 0x2484eea8  addiu       $a0, $a0, -0x1158
    ctx->pc = 0x12cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962856));
    // 0x12cb74: 0x24a5d880  addiu       $a1, $a1, -0x2780
    ctx->pc = 0x12cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x12cb78: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12CB78u;
    SET_GPR_U32(ctx, 31, 0x12CB80u);
    ctx->pc = 0x12CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB78u;
    // 0x12cb7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12CB78u, 0x12CB80u)) {
        return;
    }
    ctx->pc = 0x12CB80u;
label_12cb80:
    // 0x12cb80: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12cb84: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x12cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
    // 0x12cb88: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12cb8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb90: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CB90u;
    SET_GPR_U32(ctx, 31, 0x12CB98u);
    ctx->pc = 0x12CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB90u;
    // 0x12cb94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CB90u, 0x12CB98u)) {
        return;
    }
    ctx->pc = 0x12CB98u;
label_12cb98:
    // 0x12cb98: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12cb9c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12cb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12cba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cba4: 0x24a5d890  addiu       $a1, $a1, -0x2770
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957200));
    // 0x12cba8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x12CBA8u;
    SET_GPR_U32(ctx, 31, 0x12CBB0u);
    ctx->pc = 0x12CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CBA8u;
    // 0x12cbac: 0x24c6d8a0  addiu       $a2, $a2, -0x2760 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x12CBA8u, 0x12CBB0u)) {
        return;
    }
    ctx->pc = 0x12CBB0u;
label_12cbb0:
    // 0x12cbb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12cbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbb4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbbc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CBBCu;
    SET_GPR_U32(ctx, 31, 0x12CBC4u);
    ctx->pc = 0x12CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CBBCu;
    // 0x12cbc0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CBBCu, 0x12CBC4u)) {
        return;
    }
    ctx->pc = 0x12CBC4u;
label_12cbc4:
    // 0x12cbc4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x12cbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x12cbc8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12cbcc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbd0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12cbd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12cbd4: 0x24a58868  addiu       $a1, $a1, -0x7798
    ctx->pc = 0x12cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936680));
    // 0x12cbd8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CBD8u;
    SET_GPR_U32(ctx, 31, 0x12CBE0u);
    ctx->pc = 0x12CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CBD8u;
    // 0x12cbdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CBD8u, 0x12CBE0u)) {
        return;
    }
    ctx->pc = 0x12CBE0u;
label_12cbe0:
    // 0x12cbe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cbe4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x12cbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x12cbe8: 0x34210a90  ori         $at, $at, 0xA90
    ctx->pc = 0x12cbe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2704);
    // 0x12cbec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12cbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12cbf0: 0xafc31860  sw          $v1, 0x1860($fp)
    ctx->pc = 0x12cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6240), GPR_U32(ctx, 3));
    // 0x12cbf4: 0xafc31864  sw          $v1, 0x1864($fp)
    ctx->pc = 0x12cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6244), GPR_U32(ctx, 3));
    // 0x12cbf8: 0xafc31868  sw          $v1, 0x1868($fp)
    ctx->pc = 0x12cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6248), GPR_U32(ctx, 3));
    // 0x12cbfc: 0xafc31870  sw          $v1, 0x1870($fp)
    ctx->pc = 0x12cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6256), GPR_U32(ctx, 3));
    // 0x12cc00: 0xafc31874  sw          $v1, 0x1874($fp)
    ctx->pc = 0x12cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6260), GPR_U32(ctx, 3));
    // 0x12cc04: 0xafc31878  sw          $v1, 0x1878($fp)
    ctx->pc = 0x12cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6264), GPR_U32(ctx, 3));
    // 0x12cc08: 0xafc014c0  sw          $zero, 0x14C0($fp)
    ctx->pc = 0x12cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5312), GPR_U32(ctx, 0));
    // 0x12cc0c: 0xafc01830  sw          $zero, 0x1830($fp)
    ctx->pc = 0x12cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6192), GPR_U32(ctx, 0));
    // 0x12cc10: 0xafc01834  sw          $zero, 0x1834($fp)
    ctx->pc = 0x12cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6196), GPR_U32(ctx, 0));
    // 0x12cc14: 0xafc01838  sw          $zero, 0x1838($fp)
    ctx->pc = 0x12cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6200), GPR_U32(ctx, 0));
    // 0x12cc18: 0xafc0183c  sw          $zero, 0x183C($fp)
    ctx->pc = 0x12cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6204), GPR_U32(ctx, 0));
    // 0x12cc1c: 0xafc01840  sw          $zero, 0x1840($fp)
    ctx->pc = 0x12cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6208), GPR_U32(ctx, 0));
    // 0x12cc20: 0xafc01844  sw          $zero, 0x1844($fp)
    ctx->pc = 0x12cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6212), GPR_U32(ctx, 0));
    // 0x12cc24: 0xafc01848  sw          $zero, 0x1848($fp)
    ctx->pc = 0x12cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6216), GPR_U32(ctx, 0));
    // 0x12cc28: 0xafc0184c  sw          $zero, 0x184C($fp)
    ctx->pc = 0x12cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6220), GPR_U32(ctx, 0));
    // 0x12cc2c: 0xafc01850  sw          $zero, 0x1850($fp)
    ctx->pc = 0x12cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6224), GPR_U32(ctx, 0));
    // 0x12cc30: 0xafc01854  sw          $zero, 0x1854($fp)
    ctx->pc = 0x12cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6228), GPR_U32(ctx, 0));
    // 0x12cc34: 0xafc01858  sw          $zero, 0x1858($fp)
    ctx->pc = 0x12cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6232), GPR_U32(ctx, 0));
    // 0x12cc38: 0xafc0185c  sw          $zero, 0x185C($fp)
    ctx->pc = 0x12cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6236), GPR_U32(ctx, 0));
    // 0x12cc3c: 0xafc01bbc  sw          $zero, 0x1BBC($fp)
    ctx->pc = 0x12cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7100), GPR_U32(ctx, 0));
    // 0x12cc40: 0xafc01bc0  sw          $zero, 0x1BC0($fp)
    ctx->pc = 0x12cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7104), GPR_U32(ctx, 0));
    // 0x12cc44: 0xafc01bc4  sw          $zero, 0x1BC4($fp)
    ctx->pc = 0x12cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7108), GPR_U32(ctx, 0));
    // 0x12cc48: 0xafc01b5c  sw          $zero, 0x1B5C($fp)
    ctx->pc = 0x12cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7004), GPR_U32(ctx, 0));
    // 0x12cc4c: 0xafc0186c  sw          $zero, 0x186C($fp)
    ctx->pc = 0x12cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6252), GPR_U32(ctx, 0));
    // 0x12cc50: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x12CC50u;
    SET_GPR_U32(ctx, 31, 0x12CC58u);
    ctx->pc = 0x12CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC50u;
    // 0x12cc54: 0xe7d71928  swc1        $f23, 0x1928($fp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6440), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12CC50u, 0x12CC58u)) {
        return;
    }
    ctx->pc = 0x12CC58u;
label_12cc58:
    // 0x12cc58: 0xc7cc1928  lwc1        $f12, 0x1928($fp)
    ctx->pc = 0x12cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 6440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12cc5c: 0xe7d71930  swc1        $f23, 0x1930($fp)
    ctx->pc = 0x12cc5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6448), bits); }
    // 0x12cc60: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x12cc60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x12cc64: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x12CC64u;
    SET_GPR_U32(ctx, 31, 0x12CC6Cu);
    ctx->pc = 0x12CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC64u;
    // 0x12cc68: 0xe7c0192c  swc1        $f0, 0x192C($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6444), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12CC64u, 0x12CC6Cu)) {
        return;
    }
    ctx->pc = 0x12CC6Cu;
label_12cc6c:
    // 0x12cc6c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x12cc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x12cc70: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12cc70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x12cc74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cc74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12cc78: 0x27c21880  addiu       $v0, $fp, 0x1880
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 6272));
    // 0x12cc7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12cc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12cc80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12cc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cc84: 0x27c31890  addiu       $v1, $fp, 0x1890
    ctx->pc = 0x12cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 6288));
    // 0x12cc88: 0xe7c01934  swc1        $f0, 0x1934($fp)
    ctx->pc = 0x12cc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6452), bits); }
    // 0x12cc8c: 0x27c418a0  addiu       $a0, $fp, 0x18A0
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6304));
    // 0x12cc90: 0xe7c11b20  swc1        $f1, 0x1B20($fp)
    ctx->pc = 0x12cc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6944), bits); }
    // 0x12cc94: 0x27c518b0  addiu       $a1, $fp, 0x18B0
    ctx->pc = 0x12cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 6320));
    // 0x12cc98: 0xe7c21b24  swc1        $f2, 0x1B24($fp)
    ctx->pc = 0x12cc98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6948), bits); }
    // 0x12cc9c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x12cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x12cca0: 0xe7d91b1c  swc1        $f25, 0x1B1C($fp)
    ctx->pc = 0x12cca0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6940), bits); }
    // 0x12cca4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12cca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12cca8: 0xafc01938  sw          $zero, 0x1938($fp)
    ctx->pc = 0x12cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6456), GPR_U32(ctx, 0));
    // 0x12ccac: 0x3c180069  lui         $t8, 0x69
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)105 << 16));
    // 0x12ccb0: 0xafc0193c  sw          $zero, 0x193C($fp)
    ctx->pc = 0x12ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6460), GPR_U32(ctx, 0));
    // 0x12ccb4: 0x3c0f0069  lui         $t7, 0x69
    ctx->pc = 0x12ccb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)105 << 16));
    // 0x12ccb8: 0xafc01940  sw          $zero, 0x1940($fp)
    ctx->pc = 0x12ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6464), GPR_U32(ctx, 0));
    // 0x12ccbc: 0x3c0e0069  lui         $t6, 0x69
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)105 << 16));
    // 0x12ccc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12ccc4: 0x3c0d0069  lui         $t5, 0x69
    ctx->pc = 0x12ccc4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)105 << 16));
    // 0x12ccc8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12cccc: 0x3c0c0069  lui         $t4, 0x69
    ctx->pc = 0x12ccccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)105 << 16));
    // 0x12ccd0: 0xafc01880  sw          $zero, 0x1880($fp)
    ctx->pc = 0x12ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6272), GPR_U32(ctx, 0));
    // 0x12ccd4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x12ccd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12ccdc: 0x2442d908  addiu       $v0, $v0, -0x26F8
    ctx->pc = 0x12ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957320));
    // 0x12cce0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12cce4: 0x3c0b0069  lui         $t3, 0x69
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)105 << 16));
    // 0x12cce8: 0xafc01890  sw          $zero, 0x1890($fp)
    ctx->pc = 0x12cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6288), GPR_U32(ctx, 0));
    // 0x12ccec: 0x3c0a0069  lui         $t2, 0x69
    ctx->pc = 0x12ccecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)105 << 16));
    // 0x12ccf0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12ccf4: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x12ccf8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12ccfc: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x12ccfcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x12cd00: 0xafc018a0  sw          $zero, 0x18A0($fp)
    ctx->pc = 0x12cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6304), GPR_U32(ctx, 0));
    // 0x12cd04: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x12cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x12cd08: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12cd0c: 0x2718d940  addiu       $t8, $t8, -0x26C0
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294957376));
    // 0x12cd10: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x12cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x12cd14: 0x26d6d968  addiu       $s6, $s6, -0x2698
    ctx->pc = 0x12cd14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957416));
    // 0x12cd18: 0xafc018b0  sw          $zero, 0x18B0($fp)
    ctx->pc = 0x12cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6320), GPR_U32(ctx, 0));
    // 0x12cd1c: 0x26b5d980  addiu       $s5, $s5, -0x2680
    ctx->pc = 0x12cd1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957440));
    // 0x12cd20: 0xafc018d0  sw          $zero, 0x18D0($fp)
    ctx->pc = 0x12cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6352), GPR_U32(ctx, 0));
    // 0x12cd24: 0x2694d998  addiu       $s4, $s4, -0x2668
    ctx->pc = 0x12cd24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957464));
    // 0x12cd28: 0xafc01950  sw          $zero, 0x1950($fp)
    ctx->pc = 0x12cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6480), GPR_U32(ctx, 0));
    // 0x12cd2c: 0x2673d9b0  addiu       $s3, $s3, -0x2650
    ctx->pc = 0x12cd2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957488));
    // 0x12cd30: 0xafc01954  sw          $zero, 0x1954($fp)
    ctx->pc = 0x12cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6484), GPR_U32(ctx, 0));
    // 0x12cd34: 0x2652d9c8  addiu       $s2, $s2, -0x2638
    ctx->pc = 0x12cd34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957512));
    // 0x12cd38: 0xafc018dc  sw          $zero, 0x18DC($fp)
    ctx->pc = 0x12cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6364), GPR_U32(ctx, 0));
    // 0x12cd3c: 0x2631d9d8  addiu       $s1, $s1, -0x2628
    ctx->pc = 0x12cd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957528));
    // 0x12cd40: 0xafc018f0  sw          $zero, 0x18F0($fp)
    ctx->pc = 0x12cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6384), GPR_U32(ctx, 0));
    // 0x12cd44: 0x2610d9e8  addiu       $s0, $s0, -0x2618
    ctx->pc = 0x12cd44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957544));
    // 0x12cd48: 0xafc018f4  sw          $zero, 0x18F4($fp)
    ctx->pc = 0x12cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6388), GPR_U32(ctx, 0));
    // 0x12cd4c: 0x25efd9f8  addiu       $t7, $t7, -0x2608
    ctx->pc = 0x12cd4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294957560));
    // 0x12cd50: 0xe7d618f8  swc1        $f22, 0x18F8($fp)
    ctx->pc = 0x12cd50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6392), bits); }
    // 0x12cd54: 0x25ceda08  addiu       $t6, $t6, -0x25F8
    ctx->pc = 0x12cd54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957576));
    // 0x12cd58: 0xe7d61900  swc1        $f22, 0x1900($fp)
    ctx->pc = 0x12cd58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6400), bits); }
    // 0x12cd5c: 0x25adda18  addiu       $t5, $t5, -0x25E8
    ctx->pc = 0x12cd5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957592));
    // 0x12cd60: 0xafc01904  sw          $zero, 0x1904($fp)
    ctx->pc = 0x12cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6404), GPR_U32(ctx, 0));
    // 0x12cd64: 0x258cda28  addiu       $t4, $t4, -0x25D8
    ctx->pc = 0x12cd64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294957608));
    // 0x12cd68: 0xafc01908  sw          $zero, 0x1908($fp)
    ctx->pc = 0x12cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6408), GPR_U32(ctx, 0));
    // 0x12cd6c: 0x256bda38  addiu       $t3, $t3, -0x25C8
    ctx->pc = 0x12cd6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957624));
    // 0x12cd70: 0x6bc418f7  ldl         $a0, 0x18F7($fp)
    ctx->pc = 0x12cd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 6391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12cd74: 0x6fc418f0  ldr         $a0, 0x18F0($fp)
    ctx->pc = 0x12cd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 6384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12cd78: 0x8fc518f8  lw          $a1, 0x18F8($fp)
    ctx->pc = 0x12cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6392)));
    // 0x12cd7c: 0xb3c41917  sdl         $a0, 0x1917($fp)
    ctx->pc = 0x12cd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 6423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12cd80: 0xb7c41910  sdr         $a0, 0x1910($fp)
    ctx->pc = 0x12cd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 6416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12cd84: 0xafc51918  sw          $a1, 0x1918($fp)
    ctx->pc = 0x12cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6424), GPR_U32(ctx, 5));
    // 0x12cd88: 0x254ada40  addiu       $t2, $t2, -0x25C0
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957632));
    // 0x12cd8c: 0xafc018e0  sw          $zero, 0x18E0($fp)
    ctx->pc = 0x12cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6368), GPR_U32(ctx, 0));
    // 0x12cd90: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x12cd90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x12cd94: 0xafc018e4  sw          $zero, 0x18E4($fp)
    ctx->pc = 0x12cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6372), GPR_U32(ctx, 0));
    // 0x12cd98: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12cd9c: 0xafc018e8  sw          $zero, 0x18E8($fp)
    ctx->pc = 0x12cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6376), GPR_U32(ctx, 0));
    // 0x12cda0: 0x2529da58  addiu       $t1, $t1, -0x25A8
    ctx->pc = 0x12cda0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957656));
    // 0x12cda4: 0xafc61a6c  sw          $a2, 0x1A6C($fp)
    ctx->pc = 0x12cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6764), GPR_U32(ctx, 6));
    // 0x12cda8: 0x2508da70  addiu       $t0, $t0, -0x2590
    ctx->pc = 0x12cda8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957680));
    // 0x12cdac: 0xafc61a64  sw          $a2, 0x1A64($fp)
    ctx->pc = 0x12cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6756), GPR_U32(ctx, 6));
    // 0x12cdb0: 0x24e7da88  addiu       $a3, $a3, -0x2578
    ctx->pc = 0x12cdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957704));
    // 0x12cdb4: 0xafc61a68  sw          $a2, 0x1A68($fp)
    ctx->pc = 0x12cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6760), GPR_U32(ctx, 6));
    // 0x12cdb8: 0x24a5daa0  addiu       $a1, $a1, -0x2560
    ctx->pc = 0x12cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957728));
    // 0x12cdbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12cdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cdc0: 0xafc01924  sw          $zero, 0x1924($fp)
    ctx->pc = 0x12cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6436), GPR_U32(ctx, 0));
    // 0x12cdc4: 0xafc60044  sw          $a2, 0x44($fp)
    ctx->pc = 0x12cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 6));
    // 0x12cdc8: 0x2463dab0  addiu       $v1, $v1, -0x2550
    ctx->pc = 0x12cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957744));
    // 0x12cdcc: 0xafc01920  sw          $zero, 0x1920($fp)
    ctx->pc = 0x12cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6432), GPR_U32(ctx, 0));
    // 0x12cdd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cdd4: 0xe7d818d4  swc1        $f24, 0x18D4($fp)
    ctx->pc = 0x12cdd4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6356), bits); }
    // 0x12cdd8: 0xafc01b04  sw          $zero, 0x1B04($fp)
    ctx->pc = 0x12cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6916), GPR_U32(ctx, 0));
    // 0x12cddc: 0xafc01b08  sw          $zero, 0x1B08($fp)
    ctx->pc = 0x12cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6920), GPR_U32(ctx, 0));
    // 0x12cde0: 0xafc01b0c  sw          $zero, 0x1B0C($fp)
    ctx->pc = 0x12cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6924), GPR_U32(ctx, 0));
    // 0x12cde4: 0xafc01b10  sw          $zero, 0x1B10($fp)
    ctx->pc = 0x12cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6928), GPR_U32(ctx, 0));
    // 0x12cde8: 0xafc01b14  sw          $zero, 0x1B14($fp)
    ctx->pc = 0x12cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6932), GPR_U32(ctx, 0));
    // 0x12cdec: 0xafc01b18  sw          $zero, 0x1B18($fp)
    ctx->pc = 0x12cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6936), GPR_U32(ctx, 0));
    // 0x12cdf0: 0xafc01a70  sw          $zero, 0x1A70($fp)
    ctx->pc = 0x12cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6768), GPR_U32(ctx, 0));
    // 0x12cdf4: 0xafc01a78  sw          $zero, 0x1A78($fp)
    ctx->pc = 0x12cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6776), GPR_U32(ctx, 0));
    // 0x12cdf8: 0xafc01a7c  sw          $zero, 0x1A7C($fp)
    ctx->pc = 0x12cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6780), GPR_U32(ctx, 0));
    // 0x12cdfc: 0xafc01a74  sw          $zero, 0x1A74($fp)
    ctx->pc = 0x12cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6772), GPR_U32(ctx, 0));
    // 0x12ce00: 0xafc01aa0  sw          $zero, 0x1AA0($fp)
    ctx->pc = 0x12ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6816), GPR_U32(ctx, 0));
    // 0x12ce04: 0xafc01aa4  sw          $zero, 0x1AA4($fp)
    ctx->pc = 0x12ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6820), GPR_U32(ctx, 0));
    // 0x12ce08: 0xafc01aa8  sw          $zero, 0x1AA8($fp)
    ctx->pc = 0x12ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6824), GPR_U32(ctx, 0));
    // 0x12ce0c: 0xafc01aac  sw          $zero, 0x1AAC($fp)
    ctx->pc = 0x12ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6828), GPR_U32(ctx, 0));
    // 0x12ce10: 0xafc01ab0  sw          $zero, 0x1AB0($fp)
    ctx->pc = 0x12ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6832), GPR_U32(ctx, 0));
    // 0x12ce14: 0xafc018d8  sw          $zero, 0x18D8($fp)
    ctx->pc = 0x12ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6360), GPR_U32(ctx, 0));
    // 0x12ce18: 0xafc0187c  sw          $zero, 0x187C($fp)
    ctx->pc = 0x12ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6268), GPR_U32(ctx, 0));
    // 0x12ce1c: 0x8fb90010  lw          $t9, 0x10($sp)
    ctx->pc = 0x12ce1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ce20: 0xaf26000c  sw          $a2, 0xC($t9)
    ctx->pc = 0x12ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 6));
    // 0x12ce24: 0xaf3e0008  sw          $fp, 0x8($t9)
    ctx->pc = 0x12ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 30));
    // 0x12ce28: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12ce2c: 0x3c190069  lui         $t9, 0x69
    ctx->pc = 0x12ce2cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)105 << 16));
    // 0x12ce30: 0x24c6d8b0  addiu       $a2, $a2, -0x2750
    ctx->pc = 0x12ce30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957232));
    // 0x12ce34: 0x2739d8c0  addiu       $t9, $t9, -0x2740
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294957248));
    // 0x12ce38: 0xafc61540  sw          $a2, 0x1540($fp)
    ctx->pc = 0x12ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5440), GPR_U32(ctx, 6));
    // 0x12ce3c: 0xafd91548  sw          $t9, 0x1548($fp)
    ctx->pc = 0x12ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5448), GPR_U32(ctx, 25));
    // 0x12ce40: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12ce40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12ce44: 0x3c190069  lui         $t9, 0x69
    ctx->pc = 0x12ce44u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)105 << 16));
    // 0x12ce48: 0x24c6d8c8  addiu       $a2, $a2, -0x2738
    ctx->pc = 0x12ce48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957256));
    // 0x12ce4c: 0x2739d8d8  addiu       $t9, $t9, -0x2728
    ctx->pc = 0x12ce4cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294957272));
    // 0x12ce50: 0xafc61558  sw          $a2, 0x1558($fp)
    ctx->pc = 0x12ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5464), GPR_U32(ctx, 6));
    // 0x12ce54: 0xafd91560  sw          $t9, 0x1560($fp)
    ctx->pc = 0x12ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5472), GPR_U32(ctx, 25));
    // 0x12ce58: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12ce58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12ce5c: 0x3c190069  lui         $t9, 0x69
    ctx->pc = 0x12ce5cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)105 << 16));
    // 0x12ce60: 0x24c6d8e8  addiu       $a2, $a2, -0x2718
    ctx->pc = 0x12ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957288));
    // 0x12ce64: 0x2739d8f8  addiu       $t9, $t9, -0x2708
    ctx->pc = 0x12ce64u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294957304));
    // 0x12ce68: 0xafc61568  sw          $a2, 0x1568($fp)
    ctx->pc = 0x12ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5480), GPR_U32(ctx, 6));
    // 0x12ce6c: 0xafd91570  sw          $t9, 0x1570($fp)
    ctx->pc = 0x12ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5488), GPR_U32(ctx, 25));
    // 0x12ce70: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12ce74: 0xafc21578  sw          $v0, 0x1578($fp)
    ctx->pc = 0x12ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5496), GPR_U32(ctx, 2));
    // 0x12ce78: 0x3c190069  lui         $t9, 0x69
    ctx->pc = 0x12ce78u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)105 << 16));
    // 0x12ce7c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x12ce80: 0x24c6d928  addiu       $a2, $a2, -0x26D8
    ctx->pc = 0x12ce80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957352));
    // 0x12ce84: 0x2442d918  addiu       $v0, $v0, -0x26E8
    ctx->pc = 0x12ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957336));
    // 0x12ce88: 0x2739d950  addiu       $t9, $t9, -0x26B0
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294957392));
    // 0x12ce8c: 0xafc21bc8  sw          $v0, 0x1BC8($fp)
    ctx->pc = 0x12ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7112), GPR_U32(ctx, 2));
    // 0x12ce90: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x12ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x12ce94: 0xafc61580  sw          $a2, 0x1580($fp)
    ctx->pc = 0x12ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5504), GPR_U32(ctx, 6));
    // 0x12ce98: 0xc440dab8  lwc1        $f0, -0x2548($v0)
    ctx->pc = 0x12ce98u;
    { uint32_t bits = FAST_READ32(0x68DAB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce9c: 0xafd81588  sw          $t8, 0x1588($fp)
    ctx->pc = 0x12ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5512), GPR_U32(ctx, 24));
    // 0x12cea0: 0xafd91598  sw          $t9, 0x1598($fp)
    ctx->pc = 0x12cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5528), GPR_U32(ctx, 25));
    // 0x12cea4: 0xafd615a0  sw          $s6, 0x15A0($fp)
    ctx->pc = 0x12cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5536), GPR_U32(ctx, 22));
    // 0x12cea8: 0xafd515a8  sw          $s5, 0x15A8($fp)
    ctx->pc = 0x12cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5544), GPR_U32(ctx, 21));
    // 0x12ceac: 0xafd415b0  sw          $s4, 0x15B0($fp)
    ctx->pc = 0x12ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5552), GPR_U32(ctx, 20));
    // 0x12ceb0: 0xafd315b8  sw          $s3, 0x15B8($fp)
    ctx->pc = 0x12ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5560), GPR_U32(ctx, 19));
    // 0x12ceb4: 0xafd215c0  sw          $s2, 0x15C0($fp)
    ctx->pc = 0x12ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5568), GPR_U32(ctx, 18));
    // 0x12ceb8: 0xafd115c8  sw          $s1, 0x15C8($fp)
    ctx->pc = 0x12ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5576), GPR_U32(ctx, 17));
    // 0x12cebc: 0xafd015d0  sw          $s0, 0x15D0($fp)
    ctx->pc = 0x12cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5584), GPR_U32(ctx, 16));
    // 0x12cec0: 0xafcf15d8  sw          $t7, 0x15D8($fp)
    ctx->pc = 0x12cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5592), GPR_U32(ctx, 15));
    // 0x12cec4: 0xafce15e0  sw          $t6, 0x15E0($fp)
    ctx->pc = 0x12cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5600), GPR_U32(ctx, 14));
    // 0x12cec8: 0xafcd15e8  sw          $t5, 0x15E8($fp)
    ctx->pc = 0x12cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5608), GPR_U32(ctx, 13));
    // 0x12cecc: 0xafcc15f0  sw          $t4, 0x15F0($fp)
    ctx->pc = 0x12ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5616), GPR_U32(ctx, 12));
    // 0x12ced0: 0xafcb15f8  sw          $t3, 0x15F8($fp)
    ctx->pc = 0x12ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5624), GPR_U32(ctx, 11));
    // 0x12ced4: 0xafca1600  sw          $t2, 0x1600($fp)
    ctx->pc = 0x12ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5632), GPR_U32(ctx, 10));
    // 0x12ced8: 0xafc91608  sw          $t1, 0x1608($fp)
    ctx->pc = 0x12ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5640), GPR_U32(ctx, 9));
    // 0x12cedc: 0xafc81618  sw          $t0, 0x1618($fp)
    ctx->pc = 0x12cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5656), GPR_U32(ctx, 8));
    // 0x12cee0: 0xafc71610  sw          $a3, 0x1610($fp)
    ctx->pc = 0x12cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5648), GPR_U32(ctx, 7));
    // 0x12cee4: 0xafc51620  sw          $a1, 0x1620($fp)
    ctx->pc = 0x12cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5664), GPR_U32(ctx, 5));
    // 0x12cee8: 0xafc31628  sw          $v1, 0x1628($fp)
    ctx->pc = 0x12cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5672), GPR_U32(ctx, 3));
    // 0x12ceec: 0xe7c01530  swc1        $f0, 0x1530($fp)
    ctx->pc = 0x12ceecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 5424), bits); }
    // 0x12cef0: 0xe7c0152c  swc1        $f0, 0x152C($fp)
    ctx->pc = 0x12cef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 5420), bits); }
    // 0x12cef4: 0xe7d61b28  swc1        $f22, 0x1B28($fp)
    ctx->pc = 0x12cef4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6952), bits); }
    // 0x12cef8: 0xafc014e8  sw          $zero, 0x14E8($fp)
    ctx->pc = 0x12cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5352), GPR_U32(ctx, 0));
    // 0x12cefc: 0xafc014d4  sw          $zero, 0x14D4($fp)
    ctx->pc = 0x12cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5332), GPR_U32(ctx, 0));
    // 0x12cf00: 0xafc014d8  sw          $zero, 0x14D8($fp)
    ctx->pc = 0x12cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5336), GPR_U32(ctx, 0));
    // 0x12cf04: 0xafc014dc  sw          $zero, 0x14DC($fp)
    ctx->pc = 0x12cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5340), GPR_U32(ctx, 0));
    // 0x12cf08: 0xafc01534  sw          $zero, 0x1534($fp)
    ctx->pc = 0x12cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5428), GPR_U32(ctx, 0));
    // 0x12cf0c: 0xafc01538  sw          $zero, 0x1538($fp)
    ctx->pc = 0x12cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5432), GPR_U32(ctx, 0));
    // 0x12cf10: 0xafc0153c  sw          $zero, 0x153C($fp)
    ctx->pc = 0x12cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5436), GPR_U32(ctx, 0));
    // 0x12cf14: 0xafc014e0  sw          $zero, 0x14E0($fp)
    ctx->pc = 0x12cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5344), GPR_U32(ctx, 0));
    // 0x12cf18: 0xc05882a  jal         func_1620A8
    ctx->pc = 0x12CF18u;
    SET_GPR_U32(ctx, 31, 0x12CF20u);
    ctx->pc = 0x12CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF18u;
    // 0x12cf1c: 0xafc014e4  sw          $zero, 0x14E4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 5348), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1620A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1620A8u, 0x12CF18u, 0x12CF20u)) {
        return;
    }
    ctx->pc = 0x12CF20u;
label_12cf20:
    // 0x12cf20: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CF20u;
    {
        const bool branch_taken_0x12cf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cf20) {
            ctx->pc = 0x12CF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CF20u;
            // 0x12cf24: 0xafc2026c  sw          $v0, 0x26C($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 620), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CF28u;
            goto label_12cf28;
        }
    }
    ctx->pc = 0x12CF28u;
label_12cf28:
    // 0x12cf28: 0xc05882a  jal         func_1620A8
    ctx->pc = 0x12CF28u;
    SET_GPR_U32(ctx, 31, 0x12CF30u);
    ctx->pc = 0x12CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF28u;
    // 0x12cf2c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1620A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1620A8u, 0x12CF28u, 0x12CF30u)) {
        return;
    }
    ctx->pc = 0x12CF30u;
label_12cf30:
    // 0x12cf30: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CF30u;
    {
        const bool branch_taken_0x12cf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cf30) {
            ctx->pc = 0x12CF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CF30u;
            // 0x12cf34: 0xafc20270  sw          $v0, 0x270($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 624), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CF38u;
            goto label_12cf38;
        }
    }
    ctx->pc = 0x12CF38u;
label_12cf38:
    // 0x12cf38: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x12cf3c: 0xafc01a98  sw          $zero, 0x1A98($fp)
    ctx->pc = 0x12cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6808), GPR_U32(ctx, 0));
    // 0x12cf40: 0x26108880  addiu       $s0, $s0, -0x7780
    ctx->pc = 0x12cf40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936704));
    // 0x12cf44: 0xafc01a9c  sw          $zero, 0x1A9C($fp)
    ctx->pc = 0x12cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6812), GPR_U32(ctx, 0));
    // 0x12cf48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf4c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12CF4Cu;
    SET_GPR_U32(ctx, 31, 0x12CF54u);
    ctx->pc = 0x12CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF4Cu;
    // 0x12cf50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12CF4Cu, 0x12CF54u)) {
        return;
    }
    ctx->pc = 0x12CF54u;
label_12cf54:
    // 0x12cf54: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12cf54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12cf58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12cf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cf60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf64: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CF64u;
    SET_GPR_U32(ctx, 31, 0x12CF6Cu);
    ctx->pc = 0x12CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF64u;
    // 0x12cf68: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CF64u, 0x12CF6Cu)) {
        return;
    }
    ctx->pc = 0x12CF6Cu;
label_12cf6c:
    // 0x12cf6c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x12cf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x12cf70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12cf70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12cf74: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12cf78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf7c: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x12cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x12cf80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cf80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf84: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CF84u;
    SET_GPR_U32(ctx, 31, 0x12CF8Cu);
    ctx->pc = 0x12CF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF84u;
    // 0x12cf88: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CF84u, 0x12CF8Cu)) {
        return;
    }
    ctx->pc = 0x12CF8Cu;
label_12cf8c:
    // 0x12cf8c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12cf90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf94: 0x24a586b8  addiu       $a1, $a1, -0x7948
    ctx->pc = 0x12cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
    // 0x12cf98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf9c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CF9Cu;
    SET_GPR_U32(ctx, 31, 0x12CFA4u);
    ctx->pc = 0x12CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF9Cu;
    // 0x12cfa0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CF9Cu, 0x12CFA4u)) {
        return;
    }
    ctx->pc = 0x12CFA4u;
label_12cfa4:
    // 0x12cfa4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12cfa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfac: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12cfacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12cfb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12cfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfb4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x12CFB4u;
    SET_GPR_U32(ctx, 31, 0x12CFBCu);
    ctx->pc = 0x12CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFB4u;
    // 0x12cfb8: 0x24a586c0  addiu       $a1, $a1, -0x7940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x12CFB4u, 0x12CFBCu)) {
        return;
    }
    ctx->pc = 0x12CFBCu;
label_12cfbc:
    // 0x12cfbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x12cfc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12cfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfc4: 0xc07be50  jal         func_1EF940
    ctx->pc = 0x12CFC4u;
    SET_GPR_U32(ctx, 31, 0x12CFCCu);
    ctx->pc = 0x12CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFC4u;
    // 0x12cfc8: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF940u, 0x12CFC4u, 0x12CFCCu)) {
        return;
    }
    ctx->pc = 0x12CFCCu;
label_12cfcc:
    // 0x12cfcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cfd0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x12cfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x12cfd4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x12cfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12cfd8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x12cfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x12cfdc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x12cfdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x12cfe0: 0xafc219ec  sw          $v0, 0x19EC($fp)
    ctx->pc = 0x12cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6636), GPR_U32(ctx, 2));
    // 0x12cfe4: 0xafc219d4  sw          $v0, 0x19D4($fp)
    ctx->pc = 0x12cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6612), GPR_U32(ctx, 2));
    // 0x12cfe8: 0x460031c7  neg.s       $f7, $f6
    ctx->pc = 0x12cfe8u;
    ctx->f[7] = FPU_NEG_S(ctx->f[6]);
    // 0x12cfec: 0xafc219d8  sw          $v0, 0x19D8($fp)
    ctx->pc = 0x12cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6616), GPR_U32(ctx, 2));
    // 0x12cff0: 0xafc219dc  sw          $v0, 0x19DC($fp)
    ctx->pc = 0x12cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6620), GPR_U32(ctx, 2));
    // 0x12cff4: 0xafc219e8  sw          $v0, 0x19E8($fp)
    ctx->pc = 0x12cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6632), GPR_U32(ctx, 2));
    // 0x12cff8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x12cff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x12cffc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12cffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d004: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x12d004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x12d008: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12d008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12d00c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x12d00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x12d010: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12d010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12d014: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12d014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12d018: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x12d018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x12d01c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12d01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d020: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x12d020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x12d024: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12d024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d028: 0xe7c219b0  swc1        $f2, 0x19B0($fp)
    ctx->pc = 0x12d028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6576), bits); }
    // 0x12d02c: 0xe7c319b4  swc1        $f3, 0x19B4($fp)
    ctx->pc = 0x12d02cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6580), bits); }
    // 0x12d030: 0xe7c019bc  swc1        $f0, 0x19BC($fp)
    ctx->pc = 0x12d030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6588), bits); }
    // 0x12d034: 0xe7c119c0  swc1        $f1, 0x19C0($fp)
    ctx->pc = 0x12d034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6592), bits); }
    // 0x12d038: 0xe7c41a20  swc1        $f4, 0x1A20($fp)
    ctx->pc = 0x12d038u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6688), bits); }
    // 0x12d03c: 0xe7c519b8  swc1        $f5, 0x19B8($fp)
    ctx->pc = 0x12d03cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6584), bits); }
    // 0x12d040: 0xe7d919a8  swc1        $f25, 0x19A8($fp)
    ctx->pc = 0x12d040u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6568), bits); }
    // 0x12d044: 0xafc2197c  sw          $v0, 0x197C($fp)
    ctx->pc = 0x12d044u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6524), GPR_U32(ctx, 2));
    // 0x12d048: 0xafc21524  sw          $v0, 0x1524($fp)
    ctx->pc = 0x12d048u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5412), GPR_U32(ctx, 2));
    // 0x12d04c: 0xafc21528  sw          $v0, 0x1528($fp)
    ctx->pc = 0x12d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5416), GPR_U32(ctx, 2));
    // 0x12d050: 0xe7d519ac  swc1        $f21, 0x19AC($fp)
    ctx->pc = 0x12d050u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6572), bits); }
    // 0x12d054: 0xe7d41a28  swc1        $f20, 0x1A28($fp)
    ctx->pc = 0x12d054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6696), bits); }
    // 0x12d058: 0xe7d41a24  swc1        $f20, 0x1A24($fp)
    ctx->pc = 0x12d058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6692), bits); }
    // 0x12d05c: 0xe7d419f8  swc1        $f20, 0x19F8($fp)
    ctx->pc = 0x12d05cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6648), bits); }
    // 0x12d060: 0xe7d419fc  swc1        $f20, 0x19FC($fp)
    ctx->pc = 0x12d060u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6652), bits); }
    // 0x12d064: 0xe7d41a00  swc1        $f20, 0x1A00($fp)
    ctx->pc = 0x12d064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6656), bits); }
    // 0x12d068: 0xafc01980  sw          $zero, 0x1980($fp)
    ctx->pc = 0x12d068u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6528), GPR_U32(ctx, 0));
    // 0x12d06c: 0xafc014cc  sw          $zero, 0x14CC($fp)
    ctx->pc = 0x12d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5324), GPR_U32(ctx, 0));
    // 0x12d070: 0xafc01988  sw          $zero, 0x1988($fp)
    ctx->pc = 0x12d070u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6536), GPR_U32(ctx, 0));
    // 0x12d074: 0xafc0198c  sw          $zero, 0x198C($fp)
    ctx->pc = 0x12d074u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6540), GPR_U32(ctx, 0));
    // 0x12d078: 0xafc019c4  sw          $zero, 0x19C4($fp)
    ctx->pc = 0x12d078u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6596), GPR_U32(ctx, 0));
    // 0x12d07c: 0xafc019c8  sw          $zero, 0x19C8($fp)
    ctx->pc = 0x12d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6600), GPR_U32(ctx, 0));
    // 0x12d080: 0xafc019cc  sw          $zero, 0x19CC($fp)
    ctx->pc = 0x12d080u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6604), GPR_U32(ctx, 0));
    // 0x12d084: 0xafc019d0  sw          $zero, 0x19D0($fp)
    ctx->pc = 0x12d084u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6608), GPR_U32(ctx, 0));
    // 0x12d088: 0xafc019e0  sw          $zero, 0x19E0($fp)
    ctx->pc = 0x12d088u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6624), GPR_U32(ctx, 0));
    // 0x12d08c: 0xafc019e4  sw          $zero, 0x19E4($fp)
    ctx->pc = 0x12d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6628), GPR_U32(ctx, 0));
    // 0x12d090: 0xafc019f0  sw          $zero, 0x19F0($fp)
    ctx->pc = 0x12d090u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6640), GPR_U32(ctx, 0));
    // 0x12d094: 0xafc019f4  sw          $zero, 0x19F4($fp)
    ctx->pc = 0x12d094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6644), GPR_U32(ctx, 0));
    // 0x12d098: 0xe7d41a04  swc1        $f20, 0x1A04($fp)
    ctx->pc = 0x12d098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6660), bits); }
    // 0x12d09c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x12d0a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12d0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d0a4: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x12d0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x12d0a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12d0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d0ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x12d0acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d0b0: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x12d0b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d0b4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x12d0b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12d0b8: 0xe7c51a08  swc1        $f5, 0x1A08($fp)
    ctx->pc = 0x12d0b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6664), bits); }
    // 0x12d0bc: 0xe7c01a0c  swc1        $f0, 0x1A0C($fp)
    ctx->pc = 0x12d0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6668), bits); }
    // 0x12d0c0: 0xe7c71a14  swc1        $f7, 0x1A14($fp)
    ctx->pc = 0x12d0c0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6676), bits); }
    // 0x12d0c4: 0xe7d71a18  swc1        $f23, 0x1A18($fp)
    ctx->pc = 0x12d0c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6680), bits); }
    // 0x12d0c8: 0xe7c11a1c  swc1        $f1, 0x1A1C($fp)
    ctx->pc = 0x12d0c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6684), bits); }
    // 0x12d0cc: 0xe7c61a10  swc1        $f6, 0x1A10($fp)
    ctx->pc = 0x12d0ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6672), bits); }
    // 0x12d0d0: 0xafc01a2c  sw          $zero, 0x1A2C($fp)
    ctx->pc = 0x12d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6700), GPR_U32(ctx, 0));
    // 0x12d0d4: 0xafc01a30  sw          $zero, 0x1A30($fp)
    ctx->pc = 0x12d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6704), GPR_U32(ctx, 0));
    // 0x12d0d8: 0xafc01a34  sw          $zero, 0x1A34($fp)
    ctx->pc = 0x12d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6708), GPR_U32(ctx, 0));
    // 0x12d0dc: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x12d0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12d0e0: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x12d0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12d0e4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x12d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d0e8: 0xb3c31a47  sdl         $v1, 0x1A47($fp)
    ctx->pc = 0x12d0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d0ec: 0xb7c31a40  sdr         $v1, 0x1A40($fp)
    ctx->pc = 0x12d0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d0f0: 0xafc41a48  sw          $a0, 0x1A48($fp)
    ctx->pc = 0x12d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6728), GPR_U32(ctx, 4));
    // 0x12d0f4: 0xafc01a50  sw          $zero, 0x1A50($fp)
    ctx->pc = 0x12d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6736), GPR_U32(ctx, 0));
    // 0x12d0f8: 0xafc01a54  sw          $zero, 0x1A54($fp)
    ctx->pc = 0x12d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6740), GPR_U32(ctx, 0));
    // 0x12d0fc: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x12D0FCu;
    SET_GPR_U32(ctx, 31, 0x12D104u);
    ctx->pc = 0x12D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D0FCu;
    // 0x12d100: 0xafc01a58  sw          $zero, 0x1A58($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 6744), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x12D0FCu, 0x12D104u)) {
        return;
    }
    ctx->pc = 0x12D104u;
label_12d104:
    // 0x12d104: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x12d104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x12d108: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12d108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d10c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d110: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12d110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x12d114: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12d114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12d118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12d118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d11c: 0x27c314f0  addiu       $v1, $fp, 0x14F0
    ctx->pc = 0x12d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5360));
    // 0x12d120: 0xac5e0014  sw          $fp, 0x14($v0)
    ctx->pc = 0x12d120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 30));
    // 0x12d124: 0x27c41b60  addiu       $a0, $fp, 0x1B60
    ctx->pc = 0x12d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 7008));
    // 0x12d128: 0xe7c01bd0  swc1        $f0, 0x1BD0($fp)
    ctx->pc = 0x12d128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7120), bits); }
    // 0x12d12c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x12d12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d130: 0xe7d61bd8  swc1        $f22, 0x1BD8($fp)
    ctx->pc = 0x12d130u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7128), bits); }
    // 0x12d134: 0xe7c11bdc  swc1        $f1, 0x1BDC($fp)
    ctx->pc = 0x12d134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7132), bits); }
    // 0x12d138: 0xe7d51be0  swc1        $f21, 0x1BE0($fp)
    ctx->pc = 0x12d138u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7136), bits); }
    // 0x12d13c: 0xe7d41abc  swc1        $f20, 0x1ABC($fp)
    ctx->pc = 0x12d13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6844), bits); }
    // 0x12d140: 0xe7d41ac0  swc1        $f20, 0x1AC0($fp)
    ctx->pc = 0x12d140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6848), bits); }
    // 0x12d144: 0xe7d41ac4  swc1        $f20, 0x1AC4($fp)
    ctx->pc = 0x12d144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6852), bits); }
    // 0x12d148: 0xe7d41ac8  swc1        $f20, 0x1AC8($fp)
    ctx->pc = 0x12d148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6856), bits); }
    // 0x12d14c: 0xe7d41acc  swc1        $f20, 0x1ACC($fp)
    ctx->pc = 0x12d14cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6860), bits); }
    // 0x12d150: 0xe7d41ad0  swc1        $f20, 0x1AD0($fp)
    ctx->pc = 0x12d150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6864), bits); }
    // 0x12d154: 0xe7d41ad4  swc1        $f20, 0x1AD4($fp)
    ctx->pc = 0x12d154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6868), bits); }
    // 0x12d158: 0xe7d41ad8  swc1        $f20, 0x1AD8($fp)
    ctx->pc = 0x12d158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6872), bits); }
    // 0x12d15c: 0xe7d41adc  swc1        $f20, 0x1ADC($fp)
    ctx->pc = 0x12d15cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6876), bits); }
    // 0x12d160: 0xe7d41ae0  swc1        $f20, 0x1AE0($fp)
    ctx->pc = 0x12d160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6880), bits); }
    // 0x12d164: 0xe7d51bd4  swc1        $f21, 0x1BD4($fp)
    ctx->pc = 0x12d164u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7124), bits); }
    // 0x12d168: 0xe7d41ae4  swc1        $f20, 0x1AE4($fp)
    ctx->pc = 0x12d168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6884), bits); }
    // 0x12d16c: 0xe7d41ae8  swc1        $f20, 0x1AE8($fp)
    ctx->pc = 0x12d16cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6888), bits); }
    // 0x12d170: 0xe7d41aec  swc1        $f20, 0x1AEC($fp)
    ctx->pc = 0x12d170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6892), bits); }
    // 0x12d174: 0xe7d41af0  swc1        $f20, 0x1AF0($fp)
    ctx->pc = 0x12d174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6896), bits); }
    // 0x12d178: 0xe7d41afc  swc1        $f20, 0x1AFC($fp)
    ctx->pc = 0x12d178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6908), bits); }
    // 0x12d17c: 0xe7d41b00  swc1        $f20, 0x1B00($fp)
    ctx->pc = 0x12d17cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6912), bits); }
    // 0x12d180: 0xafc71b58  sw          $a3, 0x1B58($fp)
    ctx->pc = 0x12d180u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7000), GPR_U32(ctx, 7));
    // 0x12d184: 0xafc01ab8  sw          $zero, 0x1AB8($fp)
    ctx->pc = 0x12d184u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6840), GPR_U32(ctx, 0));
    // 0x12d188: 0xafc01af4  sw          $zero, 0x1AF4($fp)
    ctx->pc = 0x12d188u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6900), GPR_U32(ctx, 0));
    // 0x12d18c: 0xafc01af8  sw          $zero, 0x1AF8($fp)
    ctx->pc = 0x12d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6904), GPR_U32(ctx, 0));
    // 0x12d190: 0xafde1b50  sw          $fp, 0x1B50($fp)
    ctx->pc = 0x12d190u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6992), GPR_U32(ctx, 30));
    // 0x12d194: 0xafc01b54  sw          $zero, 0x1B54($fp)
    ctx->pc = 0x12d194u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6996), GPR_U32(ctx, 0));
    // 0x12d198: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x12d198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12d19c: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x12d19cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12d1a0: 0xe7d414f0  swc1        $f20, 0x14F0($fp)
    ctx->pc = 0x12d1a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 5360), bits); }
    // 0x12d1a4: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x12d1a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12d1a8: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x12d1a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12d1ac: 0xe7d41b60  swc1        $f20, 0x1B60($fp)
    ctx->pc = 0x12d1acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7008), bits); }
    // 0x12d1b0: 0xe7d81bac  swc1        $f24, 0x1BAC($fp)
    ctx->pc = 0x12d1b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7084), bits); }
    // 0x12d1b4: 0xe7d41bb4  swc1        $f20, 0x1BB4($fp)
    ctx->pc = 0x12d1b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7092), bits); }
    // 0x12d1b8: 0xe7d41ab4  swc1        $f20, 0x1AB4($fp)
    ctx->pc = 0x12d1b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6836), bits); }
    // 0x12d1bc: 0xe7d41b7c  swc1        $f20, 0x1B7C($fp)
    ctx->pc = 0x12d1bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7036), bits); }
    // 0x12d1c0: 0xe7d41ba0  swc1        $f20, 0x1BA0($fp)
    ctx->pc = 0x12d1c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7072), bits); }
    // 0x12d1c4: 0xe7d81ba4  swc1        $f24, 0x1BA4($fp)
    ctx->pc = 0x12d1c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7076), bits); }
    // 0x12d1c8: 0xe7d41ba8  swc1        $f20, 0x1BA8($fp)
    ctx->pc = 0x12d1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 7080), bits); }
    // 0x12d1cc: 0xafc71458  sw          $a3, 0x1458($fp)
    ctx->pc = 0x12d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5208), GPR_U32(ctx, 7));
    // 0x12d1d0: 0xafc01b70  sw          $zero, 0x1B70($fp)
    ctx->pc = 0x12d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7024), GPR_U32(ctx, 0));
    // 0x12d1d4: 0xafc01b74  sw          $zero, 0x1B74($fp)
    ctx->pc = 0x12d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7028), GPR_U32(ctx, 0));
    // 0x12d1d8: 0xafc01b78  sw          $zero, 0x1B78($fp)
    ctx->pc = 0x12d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7032), GPR_U32(ctx, 0));
    // 0x12d1dc: 0xafc01b80  sw          $zero, 0x1B80($fp)
    ctx->pc = 0x12d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7040), GPR_U32(ctx, 0));
    // 0x12d1e0: 0xafc01b88  sw          $zero, 0x1B88($fp)
    ctx->pc = 0x12d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7048), GPR_U32(ctx, 0));
    // 0x12d1e4: 0xafc01b84  sw          $zero, 0x1B84($fp)
    ctx->pc = 0x12d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7044), GPR_U32(ctx, 0));
    // 0x12d1e8: 0xafc01b8c  sw          $zero, 0x1B8C($fp)
    ctx->pc = 0x12d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7052), GPR_U32(ctx, 0));
    // 0x12d1ec: 0xafc01b90  sw          $zero, 0x1B90($fp)
    ctx->pc = 0x12d1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7056), GPR_U32(ctx, 0));
    // 0x12d1f0: 0xafc01b94  sw          $zero, 0x1B94($fp)
    ctx->pc = 0x12d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7060), GPR_U32(ctx, 0));
    // 0x12d1f4: 0xafc01b98  sw          $zero, 0x1B98($fp)
    ctx->pc = 0x12d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7064), GPR_U32(ctx, 0));
    // 0x12d1f8: 0xafc01b9c  sw          $zero, 0x1B9C($fp)
    ctx->pc = 0x12d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7068), GPR_U32(ctx, 0));
    // 0x12d1fc: 0xafc01bb0  sw          $zero, 0x1BB0($fp)
    ctx->pc = 0x12d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7088), GPR_U32(ctx, 0));
    // 0x12d200: 0xafc01bb8  sw          $zero, 0x1BB8($fp)
    ctx->pc = 0x12d200u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7096), GPR_U32(ctx, 0));
    // 0x12d204: 0xafc01be4  sw          $zero, 0x1BE4($fp)
    ctx->pc = 0x12d204u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7140), GPR_U32(ctx, 0));
    // 0x12d208: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12d208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12d20c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12d20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12d210: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12d210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d214: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x12d214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d218: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x12d218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d21c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12d21cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d220: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x12d220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d224: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x12d224u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d228: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x12d228u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d22c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12d22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d230: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x12d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x12d234: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x12d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x12d238: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x12d238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12d23c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x12d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12d240: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x12d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d244: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x12d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d248: 0x3e00008  jr          $ra
    ctx->pc = 0x12D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D248u;
        // 0x12d24c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D250u;
}
