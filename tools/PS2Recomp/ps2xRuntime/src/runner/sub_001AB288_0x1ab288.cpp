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

// Function: sub_001AB288
// Address: 0x1ab288 - 0x1ab5b8
void sub_001AB288_0x1ab288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB288_0x1ab288");
#endif

    switch (ctx->pc) {
        case 0x1ab288u: goto label_1ab288;
        case 0x1ab28cu: goto label_1ab28c;
        case 0x1ab290u: goto label_1ab290;
        case 0x1ab294u: goto label_1ab294;
        case 0x1ab298u: goto label_1ab298;
        case 0x1ab29cu: goto label_1ab29c;
        case 0x1ab2a0u: goto label_1ab2a0;
        case 0x1ab2a4u: goto label_1ab2a4;
        case 0x1ab2a8u: goto label_1ab2a8;
        case 0x1ab2acu: goto label_1ab2ac;
        case 0x1ab2b0u: goto label_1ab2b0;
        case 0x1ab2b4u: goto label_1ab2b4;
        case 0x1ab2b8u: goto label_1ab2b8;
        case 0x1ab2bcu: goto label_1ab2bc;
        case 0x1ab2c0u: goto label_1ab2c0;
        case 0x1ab2c4u: goto label_1ab2c4;
        case 0x1ab2c8u: goto label_1ab2c8;
        case 0x1ab2ccu: goto label_1ab2cc;
        case 0x1ab2d0u: goto label_1ab2d0;
        case 0x1ab2d4u: goto label_1ab2d4;
        case 0x1ab2d8u: goto label_1ab2d8;
        case 0x1ab2dcu: goto label_1ab2dc;
        case 0x1ab2e0u: goto label_1ab2e0;
        case 0x1ab2e4u: goto label_1ab2e4;
        case 0x1ab2e8u: goto label_1ab2e8;
        case 0x1ab2ecu: goto label_1ab2ec;
        case 0x1ab2f0u: goto label_1ab2f0;
        case 0x1ab2f4u: goto label_1ab2f4;
        case 0x1ab2f8u: goto label_1ab2f8;
        case 0x1ab2fcu: goto label_1ab2fc;
        case 0x1ab300u: goto label_1ab300;
        case 0x1ab304u: goto label_1ab304;
        case 0x1ab308u: goto label_1ab308;
        case 0x1ab30cu: goto label_1ab30c;
        case 0x1ab310u: goto label_1ab310;
        case 0x1ab314u: goto label_1ab314;
        case 0x1ab318u: goto label_1ab318;
        case 0x1ab31cu: goto label_1ab31c;
        case 0x1ab320u: goto label_1ab320;
        case 0x1ab324u: goto label_1ab324;
        case 0x1ab328u: goto label_1ab328;
        case 0x1ab32cu: goto label_1ab32c;
        case 0x1ab330u: goto label_1ab330;
        case 0x1ab334u: goto label_1ab334;
        case 0x1ab338u: goto label_1ab338;
        case 0x1ab33cu: goto label_1ab33c;
        case 0x1ab340u: goto label_1ab340;
        case 0x1ab344u: goto label_1ab344;
        case 0x1ab348u: goto label_1ab348;
        case 0x1ab34cu: goto label_1ab34c;
        case 0x1ab350u: goto label_1ab350;
        case 0x1ab354u: goto label_1ab354;
        case 0x1ab358u: goto label_1ab358;
        case 0x1ab35cu: goto label_1ab35c;
        case 0x1ab360u: goto label_1ab360;
        case 0x1ab364u: goto label_1ab364;
        case 0x1ab368u: goto label_1ab368;
        case 0x1ab36cu: goto label_1ab36c;
        case 0x1ab370u: goto label_1ab370;
        case 0x1ab374u: goto label_1ab374;
        case 0x1ab378u: goto label_1ab378;
        case 0x1ab37cu: goto label_1ab37c;
        case 0x1ab380u: goto label_1ab380;
        case 0x1ab384u: goto label_1ab384;
        case 0x1ab388u: goto label_1ab388;
        case 0x1ab38cu: goto label_1ab38c;
        case 0x1ab390u: goto label_1ab390;
        case 0x1ab394u: goto label_1ab394;
        case 0x1ab398u: goto label_1ab398;
        case 0x1ab39cu: goto label_1ab39c;
        case 0x1ab3a0u: goto label_1ab3a0;
        case 0x1ab3a4u: goto label_1ab3a4;
        case 0x1ab3a8u: goto label_1ab3a8;
        case 0x1ab3acu: goto label_1ab3ac;
        case 0x1ab3b0u: goto label_1ab3b0;
        case 0x1ab3b4u: goto label_1ab3b4;
        case 0x1ab3b8u: goto label_1ab3b8;
        case 0x1ab3bcu: goto label_1ab3bc;
        case 0x1ab3c0u: goto label_1ab3c0;
        case 0x1ab3c4u: goto label_1ab3c4;
        case 0x1ab3c8u: goto label_1ab3c8;
        case 0x1ab3ccu: goto label_1ab3cc;
        case 0x1ab3d0u: goto label_1ab3d0;
        case 0x1ab3d4u: goto label_1ab3d4;
        case 0x1ab3d8u: goto label_1ab3d8;
        case 0x1ab3dcu: goto label_1ab3dc;
        case 0x1ab3e0u: goto label_1ab3e0;
        case 0x1ab3e4u: goto label_1ab3e4;
        case 0x1ab3e8u: goto label_1ab3e8;
        case 0x1ab3ecu: goto label_1ab3ec;
        case 0x1ab3f0u: goto label_1ab3f0;
        case 0x1ab3f4u: goto label_1ab3f4;
        case 0x1ab3f8u: goto label_1ab3f8;
        case 0x1ab3fcu: goto label_1ab3fc;
        case 0x1ab400u: goto label_1ab400;
        case 0x1ab404u: goto label_1ab404;
        case 0x1ab408u: goto label_1ab408;
        case 0x1ab40cu: goto label_1ab40c;
        case 0x1ab410u: goto label_1ab410;
        case 0x1ab414u: goto label_1ab414;
        case 0x1ab418u: goto label_1ab418;
        case 0x1ab41cu: goto label_1ab41c;
        case 0x1ab420u: goto label_1ab420;
        case 0x1ab424u: goto label_1ab424;
        case 0x1ab428u: goto label_1ab428;
        case 0x1ab42cu: goto label_1ab42c;
        case 0x1ab430u: goto label_1ab430;
        case 0x1ab434u: goto label_1ab434;
        case 0x1ab438u: goto label_1ab438;
        case 0x1ab43cu: goto label_1ab43c;
        case 0x1ab440u: goto label_1ab440;
        case 0x1ab444u: goto label_1ab444;
        case 0x1ab448u: goto label_1ab448;
        case 0x1ab44cu: goto label_1ab44c;
        case 0x1ab450u: goto label_1ab450;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab458u: goto label_1ab458;
        case 0x1ab45cu: goto label_1ab45c;
        case 0x1ab460u: goto label_1ab460;
        case 0x1ab464u: goto label_1ab464;
        case 0x1ab468u: goto label_1ab468;
        case 0x1ab46cu: goto label_1ab46c;
        case 0x1ab470u: goto label_1ab470;
        case 0x1ab474u: goto label_1ab474;
        case 0x1ab478u: goto label_1ab478;
        case 0x1ab47cu: goto label_1ab47c;
        case 0x1ab480u: goto label_1ab480;
        case 0x1ab484u: goto label_1ab484;
        case 0x1ab488u: goto label_1ab488;
        case 0x1ab48cu: goto label_1ab48c;
        case 0x1ab490u: goto label_1ab490;
        case 0x1ab494u: goto label_1ab494;
        case 0x1ab498u: goto label_1ab498;
        case 0x1ab49cu: goto label_1ab49c;
        case 0x1ab4a0u: goto label_1ab4a0;
        case 0x1ab4a4u: goto label_1ab4a4;
        case 0x1ab4a8u: goto label_1ab4a8;
        case 0x1ab4acu: goto label_1ab4ac;
        case 0x1ab4b0u: goto label_1ab4b0;
        case 0x1ab4b4u: goto label_1ab4b4;
        case 0x1ab4b8u: goto label_1ab4b8;
        case 0x1ab4bcu: goto label_1ab4bc;
        case 0x1ab4c0u: goto label_1ab4c0;
        case 0x1ab4c4u: goto label_1ab4c4;
        case 0x1ab4c8u: goto label_1ab4c8;
        case 0x1ab4ccu: goto label_1ab4cc;
        case 0x1ab4d0u: goto label_1ab4d0;
        case 0x1ab4d4u: goto label_1ab4d4;
        case 0x1ab4d8u: goto label_1ab4d8;
        case 0x1ab4dcu: goto label_1ab4dc;
        case 0x1ab4e0u: goto label_1ab4e0;
        case 0x1ab4e4u: goto label_1ab4e4;
        case 0x1ab4e8u: goto label_1ab4e8;
        case 0x1ab4ecu: goto label_1ab4ec;
        case 0x1ab4f0u: goto label_1ab4f0;
        case 0x1ab4f4u: goto label_1ab4f4;
        case 0x1ab4f8u: goto label_1ab4f8;
        case 0x1ab4fcu: goto label_1ab4fc;
        case 0x1ab500u: goto label_1ab500;
        case 0x1ab504u: goto label_1ab504;
        case 0x1ab508u: goto label_1ab508;
        case 0x1ab50cu: goto label_1ab50c;
        case 0x1ab510u: goto label_1ab510;
        case 0x1ab514u: goto label_1ab514;
        case 0x1ab518u: goto label_1ab518;
        case 0x1ab51cu: goto label_1ab51c;
        case 0x1ab520u: goto label_1ab520;
        case 0x1ab524u: goto label_1ab524;
        case 0x1ab528u: goto label_1ab528;
        case 0x1ab52cu: goto label_1ab52c;
        case 0x1ab530u: goto label_1ab530;
        case 0x1ab534u: goto label_1ab534;
        case 0x1ab538u: goto label_1ab538;
        case 0x1ab53cu: goto label_1ab53c;
        case 0x1ab540u: goto label_1ab540;
        case 0x1ab544u: goto label_1ab544;
        case 0x1ab548u: goto label_1ab548;
        case 0x1ab54cu: goto label_1ab54c;
        case 0x1ab550u: goto label_1ab550;
        case 0x1ab554u: goto label_1ab554;
        case 0x1ab558u: goto label_1ab558;
        case 0x1ab55cu: goto label_1ab55c;
        case 0x1ab560u: goto label_1ab560;
        case 0x1ab564u: goto label_1ab564;
        case 0x1ab568u: goto label_1ab568;
        case 0x1ab56cu: goto label_1ab56c;
        case 0x1ab570u: goto label_1ab570;
        case 0x1ab574u: goto label_1ab574;
        case 0x1ab578u: goto label_1ab578;
        case 0x1ab57cu: goto label_1ab57c;
        case 0x1ab580u: goto label_1ab580;
        case 0x1ab584u: goto label_1ab584;
        case 0x1ab588u: goto label_1ab588;
        case 0x1ab58cu: goto label_1ab58c;
        case 0x1ab590u: goto label_1ab590;
        case 0x1ab594u: goto label_1ab594;
        case 0x1ab598u: goto label_1ab598;
        case 0x1ab59cu: goto label_1ab59c;
        case 0x1ab5a0u: goto label_1ab5a0;
        case 0x1ab5a4u: goto label_1ab5a4;
        case 0x1ab5a8u: goto label_1ab5a8;
        case 0x1ab5acu: goto label_1ab5ac;
        case 0x1ab5b0u: goto label_1ab5b0;
        case 0x1ab5b4u: goto label_1ab5b4;
        default: break;
    }

    ctx->pc = 0x1ab288u;

label_1ab288:
    // 0x1ab288: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ab288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1ab28c:
    // 0x1ab28c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ab28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1ab290:
    // 0x1ab290: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ab290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1ab294:
    // 0x1ab294: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ab294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab298:
    // 0x1ab298: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ab298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1ab29c:
    // 0x1ab29c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ab29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab2a0:
    // 0x1ab2a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ab2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ab2a4:
    // 0x1ab2a4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1ab2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1ab2a8:
    // 0x1ab2a8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1ab2a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1ab2ac:
    // 0x1ab2ac: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1ab2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab2b0:
    // 0x1ab2b0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1ab2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab2b4:
    // 0x1ab2b4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1ab2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ab2b8:
    // 0x1ab2b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ab2b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ab2bc:
    // 0x1ab2bc: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1ab2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ab2c0:
    // 0x1ab2c0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1ab2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ab2c4:
    // 0x1ab2c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ab2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab2c8:
    // 0x1ab2c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ab2c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1ab2cc:
    // 0x1ab2cc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1ab2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1ab2d0:
    // 0x1ab2d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1ab2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab2d4:
    // 0x1ab2d4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1ab2d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1ab2d8:
    // 0x1ab2d8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1ab2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ab2dc:
    // 0x1ab2dc: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1ab2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ab2e0:
    // 0x1ab2e0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1ab2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ab2e4:
    // 0x1ab2e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ab2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ab2e8:
    // 0x1ab2e8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ab2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab2ec:
    // 0x1ab2ec: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ab2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab2f0:
    // 0x1ab2f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ab2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1ab2f4:
    // 0x1ab2f4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1ab2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab2f8:
    // 0x1ab2f8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1ab2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ab2fc:
    // 0x1ab2fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1ab2fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1ab300:
    // 0x1ab300: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1ab300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab304:
    // 0x1ab304: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1ab304u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1ab308:
    // 0x1ab308: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1ab308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1ab30c:
    // 0x1ab30c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ab30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ab310:
    // 0x1ab310: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ab310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ab314:
    // 0x1ab314: 0x0  nop
    ctx->pc = 0x1ab314u;
    // NOP
label_1ab318:
    // 0x1ab318: 0x0  nop
    ctx->pc = 0x1ab318u;
    // NOP
label_1ab31c:
    // 0x1ab31c: 0x46000504  c1          0x504
    ctx->pc = 0x1ab31cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_1ab320:
    // 0x1ab320: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1ab320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ab324:
    // 0x1ab324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ab324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ab328:
    // 0x1ab328: 0xc04642c  jal         func_1190B0
label_1ab32c:
    if (ctx->pc == 0x1AB32Cu) {
        ctx->pc = 0x1AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB328u;
        // 0x1ab32c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB330u;
        goto label_1ab330;
    }
    ctx->pc = 0x1AB328u;
    SET_GPR_U32(ctx, 31, 0x1AB330u);
    ctx->pc = 0x1AB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB328u;
    // 0x1ab32c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1AB328u, 0x1AB330u)) {
        return;
    }
    ctx->pc = 0x1AB330u;
label_1ab330:
    // 0x1ab330: 0x0  nop
    ctx->pc = 0x1ab330u;
    // NOP
label_1ab334:
    // 0x1ab334: 0x0  nop
    ctx->pc = 0x1ab334u;
    // NOP
label_1ab338:
    // 0x1ab338: 0x46000044  c1          0x44
    ctx->pc = 0x1ab338u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1ab33c:
    // 0x1ab33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab340:
    // 0x1ab340: 0x0  nop
    ctx->pc = 0x1ab340u;
    // NOP
label_1ab344:
    // 0x1ab344: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ab344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ab348:
    // 0x1ab348: 0x0  nop
    ctx->pc = 0x1ab348u;
    // NOP
label_1ab34c:
    // 0x1ab34c: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_1ab350:
    if (ctx->pc == 0x1AB350u) {
        ctx->pc = 0x1AB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB34Cu;
        // 0x1ab350: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB354u;
        goto label_1ab354;
    }
    ctx->pc = 0x1AB34Cu;
    {
        const bool branch_taken_0x1ab34c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB34Cu;
        // 0x1ab350: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab34c) {
            ctx->pc = 0x1AB3FCu;
            goto label_1ab3fc;
        }
    }
    ctx->pc = 0x1AB354u;
label_1ab354:
    // 0x1ab354: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ab354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab358:
    // 0x1ab358: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1ab358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab35c:
    // 0x1ab35c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1ab35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ab360:
    // 0x1ab360: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ab360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ab364:
    // 0x1ab364: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1ab364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1ab368:
    // 0x1ab368: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ab368u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1ab36c:
    // 0x1ab36c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1ab36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1ab370:
    // 0x1ab370: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1ab370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1ab374:
    // 0x1ab374: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1ab374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1ab378:
    // 0x1ab378: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1ab378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab37c:
    // 0x1ab37c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ab37cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ab380:
    // 0x1ab380: 0x0  nop
    ctx->pc = 0x1ab380u;
    // NOP
label_1ab384:
    // 0x1ab384: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_1ab388:
    if (ctx->pc == 0x1AB388u) {
        ctx->pc = 0x1AB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB384u;
        // 0x1ab388: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB38Cu;
        goto label_1ab38c;
    }
    ctx->pc = 0x1AB384u;
    {
        const bool branch_taken_0x1ab384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB384u;
        // 0x1ab388: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab384) {
            ctx->pc = 0x1AB414u;
            goto label_1ab414;
        }
    }
    ctx->pc = 0x1AB38Cu;
label_1ab38c:
    // 0x1ab38c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ab38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1ab390:
    // 0x1ab390: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ab390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ab394:
    // 0x1ab394: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ab394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1ab398:
    // 0x1ab398: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x1ab398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1ab39c:
    // 0x1ab39c: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x1ab39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1ab3a0:
    // 0x1ab3a0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1ab3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ab3a4:
    // 0x1ab3a4: 0xb2260027  sdl         $a2, 0x27($s1)
    ctx->pc = 0x1ab3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab3a8:
    // 0x1ab3a8: 0xb6260020  sdr         $a2, 0x20($s1)
    ctx->pc = 0x1ab3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab3ac:
    // 0x1ab3ac: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x1ab3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
label_1ab3b0:
    // 0x1ab3b0: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1ab3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_1ab3b4:
    // 0x1ab3b4: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1ab3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1ab3b8:
    // 0x1ab3b8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1ab3bc:
    if (ctx->pc == 0x1AB3BCu) {
        ctx->pc = 0x1AB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3B8u;
        // 0x1ab3bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3C0u;
        goto label_1ab3c0;
    }
    ctx->pc = 0x1AB3B8u;
    {
        const bool branch_taken_0x1ab3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3B8u;
        // 0x1ab3bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3b8) {
            ctx->pc = 0x1AB3F4u;
            goto label_1ab3f4;
        }
    }
    ctx->pc = 0x1AB3C0u;
label_1ab3c0:
    // 0x1ab3c0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ab3c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab3c4:
    // 0x1ab3c4: 0x0  nop
    ctx->pc = 0x1ab3c4u;
    // NOP
label_1ab3c8:
    // 0x1ab3c8: 0x6baa0017  ldl         $t2, 0x17($sp)
    ctx->pc = 0x1ab3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1ab3cc:
    // 0x1ab3cc: 0x6faa0010  ldr         $t2, 0x10($sp)
    ctx->pc = 0x1ab3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1ab3d0:
    // 0x1ab3d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ab3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ab3d4:
    // 0x1ab3d4: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x1ab3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab3d8:
    // 0x1ab3d8: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x1ab3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab3dc:
    // 0x1ab3dc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ab3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1ab3e0:
    // 0x1ab3e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ab3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ab3e4:
    // 0x1ab3e4: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1ab3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1ab3e8:
    // 0x1ab3e8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1ab3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ab3ec:
    // 0x1ab3ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1ab3f0:
    if (ctx->pc == 0x1AB3F0u) {
        ctx->pc = 0x1AB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3ECu;
        // 0x1ab3f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3F4u;
        goto label_1ab3f4;
    }
    ctx->pc = 0x1AB3ECu;
    {
        const bool branch_taken_0x1ab3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3ECu;
        // 0x1ab3f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3ec) {
            ctx->pc = 0x1AB3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab3c8;
        }
    }
    ctx->pc = 0x1AB3F4u;
label_1ab3f4:
    // 0x1ab3f4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ab3f8:
    if (ctx->pc == 0x1AB3F8u) {
        ctx->pc = 0x1AB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3F4u;
        // 0x1ab3f8: 0xaca00080  sw          $zero, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB3FCu;
        goto label_1ab3fc;
    }
    ctx->pc = 0x1AB3F4u;
    {
        const bool branch_taken_0x1ab3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3F4u;
        // 0x1ab3f8: 0xaca00080  sw          $zero, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3f4) {
            ctx->pc = 0x1AB42Cu;
            goto label_1ab42c;
        }
    }
    ctx->pc = 0x1AB3FCu;
label_1ab3fc:
    // 0x1ab3fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ab400:
    // 0x1ab400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ab400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab404:
    // 0x1ab404: 0x0  nop
    ctx->pc = 0x1ab404u;
    // NOP
label_1ab408:
    // 0x1ab408: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1ab408u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1ab40c:
    // 0x1ab40c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_1ab410:
    if (ctx->pc == 0x1AB410u) {
        ctx->pc = 0x1AB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB40Cu;
        // 0x1ab410: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB414u;
        goto label_1ab414;
    }
    ctx->pc = 0x1AB40Cu;
    {
        const bool branch_taken_0x1ab40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB40Cu;
        // 0x1ab410: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab40c) {
            ctx->pc = 0x1AB358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB414u;
label_1ab414:
    // 0x1ab414: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x1ab414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ab418:
    // 0x1ab418: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x1ab418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ab41c:
    // 0x1ab41c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x1ab41cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1ab420:
    // 0x1ab420: 0xb2280027  sdl         $t0, 0x27($s1)
    ctx->pc = 0x1ab420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab424:
    // 0x1ab424: 0xb6280020  sdr         $t0, 0x20($s1)
    ctx->pc = 0x1ab424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab428:
    // 0x1ab428: 0xae290028  sw          $t1, 0x28($s1)
    ctx->pc = 0x1ab428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 9));
label_1ab42c:
    // 0x1ab42c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1ab42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1ab430:
    // 0x1ab430: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_1ab434:
    if (ctx->pc == 0x1AB434u) {
        ctx->pc = 0x1AB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB430u;
        // 0x1ab434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB438u;
        goto label_1ab438;
    }
    ctx->pc = 0x1AB430u;
    {
        const bool branch_taken_0x1ab430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB430u;
        // 0x1ab434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab430) {
            ctx->pc = 0x1AB598u;
            goto label_1ab598;
        }
    }
    ctx->pc = 0x1AB438u;
label_1ab438:
    // 0x1ab438: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ab438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ab43c:
    // 0x1ab43c: 0x40f809  jalr        $v0
label_1ab440:
    if (ctx->pc == 0x1AB440u) {
        ctx->pc = 0x1AB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB43Cu;
        // 0x1ab440: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB444u;
        goto label_1ab444;
    }
    ctx->pc = 0x1AB43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB444u);
        ctx->pc = 0x1AB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB43Cu;
        // 0x1ab440: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB43Cu, 0x1AB444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB444u;
label_1ab444:
    // 0x1ab444: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1ab444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1ab448:
    // 0x1ab448: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x1ab448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1ab44c:
    // 0x1ab44c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x1ab44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_1ab450:
    // 0x1ab450: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ab450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ab454:
    // 0x1ab454: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1ab458:
    if (ctx->pc == 0x1AB458u) {
        ctx->pc = 0x1AB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB454u;
        // 0x1ab458: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB45Cu;
        goto label_1ab45c;
    }
    ctx->pc = 0x1AB454u;
    {
        const bool branch_taken_0x1ab454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB454u;
        // 0x1ab458: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab454) {
            ctx->pc = 0x1AB4B8u;
            goto label_1ab4b8;
        }
    }
    ctx->pc = 0x1AB45Cu;
label_1ab45c:
    // 0x1ab45c: 0x264300b0  addiu       $v1, $s2, 0xB0
    ctx->pc = 0x1ab45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_1ab460:
    // 0x1ab460: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x1ab460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1ab464:
    // 0x1ab464: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_1ab468:
    if (ctx->pc == 0x1AB468u) {
        ctx->pc = 0x1AB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB464u;
        // 0x1ab468: 0xaca50090  sw          $a1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB46Cu;
        goto label_1ab46c;
    }
    ctx->pc = 0x1AB464u;
    {
        const bool branch_taken_0x1ab464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB464u;
        // 0x1ab468: 0xaca50090  sw          $a1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab464) {
            ctx->pc = 0x1AB494u;
            goto label_1ab494;
        }
    }
    ctx->pc = 0x1AB46Cu;
label_1ab46c:
    // 0x1ab46c: 0x0  nop
    ctx->pc = 0x1ab46cu;
    // NOP
label_1ab470:
    // 0x1ab470: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1ab470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1ab474:
    // 0x1ab474: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1ab474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1ab478:
    // 0x1ab478: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1ab478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ab47c:
    // 0x1ab47c: 0xb047fff7  sdl         $a3, -0x9($v0)
    ctx->pc = 0x1ab47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab480:
    // 0x1ab480: 0xb447fff0  sdr         $a3, -0x10($v0)
    ctx->pc = 0x1ab480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab484:
    // 0x1ab484: 0xac48fff8  sw          $t0, -0x8($v0)
    ctx->pc = 0x1ab484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 8));
label_1ab488:
    // 0x1ab488: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ab488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ab48c:
    // 0x1ab48c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
label_1ab490:
    if (ctx->pc == 0x1AB490u) {
        ctx->pc = 0x1AB494u;
        goto label_1ab494;
    }
    ctx->pc = 0x1AB48Cu;
    {
        const bool branch_taken_0x1ab48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab48c) {
            ctx->pc = 0x1AB470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab470;
        }
    }
    ctx->pc = 0x1AB494u;
label_1ab494:
    // 0x1ab494: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x1ab494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1ab498:
    // 0x1ab498: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x1ab498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1ab49c:
    // 0x1ab49c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1ab49cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ab4a0:
    // 0x1ab4a0: 0xb043fff7  sdl         $v1, -0x9($v0)
    ctx->pc = 0x1ab4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab4a4:
    // 0x1ab4a4: 0xb443fff0  sdr         $v1, -0x10($v0)
    ctx->pc = 0x1ab4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab4a8:
    // 0x1ab4a8: 0xac47fff8  sw          $a3, -0x8($v0)
    ctx->pc = 0x1ab4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 7));
label_1ab4ac:
    // 0x1ab4ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1ab4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_1ab4b0:
    // 0x1ab4b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ab4b4:
    // 0x1ab4b4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x1ab4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_1ab4b8:
    // 0x1ab4b8: 0x68ca0007  ldl         $t2, 0x7($a2)
    ctx->pc = 0x1ab4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1ab4bc:
    // 0x1ab4bc: 0x6cca0000  ldr         $t2, 0x0($a2)
    ctx->pc = 0x1ab4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1ab4c0:
    // 0x1ab4c0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ab4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ab4c4:
    // 0x1ab4c4: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x1ab4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab4c8:
    // 0x1ab4c8: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x1ab4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab4cc:
    // 0x1ab4cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1ab4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1ab4d0:
    // 0x1ab4d0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1ab4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_1ab4d4:
    // 0x1ab4d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ab4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ab4d8:
    // 0x1ab4d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ab4dc:
    // 0x1ab4dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ab4e0:
    // 0x1ab4e0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x1ab4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_1ab4e4:
    // 0x1ab4e4: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x1ab4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ab4e8:
    // 0x1ab4e8: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x1ab4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ab4ec:
    // 0x1ab4ec: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x1ab4ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ab4f0:
    // 0x1ab4f0: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x1ab4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab4f4:
    // 0x1ab4f4: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x1ab4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab4f8:
    // 0x1ab4f8: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1ab4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_1ab4fc:
    // 0x1ab4fc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1ab4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1ab500:
    // 0x1ab500: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1ab500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1ab504:
    // 0x1ab504: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1ab504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1ab508:
    // 0x1ab508: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ab508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ab50c:
    // 0x1ab50c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1ab50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1ab510:
    // 0x1ab510: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ab510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ab514:
    // 0x1ab514: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
label_1ab518:
    if (ctx->pc == 0x1AB518u) {
        ctx->pc = 0x1AB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB514u;
        // 0x1ab518: 0xaca50090  sw          $a1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB51Cu;
        goto label_1ab51c;
    }
    ctx->pc = 0x1AB514u;
    {
        const bool branch_taken_0x1ab514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB514u;
        // 0x1ab518: 0xaca50090  sw          $a1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab514) {
            ctx->pc = 0x1AB568u;
            goto label_1ab568;
        }
    }
    ctx->pc = 0x1AB51Cu;
label_1ab51c:
    // 0x1ab51c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab520:
    // 0x1ab520: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1ab520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ab524:
    // 0x1ab524: 0x0  nop
    ctx->pc = 0x1ab524u;
    // NOP
label_1ab528:
    // 0x1ab528: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x1ab528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_1ab52c:
    // 0x1ab52c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1ab52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab530:
    // 0x1ab530: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ab530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab534:
    // 0x1ab534: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ab534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ab538:
    // 0x1ab538: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ab538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ab53c:
    // 0x1ab53c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ab53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab540:
    // 0x1ab540: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ab540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab544:
    // 0x1ab544: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1ab544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ab548:
    // 0x1ab548: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ab548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ab54c:
    // 0x1ab54c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1ab54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1ab550:
    // 0x1ab550: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1ab550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab554:
    // 0x1ab554: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1ab554u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1ab558:
    // 0x1ab558: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x1ab558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ab55c:
    // 0x1ab55c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ab55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ab560:
    // 0x1ab560: 0x1444fff1  bne         $v0, $a0, . + 4 + (-0xF << 2)
label_1ab564:
    if (ctx->pc == 0x1AB564u) {
        ctx->pc = 0x1AB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB560u;
        // 0x1ab564: 0xaca20090  sw          $v0, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB568u;
        goto label_1ab568;
    }
    ctx->pc = 0x1AB560u;
    {
        const bool branch_taken_0x1ab560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB560u;
        // 0x1ab564: 0xaca20090  sw          $v0, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab560) {
            ctx->pc = 0x1AB528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab528;
        }
    }
    ctx->pc = 0x1AB568u;
label_1ab568:
    // 0x1ab568: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x1ab568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1ab56c:
    // 0x1ab56c: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x1ab56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1ab570:
    // 0x1ab570: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ab570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ab574:
    // 0x1ab574: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1ab574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab578:
    // 0x1ab578: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1ab578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab57c:
    // 0x1ab57c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1ab57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1ab580:
    // 0x1ab580: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x1ab580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1ab584:
    // 0x1ab584: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x1ab584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1ab588:
    // 0x1ab588: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x1ab588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ab58c:
    // 0x1ab58c: 0xb2270027  sdl         $a3, 0x27($s1)
    ctx->pc = 0x1ab58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab590:
    // 0x1ab590: 0xb6270020  sdr         $a3, 0x20($s1)
    ctx->pc = 0x1ab590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab594:
    // 0x1ab594: 0xae280028  sw          $t0, 0x28($s1)
    ctx->pc = 0x1ab594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 8));
label_1ab598:
    // 0x1ab598: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ab598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ab59c:
    // 0x1ab59c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ab59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ab5a0:
    // 0x1ab5a0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ab5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab5a4:
    // 0x1ab5a4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ab5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab5a8:
    // 0x1ab5a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ab5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab5ac:
    // 0x1ab5ac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1ab5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ab5b0:
    // 0x1ab5b0: 0x3e00008  jr          $ra
label_1ab5b4:
    if (ctx->pc == 0x1AB5B4u) {
        ctx->pc = 0x1AB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5B0u;
        // 0x1ab5b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB5B8u;
        goto label_fallthrough_0x1ab5b0;
    }
    ctx->pc = 0x1AB5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5B0u;
        // 0x1ab5b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab5b0:
    ctx->pc = 0x1AB5B8u;
}
