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

// Function: sub_001E89C8
// Address: 0x1e89c8 - 0x1e8c18
void sub_001E89C8_0x1e89c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E89C8_0x1e89c8");
#endif

    switch (ctx->pc) {
        case 0x1e8a6cu: goto label_1e8a6c;
        case 0x1e8ab8u: goto label_1e8ab8;
        default: break;
    }

    ctx->pc = 0x1e89c8u;

    // 0x1e89c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e89c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e89cc: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e89ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e89d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e89d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e89d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e89d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e89d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e89d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e89dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e89dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e89e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e89e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e89e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89e8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1e89e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e89ec: 0xc4e0012c  lwc1        $f0, 0x12C($a3)
    ctx->pc = 0x1e89ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e89f0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1e89f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e89f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e89f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e89f8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1e89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e89fc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e8a00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8a04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8a04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8a08: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e8a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e8a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8a10: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8A10u;
    {
        const bool branch_taken_0x1e8a10 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1E8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A10u;
        // 0x1e8a14: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a10) {
            ctx->pc = 0x1E8A2Cu;
            goto label_1e8a2c;
        }
    }
    ctx->pc = 0x1E8A18u;
    // 0x1e8a18: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1e8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e8a1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e8a20: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1e8a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e8a24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8A24u;
    {
        const bool branch_taken_0x1e8a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a24) {
            ctx->pc = 0x1E8A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8A24u;
            // 0x1e8a28: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8A38u;
            goto label_1e8a38;
        }
    }
    ctx->pc = 0x1E8A2Cu;
label_1e8a2c:
    // 0x1e8a2c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1e8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e8a30: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e8a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e8a34: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e8a38:
    // 0x1e8a38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e8a3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e8a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e8a40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8a44: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1e8a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8a4c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1e8a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1e8a50: 0x34218a72  ori         $at, $at, 0x8A72
    ctx->pc = 0x1e8a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35442);
    // 0x1e8a54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8a58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8a5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e8a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8a60: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x1e8a60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e8a64: 0xc07b016  jal         func_1EC058
    ctx->pc = 0x1E8A64u;
    SET_GPR_U32(ctx, 31, 0x1E8A6Cu);
    ctx->pc = 0x1E8A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A64u;
    // 0x1e8a68: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC058u, 0x1E8A64u, 0x1E8A6Cu)) {
        return;
    }
    ctx->pc = 0x1E8A6Cu;
label_1e8a6c:
    // 0x1e8a6c: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x1E8A6Cu;
    {
        const bool branch_taken_0x1e8a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a6c) {
            ctx->pc = 0x1E8A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8A6Cu;
            // 0x1e8a70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8C04u;
            goto label_1e8c04;
        }
    }
    ctx->pc = 0x1E8A74u;
    // 0x1e8a74: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e8a78: 0x18800061  blez        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1E8A78u;
    {
        const bool branch_taken_0x1e8a78 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1E8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A78u;
        // 0x1e8a7c: 0x8e0a0018  lw          $t2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a78) {
            ctx->pc = 0x1E8C00u;
            goto label_1e8c00;
        }
    }
    ctx->pc = 0x1E8A80u;
    // 0x1e8a80: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e8a84: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e8a88: 0x3c014222  lui         $at, 0x4222
    ctx->pc = 0x1e8a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16930 << 16));
    // 0x1e8a8c: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x1e8a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x1e8a90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e8a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e8a94: 0x244ba230  addiu       $t3, $v0, -0x5DD0
    ctx->pc = 0x1e8a94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
    // 0x1e8a98: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e8a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e8a9c: 0x34210e56  ori         $at, $at, 0xE56
    ctx->pc = 0x1e8a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3670);
    // 0x1e8aa0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e8aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e8aa4: 0x246d9e30  addiu       $t5, $v1, -0x61D0
    ctx->pc = 0x1e8aa4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942256));
    // 0x1e8aa8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1e8aa8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8aac: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1e8aacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1e8ab0: 0x3c0f0034  lui         $t7, 0x34
    ctx->pc = 0x1e8ab0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)52 << 16));
    // 0x1e8ab4: 0x3c0e0034  lui         $t6, 0x34
    ctx->pc = 0x1e8ab4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)52 << 16));
label_1e8ab8:
    // 0x1e8ab8: 0x8e02a630  lw          $v0, -0x59D0($s0)
    ctx->pc = 0x1e8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944304)));
    // 0x1e8abc: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1e8abcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1e8ac0: 0x8de3a634  lw          $v1, -0x59CC($t7)
    ctx->pc = 0x1e8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294944308)));
    // 0x1e8ac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8ac8: 0x8dc4a638  lw          $a0, -0x59C8($t6)
    ctx->pc = 0x1e8ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294944312)));
    // 0x1e8acc: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1e8accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1e8ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e8ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e8ad4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e8ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e8ad8: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x1e8ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8adc: 0x24690009  addiu       $t1, $v1, 0x9
    ctx->pc = 0x1e8adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1e8ae0: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1e8ae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1e8ae4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x1e8ae4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1e8ae8: 0x2484001b  addiu       $a0, $a0, 0x1B
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27));
    // 0x1e8aec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1e8aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1e8af0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1e8af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e8af4: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x1e8af4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1e8af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8afc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8b00: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1e8b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1e8b04: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1e8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1e8b08: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1e8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1e8b0c: 0x2487001b  addiu       $a3, $a0, 0x1B
    ctx->pc = 0x1e8b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 27));
    // 0x1e8b10: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1e8b14: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e8b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8b18: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1e8b18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e8b1c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e8b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8b20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e8b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e8b24: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1e8b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8b28: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8b2c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1e8b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8b30: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1e8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1e8b34: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1e8b38: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e8b38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e8b3c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e8b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e8b40: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1e8b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8b44: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e8b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8b48: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e8b48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e8b4c: 0xae08a630  sw          $t0, -0x59D0($s0)
    ctx->pc = 0x1e8b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944304), GPR_U32(ctx, 8));
    // 0x1e8b50: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e8b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e8b54: 0xade9a634  sw          $t1, -0x59CC($t7)
    ctx->pc = 0x1e8b54u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294944308), GPR_U32(ctx, 9));
    // 0x1e8b58: 0xadc7a638  sw          $a3, -0x59C8($t6)
    ctx->pc = 0x1e8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294944312), GPR_U32(ctx, 7));
    // 0x1e8b5c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1e8b5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1e8b60: 0x6a220037  ldl         $v0, 0x37($s1)
    ctx->pc = 0x1e8b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1e8b64: 0x6e220030  ldr         $v0, 0x30($s1)
    ctx->pc = 0x1e8b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1e8b68: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1e8b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1e8b6c: 0xb1420007  sdl         $v0, 0x7($t2)
    ctx->pc = 0x1e8b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e8b70: 0xb5420000  sdr         $v0, 0x0($t2)
    ctx->pc = 0x1e8b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e8b74: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x1e8b74u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x1e8b78: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e8b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e8b7c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x1e8b7cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x1e8b80: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e8b80u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e8b84: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1e8b84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1e8b88: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e8b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e8b8c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8b90: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e8b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e8b94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8b94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8b98: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e8b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e8b9c: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x1e8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1e8ba0: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1e8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1e8ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e8ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e8ba8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e8ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e8bac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1e8bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1e8bb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8bb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8bb8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e8bbc: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x1e8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1e8bc0: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1e8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1e8bc4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e8bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8bc8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e8bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8bcc: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x1e8bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1e8bd0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1e8bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8bd4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e8bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e8bd8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1e8bd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1e8bdc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e8bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8be0: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x1e8be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1e8be4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1e8be4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e8be8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1e8be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8bec: 0xe5410014  swc1        $f1, 0x14($t2)
    ctx->pc = 0x1e8becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x1e8bf0: 0xe5400010  swc1        $f0, 0x10($t2)
    ctx->pc = 0x1e8bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1e8bf4: 0xe5420018  swc1        $f2, 0x18($t2)
    ctx->pc = 0x1e8bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x1e8bf8: 0x1580ffaf  bnez        $t4, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1E8BF8u;
    {
        const bool branch_taken_0x1e8bf8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BF8u;
        // 0x1e8bfc: 0x8d4a003c  lw          $t2, 0x3C($t2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bf8) {
            ctx->pc = 0x1E8AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8ab8;
        }
    }
    ctx->pc = 0x1E8C00u;
label_1e8c00:
    // 0x1e8c00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e8c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8c04:
    // 0x1e8c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8c0c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1e8c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8c10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C10u;
        // 0x1e8c14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8C18u;
}
