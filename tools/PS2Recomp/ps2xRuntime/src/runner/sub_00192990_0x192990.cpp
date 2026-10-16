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

// Function: sub_00192990
// Address: 0x192990 - 0x192cd8
void sub_00192990_0x192990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192990_0x192990");
#endif

    switch (ctx->pc) {
        case 0x1929e8u: goto label_1929e8;
        case 0x1929fcu: goto label_1929fc;
        case 0x192a10u: goto label_192a10;
        case 0x192a24u: goto label_192a24;
        case 0x192a30u: goto label_192a30;
        case 0x192a40u: goto label_192a40;
        case 0x192a58u: goto label_192a58;
        case 0x192a70u: goto label_192a70;
        case 0x192a90u: goto label_192a90;
        case 0x192aa8u: goto label_192aa8;
        case 0x192ac0u: goto label_192ac0;
        case 0x192ad8u: goto label_192ad8;
        case 0x192af0u: goto label_192af0;
        case 0x192b08u: goto label_192b08;
        case 0x192b28u: goto label_192b28;
        case 0x192b44u: goto label_192b44;
        case 0x192b60u: goto label_192b60;
        case 0x192b7cu: goto label_192b7c;
        case 0x192ba0u: goto label_192ba0;
        case 0x192bbcu: goto label_192bbc;
        case 0x192bd8u: goto label_192bd8;
        case 0x192bf0u: goto label_192bf0;
        case 0x192c04u: goto label_192c04;
        case 0x192c18u: goto label_192c18;
        case 0x192c2cu: goto label_192c2c;
        case 0x192c40u: goto label_192c40;
        case 0x192c54u: goto label_192c54;
        case 0x192c68u: goto label_192c68;
        case 0x192c8cu: goto label_192c8c;
        case 0x192ca0u: goto label_192ca0;
        default: break;
    }

    ctx->pc = 0x192990u;

    // 0x192990: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x192994: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x192994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x192998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19299c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x19299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1929a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1929a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929a4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1929a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1929a8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1929a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929ac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1929acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1929b0: 0x27c40168  addiu       $a0, $fp, 0x168
    ctx->pc = 0x1929b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 360));
    // 0x1929b4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1929b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1929b8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1929b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1929bc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1929bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1929c0: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1929c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1929c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1929c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1929c8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1929c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1929cc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1929ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1929d0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1929d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1929d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1929d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1929d8: 0xafc00068  sw          $zero, 0x68($fp)
    ctx->pc = 0x1929d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 104), GPR_U32(ctx, 0));
    // 0x1929dc: 0xafc0006c  sw          $zero, 0x6C($fp)
    ctx->pc = 0x1929dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 108), GPR_U32(ctx, 0));
    // 0x1929e0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1929E0u;
    SET_GPR_U32(ctx, 31, 0x1929E8u);
    ctx->pc = 0x1929E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929E0u;
    // 0x1929e4: 0xe7c00070  swc1        $f0, 0x70($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1929E0u, 0x1929E8u)) {
        return;
    }
    ctx->pc = 0x1929E8u;
label_1929e8:
    // 0x1929e8: 0x8e028b4c  lw          $v0, -0x74B4($s0)
    ctx->pc = 0x1929e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937420)));
    // 0x1929ec: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1929ECu;
    {
        const bool branch_taken_0x1929ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1929ec) {
            ctx->pc = 0x1929F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1929ECu;
            // 0x1929f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192A38u;
            goto label_192a38;
        }
    }
    ctx->pc = 0x1929F4u;
    // 0x1929f4: 0xc0a4dca  jal         func_293728
    ctx->pc = 0x1929F4u;
    SET_GPR_U32(ctx, 31, 0x1929FCu);
    ctx->pc = 0x1929F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929F4u;
    // 0x1929f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293728u, 0x1929F4u, 0x1929FCu)) {
        return;
    }
    ctx->pc = 0x1929FCu;
label_1929fc:
    // 0x1929fc: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x1929fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x192a00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a04: 0x24c6be40  addiu       $a2, $a2, -0x41C0
    ctx->pc = 0x192a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950464));
    // 0x192a08: 0xc0a4eb6  jal         func_293AD8
    ctx->pc = 0x192A08u;
    SET_GPR_U32(ctx, 31, 0x192A10u);
    ctx->pc = 0x192A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A08u;
    // 0x192a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293AD8u, 0x192A08u, 0x192A10u)) {
        return;
    }
    ctx->pc = 0x192A10u;
label_192a10:
    // 0x192a10: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x192a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x192a14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a18: 0x24c68b50  addiu       $a2, $a2, -0x74B0
    ctx->pc = 0x192a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937424));
    // 0x192a1c: 0xc0a50ba  jal         func_2942E8
    ctx->pc = 0x192A1Cu;
    SET_GPR_U32(ctx, 31, 0x192A24u);
    ctx->pc = 0x192A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A1Cu;
    // 0x192a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2942E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2942E8u, 0x192A1Cu, 0x192A24u)) {
        return;
    }
    ctx->pc = 0x192A24u;
label_192a24:
    // 0x192a24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a28: 0xc06497a  jal         func_1925E8
    ctx->pc = 0x192A28u;
    SET_GPR_U32(ctx, 31, 0x192A30u);
    ctx->pc = 0x192A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A28u;
    // 0x192a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1925E8u, 0x192A28u, 0x192A30u)) {
        return;
    }
    ctx->pc = 0x192A30u;
label_192a30:
    // 0x192a30: 0xae008b4c  sw          $zero, -0x74B4($s0)
    ctx->pc = 0x192a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937420), GPR_U32(ctx, 0));
    // 0x192a34: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x192a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_192a38:
    // 0x192a38: 0xc065116  jal         func_194458
    ctx->pc = 0x192A38u;
    SET_GPR_U32(ctx, 31, 0x192A40u);
    ctx->pc = 0x192A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A38u;
    // 0x192a3c: 0x27d20038  addiu       $s2, $fp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x194458u, 0x192A38u, 0x192A40u)) {
        return;
    }
    ctx->pc = 0x192A40u;
label_192a40:
    // 0x192a40: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x192a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x192a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a48: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x192a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x192a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a50: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192A50u;
    SET_GPR_U32(ctx, 31, 0x192A58u);
    ctx->pc = 0x192A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A50u;
    // 0x192a54: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192A50u, 0x192A58u)) {
        return;
    }
    ctx->pc = 0x192A58u;
label_192a58:
    // 0x192a58: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x192a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x192a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a64: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x192a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x192a68: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192A68u;
    SET_GPR_U32(ctx, 31, 0x192A70u);
    ctx->pc = 0x192A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A68u;
    // 0x192a6c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192A68u, 0x192A70u)) {
        return;
    }
    ctx->pc = 0x192A70u;
label_192a70:
    // 0x192a70: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x192a70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x192a74: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x192a74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x192a78: 0x26109720  addiu       $s0, $s0, -0x68E0
    ctx->pc = 0x192a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940448));
    // 0x192a7c: 0x24c69710  addiu       $a2, $a2, -0x68F0
    ctx->pc = 0x192a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940432));
    // 0x192a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a84: 0x27c50084  addiu       $a1, $fp, 0x84
    ctx->pc = 0x192a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
    // 0x192a88: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x192A88u;
    SET_GPR_U32(ctx, 31, 0x192A90u);
    ctx->pc = 0x192A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A88u;
    // 0x192a8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x192A88u, 0x192A90u)) {
        return;
    }
    ctx->pc = 0x192A90u;
label_192a90:
    // 0x192a90: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x192a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x192a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a98: 0x24c69730  addiu       $a2, $a2, -0x68D0
    ctx->pc = 0x192a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940464));
    // 0x192a9c: 0x27c500d4  addiu       $a1, $fp, 0xD4
    ctx->pc = 0x192a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 212));
    // 0x192aa0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x192AA0u;
    SET_GPR_U32(ctx, 31, 0x192AA8u);
    ctx->pc = 0x192AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192AA0u;
    // 0x192aa4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x192AA0u, 0x192AA8u)) {
        return;
    }
    ctx->pc = 0x192AA8u;
label_192aa8:
    // 0x192aa8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x192aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x192aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ab0: 0x24c69740  addiu       $a2, $a2, -0x68C0
    ctx->pc = 0x192ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940480));
    // 0x192ab4: 0x27c50104  addiu       $a1, $fp, 0x104
    ctx->pc = 0x192ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 260));
    // 0x192ab8: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x192AB8u;
    SET_GPR_U32(ctx, 31, 0x192AC0u);
    ctx->pc = 0x192ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192AB8u;
    // 0x192abc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x192AB8u, 0x192AC0u)) {
        return;
    }
    ctx->pc = 0x192AC0u;
label_192ac0:
    // 0x192ac0: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x192ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x192ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ac8: 0x24c69750  addiu       $a2, $a2, -0x68B0
    ctx->pc = 0x192ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940496));
    // 0x192acc: 0x27c5010c  addiu       $a1, $fp, 0x10C
    ctx->pc = 0x192accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 268));
    // 0x192ad0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x192AD0u;
    SET_GPR_U32(ctx, 31, 0x192AD8u);
    ctx->pc = 0x192AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192AD0u;
    // 0x192ad4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x192AD0u, 0x192AD8u)) {
        return;
    }
    ctx->pc = 0x192AD8u;
label_192ad8:
    // 0x192ad8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x192ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x192adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ae0: 0x24c69760  addiu       $a2, $a2, -0x68A0
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940512));
    // 0x192ae4: 0x27c5011c  addiu       $a1, $fp, 0x11C
    ctx->pc = 0x192ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 284));
    // 0x192ae8: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x192AE8u;
    SET_GPR_U32(ctx, 31, 0x192AF0u);
    ctx->pc = 0x192AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192AE8u;
    // 0x192aec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x192AE8u, 0x192AF0u)) {
        return;
    }
    ctx->pc = 0x192AF0u;
label_192af0:
    // 0x192af0: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x192af0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x192af4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x192af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192af8: 0x27c5008c  addiu       $a1, $fp, 0x8C
    ctx->pc = 0x192af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 140));
    // 0x192afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b00: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x192B00u;
    SET_GPR_U32(ctx, 31, 0x192B08u);
    ctx->pc = 0x192B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B00u;
    // 0x192b04: 0x24c69778  addiu       $a2, $a2, -0x6888 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x192B00u, 0x192B08u)) {
        return;
    }
    ctx->pc = 0x192B08u;
label_192b08:
    // 0x192b08: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x192b08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x192b0c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x192b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192b10: 0x261097a0  addiu       $s0, $s0, -0x6860
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940576));
    // 0x192b14: 0x24a59788  addiu       $a1, $a1, -0x6878
    ctx->pc = 0x192b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940552));
    // 0x192b18: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192b1c: 0x2484bdb8  addiu       $a0, $a0, -0x4248
    ctx->pc = 0x192b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950328));
    // 0x192b20: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x192B20u;
    SET_GPR_U32(ctx, 31, 0x192B28u);
    ctx->pc = 0x192B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B20u;
    // 0x192b24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x192B20u, 0x192B28u)) {
        return;
    }
    ctx->pc = 0x192B28u;
label_192b28:
    // 0x192b28: 0x3c17006d  lui         $s7, 0x6D
    ctx->pc = 0x192b28u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)109 << 16));
    // 0x192b2c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x192b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192b30: 0x26f7bdc0  addiu       $s7, $s7, -0x4240
    ctx->pc = 0x192b30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950336));
    // 0x192b34: 0x24a597b8  addiu       $a1, $a1, -0x6848
    ctx->pc = 0x192b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940600));
    // 0x192b38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x192b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b3c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x192B3Cu;
    SET_GPR_U32(ctx, 31, 0x192B44u);
    ctx->pc = 0x192B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B3Cu;
    // 0x192b40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x192B3Cu, 0x192B44u)) {
        return;
    }
    ctx->pc = 0x192B44u;
label_192b44:
    // 0x192b44: 0x3c16006d  lui         $s6, 0x6D
    ctx->pc = 0x192b44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)109 << 16));
    // 0x192b48: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x192b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192b4c: 0x26d6bdc8  addiu       $s6, $s6, -0x4238
    ctx->pc = 0x192b4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950344));
    // 0x192b50: 0x24a597d0  addiu       $a1, $a1, -0x6830
    ctx->pc = 0x192b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940624));
    // 0x192b54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x192b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b58: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x192B58u;
    SET_GPR_U32(ctx, 31, 0x192B60u);
    ctx->pc = 0x192B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B58u;
    // 0x192b5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x192B58u, 0x192B60u)) {
        return;
    }
    ctx->pc = 0x192B60u;
label_192b60:
    // 0x192b60: 0x3c15006d  lui         $s5, 0x6D
    ctx->pc = 0x192b60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)109 << 16));
    // 0x192b64: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x192b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192b68: 0x26b5bdd0  addiu       $s5, $s5, -0x4230
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950352));
    // 0x192b6c: 0x24a597e8  addiu       $a1, $a1, -0x6818
    ctx->pc = 0x192b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940648));
    // 0x192b70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x192b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b74: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x192B74u;
    SET_GPR_U32(ctx, 31, 0x192B7Cu);
    ctx->pc = 0x192B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B74u;
    // 0x192b78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x192B74u, 0x192B7Cu)) {
        return;
    }
    ctx->pc = 0x192B7Cu;
label_192b7c:
    // 0x192b7c: 0x3c14006d  lui         $s4, 0x6D
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)109 << 16));
    // 0x192b80: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x192b80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x192b84: 0x26109818  addiu       $s0, $s0, -0x67E8
    ctx->pc = 0x192b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940696));
    // 0x192b88: 0x2694bdd8  addiu       $s4, $s4, -0x4228
    ctx->pc = 0x192b88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950360));
    // 0x192b8c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x192b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192b90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x192b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b94: 0x24a59800  addiu       $a1, $a1, -0x6800
    ctx->pc = 0x192b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940672));
    // 0x192b98: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x192B98u;
    SET_GPR_U32(ctx, 31, 0x192BA0u);
    ctx->pc = 0x192B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B98u;
    // 0x192b9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x192B98u, 0x192BA0u)) {
        return;
    }
    ctx->pc = 0x192BA0u;
label_192ba0:
    // 0x192ba0: 0x3c13006d  lui         $s3, 0x6D
    ctx->pc = 0x192ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)109 << 16));
    // 0x192ba4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x192ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192ba8: 0x2673bde0  addiu       $s3, $s3, -0x4220
    ctx->pc = 0x192ba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950368));
    // 0x192bac: 0x24a59820  addiu       $a1, $a1, -0x67E0
    ctx->pc = 0x192bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940704));
    // 0x192bb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bb4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x192BB4u;
    SET_GPR_U32(ctx, 31, 0x192BBCu);
    ctx->pc = 0x192BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192BB4u;
    // 0x192bb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x192BB4u, 0x192BBCu)) {
        return;
    }
    ctx->pc = 0x192BBCu;
label_192bbc:
    // 0x192bbc: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x192bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x192bc0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x192bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192bc4: 0x2631bde8  addiu       $s1, $s1, -0x4218
    ctx->pc = 0x192bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950376));
    // 0x192bc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x192bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bd0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x192BD0u;
    SET_GPR_U32(ctx, 31, 0x192BD8u);
    ctx->pc = 0x192BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192BD0u;
    // 0x192bd4: 0x24a59838  addiu       $a1, $a1, -0x67C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x192BD0u, 0x192BD8u)) {
        return;
    }
    ctx->pc = 0x192BD8u;
label_192bd8:
    // 0x192bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bdc: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x192bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x192be0: 0x24a5bdb8  addiu       $a1, $a1, -0x4248
    ctx->pc = 0x192be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950328));
    // 0x192be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192be8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192BE8u;
    SET_GPR_U32(ctx, 31, 0x192BF0u);
    ctx->pc = 0x192BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192BE8u;
    // 0x192bec: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192BE8u, 0x192BF0u)) {
        return;
    }
    ctx->pc = 0x192BF0u;
label_192bf0:
    // 0x192bf0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x192bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bfc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192BFCu;
    SET_GPR_U32(ctx, 31, 0x192C04u);
    ctx->pc = 0x192C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192BFCu;
    // 0x192c00: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192BFCu, 0x192C04u)) {
        return;
    }
    ctx->pc = 0x192C04u;
label_192c04:
    // 0x192c04: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x192c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c10: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192C10u;
    SET_GPR_U32(ctx, 31, 0x192C18u);
    ctx->pc = 0x192C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C10u;
    // 0x192c14: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192C10u, 0x192C18u)) {
        return;
    }
    ctx->pc = 0x192C18u;
label_192c18:
    // 0x192c18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x192c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c24: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192C24u;
    SET_GPR_U32(ctx, 31, 0x192C2Cu);
    ctx->pc = 0x192C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C24u;
    // 0x192c28: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192C24u, 0x192C2Cu)) {
        return;
    }
    ctx->pc = 0x192C2Cu;
label_192c2c:
    // 0x192c2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x192c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c38: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192C38u;
    SET_GPR_U32(ctx, 31, 0x192C40u);
    ctx->pc = 0x192C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C38u;
    // 0x192c3c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192C38u, 0x192C40u)) {
        return;
    }
    ctx->pc = 0x192C40u;
label_192c40:
    // 0x192c40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x192c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c4c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192C4Cu;
    SET_GPR_U32(ctx, 31, 0x192C54u);
    ctx->pc = 0x192C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C4Cu;
    // 0x192c50: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192C4Cu, 0x192C54u)) {
        return;
    }
    ctx->pc = 0x192C54u;
label_192c54:
    // 0x192c54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c58: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x192c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c60: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192C60u;
    SET_GPR_U32(ctx, 31, 0x192C68u);
    ctx->pc = 0x192C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C60u;
    // 0x192c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192C60u, 0x192C68u)) {
        return;
    }
    ctx->pc = 0x192C68u;
label_192c68:
    // 0x192c68: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x192c68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x192c6c: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x192c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x192c70: 0x2610bda8  addiu       $s0, $s0, -0x4258
    ctx->pc = 0x192c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950312));
    // 0x192c74: 0x26319860  addiu       $s1, $s1, -0x67A0
    ctx->pc = 0x192c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940768));
    // 0x192c78: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x192c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c84: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x192C84u;
    SET_GPR_U32(ctx, 31, 0x192C8Cu);
    ctx->pc = 0x192C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C84u;
    // 0x192c88: 0x24a59848  addiu       $a1, $a1, -0x67B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x192C84u, 0x192C8Cu)) {
        return;
    }
    ctx->pc = 0x192C8Cu;
label_192c8c:
    // 0x192c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c98: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192C98u;
    SET_GPR_U32(ctx, 31, 0x192CA0u);
    ctx->pc = 0x192C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C98u;
    // 0x192c9c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192C98u, 0x192CA0u)) {
        return;
    }
    ctx->pc = 0x192CA0u;
label_192ca0:
    // 0x192ca0: 0xafc00170  sw          $zero, 0x170($fp)
    ctx->pc = 0x192ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 368), GPR_U32(ctx, 0));
    // 0x192ca4: 0xafc0013c  sw          $zero, 0x13C($fp)
    ctx->pc = 0x192ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 316), GPR_U32(ctx, 0));
    // 0x192ca8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x192ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x192cac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x192cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192cb0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x192cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192cb4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x192cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192cb8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x192cb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192cbc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x192cbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192cc0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x192cc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192cc4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x192cc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192cc8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x192cc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x192CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CD0u;
        // 0x192cd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192CD8u;
}
