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

// Function: sub_001C8720
// Address: 0x1c8720 - 0x1c8af8
void sub_001C8720_0x1c8720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8720_0x1c8720");
#endif

    switch (ctx->pc) {
        case 0x1c8748u: goto label_1c8748;
        case 0x1c882cu: goto label_1c882c;
        case 0x1c8838u: goto label_1c8838;
        case 0x1c8840u: goto label_1c8840;
        case 0x1c8854u: goto label_1c8854;
        case 0x1c886cu: goto label_1c886c;
        case 0x1c8880u: goto label_1c8880;
        case 0x1c8894u: goto label_1c8894;
        case 0x1c88acu: goto label_1c88ac;
        case 0x1c88c0u: goto label_1c88c0;
        case 0x1c88d4u: goto label_1c88d4;
        case 0x1c88ecu: goto label_1c88ec;
        case 0x1c8900u: goto label_1c8900;
        case 0x1c8914u: goto label_1c8914;
        case 0x1c892cu: goto label_1c892c;
        case 0x1c8940u: goto label_1c8940;
        case 0x1c8954u: goto label_1c8954;
        case 0x1c896cu: goto label_1c896c;
        case 0x1c8980u: goto label_1c8980;
        case 0x1c8994u: goto label_1c8994;
        case 0x1c89acu: goto label_1c89ac;
        case 0x1c89c0u: goto label_1c89c0;
        case 0x1c89d4u: goto label_1c89d4;
        case 0x1c89ecu: goto label_1c89ec;
        case 0x1c8a00u: goto label_1c8a00;
        case 0x1c8a14u: goto label_1c8a14;
        case 0x1c8a2cu: goto label_1c8a2c;
        case 0x1c8a40u: goto label_1c8a40;
        case 0x1c8a58u: goto label_1c8a58;
        case 0x1c8a68u: goto label_1c8a68;
        case 0x1c8a7cu: goto label_1c8a7c;
        case 0x1c8a90u: goto label_1c8a90;
        case 0x1c8ac0u: goto label_1c8ac0;
        default: break;
    }

    ctx->pc = 0x1c8720u;

    // 0x1c8720: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c8720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c8724: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1c8724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1c8728: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1c8728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1c872c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c872cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8730: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1c8730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1c8734: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1c8734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1c8738: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1c8738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1c873c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c8740: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C8740u;
    SET_GPR_U32(ctx, 31, 0x1C8748u);
    ctx->pc = 0x1C8744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8740u;
    // 0x1c8744: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C8740u, 0x1C8748u)) {
        return;
    }
    ctx->pc = 0x1C8748u;
label_1c8748:
    // 0x1c8748: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1c8748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1c874c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c874cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8750: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c8750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c8754: 0x2463f838  addiu       $v1, $v1, -0x7C8
    ctx->pc = 0x1c8754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965304));
    // 0x1c8758: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c875c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c8760: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1c8760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1c8764: 0xae070278  sw          $a3, 0x278($s0)
    ctx->pc = 0x1c8764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 7));
    // 0x1c8768: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1c8768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c876c: 0xe600038c  swc1        $f0, 0x38C($s0)
    ctx->pc = 0x1c876cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x1c8770: 0x260402c4  addiu       $a0, $s0, 0x2C4
    ctx->pc = 0x1c8770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x1c8774: 0xae0203c8  sw          $v0, 0x3C8($s0)
    ctx->pc = 0x1c8774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 2));
    // 0x1c8778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c877c: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1c877cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1c8780: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c8780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c8784: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c8784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1c8788: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1c8788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1c878c: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c878cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1c8790: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1c8790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1c8794: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1c8794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1c8798: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1c8798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1c879c: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1c879cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1c87a0: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1c87a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1c87a4: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1c87a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1c87a8: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1c87a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1c87ac: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c87acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1c87b0: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1c87b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1c87b4: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1c87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1c87b8: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1c87b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1c87bc: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1c87bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1c87c0: 0xae000390  sw          $zero, 0x390($s0)
    ctx->pc = 0x1c87c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 0));
    // 0x1c87c4: 0xae000394  sw          $zero, 0x394($s0)
    ctx->pc = 0x1c87c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 0));
    // 0x1c87c8: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x1c87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x1c87cc: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x1c87ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x1c87d0: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x1c87d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
    // 0x1c87d4: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x1c87d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
    // 0x1c87d8: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x1c87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x1c87dc: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x1c87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x1c87e0: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x1c87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
    // 0x1c87e4: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1c87e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x1c87e8: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x1c87e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x1c87ec: 0xae0003e0  sw          $zero, 0x3E0($s0)
    ctx->pc = 0x1c87ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 0));
    // 0x1c87f0: 0xae0003e4  sw          $zero, 0x3E4($s0)
    ctx->pc = 0x1c87f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 0));
    // 0x1c87f4: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c87f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c87f8: 0x342138e4  ori         $at, $at, 0x38E4
    ctx->pc = 0x1c87f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14564);
    // 0x1c87fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c87fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8800: 0xae0003e8  sw          $zero, 0x3E8($s0)
    ctx->pc = 0x1c8800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 0));
    // 0x1c8804: 0xae0003ec  sw          $zero, 0x3EC($s0)
    ctx->pc = 0x1c8804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 0));
    // 0x1c8808: 0xae0003f0  sw          $zero, 0x3F0($s0)
    ctx->pc = 0x1c8808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 0));
    // 0x1c880c: 0xae0003f4  sw          $zero, 0x3F4($s0)
    ctx->pc = 0x1c880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 0));
    // 0x1c8810: 0xae0003f8  sw          $zero, 0x3F8($s0)
    ctx->pc = 0x1c8810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 0));
    // 0x1c8814: 0xae0003fc  sw          $zero, 0x3FC($s0)
    ctx->pc = 0x1c8814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
    // 0x1c8818: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x1c8818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x1c881c: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x1c881cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x1c8820: 0xae070418  sw          $a3, 0x418($s0)
    ctx->pc = 0x1c8820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 7));
    // 0x1c8824: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C8824u;
    SET_GPR_U32(ctx, 31, 0x1C882Cu);
    ctx->pc = 0x1C8828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8824u;
    // 0x1c8828: 0xe6000424  swc1        $f0, 0x424($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C8824u, 0x1C882Cu)) {
        return;
    }
    ctx->pc = 0x1C882Cu;
label_1c882c:
    // 0x1c882c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8830: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1C8830u;
    SET_GPR_U32(ctx, 31, 0x1C8838u);
    ctx->pc = 0x1C8834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8830u;
    // 0x1c8834: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1C8830u, 0x1C8838u)) {
        return;
    }
    ctx->pc = 0x1C8838u;
label_1c8838:
    // 0x1c8838: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1C8838u;
    SET_GPR_U32(ctx, 31, 0x1C8840u);
    ctx->pc = 0x1C883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8838u;
    // 0x1c883c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1C8838u, 0x1C8840u)) {
        return;
    }
    ctx->pc = 0x1C8840u;
label_1c8840:
    // 0x1c8840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8848: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c8848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c884c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C884Cu;
    SET_GPR_U32(ctx, 31, 0x1C8854u);
    ctx->pc = 0x1C8850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C884Cu;
    // 0x1c8850: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C884Cu, 0x1C8854u)) {
        return;
    }
    ctx->pc = 0x1C8854u;
label_1c8854:
    // 0x1c8854: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c8854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c8858: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c885c: 0x24a5f7a0  addiu       $a1, $a1, -0x860
    ctx->pc = 0x1c885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965152));
    // 0x1c8860: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c8860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8864: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C8864u;
    SET_GPR_U32(ctx, 31, 0x1C886Cu);
    ctx->pc = 0x1C8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8864u;
    // 0x1c8868: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C8864u, 0x1C886Cu)) {
        return;
    }
    ctx->pc = 0x1C886Cu;
label_1c886c:
    // 0x1c886c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c886cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8870: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8870u;
    {
        const bool branch_taken_0x1c8870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8870u;
        // 0x1c8874: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8870) {
            ctx->pc = 0x1C8884u;
            goto label_1c8884;
        }
    }
    ctx->pc = 0x1C8878u;
    // 0x1c8878: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C8878u;
    SET_GPR_U32(ctx, 31, 0x1C8880u);
    ctx->pc = 0x1C887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8878u;
    // 0x1c887c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C8878u, 0x1C8880u)) {
        return;
    }
    ctx->pc = 0x1C8880u;
label_1c8880:
    // 0x1c8880: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x1c8880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_1c8884:
    // 0x1c8884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c888c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C888Cu;
    SET_GPR_U32(ctx, 31, 0x1C8894u);
    ctx->pc = 0x1C8890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C888Cu;
    // 0x1c8890: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C888Cu, 0x1C8894u)) {
        return;
    }
    ctx->pc = 0x1C8894u;
label_1c8894:
    // 0x1c8894: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c8894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c8898: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c889c: 0x24a5f7b0  addiu       $a1, $a1, -0x850
    ctx->pc = 0x1c889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965168));
    // 0x1c88a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c88a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88a4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C88A4u;
    SET_GPR_U32(ctx, 31, 0x1C88ACu);
    ctx->pc = 0x1C88A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88A4u;
    // 0x1c88a8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C88A4u, 0x1C88ACu)) {
        return;
    }
    ctx->pc = 0x1C88ACu;
label_1c88ac:
    // 0x1c88ac: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c88acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c88b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C88B0u;
    {
        const bool branch_taken_0x1c88b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88B0u;
        // 0x1c88b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88b0) {
            ctx->pc = 0x1C88C4u;
            goto label_1c88c4;
        }
    }
    ctx->pc = 0x1C88B8u;
    // 0x1c88b8: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C88B8u;
    SET_GPR_U32(ctx, 31, 0x1C88C0u);
    ctx->pc = 0x1C88BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88B8u;
    // 0x1c88bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C88B8u, 0x1C88C0u)) {
        return;
    }
    ctx->pc = 0x1C88C0u;
label_1c88c0:
    // 0x1c88c0: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x1c88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
label_1c88c4:
    // 0x1c88c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c88c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c88c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88cc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C88CCu;
    SET_GPR_U32(ctx, 31, 0x1C88D4u);
    ctx->pc = 0x1C88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88CCu;
    // 0x1c88d0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C88CCu, 0x1C88D4u)) {
        return;
    }
    ctx->pc = 0x1C88D4u;
label_1c88d4:
    // 0x1c88d4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c88d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c88d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88dc: 0x24a5f7c0  addiu       $a1, $a1, -0x840
    ctx->pc = 0x1c88dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965184));
    // 0x1c88e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c88e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88e4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C88E4u;
    SET_GPR_U32(ctx, 31, 0x1C88ECu);
    ctx->pc = 0x1C88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88E4u;
    // 0x1c88e8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C88E4u, 0x1C88ECu)) {
        return;
    }
    ctx->pc = 0x1C88ECu;
label_1c88ec:
    // 0x1c88ec: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c88ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c88f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C88F0u;
    {
        const bool branch_taken_0x1c88f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88F0u;
        // 0x1c88f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88f0) {
            ctx->pc = 0x1C8904u;
            goto label_1c8904;
        }
    }
    ctx->pc = 0x1C88F8u;
    // 0x1c88f8: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C88F8u;
    SET_GPR_U32(ctx, 31, 0x1C8900u);
    ctx->pc = 0x1C88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88F8u;
    // 0x1c88fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C88F8u, 0x1C8900u)) {
        return;
    }
    ctx->pc = 0x1C8900u;
label_1c8900:
    // 0x1c8900: 0xae020288  sw          $v0, 0x288($s0)
    ctx->pc = 0x1c8900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 2));
label_1c8904:
    // 0x1c8904: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c890c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C890Cu;
    SET_GPR_U32(ctx, 31, 0x1C8914u);
    ctx->pc = 0x1C8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C890Cu;
    // 0x1c8910: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C890Cu, 0x1C8914u)) {
        return;
    }
    ctx->pc = 0x1C8914u;
label_1c8914:
    // 0x1c8914: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c8914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c8918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c891c: 0x24a5f7d0  addiu       $a1, $a1, -0x830
    ctx->pc = 0x1c891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965200));
    // 0x1c8920: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c8920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8924: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C8924u;
    SET_GPR_U32(ctx, 31, 0x1C892Cu);
    ctx->pc = 0x1C8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8924u;
    // 0x1c8928: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C8924u, 0x1C892Cu)) {
        return;
    }
    ctx->pc = 0x1C892Cu;
label_1c892c:
    // 0x1c892c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8930: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8930u;
    {
        const bool branch_taken_0x1c8930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8930u;
        // 0x1c8934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8930) {
            ctx->pc = 0x1C8944u;
            goto label_1c8944;
        }
    }
    ctx->pc = 0x1C8938u;
    // 0x1c8938: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C8938u;
    SET_GPR_U32(ctx, 31, 0x1C8940u);
    ctx->pc = 0x1C893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8938u;
    // 0x1c893c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C8938u, 0x1C8940u)) {
        return;
    }
    ctx->pc = 0x1C8940u;
label_1c8940:
    // 0x1c8940: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x1c8940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
label_1c8944:
    // 0x1c8944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c894c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C894Cu;
    SET_GPR_U32(ctx, 31, 0x1C8954u);
    ctx->pc = 0x1C8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C894Cu;
    // 0x1c8950: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C894Cu, 0x1C8954u)) {
        return;
    }
    ctx->pc = 0x1C8954u;
label_1c8954:
    // 0x1c8954: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c8954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c8958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c895c: 0x24a5f7e0  addiu       $a1, $a1, -0x820
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965216));
    // 0x1c8960: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c8960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8964: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C8964u;
    SET_GPR_U32(ctx, 31, 0x1C896Cu);
    ctx->pc = 0x1C8968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8964u;
    // 0x1c8968: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C8964u, 0x1C896Cu)) {
        return;
    }
    ctx->pc = 0x1C896Cu;
label_1c896c:
    // 0x1c896c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c896cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8970: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8970u;
    {
        const bool branch_taken_0x1c8970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8970u;
        // 0x1c8974: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8970) {
            ctx->pc = 0x1C8984u;
            goto label_1c8984;
        }
    }
    ctx->pc = 0x1C8978u;
    // 0x1c8978: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C8978u;
    SET_GPR_U32(ctx, 31, 0x1C8980u);
    ctx->pc = 0x1C897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8978u;
    // 0x1c897c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C8978u, 0x1C8980u)) {
        return;
    }
    ctx->pc = 0x1C8980u;
label_1c8980:
    // 0x1c8980: 0xae0203e0  sw          $v0, 0x3E0($s0)
    ctx->pc = 0x1c8980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 2));
label_1c8984:
    // 0x1c8984: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c898c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C898Cu;
    SET_GPR_U32(ctx, 31, 0x1C8994u);
    ctx->pc = 0x1C8990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C898Cu;
    // 0x1c8990: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C898Cu, 0x1C8994u)) {
        return;
    }
    ctx->pc = 0x1C8994u;
label_1c8994:
    // 0x1c8994: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c8994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c8998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c899c: 0x24a5f7e8  addiu       $a1, $a1, -0x818
    ctx->pc = 0x1c899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965224));
    // 0x1c89a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c89a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89a4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C89A4u;
    SET_GPR_U32(ctx, 31, 0x1C89ACu);
    ctx->pc = 0x1C89A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89A4u;
    // 0x1c89a8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C89A4u, 0x1C89ACu)) {
        return;
    }
    ctx->pc = 0x1C89ACu;
label_1c89ac:
    // 0x1c89ac: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c89acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c89b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C89B0u;
    {
        const bool branch_taken_0x1c89b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89B0u;
        // 0x1c89b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89b0) {
            ctx->pc = 0x1C89C4u;
            goto label_1c89c4;
        }
    }
    ctx->pc = 0x1C89B8u;
    // 0x1c89b8: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C89B8u;
    SET_GPR_U32(ctx, 31, 0x1C89C0u);
    ctx->pc = 0x1C89BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89B8u;
    // 0x1c89bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C89B8u, 0x1C89C0u)) {
        return;
    }
    ctx->pc = 0x1C89C0u;
label_1c89c0:
    // 0x1c89c0: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c89c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
label_1c89c4:
    // 0x1c89c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c89c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89cc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C89CCu;
    SET_GPR_U32(ctx, 31, 0x1C89D4u);
    ctx->pc = 0x1C89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89CCu;
    // 0x1c89d0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C89CCu, 0x1C89D4u)) {
        return;
    }
    ctx->pc = 0x1C89D4u;
label_1c89d4:
    // 0x1c89d4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c89d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c89d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89dc: 0x24a5f7f8  addiu       $a1, $a1, -0x808
    ctx->pc = 0x1c89dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965240));
    // 0x1c89e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c89e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89e4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C89E4u;
    SET_GPR_U32(ctx, 31, 0x1C89ECu);
    ctx->pc = 0x1C89E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89E4u;
    // 0x1c89e8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C89E4u, 0x1C89ECu)) {
        return;
    }
    ctx->pc = 0x1C89ECu;
label_1c89ec:
    // 0x1c89ec: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c89ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c89f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C89F0u;
    {
        const bool branch_taken_0x1c89f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89F0u;
        // 0x1c89f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89f0) {
            ctx->pc = 0x1C8A04u;
            goto label_1c8a04;
        }
    }
    ctx->pc = 0x1C89F8u;
    // 0x1c89f8: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C89F8u;
    SET_GPR_U32(ctx, 31, 0x1C8A00u);
    ctx->pc = 0x1C89FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89F8u;
    // 0x1c89fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C89F8u, 0x1C8A00u)) {
        return;
    }
    ctx->pc = 0x1C8A00u;
label_1c8a00:
    // 0x1c8a00: 0xae0203e8  sw          $v0, 0x3E8($s0)
    ctx->pc = 0x1c8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
label_1c8a04:
    // 0x1c8a04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a0c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C8A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C8A14u);
    ctx->pc = 0x1C8A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A0Cu;
    // 0x1c8a10: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C8A0Cu, 0x1C8A14u)) {
        return;
    }
    ctx->pc = 0x1C8A14u;
label_1c8a14:
    // 0x1c8a14: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c8a18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a1c: 0x24a5f808  addiu       $a1, $a1, -0x7F8
    ctx->pc = 0x1c8a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965256));
    // 0x1c8a20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c8a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a24: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C8A24u;
    SET_GPR_U32(ctx, 31, 0x1C8A2Cu);
    ctx->pc = 0x1C8A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A24u;
    // 0x1c8a28: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C8A24u, 0x1C8A2Cu)) {
        return;
    }
    ctx->pc = 0x1C8A2Cu;
label_1c8a2c:
    // 0x1c8a2c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c8a2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8a30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8A30u;
    {
        const bool branch_taken_0x1c8a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A30u;
        // 0x1c8a34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a30) {
            ctx->pc = 0x1C8A44u;
            goto label_1c8a44;
        }
    }
    ctx->pc = 0x1C8A38u;
    // 0x1c8a38: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C8A38u;
    SET_GPR_U32(ctx, 31, 0x1C8A40u);
    ctx->pc = 0x1C8A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A38u;
    // 0x1c8a3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C8A38u, 0x1C8A40u)) {
        return;
    }
    ctx->pc = 0x1C8A40u;
label_1c8a40:
    // 0x1c8a40: 0xae0203ec  sw          $v0, 0x3EC($s0)
    ctx->pc = 0x1c8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 2));
label_1c8a44:
    // 0x1c8a44: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c8a48: 0x26110400  addiu       $s1, $s0, 0x400
    ctx->pc = 0x1c8a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x1c8a4c: 0x24539938  addiu       $s3, $v0, -0x66C8
    ctx->pc = 0x1c8a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940984));
    // 0x1c8a50: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1c8a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8a54: 0x0  nop
    ctx->pc = 0x1c8a54u;
    // NOP
label_1c8a58:
    // 0x1c8a58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a60: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C8A60u;
    SET_GPR_U32(ctx, 31, 0x1C8A68u);
    ctx->pc = 0x1C8A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A60u;
    // 0x1c8a64: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C8A60u, 0x1C8A68u)) {
        return;
    }
    ctx->pc = 0x1C8A68u;
label_1c8a68:
    // 0x1c8a68: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1c8a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c8a6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c8a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a74: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C8A74u;
    SET_GPR_U32(ctx, 31, 0x1C8A7Cu);
    ctx->pc = 0x1C8A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A74u;
    // 0x1c8a78: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C8A74u, 0x1C8A7Cu)) {
        return;
    }
    ctx->pc = 0x1C8A7Cu;
label_1c8a7c:
    // 0x1c8a7c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c8a7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8a80: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8A80u;
    {
        const bool branch_taken_0x1c8a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A80u;
        // 0x1c8a84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a80) {
            ctx->pc = 0x1C8A94u;
            goto label_1c8a94;
        }
    }
    ctx->pc = 0x1C8A88u;
    // 0x1c8a88: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C8A88u;
    SET_GPR_U32(ctx, 31, 0x1C8A90u);
    ctx->pc = 0x1C8A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A88u;
    // 0x1c8a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C8A88u, 0x1C8A90u)) {
        return;
    }
    ctx->pc = 0x1C8A90u;
label_1c8a90:
    // 0x1c8a90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c8a94:
    // 0x1c8a94: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c8a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1c8a98: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c8a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1c8a9c: 0x641ffee  bgez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C8A9Cu;
    {
        const bool branch_taken_0x1c8a9c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1C8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A9Cu;
        // 0x1c8aa0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a9c) {
            ctx->pc = 0x1C8A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8a58;
        }
    }
    ctx->pc = 0x1C8AA4u;
    // 0x1c8aa4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c8aa8: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1c8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c8aac: 0x2442fa00  addiu       $v0, $v0, -0x600
    ctx->pc = 0x1c8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
    // 0x1c8ab0: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x1c8ab0u;
    { uint32_t bits = FAST_READ32(0x69FA04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8ab4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x1c8ab4u;
    { uint32_t bits = FAST_READ32(0x69FA0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c8ab8: 0xc06db8a  jal         func_1B6E28
    ctx->pc = 0x1C8AB8u;
    SET_GPR_U32(ctx, 31, 0x1C8AC0u);
    ctx->pc = 0x1C8ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AB8u;
    // 0x1c8abc: 0x460c6b00  add.s       $f12, $f13, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E28u, 0x1C8AB8u, 0x1C8AC0u)) {
        return;
    }
    ctx->pc = 0x1C8AC0u;
label_1c8ac0:
    // 0x1c8ac0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c8ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ac4: 0xa20003dc  sb          $zero, 0x3DC($s0)
    ctx->pc = 0x1c8ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 988), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8ac8: 0xa20003df  sb          $zero, 0x3DF($s0)
    ctx->pc = 0x1c8ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 991), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8acc: 0xa20003de  sb          $zero, 0x3DE($s0)
    ctx->pc = 0x1c8accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 990), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8ad0: 0xa20003dd  sb          $zero, 0x3DD($s0)
    ctx->pc = 0x1c8ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 989), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8ad4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1c8ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c8ad8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1c8ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c8adc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1c8adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8ae0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1c8ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8ae4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1c8ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8ae8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c8ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AECu;
        // 0x1c8af0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8AF4u;
    // 0x1c8af4: 0x0  nop
    ctx->pc = 0x1c8af4u;
    // NOP
    ctx->pc = 0x1c8af8u;
}
