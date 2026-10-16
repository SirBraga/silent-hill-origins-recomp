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

// Function: sub_0016E3F0
// Address: 0x16e3f0 - 0x16e758
void sub_0016E3F0_0x16e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E3F0_0x16e3f0");
#endif

    switch (ctx->pc) {
        case 0x16e420u: goto label_16e420;
        case 0x16e434u: goto label_16e434;
        case 0x16e458u: goto label_16e458;
        case 0x16e470u: goto label_16e470;
        case 0x16e49cu: goto label_16e49c;
        case 0x16e4dcu: goto label_16e4dc;
        case 0x16e538u: goto label_16e538;
        case 0x16e544u: goto label_16e544;
        case 0x16e550u: goto label_16e550;
        case 0x16e560u: goto label_16e560;
        case 0x16e574u: goto label_16e574;
        case 0x16e580u: goto label_16e580;
        case 0x16e59cu: goto label_16e59c;
        case 0x16e5c0u: goto label_16e5c0;
        case 0x16e5d8u: goto label_16e5d8;
        case 0x16e638u: goto label_16e638;
        case 0x16e654u: goto label_16e654;
        case 0x16e6ccu: goto label_16e6cc;
        case 0x16e6e8u: goto label_16e6e8;
        case 0x16e704u: goto label_16e704;
        case 0x16e720u: goto label_16e720;
        default: break;
    }

    ctx->pc = 0x16e3f0u;

    // 0x16e3f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16e3f4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16e3f8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x16e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x16e3fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16e3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e400: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16e400u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e404: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16e408: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16e40c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x16e410: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16e410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16e414: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x16e414u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x16e418: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16E418u;
    SET_GPR_U32(ctx, 31, 0x16E420u);
    ctx->pc = 0x16E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E418u;
    // 0x16e41c: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16E418u, 0x16E420u)) {
        return;
    }
    ctx->pc = 0x16E420u;
label_16e420:
    // 0x16e420: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16e420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16e424: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16e424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e428: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x16e428u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x16e42c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16E42Cu;
    SET_GPR_U32(ctx, 31, 0x16E434u);
    ctx->pc = 0x16E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E42Cu;
    // 0x16e430: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16E42Cu, 0x16E434u)) {
        return;
    }
    ctx->pc = 0x16E434u;
label_16e434:
    // 0x16e434: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e438: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e43c: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x16E43Cu;
    {
        const bool branch_taken_0x16e43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E43Cu;
        // 0x16e440: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e43c) {
            ctx->pc = 0x16E5ACu;
            goto label_16e5ac;
        }
    }
    ctx->pc = 0x16E444u;
    // 0x16e444: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x16e444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x16e448: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16e448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16e44c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16e44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x16e450: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16e450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16e454: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16e454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16e458:
    // 0x16e458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e45c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16e460: 0x54430049  bnel        $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x16E460u;
    {
        const bool branch_taken_0x16e460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e460) {
            ctx->pc = 0x16E464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E460u;
            // 0x16e464: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E588u;
            goto label_16e588;
        }
    }
    ctx->pc = 0x16E468u;
    // 0x16e468: 0xc04f0d4  jal         func_13C350
    ctx->pc = 0x16E468u;
    SET_GPR_U32(ctx, 31, 0x16E470u);
    ctx->pc = 0x16E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E468u;
    // 0x16e46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x16E468u, 0x16E470u)) {
        return;
    }
    ctx->pc = 0x16E470u;
label_16e470:
    // 0x16e470: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e474: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16e474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16e478: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x16e478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16e47c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x16e47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e480: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x16e480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x16e484: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x16e484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16e488: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e48c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16e48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16e490: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x16e490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16e494: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x16E494u;
    SET_GPR_U32(ctx, 31, 0x16E49Cu);
    ctx->pc = 0x16E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E494u;
    // 0x16e498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x16E494u, 0x16E49Cu)) {
        return;
    }
    ctx->pc = 0x16E49Cu;
label_16e49c:
    // 0x16e49c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4a0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x16e4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e4a4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x16e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4a8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x16e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e4ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16e4acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e4b0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x16e4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16e4b4: 0xe641006c  swc1        $f1, 0x6C($s2)
    ctx->pc = 0x16e4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x16e4b8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x16e4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16e4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x16e4c0: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x16e4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x16e4c4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x16e4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e4c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x16e4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x16e4cc: 0xe6410074  swc1        $f1, 0x74($s2)
    ctx->pc = 0x16e4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x16e4d0: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x16e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x16e4d4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x16E4D4u;
    SET_GPR_U32(ctx, 31, 0x16E4DCu);
    ctx->pc = 0x16E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4D4u;
    // 0x16e4d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x16E4D4u, 0x16E4DCu)) {
        return;
    }
    ctx->pc = 0x16E4DCu;
label_16e4dc:
    // 0x16e4dc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x16e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e4e0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x16e4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4e4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x16e4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e4e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16e4e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e4ec: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x16e4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16e4f0: 0xe6410078  swc1        $f1, 0x78($s2)
    ctx->pc = 0x16e4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x16e4f4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x16e4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16e4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16e4fc: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x16e4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x16e500: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x16e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e504: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x16e504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16e508: 0xe6410080  swc1        $f1, 0x80($s2)
    ctx->pc = 0x16e508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x16e50c: 0xc6420084  lwc1        $f2, 0x84($s2)
    ctx->pc = 0x16e50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e510: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x16e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e514: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x16e514u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x16e518: 0xc640008c  lwc1        $f0, 0x8C($s2)
    ctx->pc = 0x16e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e51c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16e51cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16e520: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16e520u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x16e524: 0xe6420090  swc1        $f2, 0x90($s2)
    ctx->pc = 0x16e524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x16e528: 0xe6410094  swc1        $f1, 0x94($s2)
    ctx->pc = 0x16e528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
    // 0x16e52c: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x16e52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x16e530: 0xc04f0e2  jal         func_13C388
    ctx->pc = 0x16E530u;
    SET_GPR_U32(ctx, 31, 0x16E538u);
    ctx->pc = 0x16E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E530u;
    // 0x16e534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C388u, 0x16E530u, 0x16E538u)) {
        return;
    }
    ctx->pc = 0x16E538u;
label_16e538:
    // 0x16e538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e53c: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x16E53Cu;
    SET_GPR_U32(ctx, 31, 0x16E544u);
    ctx->pc = 0x16E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E53Cu;
    // 0x16e540: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x16E53Cu, 0x16E544u)) {
        return;
    }
    ctx->pc = 0x16E544u;
label_16e544:
    // 0x16e544: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16e544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e548: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x16E548u;
    SET_GPR_U32(ctx, 31, 0x16E550u);
    ctx->pc = 0x16E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E548u;
    // 0x16e54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x16E548u, 0x16E550u)) {
        return;
    }
    ctx->pc = 0x16E550u;
label_16e550:
    // 0x16e550: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x16e550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x16e554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e558: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x16E558u;
    SET_GPR_U32(ctx, 31, 0x16E560u);
    ctx->pc = 0x16E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E558u;
    // 0x16e55c: 0xe64000b4  swc1        $f0, 0xB4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x16E558u, 0x16E560u)) {
        return;
    }
    ctx->pc = 0x16E560u;
label_16e560:
    // 0x16e560: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x16e560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x16e564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e568: 0x2644009c  addiu       $a0, $s2, 0x9C
    ctx->pc = 0x16e568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
    // 0x16e56c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x16E56Cu;
    SET_GPR_U32(ctx, 31, 0x16E574u);
    ctx->pc = 0x16E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E56Cu;
    // 0x16e570: 0xe64000b8  swc1        $f0, 0xB8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x16E56Cu, 0x16E574u)) {
        return;
    }
    ctx->pc = 0x16E574u;
label_16e574:
    // 0x16e574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16e574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e578: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x16E578u;
    SET_GPR_U32(ctx, 31, 0x16E580u);
    ctx->pc = 0x16E57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E578u;
    // 0x16e57c: 0x264400a8  addiu       $a0, $s2, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x16E578u, 0x16E580u)) {
        return;
    }
    ctx->pc = 0x16E580u;
label_16e580:
    // 0x16e580: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16E580u;
    {
        const bool branch_taken_0x16e580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E580u;
        // 0x16e584: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e580) {
            ctx->pc = 0x16E5B0u;
            goto label_16e5b0;
        }
    }
    ctx->pc = 0x16E588u;
label_16e588:
    // 0x16e588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e58c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e590: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16e594: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16E594u;
    SET_GPR_U32(ctx, 31, 0x16E59Cu);
    ctx->pc = 0x16E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E594u;
    // 0x16e598: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16E594u, 0x16E59Cu)) {
        return;
    }
    ctx->pc = 0x16E59Cu;
label_16e59c:
    // 0x16e59c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e5a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e5a4: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x16E5A4u;
    {
        const bool branch_taken_0x16e5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5A4u;
        // 0x16e5a8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5a4) {
            ctx->pc = 0x16E458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e458;
        }
    }
    ctx->pc = 0x16E5ACu;
label_16e5ac:
    // 0x16e5ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_16e5b0:
    // 0x16e5b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5b4: 0x8c46f6e4  lw          $a2, -0x91C($v0)
    ctx->pc = 0x16e5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964964)));
    // 0x16e5b8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16E5B8u;
    SET_GPR_U32(ctx, 31, 0x16E5C0u);
    ctx->pc = 0x16E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E5B8u;
    // 0x16e5bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16E5B8u, 0x16E5C0u)) {
        return;
    }
    ctx->pc = 0x16E5C0u;
label_16e5c0:
    // 0x16e5c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e5c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e5c8: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x16E5C8u;
    {
        const bool branch_taken_0x16e5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5C8u;
        // 0x16e5cc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5c8) {
            ctx->pc = 0x16E734u;
            goto label_16e734;
        }
    }
    ctx->pc = 0x16E5D0u;
    // 0x16e5d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e5d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e5d8:
    // 0x16e5d8: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x16e5d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x16e5dc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x16E5DCu;
    {
        const bool branch_taken_0x16e5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5DCu;
        // 0x16e5e0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5dc) {
            ctx->pc = 0x16E704u;
            goto label_16e704;
        }
    }
    ctx->pc = 0x16E5E4u;
    // 0x16e5e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16e5e8: 0x24424e90  addiu       $v0, $v0, 0x4E90
    ctx->pc = 0x16e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20112));
    // 0x16e5ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e5f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e5f4: 0x800008  jr          $a0
    ctx->pc = 0x16E5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E5FCu: goto label_16e5fc;
            case 0x16E610u: goto label_16e610;
            case 0x16E620u: goto label_16e620;
            case 0x16E640u: goto label_16e640;
            case 0x16E6D4u: goto label_16e6d4;
            case 0x16E6F0u: goto label_16e6f0;
            case 0x16E704u: goto label_16e704;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16E5FCu;
label_16e5fc:
    // 0x16e5fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e600: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16e600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16e604: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16e604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16e608: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16E608u;
    {
        const bool branch_taken_0x16e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E608u;
        // 0x16e60c: 0xae4200cc  sw          $v0, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e608) {
            ctx->pc = 0x16E704u;
            goto label_16e704;
        }
    }
    ctx->pc = 0x16E610u;
label_16e610:
    // 0x16e610: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e614: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x16e614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x16e618: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E618u;
    {
        const bool branch_taken_0x16e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E618u;
        // 0x16e61c: 0x264500bc  addiu       $a1, $s2, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e618) {
            ctx->pc = 0x16E62Cu;
            goto label_16e62c;
        }
    }
    ctx->pc = 0x16E620u;
label_16e620:
    // 0x16e620: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x16e620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e624: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x16e628: 0x264500c4  addiu       $a1, $s2, 0xC4
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_16e62c:
    // 0x16e62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16e62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e630: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16E630u;
    SET_GPR_U32(ctx, 31, 0x16E638u);
    ctx->pc = 0x16E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E630u;
    // 0x16e634: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16E630u, 0x16E638u)) {
        return;
    }
    ctx->pc = 0x16E638u;
label_16e638:
    // 0x16e638: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x16E638u;
    {
        const bool branch_taken_0x16e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E638u;
        // 0x16e63c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e638) {
            ctx->pc = 0x16E708u;
            goto label_16e708;
        }
    }
    ctx->pc = 0x16E640u;
label_16e640:
    // 0x16e640: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x16e640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x16e644: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E644u;
    {
        const bool branch_taken_0x16e644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E644u;
        // 0x16e648: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e644) {
            ctx->pc = 0x16E65Cu;
            goto label_16e65c;
        }
    }
    ctx->pc = 0x16E64Cu;
    // 0x16e64c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16E64Cu;
    SET_GPR_U32(ctx, 31, 0x16E654u);
    ctx->pc = 0x16E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E64Cu;
    // 0x16e650: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16E64Cu, 0x16E654u)) {
        return;
    }
    ctx->pc = 0x16E654u;
label_16e654:
    // 0x16e654: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x16e654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x16e658: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e65c:
    // 0x16e65c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e660: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x16e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16e664: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16E664u;
    {
        const bool branch_taken_0x16e664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e664) {
            ctx->pc = 0x16E668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E664u;
            // 0x16e668: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E69Cu;
            goto label_16e69c;
        }
    }
    ctx->pc = 0x16E66Cu;
    // 0x16e66c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E66Cu;
    {
        const bool branch_taken_0x16e66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E66Cu;
        // 0x16e670: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e66c) {
            ctx->pc = 0x16E694u;
            goto label_16e694;
        }
    }
    ctx->pc = 0x16E674u;
    // 0x16e674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e678: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16E678u;
    {
        const bool branch_taken_0x16e678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E678u;
        // 0x16e67c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e678) {
            ctx->pc = 0x16E6A4u;
            goto label_16e6a4;
        }
    }
    ctx->pc = 0x16E680u;
    // 0x16e680: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16e684: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E684u;
    {
        const bool branch_taken_0x16e684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E684u;
        // 0x16e688: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e684) {
            ctx->pc = 0x16E6ACu;
            goto label_16e6ac;
        }
    }
    ctx->pc = 0x16E68Cu;
    // 0x16e68c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16E68Cu;
    {
        const bool branch_taken_0x16e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E68Cu;
        // 0x16e690: 0x8e450044  lw          $a1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e68c) {
            ctx->pc = 0x16E6B8u;
            goto label_16e6b8;
        }
    }
    ctx->pc = 0x16E694u;
label_16e694:
    // 0x16e694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16E694u;
    {
        const bool branch_taken_0x16e694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E694u;
        // 0x16e698: 0x2442f738  addiu       $v0, $v0, -0x8C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e694) {
            ctx->pc = 0x16E6B0u;
            goto label_16e6b0;
        }
    }
    ctx->pc = 0x16E69Cu;
label_16e69c:
    // 0x16e69c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E69Cu;
    {
        const bool branch_taken_0x16e69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E69Cu;
        // 0x16e6a0: 0x2442f740  addiu       $v0, $v0, -0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e69c) {
            ctx->pc = 0x16E6B0u;
            goto label_16e6b0;
        }
    }
    ctx->pc = 0x16E6A4u;
label_16e6a4:
    // 0x16e6a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E6A4u;
    {
        const bool branch_taken_0x16e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6A4u;
        // 0x16e6a8: 0x2442f748  addiu       $v0, $v0, -0x8B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6a4) {
            ctx->pc = 0x16E6B0u;
            goto label_16e6b0;
        }
    }
    ctx->pc = 0x16E6ACu;
label_16e6ac:
    // 0x16e6ac: 0x2442f750  addiu       $v0, $v0, -0x8B0
    ctx->pc = 0x16e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
label_16e6b0:
    // 0x16e6b0: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x16e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x16e6b4: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x16e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_16e6b8:
    // 0x16e6b8: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16E6B8u;
    {
        const bool branch_taken_0x16e6b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6B8u;
        // 0x16e6bc: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6b8) {
            ctx->pc = 0x16E704u;
            goto label_16e704;
        }
    }
    ctx->pc = 0x16E6C0u;
    // 0x16e6c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e6c4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16E6C4u;
    SET_GPR_U32(ctx, 31, 0x16E6CCu);
    ctx->pc = 0x16E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6C4u;
    // 0x16e6c8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16E6C4u, 0x16E6CCu)) {
        return;
    }
    ctx->pc = 0x16E6CCu;
label_16e6cc:
    // 0x16e6cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16E6CCu;
    {
        const bool branch_taken_0x16e6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6CCu;
        // 0x16e6d0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6cc) {
            ctx->pc = 0x16E708u;
            goto label_16e708;
        }
    }
    ctx->pc = 0x16E6D4u;
label_16e6d4:
    // 0x16e6d4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x16e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e6d8: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x16e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x16e6dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e6e0: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16E6E0u;
    SET_GPR_U32(ctx, 31, 0x16E6E8u);
    ctx->pc = 0x16E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6E0u;
    // 0x16e6e4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16E6E0u, 0x16E6E8u)) {
        return;
    }
    ctx->pc = 0x16E6E8u;
label_16e6e8:
    // 0x16e6e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16E6E8u;
    {
        const bool branch_taken_0x16e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6E8u;
        // 0x16e6ec: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6e8) {
            ctx->pc = 0x16E708u;
            goto label_16e708;
        }
    }
    ctx->pc = 0x16E6F0u;
label_16e6f0:
    // 0x16e6f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x16e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e6f4: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x16e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x16e6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e6fc: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16E6FCu;
    SET_GPR_U32(ctx, 31, 0x16E704u);
    ctx->pc = 0x16E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6FCu;
    // 0x16e700: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16E6FCu, 0x16E704u)) {
        return;
    }
    ctx->pc = 0x16E704u;
label_16e704:
    // 0x16e704: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e708:
    // 0x16e708: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16e70c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16e70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e714: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e718: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16E718u;
    SET_GPR_U32(ctx, 31, 0x16E720u);
    ctx->pc = 0x16E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E718u;
    // 0x16e71c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16E718u, 0x16E720u)) {
        return;
    }
    ctx->pc = 0x16E720u;
label_16e720:
    // 0x16e720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e724: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e728: 0x5460ffab  bnel        $v1, $zero, . + 4 + (-0x55 << 2)
    ctx->pc = 0x16E728u;
    {
        const bool branch_taken_0x16e728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e728) {
            ctx->pc = 0x16E72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E728u;
            // 0x16e72c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e5d8;
        }
    }
    ctx->pc = 0x16E730u;
    // 0x16e730: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16e730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16e734:
    // 0x16e734: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16e734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16e738: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16e738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e73c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16e73cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e740: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x16e740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16e744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e748: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x16e748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16e74c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x16e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16e750: 0x3e00008  jr          $ra
    ctx->pc = 0x16E750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E750u;
        // 0x16e754: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E758u;
}
