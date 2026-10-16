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

// Function: sub_00238718
// Address: 0x238718 - 0x238a88
void sub_00238718_0x238718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238718_0x238718");
#endif

    switch (ctx->pc) {
        case 0x238868u: goto label_238868;
        case 0x2388b0u: goto label_2388b0;
        case 0x2388bcu: goto label_2388bc;
        case 0x2388c8u: goto label_2388c8;
        case 0x2388d0u: goto label_2388d0;
        case 0x2388e4u: goto label_2388e4;
        case 0x2388f0u: goto label_2388f0;
        case 0x2388fcu: goto label_2388fc;
        case 0x238904u: goto label_238904;
        case 0x23894cu: goto label_23894c;
        case 0x238958u: goto label_238958;
        case 0x238964u: goto label_238964;
        case 0x23896cu: goto label_23896c;
        case 0x238980u: goto label_238980;
        case 0x23898cu: goto label_23898c;
        case 0x238998u: goto label_238998;
        case 0x2389a0u: goto label_2389a0;
        case 0x2389d0u: goto label_2389d0;
        case 0x2389e0u: goto label_2389e0;
        case 0x2389f0u: goto label_2389f0;
        case 0x238a00u: goto label_238a00;
        default: break;
    }

    ctx->pc = 0x238718u;

    // 0x238718: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x238718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x23871c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x23871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x238720: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x238720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x238724: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x238724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x238728: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x238728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x23872c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x238730: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x238730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x238734: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x238734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x238738: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x238738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x23873c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x23873cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x238740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238744: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x238744u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x238748: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x238748u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x23874c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x23874cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x238750: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x238750u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x238754: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x238754u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x238758: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x238758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x23875c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23875cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x238760: 0x40836000  mtc0        $v1, Status
    ctx->pc = 0x238760u;
    ctx->cop0_status = GPR_U32(ctx, 3) & 0xFF57FFFF;
    // 0x238764: 0x3409f000  ori         $t1, $zero, 0xF000
    ctx->pc = 0x238764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x238768: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x238768u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23876c: 0x3529000d  ori         $t1, $t1, 0xD
    ctx->pc = 0x23876cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    // 0x238770: 0x3408a000  ori         $t0, $zero, 0xA000
    ctx->pc = 0x238770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x238774: 0x840bc  dsll32      $t0, $t0, 2
    ctx->pc = 0x238774u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 2));
    // 0x238778: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x238778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x23877c: 0x84278  dsll        $t0, $t0, 9
    ctx->pc = 0x23877cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 9);
    // 0x238780: 0x35080102  ori         $t0, $t0, 0x102
    ctx->pc = 0x238780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)258);
    // 0x238784: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x238784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x238788: 0x71093b89  pcpyld      $a3, $t0, $t1
    ctx->pc = 0x238788u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x23878c: 0x24843cd0  addiu       $a0, $a0, 0x3CD0
    ctx->pc = 0x23878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15568));
    // 0x238790: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x238794: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x238794u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x238798: 0x24a53f70  addiu       $a1, $a1, 0x3F70
    ctx->pc = 0x238798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16240));
    // 0x23879c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x23879cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2387a0: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x2387a0u;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x703F70u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x703F70u, _value); } while (0);
    // 0x2387a4: 0x24423e90  addiu       $v0, $v0, 0x3E90
    ctx->pc = 0x2387a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16016));
    // 0x2387a8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2387a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2387ac: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x2387acu;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x703E90u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x703E90u, _value); } while (0);
    // 0x2387b0: 0x24633db0  addiu       $v1, $v1, 0x3DB0
    ctx->pc = 0x2387b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15792));
    // 0x2387b4: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x2387b4u;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x703DB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x703DB0u, _value); } while (0);
    // 0x2387b8: 0x3c087130  lui         $t0, 0x7130
    ctx->pc = 0x2387b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28976 << 16));
    // 0x2387bc: 0x35084001  ori         $t0, $t0, 0x4001
    ctx->pc = 0x2387bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16385);
    // 0x2387c0: 0x3409fcfc  ori         $t1, $zero, 0xFCFC
    ctx->pc = 0x2387c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64764);
    // 0x2387c4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2387c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2387c8: 0x3529fcfc  ori         $t1, $t1, 0xFCFC
    ctx->pc = 0x2387c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64764);
    // 0x2387cc: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2387ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2387d0: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x2387d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x2387d4: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x2387d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x2387d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2387d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387dc: 0x71093b89  pcpyld      $a3, $t0, $t1
    ctx->pc = 0x2387dcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x2387e0: 0x3c01402b  lui         $at, 0x402B
    ctx->pc = 0x2387e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16427 << 16));
    // 0x2387e4: 0x3421c9ef  ori         $at, $at, 0xC9EF
    ctx->pc = 0x2387e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51695);
    // 0x2387e8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2387e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2387ec: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x2387ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x2387f0: 0x3408e260  ori         $t0, $zero, 0xE260
    ctx->pc = 0x2387f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57952);
    // 0x2387f4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2387f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2387f8: 0x35088404  ori         $t0, $t0, 0x8404
    ctx->pc = 0x2387f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)33796);
    // 0x2387fc: 0x847f8  dsll        $t0, $t0, 31
    ctx->pc = 0x2387fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 31);
    // 0x238800: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x238800u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x238804: 0x247e0080  addiu       $fp, $v1, 0x80
    ctx->pc = 0x238804u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x238808: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x238808u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x23880c: 0x24570080  addiu       $s7, $v0, 0x80
    ctx->pc = 0x23880cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x238810: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x238810u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x238814: 0x2496001c  addiu       $s6, $a0, 0x1C
    ctx->pc = 0x238814u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x238818: 0x71063b89  pcpyld      $a3, $t0, $a2
    ctx->pc = 0x238818u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x23881c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x23881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x238820: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x238820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x238824: 0x7ca70070  sq          $a3, 0x70($a1)
    ctx->pc = 0x238824u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 7));
    // 0x238828: 0x2475001c  addiu       $s5, $v1, 0x1C
    ctx->pc = 0x238828u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x23882c: 0x7c870070  sq          $a3, 0x70($a0)
    ctx->pc = 0x23882cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 7));
    // 0x238830: 0x2454001c  addiu       $s4, $v0, 0x1C
    ctx->pc = 0x238830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x238834: 0x7c470070  sq          $a3, 0x70($v0)
    ctx->pc = 0x238834u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 7));
    // 0x238838: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x238838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23883c: 0x341380e0  ori         $s3, $zero, 0x80E0
    ctx->pc = 0x23883cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x238840: 0x139bfc  dsll32      $s3, $s3, 15
    ctx->pc = 0x238840u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 15));
    // 0x238844: 0x3c0142be  lui         $at, 0x42BE
    ctx->pc = 0x238844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17086 << 16));
    // 0x238848: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x238848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x23884c: 0x341280df  ori         $s2, $zero, 0x80DF
    ctx->pc = 0x23884cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32991);
    // 0x238850: 0x129438  dsll        $s2, $s2, 16
    ctx->pc = 0x238850u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
    // 0x238854: 0x3652c000  ori         $s2, $s2, 0xC000
    ctx->pc = 0x238854u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49152);
    // 0x238858: 0x1297f8  dsll        $s2, $s2, 31
    ctx->pc = 0x238858u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 31);
    // 0x23885c: 0x7c670070  sq          $a3, 0x70($v1)
    ctx->pc = 0x23885cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 7));
    // 0x238860: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x238860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x238864: 0x0  nop
    ctx->pc = 0x238864u;
    // NOP
label_238868:
    // 0x238868: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x238868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23886c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x238870: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x238870u;
    {
        const bool branch_taken_0x238870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x238874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238870u;
        // 0x238874: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238870) {
            ctx->pc = 0x23890Cu;
            goto label_23890c;
        }
    }
    ctx->pc = 0x238878u;
    // 0x238878: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x238878u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23887c: 0x0  nop
    ctx->pc = 0x23887cu;
    // NOP
    // 0x238880: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x238880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x238884: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x238884u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x238888: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x238888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x23888c: 0x4617a002  mul.s       $f0, $f20, $f23
    ctx->pc = 0x23888cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x238890: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x238890u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[21]);
    // 0x238894: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x238894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x238898: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x238898u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23889c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23889cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2388a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2388a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2388a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2388a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2388a8: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x2388A8u;
    SET_GPR_U32(ctx, 31, 0x2388B0u);
    ctx->pc = 0x2388ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388A8u;
    // 0x2388ac: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x2388A8u, 0x2388B0u)) {
        return;
    }
    ctx->pc = 0x2388B0u;
label_2388b0:
    // 0x2388b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2388b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388b4: 0xc09b214  jal         func_26C850
    ctx->pc = 0x2388B4u;
    SET_GPR_U32(ctx, 31, 0x2388BCu);
    ctx->pc = 0x2388B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388B4u;
    // 0x2388b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C850u, 0x2388B4u, 0x2388BCu)) {
        return;
    }
    ctx->pc = 0x2388BCu;
label_2388bc:
    // 0x2388bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2388bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388c0: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2388C0u;
    SET_GPR_U32(ctx, 31, 0x2388C8u);
    ctx->pc = 0x2388C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388C0u;
    // 0x2388c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2388C0u, 0x2388C8u)) {
        return;
    }
    ctx->pc = 0x2388C8u;
label_2388c8:
    // 0x2388c8: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2388C8u;
    SET_GPR_U32(ctx, 31, 0x2388D0u);
    ctx->pc = 0x2388CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388C8u;
    // 0x2388cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2388C8u, 0x2388D0u)) {
        return;
    }
    ctx->pc = 0x2388D0u;
label_2388d0:
    // 0x2388d0: 0x4614a302  mul.s       $f12, $f20, $f20
    ctx->pc = 0x2388d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2388d4: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x2388d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2388d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2388d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2388dc: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x2388DCu;
    SET_GPR_U32(ctx, 31, 0x2388E4u);
    ctx->pc = 0x2388E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388DCu;
    // 0x2388e0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x2388DCu, 0x2388E4u)) {
        return;
    }
    ctx->pc = 0x2388E4u;
label_2388e4:
    // 0x2388e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2388e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388e8: 0xc09b214  jal         func_26C850
    ctx->pc = 0x2388E8u;
    SET_GPR_U32(ctx, 31, 0x2388F0u);
    ctx->pc = 0x2388ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388E8u;
    // 0x2388ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C850u, 0x2388E8u, 0x2388F0u)) {
        return;
    }
    ctx->pc = 0x2388F0u;
label_2388f0:
    // 0x2388f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2388f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388f4: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2388F4u;
    SET_GPR_U32(ctx, 31, 0x2388FCu);
    ctx->pc = 0x2388F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388F4u;
    // 0x2388f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2388F4u, 0x2388FCu)) {
        return;
    }
    ctx->pc = 0x2388FCu;
label_2388fc:
    // 0x2388fc: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2388FCu;
    SET_GPR_U32(ctx, 31, 0x238904u);
    ctx->pc = 0x238900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388FCu;
    // 0x238900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2388FCu, 0x238904u)) {
        return;
    }
    ctx->pc = 0x238904u;
label_238904:
    // 0x238904: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x238904u;
    {
        const bool branch_taken_0x238904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238904u;
        // 0x238908: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238904) {
            ctx->pc = 0x2389A4u;
            goto label_2389a4;
        }
    }
    ctx->pc = 0x23890Cu;
label_23890c:
    // 0x23890c: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x23890cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238910: 0x0  nop
    ctx->pc = 0x238910u;
    // NOP
    // 0x238914: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x238914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x238918: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x238918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x23891c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x23891cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x238920: 0x24423d50  addiu       $v0, $v0, 0x3D50
    ctx->pc = 0x238920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15696));
    // 0x238924: 0x4617a002  mul.s       $f0, $f20, $f23
    ctx->pc = 0x238924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x238928: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x238928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23892c: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x23892cu;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[21]);
    // 0x238930: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x238930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x238934: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x238934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x238938: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x238938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23893c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23893cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x238940: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x238940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x238944: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x238944u;
    SET_GPR_U32(ctx, 31, 0x23894Cu);
    ctx->pc = 0x238948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238944u;
    // 0x238948: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x238944u, 0x23894Cu)) {
        return;
    }
    ctx->pc = 0x23894Cu;
label_23894c:
    // 0x23894c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23894cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238950: 0xc09b214  jal         func_26C850
    ctx->pc = 0x238950u;
    SET_GPR_U32(ctx, 31, 0x238958u);
    ctx->pc = 0x238954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238950u;
    // 0x238954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C850u, 0x238950u, 0x238958u)) {
        return;
    }
    ctx->pc = 0x238958u;
label_238958:
    // 0x238958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23895c: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x23895Cu;
    SET_GPR_U32(ctx, 31, 0x238964u);
    ctx->pc = 0x238960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23895Cu;
    // 0x238960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x23895Cu, 0x238964u)) {
        return;
    }
    ctx->pc = 0x238964u;
label_238964:
    // 0x238964: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x238964u;
    SET_GPR_U32(ctx, 31, 0x23896Cu);
    ctx->pc = 0x238968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238964u;
    // 0x238968: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x238964u, 0x23896Cu)) {
        return;
    }
    ctx->pc = 0x23896Cu;
label_23896c:
    // 0x23896c: 0x4614a302  mul.s       $f12, $f20, $f20
    ctx->pc = 0x23896cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x238970: 0x21e1821  addu        $v1, $s0, $fp
    ctx->pc = 0x238970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x238974: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x238974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x238978: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x238978u;
    SET_GPR_U32(ctx, 31, 0x238980u);
    ctx->pc = 0x23897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238978u;
    // 0x23897c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x238978u, 0x238980u)) {
        return;
    }
    ctx->pc = 0x238980u;
label_238980:
    // 0x238980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238984: 0xc09b214  jal         func_26C850
    ctx->pc = 0x238984u;
    SET_GPR_U32(ctx, 31, 0x23898Cu);
    ctx->pc = 0x238988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238984u;
    // 0x238988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C850u, 0x238984u, 0x23898Cu)) {
        return;
    }
    ctx->pc = 0x23898Cu;
label_23898c:
    // 0x23898c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238990: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x238990u;
    SET_GPR_U32(ctx, 31, 0x238998u);
    ctx->pc = 0x238994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238990u;
    // 0x238994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x238990u, 0x238998u)) {
        return;
    }
    ctx->pc = 0x238998u;
label_238998:
    // 0x238998: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x238998u;
    SET_GPR_U32(ctx, 31, 0x2389A0u);
    ctx->pc = 0x23899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238998u;
    // 0x23899c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x238998u, 0x2389A0u)) {
        return;
    }
    ctx->pc = 0x2389A0u;
label_2389a0:
    // 0x2389a0: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x2389a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_2389a4:
    // 0x2389a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2389a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2389a8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2389a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2389ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2389acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2389b0: 0x2a220060  slti        $v0, $s1, 0x60
    ctx->pc = 0x2389b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x2389b4: 0x5440ffac  bnel        $v0, $zero, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2389B4u;
    {
        const bool branch_taken_0x2389b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2389b4) {
            ctx->pc = 0x2389B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2389B4u;
            // 0x2389b8: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238868;
        }
    }
    ctx->pc = 0x2389BCu;
    // 0x2389bc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2389bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2389c0: 0x24503cd0  addiu       $s0, $v0, 0x3CD0
    ctx->pc = 0x2389c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15568));
    // 0x2389c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2389c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389c8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2389C8u;
    SET_GPR_U32(ctx, 31, 0x2389D0u);
    ctx->pc = 0x2389CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389C8u;
    // 0x2389cc: 0x2605015f  addiu       $a1, $s0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2389C8u, 0x2389D0u)) {
        return;
    }
    ctx->pc = 0x2389D0u;
label_2389d0:
    // 0x2389d0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2389d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2389d4: 0x24443db0  addiu       $a0, $v0, 0x3DB0
    ctx->pc = 0x2389d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15792));
    // 0x2389d8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2389D8u;
    SET_GPR_U32(ctx, 31, 0x2389E0u);
    ctx->pc = 0x2389DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389D8u;
    // 0x2389dc: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2389D8u, 0x2389E0u)) {
        return;
    }
    ctx->pc = 0x2389E0u;
label_2389e0:
    // 0x2389e0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2389e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2389e4: 0x24443e90  addiu       $a0, $v0, 0x3E90
    ctx->pc = 0x2389e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16016));
    // 0x2389e8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2389E8u;
    SET_GPR_U32(ctx, 31, 0x2389F0u);
    ctx->pc = 0x2389ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389E8u;
    // 0x2389ec: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2389E8u, 0x2389F0u)) {
        return;
    }
    ctx->pc = 0x2389F0u;
label_2389f0:
    // 0x2389f0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2389f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2389f4: 0x24443f70  addiu       $a0, $v0, 0x3F70
    ctx->pc = 0x2389f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16240));
    // 0x2389f8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2389F8u;
    SET_GPR_U32(ctx, 31, 0x238A00u);
    ctx->pc = 0x2389FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389F8u;
    // 0x2389fc: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2389F8u, 0x238A00u)) {
        return;
    }
    ctx->pc = 0x238A00u;
label_238a00:
    // 0x238a00: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x238a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x238a04: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x238a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x238a08: 0x24420478  addiu       $v0, $v0, 0x478
    ctx->pc = 0x238a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1144));
    // 0x238a0c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x238a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x238a10: 0x8c450860  lw          $a1, 0x860($v0)
    ctx->pc = 0x238a10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5C0CD8u));
    // 0x238a14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238a18: 0xac304168  sw          $s0, 0x4168($at)
    ctx->pc = 0x238a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6B4168u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4168u, _value); } while (0);
    // 0x238a1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238a20: 0xac233f18  sw          $v1, 0x3F18($at)
    ctx->pc = 0x238a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F18u, _value); } while (0);
    // 0x238a24: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238a28: 0xac203f20  sw          $zero, 0x3F20($at)
    ctx->pc = 0x238a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F20u, _value); } while (0);
    // 0x238a2c: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x238A2Cu;
    {
        const bool branch_taken_0x238a2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x238A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A2Cu;
        // 0x238a30: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a2c) {
            ctx->pc = 0x238A38u;
            goto label_238a38;
        }
    }
    ctx->pc = 0x238A34u;
    // 0x238a34: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x238a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_238a38:
    // 0x238a38: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238a3c: 0xac223f1c  sw          $v0, 0x3F1C($at)
    ctx->pc = 0x238a3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F1Cu, _value); } while (0);
    // 0x238a40: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x238a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x238a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238a48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x238a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x238a4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x238a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x238a50: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x238a50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238a54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x238a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238a58: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x238a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238a5c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x238a5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238a60: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x238a60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238a64: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x238a64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238a6c: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x238a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x238a70: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x238a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x238a74: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x238a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x238a78: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x238a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x238A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A7Cu;
        // 0x238a80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238A84u;
    // 0x238a84: 0x0  nop
    ctx->pc = 0x238a84u;
    // NOP
    ctx->pc = 0x238a88u;
}
