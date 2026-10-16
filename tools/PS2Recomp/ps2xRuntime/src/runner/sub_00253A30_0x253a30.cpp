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

// Function: sub_00253A30
// Address: 0x253a30 - 0x253dd8
void sub_00253A30_0x253a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253A30_0x253a30");
#endif

    switch (ctx->pc) {
        case 0x253a78u: goto label_253a78;
        case 0x253ab0u: goto label_253ab0;
        case 0x253ac4u: goto label_253ac4;
        case 0x253ad4u: goto label_253ad4;
        case 0x253aecu: goto label_253aec;
        case 0x253b10u: goto label_253b10;
        case 0x253b20u: goto label_253b20;
        case 0x253b7cu: goto label_253b7c;
        case 0x253bb0u: goto label_253bb0;
        case 0x253bbcu: goto label_253bbc;
        case 0x253bd8u: goto label_253bd8;
        case 0x253bf4u: goto label_253bf4;
        case 0x253c28u: goto label_253c28;
        case 0x253c34u: goto label_253c34;
        case 0x253c50u: goto label_253c50;
        case 0x253c78u: goto label_253c78;
        case 0x253cacu: goto label_253cac;
        case 0x253cb8u: goto label_253cb8;
        case 0x253cd8u: goto label_253cd8;
        case 0x253cf4u: goto label_253cf4;
        case 0x253d28u: goto label_253d28;
        case 0x253d34u: goto label_253d34;
        case 0x253d50u: goto label_253d50;
        case 0x253d84u: goto label_253d84;
        case 0x253d94u: goto label_253d94;
        default: break;
    }

    ctx->pc = 0x253a30u;

label_253a30:
    // 0x253a30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x253a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x253a34: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x253a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x253a38: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x253a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x253a3c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x253a3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a40: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x253a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x253a44: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x253a48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x253a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x253a4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x253a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a50: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x253a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x253a54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x253a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a58: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x253a58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a5c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x253a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x253a60: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x253a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x253a64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x253a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x253a68: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x253a68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253a70: 0xc09270a  jal         func_249C28
    ctx->pc = 0x253A70u;
    SET_GPR_U32(ctx, 31, 0x253A78u);
    ctx->pc = 0x253A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A70u;
    // 0x253a74: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x253A70u, 0x253A78u)) {
        return;
    }
    ctx->pc = 0x253A78u;
label_253a78:
    // 0x253a78: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x253A78u;
    {
        const bool branch_taken_0x253a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A78u;
        // 0x253a7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a78) {
            ctx->pc = 0x253B20u;
            goto label_253b20;
        }
    }
    ctx->pc = 0x253A80u;
    // 0x253a80: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x253a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x253a84: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x253a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x253a88: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x253a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x253a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253a90: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x253a90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x253a94: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x253A94u;
    {
        const bool branch_taken_0x253a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A94u;
        // 0x253a98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a94) {
            ctx->pc = 0x253AB8u;
            goto label_253ab8;
        }
    }
    ctx->pc = 0x253A9Cu;
    // 0x253a9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253aa0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253aa4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x253aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x253aa8: 0xc092848  jal         func_24A120
    ctx->pc = 0x253AA8u;
    SET_GPR_U32(ctx, 31, 0x253AB0u);
    ctx->pc = 0x253AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AA8u;
    // 0x253aac: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253AA8u, 0x253AB0u)) {
        return;
    }
    ctx->pc = 0x253AB0u;
label_253ab0:
    // 0x253ab0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x253AB0u;
    {
        const bool branch_taken_0x253ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AB0u;
        // 0x253ab4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ab0) {
            ctx->pc = 0x253B18u;
            goto label_253b18;
        }
    }
    ctx->pc = 0x253AB8u;
label_253ab8:
    // 0x253ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253abc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x253ABCu;
    SET_GPR_U32(ctx, 31, 0x253AC4u);
    ctx->pc = 0x253AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253ABCu;
    // 0x253ac0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x253ABCu, 0x253AC4u)) {
        return;
    }
    ctx->pc = 0x253AC4u;
label_253ac4:
    // 0x253ac4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x253ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253acc: 0xc093546  jal         func_24D518
    ctx->pc = 0x253ACCu;
    SET_GPR_U32(ctx, 31, 0x253AD4u);
    ctx->pc = 0x253AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253ACCu;
    // 0x253ad0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x253ACCu, 0x253AD4u)) {
        return;
    }
    ctx->pc = 0x253AD4u;
label_253ad4:
    // 0x253ad4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x253ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253ad8: 0x144300b0  bne         $v0, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x253AD8u;
    {
        const bool branch_taken_0x253ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x253ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AD8u;
        // 0x253adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ad8) {
            ctx->pc = 0x253D9Cu;
            goto label_253d9c;
        }
    }
    ctx->pc = 0x253AE0u;
    // 0x253ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x253ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ae4: 0xc094d3c  jal         func_2534F0
    ctx->pc = 0x253AE4u;
    SET_GPR_U32(ctx, 31, 0x253AECu);
    ctx->pc = 0x253AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AE4u;
    // 0x253ae8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2534F0u, 0x253AE4u, 0x253AECu)) {
        return;
    }
    ctx->pc = 0x253AECu;
label_253aec:
    // 0x253aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x253aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253af0: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x253AF0u;
    {
        const bool branch_taken_0x253af0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x253AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AF0u;
        // 0x253af4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253af0) {
            ctx->pc = 0x253B28u;
            goto label_253b28;
        }
    }
    ctx->pc = 0x253AF8u;
    // 0x253af8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253afc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253b00: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x253b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x253b04: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x253b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x253b08: 0xc092848  jal         func_24A120
    ctx->pc = 0x253B08u;
    SET_GPR_U32(ctx, 31, 0x253B10u);
    ctx->pc = 0x253B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B08u;
    // 0x253b0c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253B08u, 0x253B10u)) {
        return;
    }
    ctx->pc = 0x253B10u;
label_253b10:
    // 0x253b10: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x253b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x253b14: 0x0  nop
    ctx->pc = 0x253b14u;
    // NOP
label_253b18:
    // 0x253b18: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253B18u;
    SET_GPR_U32(ctx, 31, 0x253B20u);
    ctx->pc = 0x253B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B18u;
    // 0x253b1c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253B18u, 0x253B20u)) {
        return;
    }
    ctx->pc = 0x253B20u;
label_253b20:
    // 0x253b20: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x253B20u;
    {
        const bool branch_taken_0x253b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B20u;
        // 0x253b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b20) {
            ctx->pc = 0x253D9Cu;
            goto label_253d9c;
        }
    }
    ctx->pc = 0x253B28u;
label_253b28:
    // 0x253b28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x253b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x253b2c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x253b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x253b30: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x253b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x253b34: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x253b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253B38u;
    {
        const bool branch_taken_0x253b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B38u;
        // 0x253b3c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b38) {
            ctx->pc = 0x253B50u;
            goto label_253b50;
        }
    }
    ctx->pc = 0x253B40u;
    // 0x253b40: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b44: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x253b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x253b48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253B48u;
    {
        const bool branch_taken_0x253b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B48u;
        // 0x253b4c: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b48) {
            ctx->pc = 0x253B5Cu;
            goto label_253b5c;
        }
    }
    ctx->pc = 0x253B50u;
label_253b50:
    // 0x253b50: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x253b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b54: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x253b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x253b58: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x253b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_253b5c:
    // 0x253b5c: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x253b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x253b60: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x253b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253b64: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x253B64u;
    {
        const bool branch_taken_0x253b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B64u;
        // 0x253b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b64) {
            ctx->pc = 0x253BE4u;
            goto label_253be4;
        }
    }
    ctx->pc = 0x253B6Cu;
    // 0x253b6c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x253b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x253b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x253b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b74: 0xc09270a  jal         func_249C28
    ctx->pc = 0x253B74u;
    SET_GPR_U32(ctx, 31, 0x253B7Cu);
    ctx->pc = 0x253B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B74u;
    // 0x253b78: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x253B74u, 0x253B7Cu)) {
        return;
    }
    ctx->pc = 0x253B7Cu;
label_253b7c:
    // 0x253b7c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253b7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x253b80: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x253B80u;
    {
        const bool branch_taken_0x253b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B80u;
        // 0x253b84: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b80) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253B88u;
    // 0x253b88: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x253b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x253b8c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x253b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x253b90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253b94: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x253b94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x253b98: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x253B98u;
    {
        const bool branch_taken_0x253b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B98u;
        // 0x253b9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b98) {
            ctx->pc = 0x253BC0u;
            goto label_253bc0;
        }
    }
    ctx->pc = 0x253BA0u;
    // 0x253ba0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253ba4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x253ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x253ba8: 0xc092848  jal         func_24A120
    ctx->pc = 0x253BA8u;
    SET_GPR_U32(ctx, 31, 0x253BB0u);
    ctx->pc = 0x253BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BA8u;
    // 0x253bac: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253BA8u, 0x253BB0u)) {
        return;
    }
    ctx->pc = 0x253BB0u;
label_253bb0:
    // 0x253bb0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x253bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x253bb4: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253BB4u;
    SET_GPR_U32(ctx, 31, 0x253BBCu);
    ctx->pc = 0x253BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BB4u;
    // 0x253bb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253BB4u, 0x253BBCu)) {
        return;
    }
    ctx->pc = 0x253BBCu;
label_253bbc:
    // 0x253bbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x253bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253bc0:
    // 0x253bc0: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x253BC0u;
    {
        const bool branch_taken_0x253bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BC0u;
        // 0x253bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253bc0) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253BC8u;
    // 0x253bc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x253bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bcc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x253bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bd0: 0xc094d40  jal         func_253500
    ctx->pc = 0x253BD0u;
    SET_GPR_U32(ctx, 31, 0x253BD8u);
    ctx->pc = 0x253BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BD0u;
    // 0x253bd4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x253500u, 0x253BD0u, 0x253BD8u)) {
        return;
    }
    ctx->pc = 0x253BD8u;
label_253bd8:
    // 0x253bd8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253bd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x253bdc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x253BDCu;
    {
        const bool branch_taken_0x253bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BDCu;
        // 0x253be0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253bdc) {
            ctx->pc = 0x253C58u;
            goto label_253c58;
        }
    }
    ctx->pc = 0x253BE4u;
label_253be4:
    // 0x253be4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x253be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x253be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x253be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bec: 0xc09270a  jal         func_249C28
    ctx->pc = 0x253BECu;
    SET_GPR_U32(ctx, 31, 0x253BF4u);
    ctx->pc = 0x253BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BECu;
    // 0x253bf0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x253BECu, 0x253BF4u)) {
        return;
    }
    ctx->pc = 0x253BF4u;
label_253bf4:
    // 0x253bf4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253bf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x253bf8: 0x12000059  beqz        $s0, . + 4 + (0x59 << 2)
    ctx->pc = 0x253BF8u;
    {
        const bool branch_taken_0x253bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BF8u;
        // 0x253bfc: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253bf8) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253C00u;
    // 0x253c00: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x253c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x253c04: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x253c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x253c08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253c0c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x253c0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x253c10: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x253C10u;
    {
        const bool branch_taken_0x253c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C10u;
        // 0x253c14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c10) {
            ctx->pc = 0x253C38u;
            goto label_253c38;
        }
    }
    ctx->pc = 0x253C18u;
    // 0x253c18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253c1c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x253c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x253c20: 0xc092848  jal         func_24A120
    ctx->pc = 0x253C20u;
    SET_GPR_U32(ctx, 31, 0x253C28u);
    ctx->pc = 0x253C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C20u;
    // 0x253c24: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253C20u, 0x253C28u)) {
        return;
    }
    ctx->pc = 0x253C28u;
label_253c28:
    // 0x253c28: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x253c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x253c2c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253C2Cu;
    SET_GPR_U32(ctx, 31, 0x253C34u);
    ctx->pc = 0x253C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C2Cu;
    // 0x253c30: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253C2Cu, 0x253C34u)) {
        return;
    }
    ctx->pc = 0x253C34u;
label_253c34:
    // 0x253c34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x253c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253c38:
    // 0x253c38: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x253C38u;
    {
        const bool branch_taken_0x253c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C38u;
        // 0x253c3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c38) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253C40u;
    // 0x253c40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x253c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x253c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c48: 0xc094e8c  jal         func_253A30
    ctx->pc = 0x253C48u;
    SET_GPR_U32(ctx, 31, 0x253C50u);
    ctx->pc = 0x253C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C48u;
    // 0x253c4c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253A30u;
    goto label_253a30;
    ctx->pc = 0x253C50u;
label_253c50:
    // 0x253c50: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x253c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x253c54: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253c54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_253c58:
    // 0x253c58: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x253C58u;
    {
        const bool branch_taken_0x253c58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C58u;
        // 0x253c5c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c58) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253C60u;
    // 0x253c60: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x253C60u;
    {
        const bool branch_taken_0x253c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C60u;
        // 0x253c64: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c60) {
            ctx->pc = 0x253CE4u;
            goto label_253ce4;
        }
    }
    ctx->pc = 0x253C68u;
    // 0x253c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c6c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x253c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x253c70: 0xc09270a  jal         func_249C28
    ctx->pc = 0x253C70u;
    SET_GPR_U32(ctx, 31, 0x253C78u);
    ctx->pc = 0x253C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C70u;
    // 0x253c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x253C70u, 0x253C78u)) {
        return;
    }
    ctx->pc = 0x253C78u;
label_253c78:
    // 0x253c78: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253c78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x253c7c: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x253C7Cu;
    {
        const bool branch_taken_0x253c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C7Cu;
        // 0x253c80: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c7c) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253C84u;
    // 0x253c84: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x253c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x253c88: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x253c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x253c8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253c90: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x253c90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x253c94: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x253C94u;
    {
        const bool branch_taken_0x253c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C94u;
        // 0x253c98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c94) {
            ctx->pc = 0x253CC0u;
            goto label_253cc0;
        }
    }
    ctx->pc = 0x253C9Cu;
    // 0x253c9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253ca0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x253ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x253ca4: 0xc092848  jal         func_24A120
    ctx->pc = 0x253CA4u;
    SET_GPR_U32(ctx, 31, 0x253CACu);
    ctx->pc = 0x253CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CA4u;
    // 0x253ca8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253CA4u, 0x253CACu)) {
        return;
    }
    ctx->pc = 0x253CACu;
label_253cac:
    // 0x253cac: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x253cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x253cb0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253CB0u;
    SET_GPR_U32(ctx, 31, 0x253CB8u);
    ctx->pc = 0x253CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CB0u;
    // 0x253cb4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253CB0u, 0x253CB8u)) {
        return;
    }
    ctx->pc = 0x253CB8u;
label_253cb8:
    // 0x253cb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x253cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cbc: 0x0  nop
    ctx->pc = 0x253cbcu;
    // NOP
label_253cc0:
    // 0x253cc0: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x253CC0u;
    {
        const bool branch_taken_0x253cc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CC0u;
        // 0x253cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cc0) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253CC8u;
    // 0x253cc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x253cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ccc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x253cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cd0: 0xc094d40  jal         func_253500
    ctx->pc = 0x253CD0u;
    SET_GPR_U32(ctx, 31, 0x253CD8u);
    ctx->pc = 0x253CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CD0u;
    // 0x253cd4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x253500u, 0x253CD0u, 0x253CD8u)) {
        return;
    }
    ctx->pc = 0x253CD8u;
label_253cd8:
    // 0x253cd8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253cd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x253cdc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x253CDCu;
    {
        const bool branch_taken_0x253cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CDCu;
        // 0x253ce0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cdc) {
            ctx->pc = 0x253D58u;
            goto label_253d58;
        }
    }
    ctx->pc = 0x253CE4u;
label_253ce4:
    // 0x253ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ce8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x253ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x253cec: 0xc09270a  jal         func_249C28
    ctx->pc = 0x253CECu;
    SET_GPR_U32(ctx, 31, 0x253CF4u);
    ctx->pc = 0x253CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CECu;
    // 0x253cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x253CECu, 0x253CF4u)) {
        return;
    }
    ctx->pc = 0x253CF4u;
label_253cf4:
    // 0x253cf4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253cf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x253cf8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x253CF8u;
    {
        const bool branch_taken_0x253cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF8u;
        // 0x253cfc: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cf8) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253D00u;
    // 0x253d00: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x253d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x253d04: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x253d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x253d08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253d0c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x253d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x253d10: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x253D10u;
    {
        const bool branch_taken_0x253d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D10u;
        // 0x253d14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d10) {
            ctx->pc = 0x253D38u;
            goto label_253d38;
        }
    }
    ctx->pc = 0x253D18u;
    // 0x253d18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253d1c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x253d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x253d20: 0xc092848  jal         func_24A120
    ctx->pc = 0x253D20u;
    SET_GPR_U32(ctx, 31, 0x253D28u);
    ctx->pc = 0x253D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D20u;
    // 0x253d24: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253D20u, 0x253D28u)) {
        return;
    }
    ctx->pc = 0x253D28u;
label_253d28:
    // 0x253d28: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x253d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x253d2c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253D2Cu;
    SET_GPR_U32(ctx, 31, 0x253D34u);
    ctx->pc = 0x253D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D2Cu;
    // 0x253d30: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253D2Cu, 0x253D34u)) {
        return;
    }
    ctx->pc = 0x253D34u;
label_253d34:
    // 0x253d34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x253d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253d38:
    // 0x253d38: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253D38u;
    {
        const bool branch_taken_0x253d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D38u;
        // 0x253d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d38) {
            ctx->pc = 0x253D60u;
            goto label_253d60;
        }
    }
    ctx->pc = 0x253D40u;
    // 0x253d40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x253d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x253d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d48: 0xc094e8c  jal         func_253A30
    ctx->pc = 0x253D48u;
    SET_GPR_U32(ctx, 31, 0x253D50u);
    ctx->pc = 0x253D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D48u;
    // 0x253d4c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253A30u;
    goto label_253a30;
    ctx->pc = 0x253D50u;
label_253d50:
    // 0x253d50: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x253d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x253d54: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x253d54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_253d58:
    // 0x253d58: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x253D58u;
    {
        const bool branch_taken_0x253d58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x253D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D58u;
        // 0x253d5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d58) {
            ctx->pc = 0x253D9Cu;
            goto label_253d9c;
        }
    }
    ctx->pc = 0x253D60u;
label_253d60:
    // 0x253d60: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x253d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x253d64: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x253D64u;
    {
        const bool branch_taken_0x253d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D64u;
        // 0x253d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d64) {
            ctx->pc = 0x253D9Cu;
            goto label_253d9c;
        }
    }
    ctx->pc = 0x253D6Cu;
    // 0x253d6c: 0x92a20003  lbu         $v0, 0x3($s5)
    ctx->pc = 0x253d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x253d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253d74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253D74u;
    {
        const bool branch_taken_0x253d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d74) {
            ctx->pc = 0x253D8Cu;
            goto label_253d8c;
        }
    }
    ctx->pc = 0x253D7Cu;
    // 0x253d7c: 0xc096f10  jal         func_25BC40
    ctx->pc = 0x253D7Cu;
    SET_GPR_U32(ctx, 31, 0x253D84u);
    ctx->pc = 0x25BC40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25BC40u, 0x253D7Cu, 0x253D84u)) {
        return;
    }
    ctx->pc = 0x253D84u;
label_253d84:
    // 0x253d84: 0x1000ff66  b           . + 4 + (-0x9A << 2)
    ctx->pc = 0x253D84u;
    {
        const bool branch_taken_0x253d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D84u;
        // 0x253d88: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d84) {
            ctx->pc = 0x253B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253b20;
        }
    }
    ctx->pc = 0x253D8Cu;
label_253d8c:
    // 0x253d8c: 0xc096f54  jal         func_25BD50
    ctx->pc = 0x253D8Cu;
    SET_GPR_U32(ctx, 31, 0x253D94u);
    ctx->pc = 0x25BD50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25BD50u, 0x253D8Cu, 0x253D94u)) {
        return;
    }
    ctx->pc = 0x253D94u;
label_253d94:
    // 0x253d94: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x253D94u;
    {
        const bool branch_taken_0x253d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D94u;
        // 0x253d98: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d94) {
            ctx->pc = 0x253B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253b20;
        }
    }
    ctx->pc = 0x253D9Cu;
label_253d9c:
    // 0x253d9c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x253d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x253da0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x253da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x253da4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x253da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253da8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x253da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253dac: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x253dacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253db0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x253db0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253db4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x253db4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253db8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x253db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x253DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DBCu;
        // 0x253dc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253DC4u;
    // 0x253dc4: 0x0  nop
    ctx->pc = 0x253dc4u;
    // NOP
    // 0x253dc8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x253dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x253dcc: 0x0  nop
    ctx->pc = 0x253dccu;
    // NOP
    // 0x253dd0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x253dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x253dd4: 0x0  nop
    ctx->pc = 0x253dd4u;
    // NOP
    ctx->pc = 0x253dd8u;
}
