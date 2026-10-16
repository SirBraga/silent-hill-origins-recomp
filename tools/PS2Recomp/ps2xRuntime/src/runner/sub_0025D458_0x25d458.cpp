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

// Function: sub_0025D458
// Address: 0x25d458 - 0x25d668
void sub_0025D458_0x25d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D458_0x25d458");
#endif

    switch (ctx->pc) {
        case 0x25d458u: goto label_25d458;
        case 0x25d45cu: goto label_25d45c;
        case 0x25d460u: goto label_25d460;
        case 0x25d464u: goto label_25d464;
        case 0x25d468u: goto label_25d468;
        case 0x25d46cu: goto label_25d46c;
        case 0x25d470u: goto label_25d470;
        case 0x25d474u: goto label_25d474;
        case 0x25d478u: goto label_25d478;
        case 0x25d47cu: goto label_25d47c;
        case 0x25d480u: goto label_25d480;
        case 0x25d484u: goto label_25d484;
        case 0x25d488u: goto label_25d488;
        case 0x25d48cu: goto label_25d48c;
        case 0x25d490u: goto label_25d490;
        case 0x25d494u: goto label_25d494;
        case 0x25d498u: goto label_25d498;
        case 0x25d49cu: goto label_25d49c;
        case 0x25d4a0u: goto label_25d4a0;
        case 0x25d4a4u: goto label_25d4a4;
        case 0x25d4a8u: goto label_25d4a8;
        case 0x25d4acu: goto label_25d4ac;
        case 0x25d4b0u: goto label_25d4b0;
        case 0x25d4b4u: goto label_25d4b4;
        case 0x25d4b8u: goto label_25d4b8;
        case 0x25d4bcu: goto label_25d4bc;
        case 0x25d4c0u: goto label_25d4c0;
        case 0x25d4c4u: goto label_25d4c4;
        case 0x25d4c8u: goto label_25d4c8;
        case 0x25d4ccu: goto label_25d4cc;
        case 0x25d4d0u: goto label_25d4d0;
        case 0x25d4d4u: goto label_25d4d4;
        case 0x25d4d8u: goto label_25d4d8;
        case 0x25d4dcu: goto label_25d4dc;
        case 0x25d4e0u: goto label_25d4e0;
        case 0x25d4e4u: goto label_25d4e4;
        case 0x25d4e8u: goto label_25d4e8;
        case 0x25d4ecu: goto label_25d4ec;
        case 0x25d4f0u: goto label_25d4f0;
        case 0x25d4f4u: goto label_25d4f4;
        case 0x25d4f8u: goto label_25d4f8;
        case 0x25d4fcu: goto label_25d4fc;
        case 0x25d500u: goto label_25d500;
        case 0x25d504u: goto label_25d504;
        case 0x25d508u: goto label_25d508;
        case 0x25d50cu: goto label_25d50c;
        case 0x25d510u: goto label_25d510;
        case 0x25d514u: goto label_25d514;
        case 0x25d518u: goto label_25d518;
        case 0x25d51cu: goto label_25d51c;
        case 0x25d520u: goto label_25d520;
        case 0x25d524u: goto label_25d524;
        case 0x25d528u: goto label_25d528;
        case 0x25d52cu: goto label_25d52c;
        case 0x25d530u: goto label_25d530;
        case 0x25d534u: goto label_25d534;
        case 0x25d538u: goto label_25d538;
        case 0x25d53cu: goto label_25d53c;
        case 0x25d540u: goto label_25d540;
        case 0x25d544u: goto label_25d544;
        case 0x25d548u: goto label_25d548;
        case 0x25d54cu: goto label_25d54c;
        case 0x25d550u: goto label_25d550;
        case 0x25d554u: goto label_25d554;
        case 0x25d558u: goto label_25d558;
        case 0x25d55cu: goto label_25d55c;
        case 0x25d560u: goto label_25d560;
        case 0x25d564u: goto label_25d564;
        case 0x25d568u: goto label_25d568;
        case 0x25d56cu: goto label_25d56c;
        case 0x25d570u: goto label_25d570;
        case 0x25d574u: goto label_25d574;
        case 0x25d578u: goto label_25d578;
        case 0x25d57cu: goto label_25d57c;
        case 0x25d580u: goto label_25d580;
        case 0x25d584u: goto label_25d584;
        case 0x25d588u: goto label_25d588;
        case 0x25d58cu: goto label_25d58c;
        case 0x25d590u: goto label_25d590;
        case 0x25d594u: goto label_25d594;
        case 0x25d598u: goto label_25d598;
        case 0x25d59cu: goto label_25d59c;
        case 0x25d5a0u: goto label_25d5a0;
        case 0x25d5a4u: goto label_25d5a4;
        case 0x25d5a8u: goto label_25d5a8;
        case 0x25d5acu: goto label_25d5ac;
        case 0x25d5b0u: goto label_25d5b0;
        case 0x25d5b4u: goto label_25d5b4;
        case 0x25d5b8u: goto label_25d5b8;
        case 0x25d5bcu: goto label_25d5bc;
        case 0x25d5c0u: goto label_25d5c0;
        case 0x25d5c4u: goto label_25d5c4;
        case 0x25d5c8u: goto label_25d5c8;
        case 0x25d5ccu: goto label_25d5cc;
        case 0x25d5d0u: goto label_25d5d0;
        case 0x25d5d4u: goto label_25d5d4;
        case 0x25d5d8u: goto label_25d5d8;
        case 0x25d5dcu: goto label_25d5dc;
        case 0x25d5e0u: goto label_25d5e0;
        case 0x25d5e4u: goto label_25d5e4;
        case 0x25d5e8u: goto label_25d5e8;
        case 0x25d5ecu: goto label_25d5ec;
        case 0x25d5f0u: goto label_25d5f0;
        case 0x25d5f4u: goto label_25d5f4;
        case 0x25d5f8u: goto label_25d5f8;
        case 0x25d5fcu: goto label_25d5fc;
        case 0x25d600u: goto label_25d600;
        case 0x25d604u: goto label_25d604;
        case 0x25d608u: goto label_25d608;
        case 0x25d60cu: goto label_25d60c;
        case 0x25d610u: goto label_25d610;
        case 0x25d614u: goto label_25d614;
        case 0x25d618u: goto label_25d618;
        case 0x25d61cu: goto label_25d61c;
        case 0x25d620u: goto label_25d620;
        case 0x25d624u: goto label_25d624;
        case 0x25d628u: goto label_25d628;
        case 0x25d62cu: goto label_25d62c;
        case 0x25d630u: goto label_25d630;
        case 0x25d634u: goto label_25d634;
        case 0x25d638u: goto label_25d638;
        case 0x25d63cu: goto label_25d63c;
        case 0x25d640u: goto label_25d640;
        case 0x25d644u: goto label_25d644;
        case 0x25d648u: goto label_25d648;
        case 0x25d64cu: goto label_25d64c;
        case 0x25d650u: goto label_25d650;
        case 0x25d654u: goto label_25d654;
        case 0x25d658u: goto label_25d658;
        case 0x25d65cu: goto label_25d65c;
        case 0x25d660u: goto label_25d660;
        case 0x25d664u: goto label_25d664;
        default: break;
    }

    ctx->pc = 0x25d458u;

label_25d458:
    // 0x25d458: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x25d458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_25d45c:
    // 0x25d45c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x25d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_25d460:
    // 0x25d460: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x25d460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_25d464:
    // 0x25d464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d468:
    // 0x25d468: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25d46c:
    // 0x25d46c: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x25d46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_25d470:
    // 0x25d470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d474:
    // 0x25d474: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x25d474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_25d478:
    // 0x25d478: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x25d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_25d47c:
    // 0x25d47c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25d47cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d480:
    // 0x25d480: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x25d480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_25d484:
    // 0x25d484: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x25d484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_25d488:
    // 0x25d488: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x25d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_25d48c:
    // 0x25d48c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x25d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_25d490:
    // 0x25d490: 0xc09533c  jal         func_254CF0
label_25d494:
    if (ctx->pc == 0x25D494u) {
        ctx->pc = 0x25D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D490u;
        // 0x25d494: 0x26570064  addiu       $s7, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D498u;
        goto label_25d498;
    }
    ctx->pc = 0x25D490u;
    SET_GPR_U32(ctx, 31, 0x25D498u);
    ctx->pc = 0x25D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D490u;
    // 0x25d494: 0x26570064  addiu       $s7, $s2, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x25D490u, 0x25D498u)) {
        return;
    }
    ctx->pc = 0x25D498u;
label_25d498:
    // 0x25d498: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x25d498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_25d49c:
    // 0x25d49c: 0x27b40110  addiu       $s4, $sp, 0x110
    ctx->pc = 0x25d49cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_25d4a0:
    // 0x25d4a0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x25d4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_25d4a4:
    // 0x25d4a4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x25d4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_25d4a8:
    // 0x25d4a8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x25d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25d4ac:
    // 0x25d4ac: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x25d4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25d4b0:
    // 0x25d4b0: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x25d4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25d4b4:
    // 0x25d4b4: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x25d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_25d4b8:
    // 0x25d4b8: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x25d4b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_25d4bc:
    // 0x25d4bc: 0x6ba70107  ldl         $a3, 0x107($sp)
    ctx->pc = 0x25d4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_25d4c0:
    // 0x25d4c0: 0x6fa70100  ldr         $a3, 0x100($sp)
    ctx->pc = 0x25d4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_25d4c4:
    // 0x25d4c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x25d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_25d4c8:
    // 0x25d4c8: 0xb3a70117  sdl         $a3, 0x117($sp)
    ctx->pc = 0x25d4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25d4cc:
    // 0x25d4cc: 0xb7a70110  sdr         $a3, 0x110($sp)
    ctx->pc = 0x25d4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25d4d0:
    // 0x25d4d0: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x25d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_25d4d4:
    // 0x25d4d4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25d4d8:
    // 0x25d4d8: 0x24750fc8  addiu       $s5, $v1, 0xFC8
    ctx->pc = 0x25d4d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25d4dc:
    // 0x25d4dc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x25d4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25d4e0:
    // 0x25d4e0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x25d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d4e4:
    // 0x25d4e4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x25d4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d4e8:
    // 0x25d4e8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x25d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d4ec:
    // 0x25d4ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x25d4ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_25d4f0:
    // 0x25d4f0: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x25d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d4f4:
    // 0x25d4f4: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x25d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d4f8:
    // 0x25d4f8: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x25d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25d4fc:
    // 0x25d4fc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x25d4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_25d500:
    // 0x25d500: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x25d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25d504:
    // 0x25d504: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d508:
    // 0x25d508: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25d508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25d50c:
    // 0x25d50c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x25d50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_25d510:
    // 0x25d510: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d514:
    // 0x25d514: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x25d514u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_25d518:
    // 0x25d518: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x25d518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_25d51c:
    // 0x25d51c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d520:
    // 0x25d520: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x25d520u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_25d524:
    // 0x25d524: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x25d524u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25d528:
    // 0x25d528: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d52c:
    // 0x25d52c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x25d52cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_25d530:
    // 0x25d530: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x25d530u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_25d534:
    // 0x25d534: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d538:
    // 0x25d538: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x25d538u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_25d53c:
    // 0x25d53c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x25d53cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_25d540:
    // 0x25d540: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25d544:
    // 0x25d544: 0x0  nop
    ctx->pc = 0x25d544u;
    // NOP
label_25d548:
    // 0x25d548: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25d548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25d54c:
    // 0x25d54c: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x25d54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_25d550:
    // 0x25d550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d554:
    // 0x25d554: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
label_25d558:
    if (ctx->pc == 0x25D558u) {
        ctx->pc = 0x25D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D554u;
        // 0x25d558: 0x2c21821  addu        $v1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D55Cu;
        goto label_25d55c;
    }
    ctx->pc = 0x25D554u;
    {
        const bool branch_taken_0x25d554 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x25D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D554u;
        // 0x25d558: 0x2c21821  addu        $v1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d554) {
            ctx->pc = 0x25D5C0u;
            goto label_25d5c0;
        }
    }
    ctx->pc = 0x25D55Cu;
label_25d55c:
    // 0x25d55c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25d560:
    // 0x25d560: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25d560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16360)));
label_25d564:
    // 0x25d564: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x25d564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_25d568:
    // 0x25d568: 0x8ea20118  lw          $v0, 0x118($s5)
    ctx->pc = 0x25d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
label_25d56c:
    // 0x25d56c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x25d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_25d570:
    // 0x25d570: 0x40f809  jalr        $v0
label_25d574:
    if (ctx->pc == 0x25D574u) {
        ctx->pc = 0x25D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D570u;
        // 0x25d574: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D578u;
        goto label_25d578;
    }
    ctx->pc = 0x25D570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D578u);
        ctx->pc = 0x25D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D570u;
        // 0x25d574: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D570u, 0x25D578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D578u;
label_25d578:
    // 0x25d578: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x25d578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
label_25d57c:
    // 0x25d57c: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x25d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_25d580:
    // 0x25d580: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x25d580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_25d584:
    // 0x25d584: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x25d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_25d588:
    // 0x25d588: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x25d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_25d58c:
    // 0x25d58c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_25d590:
    // 0x25d590: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x25d590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_25d594:
    // 0x25d594: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x25d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_25d598:
    // 0x25d598: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25d598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_25d59c:
    // 0x25d59c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x25d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_25d5a0:
    // 0x25d5a0: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x25d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_25d5a4:
    // 0x25d5a4: 0xac570010  sw          $s7, 0x10($v0)
    ctx->pc = 0x25d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 23));
label_25d5a8:
    // 0x25d5a8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x25d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_25d5ac:
    // 0x25d5ac: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x25d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_25d5b0:
    // 0x25d5b0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x25d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_25d5b4:
    // 0x25d5b4: 0xae450064  sw          $a1, 0x64($s2)
    ctx->pc = 0x25d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 5));
label_25d5b8:
    // 0x25d5b8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_25d5bc:
    if (ctx->pc == 0x25D5BCu) {
        ctx->pc = 0x25D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5B8u;
        // 0x25d5bc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D5C0u;
        goto label_25d5c0;
    }
    ctx->pc = 0x25D5B8u;
    {
        const bool branch_taken_0x25d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5B8u;
        // 0x25d5bc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5b8) {
            ctx->pc = 0x25D630u;
            goto label_25d630;
        }
    }
    ctx->pc = 0x25D5C0u;
label_25d5c0:
    // 0x25d5c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d5c4:
    // 0x25d5c4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x25d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d5c8:
    // 0x25d5c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d5cc:
    // 0x25d5cc: 0x0  nop
    ctx->pc = 0x25d5ccu;
    // NOP
label_25d5d0:
    // 0x25d5d0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_25d5d4:
    if (ctx->pc == 0x25D5D4u) {
        ctx->pc = 0x25D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5D0u;
        // 0x25d5d4: 0x2821021  addu        $v0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D5D8u;
        goto label_25d5d8;
    }
    ctx->pc = 0x25D5D0u;
    {
        const bool branch_taken_0x25d5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5D0u;
        // 0x25d5d4: 0x2821021  addu        $v0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5d0) {
            ctx->pc = 0x25D60Cu;
            goto label_25d60c;
        }
    }
    ctx->pc = 0x25D5D8u;
label_25d5d8:
    // 0x25d5d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25d5dc:
    // 0x25d5dc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x25d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d5e0:
    // 0x25d5e0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x25d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_25d5e4:
    // 0x25d5e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d5e8:
    // 0x25d5e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d5ec:
    // 0x25d5ec: 0x0  nop
    ctx->pc = 0x25d5ecu;
    // NOP
label_25d5f0:
    // 0x25d5f0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_25d5f4:
    if (ctx->pc == 0x25D5F4u) {
        ctx->pc = 0x25D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5F0u;
        // 0x25d5f4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D5F8u;
        goto label_25d5f8;
    }
    ctx->pc = 0x25D5F0u;
    {
        const bool branch_taken_0x25d5f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5F0u;
        // 0x25d5f4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5f0) {
            ctx->pc = 0x25D634u;
            goto label_25d634;
        }
    }
    ctx->pc = 0x25D5F8u;
label_25d5f8:
    // 0x25d5f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25d5fc:
    // 0x25d5fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x25d5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_25d600:
    // 0x25d600: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25d600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25d604:
    // 0x25d604: 0x1000000b  b           . + 4 + (0xB << 2)
label_25d608:
    if (ctx->pc == 0x25D608u) {
        ctx->pc = 0x25D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D604u;
        // 0x25d608: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D60Cu;
        goto label_25d60c;
    }
    ctx->pc = 0x25D604u;
    {
        const bool branch_taken_0x25d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D604u;
        // 0x25d608: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d604) {
            ctx->pc = 0x25D634u;
            goto label_25d634;
        }
    }
    ctx->pc = 0x25D60Cu;
label_25d60c:
    // 0x25d60c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25d60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d610:
    // 0x25d610: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x25d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d614:
    // 0x25d614: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25d614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d618:
    // 0x25d618: 0x0  nop
    ctx->pc = 0x25d618u;
    // NOP
label_25d61c:
    // 0x25d61c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_25d620:
    if (ctx->pc == 0x25D620u) {
        ctx->pc = 0x25D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D61Cu;
        // 0x25d620: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D624u;
        goto label_25d624;
    }
    ctx->pc = 0x25D61Cu;
    {
        const bool branch_taken_0x25d61c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d61c) {
            ctx->pc = 0x25D620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D61Cu;
            // 0x25d620: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D62Cu;
            goto label_25d62c;
        }
    }
    ctx->pc = 0x25D624u;
label_25d624:
    // 0x25d624: 0x10000003  b           . + 4 + (0x3 << 2)
label_25d628:
    if (ctx->pc == 0x25D628u) {
        ctx->pc = 0x25D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D624u;
        // 0x25d628: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D62Cu;
        goto label_25d62c;
    }
    ctx->pc = 0x25D624u;
    {
        const bool branch_taken_0x25d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D624u;
        // 0x25d628: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d624) {
            ctx->pc = 0x25D634u;
            goto label_25d634;
        }
    }
    ctx->pc = 0x25D62Cu;
label_25d62c:
    // 0x25d62c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x25d62cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_25d630:
    // 0x25d630: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x25d630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_25d634:
    // 0x25d634: 0x663ffc4  bgezl       $s3, . + 4 + (-0x3C << 2)
label_25d638:
    if (ctx->pc == 0x25D638u) {
        ctx->pc = 0x25D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D634u;
        // 0x25d638: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D63Cu;
        goto label_25d63c;
    }
    ctx->pc = 0x25D634u;
    {
        const bool branch_taken_0x25d634 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x25d634) {
            ctx->pc = 0x25D638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D634u;
            // 0x25d638: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d548;
        }
    }
    ctx->pc = 0x25D63Cu;
label_25d63c:
    // 0x25d63c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x25d63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_25d640:
    // 0x25d640: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x25d640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_25d644:
    // 0x25d644: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x25d644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_25d648:
    // 0x25d648: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x25d648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_25d64c:
    // 0x25d64c: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x25d64cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_25d650:
    // 0x25d650: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x25d650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_25d654:
    // 0x25d654: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x25d654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_25d658:
    // 0x25d658: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x25d658u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_25d65c:
    // 0x25d65c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x25d65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_25d660:
    // 0x25d660: 0x3e00008  jr          $ra
label_25d664:
    if (ctx->pc == 0x25D664u) {
        ctx->pc = 0x25D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D660u;
        // 0x25d664: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D668u;
        goto label_fallthrough_0x25d660;
    }
    ctx->pc = 0x25D660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D660u;
        // 0x25d664: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25d660:
    ctx->pc = 0x25D668u;
}
