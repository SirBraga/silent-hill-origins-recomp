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

// Function: sub_001C69A8
// Address: 0x1c69a8 - 0x1c6b88
void sub_001C69A8_0x1c69a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C69A8_0x1c69a8");
#endif

    switch (ctx->pc) {
        case 0x1c69a8u: goto label_1c69a8;
        case 0x1c69acu: goto label_1c69ac;
        case 0x1c69b0u: goto label_1c69b0;
        case 0x1c69b4u: goto label_1c69b4;
        case 0x1c69b8u: goto label_1c69b8;
        case 0x1c69bcu: goto label_1c69bc;
        case 0x1c69c0u: goto label_1c69c0;
        case 0x1c69c4u: goto label_1c69c4;
        case 0x1c69c8u: goto label_1c69c8;
        case 0x1c69ccu: goto label_1c69cc;
        case 0x1c69d0u: goto label_1c69d0;
        case 0x1c69d4u: goto label_1c69d4;
        case 0x1c69d8u: goto label_1c69d8;
        case 0x1c69dcu: goto label_1c69dc;
        case 0x1c69e0u: goto label_1c69e0;
        case 0x1c69e4u: goto label_1c69e4;
        case 0x1c69e8u: goto label_1c69e8;
        case 0x1c69ecu: goto label_1c69ec;
        case 0x1c69f0u: goto label_1c69f0;
        case 0x1c69f4u: goto label_1c69f4;
        case 0x1c69f8u: goto label_1c69f8;
        case 0x1c69fcu: goto label_1c69fc;
        case 0x1c6a00u: goto label_1c6a00;
        case 0x1c6a04u: goto label_1c6a04;
        case 0x1c6a08u: goto label_1c6a08;
        case 0x1c6a0cu: goto label_1c6a0c;
        case 0x1c6a10u: goto label_1c6a10;
        case 0x1c6a14u: goto label_1c6a14;
        case 0x1c6a18u: goto label_1c6a18;
        case 0x1c6a1cu: goto label_1c6a1c;
        case 0x1c6a20u: goto label_1c6a20;
        case 0x1c6a24u: goto label_1c6a24;
        case 0x1c6a28u: goto label_1c6a28;
        case 0x1c6a2cu: goto label_1c6a2c;
        case 0x1c6a30u: goto label_1c6a30;
        case 0x1c6a34u: goto label_1c6a34;
        case 0x1c6a38u: goto label_1c6a38;
        case 0x1c6a3cu: goto label_1c6a3c;
        case 0x1c6a40u: goto label_1c6a40;
        case 0x1c6a44u: goto label_1c6a44;
        case 0x1c6a48u: goto label_1c6a48;
        case 0x1c6a4cu: goto label_1c6a4c;
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a54u: goto label_1c6a54;
        case 0x1c6a58u: goto label_1c6a58;
        case 0x1c6a5cu: goto label_1c6a5c;
        case 0x1c6a60u: goto label_1c6a60;
        case 0x1c6a64u: goto label_1c6a64;
        case 0x1c6a68u: goto label_1c6a68;
        case 0x1c6a6cu: goto label_1c6a6c;
        case 0x1c6a70u: goto label_1c6a70;
        case 0x1c6a74u: goto label_1c6a74;
        case 0x1c6a78u: goto label_1c6a78;
        case 0x1c6a7cu: goto label_1c6a7c;
        case 0x1c6a80u: goto label_1c6a80;
        case 0x1c6a84u: goto label_1c6a84;
        case 0x1c6a88u: goto label_1c6a88;
        case 0x1c6a8cu: goto label_1c6a8c;
        case 0x1c6a90u: goto label_1c6a90;
        case 0x1c6a94u: goto label_1c6a94;
        case 0x1c6a98u: goto label_1c6a98;
        case 0x1c6a9cu: goto label_1c6a9c;
        case 0x1c6aa0u: goto label_1c6aa0;
        case 0x1c6aa4u: goto label_1c6aa4;
        case 0x1c6aa8u: goto label_1c6aa8;
        case 0x1c6aacu: goto label_1c6aac;
        case 0x1c6ab0u: goto label_1c6ab0;
        case 0x1c6ab4u: goto label_1c6ab4;
        case 0x1c6ab8u: goto label_1c6ab8;
        case 0x1c6abcu: goto label_1c6abc;
        case 0x1c6ac0u: goto label_1c6ac0;
        case 0x1c6ac4u: goto label_1c6ac4;
        case 0x1c6ac8u: goto label_1c6ac8;
        case 0x1c6accu: goto label_1c6acc;
        case 0x1c6ad0u: goto label_1c6ad0;
        case 0x1c6ad4u: goto label_1c6ad4;
        case 0x1c6ad8u: goto label_1c6ad8;
        case 0x1c6adcu: goto label_1c6adc;
        case 0x1c6ae0u: goto label_1c6ae0;
        case 0x1c6ae4u: goto label_1c6ae4;
        case 0x1c6ae8u: goto label_1c6ae8;
        case 0x1c6aecu: goto label_1c6aec;
        case 0x1c6af0u: goto label_1c6af0;
        case 0x1c6af4u: goto label_1c6af4;
        case 0x1c6af8u: goto label_1c6af8;
        case 0x1c6afcu: goto label_1c6afc;
        case 0x1c6b00u: goto label_1c6b00;
        case 0x1c6b04u: goto label_1c6b04;
        case 0x1c6b08u: goto label_1c6b08;
        case 0x1c6b0cu: goto label_1c6b0c;
        case 0x1c6b10u: goto label_1c6b10;
        case 0x1c6b14u: goto label_1c6b14;
        case 0x1c6b18u: goto label_1c6b18;
        case 0x1c6b1cu: goto label_1c6b1c;
        case 0x1c6b20u: goto label_1c6b20;
        case 0x1c6b24u: goto label_1c6b24;
        case 0x1c6b28u: goto label_1c6b28;
        case 0x1c6b2cu: goto label_1c6b2c;
        case 0x1c6b30u: goto label_1c6b30;
        case 0x1c6b34u: goto label_1c6b34;
        case 0x1c6b38u: goto label_1c6b38;
        case 0x1c6b3cu: goto label_1c6b3c;
        case 0x1c6b40u: goto label_1c6b40;
        case 0x1c6b44u: goto label_1c6b44;
        case 0x1c6b48u: goto label_1c6b48;
        case 0x1c6b4cu: goto label_1c6b4c;
        case 0x1c6b50u: goto label_1c6b50;
        case 0x1c6b54u: goto label_1c6b54;
        case 0x1c6b58u: goto label_1c6b58;
        case 0x1c6b5cu: goto label_1c6b5c;
        case 0x1c6b60u: goto label_1c6b60;
        case 0x1c6b64u: goto label_1c6b64;
        case 0x1c6b68u: goto label_1c6b68;
        case 0x1c6b6cu: goto label_1c6b6c;
        case 0x1c6b70u: goto label_1c6b70;
        case 0x1c6b74u: goto label_1c6b74;
        case 0x1c6b78u: goto label_1c6b78;
        case 0x1c6b7cu: goto label_1c6b7c;
        case 0x1c6b80u: goto label_1c6b80;
        case 0x1c6b84u: goto label_1c6b84;
        default: break;
    }

    ctx->pc = 0x1c69a8u;

label_1c69a8:
    // 0x1c69a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c69a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c69ac:
    // 0x1c69ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c69acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1c69b0:
    // 0x1c69b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c69b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1c69b4:
    // 0x1c69b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c69b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c69b8:
    // 0x1c69b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1c69b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1c69bc:
    // 0x1c69bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c69bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c69c0:
    // 0x1c69c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c69c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1c69c4:
    // 0x1c69c4: 0x26140278  addiu       $s4, $s0, 0x278
    ctx->pc = 0x1c69c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
label_1c69c8:
    // 0x1c69c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c69cc:
    // 0x1c69cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1c69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1c69d0:
    // 0x1c69d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c69d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c69d4:
    // 0x1c69d4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1c69d8:
    // 0x1c69d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c69dc:
    // 0x1c69dc: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_1c69e0:
    if (ctx->pc == 0x1C69E0u) {
        ctx->pc = 0x1C69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69DCu;
        // 0x1c69e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69E4u;
        goto label_1c69e4;
    }
    ctx->pc = 0x1C69DCu;
    {
        const bool branch_taken_0x1c69dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69DCu;
        // 0x1c69e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69dc) {
            ctx->pc = 0x1C6AD4u;
            goto label_1c6ad4;
        }
    }
    ctx->pc = 0x1C69E4u;
label_1c69e4:
    // 0x1c69e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c69e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c69e8:
    // 0x1c69e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c69e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c69ec:
    // 0x1c69ec: 0xc0c493d  jal         func_3124F4
label_1c69f0:
    if (ctx->pc == 0x1C69F0u) {
        ctx->pc = 0x1C69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69ECu;
        // 0x1c69f0: 0x128940  sll         $s1, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69F4u;
        goto label_1c69f4;
    }
    ctx->pc = 0x1C69ECu;
    SET_GPR_U32(ctx, 31, 0x1C69F4u);
    ctx->pc = 0x1C69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69ECu;
    // 0x1c69f0: 0x128940  sll         $s1, $s2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C69ECu, 0x1C69F4u)) {
        return;
    }
    ctx->pc = 0x1C69F4u;
label_1c69f4:
    // 0x1c69f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1c69f8:
    // 0x1c69f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c69f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c69fc:
    // 0x1c69fc: 0x2453f1b8  addiu       $s3, $v0, -0xE48
    ctx->pc = 0x1c69fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963640));
label_1c6a00:
    // 0x1c6a00: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1c6a00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1c6a04:
    // 0x1c6a04: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1c6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1c6a08:
    // 0x1c6a08: 0x37a7000c  ori         $a3, $sp, 0xC
    ctx->pc = 0x1c6a08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_1c6a0c:
    // 0x1c6a0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a10:
    // 0x1c6a10: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c6a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a14:
    // 0x1c6a14: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c6a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a18:
    // 0x1c6a18: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c6a1c:
    // 0x1c6a1c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1c6a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6a20:
    // 0x1c6a20: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x1c6a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_1c6a24:
    // 0x1c6a24: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1c6a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6a28:
    // 0x1c6a28: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x1c6a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6a2c:
    // 0x1c6a2c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1c6a2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c6a30:
    // 0x1c6a30: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1c6a30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c6a34:
    // 0x1c6a34: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c6a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c6a38:
    // 0x1c6a38: 0xc06cda0  jal         func_1B3680
label_1c6a3c:
    if (ctx->pc == 0x1C6A3Cu) {
        ctx->pc = 0x1C6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A38u;
        // 0x1c6a3c: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A40u;
        goto label_1c6a40;
    }
    ctx->pc = 0x1C6A38u;
    SET_GPR_U32(ctx, 31, 0x1C6A40u);
    ctx->pc = 0x1C6A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A38u;
    // 0x1c6a3c: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1C6A38u, 0x1C6A40u)) {
        return;
    }
    ctx->pc = 0x1C6A40u;
label_1c6a40:
    // 0x1c6a40: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c6a44:
    // 0x1c6a44: 0xc06dc32  jal         func_1B70C8
label_1c6a48:
    if (ctx->pc == 0x1C6A48u) {
        ctx->pc = 0x1C6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A44u;
        // 0x1c6a48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A4Cu;
        goto label_1c6a4c;
    }
    ctx->pc = 0x1C6A44u;
    SET_GPR_U32(ctx, 31, 0x1C6A4Cu);
    ctx->pc = 0x1C6A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A44u;
    // 0x1c6a48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1C6A44u, 0x1C6A4Cu)) {
        return;
    }
    ctx->pc = 0x1C6A4Cu;
label_1c6a4c:
    // 0x1c6a4c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_1c6a50:
    if (ctx->pc == 0x1C6A50u) {
        ctx->pc = 0x1C6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A4Cu;
        // 0x1c6a50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A54u;
        goto label_1c6a54;
    }
    ctx->pc = 0x1C6A4Cu;
    {
        const bool branch_taken_0x1c6a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A4Cu;
        // 0x1c6a50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a4c) {
            ctx->pc = 0x1C6B64u;
            goto label_1c6b64;
        }
    }
    ctx->pc = 0x1C6A54u;
label_1c6a54:
    // 0x1c6a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a58:
    // 0x1c6a58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c6a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6a5c:
    // 0x1c6a5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a60:
    // 0x1c6a60: 0xc071bf6  jal         func_1C6FD8
label_1c6a64:
    if (ctx->pc == 0x1C6A64u) {
        ctx->pc = 0x1C6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A60u;
        // 0x1c6a64: 0xae020290  sw          $v0, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A68u;
        goto label_1c6a68;
    }
    ctx->pc = 0x1C6A60u;
    SET_GPR_U32(ctx, 31, 0x1C6A68u);
    ctx->pc = 0x1C6A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A60u;
    // 0x1c6a64: 0xae020290  sw          $v0, 0x290($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6FD8u, 0x1C6A60u, 0x1C6A68u)) {
        return;
    }
    ctx->pc = 0x1C6A68u;
label_1c6a68:
    // 0x1c6a68: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c6a6c:
    // 0x1c6a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a70:
    // 0x1c6a70: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1c6a74:
    // 0x1c6a74: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c6a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c6a78:
    // 0x1c6a78: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x1c6a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c6a7c:
    // 0x1c6a7c: 0xc0f809  jalr        $a2
label_1c6a80:
    if (ctx->pc == 0x1C6A80u) {
        ctx->pc = 0x1C6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A7Cu;
        // 0x1c6a80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A84u;
        goto label_1c6a84;
    }
    ctx->pc = 0x1C6A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C6A84u);
        ctx->pc = 0x1C6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A7Cu;
        // 0x1c6a80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A7Cu, 0x1C6A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6A84u;
label_1c6a84:
    // 0x1c6a84: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1c6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1c6a88:
    // 0x1c6a88: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1c6a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1c6a8c:
    // 0x1c6a8c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1c6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c6a90:
    // 0x1c6a90: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1c6a94:
    // 0x1c6a94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c6a98:
    // 0x1c6a98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c6a9c:
    if (ctx->pc == 0x1C6A9Cu) {
        ctx->pc = 0x1C6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A98u;
        // 0x1c6a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AA0u;
        goto label_1c6aa0;
    }
    ctx->pc = 0x1C6A98u;
    {
        const bool branch_taken_0x1c6a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A98u;
        // 0x1c6a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a98) {
            ctx->pc = 0x1C6AA8u;
            goto label_1c6aa8;
        }
    }
    ctx->pc = 0x1C6AA0u;
label_1c6aa0:
    // 0x1c6aa0: 0xc071bf6  jal         func_1C6FD8
label_1c6aa4:
    if (ctx->pc == 0x1C6AA4u) {
        ctx->pc = 0x1C6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AA0u;
        // 0x1c6aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AA8u;
        goto label_1c6aa8;
    }
    ctx->pc = 0x1C6AA0u;
    SET_GPR_U32(ctx, 31, 0x1C6AA8u);
    ctx->pc = 0x1C6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA0u;
    // 0x1c6aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6FD8u, 0x1C6AA0u, 0x1C6AA8u)) {
        return;
    }
    ctx->pc = 0x1C6AA8u;
label_1c6aa8:
    // 0x1c6aa8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1c6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1c6aac:
    // 0x1c6aac: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1c6aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1c6ab0:
    // 0x1c6ab0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c6ab4:
    // 0x1c6ab4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1c6ab8:
    // 0x1c6ab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c6abc:
    // 0x1c6abc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1c6ac0:
    if (ctx->pc == 0x1C6AC0u) {
        ctx->pc = 0x1C6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ABCu;
        // 0x1c6ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AC4u;
        goto label_1c6ac4;
    }
    ctx->pc = 0x1C6ABCu;
    {
        const bool branch_taken_0x1c6abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ABCu;
        // 0x1c6ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6abc) {
            ctx->pc = 0x1C6B5Cu;
            goto label_1c6b5c;
        }
    }
    ctx->pc = 0x1C6AC4u;
label_1c6ac4:
    // 0x1c6ac4: 0xc071bf6  jal         func_1C6FD8
label_1c6ac8:
    if (ctx->pc == 0x1C6AC8u) {
        ctx->pc = 0x1C6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AC4u;
        // 0x1c6ac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6ACCu;
        goto label_1c6acc;
    }
    ctx->pc = 0x1C6AC4u;
    SET_GPR_U32(ctx, 31, 0x1C6ACCu);
    ctx->pc = 0x1C6AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AC4u;
    // 0x1c6ac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6FD8u, 0x1C6AC4u, 0x1C6ACCu)) {
        return;
    }
    ctx->pc = 0x1C6ACCu;
label_1c6acc:
    // 0x1c6acc: 0x10000026  b           . + 4 + (0x26 << 2)
label_1c6ad0:
    if (ctx->pc == 0x1C6AD0u) {
        ctx->pc = 0x1C6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ACCu;
        // 0x1c6ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AD4u;
        goto label_1c6ad4;
    }
    ctx->pc = 0x1C6ACCu;
    {
        const bool branch_taken_0x1c6acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ACCu;
        // 0x1c6ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6acc) {
            ctx->pc = 0x1C6B68u;
            goto label_1c6b68;
        }
    }
    ctx->pc = 0x1C6AD4u;
label_1c6ad4:
    // 0x1c6ad4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ad8:
    // 0x1c6ad8: 0xc0c493d  jal         func_3124F4
label_1c6adc:
    if (ctx->pc == 0x1C6ADCu) {
        ctx->pc = 0x1C6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AD8u;
        // 0x1c6adc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AE0u;
        goto label_1c6ae0;
    }
    ctx->pc = 0x1C6AD8u;
    SET_GPR_U32(ctx, 31, 0x1C6AE0u);
    ctx->pc = 0x1C6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AD8u;
    // 0x1c6adc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C6AD8u, 0x1C6AE0u)) {
        return;
    }
    ctx->pc = 0x1C6AE0u;
label_1c6ae0:
    // 0x1c6ae0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1c6ae4:
    // 0x1c6ae4: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x1c6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_1c6ae8:
    // 0x1c6ae8: 0x2463f1b8  addiu       $v1, $v1, -0xE48
    ctx->pc = 0x1c6ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963640));
label_1c6aec:
    // 0x1c6aec: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c6aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c6af0:
    // 0x1c6af0: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1c6af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c6af4:
    // 0x1c6af4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1c6af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c6af8:
    // 0x1c6af8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1c6af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c6afc:
    // 0x1c6afc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1c6afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c6b00:
    // 0x1c6b00: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1c6b00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b04:
    // 0x1c6b04: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1c6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6b08:
    // 0x1c6b08: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1c6b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6b0c:
    // 0x1c6b0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c6b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b10:
    // 0x1c6b10: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x1c6b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6b14:
    // 0x1c6b14: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1c6b14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c6b18:
    // 0x1c6b18: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c6b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c6b1c:
    // 0x1c6b1c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c6b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c6b20:
    // 0x1c6b20: 0xc06dc32  jal         func_1B70C8
label_1c6b24:
    if (ctx->pc == 0x1C6B24u) {
        ctx->pc = 0x1C6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B20u;
        // 0x1c6b24: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B28u;
        goto label_1c6b28;
    }
    ctx->pc = 0x1C6B20u;
    SET_GPR_U32(ctx, 31, 0x1C6B28u);
    ctx->pc = 0x1C6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B20u;
    // 0x1c6b24: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1C6B20u, 0x1C6B28u)) {
        return;
    }
    ctx->pc = 0x1C6B28u;
label_1c6b28:
    // 0x1c6b28: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c6b2c:
    if (ctx->pc == 0x1C6B2Cu) {
        ctx->pc = 0x1C6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B28u;
        // 0x1c6b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B30u;
        goto label_1c6b30;
    }
    ctx->pc = 0x1C6B28u;
    {
        const bool branch_taken_0x1c6b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B28u;
        // 0x1c6b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b28) {
            ctx->pc = 0x1C6B64u;
            goto label_1c6b64;
        }
    }
    ctx->pc = 0x1C6B30u;
label_1c6b30:
    // 0x1c6b30: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1c6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
label_1c6b34:
    // 0x1c6b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c6b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b38:
    // 0x1c6b38: 0xc071bf6  jal         func_1C6FD8
label_1c6b3c:
    if (ctx->pc == 0x1C6B3Cu) {
        ctx->pc = 0x1C6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B38u;
        // 0x1c6b3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B40u;
        goto label_1c6b40;
    }
    ctx->pc = 0x1C6B38u;
    SET_GPR_U32(ctx, 31, 0x1C6B40u);
    ctx->pc = 0x1C6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B38u;
    // 0x1c6b3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6FD8u, 0x1C6B38u, 0x1C6B40u)) {
        return;
    }
    ctx->pc = 0x1C6B40u;
label_1c6b40:
    // 0x1c6b40: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c6b44:
    // 0x1c6b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c6b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6b48:
    // 0x1c6b48: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c6b4c:
    // 0x1c6b4c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c6b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c6b50:
    // 0x1c6b50: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c6b54:
    // 0x1c6b54: 0x60f809  jalr        $v1
label_1c6b58:
    if (ctx->pc == 0x1C6B58u) {
        ctx->pc = 0x1C6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B54u;
        // 0x1c6b58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B5Cu;
        goto label_1c6b5c;
    }
    ctx->pc = 0x1C6B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C6B5Cu);
        ctx->pc = 0x1C6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B54u;
        // 0x1c6b58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B54u, 0x1C6B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6B5Cu;
label_1c6b5c:
    // 0x1c6b5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c6b60:
    if (ctx->pc == 0x1C6B60u) {
        ctx->pc = 0x1C6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B5Cu;
        // 0x1c6b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B64u;
        goto label_1c6b64;
    }
    ctx->pc = 0x1C6B5Cu;
    {
        const bool branch_taken_0x1c6b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B5Cu;
        // 0x1c6b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b5c) {
            ctx->pc = 0x1C6B68u;
            goto label_1c6b68;
        }
    }
    ctx->pc = 0x1C6B64u;
label_1c6b64:
    // 0x1c6b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b68:
    // 0x1c6b68: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c6b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c6b6c:
    // 0x1c6b6c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c6b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c6b70:
    // 0x1c6b70: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c6b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c6b74:
    // 0x1c6b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c6b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c6b78:
    // 0x1c6b78: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1c6b78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6b7c:
    // 0x1c6b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c6b80:
    // 0x1c6b80: 0x3e00008  jr          $ra
label_1c6b84:
    if (ctx->pc == 0x1C6B84u) {
        ctx->pc = 0x1C6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B80u;
        // 0x1c6b84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B88u;
        goto label_fallthrough_0x1c6b80;
    }
    ctx->pc = 0x1C6B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B80u;
        // 0x1c6b84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c6b80:
    ctx->pc = 0x1C6B88u;
}
