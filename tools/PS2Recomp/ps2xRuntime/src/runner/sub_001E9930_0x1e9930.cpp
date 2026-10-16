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

// Function: sub_001E9930
// Address: 0x1e9930 - 0x1e9c68
void sub_001E9930_0x1e9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9930_0x1e9930");
#endif

    switch (ctx->pc) {
        case 0x1e99fcu: goto label_1e99fc;
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9af0u: goto label_1e9af0;
        case 0x1e9b00u: goto label_1e9b00;
        case 0x1e9b10u: goto label_1e9b10;
        default: break;
    }

    ctx->pc = 0x1e9930u;

    // 0x1e9930: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1e9930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1e9934: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e9934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e9938: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e993c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1e993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1e9940: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1e9940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1e9944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9948: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1e9948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1e994c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e994cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9950: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1e9950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1e9954: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1e9954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1e9958: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e9958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1e995c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e9960: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1e9960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1e9964: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1e9964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1e9968: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e996c: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1e996cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e9970: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1e9970u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e9974: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1e9974u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e9978: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e9978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e997c: 0xc680012c  lwc1        $f0, 0x12C($s4)
    ctx->pc = 0x1e997cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9980: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1e9980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e9984: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e9988: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e9988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e998c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1e998cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e9990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9994: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e9998: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e9998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e999c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e99a0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E99A0u;
    {
        const bool branch_taken_0x1e99a0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1E99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99A0u;
        // 0x1e99a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99a0) {
            ctx->pc = 0x1E99BCu;
            goto label_1e99bc;
        }
    }
    ctx->pc = 0x1E99A8u;
    // 0x1e99a8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e99ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e99acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e99b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1e99b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e99b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E99B4u;
    {
        const bool branch_taken_0x1e99b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99b4) {
            ctx->pc = 0x1E99B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E99B4u;
            // 0x1e99b8: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E99C8u;
            goto label_1e99c8;
        }
    }
    ctx->pc = 0x1E99BCu;
label_1e99bc:
    // 0x1e99bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e99c0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1e99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e99c4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1e99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1e99c8:
    // 0x1e99c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e99cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e99ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e99d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e99d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e99d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e99d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e99dc: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1e99dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1e99e0: 0x34218a72  ori         $at, $at, 0x8A72
    ctx->pc = 0x1e99e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35442);
    // 0x1e99e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e99e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e99e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e99ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e99ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e99f0: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x1e99f0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e99f4: 0xc07b016  jal         func_1EC058
    ctx->pc = 0x1E99F4u;
    SET_GPR_U32(ctx, 31, 0x1E99FCu);
    ctx->pc = 0x1E99F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99F4u;
    // 0x1e99f8: 0x4601b582  mul.s       $f22, $f22, $f1 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC058u, 0x1E99F4u, 0x1E99FCu)) {
        return;
    }
    ctx->pc = 0x1E99FCu;
label_1e99fc:
    // 0x1e99fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e99fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a00: 0x52a0008a  beql        $s5, $zero, . + 4 + (0x8A << 2)
    ctx->pc = 0x1E9A00u;
    {
        const bool branch_taken_0x1e9a00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a00) {
            ctx->pc = 0x1E9A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9A00u;
            // 0x1e9a04: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9C2Cu;
            goto label_1e9c2c;
        }
    }
    ctx->pc = 0x1E9A08u;
    // 0x1e9a08: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e9a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e9a0c: 0x18800086  blez        $a0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1E9A0Cu;
    {
        const bool branch_taken_0x1e9a0c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1E9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A0Cu;
        // 0x1e9a10: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a0c) {
            ctx->pc = 0x1E9C28u;
            goto label_1e9c28;
        }
    }
    ctx->pc = 0x1E9A14u;
    // 0x1e9a14: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e9a18: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e9a1c: 0x3c014222  lui         $at, 0x4222
    ctx->pc = 0x1e9a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16930 << 16));
    // 0x1e9a20: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x1e9a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x1e9a24: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1e9a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1e9a28: 0x2451a230  addiu       $s1, $v0, -0x5DD0
    ctx->pc = 0x1e9a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
    // 0x1e9a2c: 0x24739e30  addiu       $s3, $v1, -0x61D0
    ctx->pc = 0x1e9a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942256));
    // 0x1e9a30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e9a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a34: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x1e9a34u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x1e9a38: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1e9a38u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x1e9a3c: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x1e9a3cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
label_1e9a40:
    // 0x1e9a40: 0x8fc3a630  lw          $v1, -0x59D0($fp)
    ctx->pc = 0x1e9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294944304)));
    // 0x1e9a44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e9a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a48: 0x8ee2a634  lw          $v0, -0x59CC($s7)
    ctx->pc = 0x1e9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944308)));
    // 0x1e9a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e9a54: 0x8ec5a638  lw          $a1, -0x59C8($s6)
    ctx->pc = 0x1e9a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944312)));
    // 0x1e9a58: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1e9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1e9a5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e9a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e9a60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9a64: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x1e9a64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e9a68: 0x244b0009  addiu       $t3, $v0, 0x9
    ctx->pc = 0x1e9a68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1e9a6c: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x1e9a6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1e9a70: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1e9a70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1e9a74: 0x24a5001b  addiu       $a1, $a1, 0x1B
    ctx->pc = 0x1e9a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
    // 0x1e9a78: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x1e9a78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1e9a7c: 0xb4080  sll         $t0, $t3, 2
    ctx->pc = 0x1e9a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1e9a80: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e9a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e9a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9a88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9a8c: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x1e9a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1e9a90: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x1e9a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x1e9a94: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1e9a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e9a98: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e9a9c: 0x24a9001b  addiu       $t1, $a1, 0x1B
    ctx->pc = 0x1e9a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
    // 0x1e9aa0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1e9aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9aa4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x1e9aa4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1e9aa8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e9aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9aac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e9aacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9ab0: 0xc4f50000  lwc1        $f21, 0x0($a3)
    ctx->pc = 0x1e9ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e9ab4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1e9ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1e9ab8: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x1e9ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9abc: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1e9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1e9ac0: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1e9ac0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1e9ac4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1e9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e9ac8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e9ac8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e9acc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1e9accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ad0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e9ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9ad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ad8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e9ad8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e9adc: 0xafcaa630  sw          $t2, -0x59D0($fp)
    ctx->pc = 0x1e9adcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294944304), GPR_U32(ctx, 10));
    // 0x1e9ae0: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1e9ae0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1e9ae4: 0xaeeba634  sw          $t3, -0x59CC($s7)
    ctx->pc = 0x1e9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294944308), GPR_U32(ctx, 11));
    // 0x1e9ae8: 0xc07a5da  jal         func_1E9768
    ctx->pc = 0x1E9AE8u;
    SET_GPR_U32(ctx, 31, 0x1E9AF0u);
    ctx->pc = 0x1E9AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AE8u;
    // 0x1e9aec: 0xaec9a638  sw          $t1, -0x59C8($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294944312), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9768u, 0x1E9AE8u, 0x1E9AF0u)) {
        return;
    }
    ctx->pc = 0x1E9AF0u;
label_1e9af0:
    // 0x1e9af0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e9af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9af4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9af8: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x1E9AF8u;
    SET_GPR_U32(ctx, 31, 0x1E9B00u);
    ctx->pc = 0x1E9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AF8u;
    // 0x1e9afc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1E9AF8u, 0x1E9B00u)) {
        return;
    }
    ctx->pc = 0x1E9B00u;
label_1e9b00:
    // 0x1e9b00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e9b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9b08: 0xc079f2e  jal         func_1E7CB8
    ctx->pc = 0x1E9B08u;
    SET_GPR_U32(ctx, 31, 0x1E9B10u);
    ctx->pc = 0x1E9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B08u;
    // 0x1e9b0c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7CB8u, 0x1E9B08u, 0x1E9B10u)) {
        return;
    }
    ctx->pc = 0x1E9B10u;
label_1e9b10:
    // 0x1e9b10: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x1e9b10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x1e9b14: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1e9b14u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x1e9b18: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x1e9b18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x1e9b1c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9b1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e9b20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e9b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e9b24: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x1e9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1e9b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9b2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e9b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e9b30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9b34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9b38: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e9b3c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1e9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e9b40: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x1e9b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e9b44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e9b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9b48: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e9b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e9b4c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1e9b4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e9b50: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x1e9b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1e9b54: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e9b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e9b58: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1e9b58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e9b5c: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x1e9b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1e9b60: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e9b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e9b64: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1e9b64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e9b68: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x1e9b68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1e9b6c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e9b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e9b70: 0x34210e56  ori         $at, $at, 0xE56
    ctx->pc = 0x1e9b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3670);
    // 0x1e9b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9b78: 0x0  nop
    ctx->pc = 0x1e9b78u;
    // NOP
    // 0x1e9b7c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1e9b7cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1e9b80: 0x4600ad45  abs.s       $f21, $f21
    ctx->pc = 0x1e9b80u;
    ctx->f[21] = FPU_ABS_S(ctx->f[21]);
    // 0x1e9b84: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x1e9b84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x1e9b88: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9b88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e9b8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e9b8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e9b90: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1e9b94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9b98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e9b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e9b9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9ba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9ba4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e9ba8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1e9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e9bac: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x1e9bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e9bb0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e9bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9bb4: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1e9bb4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1e9bb8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1e9bb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1e9bbc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e9bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9bc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e9bc4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e9bc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e9bc8: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x1e9bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1e9bcc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e9bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9bd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e9bd4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e9bd4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e9bd8: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x1e9bd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1e9bdc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e9bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9be0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e9be4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e9be4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e9be8: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x1e9be8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1e9bec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e9becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9bf0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e9bf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e9bf4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e9bf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e9bf8: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x1e9bf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1e9bfc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e9bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9c00: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e9c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e9c04: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e9c04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e9c08: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x1e9c08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1e9c0c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e9c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9c10: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e9c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e9c14: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e9c14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e9c18: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x1e9c18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1e9c1c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e9c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e9c20: 0x1640ff87  bnez        $s2, . + 4 + (-0x79 << 2)
    ctx->pc = 0x1E9C20u;
    {
        const bool branch_taken_0x1e9c20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C20u;
        // 0x1e9c24: 0x8e10003c  lw          $s0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c20) {
            ctx->pc = 0x1E9A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9a40;
        }
    }
    ctx->pc = 0x1E9C28u;
label_1e9c28:
    // 0x1e9c28: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1e9c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e9c2c:
    // 0x1e9c2c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1e9c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e9c30: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1e9c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e9c34: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1e9c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9c38: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1e9c38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9c3c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e9c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9c40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e9c40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9c44: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1e9c44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9c48: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1e9c48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9c4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9c50: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1e9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e9c54: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1e9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e9c58: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1e9c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e9c5c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e9c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C60u;
        // 0x1e9c64: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9C68u;
}
