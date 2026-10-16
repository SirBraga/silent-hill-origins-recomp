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

// Function: sub_00235C70
// Address: 0x235c70 - 0x235fa8
void sub_00235C70_0x235c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235C70_0x235c70");
#endif

    switch (ctx->pc) {
        case 0x235d70u: goto label_235d70;
        case 0x235e08u: goto label_235e08;
        case 0x235edcu: goto label_235edc;
        case 0x235efcu: goto label_235efc;
        case 0x235f14u: goto label_235f14;
        default: break;
    }

    ctx->pc = 0x235c70u;

    // 0x235c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235c74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x235c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x235c78: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x235c78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x235c7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x235c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x235c80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x235c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x235c84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x235c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x235c8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235c94: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x235c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x235c98: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x235c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x235c9c: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x235c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x235ca0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x235ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x235ca4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x235ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x235ca8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235CA8u;
    {
        const bool branch_taken_0x235ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x235CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CA8u;
        // 0x235cac: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ca8) {
            ctx->pc = 0x235CD4u;
            goto label_235cd4;
        }
    }
    ctx->pc = 0x235CB0u;
    // 0x235cb0: 0x90820036  lbu         $v0, 0x36($a0)
    ctx->pc = 0x235cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x235cb4: 0x304300fe  andi        $v1, $v0, 0xFE
    ctx->pc = 0x235cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x235cb8: 0xa0830036  sb          $v1, 0x36($a0)
    ctx->pc = 0x235cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 3));
    // 0x235cbc: 0x90a20036  lbu         $v0, 0x36($a1)
    ctx->pc = 0x235cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x235cc0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x235cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x235cc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235CC4u;
    {
        const bool branch_taken_0x235cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CC4u;
        // 0x235cc8: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cc4) {
            ctx->pc = 0x235CD0u;
            goto label_235cd0;
        }
    }
    ctx->pc = 0x235CCCu;
    // 0x235ccc: 0x306200fd  andi        $v0, $v1, 0xFD
    ctx->pc = 0x235cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_235cd0:
    // 0x235cd0: 0xa0820036  sb          $v0, 0x36($a0)
    ctx->pc = 0x235cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 2));
label_235cd4:
    // 0x235cd4: 0x90a20036  lbu         $v0, 0x36($a1)
    ctx->pc = 0x235cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x235cd8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x235cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x235cdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235CDCu;
    {
        const bool branch_taken_0x235cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CDCu;
        // 0x235ce0: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cdc) {
            ctx->pc = 0x235D04u;
            goto label_235d04;
        }
    }
    ctx->pc = 0x235CE4u;
    // 0x235ce4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x235ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x235ce8: 0x34420015  ori         $v0, $v0, 0x15
    ctx->pc = 0x235ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x235cec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x235cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x235cf0: 0x146000a7  bnez        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x235CF0u;
    {
        const bool branch_taken_0x235cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF0u;
        // 0x235cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cf0) {
            ctx->pc = 0x235F90u;
            goto label_235f90;
        }
    }
    ctx->pc = 0x235CF8u;
    // 0x235cf8: 0x90820036  lbu         $v0, 0x36($a0)
    ctx->pc = 0x235cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x235cfc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x235cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x235d00: 0xa0820036  sb          $v0, 0x36($a0)
    ctx->pc = 0x235d00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 2));
label_235d04:
    // 0x235d04: 0x92030023  lbu         $v1, 0x23($s0)
    ctx->pc = 0x235d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x235d08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x235d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x235d0c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x235d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x235d10: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x235d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x235d14: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x235d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x235d18: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x235d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x235d1c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x235d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x235d20: 0x92050020  lbu         $a1, 0x20($s0)
    ctx->pc = 0x235d20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x235d24: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x235d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x235d28: 0x54440081  bnel        $v0, $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x235D28u;
    {
        const bool branch_taken_0x235d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x235d28) {
            ctx->pc = 0x235D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D28u;
            // 0x235d2c: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235F30u;
            goto label_235f30;
        }
    }
    ctx->pc = 0x235D30u;
    // 0x235d30: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x235d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x235d34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235d38: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x235d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x235d3c: 0x5443007c  bnel        $v0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x235D3Cu;
    {
        const bool branch_taken_0x235d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x235d3c) {
            ctx->pc = 0x235D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D3Cu;
            // 0x235d40: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235F30u;
            goto label_235f30;
        }
    }
    ctx->pc = 0x235D44u;
    // 0x235d44: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x235d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x235d48: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x235d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x235d4c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x235d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x235d50: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x235d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x235d54: 0xa2240020  sb          $a0, 0x20($s1)
    ctx->pc = 0x235d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x235d58: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x235d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x235d5c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x235d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x235d60: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x235d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d64: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x235d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x235d68: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x235D68u;
    SET_GPR_U32(ctx, 31, 0x235D70u);
    ctx->pc = 0x235D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D68u;
    // 0x235d6c: 0xa622001c  sh          $v0, 0x1C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x235D68u, 0x235D70u)) {
        return;
    }
    ctx->pc = 0x235D70u;
label_235d70:
    // 0x235d70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x235d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235d74: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x235d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x235d78: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x235d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x235d7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x235d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x235d80: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x235d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x235d84: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x235D84u;
    {
        const bool branch_taken_0x235d84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D84u;
        // 0x235d88: 0x861023  subu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d84) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235D8Cu;
    // 0x235d8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x235d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x235d90: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x235d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_235d94:
    // 0x235d94: 0x8624001c  lh          $a0, 0x1C($s1)
    ctx->pc = 0x235d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x235d98: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x235d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x235d9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x235d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x235da0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x235da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x235da4: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x235da4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235da8: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x235DA8u;
    {
        const bool branch_taken_0x235da8 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x235DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DA8u;
        // 0x235dac: 0x9625001c  lhu         $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235da8) {
            ctx->pc = 0x235DC0u;
            goto label_235dc0;
        }
    }
    ctx->pc = 0x235DB0u;
    // 0x235db0: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x235db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x235db4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235DB4u;
    {
        const bool branch_taken_0x235db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DB4u;
        // 0x235db8: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235db4) {
            ctx->pc = 0x235DC0u;
            goto label_235dc0;
        }
    }
    ctx->pc = 0x235DBCu;
    // 0x235dbc: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x235dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
label_235dc0:
    // 0x235dc0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x235dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x235dc4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x235dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x235dc8: 0x8626001e  lh          $a2, 0x1E($s1)
    ctx->pc = 0x235dc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x235dcc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x235dccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x235dd0: 0x9624001e  lhu         $a0, 0x1E($s1)
    ctx->pc = 0x235dd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x235dd4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x235dd4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x235dd8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x235DD8u;
    {
        const bool branch_taken_0x235dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235dd8) {
            ctx->pc = 0x235DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DD8u;
            // 0x235ddc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x235DE0u;
            goto label_235de0;
        }
    }
    ctx->pc = 0x235DE0u;
label_235de0:
    // 0x235de0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x235de4: 0x1812  mflo        $v1
    ctx->pc = 0x235de4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x235de8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x235de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x235dec: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x235decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x235df0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x235df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x235df4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x235df8: 0xa624001e  sh          $a0, 0x1E($s1)
    ctx->pc = 0x235df8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 4));
    // 0x235dfc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x235dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e00: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x235E00u;
    SET_GPR_U32(ctx, 31, 0x235E08u);
    ctx->pc = 0x235E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E00u;
    // 0x235e04: 0xae250010  sw          $a1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x235E00u, 0x235E08u)) {
        return;
    }
    ctx->pc = 0x235E08u;
label_235e08:
    // 0x235e08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x235e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235e0c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x235e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x235e10: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x235e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x235e14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x235e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x235e18: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x235e18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x235e1c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x235E1Cu;
    {
        const bool branch_taken_0x235e1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E1Cu;
        // 0x235e20: 0x861023  subu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e1c) {
            ctx->pc = 0x235E2Cu;
            goto label_235e2c;
        }
    }
    ctx->pc = 0x235E24u;
    // 0x235e24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x235e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x235e28: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x235e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_235e2c:
    // 0x235e2c: 0x8624001e  lh          $a0, 0x1E($s1)
    ctx->pc = 0x235e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x235e30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x235e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x235e34: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x235e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x235e38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x235e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x235e3c: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x235e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235e40: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x235E40u;
    {
        const bool branch_taken_0x235e40 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x235E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E40u;
        // 0x235e44: 0x9625001e  lhu         $a1, 0x1E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e40) {
            ctx->pc = 0x235E58u;
            goto label_235e58;
        }
    }
    ctx->pc = 0x235E48u;
    // 0x235e48: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x235e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x235e4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235E4Cu;
    {
        const bool branch_taken_0x235e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E4Cu;
        // 0x235e50: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e4c) {
            ctx->pc = 0x235E58u;
            goto label_235e58;
        }
    }
    ctx->pc = 0x235E54u;
    // 0x235e54: 0xa622001e  sh          $v0, 0x1E($s1)
    ctx->pc = 0x235e54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 2));
label_235e58:
    // 0x235e58: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x235e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x235e5c: 0x8624001e  lh          $a0, 0x1E($s1)
    ctx->pc = 0x235e5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x235e60: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x235e60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x235e64: 0x9623001c  lhu         $v1, 0x1C($s1)
    ctx->pc = 0x235e64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x235e68: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x235e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x235e6c: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x235e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x235e70: 0x8e10416c  lw          $s0, 0x416C($s0)
    ctx->pc = 0x235e70u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x235e74: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x235e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x235e78: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x235e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x235e7c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x235e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x235e80: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x235e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x235e84: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x235e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x235e88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x235e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x235e8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x235e8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x235e90: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x235e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x235e94: 0xdf828458  ld          $v0, -0x7BA8($gp)
    ctx->pc = 0x235e94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x235e98: 0x2143b  dsra        $v0, $v0, 16
    ctx->pc = 0x235e98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 16);
    // 0x235e9c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x235e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x235ea0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x235ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x235ea4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x235ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x235ea8: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x235ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x235eac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x235eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x235eb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x235eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x235eb4: 0xdf828458  ld          $v0, -0x7BA8($gp)
    ctx->pc = 0x235eb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x235eb8: 0x2163b  dsra        $v0, $v0, 24
    ctx->pc = 0x235eb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 24);
    // 0x235ebc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x235ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x235ec0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x235ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x235ec4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x235ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x235ec8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x235ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x235ecc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x235eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x235ed0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x235ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x235ed4: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x235ED4u;
    SET_GPR_U32(ctx, 31, 0x235EDCu);
    ctx->pc = 0x235ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235ED4u;
    // 0x235ed8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x235ED4u, 0x235EDCu)) {
        return;
    }
    ctx->pc = 0x235EDCu;
label_235edc:
    // 0x235edc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x235edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x235ee0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x235ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x235ee4: 0x21680  sll         $v0, $v0, 26
    ctx->pc = 0x235ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    // 0x235ee8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x235ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x235eec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x235eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x235ef0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x235ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x235ef4: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x235EF4u;
    SET_GPR_U32(ctx, 31, 0x235EFCu);
    ctx->pc = 0x235EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235EF4u;
    // 0x235ef8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x235EF4u, 0x235EFCu)) {
        return;
    }
    ctx->pc = 0x235EFCu;
label_235efc:
    // 0x235efc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x235efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x235f00: 0x21780  sll         $v0, $v0, 30
    ctx->pc = 0x235f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
    // 0x235f04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x235f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x235f08: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x235f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x235f0c: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x235F0Cu;
    SET_GPR_U32(ctx, 31, 0x235F14u);
    ctx->pc = 0x235F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F0Cu;
    // 0x235f10: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x235F0Cu, 0x235F14u)) {
        return;
    }
    ctx->pc = 0x235F14u;
label_235f14:
    // 0x235f14: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x235f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x235f18: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x235f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x235f1c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x235f1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x235f20: 0xa2000016  sb          $zero, 0x16($s0)
    ctx->pc = 0x235f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x235f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x235f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x235f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235F28u;
    {
        const bool branch_taken_0x235f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F28u;
        // 0x235f2c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f28) {
            ctx->pc = 0x235F34u;
            goto label_235f34;
        }
    }
    ctx->pc = 0x235F30u;
label_235f30:
    // 0x235f30: 0xa2220020  sb          $v0, 0x20($s1)
    ctx->pc = 0x235f30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
label_235f34:
    // 0x235f34: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x235f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x235f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235f3c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x235f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x235f40: 0x8627001e  lh          $a3, 0x1E($s1)
    ctx->pc = 0x235f40u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x235f44: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x235f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x235f48: 0x8624001c  lh          $a0, 0x1C($s1)
    ctx->pc = 0x235f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x235f4c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x235f4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x235f50: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x235f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x235f54: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x235f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x235f58: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x235f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x235f5c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x235f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x235f60: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x235f60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x235f64: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x235f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x235f68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x235f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x235f6c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x235f6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x235f70: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x235f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x235f74: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x235f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x235f78: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x235f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x235f7c: 0xae270030  sw          $a3, 0x30($s1)
    ctx->pc = 0x235f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 7));
    // 0x235f80: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x235f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x235f84: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x235f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x235f88: 0xae280028  sw          $t0, 0x28($s1)
    ctx->pc = 0x235f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 8));
    // 0x235f8c: 0xae29002c  sw          $t1, 0x2C($s1)
    ctx->pc = 0x235f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 9));
label_235f90:
    // 0x235f90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x235f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235f94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x235f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235f98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x235f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x235FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FA0u;
        // 0x235fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235FA8u;
}
