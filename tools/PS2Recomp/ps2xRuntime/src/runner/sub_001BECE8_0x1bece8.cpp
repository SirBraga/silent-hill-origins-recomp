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

// Function: sub_001BECE8
// Address: 0x1bece8 - 0x1befe8
void sub_001BECE8_0x1bece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BECE8_0x1bece8");
#endif

    switch (ctx->pc) {
        case 0x1bed1cu: goto label_1bed1c;
        case 0x1bedf8u: goto label_1bedf8;
        case 0x1bee08u: goto label_1bee08;
        case 0x1bee18u: goto label_1bee18;
        case 0x1bee28u: goto label_1bee28;
        case 0x1bee38u: goto label_1bee38;
        case 0x1bee48u: goto label_1bee48;
        case 0x1bee58u: goto label_1bee58;
        case 0x1bee7cu: goto label_1bee7c;
        case 0x1bee94u: goto label_1bee94;
        case 0x1beea8u: goto label_1beea8;
        case 0x1beec0u: goto label_1beec0;
        case 0x1beed8u: goto label_1beed8;
        case 0x1beef0u: goto label_1beef0;
        case 0x1bef04u: goto label_1bef04;
        case 0x1bef18u: goto label_1bef18;
        case 0x1bef2cu: goto label_1bef2c;
        case 0x1bef40u: goto label_1bef40;
        case 0x1bef54u: goto label_1bef54;
        case 0x1bef60u: goto label_1bef60;
        case 0x1bef70u: goto label_1bef70;
        case 0x1bef84u: goto label_1bef84;
        case 0x1bef98u: goto label_1bef98;
        case 0x1befb8u: goto label_1befb8;
        default: break;
    }

    ctx->pc = 0x1bece8u;

    // 0x1bece8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1bece8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1becec: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1bececu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x1becf0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1becf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x1becf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1becf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1becf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becfc: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1becfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x1bed00: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1bed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x1bed04: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x1bed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x1bed08: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1bed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x1bed0c: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x1bed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x1bed10: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1bed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1bed14: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1BED14u;
    SET_GPR_U32(ctx, 31, 0x1BED1Cu);
    ctx->pc = 0x1BED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED14u;
    // 0x1bed18: 0x26110324  addiu       $s1, $s0, 0x324 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1BED14u, 0x1BED1Cu)) {
        return;
    }
    ctx->pc = 0x1BED1Cu;
label_1bed1c:
    // 0x1bed1c: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x1bed1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
    // 0x1bed20: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x1bed20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
    // 0x1bed24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bed24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bed28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1bed28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1bed2c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1bed2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1bed30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bed30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bed34: 0x2463dc10  addiu       $v1, $v1, -0x23F0
    ctx->pc = 0x1bed34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958096));
    // 0x1bed38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed3c: 0xe60102e0  swc1        $f1, 0x2E0($s0)
    ctx->pc = 0x1bed3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x1bed40: 0xe60002b0  swc1        $f0, 0x2B0($s0)
    ctx->pc = 0x1bed40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x1bed44: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1bed44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1bed48: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1bed48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1bed4c: 0x24e7dd20  addiu       $a3, $a3, -0x22E0
    ctx->pc = 0x1bed4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958368));
    // 0x1bed50: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x1bed50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
    // 0x1bed54: 0x26030314  addiu       $v1, $s0, 0x314
    ctx->pc = 0x1bed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    // 0x1bed58: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1bed58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
    // 0x1bed5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed60: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1bed60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1bed64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bed64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed68: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1bed68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1bed6c: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x1bed6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1bed70: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1bed70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1bed74: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1bed74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1bed78: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1bed78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1bed7c: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1bed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1bed80: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1bed80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1bed84: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1bed84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1bed88: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1bed88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1bed8c: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1bed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1bed90: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1bed90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1bed94: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1bed94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1bed98: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1bed98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1bed9c: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1bed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1beda0: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1beda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1beda4: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1beda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1beda8: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1beda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x1bedac: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x1bedacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x1bedb0: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x1bedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x1bedb4: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x1bedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x1bedb8: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x1bedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x1bedbc: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x1bedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x1bedc0: 0xae0002f4  sw          $zero, 0x2F4($s0)
    ctx->pc = 0x1bedc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
    // 0x1bedc4: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x1bedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x1bedc8: 0xae0002fc  sw          $zero, 0x2FC($s0)
    ctx->pc = 0x1bedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
    // 0x1bedcc: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x1bedccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x1bedd0: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x1bedd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
    // 0x1bedd4: 0xae000308  sw          $zero, 0x308($s0)
    ctx->pc = 0x1bedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 0));
    // 0x1bedd8: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x1bedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
    // 0x1beddc: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x1beddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x1bede0: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1bede0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1bede4: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x1bede4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
    // 0x1bede8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1bede8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1bedec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bedecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bedf0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEDF0u;
    SET_GPR_U32(ctx, 31, 0x1BEDF8u);
    ctx->pc = 0x1BEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDF0u;
    // 0x1bedf4: 0xae000454  sw          $zero, 0x454($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEDF0u, 0x1BEDF8u)) {
        return;
    }
    ctx->pc = 0x1BEDF8u;
label_1bedf8:
    // 0x1bedf8: 0x260403bc  addiu       $a0, $s0, 0x3BC
    ctx->pc = 0x1bedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 956));
    // 0x1bedfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bedfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee00: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEE00u;
    SET_GPR_U32(ctx, 31, 0x1BEE08u);
    ctx->pc = 0x1BEE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE00u;
    // 0x1bee04: 0x24060098  addiu       $a2, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEE00u, 0x1BEE08u)) {
        return;
    }
    ctx->pc = 0x1BEE08u;
label_1bee08:
    // 0x1bee08: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1bee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x1bee0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bee0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee10: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEE10u;
    SET_GPR_U32(ctx, 31, 0x1BEE18u);
    ctx->pc = 0x1BEE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE10u;
    // 0x1bee14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEE10u, 0x1BEE18u)) {
        return;
    }
    ctx->pc = 0x1BEE18u;
label_1bee18:
    // 0x1bee18: 0x260402a4  addiu       $a0, $s0, 0x2A4
    ctx->pc = 0x1bee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x1bee1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bee1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee20: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEE20u;
    SET_GPR_U32(ctx, 31, 0x1BEE28u);
    ctx->pc = 0x1BEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE20u;
    // 0x1bee24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEE20u, 0x1BEE28u)) {
        return;
    }
    ctx->pc = 0x1BEE28u;
label_1bee28:
    // 0x1bee28: 0x260402a8  addiu       $a0, $s0, 0x2A8
    ctx->pc = 0x1bee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x1bee2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bee2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee30: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEE30u;
    SET_GPR_U32(ctx, 31, 0x1BEE38u);
    ctx->pc = 0x1BEE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE30u;
    // 0x1bee34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEE30u, 0x1BEE38u)) {
        return;
    }
    ctx->pc = 0x1BEE38u;
label_1bee38:
    // 0x1bee38: 0x26040458  addiu       $a0, $s0, 0x458
    ctx->pc = 0x1bee38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1112));
    // 0x1bee3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bee3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee40: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEE40u;
    SET_GPR_U32(ctx, 31, 0x1BEE48u);
    ctx->pc = 0x1BEE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE40u;
    // 0x1bee44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEE40u, 0x1BEE48u)) {
        return;
    }
    ctx->pc = 0x1BEE48u;
label_1bee48:
    // 0x1bee48: 0x260402b4  addiu       $a0, $s0, 0x2B4
    ctx->pc = 0x1bee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    // 0x1bee4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee50: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEE50u;
    SET_GPR_U32(ctx, 31, 0x1BEE58u);
    ctx->pc = 0x1BEE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE50u;
    // 0x1bee54: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEE50u, 0x1BEE58u)) {
        return;
    }
    ctx->pc = 0x1BEE58u;
label_1bee58:
    // 0x1bee58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bee58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bee60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee64: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1bee64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bee68: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x1bee68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x1bee6c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x1bee6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x1bee70: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1bee70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x1bee74: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEE74u;
    SET_GPR_U32(ctx, 31, 0x1BEE7Cu);
    ctx->pc = 0x1BEE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE74u;
    // 0x1bee78: 0xe60002f0  swc1        $f0, 0x2F0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEE74u, 0x1BEE7Cu)) {
        return;
    }
    ctx->pc = 0x1BEE7Cu;
label_1bee7c:
    // 0x1bee7c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1bee80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bee80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee84: 0x24a5db78  addiu       $a1, $a1, -0x2488
    ctx->pc = 0x1bee84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
    // 0x1bee88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bee88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee8c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BEE8Cu;
    SET_GPR_U32(ctx, 31, 0x1BEE94u);
    ctx->pc = 0x1BEE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE8Cu;
    // 0x1bee90: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BEE8Cu, 0x1BEE94u)) {
        return;
    }
    ctx->pc = 0x1BEE94u;
label_1bee94:
    // 0x1bee94: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1bee94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bee98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEE98u;
    {
        const bool branch_taken_0x1bee98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE98u;
        // 0x1bee9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee98) {
            ctx->pc = 0x1BEEACu;
            goto label_1beeac;
        }
    }
    ctx->pc = 0x1BEEA0u;
    // 0x1beea0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1BEEA0u;
    SET_GPR_U32(ctx, 31, 0x1BEEA8u);
    ctx->pc = 0x1BEEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEA0u;
    // 0x1beea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1BEEA0u, 0x1BEEA8u)) {
        return;
    }
    ctx->pc = 0x1BEEA8u;
label_1beea8:
    // 0x1beea8: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x1beea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
label_1beeac:
    // 0x1beeac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1beeacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1beeb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1beeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeb4: 0x24a5db88  addiu       $a1, $a1, -0x2478
    ctx->pc = 0x1beeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957960));
    // 0x1beeb8: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1BEEB8u;
    SET_GPR_U32(ctx, 31, 0x1BEEC0u);
    ctx->pc = 0x1BEEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEB8u;
    // 0x1beebc: 0x2606028c  addiu       $a2, $s0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1BEEB8u, 0x1BEEC0u)) {
        return;
    }
    ctx->pc = 0x1BEEC0u;
label_1beec0:
    // 0x1beec0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1beec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beec4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1beec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1beec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1beec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beecc: 0x24a5db98  addiu       $a1, $a1, -0x2468
    ctx->pc = 0x1beeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957976));
    // 0x1beed0: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1BEED0u;
    SET_GPR_U32(ctx, 31, 0x1BEED8u);
    ctx->pc = 0x1BEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEED0u;
    // 0x1beed4: 0x26060290  addiu       $a2, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1BEED0u, 0x1BEED8u)) {
        return;
    }
    ctx->pc = 0x1BEED8u;
label_1beed8:
    // 0x1beed8: 0x24160025  addiu       $s6, $zero, 0x25
    ctx->pc = 0x1beed8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1beedc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1beedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1beee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1beee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beee4: 0x24a5dba8  addiu       $a1, $a1, -0x2458
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957992));
    // 0x1beee8: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1BEEE8u;
    SET_GPR_U32(ctx, 31, 0x1BEEF0u);
    ctx->pc = 0x1BEEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEE8u;
    // 0x1beeec: 0x26060294  addiu       $a2, $s0, 0x294 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1BEEE8u, 0x1BEEF0u)) {
        return;
    }
    ctx->pc = 0x1BEEF0u;
label_1beef0:
    // 0x1beef0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1beef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1beef4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1beef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beef8: 0x24a5dbb8  addiu       $a1, $a1, -0x2448
    ctx->pc = 0x1beef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958008));
    // 0x1beefc: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1BEEFCu;
    SET_GPR_U32(ctx, 31, 0x1BEF04u);
    ctx->pc = 0x1BEF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEFCu;
    // 0x1bef00: 0x26060298  addiu       $a2, $s0, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1BEEFCu, 0x1BEF04u)) {
        return;
    }
    ctx->pc = 0x1BEF04u;
label_1bef04:
    // 0x1bef04: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bef04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1bef08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bef08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef0c: 0x24a5dbc8  addiu       $a1, $a1, -0x2438
    ctx->pc = 0x1bef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958024));
    // 0x1bef10: 0xc065fc0  jal         func_197F00
    ctx->pc = 0x1BEF10u;
    SET_GPR_U32(ctx, 31, 0x1BEF18u);
    ctx->pc = 0x1BEF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF10u;
    // 0x1bef14: 0x26060280  addiu       $a2, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197F00u, 0x1BEF10u, 0x1BEF18u)) {
        return;
    }
    ctx->pc = 0x1BEF18u;
label_1bef18:
    // 0x1bef18: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bef18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1bef1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef20: 0x24a5dbd0  addiu       $a1, $a1, -0x2430
    ctx->pc = 0x1bef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958032));
    // 0x1bef24: 0xc065fc0  jal         func_197F00
    ctx->pc = 0x1BEF24u;
    SET_GPR_U32(ctx, 31, 0x1BEF2Cu);
    ctx->pc = 0x1BEF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF24u;
    // 0x1bef28: 0x26060284  addiu       $a2, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197F00u, 0x1BEF24u, 0x1BEF2Cu)) {
        return;
    }
    ctx->pc = 0x1BEF2Cu;
label_1bef2c:
    // 0x1bef2c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1bef30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bef30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef34: 0x24a5dbd8  addiu       $a1, $a1, -0x2428
    ctx->pc = 0x1bef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958040));
    // 0x1bef38: 0xc065fc0  jal         func_197F00
    ctx->pc = 0x1BEF38u;
    SET_GPR_U32(ctx, 31, 0x1BEF40u);
    ctx->pc = 0x1BEF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF38u;
    // 0x1bef3c: 0x26060288  addiu       $a2, $s0, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197F00u, 0x1BEF38u, 0x1BEF40u)) {
        return;
    }
    ctx->pc = 0x1BEF40u;
label_1bef40:
    // 0x1bef40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bef44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bef44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bef48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef4c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF54u);
    ctx->pc = 0x1BEF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF4Cu;
    // 0x1bef50: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEF4Cu, 0x1BEF54u)) {
        return;
    }
    ctx->pc = 0x1BEF54u;
label_1bef54:
    // 0x1bef54: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1bef54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef58: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bef58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bef5c: 0x24719440  addiu       $s1, $v1, -0x6BC0
    ctx->pc = 0x1bef5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
label_1bef60:
    // 0x1bef60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bef64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef68: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BEF68u;
    SET_GPR_U32(ctx, 31, 0x1BEF70u);
    ctx->pc = 0x1BEF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF68u;
    // 0x1bef6c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BEF68u, 0x1BEF70u)) {
        return;
    }
    ctx->pc = 0x1BEF70u;
label_1bef70:
    // 0x1bef70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bef70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bef74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bef74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1bef78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef7c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1BEF7Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF84u);
    ctx->pc = 0x1BEF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF7Cu;
    // 0x1bef80: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1BEF7Cu, 0x1BEF84u)) {
        return;
    }
    ctx->pc = 0x1BEF84u;
label_1bef84:
    // 0x1bef84: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x1bef84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bef88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEF88u;
    {
        const bool branch_taken_0x1bef88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF88u;
        // 0x1bef8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef88) {
            ctx->pc = 0x1BEF9Cu;
            goto label_1bef9c;
        }
    }
    ctx->pc = 0x1BEF90u;
    // 0x1bef90: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1BEF90u;
    SET_GPR_U32(ctx, 31, 0x1BEF98u);
    ctx->pc = 0x1BEF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF90u;
    // 0x1bef94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1BEF90u, 0x1BEF98u)) {
        return;
    }
    ctx->pc = 0x1BEF98u;
label_1bef98:
    // 0x1bef98: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1bef98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1bef9c:
    // 0x1bef9c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1bef9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1befa0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1befa4: 0x6c1ffee  bgez        $s6, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BEFA4u;
    {
        const bool branch_taken_0x1befa4 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x1BEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFA4u;
        // 0x1befa8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befa4) {
            ctx->pc = 0x1BEF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bef60;
        }
    }
    ctx->pc = 0x1BEFACu;
    // 0x1befac: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1befacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1befb0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1BEFB0u;
    SET_GPR_U32(ctx, 31, 0x1BEFB8u);
    ctx->pc = 0x1BEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFB0u;
    // 0x1befb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1BEFB0u, 0x1BEFB8u)) {
        return;
    }
    ctx->pc = 0x1BEFB8u;
label_1befb8:
    // 0x1befb8: 0xae020454  sw          $v0, 0x454($s0)
    ctx->pc = 0x1befb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 2));
    // 0x1befbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1befbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befc0: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1befc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1befc4: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x1befc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1befc8: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x1befc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1befcc: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x1befccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1befd0: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x1befd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1befd4: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x1befd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1befd8: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x1befd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1befdc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1befdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1befe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFE0u;
        // 0x1befe4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEFE8u;
}
