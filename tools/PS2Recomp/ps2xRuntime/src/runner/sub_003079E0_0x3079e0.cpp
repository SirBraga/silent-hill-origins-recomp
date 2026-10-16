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

// Function: sub_003079E0
// Address: 0x3079e0 - 0x307e88
void sub_003079E0_0x3079e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003079E0_0x3079e0");
#endif

    switch (ctx->pc) {
        case 0x307b08u: goto label_307b08;
        case 0x307b50u: goto label_307b50;
        case 0x307c48u: goto label_307c48;
        case 0x307c90u: goto label_307c90;
        case 0x307d60u: goto label_307d60;
        case 0x307da8u: goto label_307da8;
        default: break;
    }

    ctx->pc = 0x3079e0u;

    // 0x3079e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3079e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3079e4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x3079e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3079e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3079ec: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3079ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3079f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3079f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3079f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3079f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3079f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3079f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3079fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3079fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x307a00: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x307a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x307a04: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x307a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x307a08: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x307a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x307a0c: 0x8dc20030  lw          $v0, 0x30($t6)
    ctx->pc = 0x307a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x307a10: 0x8dd60008  lw          $s6, 0x8($t6)
    ctx->pc = 0x307a10u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x307a14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x307a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307a18: 0x246f0018  addiu       $t7, $v1, 0x18
    ctx->pc = 0x307a18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x307a1c: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x307a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x307a20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x307a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307a24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x307a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x307a28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x307A28u;
    {
        const bool branch_taken_0x307a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A28u;
        // 0x307a2c: 0x8df7000c  lw          $s7, 0xC($t7) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a28) {
            ctx->pc = 0x307A58u;
            goto label_307a58;
        }
    }
    ctx->pc = 0x307A30u;
    // 0x307a30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x307a34: 0x24430b08  addiu       $v1, $v0, 0xB08
    ctx->pc = 0x307a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2824));
    // 0x307a38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x307a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a3c: 0x2475000f  addiu       $s5, $v1, 0xF
    ctx->pc = 0x307a3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x307a40: 0x90700007  lbu         $s0, 0x7($v1)
    ctx->pc = 0x307a40u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x6B0B0Fu));
    // 0x307a44: 0x90740008  lbu         $s4, 0x8($v1)
    ctx->pc = 0x307a44u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)FAST_READ8(0x6B0B10u));
    // 0x307a48: 0x24720009  addiu       $s2, $v1, 0x9
    ctx->pc = 0x307a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x307a4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x307A4Cu;
    {
        const bool branch_taken_0x307a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A4Cu;
        // 0x307a50: 0x2471000c  addiu       $s1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a4c) {
            ctx->pc = 0x307A78u;
            goto label_307a78;
        }
    }
    ctx->pc = 0x307A54u;
    // 0x307a54: 0x0  nop
    ctx->pc = 0x307a54u;
    // NOP
label_307a58:
    // 0x307a58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x307a5c: 0x24430b08  addiu       $v1, $v0, 0xB08
    ctx->pc = 0x307a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2824));
    // 0x307a60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x307a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a64: 0x90700002  lbu         $s0, 0x2($v1)
    ctx->pc = 0x307a64u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x6B0B0Au));
    // 0x307a68: 0x24750006  addiu       $s5, $v1, 0x6
    ctx->pc = 0x307a68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x307a6c: 0x90740003  lbu         $s4, 0x3($v1)
    ctx->pc = 0x307a6cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)FAST_READ8(0x6B0B0Bu));
    // 0x307a70: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x307a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x307a74: 0x24710005  addiu       $s1, $v1, 0x5
    ctx->pc = 0x307a74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_307a78:
    // 0x307a78: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x307a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x307a7c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x307a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x307a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307a84: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x307a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x307a88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307A88u;
    {
        const bool branch_taken_0x307a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A88u;
        // 0x307a8c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a88) {
            ctx->pc = 0x307A98u;
            goto label_307a98;
        }
    }
    ctx->pc = 0x307A90u;
    // 0x307a90: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x307a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x307a94: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x307a94u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_307a98:
    // 0x307a98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x307a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307a9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x307a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x307aa0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307AA0u;
    {
        const bool branch_taken_0x307aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AA0u;
        // 0x307aa4: 0x24b80b08  addiu       $t8, $a1, 0xB08 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307aa0) {
            ctx->pc = 0x307ABCu;
            goto label_307abc;
        }
    }
    ctx->pc = 0x307AA8u;
    // 0x307aa8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x307aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307aac: 0x8dc3002c  lw          $v1, 0x2C($t6)
    ctx->pc = 0x307aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 44)));
    // 0x307ab0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x307ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ab4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ab8: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x307ab8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_307abc:
    // 0x307abc: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x307abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
    // 0x307ac0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x307ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x307ac4: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x307AC4u;
    {
        const bool branch_taken_0x307ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ac4) {
            ctx->pc = 0x307AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307AC4u;
            // 0x307ac8: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307C04u;
            goto label_307c04;
        }
    }
    ctx->pc = 0x307ACCu;
    // 0x307acc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x307accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x307ad0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x307ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x307ad4: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x307AD4u;
    {
        const bool branch_taken_0x307ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ad4) {
            ctx->pc = 0x307AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307AD4u;
            // 0x307ad8: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307C04u;
            goto label_307c04;
        }
    }
    ctx->pc = 0x307ADCu;
    // 0x307adc: 0x8de20098  lw          $v0, 0x98($t7)
    ctx->pc = 0x307adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 152)));
    // 0x307ae0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x307ae0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ae4: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x307ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x307ae8: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x307ae8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307aec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307af0: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x307af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x307af4: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x307af4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307af8: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x307af8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307afc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x307afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x307b00: 0x1960003f  blez        $t3, . + 4 + (0x3F << 2)
    ctx->pc = 0x307B00u;
    {
        const bool branch_taken_0x307b00 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x307B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B00u;
        // 0x307b04: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b00) {
            ctx->pc = 0x307C00u;
            goto label_307c00;
        }
    }
    ctx->pc = 0x307B08u;
label_307b08:
    // 0x307b08: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x307b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x307b0c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x307b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x307b10: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x307B10u;
    {
        const bool branch_taken_0x307b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b10) {
            ctx->pc = 0x307B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B10u;
            // 0x307b14: 0x8de90090  lw          $t1, 0x90($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B34u;
            goto label_307b34;
        }
    }
    ctx->pc = 0x307B18u;
    // 0x307b18: 0x85e200a4  lh          $v0, 0xA4($t7)
    ctx->pc = 0x307b18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 164)));
    // 0x307b1c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x307b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x307b20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307b28: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x307b28u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x307b2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307B2Cu;
    {
        const bool branch_taken_0x307b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B2Cu;
        // 0x307b30: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b2c) {
            ctx->pc = 0x307B3Cu;
            goto label_307b3c;
        }
    }
    ctx->pc = 0x307B34u;
label_307b34:
    // 0x307b34: 0x1331023  subu        $v0, $t1, $s3
    ctx->pc = 0x307b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x307b38: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x307b38u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_307b3c:
    // 0x307b3c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x307b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b40: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x307B40u;
    {
        const bool branch_taken_0x307b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B40u;
        // 0x307b44: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b40) {
            ctx->pc = 0x307BE8u;
            goto label_307be8;
        }
    }
    ctx->pc = 0x307B48u;
    // 0x307b48: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x307b48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x307b4c: 0x0  nop
    ctx->pc = 0x307b4cu;
    // NOP
label_307b50:
    // 0x307b50: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x307b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x307b54: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x307b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x307b58: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x307b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307b5c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x307b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x307b60: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x307b60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307b64: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x307b64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x307b68: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x307b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x307b6c: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x307b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x307b70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x307b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x307b74: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x307b74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x307b78: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x307b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x307b7c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x307b7cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x307b80: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x307b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307b84: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x307b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b88: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x307b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307b8c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x307b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x307b90: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x307b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x307b94: 0x600013  mtlo        $v1
    ctx->pc = 0x307b94u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x307b98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x307b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x307b9c: 0x70591000  madd        $v0, $v0, $t9
    ctx->pc = 0x307b9cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x307ba0: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x307ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x307ba4: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x307ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x307ba8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x307ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x307bac: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x307bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x307bb0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x307bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x307bb4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x307bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x307bb8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x307bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307bbc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x307bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x307bc0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x307bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x307bc4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x307bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307bc8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x307bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x307bcc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x307bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x307bd0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x307bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307bd4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x307bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x307bd8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x307bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x307bdc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x307bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x307be0: 0x14a0ffdb  bnez        $a1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x307BE0u;
    {
        const bool branch_taken_0x307be0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x307BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BE0u;
        // 0x307be4: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307be0) {
            ctx->pc = 0x307B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307b50;
        }
    }
    ctx->pc = 0x307BE8u;
label_307be8:
    // 0x307be8: 0x85e200a0  lh          $v0, 0xA0($t7)
    ctx->pc = 0x307be8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 160)));
    // 0x307bec: 0x1535023  subu        $t2, $t2, $s3
    ctx->pc = 0x307becu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x307bf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307bf4: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x307bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x307bf8: 0x1d60ffc3  bgtz        $t3, . + 4 + (-0x3D << 2)
    ctx->pc = 0x307BF8u;
    {
        const bool branch_taken_0x307bf8 = (GPR_S64(ctx, 11) > 0);
        ctx->pc = 0x307BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BF8u;
        // 0x307bfc: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bf8) {
            ctx->pc = 0x307B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307b08;
        }
    }
    ctx->pc = 0x307C00u;
label_307c00:
    // 0x307c00: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x307c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
label_307c04:
    // 0x307c04: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x307c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x307c08: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x307C08u;
    {
        const bool branch_taken_0x307c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c08) {
            ctx->pc = 0x307C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C08u;
            // 0x307c0c: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D1Cu;
            goto label_307d1c;
        }
    }
    ctx->pc = 0x307C10u;
    // 0x307c10: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x307c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x307c14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307c18: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x307C18u;
    {
        const bool branch_taken_0x307c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c18) {
            ctx->pc = 0x307C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C18u;
            // 0x307c1c: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D1Cu;
            goto label_307d1c;
        }
    }
    ctx->pc = 0x307C20u;
    // 0x307c20: 0x8de200c8  lw          $v0, 0xC8($t7)
    ctx->pc = 0x307c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 200)));
    // 0x307c24: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x307c24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c28: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x307c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x307c2c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x307c2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307c34: 0x8ede000c  lw          $fp, 0xC($s6)
    ctx->pc = 0x307c34u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x307c38: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x307c38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307c3c: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x307c3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c40: 0x19600035  blez        $t3, . + 4 + (0x35 << 2)
    ctx->pc = 0x307C40u;
    {
        const bool branch_taken_0x307c40 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x307C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C40u;
        // 0x307c44: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c40) {
            ctx->pc = 0x307D18u;
            goto label_307d18;
        }
    }
    ctx->pc = 0x307C48u;
label_307c48:
    // 0x307c48: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x307c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x307c4c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x307c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x307c50: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x307C50u;
    {
        const bool branch_taken_0x307c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307c50) {
            ctx->pc = 0x307C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C50u;
            // 0x307c54: 0x8de900c0  lw          $t1, 0xC0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307C74u;
            goto label_307c74;
        }
    }
    ctx->pc = 0x307C58u;
    // 0x307c58: 0x85e200d4  lh          $v0, 0xD4($t7)
    ctx->pc = 0x307c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 212)));
    // 0x307c5c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x307c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c60: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x307c60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307c68: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x307c68u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x307c6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307C6Cu;
    {
        const bool branch_taken_0x307c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C6Cu;
        // 0x307c70: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c6c) {
            ctx->pc = 0x307C7Cu;
            goto label_307c7c;
        }
    }
    ctx->pc = 0x307C74u;
label_307c74:
    // 0x307c74: 0x1331023  subu        $v0, $t1, $s3
    ctx->pc = 0x307c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x307c78: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x307c78u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_307c7c:
    // 0x307c7c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x307c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c80: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x307C80u;
    {
        const bool branch_taken_0x307c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C80u;
        // 0x307c84: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c80) {
            ctx->pc = 0x307D00u;
            goto label_307d00;
        }
    }
    ctx->pc = 0x307C88u;
    // 0x307c88: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x307c88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x307c8c: 0x0  nop
    ctx->pc = 0x307c8cu;
    // NOP
label_307c90:
    // 0x307c90: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x307c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x307c94: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x307c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x307c98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x307c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307c9c: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x307c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x307ca0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x307ca0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307ca4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x307ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x307ca8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x307ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x307cac: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x307cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x307cb0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x307cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x307cb4: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x307cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x307cb8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x307cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x307cbc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x307cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cc0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x307cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307cc4: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x307cc4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x307cc8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x307cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x307ccc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x307cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x307cd0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x307cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x307cd4: 0x591818  mult        $v1, $v0, $t9
    ctx->pc = 0x307cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x307cd8: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x307cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x307cdc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x307cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307ce0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x307ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x307ce4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x307ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x307ce8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x307ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307cec: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x307cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x307cf0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x307cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x307cf4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x307cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x307cf8: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x307CF8u;
    {
        const bool branch_taken_0x307cf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x307CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CF8u;
        // 0x307cfc: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307cf8) {
            ctx->pc = 0x307C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307c90;
        }
    }
    ctx->pc = 0x307D00u;
label_307d00:
    // 0x307d00: 0x85e200d0  lh          $v0, 0xD0($t7)
    ctx->pc = 0x307d00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 208)));
    // 0x307d04: 0x1535023  subu        $t2, $t2, $s3
    ctx->pc = 0x307d04u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x307d08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307d0c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x307d0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x307d10: 0x1d60ffcd  bgtz        $t3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x307D10u;
    {
        const bool branch_taken_0x307d10 = (GPR_S64(ctx, 11) > 0);
        ctx->pc = 0x307D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D10u;
        // 0x307d14: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d10) {
            ctx->pc = 0x307C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307c48;
        }
    }
    ctx->pc = 0x307D18u;
label_307d18:
    // 0x307d18: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x307d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
label_307d1c:
    // 0x307d1c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x307d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x307d20: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x307D20u;
    {
        const bool branch_taken_0x307d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d20) {
            ctx->pc = 0x307D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D20u;
            // 0x307d24: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E5Cu;
            goto label_307e5c;
        }
    }
    ctx->pc = 0x307D28u;
    // 0x307d28: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x307d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x307d2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x307d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x307d30: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x307D30u;
    {
        const bool branch_taken_0x307d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d30) {
            ctx->pc = 0x307D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D30u;
            // 0x307d34: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E5Cu;
            goto label_307e5c;
        }
    }
    ctx->pc = 0x307D38u;
    // 0x307d38: 0x8de200f8  lw          $v0, 0xF8($t7)
    ctx->pc = 0x307d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 248)));
    // 0x307d3c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x307d3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d40: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x307d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x307d44: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x307d44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307d4c: 0x8ed4000c  lw          $s4, 0xC($s6)
    ctx->pc = 0x307d4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x307d50: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x307d50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307d54: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x307d54u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d58: 0x1960003f  blez        $t3, . + 4 + (0x3F << 2)
    ctx->pc = 0x307D58u;
    {
        const bool branch_taken_0x307d58 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x307D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D58u;
        // 0x307d5c: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d58) {
            ctx->pc = 0x307E58u;
            goto label_307e58;
        }
    }
    ctx->pc = 0x307D60u;
label_307d60:
    // 0x307d60: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x307d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x307d64: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x307d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x307d68: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x307D68u;
    {
        const bool branch_taken_0x307d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d68) {
            ctx->pc = 0x307D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D68u;
            // 0x307d6c: 0x8de900f0  lw          $t1, 0xF0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D8Cu;
            goto label_307d8c;
        }
    }
    ctx->pc = 0x307D70u;
    // 0x307d70: 0x85e20104  lh          $v0, 0x104($t7)
    ctx->pc = 0x307d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 260)));
    // 0x307d74: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x307d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x307d78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307d80: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x307d80u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x307d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307D84u;
    {
        const bool branch_taken_0x307d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D84u;
        // 0x307d88: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d84) {
            ctx->pc = 0x307D94u;
            goto label_307d94;
        }
    }
    ctx->pc = 0x307D8Cu;
label_307d8c:
    // 0x307d8c: 0x1331023  subu        $v0, $t1, $s3
    ctx->pc = 0x307d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x307d90: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x307d90u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_307d94:
    // 0x307d94: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x307d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d98: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x307D98u;
    {
        const bool branch_taken_0x307d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D98u;
        // 0x307d9c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d98) {
            ctx->pc = 0x307E40u;
            goto label_307e40;
        }
    }
    ctx->pc = 0x307DA0u;
    // 0x307da0: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x307da0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x307da4: 0x0  nop
    ctx->pc = 0x307da4u;
    // NOP
label_307da8:
    // 0x307da8: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x307da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x307dac: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x307dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x307db0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x307db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307db4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x307db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x307db8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x307db8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307dbc: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x307dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x307dc0: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x307dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x307dc4: 0x2ad4021  addu        $t0, $s5, $t5
    ctx->pc = 0x307dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x307dc8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x307dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x307dcc: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x307dd0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x307dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x307dd4: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x307dd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x307dd8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x307dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307ddc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x307ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307de0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x307de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x307de4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x307de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x307de8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x307de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x307dec: 0x591818  mult        $v1, $v0, $t9
    ctx->pc = 0x307decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x307df0: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x307df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x307df4: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x307df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x307df8: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x307df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x307dfc: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x307dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x307e00: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x307e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x307e04: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x307e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x307e08: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x307e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307e0c: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x307e0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x307e10: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x307e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x307e14: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x307e14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x307e18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x307e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x307e1c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x307e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x307e20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x307e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x307e24: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x307e24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x307e28: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x307e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x307e2c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x307e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x307e30: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x307e30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x307e34: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x307e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x307e38: 0x14e0ffdb  bnez        $a3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x307E38u;
    {
        const bool branch_taken_0x307e38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x307E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E38u;
        // 0x307e3c: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e38) {
            ctx->pc = 0x307DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307da8;
        }
    }
    ctx->pc = 0x307E40u;
label_307e40:
    // 0x307e40: 0x85e20100  lh          $v0, 0x100($t7)
    ctx->pc = 0x307e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 256)));
    // 0x307e44: 0x1535023  subu        $t2, $t2, $s3
    ctx->pc = 0x307e44u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x307e48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x307e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307e4c: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x307e4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x307e50: 0x1d60ffc3  bgtz        $t3, . + 4 + (-0x3D << 2)
    ctx->pc = 0x307E50u;
    {
        const bool branch_taken_0x307e50 = (GPR_S64(ctx, 11) > 0);
        ctx->pc = 0x307E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E50u;
        // 0x307e54: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e50) {
            ctx->pc = 0x307D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307d60;
        }
    }
    ctx->pc = 0x307E58u;
label_307e58:
    // 0x307e58: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x307e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_307e5c:
    // 0x307e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307e60: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x307e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x307e64: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x307e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x307e68: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x307e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x307e6c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x307e6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x307e70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x307e70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x307e74: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x307e74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307e78: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x307e78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307e7c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x307e7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307e80: 0x3e00008  jr          $ra
    ctx->pc = 0x307E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E80u;
        // 0x307e84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307E88u;
}
