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

// Function: sub_001C9750
// Address: 0x1c9750 - 0x1c9a28
void sub_001C9750_0x1c9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9750_0x1c9750");
#endif

    switch (ctx->pc) {
        case 0x1c97c0u: goto label_1c97c0;
        case 0x1c980cu: goto label_1c980c;
        case 0x1c9874u: goto label_1c9874;
        case 0x1c9884u: goto label_1c9884;
        case 0x1c991cu: goto label_1c991c;
        case 0x1c9938u: goto label_1c9938;
        case 0x1c994cu: goto label_1c994c;
        case 0x1c996cu: goto label_1c996c;
        case 0x1c9980u: goto label_1c9980;
        case 0x1c99a0u: goto label_1c99a0;
        case 0x1c99d0u: goto label_1c99d0;
        case 0x1c99dcu: goto label_1c99dc;
        default: break;
    }

    ctx->pc = 0x1c9750u;

    // 0x1c9750: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1c9750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1c9754: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1c9754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1c9758: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1c9758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1c975c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c975cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9760: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1c9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1c9764: 0x26330310  addiu       $s3, $s1, 0x310
    ctx->pc = 0x1c9764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x1c9768: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1c9768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1c976c: 0x3c140002  lui         $s4, 0x2
    ctx->pc = 0x1c976cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2 << 16));
    // 0x1c9770: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1c9770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1c9774: 0x36940003  ori         $s4, $s4, 0x3
    ctx->pc = 0x1c9774u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)3);
    // 0x1c9778: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c9778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c977c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c977cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9780: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1c9780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1c9784: 0x3c17006a  lui         $s7, 0x6A
    ctx->pc = 0x1c9784u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    // 0x1c9788: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1c9788u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1c978c: 0x3c1e006a  lui         $fp, 0x6A
    ctx->pc = 0x1c978cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
    // 0x1c9790: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c9790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1c9794: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c9798: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1c9798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1c979c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1c979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1c97a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c97a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c97a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c97a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c97a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c97a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c97ac: 0x8e2202c4  lw          $v0, 0x2C4($s1)
    ctx->pc = 0x1c97acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
    // 0x1c97b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c97b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c97b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c97b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c97bc: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1c97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1c97c0:
    // 0x1c97c0: 0x8e2302b4  lw          $v1, 0x2B4($s1)
    ctx->pc = 0x1c97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1c97c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1c97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c97c8: 0xe4550028  swc1        $f21, 0x28($v0)
    ctx->pc = 0x1c97c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1c97cc: 0xe4550014  swc1        $f21, 0x14($v0)
    ctx->pc = 0x1c97ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1c97d0: 0xe4750010  swc1        $f21, 0x10($v1)
    ctx->pc = 0x1c97d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1c97d4: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x1c97d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1c97d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1c97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c97dc: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1c97dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c97e0: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x1c97e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x1c97e4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1c97e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c97e8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1c97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1c97ec: 0xe4540024  swc1        $f20, 0x24($v0)
    ctx->pc = 0x1c97ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1c97f0: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x1c97f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1c97f4: 0xe4540018  swc1        $f20, 0x18($v0)
    ctx->pc = 0x1c97f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c97f8: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x1c97f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1c97fc: 0xe4540034  swc1        $f20, 0x34($v0)
    ctx->pc = 0x1c97fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1c9800: 0xe4540030  swc1        $f20, 0x30($v0)
    ctx->pc = 0x1c9800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1c9804: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x1C9804u;
    SET_GPR_U32(ctx, 31, 0x1C980Cu);
    ctx->pc = 0x1C9808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9804u;
    // 0x1c9808: 0x8e2402b4  lw          $a0, 0x2B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1C9804u, 0x1C980Cu)) {
        return;
    }
    ctx->pc = 0x1C980Cu;
label_1c980c:
    // 0x1c980c: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x1c980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1c9810: 0x8c6202c4  lw          $v0, 0x2C4($v1)
    ctx->pc = 0x1c9810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
    // 0x1c9814: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1c9814u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c9818: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1c9818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c981c: 0xe6150028  swc1        $f21, 0x28($s0)
    ctx->pc = 0x1c981cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1c9820: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x1c9820u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1c9824: 0xe6550010  swc1        $f21, 0x10($s2)
    ctx->pc = 0x1c9824u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1c9828: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x1c9828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1c982c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9830: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x1c9830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c9834: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x1c9834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x1c9838: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1c9838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c983c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c983cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c9840: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x1c9840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c9844: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x1c9844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c9848: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x1c9848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1c984c: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x1c984cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1c9850: 0xe6140034  swc1        $f20, 0x34($s0)
    ctx->pc = 0x1c9850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1c9854: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x1c9854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c9858: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c9858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c985c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1c985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1c9860: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C9860u;
    {
        const bool branch_taken_0x1c9860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9860u;
        // 0x1c9864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9860) {
            ctx->pc = 0x1C9958u;
            goto label_1c9958;
        }
    }
    ctx->pc = 0x1C9868u;
    // 0x1c9868: 0x8e240268  lw          $a0, 0x268($s1)
    ctx->pc = 0x1c9868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x1c986c: 0xc05d0e6  jal         func_174398
    ctx->pc = 0x1C986Cu;
    SET_GPR_U32(ctx, 31, 0x1C9874u);
    ctx->pc = 0x1C9870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C986Cu;
    // 0x1c9870: 0x8c4502cc  lw          $a1, 0x2CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 716)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174398u, 0x1C986Cu, 0x1C9874u)) {
        return;
    }
    ctx->pc = 0x1C9874u;
label_1c9874:
    // 0x1c9874: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1c9874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9878: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c9878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c987c: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x1C987Cu;
    SET_GPR_U32(ctx, 31, 0x1C9884u);
    ctx->pc = 0x1C9880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C987Cu;
    // 0x1c9880: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x1C987Cu, 0x1C9884u)) {
        return;
    }
    ctx->pc = 0x1C9884u;
label_1c9884:
    // 0x1c9884: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1c9884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c9888: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1c9888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c988c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1c988cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c9890: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1c9890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c9894: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1c9894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c9898: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1c9898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c989c: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x1c989cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c98a0: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x1c98a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c98a4: 0xb2420017  sdl         $v0, 0x17($s2)
    ctx->pc = 0x1c98a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98a8: 0xb6420010  sdr         $v0, 0x10($s2)
    ctx->pc = 0x1c98a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98ac: 0xb243001f  sdl         $v1, 0x1F($s2)
    ctx->pc = 0x1c98acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98b0: 0xb6430018  sdr         $v1, 0x18($s2)
    ctx->pc = 0x1c98b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98b4: 0xb2440027  sdl         $a0, 0x27($s2)
    ctx->pc = 0x1c98b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98b8: 0xb6440020  sdr         $a0, 0x20($s2)
    ctx->pc = 0x1c98b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98bc: 0xb245002f  sdl         $a1, 0x2F($s2)
    ctx->pc = 0x1c98bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98c0: 0xb6450028  sdr         $a1, 0x28($s2)
    ctx->pc = 0x1c98c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98c4: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1c98c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c98c8: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1c98c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c98cc: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x1c98ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c98d0: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1c98d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c98d4: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x1c98d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c98d8: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x1c98d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c98dc: 0x6ba5003f  ldl         $a1, 0x3F($sp)
    ctx->pc = 0x1c98dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c98e0: 0x6fa50038  ldr         $a1, 0x38($sp)
    ctx->pc = 0x1c98e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c98e4: 0xb2420037  sdl         $v0, 0x37($s2)
    ctx->pc = 0x1c98e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98e8: 0xb6420030  sdr         $v0, 0x30($s2)
    ctx->pc = 0x1c98e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98ec: 0xb243003f  sdl         $v1, 0x3F($s2)
    ctx->pc = 0x1c98ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98f0: 0xb6430038  sdr         $v1, 0x38($s2)
    ctx->pc = 0x1c98f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98f4: 0xb2440047  sdl         $a0, 0x47($s2)
    ctx->pc = 0x1c98f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98f8: 0xb6440040  sdr         $a0, 0x40($s2)
    ctx->pc = 0x1c98f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c98fc: 0xb245004f  sdl         $a1, 0x4F($s2)
    ctx->pc = 0x1c98fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9900: 0xb6450048  sdr         $a1, 0x48($s2)
    ctx->pc = 0x1c9900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9908: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x1c9908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1c990c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9910: 0xc44c02e0  lwc1        $f12, 0x2E0($v0)
    ctx->pc = 0x1c9910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9914: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C9914u;
    SET_GPR_U32(ctx, 31, 0x1C991Cu);
    ctx->pc = 0x1C9918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9914u;
    // 0x1c9918: 0x27c5f950  addiu       $a1, $fp, -0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C9914u, 0x1C991Cu)) {
        return;
    }
    ctx->pc = 0x1C991Cu;
label_1c991c:
    // 0x1c991c: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x1c991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1c9920: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1c9920u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1c9924: 0xc46c02e4  lwc1        $f12, 0x2E4($v1)
    ctx->pc = 0x1c9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c992c: 0x24e5f960  addiu       $a1, $a3, -0x6A0
    ctx->pc = 0x1c992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965600));
    // 0x1c9930: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C9930u;
    SET_GPR_U32(ctx, 31, 0x1C9938u);
    ctx->pc = 0x1C9934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9930u;
    // 0x1c9934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C9930u, 0x1C9938u)) {
        return;
    }
    ctx->pc = 0x1C9938u;
label_1c9938:
    // 0x1c9938: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1c9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c993c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9940: 0x26e5f970  addiu       $a1, $s7, -0x690
    ctx->pc = 0x1c9940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965616));
    // 0x1c9944: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C9944u;
    SET_GPR_U32(ctx, 31, 0x1C994Cu);
    ctx->pc = 0x1C9948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9944u;
    // 0x1c9948: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C9944u, 0x1C994Cu)) {
        return;
    }
    ctx->pc = 0x1C994Cu;
label_1c994c:
    // 0x1c994c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C994Cu;
    {
        const bool branch_taken_0x1c994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C994Cu;
        // 0x1c9950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c994c) {
            ctx->pc = 0x1C99D4u;
            goto label_1c99d4;
        }
    }
    ctx->pc = 0x1C9954u;
    // 0x1c9954: 0x0  nop
    ctx->pc = 0x1c9954u;
    // NOP
label_1c9958:
    // 0x1c9958: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x1c995c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c995cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9960: 0x27c5f950  addiu       $a1, $fp, -0x6B0
    ctx->pc = 0x1c9960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965584));
    // 0x1c9964: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C9964u;
    SET_GPR_U32(ctx, 31, 0x1C996Cu);
    ctx->pc = 0x1C9968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9964u;
    // 0x1c9968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C9964u, 0x1C996Cu)) {
        return;
    }
    ctx->pc = 0x1C996Cu;
label_1c996c:
    // 0x1c996c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1c996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9970: 0x26e5f970  addiu       $a1, $s7, -0x690
    ctx->pc = 0x1c9970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965616));
    // 0x1c9974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9978: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C9978u;
    SET_GPR_U32(ctx, 31, 0x1C9980u);
    ctx->pc = 0x1C997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9978u;
    // 0x1c997c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C9978u, 0x1C9980u)) {
        return;
    }
    ctx->pc = 0x1C9980u;
label_1c9980:
    // 0x1c9980: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c9980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c9984: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c9984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c9988: 0x2442f9c4  addiu       $v0, $v0, -0x63C
    ctx->pc = 0x1c9988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965700));
    // 0x1c998c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9990: 0x400013  mtlo        $v0
    ctx->pc = 0x1c9990u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1c9994: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c9994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9998: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x1C9998u;
    SET_GPR_U32(ctx, 31, 0x1C99A0u);
    ctx->pc = 0x1C999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9998u;
    // 0x1c999c: 0x72c52800  madd        $a1, $s6, $a1 (Delay Slot)
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x1C9998u, 0x1C99A0u)) {
        return;
    }
    ctx->pc = 0x1C99A0u;
label_1c99a0:
    // 0x1c99a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c99a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c99a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99ac: 0x2462f828  addiu       $v0, $v1, -0x7D8
    ctx->pc = 0x1c99acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965288));
    // 0x1c99b0: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1c99b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c99b4: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1c99b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c99b8: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1c99b8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x69F830u));
    // 0x1c99bc: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x1c99bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c99c0: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x1c99c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c99c4: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1c99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1c99c8: 0xc092ea4  jal         func_24BA90
    ctx->pc = 0x1C99C8u;
    SET_GPR_U32(ctx, 31, 0x1C99D0u);
    ctx->pc = 0x1C99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99C8u;
    // 0x1c99cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BA90u, 0x1C99C8u, 0x1C99D0u)) {
        return;
    }
    ctx->pc = 0x1C99D0u;
label_1c99d0:
    // 0x1c99d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c99d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c99d4:
    // 0x1c99d4: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x1C99D4u;
    SET_GPR_U32(ctx, 31, 0x1C99DCu);
    ctx->pc = 0x1C99D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99D4u;
    // 0x1c99d8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1C99D4u, 0x1C99DCu)) {
        return;
    }
    ctx->pc = 0x1C99DCu;
label_1c99dc:
    // 0x1c99dc: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x1c99e0: 0x2ac20005  slti        $v0, $s6, 0x5
    ctx->pc = 0x1c99e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c99e4: 0x1440ff76  bnez        $v0, . + 4 + (-0x8A << 2)
    ctx->pc = 0x1C99E4u;
    {
        const bool branch_taken_0x1c99e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99E4u;
        // 0x1c99e8: 0x26b50028  addiu       $s5, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99e4) {
            ctx->pc = 0x1C97C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c97c0;
        }
    }
    ctx->pc = 0x1C99ECu;
    // 0x1c99ec: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1c99ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c99f0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1c99f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c99f4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1c99f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c99f8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1c99f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c99fc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1c99fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c9a00: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1c9a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9a04: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1c9a04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c9a08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c9a08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9a0c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1c9a0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c9a10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c9a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9a14: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1c9a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c9a18: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c9a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A1Cu;
        // 0x1c9a20: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A24u;
    // 0x1c9a24: 0x0  nop
    ctx->pc = 0x1c9a24u;
    // NOP
    ctx->pc = 0x1c9a28u;
}
