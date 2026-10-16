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

// Function: sub_002419D0
// Address: 0x2419d0 - 0x241e30
void sub_002419D0_0x2419d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002419D0_0x2419d0");
#endif

    switch (ctx->pc) {
        case 0x241a50u: goto label_241a50;
        case 0x241aa0u: goto label_241aa0;
        case 0x241b20u: goto label_241b20;
        case 0x241ba8u: goto label_241ba8;
        case 0x241c10u: goto label_241c10;
        case 0x241c50u: goto label_241c50;
        case 0x241ca0u: goto label_241ca0;
        case 0x241d18u: goto label_241d18;
        case 0x241d98u: goto label_241d98;
        default: break;
    }

    ctx->pc = 0x2419d0u;

    // 0x2419d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2419d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2419d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2419d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2419d8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2419d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2419dc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2419dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2419e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2419e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2419e4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2419e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2419e8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2419e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2419ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2419ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2419f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2419f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2419f4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2419f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2419f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2419f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2419fc: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2419fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x241a00: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x241a00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x241a04: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x241A04u;
    {
        const bool branch_taken_0x241a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A04u;
        // 0x241a08: 0x8eb30014  lw          $s3, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a04) {
            ctx->pc = 0x241A3Cu;
            goto label_241a3c;
        }
    }
    ctx->pc = 0x241A0Cu;
    // 0x241a0c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x241a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x241a10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241A10u;
    {
        const bool branch_taken_0x241a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A10u;
        // 0x241a14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a10) {
            ctx->pc = 0x241A28u;
            goto label_241a28;
        }
    }
    ctx->pc = 0x241A18u;
    // 0x241a18: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241A18u;
    {
        const bool branch_taken_0x241a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A18u;
        // 0x241a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a18) {
            ctx->pc = 0x241A3Cu;
            goto label_241a3c;
        }
    }
    ctx->pc = 0x241A20u;
    // 0x241a20: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x241A20u;
    {
        const bool branch_taken_0x241a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A20u;
        // 0x241a24: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a20) {
            ctx->pc = 0x241E10u;
            goto label_241e10;
        }
    }
    ctx->pc = 0x241A28u;
label_241a28:
    // 0x241a28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x241a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x241a2c: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x241A2Cu;
    {
        const bool branch_taken_0x241a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A2Cu;
        // 0x241a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a2c) {
            ctx->pc = 0x241C38u;
            goto label_241c38;
        }
    }
    ctx->pc = 0x241A34u;
    // 0x241a34: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x241A34u;
    {
        const bool branch_taken_0x241a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A34u;
        // 0x241a38: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a34) {
            ctx->pc = 0x241E10u;
            goto label_241e10;
        }
    }
    ctx->pc = 0x241A3Cu;
label_241a3c:
    // 0x241a3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x241a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x241a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a44: 0x184000f0  blez        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x241A44u;
    {
        const bool branch_taken_0x241a44 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A44u;
        // 0x241a48: 0x8eb40018  lw          $s4, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a44) {
            ctx->pc = 0x241E08u;
            goto label_241e08;
        }
    }
    ctx->pc = 0x241A4Cu;
    // 0x241a4c: 0x0  nop
    ctx->pc = 0x241a4cu;
    // NOP
label_241a50:
    // 0x241a50: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x241a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x241a54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x241a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x241a58: 0x3044006f  andi        $a0, $v0, 0x6F
    ctx->pc = 0x241a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x241a5c: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x241A5Cu;
    {
        const bool branch_taken_0x241a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x241A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A5Cu;
        // 0x241a60: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a5c) {
            ctx->pc = 0x241B88u;
            goto label_241b88;
        }
    }
    ctx->pc = 0x241A64u;
    // 0x241a64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x241A64u;
    {
        const bool branch_taken_0x241a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A64u;
        // 0x241a68: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a64) {
            ctx->pc = 0x241A80u;
            goto label_241a80;
        }
    }
    ctx->pc = 0x241A6Cu;
    // 0x241a6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x241a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x241a70: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x241A70u;
    {
        const bool branch_taken_0x241a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A70u;
        // 0x241a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a70) {
            ctx->pc = 0x241B08u;
            goto label_241b08;
        }
    }
    ctx->pc = 0x241A78u;
    // 0x241a78: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x241A78u;
    {
        const bool branch_taken_0x241a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A78u;
        // 0x241a7c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a78) {
            ctx->pc = 0x241E10u;
            goto label_241e10;
        }
    }
    ctx->pc = 0x241A80u;
label_241a80:
    // 0x241a80: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x241A80u;
    {
        const bool branch_taken_0x241a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A80u;
        // 0x241a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a80) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241A88u;
    // 0x241a88: 0x48000e0  bltz        $a0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x241A88u;
    {
        const bool branch_taken_0x241a88 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x241A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A88u;
        // 0x241a8c: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a88) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241A90u;
    // 0x241a90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241a94: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x241a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a98: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x241A98u;
    {
        const bool branch_taken_0x241a98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A98u;
        // 0x241a9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a98) {
            ctx->pc = 0x241BFCu;
            goto label_241bfc;
        }
    }
    ctx->pc = 0x241AA0u;
label_241aa0:
    // 0x241aa0: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x241aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x241aa4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x241aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241aa8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x241aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x241aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x241aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241ab0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x241ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x241ab4: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x241ab4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x241ab8: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x241ab8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x241abc: 0x90660003  lbu         $a2, 0x3($v1)
    ctx->pc = 0x241abcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x241ac0: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x241ac4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x241ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241ac8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x241ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x241acc: 0x30a57c00  andi        $a1, $a1, 0x7C00
    ctx->pc = 0x241accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x241ad0: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x241ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x241ad4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x241ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x241ad8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x241ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x241adc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x241adcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x241ae0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241ae4: 0x30c68000  andi        $a2, $a2, 0x8000
    ctx->pc = 0x241ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x241ae8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x241ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x241aec: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x241aecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x241af0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241af4: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x241af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241af8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x241AF8u;
    {
        const bool branch_taken_0x241af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AF8u;
        // 0x241afc: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241af8) {
            ctx->pc = 0x241AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241aa0;
        }
    }
    ctx->pc = 0x241B00u;
    // 0x241b00: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x241B00u;
    {
        const bool branch_taken_0x241b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B00u;
        // 0x241b04: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b00) {
            ctx->pc = 0x241C00u;
            goto label_241c00;
        }
    }
    ctx->pc = 0x241B08u;
label_241b08:
    // 0x241b08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241b0c: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x241b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241b10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x241b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b14: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x241B14u;
    {
        const bool branch_taken_0x241b14 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B14u;
        // 0x241b18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b14) {
            ctx->pc = 0x241BFCu;
            goto label_241bfc;
        }
    }
    ctx->pc = 0x241B1Cu;
    // 0x241b1c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x241b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_241b20:
    // 0x241b20: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x241b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x241b24: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x241b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241b28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x241b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x241b2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241b30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x241b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x241b34: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x241b34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x241b38: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x241b38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x241b3c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x241b3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241b40: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x241b44: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x241b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x241b48: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x241b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x241b4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x241b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x241b50: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x241b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x241b54: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x241b54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x241b58: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x241b5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x241b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x241b60: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x241b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x241b64: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x241b64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x241b68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x241b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x241b6c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x241b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x241b70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241b74: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x241b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241b78: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x241B78u;
    {
        const bool branch_taken_0x241b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B78u;
        // 0x241b7c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b78) {
            ctx->pc = 0x241B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241b20;
        }
    }
    ctx->pc = 0x241B80u;
    // 0x241b80: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x241B80u;
    {
        const bool branch_taken_0x241b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B80u;
        // 0x241b84: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b80) {
            ctx->pc = 0x241C00u;
            goto label_241c00;
        }
    }
    ctx->pc = 0x241B88u;
label_241b88:
    // 0x241b88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241b8c: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x241b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241b90: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x241b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b94: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x241B94u;
    {
        const bool branch_taken_0x241b94 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B94u;
        // 0x241b98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b94) {
            ctx->pc = 0x241BFCu;
            goto label_241bfc;
        }
    }
    ctx->pc = 0x241B9Cu;
    // 0x241b9c: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x241b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x241ba0: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x241ba0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x241ba4: 0x35298081  ori         $t1, $t1, 0x8081
    ctx->pc = 0x241ba4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32897);
label_241ba8:
    // 0x241ba8: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x241ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x241bac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x241bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241bb0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x241bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x241bb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x241bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241bb8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x241bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x241bbc: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x241bbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x241bc0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x241bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x241bc4: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x241bc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x241bc8: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x241bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241bcc: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x241bccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241bd0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x241bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x241bd4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x241bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x241bd8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x241bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x241bdc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x241bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x241be0: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x241be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x241be4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241be8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x241be8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x241bec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241bf0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x241bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241bf4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x241BF4u;
    {
        const bool branch_taken_0x241bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BF4u;
        // 0x241bf8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bf4) {
            ctx->pc = 0x241BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241ba8;
        }
    }
    ctx->pc = 0x241BFCu;
label_241bfc:
    // 0x241bfc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x241bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_241c00:
    // 0x241c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c04: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x241c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x241c08: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x241C08u;
    SET_GPR_U32(ctx, 31, 0x241C10u);
    ctx->pc = 0x241C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C08u;
    // 0x241c0c: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x241C08u, 0x241C10u)) {
        return;
    }
    ctx->pc = 0x241C10u;
label_241c10:
    // 0x241c10: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x241c14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x241c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c18: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x241c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x241c1c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x241c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x241c20: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x241c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x241c24: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x241c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241c28: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x241C28u;
    {
        const bool branch_taken_0x241c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C28u;
        // 0x241c2c: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c28) {
            ctx->pc = 0x241A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241a50;
        }
    }
    ctx->pc = 0x241C30u;
    // 0x241c30: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x241C30u;
    {
        const bool branch_taken_0x241c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C30u;
        // 0x241c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c30) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241C38u;
label_241c38:
    // 0x241c38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x241c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x241c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c40: 0x18400071  blez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x241C40u;
    {
        const bool branch_taken_0x241c40 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C40u;
        // 0x241c44: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c40) {
            ctx->pc = 0x241E08u;
            goto label_241e08;
        }
    }
    ctx->pc = 0x241C48u;
    // 0x241c48: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x241c48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x241c4c: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_241c50:
    // 0x241c50: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x241c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x241c54: 0x3043006f  andi        $v1, $v0, 0x6F
    ctx->pc = 0x241c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x241c58: 0x106c0046  beq         $v1, $t4, . + 4 + (0x46 << 2)
    ctx->pc = 0x241C58u;
    {
        const bool branch_taken_0x241c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x241C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C58u;
        // 0x241c5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c58) {
            ctx->pc = 0x241D74u;
            goto label_241d74;
        }
    }
    ctx->pc = 0x241C60u;
    // 0x241c60: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x241c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x241c64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241C64u;
    {
        const bool branch_taken_0x241c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C64u;
        // 0x241c68: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c64) {
            ctx->pc = 0x241C7Cu;
            goto label_241c7c;
        }
    }
    ctx->pc = 0x241C6Cu;
    // 0x241c6c: 0x106b0023  beq         $v1, $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x241C6Cu;
    {
        const bool branch_taken_0x241c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x241C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C6Cu;
        // 0x241c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c6c) {
            ctx->pc = 0x241CFCu;
            goto label_241cfc;
        }
    }
    ctx->pc = 0x241C74u;
    // 0x241c74: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x241C74u;
    {
        const bool branch_taken_0x241c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C74u;
        // 0x241c78: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c74) {
            ctx->pc = 0x241E10u;
            goto label_241e10;
        }
    }
    ctx->pc = 0x241C7Cu;
label_241c7c:
    // 0x241c7c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x241C7Cu;
    {
        const bool branch_taken_0x241c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C7Cu;
        // 0x241c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c7c) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241C84u;
    // 0x241c84: 0x4600061  bltz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x241C84u;
    {
        const bool branch_taken_0x241c84 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x241C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C84u;
        // 0x241c88: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c84) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241C8Cu;
    // 0x241c8c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241c90: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x241c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c94: 0x18400053  blez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x241C94u;
    {
        const bool branch_taken_0x241c94 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C94u;
        // 0x241c98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c94) {
            ctx->pc = 0x241DE4u;
            goto label_241de4;
        }
    }
    ctx->pc = 0x241C9Cu;
    // 0x241c9c: 0x0  nop
    ctx->pc = 0x241c9cu;
    // NOP
label_241ca0:
    // 0x241ca0: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x241ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x241ca4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x241ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x241ca8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x241ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x241cac: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x241cacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x241cb0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x241cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x241cb4: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x241cb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x241cb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241cbc: 0x304203e0  andi        $v0, $v0, 0x3E0
    ctx->pc = 0x241cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
    // 0x241cc0: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x241cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x241cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x241cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x241cc8: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x241cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x241ccc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x241cccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x241cd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x241cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x241cd4: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x241cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x241cd8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x241cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x241cdc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x241cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x241ce0: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x241ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x241ce4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241ce8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x241ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241cec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x241CECu;
    {
        const bool branch_taken_0x241cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CECu;
        // 0x241cf0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cec) {
            ctx->pc = 0x241CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241ca0;
        }
    }
    ctx->pc = 0x241CF4u;
    // 0x241cf4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x241CF4u;
    {
        const bool branch_taken_0x241cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CF4u;
        // 0x241cf8: 0x8e090010  lw          $t1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cf4) {
            ctx->pc = 0x241DE4u;
            goto label_241de4;
        }
    }
    ctx->pc = 0x241CFCu;
label_241cfc:
    // 0x241cfc: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x241cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241d00: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x241d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d08: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x241D08u;
    {
        const bool branch_taken_0x241d08 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D08u;
        // 0x241d0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d08) {
            ctx->pc = 0x241DE4u;
            goto label_241de4;
        }
    }
    ctx->pc = 0x241D10u;
    // 0x241d10: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x241d10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x241d14: 0x0  nop
    ctx->pc = 0x241d14u;
    // NOP
label_241d18:
    // 0x241d18: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x241d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x241d1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x241d20: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x241d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x241d24: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x241d24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x241d28: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x241d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x241d2c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x241d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x241d30: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x241d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x241d34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x241d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x241d38: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x241d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x241d3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x241d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x241d40: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x241d40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x241d44: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x241d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x241d48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x241d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241d4c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x241d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x241d50: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x241d50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x241d54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x241d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241d58: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x241d58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x241d5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241d60: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x241d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241d64: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x241D64u;
    {
        const bool branch_taken_0x241d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D64u;
        // 0x241d68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d64) {
            ctx->pc = 0x241D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241d18;
        }
    }
    ctx->pc = 0x241D6Cu;
    // 0x241d6c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x241D6Cu;
    {
        const bool branch_taken_0x241d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D6Cu;
        // 0x241d70: 0x8e090010  lw          $t1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d6c) {
            ctx->pc = 0x241DE4u;
            goto label_241de4;
        }
    }
    ctx->pc = 0x241D74u;
label_241d74:
    // 0x241d74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241d78: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x241d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241d7c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x241d7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d80: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x241D80u;
    {
        const bool branch_taken_0x241d80 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D80u;
        // 0x241d84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d80) {
            ctx->pc = 0x241DE4u;
            goto label_241de4;
        }
    }
    ctx->pc = 0x241D88u;
    // 0x241d88: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x241d88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x241d8c: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x241d90: 0x35298081  ori         $t1, $t1, 0x8081
    ctx->pc = 0x241d90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32897);
    // 0x241d94: 0x0  nop
    ctx->pc = 0x241d94u;
    // NOP
label_241d98:
    // 0x241d98: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x241d98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x241d9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x241d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x241da0: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x241da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x241da4: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x241da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x241da8: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x241da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x241dac: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x241dacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x241db0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x241db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x241db4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x241db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x241db8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x241db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x241dbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x241dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x241dc0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241dc4: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x241dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x241dc8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x241dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x241dcc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x241dccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x241dd0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x241dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x241dd4: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x241dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241dd8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x241DD8u;
    {
        const bool branch_taken_0x241dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DD8u;
        // 0x241ddc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dd8) {
            ctx->pc = 0x241D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241d98;
        }
    }
    ctx->pc = 0x241DE0u;
    // 0x241de0: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x241de0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_241de4:
    // 0x241de4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x241de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x241de8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x241de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241dec: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x241decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x241df0: 0xa9202a  slt         $a0, $a1, $t1
    ctx->pc = 0x241df0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x241df4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x241df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x241df8: 0x1480ff95  bnez        $a0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x241DF8u;
    {
        const bool branch_taken_0x241df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DF8u;
        // 0x241dfc: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241df8) {
            ctx->pc = 0x241C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241c50;
        }
    }
    ctx->pc = 0x241E00u;
    // 0x241e00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241E00u;
    {
        const bool branch_taken_0x241e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E00u;
        // 0x241e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e00) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241E08u;
label_241e08:
    // 0x241e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241e0c:
    // 0x241e0c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x241e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_241e10:
    // 0x241e10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x241e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241e14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x241e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241e18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x241e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241e1c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x241e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241e20: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x241e20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241e28: 0x3e00008  jr          $ra
    ctx->pc = 0x241E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E28u;
        // 0x241e2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241E30u;
}
