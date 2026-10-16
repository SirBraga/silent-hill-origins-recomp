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

// Function: sub_001BA040
// Address: 0x1ba040 - 0x1ba468
void sub_001BA040_0x1ba040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA040_0x1ba040");
#endif

    switch (ctx->pc) {
        case 0x1ba068u: goto label_1ba068;
        case 0x1ba134u: goto label_1ba134;
        case 0x1ba144u: goto label_1ba144;
        case 0x1ba154u: goto label_1ba154;
        case 0x1ba164u: goto label_1ba164;
        case 0x1ba174u: goto label_1ba174;
        case 0x1ba180u: goto label_1ba180;
        case 0x1ba1acu: goto label_1ba1ac;
        case 0x1ba1c4u: goto label_1ba1c4;
        case 0x1ba1d8u: goto label_1ba1d8;
        case 0x1ba1ecu: goto label_1ba1ec;
        case 0x1ba204u: goto label_1ba204;
        case 0x1ba218u: goto label_1ba218;
        case 0x1ba22cu: goto label_1ba22c;
        case 0x1ba244u: goto label_1ba244;
        case 0x1ba258u: goto label_1ba258;
        case 0x1ba26cu: goto label_1ba26c;
        case 0x1ba284u: goto label_1ba284;
        case 0x1ba298u: goto label_1ba298;
        case 0x1ba2acu: goto label_1ba2ac;
        case 0x1ba2c4u: goto label_1ba2c4;
        case 0x1ba2d8u: goto label_1ba2d8;
        case 0x1ba2ecu: goto label_1ba2ec;
        case 0x1ba304u: goto label_1ba304;
        case 0x1ba318u: goto label_1ba318;
        case 0x1ba32cu: goto label_1ba32c;
        case 0x1ba344u: goto label_1ba344;
        case 0x1ba358u: goto label_1ba358;
        case 0x1ba36cu: goto label_1ba36c;
        case 0x1ba384u: goto label_1ba384;
        case 0x1ba398u: goto label_1ba398;
        case 0x1ba3b0u: goto label_1ba3b0;
        case 0x1ba3c0u: goto label_1ba3c0;
        case 0x1ba3d4u: goto label_1ba3d4;
        case 0x1ba3e8u: goto label_1ba3e8;
        case 0x1ba408u: goto label_1ba408;
        case 0x1ba410u: goto label_1ba410;
        case 0x1ba420u: goto label_1ba420;
        case 0x1ba428u: goto label_1ba428;
        case 0x1ba438u: goto label_1ba438;
        case 0x1ba440u: goto label_1ba440;
        default: break;
    }

    ctx->pc = 0x1ba040u;

    // 0x1ba040: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ba040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1ba044: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1ba044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1ba048: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1ba048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1ba04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba050: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1ba050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1ba054: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1ba054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1ba058: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1ba058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1ba05c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ba05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ba060: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1BA060u;
    SET_GPR_U32(ctx, 31, 0x1BA068u);
    ctx->pc = 0x1BA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA060u;
    // 0x1ba064: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1BA060u, 0x1BA068u)) {
        return;
    }
    ctx->pc = 0x1BA068u;
label_1ba068:
    // 0x1ba068: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1ba068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1ba06c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba070: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ba070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ba074: 0x2463d5d8  addiu       $v1, $v1, -0x2A28
    ctx->pc = 0x1ba074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956504));
    // 0x1ba078: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1ba07c: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1ba07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1ba080: 0x24e79500  addiu       $a3, $a3, -0x6B00
    ctx->pc = 0x1ba080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939904));
    // 0x1ba084: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x1ba084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x1ba088: 0x260202e0  addiu       $v0, $s0, 0x2E0
    ctx->pc = 0x1ba088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x1ba08c: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1ba08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1ba090: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x1ba090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x1ba094: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1ba094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1ba098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba09c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1ba09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1ba0a0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1ba0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ba0a4: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1ba0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1ba0a8: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1ba0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1ba0ac: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1ba0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1ba0b0: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1ba0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1ba0b4: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1ba0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1ba0b8: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1ba0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1ba0bc: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1ba0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1ba0c0: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1ba0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1ba0c4: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1ba0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1ba0c8: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1ba0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1ba0cc: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1ba0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1ba0d0: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1ba0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1ba0d4: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1ba0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1ba0d8: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1ba0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1ba0dc: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1ba0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1ba0e0: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x1ba0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x1ba0e4: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x1ba0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x1ba0e8: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x1ba0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x1ba0ec: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x1ba0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x1ba0f0: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x1ba0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x1ba0f4: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1ba0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1ba0f8: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x1ba0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x1ba0fc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ba0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ba100: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ba100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ba104: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x1ba104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x1ba108: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x1ba108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x1ba10c: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x1ba10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x1ba110: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x1ba110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x1ba114: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x1ba114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x1ba118: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x1ba118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x1ba11c: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x1ba11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x1ba120: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x1ba120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    // 0x1ba124: 0xae000354  sw          $zero, 0x354($s0)
    ctx->pc = 0x1ba124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
    // 0x1ba128: 0xae000358  sw          $zero, 0x358($s0)
    ctx->pc = 0x1ba128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 0));
    // 0x1ba12c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA12Cu;
    SET_GPR_U32(ctx, 31, 0x1BA134u);
    ctx->pc = 0x1BA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA12Cu;
    // 0x1ba130: 0xae000398  sw          $zero, 0x398($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA12Cu, 0x1BA134u)) {
        return;
    }
    ctx->pc = 0x1BA134u;
label_1ba134:
    // 0x1ba134: 0x2604033c  addiu       $a0, $s0, 0x33C
    ctx->pc = 0x1ba134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 828));
    // 0x1ba138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba13c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA13Cu;
    SET_GPR_U32(ctx, 31, 0x1BA144u);
    ctx->pc = 0x1BA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA13Cu;
    // 0x1ba140: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA13Cu, 0x1BA144u)) {
        return;
    }
    ctx->pc = 0x1BA144u;
label_1ba144:
    // 0x1ba144: 0x26040308  addiu       $a0, $s0, 0x308
    ctx->pc = 0x1ba144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 776));
    // 0x1ba148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba14c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA14Cu;
    SET_GPR_U32(ctx, 31, 0x1BA154u);
    ctx->pc = 0x1BA150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA14Cu;
    // 0x1ba150: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA14Cu, 0x1BA154u)) {
        return;
    }
    ctx->pc = 0x1BA154u;
label_1ba154:
    // 0x1ba154: 0x26040368  addiu       $a0, $s0, 0x368
    ctx->pc = 0x1ba154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 872));
    // 0x1ba158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba15c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA15Cu;
    SET_GPR_U32(ctx, 31, 0x1BA164u);
    ctx->pc = 0x1BA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA15Cu;
    // 0x1ba160: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA15Cu, 0x1BA164u)) {
        return;
    }
    ctx->pc = 0x1BA164u;
label_1ba164:
    // 0x1ba164: 0x260402a8  addiu       $a0, $s0, 0x2A8
    ctx->pc = 0x1ba164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x1ba168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba16c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA16Cu;
    SET_GPR_U32(ctx, 31, 0x1BA174u);
    ctx->pc = 0x1BA170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA16Cu;
    // 0x1ba170: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA16Cu, 0x1BA174u)) {
        return;
    }
    ctx->pc = 0x1BA174u;
label_1ba174:
    // 0x1ba174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ba174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ba178: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x1ba178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1ba17c: 0x0  nop
    ctx->pc = 0x1ba17cu;
    // NOP
label_1ba180:
    // 0x1ba180: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ba180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ba184: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba188: 0x0  nop
    ctx->pc = 0x1ba188u;
    // NOP
    // 0x1ba18c: 0x0  nop
    ctx->pc = 0x1ba18cu;
    // NOP
    // 0x1ba190: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BA190u;
    {
        const bool branch_taken_0x1ba190 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1BA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA190u;
        // 0x1ba194: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba190) {
            ctx->pc = 0x1BA180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba180;
        }
    }
    ctx->pc = 0x1BA198u;
    // 0x1ba198: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x1ba198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
    // 0x1ba19c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1a4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA1A4u;
    SET_GPR_U32(ctx, 31, 0x1BA1ACu);
    ctx->pc = 0x1BA1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1A4u;
    // 0x1ba1a8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA1A4u, 0x1BA1ACu)) {
        return;
    }
    ctx->pc = 0x1BA1ACu;
label_1ba1ac:
    // 0x1ba1ac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ba1b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1b4: 0x24a5d4b8  addiu       $a1, $a1, -0x2B48
    ctx->pc = 0x1ba1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956216));
    // 0x1ba1b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1bc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA1BCu;
    SET_GPR_U32(ctx, 31, 0x1BA1C4u);
    ctx->pc = 0x1BA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1BCu;
    // 0x1ba1c0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA1BCu, 0x1BA1C4u)) {
        return;
    }
    ctx->pc = 0x1BA1C4u;
label_1ba1c4:
    // 0x1ba1c4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba1c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA1C8u;
    {
        const bool branch_taken_0x1ba1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1C8u;
        // 0x1ba1cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1c8) {
            ctx->pc = 0x1BA1DCu;
            goto label_1ba1dc;
        }
    }
    ctx->pc = 0x1BA1D0u;
    // 0x1ba1d0: 0xc065c40  jal         func_197100
    ctx->pc = 0x1BA1D0u;
    SET_GPR_U32(ctx, 31, 0x1BA1D8u);
    ctx->pc = 0x1BA1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1D0u;
    // 0x1ba1d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1BA1D0u, 0x1BA1D8u)) {
        return;
    }
    ctx->pc = 0x1BA1D8u;
label_1ba1d8:
    // 0x1ba1d8: 0xae020260  sw          $v0, 0x260($s0)
    ctx->pc = 0x1ba1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
label_1ba1dc:
    // 0x1ba1dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA1E4u;
    SET_GPR_U32(ctx, 31, 0x1BA1ECu);
    ctx->pc = 0x1BA1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1E4u;
    // 0x1ba1e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA1E4u, 0x1BA1ECu)) {
        return;
    }
    ctx->pc = 0x1BA1ECu;
label_1ba1ec:
    // 0x1ba1ec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ba1f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1f4: 0x24a5d4c8  addiu       $a1, $a1, -0x2B38
    ctx->pc = 0x1ba1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956232));
    // 0x1ba1f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1fc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA1FCu;
    SET_GPR_U32(ctx, 31, 0x1BA204u);
    ctx->pc = 0x1BA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1FCu;
    // 0x1ba200: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA1FCu, 0x1BA204u)) {
        return;
    }
    ctx->pc = 0x1BA204u;
label_1ba204:
    // 0x1ba204: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba204u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba208: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA208u;
    {
        const bool branch_taken_0x1ba208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA208u;
        // 0x1ba20c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba208) {
            ctx->pc = 0x1BA21Cu;
            goto label_1ba21c;
        }
    }
    ctx->pc = 0x1BA210u;
    // 0x1ba210: 0xc065c40  jal         func_197100
    ctx->pc = 0x1BA210u;
    SET_GPR_U32(ctx, 31, 0x1BA218u);
    ctx->pc = 0x1BA214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA210u;
    // 0x1ba214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1BA210u, 0x1BA218u)) {
        return;
    }
    ctx->pc = 0x1BA218u;
label_1ba218:
    // 0x1ba218: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x1ba218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_1ba21c:
    // 0x1ba21c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba224: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA224u;
    SET_GPR_U32(ctx, 31, 0x1BA22Cu);
    ctx->pc = 0x1BA228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA224u;
    // 0x1ba228: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA224u, 0x1BA22Cu)) {
        return;
    }
    ctx->pc = 0x1BA22Cu;
label_1ba22c:
    // 0x1ba22c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ba230: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba234: 0x24a5d4d8  addiu       $a1, $a1, -0x2B28
    ctx->pc = 0x1ba234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956248));
    // 0x1ba238: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba23c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA23Cu;
    SET_GPR_U32(ctx, 31, 0x1BA244u);
    ctx->pc = 0x1BA240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA23Cu;
    // 0x1ba240: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA23Cu, 0x1BA244u)) {
        return;
    }
    ctx->pc = 0x1BA244u;
label_1ba244:
    // 0x1ba244: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba244u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba248: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA248u;
    {
        const bool branch_taken_0x1ba248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA248u;
        // 0x1ba24c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba248) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1BA250u;
    // 0x1ba250: 0xc065c40  jal         func_197100
    ctx->pc = 0x1BA250u;
    SET_GPR_U32(ctx, 31, 0x1BA258u);
    ctx->pc = 0x1BA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA250u;
    // 0x1ba254: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1BA250u, 0x1BA258u)) {
        return;
    }
    ctx->pc = 0x1BA258u;
label_1ba258:
    // 0x1ba258: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x1ba258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_1ba25c:
    // 0x1ba25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba264: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA264u;
    SET_GPR_U32(ctx, 31, 0x1BA26Cu);
    ctx->pc = 0x1BA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA264u;
    // 0x1ba268: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA264u, 0x1BA26Cu)) {
        return;
    }
    ctx->pc = 0x1BA26Cu;
label_1ba26c:
    // 0x1ba26c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ba270: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba274: 0x24a5d4e8  addiu       $a1, $a1, -0x2B18
    ctx->pc = 0x1ba274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956264));
    // 0x1ba278: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba27c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA27Cu;
    SET_GPR_U32(ctx, 31, 0x1BA284u);
    ctx->pc = 0x1BA280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA27Cu;
    // 0x1ba280: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA27Cu, 0x1BA284u)) {
        return;
    }
    ctx->pc = 0x1BA284u;
label_1ba284:
    // 0x1ba284: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba284u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba288: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA288u;
    {
        const bool branch_taken_0x1ba288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA288u;
        // 0x1ba28c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba288) {
            ctx->pc = 0x1BA29Cu;
            goto label_1ba29c;
        }
    }
    ctx->pc = 0x1BA290u;
    // 0x1ba290: 0xc065c40  jal         func_197100
    ctx->pc = 0x1BA290u;
    SET_GPR_U32(ctx, 31, 0x1BA298u);
    ctx->pc = 0x1BA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA290u;
    // 0x1ba294: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1BA290u, 0x1BA298u)) {
        return;
    }
    ctx->pc = 0x1BA298u;
label_1ba298:
    // 0x1ba298: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1ba298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1ba29c:
    // 0x1ba29c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2a4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA2A4u;
    SET_GPR_U32(ctx, 31, 0x1BA2ACu);
    ctx->pc = 0x1BA2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2A4u;
    // 0x1ba2a8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA2A4u, 0x1BA2ACu)) {
        return;
    }
    ctx->pc = 0x1BA2ACu;
label_1ba2ac:
    // 0x1ba2ac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ba2b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2b4: 0x24a5d4f8  addiu       $a1, $a1, -0x2B08
    ctx->pc = 0x1ba2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956280));
    // 0x1ba2b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2bc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA2BCu;
    SET_GPR_U32(ctx, 31, 0x1BA2C4u);
    ctx->pc = 0x1BA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2BCu;
    // 0x1ba2c0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA2BCu, 0x1BA2C4u)) {
        return;
    }
    ctx->pc = 0x1BA2C4u;
label_1ba2c4:
    // 0x1ba2c4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba2c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba2c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA2C8u;
    {
        const bool branch_taken_0x1ba2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2C8u;
        // 0x1ba2cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2c8) {
            ctx->pc = 0x1BA2DCu;
            goto label_1ba2dc;
        }
    }
    ctx->pc = 0x1BA2D0u;
    // 0x1ba2d0: 0xc065c40  jal         func_197100
    ctx->pc = 0x1BA2D0u;
    SET_GPR_U32(ctx, 31, 0x1BA2D8u);
    ctx->pc = 0x1BA2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2D0u;
    // 0x1ba2d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1BA2D0u, 0x1BA2D8u)) {
        return;
    }
    ctx->pc = 0x1BA2D8u;
label_1ba2d8:
    // 0x1ba2d8: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1ba2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_1ba2dc:
    // 0x1ba2dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA2E4u;
    SET_GPR_U32(ctx, 31, 0x1BA2ECu);
    ctx->pc = 0x1BA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2E4u;
    // 0x1ba2e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA2E4u, 0x1BA2ECu)) {
        return;
    }
    ctx->pc = 0x1BA2ECu;
label_1ba2ec:
    // 0x1ba2ec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ba2f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2f4: 0x24a5d508  addiu       $a1, $a1, -0x2AF8
    ctx->pc = 0x1ba2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956296));
    // 0x1ba2f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2fc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA2FCu;
    SET_GPR_U32(ctx, 31, 0x1BA304u);
    ctx->pc = 0x1BA300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2FCu;
    // 0x1ba300: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA2FCu, 0x1BA304u)) {
        return;
    }
    ctx->pc = 0x1BA304u;
label_1ba304:
    // 0x1ba304: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba304u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba308: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA308u;
    {
        const bool branch_taken_0x1ba308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA308u;
        // 0x1ba30c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba308) {
            ctx->pc = 0x1BA31Cu;
            goto label_1ba31c;
        }
    }
    ctx->pc = 0x1BA310u;
    // 0x1ba310: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1BA310u;
    SET_GPR_U32(ctx, 31, 0x1BA318u);
    ctx->pc = 0x1BA314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA310u;
    // 0x1ba314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1BA310u, 0x1BA318u)) {
        return;
    }
    ctx->pc = 0x1BA318u;
label_1ba318:
    // 0x1ba318: 0xae020338  sw          $v0, 0x338($s0)
    ctx->pc = 0x1ba318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
label_1ba31c:
    // 0x1ba31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba324: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA324u;
    SET_GPR_U32(ctx, 31, 0x1BA32Cu);
    ctx->pc = 0x1BA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA324u;
    // 0x1ba328: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA324u, 0x1BA32Cu)) {
        return;
    }
    ctx->pc = 0x1BA32Cu;
label_1ba32c:
    // 0x1ba32c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ba330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba334: 0x24a5d520  addiu       $a1, $a1, -0x2AE0
    ctx->pc = 0x1ba334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
    // 0x1ba338: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba33c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA33Cu;
    SET_GPR_U32(ctx, 31, 0x1BA344u);
    ctx->pc = 0x1BA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA33Cu;
    // 0x1ba340: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA33Cu, 0x1BA344u)) {
        return;
    }
    ctx->pc = 0x1BA344u;
label_1ba344:
    // 0x1ba344: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba344u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba348: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA348u;
    {
        const bool branch_taken_0x1ba348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA348u;
        // 0x1ba34c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba348) {
            ctx->pc = 0x1BA35Cu;
            goto label_1ba35c;
        }
    }
    ctx->pc = 0x1BA350u;
    // 0x1ba350: 0xc065c40  jal         func_197100
    ctx->pc = 0x1BA350u;
    SET_GPR_U32(ctx, 31, 0x1BA358u);
    ctx->pc = 0x1BA354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA350u;
    // 0x1ba354: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1BA350u, 0x1BA358u)) {
        return;
    }
    ctx->pc = 0x1BA358u;
label_1ba358:
    // 0x1ba358: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1ba358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_1ba35c:
    // 0x1ba35c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba364: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA364u;
    SET_GPR_U32(ctx, 31, 0x1BA36Cu);
    ctx->pc = 0x1BA368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA364u;
    // 0x1ba368: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA364u, 0x1BA36Cu)) {
        return;
    }
    ctx->pc = 0x1BA36Cu;
label_1ba36c:
    // 0x1ba36c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ba370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba374: 0x24a5d530  addiu       $a1, $a1, -0x2AD0
    ctx->pc = 0x1ba374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956336));
    // 0x1ba378: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba37c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA37Cu;
    SET_GPR_U32(ctx, 31, 0x1BA384u);
    ctx->pc = 0x1BA380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA37Cu;
    // 0x1ba380: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA37Cu, 0x1BA384u)) {
        return;
    }
    ctx->pc = 0x1BA384u;
label_1ba384:
    // 0x1ba384: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba384u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba388: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA388u;
    {
        const bool branch_taken_0x1ba388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA388u;
        // 0x1ba38c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba388) {
            ctx->pc = 0x1BA39Cu;
            goto label_1ba39c;
        }
    }
    ctx->pc = 0x1BA390u;
    // 0x1ba390: 0xc065c40  jal         func_197100
    ctx->pc = 0x1BA390u;
    SET_GPR_U32(ctx, 31, 0x1BA398u);
    ctx->pc = 0x1BA394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA390u;
    // 0x1ba394: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1BA390u, 0x1BA398u)) {
        return;
    }
    ctx->pc = 0x1BA398u;
label_1ba398:
    // 0x1ba398: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x1ba398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
label_1ba39c:
    // 0x1ba39c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ba3a0: 0x261102b0  addiu       $s1, $s0, 0x2B0
    ctx->pc = 0x1ba3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x1ba3a4: 0x24539410  addiu       $s3, $v0, -0x6BF0
    ctx->pc = 0x1ba3a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939664));
    // 0x1ba3a8: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1ba3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba3ac: 0x0  nop
    ctx->pc = 0x1ba3acu;
    // NOP
label_1ba3b0:
    // 0x1ba3b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3b8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BA3B8u;
    SET_GPR_U32(ctx, 31, 0x1BA3C0u);
    ctx->pc = 0x1BA3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3B8u;
    // 0x1ba3bc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA3B8u, 0x1BA3C0u)) {
        return;
    }
    ctx->pc = 0x1BA3C0u;
label_1ba3c0:
    // 0x1ba3c0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ba3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba3c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ba3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ba3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3cc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BA3CCu;
    SET_GPR_U32(ctx, 31, 0x1BA3D4u);
    ctx->pc = 0x1BA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3CCu;
    // 0x1ba3d0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BA3CCu, 0x1BA3D4u)) {
        return;
    }
    ctx->pc = 0x1BA3D4u;
label_1ba3d4:
    // 0x1ba3d4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba3d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA3D8u;
    {
        const bool branch_taken_0x1ba3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3D8u;
        // 0x1ba3dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3d8) {
            ctx->pc = 0x1BA3ECu;
            goto label_1ba3ec;
        }
    }
    ctx->pc = 0x1BA3E0u;
    // 0x1ba3e0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1BA3E0u;
    SET_GPR_U32(ctx, 31, 0x1BA3E8u);
    ctx->pc = 0x1BA3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3E0u;
    // 0x1ba3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1BA3E0u, 0x1BA3E8u)) {
        return;
    }
    ctx->pc = 0x1BA3E8u;
label_1ba3e8:
    // 0x1ba3e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ba3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ba3ec:
    // 0x1ba3ec: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1ba3f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ba3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ba3f4: 0x641ffee  bgez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BA3F4u;
    {
        const bool branch_taken_0x1ba3f4 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1BA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3F4u;
        // 0x1ba3f8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3f4) {
            ctx->pc = 0x1BA3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1BA3FCu;
    // 0x1ba3fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ba3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba400: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1BA400u;
    SET_GPR_U32(ctx, 31, 0x1BA408u);
    ctx->pc = 0x1BA404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA400u;
    // 0x1ba404: 0x240400fc  addiu       $a0, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1BA400u, 0x1BA408u)) {
        return;
    }
    ctx->pc = 0x1BA408u;
label_1ba408:
    // 0x1ba408: 0xc06f9fc  jal         func_1BE7F0
    ctx->pc = 0x1BA408u;
    SET_GPR_U32(ctx, 31, 0x1BA410u);
    ctx->pc = 0x1BA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA408u;
    // 0x1ba40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE7F0u, 0x1BA408u, 0x1BA410u)) {
        return;
    }
    ctx->pc = 0x1BA410u;
label_1ba410:
    // 0x1ba410: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba414: 0xae02035c  sw          $v0, 0x35C($s0)
    ctx->pc = 0x1ba414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x1ba418: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1BA418u;
    SET_GPR_U32(ctx, 31, 0x1BA420u);
    ctx->pc = 0x1BA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA418u;
    // 0x1ba41c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1BA418u, 0x1BA420u)) {
        return;
    }
    ctx->pc = 0x1BA420u;
label_1ba420:
    // 0x1ba420: 0xc06f938  jal         func_1BE4E0
    ctx->pc = 0x1BA420u;
    SET_GPR_U32(ctx, 31, 0x1BA428u);
    ctx->pc = 0x1BA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA420u;
    // 0x1ba424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE4E0u, 0x1BA420u, 0x1BA428u)) {
        return;
    }
    ctx->pc = 0x1BA428u;
label_1ba428:
    // 0x1ba428: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ba428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba42c: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x1ba42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x1ba430: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1BA430u;
    SET_GPR_U32(ctx, 31, 0x1BA438u);
    ctx->pc = 0x1BA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA430u;
    // 0x1ba434: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1BA430u, 0x1BA438u)) {
        return;
    }
    ctx->pc = 0x1BA438u;
label_1ba438:
    // 0x1ba438: 0xc06fa7c  jal         func_1BE9F0
    ctx->pc = 0x1BA438u;
    SET_GPR_U32(ctx, 31, 0x1BA440u);
    ctx->pc = 0x1BA43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA438u;
    // 0x1ba43c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE9F0u, 0x1BA438u, 0x1BA440u)) {
        return;
    }
    ctx->pc = 0x1BA440u;
label_1ba440:
    // 0x1ba440: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x1ba440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x1ba444: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba448: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1ba448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ba44c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1ba44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ba450: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1ba450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ba454: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1ba454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ba458: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1ba458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ba45c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ba45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ba460: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA460u;
        // 0x1ba464: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA468u;
}
