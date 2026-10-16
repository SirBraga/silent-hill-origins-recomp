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

// Function: sub_001FEB08
// Address: 0x1feb08 - 0x1fec30
void sub_001FEB08_0x1feb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB08_0x1feb08");
#endif

    switch (ctx->pc) {
        case 0x1feb48u: goto label_1feb48;
        case 0x1febb4u: goto label_1febb4;
        case 0x1febc0u: goto label_1febc0;
        case 0x1febe8u: goto label_1febe8;
        case 0x1fec18u: goto label_1fec18;
        default: break;
    }

    ctx->pc = 0x1feb08u;

    // 0x1feb08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1feb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1feb0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1feb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1feb10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1feb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1feb14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1feb14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1feb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1feb1c: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x1feb1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x1feb20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1feb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1feb24: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1feb24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1feb28: 0x8e451a70  lw          $a1, 0x1A70($s2)
    ctx->pc = 0x1feb28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x701A70u));
    // 0x1feb2c: 0x5205003b  beql        $s0, $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FEB2Cu;
    {
        const bool branch_taken_0x1feb2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x1feb2c) {
            ctx->pc = 0x1FEB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB2Cu;
            // 0x1feb30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC1Cu;
            goto label_1fec1c;
        }
    }
    ctx->pc = 0x1FEB34u;
    // 0x1feb34: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x1feb34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1feb38: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1FEB38u;
    {
        const bool branch_taken_0x1feb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feb38) {
            ctx->pc = 0x1FEB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB38u;
            // 0x1feb3c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB74u;
            goto label_1feb74;
        }
    }
    ctx->pc = 0x1FEB40u;
    // 0x1feb40: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x1FEB40u;
    SET_GPR_U32(ctx, 31, 0x1FEB48u);
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x1FEB40u, 0x1FEB48u)) {
        return;
    }
    ctx->pc = 0x1FEB48u;
label_1feb48:
    // 0x1feb48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1feb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1feb4c: 0x8e421a70  lw          $v0, 0x1A70($s2)
    ctx->pc = 0x1feb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x1feb50: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FEB50u;
    {
        const bool branch_taken_0x1feb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB50u;
        // 0x1feb54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb50) {
            ctx->pc = 0x1FEC1Cu;
            goto label_1fec1c;
        }
    }
    ctx->pc = 0x1FEB58u;
    // 0x1feb58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1feb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1feb5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1feb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1feb60: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1feb60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1feb64: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x1feb64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1feb68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1feb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1feb6c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1FEB6Cu;
    {
        const bool branch_taken_0x1feb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB6Cu;
        // 0x1feb70: 0xa6230006  sh          $v1, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb6c) {
            ctx->pc = 0x1FEC1Cu;
            goto label_1fec1c;
        }
    }
    ctx->pc = 0x1FEB74u;
label_1feb74:
    // 0x1feb74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1feb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1feb78: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1feb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1feb7c: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x1feb7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1feb80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1feb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1feb84: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1feb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1feb88: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEB88u;
    {
        const bool branch_taken_0x1feb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB88u;
        // 0x1feb8c: 0xa6230006  sh          $v1, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb88) {
            ctx->pc = 0x1FEB94u;
            goto label_1feb94;
        }
    }
    ctx->pc = 0x1FEB90u;
    // 0x1feb90: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1feb90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1feb94:
    // 0x1feb94: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1feb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1feb98: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FEB98u;
    {
        const bool branch_taken_0x1feb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feb98) {
            ctx->pc = 0x1FEB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB98u;
            // 0x1feb9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC1Cu;
            goto label_1fec1c;
        }
    }
    ctx->pc = 0x1FEBA0u;
    // 0x1feba0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1feba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1feba4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FEBA4u;
    {
        const bool branch_taken_0x1feba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feba4) {
            ctx->pc = 0x1FEBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEBA4u;
            // 0x1feba8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC1Cu;
            goto label_1fec1c;
        }
    }
    ctx->pc = 0x1FEBACu;
    // 0x1febac: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FEBACu;
    SET_GPR_U32(ctx, 31, 0x1FEBB4u);
    ctx->pc = 0x1FEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBACu;
    // 0x1febb0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FEBACu, 0x1FEBB4u)) {
        return;
    }
    ctx->pc = 0x1FEBB4u;
label_1febb4:
    // 0x1febb4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1febb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1febb8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FEBB8u;
    SET_GPR_U32(ctx, 31, 0x1FEBC0u);
    ctx->pc = 0x1FEBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBB8u;
    // 0x1febbc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FEBB8u, 0x1FEBC0u)) {
        return;
    }
    ctx->pc = 0x1FEBC0u;
label_1febc0:
    // 0x1febc0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1febc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1febc4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1febc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1febc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEBC8u;
    {
        const bool branch_taken_0x1febc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBC8u;
        // 0x1febcc: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febc8) {
            ctx->pc = 0x1FEBD4u;
            goto label_1febd4;
        }
    }
    ctx->pc = 0x1FEBD0u;
    // 0x1febd0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1febd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_1febd4:
    // 0x1febd4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FEBD4u;
    {
        const bool branch_taken_0x1febd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1febd4) {
            ctx->pc = 0x1FEBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEBD4u;
            // 0x1febd8: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEBDCu;
            goto label_1febdc;
        }
    }
    ctx->pc = 0x1FEBDCu;
label_1febdc:
    // 0x1febdc: 0x8e451a70  lw          $a1, 0x1A70($s2)
    ctx->pc = 0x1febdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x1febe0: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x1FEBE0u;
    SET_GPR_U32(ctx, 31, 0x1FEBE8u);
    ctx->pc = 0x1FEBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBE0u;
    // 0x1febe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x1FEBE0u, 0x1FEBE8u)) {
        return;
    }
    ctx->pc = 0x1FEBE8u;
label_1febe8:
    // 0x1febe8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1febe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1febec: 0x8e421a70  lw          $v0, 0x1A70($s2)
    ctx->pc = 0x1febecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x1febf0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEBF0u;
    {
        const bool branch_taken_0x1febf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1febf0) {
            ctx->pc = 0x1FEC10u;
            goto label_1fec10;
        }
    }
    ctx->pc = 0x1FEBF8u;
    // 0x1febf8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1febf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1febfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1febfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fec00: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1fec00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1fec04: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x1fec04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1fec08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fec0c: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x1fec0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_1fec10:
    // 0x1fec10: 0xc07fdc0  jal         func_1FF700
    ctx->pc = 0x1FEC10u;
    SET_GPR_U32(ctx, 31, 0x1FEC18u);
    ctx->pc = 0x1FEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC10u;
    // 0x1fec14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF700u, 0x1FEC10u, 0x1FEC18u)) {
        return;
    }
    ctx->pc = 0x1FEC18u;
label_1fec18:
    // 0x1fec18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fec18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fec1c:
    // 0x1fec1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fec1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fec20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fec20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fec24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fec24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC28u;
        // 0x1fec2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC30u;
}
