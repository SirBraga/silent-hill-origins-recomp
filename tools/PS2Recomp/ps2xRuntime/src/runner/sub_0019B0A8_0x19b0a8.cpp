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

// Function: sub_0019B0A8
// Address: 0x19b0a8 - 0x19b268
void sub_0019B0A8_0x19b0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B0A8_0x19b0a8");
#endif

    switch (ctx->pc) {
        case 0x19b0d0u: goto label_19b0d0;
        case 0x19b100u: goto label_19b100;
        case 0x19b108u: goto label_19b108;
        case 0x19b110u: goto label_19b110;
        case 0x19b144u: goto label_19b144;
        case 0x19b14cu: goto label_19b14c;
        case 0x19b158u: goto label_19b158;
        case 0x19b18cu: goto label_19b18c;
        case 0x19b1a0u: goto label_19b1a0;
        case 0x19b1bcu: goto label_19b1bc;
        case 0x19b1d0u: goto label_19b1d0;
        case 0x19b1ecu: goto label_19b1ec;
        case 0x19b200u: goto label_19b200;
        case 0x19b21cu: goto label_19b21c;
        case 0x19b230u: goto label_19b230;
        case 0x19b248u: goto label_19b248;
        default: break;
    }

    ctx->pc = 0x19b0a8u;

    // 0x19b0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b0ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19b0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19b0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19b0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19b0b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b0bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19b0c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b0c8: 0xc066f76  jal         func_19BDD8
    ctx->pc = 0x19B0C8u;
    SET_GPR_U32(ctx, 31, 0x19B0D0u);
    ctx->pc = 0x19B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B0C8u;
    // 0x19b0cc: 0x26330044  addiu       $s3, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BDD8u, 0x19B0C8u, 0x19B0D0u)) {
        return;
    }
    ctx->pc = 0x19B0D0u;
label_19b0d0:
    // 0x19b0d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19b0d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19b0d8: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x19b0dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19b0e0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x19b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x19b0e4: 0x2463a168  addiu       $v1, $v1, -0x5E98
    ctx->pc = 0x19b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943080));
    // 0x19b0e8: 0x24a5a188  addiu       $a1, $a1, -0x5E78
    ctx->pc = 0x19b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943112));
    // 0x19b0ec: 0xae300044  sw          $s0, 0x44($s1)
    ctx->pc = 0x19b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
    // 0x19b0f0: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x19b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x19b0f4: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x19b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x19b0f8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19B0F8u;
    SET_GPR_U32(ctx, 31, 0x19B100u);
    ctx->pc = 0x19B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B0F8u;
    // 0x19b0fc: 0xae250034  sw          $a1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19B0F8u, 0x19B100u)) {
        return;
    }
    ctx->pc = 0x19B100u;
label_19b100:
    // 0x19b100: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19B100u;
    SET_GPR_U32(ctx, 31, 0x19B108u);
    ctx->pc = 0x19B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B100u;
    // 0x19b104: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19B100u, 0x19B108u)) {
        return;
    }
    ctx->pc = 0x19B108u;
label_19b108:
    // 0x19b108: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19B108u;
    SET_GPR_U32(ctx, 31, 0x19B110u);
    ctx->pc = 0x19B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B108u;
    // 0x19b10c: 0x2624005c  addiu       $a0, $s1, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19B108u, 0x19B110u)) {
        return;
    }
    ctx->pc = 0x19B110u;
label_19b110:
    // 0x19b110: 0x3c01473b  lui         $at, 0x473B
    ctx->pc = 0x19b110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18235 << 16));
    // 0x19b114: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x19b114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x19b118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b11c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x19b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x19b120: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x19b120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x19b124: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x19b124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x19b128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b12c: 0xae300070  sw          $s0, 0x70($s1)
    ctx->pc = 0x19b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 16));
    // 0x19b130: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x19b130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x19b134: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x19b134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x19b138: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x19b138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x19b13c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19B13Cu;
    SET_GPR_U32(ctx, 31, 0x19B144u);
    ctx->pc = 0x19B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B13Cu;
    // 0x19b140: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19B13Cu, 0x19B144u)) {
        return;
    }
    ctx->pc = 0x19B144u;
label_19b144:
    // 0x19b144: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19B144u;
    SET_GPR_U32(ctx, 31, 0x19B14Cu);
    ctx->pc = 0x19B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B144u;
    // 0x19b148: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19B144u, 0x19B14Cu)) {
        return;
    }
    ctx->pc = 0x19B14Cu;
label_19b14c:
    // 0x19b14c: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x19b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x19b150: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19B150u;
    SET_GPR_U32(ctx, 31, 0x19B158u);
    ctx->pc = 0x19B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B150u;
    // 0x19b154: 0x2624008c  addiu       $a0, $s1, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19B150u, 0x19B158u)) {
        return;
    }
    ctx->pc = 0x19B158u;
label_19b158:
    // 0x19b158: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x19b158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x19b15c: 0x3c12006a  lui         $s2, 0x6A
    ctx->pc = 0x19b15cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
    // 0x19b160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19b160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b164: 0x2652a0a0  addiu       $s2, $s2, -0x5F60
    ctx->pc = 0x19b164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942880));
    // 0x19b168: 0x26108110  addiu       $s0, $s0, -0x7EF0
    ctx->pc = 0x19b168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934800));
    // 0x19b16c: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x19b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x19b170: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x19b170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x19b174: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19b174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19b178: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x19b178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x19b17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b180: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19b180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b184: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x19B184u;
    SET_GPR_U32(ctx, 31, 0x19B18Cu);
    ctx->pc = 0x19B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B184u;
    // 0x19b188: 0x24a5a080  addiu       $a1, $a1, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x19B184u, 0x19B18Cu)) {
        return;
    }
    ctx->pc = 0x19B18Cu;
label_19b18c:
    // 0x19b18c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b190: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x19b190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19b194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19b194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b198: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x19B198u;
    SET_GPR_U32(ctx, 31, 0x19B1A0u);
    ctx->pc = 0x19B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B198u;
    // 0x19b19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19B198u, 0x19B1A0u)) {
        return;
    }
    ctx->pc = 0x19B1A0u;
label_19b1a0:
    // 0x19b1a0: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x19b1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x19b1a4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19b1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19b1a8: 0x26108118  addiu       $s0, $s0, -0x7EE8
    ctx->pc = 0x19b1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934808));
    // 0x19b1ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19b1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1b4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x19B1B4u;
    SET_GPR_U32(ctx, 31, 0x19B1BCu);
    ctx->pc = 0x19B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1B4u;
    // 0x19b1b8: 0x24a5a0b0  addiu       $a1, $a1, -0x5F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x19B1B4u, 0x19B1BCu)) {
        return;
    }
    ctx->pc = 0x19B1BCu;
label_19b1bc:
    // 0x19b1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1c0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x19b1c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19b1c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19b1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1c8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x19B1C8u;
    SET_GPR_U32(ctx, 31, 0x19B1D0u);
    ctx->pc = 0x19B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1C8u;
    // 0x19b1cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19B1C8u, 0x19B1D0u)) {
        return;
    }
    ctx->pc = 0x19B1D0u;
label_19b1d0:
    // 0x19b1d0: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x19b1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x19b1d4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19b1d8: 0x26108128  addiu       $s0, $s0, -0x7ED8
    ctx->pc = 0x19b1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934824));
    // 0x19b1dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19b1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1e4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x19B1E4u;
    SET_GPR_U32(ctx, 31, 0x19B1ECu);
    ctx->pc = 0x19B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1E4u;
    // 0x19b1e8: 0x24a5a0d0  addiu       $a1, $a1, -0x5F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x19B1E4u, 0x19B1ECu)) {
        return;
    }
    ctx->pc = 0x19B1ECu;
label_19b1ec:
    // 0x19b1ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1f0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x19b1f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19b1f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1f8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x19B1F8u;
    SET_GPR_U32(ctx, 31, 0x19B200u);
    ctx->pc = 0x19B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1F8u;
    // 0x19b1fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19B1F8u, 0x19B200u)) {
        return;
    }
    ctx->pc = 0x19B200u;
label_19b200:
    // 0x19b200: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x19b200u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x19b204: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19b204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19b208: 0x26108120  addiu       $s0, $s0, -0x7EE0
    ctx->pc = 0x19b208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934816));
    // 0x19b20c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19b20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b214: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x19B214u;
    SET_GPR_U32(ctx, 31, 0x19B21Cu);
    ctx->pc = 0x19B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B214u;
    // 0x19b218: 0x24a5a0f0  addiu       $a1, $a1, -0x5F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x19B214u, 0x19B21Cu)) {
        return;
    }
    ctx->pc = 0x19B21Cu;
label_19b21c:
    // 0x19b21c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b228: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x19B228u;
    SET_GPR_U32(ctx, 31, 0x19B230u);
    ctx->pc = 0x19B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B228u;
    // 0x19b22c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19B228u, 0x19B230u)) {
        return;
    }
    ctx->pc = 0x19B230u;
label_19b230:
    // 0x19b230: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x19b230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x19b234: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19b234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b238: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x19b238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x19b23c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b240: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x19B240u;
    SET_GPR_U32(ctx, 31, 0x19B248u);
    ctx->pc = 0x19B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B240u;
    // 0x19b244: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19B240u, 0x19B248u)) {
        return;
    }
    ctx->pc = 0x19B248u;
label_19b248:
    // 0x19b248: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b24c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19b24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b250: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19b250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b258: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19b258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b260: 0x3e00008  jr          $ra
    ctx->pc = 0x19B260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B260u;
        // 0x19b264: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B268u;
}
