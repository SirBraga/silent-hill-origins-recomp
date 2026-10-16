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

// Function: sub_0030B950
// Address: 0x30b950 - 0x30bcc0
void sub_0030B950_0x30b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B950_0x30b950");
#endif

    switch (ctx->pc) {
        case 0x30b98cu: goto label_30b98c;
        case 0x30b9e0u: goto label_30b9e0;
        case 0x30b9e8u: goto label_30b9e8;
        case 0x30ba08u: goto label_30ba08;
        case 0x30ba84u: goto label_30ba84;
        case 0x30bac8u: goto label_30bac8;
        case 0x30bae4u: goto label_30bae4;
        case 0x30bb2cu: goto label_30bb2c;
        case 0x30bb48u: goto label_30bb48;
        case 0x30bb8cu: goto label_30bb8c;
        case 0x30bba8u: goto label_30bba8;
        case 0x30bbe8u: goto label_30bbe8;
        case 0x30bc04u: goto label_30bc04;
        case 0x30bc48u: goto label_30bc48;
        case 0x30bc64u: goto label_30bc64;
        default: break;
    }

    ctx->pc = 0x30b950u;

    // 0x30b950: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30b954: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30b954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x30b958: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x30b95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30b95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b960: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30b960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b964: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30b964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30b968: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30b96c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30b970: 0x34420017  ori         $v0, $v0, 0x17
    ctx->pc = 0x30b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x30b974: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b978: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B978u;
    {
        const bool branch_taken_0x30b978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B978u;
        // 0x30b97c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b978) {
            ctx->pc = 0x30B998u;
            goto label_30b998;
        }
    }
    ctx->pc = 0x30B980u;
    // 0x30b980: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x30b980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x30b984: 0xc092782  jal         func_249E08
    ctx->pc = 0x30B984u;
    SET_GPR_U32(ctx, 31, 0x30B98Cu);
    ctx->pc = 0x30B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B984u;
    // 0x30b988: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B984u, 0x30B98Cu)) {
        return;
    }
    ctx->pc = 0x30B98Cu;
label_30b98c:
    // 0x30b98c: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x30B98Cu;
    {
        const bool branch_taken_0x30b98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B98Cu;
        // 0x30b990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b98c) {
            ctx->pc = 0x30BCA8u;
            goto label_30bca8;
        }
    }
    ctx->pc = 0x30B994u;
    // 0x30b994: 0x0  nop
    ctx->pc = 0x30b994u;
    // NOP
label_30b998:
    // 0x30b998: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x30b998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x30b99c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30b99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9a0: 0xc602004c  lwc1        $f2, 0x4C($s0)
    ctx->pc = 0x30b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9a8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x30b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x30b9ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30b9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9b0: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x30b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b9b4: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x30b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b9b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30b9bc: 0x96060058  lhu         $a2, 0x58($s0)
    ctx->pc = 0x30b9bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x30b9c0: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x30b9c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
    // 0x30b9c4: 0x9603005a  lhu         $v1, 0x5A($s0)
    ctx->pc = 0x30b9c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x30b9c8: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x30b9c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x30b9cc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x30b9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30b9d0: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x30b9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x30b9d4: 0xa7a60030  sh          $a2, 0x30($sp)
    ctx->pc = 0x30b9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x30b9d8: 0xc0c276a  jal         func_309DA8
    ctx->pc = 0x30B9D8u;
    SET_GPR_U32(ctx, 31, 0x30B9E0u);
    ctx->pc = 0x30B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9D8u;
    // 0x30b9dc: 0xa7a30032  sh          $v1, 0x32($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309DA8u, 0x30B9D8u, 0x30B9E0u)) {
        return;
    }
    ctx->pc = 0x30B9E0u;
label_30b9e0:
    // 0x30b9e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B9E0u;
    {
        const bool branch_taken_0x30b9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9E0u;
        // 0x30b9e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9e0) {
            ctx->pc = 0x30B9F0u;
            goto label_30b9f0;
        }
    }
    ctx->pc = 0x30B9E8u;
label_30b9e8:
    // 0x30b9e8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x30B9E8u;
    {
        const bool branch_taken_0x30b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9E8u;
        // 0x30b9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9e8) {
            ctx->pc = 0x30BCA8u;
            goto label_30bca8;
        }
    }
    ctx->pc = 0x30B9F0u;
label_30b9f0:
    // 0x30b9f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b9f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B9F4u;
    {
        const bool branch_taken_0x30b9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9F4u;
        // 0x30b9f8: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9f4) {
            ctx->pc = 0x30BA10u;
            goto label_30ba10;
        }
    }
    ctx->pc = 0x30B9FCu;
    // 0x30b9fc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x30b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x30ba00: 0xc092782  jal         func_249E08
    ctx->pc = 0x30BA00u;
    SET_GPR_U32(ctx, 31, 0x30BA08u);
    ctx->pc = 0x30BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA00u;
    // 0x30ba04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30BA00u, 0x30BA08u)) {
        return;
    }
    ctx->pc = 0x30BA08u;
label_30ba08:
    // 0x30ba08: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x30BA08u;
    {
        const bool branch_taken_0x30ba08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA08u;
        // 0x30ba0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba08) {
            ctx->pc = 0x30BAA4u;
            goto label_30baa4;
        }
    }
    ctx->pc = 0x30BA10u;
label_30ba10:
    // 0x30ba10: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x30ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ba14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ba18: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x30ba18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30ba1c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x30ba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ba20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30ba20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30ba24: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x30ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ba28: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x30ba28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30ba2c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x30ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ba30: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x30ba30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30ba34: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x30ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ba38: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x30ba38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30ba3c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x30ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ba40: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x30ba40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30ba44: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x30ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ba48: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x30ba48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30ba4c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x30ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ba50: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x30ba50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x30ba54: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x30ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ba58: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x30ba58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30ba5c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x30ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ba60: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x30ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x30ba64: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x30ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ba68: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x30ba68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x30ba6c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x30ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ba70: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BA70u;
    {
        const bool branch_taken_0x30ba70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA70u;
        // 0x30ba74: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba70) {
            ctx->pc = 0x30BA8Cu;
            goto label_30ba8c;
        }
    }
    ctx->pc = 0x30BA78u;
    // 0x30ba78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30ba78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba7c: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30BA7Cu;
    SET_GPR_U32(ctx, 31, 0x30BA84u);
    ctx->pc = 0x30BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA7Cu;
    // 0x30ba80: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30BA7Cu, 0x30BA84u)) {
        return;
    }
    ctx->pc = 0x30BA84u;
label_30ba84:
    // 0x30ba84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BA84u;
    {
        const bool branch_taken_0x30ba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA84u;
        // 0x30ba88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba84) {
            ctx->pc = 0x30BAA4u;
            goto label_30baa4;
        }
    }
    ctx->pc = 0x30BA8Cu;
label_30ba8c:
    // 0x30ba8c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BA8Cu;
    {
        const bool branch_taken_0x30ba8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA8Cu;
        // 0x30ba90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba8c) {
            ctx->pc = 0x30BAA4u;
            goto label_30baa4;
        }
    }
    ctx->pc = 0x30BA94u;
    // 0x30ba94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30ba98: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x30ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x30ba9c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30baa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30baa4:
    // 0x30baa4: 0x1040ffd0  beqz        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x30BAA4u;
    {
        const bool branch_taken_0x30baa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAA4u;
        // 0x30baa8: 0x27b0003c  addiu       $s0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30baa4) {
            ctx->pc = 0x30B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b9e8;
        }
    }
    ctx->pc = 0x30BAACu;
    // 0x30baac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30bab0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bab4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x30BAB4u;
    {
        const bool branch_taken_0x30bab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAB4u;
        // 0x30bab8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bab4) {
            ctx->pc = 0x30BAF0u;
            goto label_30baf0;
        }
    }
    ctx->pc = 0x30BABCu;
    // 0x30babc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x30babcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30bac0: 0xc092782  jal         func_249E08
    ctx->pc = 0x30BAC0u;
    SET_GPR_U32(ctx, 31, 0x30BAC8u);
    ctx->pc = 0x30BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BAC0u;
    // 0x30bac4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30BAC0u, 0x30BAC8u)) {
        return;
    }
    ctx->pc = 0x30BAC8u;
label_30bac8:
    // 0x30bac8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30BAC8u;
    {
        const bool branch_taken_0x30bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAC8u;
        // 0x30bacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bac8) {
            ctx->pc = 0x30BB08u;
            goto label_30bb08;
        }
    }
    ctx->pc = 0x30BAD0u;
    // 0x30bad0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bad4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BAD4u;
    {
        const bool branch_taken_0x30bad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAD4u;
        // 0x30bad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bad4) {
            ctx->pc = 0x30BAF0u;
            goto label_30baf0;
        }
    }
    ctx->pc = 0x30BADCu;
    // 0x30badc: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30BADCu;
    SET_GPR_U32(ctx, 31, 0x30BAE4u);
    ctx->pc = 0x30BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BADCu;
    // 0x30bae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30BADCu, 0x30BAE4u)) {
        return;
    }
    ctx->pc = 0x30BAE4u;
label_30bae4:
    // 0x30bae4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BAE4u;
    {
        const bool branch_taken_0x30bae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAE4u;
        // 0x30bae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bae4) {
            ctx->pc = 0x30BB08u;
            goto label_30bb08;
        }
    }
    ctx->pc = 0x30BAECu;
    // 0x30baec: 0x0  nop
    ctx->pc = 0x30baecu;
    // NOP
label_30baf0:
    // 0x30baf0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BAF0u;
    {
        const bool branch_taken_0x30baf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAF0u;
        // 0x30baf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30baf0) {
            ctx->pc = 0x30BB08u;
            goto label_30bb08;
        }
    }
    ctx->pc = 0x30BAF8u;
    // 0x30baf8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30bafc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30bb00: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30bb04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bb08:
    // 0x30bb08: 0x1040ffb7  beqz        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x30BB08u;
    {
        const bool branch_taken_0x30bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB08u;
        // 0x30bb0c: 0x27b00044  addiu       $s0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb08) {
            ctx->pc = 0x30B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b9e8;
        }
    }
    ctx->pc = 0x30BB10u;
    // 0x30bb10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30bb14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bb18: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x30BB18u;
    {
        const bool branch_taken_0x30bb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB18u;
        // 0x30bb1c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb18) {
            ctx->pc = 0x30BB50u;
            goto label_30bb50;
        }
    }
    ctx->pc = 0x30BB20u;
    // 0x30bb20: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x30bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x30bb24: 0xc092782  jal         func_249E08
    ctx->pc = 0x30BB24u;
    SET_GPR_U32(ctx, 31, 0x30BB2Cu);
    ctx->pc = 0x30BB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB24u;
    // 0x30bb28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30BB24u, 0x30BB2Cu)) {
        return;
    }
    ctx->pc = 0x30BB2Cu;
label_30bb2c:
    // 0x30bb2c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30BB2Cu;
    {
        const bool branch_taken_0x30bb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB2Cu;
        // 0x30bb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb2c) {
            ctx->pc = 0x30BB68u;
            goto label_30bb68;
        }
    }
    ctx->pc = 0x30BB34u;
    // 0x30bb34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bb38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BB38u;
    {
        const bool branch_taken_0x30bb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB38u;
        // 0x30bb3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb38) {
            ctx->pc = 0x30BB50u;
            goto label_30bb50;
        }
    }
    ctx->pc = 0x30BB40u;
    // 0x30bb40: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30BB40u;
    SET_GPR_U32(ctx, 31, 0x30BB48u);
    ctx->pc = 0x30BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB40u;
    // 0x30bb44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30BB40u, 0x30BB48u)) {
        return;
    }
    ctx->pc = 0x30BB48u;
label_30bb48:
    // 0x30bb48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BB48u;
    {
        const bool branch_taken_0x30bb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB48u;
        // 0x30bb4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb48) {
            ctx->pc = 0x30BB68u;
            goto label_30bb68;
        }
    }
    ctx->pc = 0x30BB50u;
label_30bb50:
    // 0x30bb50: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BB50u;
    {
        const bool branch_taken_0x30bb50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB50u;
        // 0x30bb54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb50) {
            ctx->pc = 0x30BB68u;
            goto label_30bb68;
        }
    }
    ctx->pc = 0x30BB58u;
    // 0x30bb58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30bb5c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30bb60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30bb64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bb68:
    // 0x30bb68: 0x1040ff9f  beqz        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x30BB68u;
    {
        const bool branch_taken_0x30bb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB68u;
        // 0x30bb6c: 0x27b0004c  addiu       $s0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb68) {
            ctx->pc = 0x30B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b9e8;
        }
    }
    ctx->pc = 0x30BB70u;
    // 0x30bb70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30bb74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bb78: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x30BB78u;
    {
        const bool branch_taken_0x30bb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB78u;
        // 0x30bb7c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb78) {
            ctx->pc = 0x30BBB0u;
            goto label_30bbb0;
        }
    }
    ctx->pc = 0x30BB80u;
    // 0x30bb80: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x30bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30bb84: 0xc092782  jal         func_249E08
    ctx->pc = 0x30BB84u;
    SET_GPR_U32(ctx, 31, 0x30BB8Cu);
    ctx->pc = 0x30BB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB84u;
    // 0x30bb88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30BB84u, 0x30BB8Cu)) {
        return;
    }
    ctx->pc = 0x30BB8Cu;
label_30bb8c:
    // 0x30bb8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30BB8Cu;
    {
        const bool branch_taken_0x30bb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB8Cu;
        // 0x30bb90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb8c) {
            ctx->pc = 0x30BBC8u;
            goto label_30bbc8;
        }
    }
    ctx->pc = 0x30BB94u;
    // 0x30bb94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bb98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BB98u;
    {
        const bool branch_taken_0x30bb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB98u;
        // 0x30bb9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb98) {
            ctx->pc = 0x30BBB0u;
            goto label_30bbb0;
        }
    }
    ctx->pc = 0x30BBA0u;
    // 0x30bba0: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30BBA0u;
    SET_GPR_U32(ctx, 31, 0x30BBA8u);
    ctx->pc = 0x30BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBA0u;
    // 0x30bba4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30BBA0u, 0x30BBA8u)) {
        return;
    }
    ctx->pc = 0x30BBA8u;
label_30bba8:
    // 0x30bba8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BBA8u;
    {
        const bool branch_taken_0x30bba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBA8u;
        // 0x30bbac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bba8) {
            ctx->pc = 0x30BBC8u;
            goto label_30bbc8;
        }
    }
    ctx->pc = 0x30BBB0u;
label_30bbb0:
    // 0x30bbb0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BBB0u;
    {
        const bool branch_taken_0x30bbb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBB0u;
        // 0x30bbb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbb0) {
            ctx->pc = 0x30BBC8u;
            goto label_30bbc8;
        }
    }
    ctx->pc = 0x30BBB8u;
    // 0x30bbb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30bbbc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30bbc0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30bbc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bbc8:
    // 0x30bbc8: 0x1040ff87  beqz        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x30BBC8u;
    {
        const bool branch_taken_0x30bbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBC8u;
        // 0x30bbcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbc8) {
            ctx->pc = 0x30B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b9e8;
        }
    }
    ctx->pc = 0x30BBD0u;
    // 0x30bbd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bbd4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x30BBD4u;
    {
        const bool branch_taken_0x30bbd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBD4u;
        // 0x30bbd8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbd4) {
            ctx->pc = 0x30BC10u;
            goto label_30bc10;
        }
    }
    ctx->pc = 0x30BBDCu;
    // 0x30bbdc: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x30bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x30bbe0: 0xc092782  jal         func_249E08
    ctx->pc = 0x30BBE0u;
    SET_GPR_U32(ctx, 31, 0x30BBE8u);
    ctx->pc = 0x30BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBE0u;
    // 0x30bbe4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30BBE0u, 0x30BBE8u)) {
        return;
    }
    ctx->pc = 0x30BBE8u;
label_30bbe8:
    // 0x30bbe8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30BBE8u;
    {
        const bool branch_taken_0x30bbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBE8u;
        // 0x30bbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbe8) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BBF0u;
    // 0x30bbf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bbf4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BBF4u;
    {
        const bool branch_taken_0x30bbf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBF4u;
        // 0x30bbf8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbf4) {
            ctx->pc = 0x30BC10u;
            goto label_30bc10;
        }
    }
    ctx->pc = 0x30BBFCu;
    // 0x30bbfc: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30BBFCu;
    SET_GPR_U32(ctx, 31, 0x30BC04u);
    ctx->pc = 0x30BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBFCu;
    // 0x30bc00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30BBFCu, 0x30BC04u)) {
        return;
    }
    ctx->pc = 0x30BC04u;
label_30bc04:
    // 0x30bc04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BC04u;
    {
        const bool branch_taken_0x30bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC04u;
        // 0x30bc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc04) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BC0Cu;
    // 0x30bc0c: 0x0  nop
    ctx->pc = 0x30bc0cu;
    // NOP
label_30bc10:
    // 0x30bc10: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BC10u;
    {
        const bool branch_taken_0x30bc10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC10u;
        // 0x30bc14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc10) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BC18u;
    // 0x30bc18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30bc1c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x30bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x30bc20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30bc24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bc28:
    // 0x30bc28: 0x1040ff6f  beqz        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x30BC28u;
    {
        const bool branch_taken_0x30bc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC28u;
        // 0x30bc2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc28) {
            ctx->pc = 0x30B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b9e8;
        }
    }
    ctx->pc = 0x30BC30u;
    // 0x30bc30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bc34: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x30BC34u;
    {
        const bool branch_taken_0x30bc34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC34u;
        // 0x30bc38: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc34) {
            ctx->pc = 0x30BC70u;
            goto label_30bc70;
        }
    }
    ctx->pc = 0x30BC3Cu;
    // 0x30bc3c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x30bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x30bc40: 0xc092782  jal         func_249E08
    ctx->pc = 0x30BC40u;
    SET_GPR_U32(ctx, 31, 0x30BC48u);
    ctx->pc = 0x30BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BC40u;
    // 0x30bc44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30BC40u, 0x30BC48u)) {
        return;
    }
    ctx->pc = 0x30BC48u;
label_30bc48:
    // 0x30bc48: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30BC48u;
    {
        const bool branch_taken_0x30bc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC48u;
        // 0x30bc4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc48) {
            ctx->pc = 0x30BC88u;
            goto label_30bc88;
        }
    }
    ctx->pc = 0x30BC50u;
    // 0x30bc50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30bc54: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BC54u;
    {
        const bool branch_taken_0x30bc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC54u;
        // 0x30bc58: 0x27a50032  addiu       $a1, $sp, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc54) {
            ctx->pc = 0x30BC70u;
            goto label_30bc70;
        }
    }
    ctx->pc = 0x30BC5Cu;
    // 0x30bc5c: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30BC5Cu;
    SET_GPR_U32(ctx, 31, 0x30BC64u);
    ctx->pc = 0x30BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BC5Cu;
    // 0x30bc60: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30BC5Cu, 0x30BC64u)) {
        return;
    }
    ctx->pc = 0x30BC64u;
label_30bc64:
    // 0x30bc64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BC64u;
    {
        const bool branch_taken_0x30bc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC64u;
        // 0x30bc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc64) {
            ctx->pc = 0x30BC88u;
            goto label_30bc88;
        }
    }
    ctx->pc = 0x30BC6Cu;
    // 0x30bc6c: 0x0  nop
    ctx->pc = 0x30bc6cu;
    // NOP
label_30bc70:
    // 0x30bc70: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BC70u;
    {
        const bool branch_taken_0x30bc70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC70u;
        // 0x30bc74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc70) {
            ctx->pc = 0x30BC88u;
            goto label_30bc88;
        }
    }
    ctx->pc = 0x30BC78u;
    // 0x30bc78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30bc7c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x30bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x30bc80: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30bc84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bc88:
    // 0x30bc88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BC88u;
    {
        const bool branch_taken_0x30bc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC88u;
        // 0x30bc8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc88) {
            ctx->pc = 0x30BCA8u;
            goto label_30bca8;
        }
    }
    ctx->pc = 0x30BC90u;
    // 0x30bc90: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BC90u;
    {
        const bool branch_taken_0x30bc90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC90u;
        // 0x30bc94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc90) {
            ctx->pc = 0x30BCA8u;
            goto label_30bca8;
        }
    }
    ctx->pc = 0x30BC98u;
    // 0x30bc98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30bc9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30bca0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30bca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bca8:
    // 0x30bca8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30bca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30bcac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30bcacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30bcb0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30bcb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30bcb4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30bcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30bcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x30BCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCB8u;
        // 0x30bcbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BCC0u;
}
