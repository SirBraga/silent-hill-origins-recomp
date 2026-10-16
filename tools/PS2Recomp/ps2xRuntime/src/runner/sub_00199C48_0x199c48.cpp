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

// Function: sub_00199C48
// Address: 0x199c48 - 0x199d88
void sub_00199C48_0x199c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199C48_0x199c48");
#endif

    switch (ctx->pc) {
        case 0x199c9cu: goto label_199c9c;
        case 0x199cb4u: goto label_199cb4;
        case 0x199cc8u: goto label_199cc8;
        case 0x199cd4u: goto label_199cd4;
        case 0x199cdcu: goto label_199cdc;
        case 0x199ce8u: goto label_199ce8;
        case 0x199cf0u: goto label_199cf0;
        case 0x199cfcu: goto label_199cfc;
        case 0x199d04u: goto label_199d04;
        case 0x199d10u: goto label_199d10;
        case 0x199d1cu: goto label_199d1c;
        case 0x199d28u: goto label_199d28;
        case 0x199d34u: goto label_199d34;
        case 0x199d40u: goto label_199d40;
        case 0x199d4cu: goto label_199d4c;
        case 0x199d60u: goto label_199d60;
        default: break;
    }

    ctx->pc = 0x199c48u;

    // 0x199c48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x199c4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x199c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x199c50: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x199c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x199c54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x199c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x199c58: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x199c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x199c5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x199c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x199c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x199c64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x199c64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c68: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x199c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x199c6c: 0x24429dc0  addiu       $v0, $v0, -0x6240
    ctx->pc = 0x199c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942144));
    // 0x199c70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x199c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x199c74: 0x24639de0  addiu       $v1, $v1, -0x6220
    ctx->pc = 0x199c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942176));
    // 0x199c78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x199c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x199c7c: 0x26b00038  addiu       $s0, $s5, 0x38
    ctx->pc = 0x199c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    // 0x199c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199c84: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x199c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x199c88: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x199c88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x199c8c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x199c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x199c90: 0xaea30034  sw          $v1, 0x34($s5)
    ctx->pc = 0x199c90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 3));
    // 0x199c94: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x199C94u;
    SET_GPR_U32(ctx, 31, 0x199C9Cu);
    ctx->pc = 0x199C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C94u;
    // 0x199c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x199C94u, 0x199C9Cu)) {
        return;
    }
    ctx->pc = 0x199C9Cu;
label_199c9c:
    // 0x199c9c: 0x26b30068  addiu       $s3, $s5, 0x68
    ctx->pc = 0x199c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
    // 0x199ca0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x199ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x199ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ca8: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x199ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x199cac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x199CACu;
    SET_GPR_U32(ctx, 31, 0x199CB4u);
    ctx->pc = 0x199CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CACu;
    // 0x199cb0: 0x26b20060  addiu       $s2, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x199CACu, 0x199CB4u)) {
        return;
    }
    ctx->pc = 0x199CB4u;
label_199cb4:
    // 0x199cb4: 0x26b10074  addiu       $s1, $s5, 0x74
    ctx->pc = 0x199cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
    // 0x199cb8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x199cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x199cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199cc0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x199CC0u;
    SET_GPR_U32(ctx, 31, 0x199CC8u);
    ctx->pc = 0x199CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CC0u;
    // 0x199cc4: 0x24a58910  addiu       $a1, $a1, -0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x199CC0u, 0x199CC8u)) {
        return;
    }
    ctx->pc = 0x199CC8u;
label_199cc8:
    // 0x199cc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x199cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ccc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x199CCCu;
    SET_GPR_U32(ctx, 31, 0x199CD4u);
    ctx->pc = 0x199CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CCCu;
    // 0x199cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x199CCCu, 0x199CD4u)) {
        return;
    }
    ctx->pc = 0x199CD4u;
label_199cd4:
    // 0x199cd4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x199CD4u;
    SET_GPR_U32(ctx, 31, 0x199CDCu);
    ctx->pc = 0x199CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CD4u;
    // 0x199cd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x199CD4u, 0x199CDCu)) {
        return;
    }
    ctx->pc = 0x199CDCu;
label_199cdc:
    // 0x199cdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x199cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ce0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x199CE0u;
    SET_GPR_U32(ctx, 31, 0x199CE8u);
    ctx->pc = 0x199CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CE0u;
    // 0x199ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x199CE0u, 0x199CE8u)) {
        return;
    }
    ctx->pc = 0x199CE8u;
label_199ce8:
    // 0x199ce8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x199CE8u;
    SET_GPR_U32(ctx, 31, 0x199CF0u);
    ctx->pc = 0x199CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CE8u;
    // 0x199cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x199CE8u, 0x199CF0u)) {
        return;
    }
    ctx->pc = 0x199CF0u;
label_199cf0:
    // 0x199cf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199cf4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x199CF4u;
    SET_GPR_U32(ctx, 31, 0x199CFCu);
    ctx->pc = 0x199CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CF4u;
    // 0x199cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x199CF4u, 0x199CFCu)) {
        return;
    }
    ctx->pc = 0x199CFCu;
label_199cfc:
    // 0x199cfc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x199CFCu;
    SET_GPR_U32(ctx, 31, 0x199D04u);
    ctx->pc = 0x199D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CFCu;
    // 0x199d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x199CFCu, 0x199D04u)) {
        return;
    }
    ctx->pc = 0x199D04u;
label_199d04:
    // 0x199d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d08: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x199D08u;
    SET_GPR_U32(ctx, 31, 0x199D10u);
    ctx->pc = 0x199D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D08u;
    // 0x199d0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x199D08u, 0x199D10u)) {
        return;
    }
    ctx->pc = 0x199D10u;
label_199d10:
    // 0x199d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x199d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d14: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x199D14u;
    SET_GPR_U32(ctx, 31, 0x199D1Cu);
    ctx->pc = 0x199D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D14u;
    // 0x199d18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x199D14u, 0x199D1Cu)) {
        return;
    }
    ctx->pc = 0x199D1Cu;
label_199d1c:
    // 0x199d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d20: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x199D20u;
    SET_GPR_U32(ctx, 31, 0x199D28u);
    ctx->pc = 0x199D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D20u;
    // 0x199d24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x199D20u, 0x199D28u)) {
        return;
    }
    ctx->pc = 0x199D28u;
label_199d28:
    // 0x199d28: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x199d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x199d2c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x199D2Cu;
    SET_GPR_U32(ctx, 31, 0x199D34u);
    ctx->pc = 0x199D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D2Cu;
    // 0x199d30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x199D2Cu, 0x199D34u)) {
        return;
    }
    ctx->pc = 0x199D34u;
label_199d34:
    // 0x199d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d38: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x199D38u;
    SET_GPR_U32(ctx, 31, 0x199D40u);
    ctx->pc = 0x199D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D38u;
    // 0x199d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x199D38u, 0x199D40u)) {
        return;
    }
    ctx->pc = 0x199D40u;
label_199d40:
    // 0x199d40: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x199d44: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x199D44u;
    SET_GPR_U32(ctx, 31, 0x199D4Cu);
    ctx->pc = 0x199D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D44u;
    // 0x199d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x199D44u, 0x199D4Cu)) {
        return;
    }
    ctx->pc = 0x199D4Cu;
label_199d4c:
    // 0x199d4c: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x199d4cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x199d50: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x199D50u;
    {
        const bool branch_taken_0x199d50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D50u;
        // 0x199d54: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d50) {
            ctx->pc = 0x199D64u;
            goto label_199d64;
        }
    }
    ctx->pc = 0x199D58u;
    // 0x199d58: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x199D58u;
    SET_GPR_U32(ctx, 31, 0x199D60u);
    ctx->pc = 0x199D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D58u;
    // 0x199d5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x199D58u, 0x199D60u)) {
        return;
    }
    ctx->pc = 0x199D60u;
label_199d60:
    // 0x199d60: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x199d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_199d64:
    // 0x199d64: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x199d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199d68: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x199d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199d6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x199d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199d70: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x199d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199d74: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x199d74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x199D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D7Cu;
        // 0x199d80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199D84u;
    // 0x199d84: 0x0  nop
    ctx->pc = 0x199d84u;
    // NOP
    ctx->pc = 0x199d88u;
}
