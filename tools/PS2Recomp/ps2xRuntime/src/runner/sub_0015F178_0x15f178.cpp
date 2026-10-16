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

// Function: sub_0015F178
// Address: 0x15f178 - 0x15f2e0
void sub_0015F178_0x15f178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F178_0x15f178");
#endif

    switch (ctx->pc) {
        case 0x15f18cu: goto label_15f18c;
        case 0x15f2bcu: goto label_15f2bc;
        default: break;
    }

    ctx->pc = 0x15f178u;

    // 0x15f178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15f178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15f17c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15f17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15f180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f184: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x15F184u;
    SET_GPR_U32(ctx, 31, 0x15F18Cu);
    ctx->pc = 0x15F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F184u;
    // 0x15f188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x15F184u, 0x15F18Cu)) {
        return;
    }
    ctx->pc = 0x15F18Cu;
label_15f18c:
    // 0x15f18c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15f18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15f190: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x15f190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f194: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15f198: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x15f198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x15f19c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15f19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15f1a0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x15f1a4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x15f1a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x15f1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f1ac: 0x24423530  addiu       $v0, $v0, 0x3530
    ctx->pc = 0x15f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13616));
    // 0x15f1b0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x15f1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x15f1b4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x15f1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x15f1b8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x15f1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x15f1bc: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x15f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
    // 0x15f1c0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x15f1c4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x15f1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x15f1c8: 0x240805dc  addiu       $t0, $zero, 0x5DC
    ctx->pc = 0x15f1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x15f1cc: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x15f1d0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x15f1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x15f1d4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x15f1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x15f1d8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x15f1dc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x15f1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x15f1e0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x15f1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x15f1e4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x15f1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x15f1e8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x15f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x15f1ec: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x15f1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
    // 0x15f1f0: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x15f1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x15f1f4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x15f1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15f1f8: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x15f1fc: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
    // 0x15f200: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x15f200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x15f204: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x15f204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15f208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f20c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x15f20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x15f210: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x15f210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15f214: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15f214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15f218: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x15f218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x15f21c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15f21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f220: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x15f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x15f224: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15f224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x15f228: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15f228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f22c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x15f22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x15f230: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15f230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15f234: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x15f238: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15f238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x15f23c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15f23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15f240: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15f240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15f244: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x15f244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15f248: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x15f248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x15f24c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x15f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x15f250: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x15f250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x15f254: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x15f254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x15f258: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x15f258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x15f25c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x15f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x15f260: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x15f260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x15f264: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x15f264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x15f268: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x15f268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x15f26c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x15f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x15f270: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x15f270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x15f274: 0xae080054  sw          $t0, 0x54($s0)
    ctx->pc = 0x15f274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 8));
    // 0x15f278: 0xe60c0058  swc1        $f12, 0x58($s0)
    ctx->pc = 0x15f278u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x15f27c: 0xe60d005c  swc1        $f13, 0x5C($s0)
    ctx->pc = 0x15f27cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x15f280: 0xe60b0064  swc1        $f11, 0x64($s0)
    ctx->pc = 0x15f280u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x15f284: 0xe60a0060  swc1        $f10, 0x60($s0)
    ctx->pc = 0x15f284u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x15f288: 0xe608009c  swc1        $f8, 0x9C($s0)
    ctx->pc = 0x15f288u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x15f28c: 0xe60e00a0  swc1        $f14, 0xA0($s0)
    ctx->pc = 0x15f28cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x15f290: 0xe60900a4  swc1        $f9, 0xA4($s0)
    ctx->pc = 0x15f290u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x15f294: 0xe60700a8  swc1        $f7, 0xA8($s0)
    ctx->pc = 0x15f294u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x15f298: 0xe60600ac  swc1        $f6, 0xAC($s0)
    ctx->pc = 0x15f298u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x15f29c: 0xe6050068  swc1        $f5, 0x68($s0)
    ctx->pc = 0x15f29cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x15f2a0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x15f2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x15f2a4: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x15f2a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x15f2a8: 0xe602007c  swc1        $f2, 0x7C($s0)
    ctx->pc = 0x15f2a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x15f2ac: 0xe6030080  swc1        $f3, 0x80($s0)
    ctx->pc = 0x15f2acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x15f2b0: 0xe6040084  swc1        $f4, 0x84($s0)
    ctx->pc = 0x15f2b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x15f2b4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15F2B4u;
    SET_GPR_U32(ctx, 31, 0x15F2BCu);
    ctx->pc = 0x15F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F2B4u;
    // 0x15f2b8: 0xe60e0090  swc1        $f14, 0x90($s0) (Delay Slot)
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15F2B4u, 0x15F2BCu)) {
        return;
    }
    ctx->pc = 0x15F2BCu;
label_15f2bc:
    // 0x15f2bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x15f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x15f2c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15f2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2c4: 0x8c838644  lw          $v1, -0x79BC($a0)
    ctx->pc = 0x15f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338644u));
    // 0x15f2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f2cc: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x15f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x15f2d0: 0xac908644  sw          $s0, -0x79BC($a0)
    ctx->pc = 0x15f2d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x338644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338644u, _value); } while (0);
    // 0x15f2d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15f2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x15F2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2D8u;
        // 0x15f2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F2E0u;
}
