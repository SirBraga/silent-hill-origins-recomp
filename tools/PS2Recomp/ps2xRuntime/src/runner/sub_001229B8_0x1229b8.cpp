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

// Function: sub_001229B8
// Address: 0x1229b8 - 0x122ae0
void sub_001229B8_0x1229b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001229B8_0x1229b8");
#endif

    switch (ctx->pc) {
        case 0x1229b8u: goto label_1229b8;
        case 0x1229bcu: goto label_1229bc;
        case 0x1229c0u: goto label_1229c0;
        case 0x1229c4u: goto label_1229c4;
        case 0x1229c8u: goto label_1229c8;
        case 0x1229ccu: goto label_1229cc;
        case 0x1229d0u: goto label_1229d0;
        case 0x1229d4u: goto label_1229d4;
        case 0x1229d8u: goto label_1229d8;
        case 0x1229dcu: goto label_1229dc;
        case 0x1229e0u: goto label_1229e0;
        case 0x1229e4u: goto label_1229e4;
        case 0x1229e8u: goto label_1229e8;
        case 0x1229ecu: goto label_1229ec;
        case 0x1229f0u: goto label_1229f0;
        case 0x1229f4u: goto label_1229f4;
        case 0x1229f8u: goto label_1229f8;
        case 0x1229fcu: goto label_1229fc;
        case 0x122a00u: goto label_122a00;
        case 0x122a04u: goto label_122a04;
        case 0x122a08u: goto label_122a08;
        case 0x122a0cu: goto label_122a0c;
        case 0x122a10u: goto label_122a10;
        case 0x122a14u: goto label_122a14;
        case 0x122a18u: goto label_122a18;
        case 0x122a1cu: goto label_122a1c;
        case 0x122a20u: goto label_122a20;
        case 0x122a24u: goto label_122a24;
        case 0x122a28u: goto label_122a28;
        case 0x122a2cu: goto label_122a2c;
        case 0x122a30u: goto label_122a30;
        case 0x122a34u: goto label_122a34;
        case 0x122a38u: goto label_122a38;
        case 0x122a3cu: goto label_122a3c;
        case 0x122a40u: goto label_122a40;
        case 0x122a44u: goto label_122a44;
        case 0x122a48u: goto label_122a48;
        case 0x122a4cu: goto label_122a4c;
        case 0x122a50u: goto label_122a50;
        case 0x122a54u: goto label_122a54;
        case 0x122a58u: goto label_122a58;
        case 0x122a5cu: goto label_122a5c;
        case 0x122a60u: goto label_122a60;
        case 0x122a64u: goto label_122a64;
        case 0x122a68u: goto label_122a68;
        case 0x122a6cu: goto label_122a6c;
        case 0x122a70u: goto label_122a70;
        case 0x122a74u: goto label_122a74;
        case 0x122a78u: goto label_122a78;
        case 0x122a7cu: goto label_122a7c;
        case 0x122a80u: goto label_122a80;
        case 0x122a84u: goto label_122a84;
        case 0x122a88u: goto label_122a88;
        case 0x122a8cu: goto label_122a8c;
        case 0x122a90u: goto label_122a90;
        case 0x122a94u: goto label_122a94;
        case 0x122a98u: goto label_122a98;
        case 0x122a9cu: goto label_122a9c;
        case 0x122aa0u: goto label_122aa0;
        case 0x122aa4u: goto label_122aa4;
        case 0x122aa8u: goto label_122aa8;
        case 0x122aacu: goto label_122aac;
        case 0x122ab0u: goto label_122ab0;
        case 0x122ab4u: goto label_122ab4;
        case 0x122ab8u: goto label_122ab8;
        case 0x122abcu: goto label_122abc;
        case 0x122ac0u: goto label_122ac0;
        case 0x122ac4u: goto label_122ac4;
        case 0x122ac8u: goto label_122ac8;
        case 0x122accu: goto label_122acc;
        case 0x122ad0u: goto label_122ad0;
        case 0x122ad4u: goto label_122ad4;
        case 0x122ad8u: goto label_122ad8;
        case 0x122adcu: goto label_122adc;
        default: break;
    }

    ctx->pc = 0x1229b8u;

label_1229b8:
    // 0x1229b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1229b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1229bc:
    // 0x1229bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1229bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1229c0:
    // 0x1229c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1229c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1229c4:
    // 0x1229c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1229c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1229c8:
    // 0x1229c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1229c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1229cc:
    // 0x1229cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1229ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1229d0:
    // 0x1229d0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1229d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1229d4:
    // 0x1229d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1229d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1229d8:
    // 0x1229d8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1229d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1229dc:
    // 0x1229dc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1229dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1229e0:
    // 0x1229e0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1229e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1229e4:
    // 0x1229e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1229e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1229e8:
    // 0x1229e8: 0xc068184  jal         func_1A0610
label_1229ec:
    if (ctx->pc == 0x1229ECu) {
        ctx->pc = 0x1229ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229E8u;
        // 0x1229ec: 0x26440320  addiu       $a0, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1229F0u;
        goto label_1229f0;
    }
    ctx->pc = 0x1229E8u;
    SET_GPR_U32(ctx, 31, 0x1229F0u);
    ctx->pc = 0x1229ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229E8u;
    // 0x1229ec: 0x26440320  addiu       $a0, $s2, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0610u, 0x1229E8u, 0x1229F0u)) {
        return;
    }
    ctx->pc = 0x1229F0u;
label_1229f0:
    // 0x1229f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1229f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1229f4:
    // 0x1229f4: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
label_1229f8:
    if (ctx->pc == 0x1229F8u) {
        ctx->pc = 0x1229F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229F4u;
        // 0x1229f8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1229FCu;
        goto label_1229fc;
    }
    ctx->pc = 0x1229F4u;
    {
        const bool branch_taken_0x1229f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229F4u;
        // 0x1229f8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229f4) {
            ctx->pc = 0x122AB8u;
            goto label_122ab8;
        }
    }
    ctx->pc = 0x1229FCu;
label_1229fc:
    // 0x1229fc: 0xc04094c  jal         func_102530
label_122a00:
    if (ctx->pc == 0x122A00u) {
        ctx->pc = 0x122A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229FCu;
        // 0x122a00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A04u;
        goto label_122a04;
    }
    ctx->pc = 0x1229FCu;
    SET_GPR_U32(ctx, 31, 0x122A04u);
    ctx->pc = 0x122A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229FCu;
    // 0x122a00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x1229FCu, 0x122A04u)) {
        return;
    }
    ctx->pc = 0x122A04u;
label_122a04:
    // 0x122a04: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x122a04u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_122a08:
    // 0x122a08: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x122a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122a0c:
    // 0x122a0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122a10:
    // 0x122a10: 0x0  nop
    ctx->pc = 0x122a10u;
    // NOP
label_122a14:
    // 0x122a14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x122a14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122a18:
    // 0x122a18: 0x0  nop
    ctx->pc = 0x122a18u;
    // NOP
label_122a1c:
    // 0x122a1c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_122a20:
    if (ctx->pc == 0x122A20u) {
        ctx->pc = 0x122A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A1Cu;
        // 0x122a20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A24u;
        goto label_122a24;
    }
    ctx->pc = 0x122A1Cu;
    {
        const bool branch_taken_0x122a1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A1Cu;
        // 0x122a20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a1c) {
            ctx->pc = 0x122AB8u;
            goto label_122ab8;
        }
    }
    ctx->pc = 0x122A24u;
label_122a24:
    // 0x122a24: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x122a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122a28:
    // 0x122a28: 0x0  nop
    ctx->pc = 0x122a28u;
    // NOP
label_122a2c:
    // 0x122a2c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_122a30:
    if (ctx->pc == 0x122A30u) {
        ctx->pc = 0x122A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A2Cu;
        // 0x122a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A34u;
        goto label_122a34;
    }
    ctx->pc = 0x122A2Cu;
    {
        const bool branch_taken_0x122a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A2Cu;
        // 0x122a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a2c) {
            ctx->pc = 0x122AB8u;
            goto label_122ab8;
        }
    }
    ctx->pc = 0x122A34u;
label_122a34:
    // 0x122a34: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x122a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_122a38:
    // 0x122a38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x122a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122a3c:
    // 0x122a3c: 0xc040d12  jal         func_103448
label_122a40:
    if (ctx->pc == 0x122A40u) {
        ctx->pc = 0x122A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A3Cu;
        // 0x122a40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A44u;
        goto label_122a44;
    }
    ctx->pc = 0x122A3Cu;
    SET_GPR_U32(ctx, 31, 0x122A44u);
    ctx->pc = 0x122A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A3Cu;
    // 0x122a40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103448u, 0x122A3Cu, 0x122A44u)) {
        return;
    }
    ctx->pc = 0x122A44u;
label_122a44:
    // 0x122a44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x122a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a48:
    // 0x122a48: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x122a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_122a4c:
    // 0x122a4c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_122a50:
    if (ctx->pc == 0x122A50u) {
        ctx->pc = 0x122A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A4Cu;
        // 0x122a50: 0x2654021c  addiu       $s4, $s2, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 540));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A54u;
        goto label_122a54;
    }
    ctx->pc = 0x122A4Cu;
    {
        const bool branch_taken_0x122a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A4Cu;
        // 0x122a50: 0x2654021c  addiu       $s4, $s2, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a4c) {
            ctx->pc = 0x122AB4u;
            goto label_122ab4;
        }
    }
    ctx->pc = 0x122A54u;
label_122a54:
    // 0x122a54: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x122a54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
label_122a58:
    // 0x122a58: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x122a58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122a5c:
    // 0x122a5c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x122a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_122a60:
    // 0x122a60: 0x8ec48668  lw          $a0, -0x7998($s6)
    ctx->pc = 0x122a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936168)));
label_122a64:
    // 0x122a64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x122a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_122a68:
    // 0x122a68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x122a68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122a6c:
    // 0x122a6c: 0xc05961c  jal         func_165870
label_122a70:
    if (ctx->pc == 0x122A70u) {
        ctx->pc = 0x122A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A6Cu;
        // 0x122a70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A74u;
        goto label_122a74;
    }
    ctx->pc = 0x122A6Cu;
    SET_GPR_U32(ctx, 31, 0x122A74u);
    ctx->pc = 0x122A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A6Cu;
    // 0x122a70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165870u, 0x122A6Cu, 0x122A74u)) {
        return;
    }
    ctx->pc = 0x122A74u;
label_122a74:
    // 0x122a74: 0x1455000a  bne         $v0, $s5, . + 4 + (0xA << 2)
label_122a78:
    if (ctx->pc == 0x122A78u) {
        ctx->pc = 0x122A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A74u;
        // 0x122a78: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A7Cu;
        goto label_122a7c;
    }
    ctx->pc = 0x122A74u;
    {
        const bool branch_taken_0x122a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x122A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A74u;
        // 0x122a78: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a74) {
            ctx->pc = 0x122AA0u;
            goto label_122aa0;
        }
    }
    ctx->pc = 0x122A7Cu;
label_122a7c:
    // 0x122a7c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x122a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_122a80:
    // 0x122a80: 0x2773021  addu        $a2, $s3, $s7
    ctx->pc = 0x122a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_122a84:
    // 0x122a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122a88:
    // 0x122a88: 0x844402a8  lh          $a0, 0x2A8($v0)
    ctx->pc = 0x122a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 680)));
label_122a8c:
    // 0x122a8c: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x122a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
label_122a90:
    // 0x122a90: 0x60f809  jalr        $v1
label_122a94:
    if (ctx->pc == 0x122A94u) {
        ctx->pc = 0x122A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A90u;
        // 0x122a94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122A98u;
        goto label_122a98;
    }
    ctx->pc = 0x122A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122A98u);
        ctx->pc = 0x122A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A90u;
        // 0x122a94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122A90u, 0x122A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122A98u;
label_122a98:
    // 0x122a98: 0x10000007  b           . + 4 + (0x7 << 2)
label_122a9c:
    if (ctx->pc == 0x122A9Cu) {
        ctx->pc = 0x122A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A98u;
        // 0x122a9c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122AA0u;
        goto label_122aa0;
    }
    ctx->pc = 0x122A98u;
    {
        const bool branch_taken_0x122a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A98u;
        // 0x122a9c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a98) {
            ctx->pc = 0x122AB8u;
            goto label_122ab8;
        }
    }
    ctx->pc = 0x122AA0u;
label_122aa0:
    // 0x122aa0: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x122aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_122aa4:
    // 0x122aa4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x122aa4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_122aa8:
    // 0x122aa8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x122aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_122aac:
    // 0x122aac: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_122ab0:
    if (ctx->pc == 0x122AB0u) {
        ctx->pc = 0x122AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AACu;
        // 0x122ab0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122AB4u;
        goto label_122ab4;
    }
    ctx->pc = 0x122AACu;
    {
        const bool branch_taken_0x122aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AACu;
        // 0x122ab0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122aac) {
            ctx->pc = 0x122A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a60;
        }
    }
    ctx->pc = 0x122AB4u;
label_122ab4:
    // 0x122ab4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x122ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_122ab8:
    // 0x122ab8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x122ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_122abc:
    // 0x122abc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x122abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_122ac0:
    // 0x122ac0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x122ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_122ac4:
    // 0x122ac4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x122ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122ac8:
    // 0x122ac8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x122ac8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_122acc:
    // 0x122acc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x122accu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_122ad0:
    // 0x122ad0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x122ad0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122ad4:
    // 0x122ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122ad8:
    // 0x122ad8: 0x3e00008  jr          $ra
label_122adc:
    if (ctx->pc == 0x122ADCu) {
        ctx->pc = 0x122ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AD8u;
        // 0x122adc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122AE0u;
        goto label_fallthrough_0x122ad8;
    }
    ctx->pc = 0x122AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AD8u;
        // 0x122adc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122ad8:
    ctx->pc = 0x122AE0u;
}
