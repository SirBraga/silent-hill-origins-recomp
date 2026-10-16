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

// Function: sub_00176660
// Address: 0x176660 - 0x176b38
void sub_00176660_0x176660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176660_0x176660");
#endif

    switch (ctx->pc) {
        case 0x17669cu: goto label_17669c;
        case 0x1766a4u: goto label_1766a4;
        case 0x176744u: goto label_176744;
        case 0x176758u: goto label_176758;
        case 0x17676cu: goto label_17676c;
        case 0x17677cu: goto label_17677c;
        case 0x176788u: goto label_176788;
        case 0x1767a4u: goto label_1767a4;
        case 0x1767b8u: goto label_1767b8;
        case 0x1767e8u: goto label_1767e8;
        case 0x176820u: goto label_176820;
        case 0x17682cu: goto label_17682c;
        case 0x176834u: goto label_176834;
        case 0x17683cu: goto label_17683c;
        case 0x176860u: goto label_176860;
        case 0x176868u: goto label_176868;
        case 0x176888u: goto label_176888;
        case 0x1768a0u: goto label_1768a0;
        case 0x1768bcu: goto label_1768bc;
        case 0x1768d0u: goto label_1768d0;
        case 0x1768fcu: goto label_1768fc;
        case 0x176910u: goto label_176910;
        case 0x176918u: goto label_176918;
        case 0x17692cu: goto label_17692c;
        case 0x176950u: goto label_176950;
        case 0x176960u: goto label_176960;
        case 0x1769b0u: goto label_1769b0;
        case 0x1769c4u: goto label_1769c4;
        case 0x1769d8u: goto label_1769d8;
        case 0x1769ecu: goto label_1769ec;
        case 0x176a00u: goto label_176a00;
        case 0x176a14u: goto label_176a14;
        case 0x176a28u: goto label_176a28;
        case 0x176a40u: goto label_176a40;
        case 0x176a54u: goto label_176a54;
        case 0x176a64u: goto label_176a64;
        case 0x176a74u: goto label_176a74;
        case 0x176a84u: goto label_176a84;
        case 0x176ac4u: goto label_176ac4;
        case 0x176ad0u: goto label_176ad0;
        case 0x176ae4u: goto label_176ae4;
        case 0x176af8u: goto label_176af8;
        case 0x176b04u: goto label_176b04;
        default: break;
    }

    ctx->pc = 0x176660u;

    // 0x176660: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x176660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x176664: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x176664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x176668: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x176668u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17666c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x17666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x176670: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x176670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x176674: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x176674u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176678: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x176678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x17667c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x17667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x176680: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x176680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x176684: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x176684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x176688: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x176688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x17668c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x176690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176694: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x176694u;
    SET_GPR_U32(ctx, 31, 0x17669Cu);
    ctx->pc = 0x176698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176694u;
    // 0x176698: 0x3c170069  lui         $s7, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x176694u, 0x17669Cu)) {
        return;
    }
    ctx->pc = 0x17669Cu;
label_17669c:
    // 0x17669c: 0xc043c50  jal         func_10F140
    ctx->pc = 0x17669Cu;
    SET_GPR_U32(ctx, 31, 0x1766A4u);
    ctx->pc = 0x1766A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17669Cu;
    // 0x1766a0: 0x26c40044  addiu       $a0, $s6, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F140u, 0x17669Cu, 0x1766A4u)) {
        return;
    }
    ctx->pc = 0x1766A4u;
label_1766a4:
    // 0x1766a4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1766a8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1766ac: 0x244269c8  addiu       $v0, $v0, 0x69C8
    ctx->pc = 0x1766acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27080));
    // 0x1766b0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1766b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1766b4: 0xaec2003c  sw          $v0, 0x3C($s6)
    ctx->pc = 0x1766b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
    // 0x1766b8: 0x246369b0  addiu       $v1, $v1, 0x69B0
    ctx->pc = 0x1766b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27056));
    // 0x1766bc: 0x248469e8  addiu       $a0, $a0, 0x69E8
    ctx->pc = 0x1766bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27112));
    // 0x1766c0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1766c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1766c4: 0xaec30048  sw          $v1, 0x48($s6)
    ctx->pc = 0x1766c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 72), GPR_U32(ctx, 3));
    // 0x1766c8: 0x24c66a30  addiu       $a2, $a2, 0x6A30
    ctx->pc = 0x1766c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27184));
    // 0x1766cc: 0xaec40034  sw          $a0, 0x34($s6)
    ctx->pc = 0x1766ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 4));
    // 0x1766d0: 0x26c200a4  addiu       $v0, $s6, 0xA4
    ctx->pc = 0x1766d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 164));
    // 0x1766d4: 0xaec0004c  sw          $zero, 0x4C($s6)
    ctx->pc = 0x1766d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 76), GPR_U32(ctx, 0));
    // 0x1766d8: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1766d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1766dc: 0xaec00050  sw          $zero, 0x50($s6)
    ctx->pc = 0x1766dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 80), GPR_U32(ctx, 0));
    // 0x1766e0: 0x26106470  addiu       $s0, $s0, 0x6470
    ctx->pc = 0x1766e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25712));
    // 0x1766e4: 0xaec00054  sw          $zero, 0x54($s6)
    ctx->pc = 0x1766e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 0));
    // 0x1766e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1766e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766ec: 0xaec0007c  sw          $zero, 0x7C($s6)
    ctx->pc = 0x1766ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 124), GPR_U32(ctx, 0));
    // 0x1766f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1766f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766f4: 0xaec00098  sw          $zero, 0x98($s6)
    ctx->pc = 0x1766f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 0));
    // 0x1766f8: 0xaec0009c  sw          $zero, 0x9C($s6)
    ctx->pc = 0x1766f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 156), GPR_U32(ctx, 0));
    // 0x1766fc: 0xaec000a0  sw          $zero, 0xA0($s6)
    ctx->pc = 0x1766fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 160), GPR_U32(ctx, 0));
    // 0x176700: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x176700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x176704: 0xaec000a4  sw          $zero, 0xA4($s6)
    ctx->pc = 0x176704u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 164), GPR_U32(ctx, 0));
    // 0x176708: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x176708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17670c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17670cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176710: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x176710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x176714: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x176714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x176718: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x176718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17671c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x17671cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x176720: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x176720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x176724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17672c: 0xaec000bc  sw          $zero, 0xBC($s6)
    ctx->pc = 0x17672cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 188), GPR_U32(ctx, 0));
    // 0x176730: 0xaec00110  sw          $zero, 0x110($s6)
    ctx->pc = 0x176730u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 272), GPR_U32(ctx, 0));
    // 0x176734: 0xe6c200fc  swc1        $f2, 0xFC($s6)
    ctx->pc = 0x176734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 252), bits); }
    // 0x176738: 0xe6c10100  swc1        $f1, 0x100($s6)
    ctx->pc = 0x176738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 256), bits); }
    // 0x17673c: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x17673Cu;
    SET_GPR_U32(ctx, 31, 0x176744u);
    ctx->pc = 0x176740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17673Cu;
    // 0x176740: 0xe6c00104  swc1        $f0, 0x104($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x17673Cu, 0x176744u)) {
        return;
    }
    ctx->pc = 0x176744u;
label_176744:
    // 0x176744: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x176744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x176748: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x176748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17674c: 0x24a56490  addiu       $a1, $a1, 0x6490
    ctx->pc = 0x17674cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25744));
    // 0x176750: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x176750u;
    SET_GPR_U32(ctx, 31, 0x176758u);
    ctx->pc = 0x176754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176750u;
    // 0x176754: 0xaec20058  sw          $v0, 0x58($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x176750u, 0x176758u)) {
        return;
    }
    ctx->pc = 0x176758u;
label_176758:
    // 0x176758: 0xaec20060  sw          $v0, 0x60($s6)
    ctx->pc = 0x176758u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 2));
    // 0x17675c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17675cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176760: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x176760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176764: 0xc07f90a  jal         func_1FE428
    ctx->pc = 0x176764u;
    SET_GPR_U32(ctx, 31, 0x17676Cu);
    ctx->pc = 0x176768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176764u;
    // 0x176768: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE428u, 0x176764u, 0x17676Cu)) {
        return;
    }
    ctx->pc = 0x17676Cu;
label_17676c:
    // 0x17676c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17676Cu;
    {
        const bool branch_taken_0x17676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17676Cu;
        // 0x176770: 0xaec2005c  sw          $v0, 0x5C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17676c) {
            ctx->pc = 0x1767DCu;
            goto label_1767dc;
        }
    }
    ctx->pc = 0x176774u;
    // 0x176774: 0xc09945a  jal         func_265168
    ctx->pc = 0x176774u;
    SET_GPR_U32(ctx, 31, 0x17677Cu);
    ctx->pc = 0x176778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176774u;
    // 0x176778: 0x24041101  addiu       $a0, $zero, 0x1101 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x176774u, 0x17677Cu)) {
        return;
    }
    ctx->pc = 0x17677Cu;
label_17677c:
    // 0x17677c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176780: 0xc09945a  jal         func_265168
    ctx->pc = 0x176780u;
    SET_GPR_U32(ctx, 31, 0x176788u);
    ctx->pc = 0x176784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176780u;
    // 0x176784: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x176780u, 0x176788u)) {
        return;
    }
    ctx->pc = 0x176788u;
label_176788:
    // 0x176788: 0x8ec3005c  lw          $v1, 0x5C($s6)
    ctx->pc = 0x176788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x17678c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17678cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x176790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176794: 0x24a588a0  addiu       $a1, $a1, -0x7760
    ctx->pc = 0x176794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936736));
    // 0x176798: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x176798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x17679c: 0xc0972f2  jal         func_25CBC8
    ctx->pc = 0x17679Cu;
    SET_GPR_U32(ctx, 31, 0x1767A4u);
    ctx->pc = 0x1767A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17679Cu;
    // 0x1767a0: 0x8ec4005c  lw          $a0, 0x5C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CBC8u, 0x17679Cu, 0x1767A4u)) {
        return;
    }
    ctx->pc = 0x1767A4u;
label_1767a4:
    // 0x1767a4: 0x8ec2005c  lw          $v0, 0x5C($s6)
    ctx->pc = 0x1767a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x1767a8: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x1767a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1767ac: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1767ACu;
    {
        const bool branch_taken_0x1767ac = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x1767B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767ACu;
        // 0x1767b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767ac) {
            ctx->pc = 0x1767DCu;
            goto label_1767dc;
        }
    }
    ctx->pc = 0x1767B4u;
    // 0x1767b4: 0x0  nop
    ctx->pc = 0x1767b4u;
    // NOP
label_1767b8:
    // 0x1767b8: 0x8ec2005c  lw          $v0, 0x5C($s6)
    ctx->pc = 0x1767b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x1767bc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1767bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1767c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1767c4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1767c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1767c8: 0xc7282a  slt         $a1, $a2, $a3
    ctx->pc = 0x1767c8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1767cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1767ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1767d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1767d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1767d4: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1767D4u;
    {
        const bool branch_taken_0x1767d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1767D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767D4u;
        // 0x1767d8: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767d4) {
            ctx->pc = 0x1767B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1767b8;
        }
    }
    ctx->pc = 0x1767DCu;
label_1767dc:
    // 0x1767dc: 0x26e565d0  addiu       $a1, $s7, 0x65D0
    ctx->pc = 0x1767dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 26064));
    // 0x1767e0: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x1767E0u;
    SET_GPR_U32(ctx, 31, 0x1767E8u);
    ctx->pc = 0x1767E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767E0u;
    // 0x1767e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x1767E0u, 0x1767E8u)) {
        return;
    }
    ctx->pc = 0x1767E8u;
label_1767e8:
    // 0x1767e8: 0x26d50114  addiu       $s5, $s6, 0x114
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 276));
    // 0x1767ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1767ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767f0: 0x26c30044  addiu       $v1, $s6, 0x44
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 68));
    // 0x1767f4: 0x26c200f8  addiu       $v0, $s6, 0xF8
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 248));
    // 0x1767f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1767f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1767fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1767fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x176800: 0x26c300e8  addiu       $v1, $s6, 0xE8
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 232));
    // 0x176804: 0x26c20108  addiu       $v0, $s6, 0x108
    ctx->pc = 0x176804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 264));
    // 0x176808: 0x26d70038  addiu       $s7, $s6, 0x38
    ctx->pc = 0x176808u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x17680c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x17680cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x176810: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x176810u;
    {
        const bool branch_taken_0x176810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x176814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176810u;
        // 0x176814: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176810) {
            ctx->pc = 0x1768A0u;
            goto label_1768a0;
        }
    }
    ctx->pc = 0x176818u;
    // 0x176818: 0xc06a7c4  jal         func_1A9F10
    ctx->pc = 0x176818u;
    SET_GPR_U32(ctx, 31, 0x176820u);
    ctx->pc = 0x17681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176818u;
    // 0x17681c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x176818u, 0x176820u)) {
        return;
    }
    ctx->pc = 0x176820u;
label_176820:
    // 0x176820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176824: 0xc06a816  jal         func_1AA058
    ctx->pc = 0x176824u;
    SET_GPR_U32(ctx, 31, 0x17682Cu);
    ctx->pc = 0x176828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176824u;
    // 0x176828: 0x26330008  addiu       $s3, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA058u, 0x176824u, 0x17682Cu)) {
        return;
    }
    ctx->pc = 0x17682Cu;
label_17682c:
    // 0x17682c: 0xc06a928  jal         func_1AA4A0
    ctx->pc = 0x17682Cu;
    SET_GPR_U32(ctx, 31, 0x176834u);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x17682Cu, 0x176834u)) {
        return;
    }
    ctx->pc = 0x176834u;
label_176834:
    // 0x176834: 0xc06a994  jal         func_1AA650
    ctx->pc = 0x176834u;
    SET_GPR_U32(ctx, 31, 0x17683Cu);
    ctx->pc = 0x176838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176834u;
    // 0x176838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA650u, 0x176834u, 0x17683Cu)) {
        return;
    }
    ctx->pc = 0x17683Cu;
label_17683c:
    // 0x17683c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x17683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x176840: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176844: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x176844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x176848: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x176848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17684c: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x17684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x176850: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x176850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6F81B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F81B8u, _value); } while (0);
    // 0x176854: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176854u;
    {
        const bool branch_taken_0x176854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176854u;
        // 0x176858: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176854) {
            ctx->pc = 0x176878u;
            goto label_176878;
        }
    }
    ctx->pc = 0x17685Cu;
    // 0x17685c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x17685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_176860:
    // 0x176860: 0xc069fee  jal         func_1A7FB8
    ctx->pc = 0x176860u;
    SET_GPR_U32(ctx, 31, 0x176868u);
    ctx->pc = 0x176864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176860u;
    // 0x176864: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7FB8u, 0x176860u, 0x176868u)) {
        return;
    }
    ctx->pc = 0x176868u;
label_176868:
    // 0x176868: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x176868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17686c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x17686cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x176870: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x176870u;
    {
        const bool branch_taken_0x176870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176870u;
        // 0x176874: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176870) {
            ctx->pc = 0x176860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176860;
        }
    }
    ctx->pc = 0x176878u;
label_176878:
    // 0x176878: 0x269081b0  addiu       $s0, $s4, -0x7E50
    ctx->pc = 0x176878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934960));
    // 0x17687c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17687cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176880: 0xc06a218  jal         func_1A8860
    ctx->pc = 0x176880u;
    SET_GPR_U32(ctx, 31, 0x176888u);
    ctx->pc = 0x176884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176880u;
    // 0x176884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8860u, 0x176880u, 0x176888u)) {
        return;
    }
    ctx->pc = 0x176888u;
label_176888:
    // 0x176888: 0x96280022  lhu         $t0, 0x22($s1)
    ctx->pc = 0x176888u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17688c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176890: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x176890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x176894: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x176894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x176898: 0xc06a230  jal         func_1A88C0
    ctx->pc = 0x176898u;
    SET_GPR_U32(ctx, 31, 0x1768A0u);
    ctx->pc = 0x17689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176898u;
    // 0x17689c: 0x96270020  lhu         $a3, 0x20($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A88C0u, 0x176898u, 0x1768A0u)) {
        return;
    }
    ctx->pc = 0x1768A0u;
label_1768a0:
    // 0x1768a0: 0x8ec40058  lw          $a0, 0x58($s6)
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1768a4: 0x8ec50060  lw          $a1, 0x60($s6)
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1768a8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x1768a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1768ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1768ACu;
    {
        const bool branch_taken_0x1768ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1768B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768ACu;
        // 0x1768b0: 0xaec20068  sw          $v0, 0x68($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768ac) {
            ctx->pc = 0x1768BCu;
            goto label_1768bc;
        }
    }
    ctx->pc = 0x1768B4u;
    // 0x1768b4: 0xc09795e  jal         func_25E578
    ctx->pc = 0x1768B4u;
    SET_GPR_U32(ctx, 31, 0x1768BCu);
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x1768B4u, 0x1768BCu)) {
        return;
    }
    ctx->pc = 0x1768BCu;
label_1768bc:
    // 0x1768bc: 0x3c01cb18  lui         $at, 0xCB18
    ctx->pc = 0x1768bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51992 << 16));
    // 0x1768c0: 0x3421967f  ori         $at, $at, 0x967F
    ctx->pc = 0x1768c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38527);
    // 0x1768c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1768c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1768c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1768cc: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_1768d0:
    // 0x1768d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1768d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1768d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1768d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1768d8: 0x0  nop
    ctx->pc = 0x1768d8u;
    // NOP
    // 0x1768dc: 0x0  nop
    ctx->pc = 0x1768dcu;
    // NOP
    // 0x1768e0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1768E0u;
    {
        const bool branch_taken_0x1768e0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1768E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768E0u;
        // 0x1768e4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768e0) {
            ctx->pc = 0x1768D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1768d0;
        }
    }
    ctx->pc = 0x1768E8u;
    // 0x1768e8: 0x8ec40058  lw          $a0, 0x58($s6)
    ctx->pc = 0x1768e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1768ec: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1768ECu;
    {
        const bool branch_taken_0x1768ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1768F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768ECu;
        // 0x1768f0: 0xaec0012c  sw          $zero, 0x12C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768ec) {
            ctx->pc = 0x17692Cu;
            goto label_17692c;
        }
    }
    ctx->pc = 0x1768F4u;
    // 0x1768f4: 0xc0778be  jal         func_1DE2F8
    ctx->pc = 0x1768F4u;
    SET_GPR_U32(ctx, 31, 0x1768FCu);
    ctx->pc = 0x1DE2F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE2F8u, 0x1768F4u, 0x1768FCu)) {
        return;
    }
    ctx->pc = 0x1768FCu;
label_1768fc:
    // 0x1768fc: 0x8ec4005c  lw          $a0, 0x5C($s6)
    ctx->pc = 0x1768fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x176900: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176900u;
    {
        const bool branch_taken_0x176900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x176904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176900u;
        // 0x176904: 0xaec20110  sw          $v0, 0x110($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176900) {
            ctx->pc = 0x176910u;
            goto label_176910;
        }
    }
    ctx->pc = 0x176908u;
    // 0x176908: 0xc094b48  jal         func_252D20
    ctx->pc = 0x176908u;
    SET_GPR_U32(ctx, 31, 0x176910u);
    ctx->pc = 0x252D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252D20u, 0x176908u, 0x176910u)) {
        return;
    }
    ctx->pc = 0x176910u;
label_176910:
    // 0x176910: 0xc094b48  jal         func_252D20
    ctx->pc = 0x176910u;
    SET_GPR_U32(ctx, 31, 0x176918u);
    ctx->pc = 0x176914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176910u;
    // 0x176914: 0x8ec40058  lw          $a0, 0x58($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252D20u, 0x176910u, 0x176918u)) {
        return;
    }
    ctx->pc = 0x176918u;
label_176918:
    // 0x176918: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x176918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17691c: 0x8ec40058  lw          $a0, 0x58($s6)
    ctx->pc = 0x17691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x176920: 0x24a58438  addiu       $a1, $a1, -0x7BC8
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935608));
    // 0x176924: 0xc0972f2  jal         func_25CBC8
    ctx->pc = 0x176924u;
    SET_GPR_U32(ctx, 31, 0x17692Cu);
    ctx->pc = 0x176928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176924u;
    // 0x176928: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CBC8u, 0x176924u, 0x17692Cu)) {
        return;
    }
    ctx->pc = 0x17692Cu;
label_17692c:
    // 0x17692c: 0x8ec20110  lw          $v0, 0x110($s6)
    ctx->pc = 0x17692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 272)));
    // 0x176930: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176930u;
    {
        const bool branch_taken_0x176930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176930u;
        // 0x176934: 0x3c030069  lui         $v1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176930) {
            ctx->pc = 0x176954u;
            goto label_176954;
        }
    }
    ctx->pc = 0x176938u;
    // 0x176938: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x17693c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176940: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x176940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x176944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176948: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x176948u;
    SET_GPR_U32(ctx, 31, 0x176950u);
    ctx->pc = 0x17694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176948u;
    // 0x17694c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x176948u, 0x176950u)) {
        return;
    }
    ctx->pc = 0x176950u;
label_176950:
    // 0x176950: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_176954:
    // 0x176954: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x176954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176958: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x176958u;
    SET_GPR_U32(ctx, 31, 0x176960u);
    ctx->pc = 0x17695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176958u;
    // 0x17695c: 0x24656598  addiu       $a1, $v1, 0x6598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 26008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x176958u, 0x176960u)) {
        return;
    }
    ctx->pc = 0x176960u;
label_176960:
    // 0x176960: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x176964: 0xaec20064  sw          $v0, 0x64($s6)
    ctx->pc = 0x176964u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 2));
    // 0x176968: 0x24706618  addiu       $s0, $v1, 0x6618
    ctx->pc = 0x176968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26136));
    // 0x17696c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x176970: 0x8ec30058  lw          $v1, 0x58($s6)
    ctx->pc = 0x176970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x176974: 0x245142d8  addiu       $s1, $v0, 0x42D8
    ctx->pc = 0x176974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 17112));
    // 0x176978: 0xaec00070  sw          $zero, 0x70($s6)
    ctx->pc = 0x176978u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 0));
    // 0x17697c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x176980: 0xaec3006c  sw          $v1, 0x6C($s6)
    ctx->pc = 0x176980u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 3));
    // 0x176984: 0x245342e0  addiu       $s3, $v0, 0x42E0
    ctx->pc = 0x176984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17120));
    // 0x176988: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x176988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x17698c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17698cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x176990: 0x247242d0  addiu       $s2, $v1, 0x42D0
    ctx->pc = 0x176990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 17104));
    // 0x176994: 0x2455eed8  addiu       $s5, $v0, -0x1128
    ctx->pc = 0x176994u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962904));
    // 0x176998: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x176998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x17699c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17699cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769a0: 0x247442e8  addiu       $s4, $v1, 0x42E8
    ctx->pc = 0x1769a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 17128));
    // 0x1769a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1769a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1769a8: 0xc05ee3c  jal         func_17B8F0
    ctx->pc = 0x1769A8u;
    SET_GPR_U32(ctx, 31, 0x1769B0u);
    ctx->pc = 0x1769ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769A8u;
    // 0x1769ac: 0x8c64870c  lw          $a0, -0x78F4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B8F0u, 0x1769A8u, 0x1769B0u)) {
        return;
    }
    ctx->pc = 0x1769B0u;
label_1769b0:
    // 0x1769b0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1769b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1769b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1769b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769b8: 0x24456608  addiu       $a1, $v0, 0x6608
    ctx->pc = 0x1769b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26120));
    // 0x1769bc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1769BCu;
    SET_GPR_U32(ctx, 31, 0x1769C4u);
    ctx->pc = 0x1769C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769BCu;
    // 0x1769c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1769BCu, 0x1769C4u)) {
        return;
    }
    ctx->pc = 0x1769C4u;
label_1769c4:
    // 0x1769c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1769c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769c8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1769c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1769cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1769ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769d0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1769D0u;
    SET_GPR_U32(ctx, 31, 0x1769D8u);
    ctx->pc = 0x1769D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769D0u;
    // 0x1769d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1769D0u, 0x1769D8u)) {
        return;
    }
    ctx->pc = 0x1769D8u;
label_1769d8:
    // 0x1769d8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1769d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1769dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1769dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769e0: 0x24656628  addiu       $a1, $v1, 0x6628
    ctx->pc = 0x1769e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 26152));
    // 0x1769e4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1769E4u;
    SET_GPR_U32(ctx, 31, 0x1769ECu);
    ctx->pc = 0x1769E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769E4u;
    // 0x1769e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1769E4u, 0x1769ECu)) {
        return;
    }
    ctx->pc = 0x1769ECu;
label_1769ec:
    // 0x1769ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1769ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769f0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1769f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1769f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1769f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769f8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1769F8u;
    SET_GPR_U32(ctx, 31, 0x176A00u);
    ctx->pc = 0x1769FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769F8u;
    // 0x1769fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1769F8u, 0x176A00u)) {
        return;
    }
    ctx->pc = 0x176A00u;
label_176a00:
    // 0x176a00: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x176a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x176a04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x176a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a08: 0x24456638  addiu       $a1, $v0, 0x6638
    ctx->pc = 0x176a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26168));
    // 0x176a0c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x176A0Cu;
    SET_GPR_U32(ctx, 31, 0x176A14u);
    ctx->pc = 0x176A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A0Cu;
    // 0x176a10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x176A0Cu, 0x176A14u)) {
        return;
    }
    ctx->pc = 0x176A14u;
label_176a14:
    // 0x176a14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x176a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a18: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x176a18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x176a1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x176a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a20: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x176A20u;
    SET_GPR_U32(ctx, 31, 0x176A28u);
    ctx->pc = 0x176A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A20u;
    // 0x176a24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x176A20u, 0x176A28u)) {
        return;
    }
    ctx->pc = 0x176A28u;
label_176a28:
    // 0x176a28: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x176a2c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x176a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x176a30: 0x24656648  addiu       $a1, $v1, 0x6648
    ctx->pc = 0x176a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 26184));
    // 0x176a34: 0x24466660  addiu       $a2, $v0, 0x6660
    ctx->pc = 0x176a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 26208));
    // 0x176a38: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x176A38u;
    SET_GPR_U32(ctx, 31, 0x176A40u);
    ctx->pc = 0x176A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A38u;
    // 0x176a3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x176A38u, 0x176A40u)) {
        return;
    }
    ctx->pc = 0x176A40u;
label_176a40:
    // 0x176a40: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x176a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x176a44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x176a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x176a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a4c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x176A4Cu;
    SET_GPR_U32(ctx, 31, 0x176A54u);
    ctx->pc = 0x176A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A4Cu;
    // 0x176a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x176A4Cu, 0x176A54u)) {
        return;
    }
    ctx->pc = 0x176A54u;
label_176a54:
    // 0x176a54: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x176a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a5c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x176A5Cu;
    SET_GPR_U32(ctx, 31, 0x176A64u);
    ctx->pc = 0x176A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A5Cu;
    // 0x176a60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x176A5Cu, 0x176A64u)) {
        return;
    }
    ctx->pc = 0x176A64u;
label_176a64:
    // 0x176a64: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x176a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x176a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a6c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x176A6Cu;
    SET_GPR_U32(ctx, 31, 0x176A74u);
    ctx->pc = 0x176A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A6Cu;
    // 0x176a70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x176A6Cu, 0x176A74u)) {
        return;
    }
    ctx->pc = 0x176A74u;
label_176a74:
    // 0x176a74: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x176a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x176a78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x176a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176a7c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x176A7Cu;
    SET_GPR_U32(ctx, 31, 0x176A84u);
    ctx->pc = 0x176A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A7Cu;
    // 0x176a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x176A7Cu, 0x176A84u)) {
        return;
    }
    ctx->pc = 0x176A84u;
label_176a84:
    // 0x176a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176a88: 0xaec00080  sw          $zero, 0x80($s6)
    ctx->pc = 0x176a88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 0));
    // 0x176a8c: 0xaec00088  sw          $zero, 0x88($s6)
    ctx->pc = 0x176a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 136), GPR_U32(ctx, 0));
    // 0x176a90: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x176a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x176a94: 0xaec000c0  sw          $zero, 0xC0($s6)
    ctx->pc = 0x176a94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 0));
    // 0x176a98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x176a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a9c: 0xaec000cc  sw          $zero, 0xCC($s6)
    ctx->pc = 0x176a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 0));
    // 0x176aa0: 0x244565e0  addiu       $a1, $v0, 0x65E0
    ctx->pc = 0x176aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26080));
    // 0x176aa4: 0xaec000d0  sw          $zero, 0xD0($s6)
    ctx->pc = 0x176aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 208), GPR_U32(ctx, 0));
    // 0x176aa8: 0xaec000dc  sw          $zero, 0xDC($s6)
    ctx->pc = 0x176aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 220), GPR_U32(ctx, 0));
    // 0x176aac: 0xaec000e0  sw          $zero, 0xE0($s6)
    ctx->pc = 0x176aacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 224), GPR_U32(ctx, 0));
    // 0x176ab0: 0xaec300d8  sw          $v1, 0xD8($s6)
    ctx->pc = 0x176ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 216), GPR_U32(ctx, 3));
    // 0x176ab4: 0xaec3010c  sw          $v1, 0x10C($s6)
    ctx->pc = 0x176ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 268), GPR_U32(ctx, 3));
    // 0x176ab8: 0xaec300c8  sw          $v1, 0xC8($s6)
    ctx->pc = 0x176ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 200), GPR_U32(ctx, 3));
    // 0x176abc: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x176ABCu;
    SET_GPR_U32(ctx, 31, 0x176AC4u);
    ctx->pc = 0x176AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176ABCu;
    // 0x176ac0: 0xaec300d4  sw          $v1, 0xD4($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 212), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x176ABCu, 0x176AC4u)) {
        return;
    }
    ctx->pc = 0x176AC4u;
label_176ac4:
    // 0x176ac4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ac8: 0xc043c72  jal         func_10F1C8
    ctx->pc = 0x176AC8u;
    SET_GPR_U32(ctx, 31, 0x176AD0u);
    ctx->pc = 0x176ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AC8u;
    // 0x176acc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1C8u, 0x176AC8u, 0x176AD0u)) {
        return;
    }
    ctx->pc = 0x176AD0u;
label_176ad0:
    // 0x176ad0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x176ad4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x176ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ad8: 0x24656678  addiu       $a1, $v1, 0x6678
    ctx->pc = 0x176ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 26232));
    // 0x176adc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x176ADCu;
    SET_GPR_U32(ctx, 31, 0x176AE4u);
    ctx->pc = 0x176AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176ADCu;
    // 0x176ae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x176ADCu, 0x176AE4u)) {
        return;
    }
    ctx->pc = 0x176AE4u;
label_176ae4:
    // 0x176ae4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x176ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ae8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x176ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176af0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x176AF0u;
    SET_GPR_U32(ctx, 31, 0x176AF8u);
    ctx->pc = 0x176AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AF0u;
    // 0x176af4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x176AF0u, 0x176AF8u)) {
        return;
    }
    ctx->pc = 0x176AF8u;
label_176af8:
    // 0x176af8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x176af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176afc: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x176AFCu;
    SET_GPR_U32(ctx, 31, 0x176B04u);
    ctx->pc = 0x176B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AFCu;
    // 0x176b00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x176AFCu, 0x176B04u)) {
        return;
    }
    ctx->pc = 0x176B04u;
label_176b04:
    // 0x176b04: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x176b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b08: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x176b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x176b0c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x176b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176b10: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x176b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176b14: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x176b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x176b18: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x176b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176b1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x176b1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176b20: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x176b20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176b24: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x176b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176b28: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x176b28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176b30: 0x3e00008  jr          $ra
    ctx->pc = 0x176B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B30u;
        // 0x176b34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176B38u;
}
