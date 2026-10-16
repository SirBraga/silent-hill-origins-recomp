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

// Function: sub_0014F2B8
// Address: 0x14f2b8 - 0x14f418
void sub_0014F2B8_0x14f2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F2B8_0x14f2b8");
#endif

    switch (ctx->pc) {
        case 0x14f324u: goto label_14f324;
        case 0x14f33cu: goto label_14f33c;
        case 0x14f360u: goto label_14f360;
        case 0x14f374u: goto label_14f374;
        case 0x14f390u: goto label_14f390;
        case 0x14f3a8u: goto label_14f3a8;
        case 0x14f3c0u: goto label_14f3c0;
        case 0x14f3d8u: goto label_14f3d8;
        case 0x14f3f0u: goto label_14f3f0;
        case 0x14f3f8u: goto label_14f3f8;
        default: break;
    }

    ctx->pc = 0x14f2b8u;

    // 0x14f2b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14f2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14f2bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f2c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14f2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14f2c4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14f2c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14f2cc: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x14f2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x14f2d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14f2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14f2d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14f2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f2dc: 0x24422268  addiu       $v0, $v0, 0x2268
    ctx->pc = 0x14f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8808));
    // 0x14f2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f2e4: 0x261021f8  addiu       $s0, $s0, 0x21F8
    ctx->pc = 0x14f2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8696));
    // 0x14f2e8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x14f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x14f2ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14f2f0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x14f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x14f2f4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14f2f8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x14f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x14f2fc: 0x2484efc0  addiu       $a0, $a0, -0x1040
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
    // 0x14f300: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x14f300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x14f304: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x14f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
    // 0x14f308: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14f308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x14f30c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14f30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f310: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x14f310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x14f314: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x14f314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x14f318: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x14f318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x14f31c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14F31Cu;
    SET_GPR_U32(ctx, 31, 0x14F324u);
    ctx->pc = 0x14F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F31Cu;
    // 0x14f320: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14F31Cu, 0x14F324u)) {
        return;
    }
    ctx->pc = 0x14F324u;
label_14f324:
    // 0x14f324: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14f324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14f328: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14f328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14f32c: 0x24a52210  addiu       $a1, $a1, 0x2210
    ctx->pc = 0x14f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8720));
    // 0x14f330: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14f330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f334: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14F334u;
    SET_GPR_U32(ctx, 31, 0x14F33Cu);
    ctx->pc = 0x14F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F334u;
    // 0x14f338: 0x2484efc8  addiu       $a0, $a0, -0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14F334u, 0x14F33Cu)) {
        return;
    }
    ctx->pc = 0x14F33Cu;
label_14f33c:
    // 0x14f33c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x14f340: 0x3c110069  lui         $s1, 0x69
    ctx->pc = 0x14f340u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
    // 0x14f344: 0x2610efb8  addiu       $s0, $s0, -0x1048
    ctx->pc = 0x14f344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963128));
    // 0x14f348: 0x26312240  addiu       $s1, $s1, 0x2240
    ctx->pc = 0x14f348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8768));
    // 0x14f34c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14f350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f354: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14f354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f358: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14F358u;
    SET_GPR_U32(ctx, 31, 0x14F360u);
    ctx->pc = 0x14F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F358u;
    // 0x14f35c: 0x24a52228  addiu       $a1, $a1, 0x2228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14F358u, 0x14F360u)) {
        return;
    }
    ctx->pc = 0x14F360u;
label_14f360:
    // 0x14f360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f364: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14f364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f36c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14F36Cu;
    SET_GPR_U32(ctx, 31, 0x14F374u);
    ctx->pc = 0x14F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F36Cu;
    // 0x14f370: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14F36Cu, 0x14F374u)) {
        return;
    }
    ctx->pc = 0x14F374u;
label_14f374:
    // 0x14f374: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x14f374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x14f378: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x14f37c: 0x24a544c8  addiu       $a1, $a1, 0x44C8
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17608));
    // 0x14f380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f384: 0x24c62250  addiu       $a2, $a2, 0x2250
    ctx->pc = 0x14f384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8784));
    // 0x14f388: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14F388u;
    SET_GPR_U32(ctx, 31, 0x14F390u);
    ctx->pc = 0x14F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F388u;
    // 0x14f38c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14F388u, 0x14F390u)) {
        return;
    }
    ctx->pc = 0x14F390u;
label_14f390:
    // 0x14f390: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14f390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x14f394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f398: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x14f39c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3a0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14F3A0u;
    SET_GPR_U32(ctx, 31, 0x14F3A8u);
    ctx->pc = 0x14F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3A0u;
    // 0x14f3a4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14F3A0u, 0x14F3A8u)) {
        return;
    }
    ctx->pc = 0x14F3A8u;
label_14f3a8:
    // 0x14f3a8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14f3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3b0: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x14f3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x14f3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3b8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14F3B8u;
    SET_GPR_U32(ctx, 31, 0x14F3C0u);
    ctx->pc = 0x14F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3B8u;
    // 0x14f3bc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14F3B8u, 0x14F3C0u)) {
        return;
    }
    ctx->pc = 0x14F3C0u;
label_14f3c0:
    // 0x14f3c0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14f3c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3c8: 0x24a5f890  addiu       $a1, $a1, -0x770
    ctx->pc = 0x14f3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965392));
    // 0x14f3cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3d0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14F3D0u;
    SET_GPR_U32(ctx, 31, 0x14F3D8u);
    ctx->pc = 0x14F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3D0u;
    // 0x14f3d4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14F3D0u, 0x14F3D8u)) {
        return;
    }
    ctx->pc = 0x14F3D8u;
label_14f3d8:
    // 0x14f3d8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14f3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3e0: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x14f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
    // 0x14f3e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3e8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14F3E8u;
    SET_GPR_U32(ctx, 31, 0x14F3F0u);
    ctx->pc = 0x14F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3E8u;
    // 0x14f3ec: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14F3E8u, 0x14F3F0u)) {
        return;
    }
    ctx->pc = 0x14F3F0u;
label_14f3f0:
    // 0x14f3f0: 0xc054064  jal         func_150190
    ctx->pc = 0x14F3F0u;
    SET_GPR_U32(ctx, 31, 0x14F3F8u);
    ctx->pc = 0x14F3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3F0u;
    // 0x14f3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150190u, 0x14F3F0u, 0x14F3F8u)) {
        return;
    }
    ctx->pc = 0x14F3F8u;
label_14f3f8:
    // 0x14f3f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14f3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14f3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14f400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f404: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14f404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f40c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F40Cu;
        // 0x14f410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F414u;
    // 0x14f414: 0x0  nop
    ctx->pc = 0x14f414u;
    // NOP
    ctx->pc = 0x14f418u;
}
