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

// Function: sub_00214D00
// Address: 0x214d00 - 0x214e40
void sub_00214D00_0x214d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D00_0x214d00");
#endif

    switch (ctx->pc) {
        case 0x214d2cu: goto label_214d2c;
        case 0x214d58u: goto label_214d58;
        case 0x214d9cu: goto label_214d9c;
        case 0x214db8u: goto label_214db8;
        case 0x214dd0u: goto label_214dd0;
        case 0x214e1cu: goto label_214e1c;
        default: break;
    }

    ctx->pc = 0x214d00u;

    // 0x214d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214d04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x214d08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x214d10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x214d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d14: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x214d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x214d18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x214d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d1c: 0x26270024  addiu       $a3, $s1, 0x24
    ctx->pc = 0x214d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x214d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214d24: 0xc085dee  jal         func_2177B8
    ctx->pc = 0x214D24u;
    SET_GPR_U32(ctx, 31, 0x214D2Cu);
    ctx->pc = 0x214D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D24u;
    // 0x214d28: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2177B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2177B8u, 0x214D24u, 0x214D2Cu)) {
        return;
    }
    ctx->pc = 0x214D2Cu;
label_214d2c:
    // 0x214d2c: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x214d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x214d30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x214d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214d34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x214d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d38: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x214d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x214d3c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x214d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x214d40: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x214d40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x214d44: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x214D44u;
    {
        const bool branch_taken_0x214d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D44u;
        // 0x214d48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d44) {
            ctx->pc = 0x214D88u;
            goto label_214d88;
        }
    }
    ctx->pc = 0x214D4Cu;
    // 0x214d4c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x214d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x214d50: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x214d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d54: 0x0  nop
    ctx->pc = 0x214d54u;
    // NOP
label_214d58:
    // 0x214d58: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x214d58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214d5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x214d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x214d60: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x214d60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214d64: 0x3882ffff  xori        $v0, $a0, 0xFFFF
    ctx->pc = 0x214d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)65535);
    // 0x214d68: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x214d68u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x214d6c: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x214d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x214d70: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x214d70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
    // 0x214d74: 0xa6050010  sh          $a1, 0x10($s0)
    ctx->pc = 0x214d74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x214d78: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x214d78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x214d7c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x214d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214d80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x214D80u;
    {
        const bool branch_taken_0x214d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D80u;
        // 0x214d84: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d80) {
            ctx->pc = 0x214D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214d58;
        }
    }
    ctx->pc = 0x214D88u;
label_214d88:
    // 0x214d88: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x214d88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214d8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x214d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214d90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x214d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x214d94: 0xc080924  jal         func_202490
    ctx->pc = 0x214D94u;
    SET_GPR_U32(ctx, 31, 0x214D9Cu);
    ctx->pc = 0x214D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D94u;
    // 0x214d98: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x214D94u, 0x214D9Cu)) {
        return;
    }
    ctx->pc = 0x214D9Cu;
label_214d9c:
    // 0x214d9c: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x214d9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214da0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214da4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x214da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x214da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x214dacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x214db0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x214DB0u;
    SET_GPR_U32(ctx, 31, 0x214DB8u);
    ctx->pc = 0x214DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DB0u;
    // 0x214db4: 0x34c60001  ori         $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x214DB0u, 0x214DB8u)) {
        return;
    }
    ctx->pc = 0x214DB8u;
label_214db8:
    // 0x214db8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x214db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214dbc: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x214dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x214dc0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x214DC0u;
    {
        const bool branch_taken_0x214dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DC0u;
        // 0x214dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214dc0) {
            ctx->pc = 0x214E10u;
            goto label_214e10;
        }
    }
    ctx->pc = 0x214DC8u;
    // 0x214dc8: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x214dc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x214dcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214dd0:
    // 0x214dd0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x214dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x214dd4: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x214dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x214dd8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x214dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x214ddc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x214ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x214de0: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x214de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x214de4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x214de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214de8: 0x491826  xor         $v1, $v0, $t1
    ctx->pc = 0x214de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x214dec: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x214decu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
    // 0x214df0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x214df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214df4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x214df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x214df8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x214df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x214dfc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x214dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214e00: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x214e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x214e04: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x214e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214e08: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x214E08u;
    {
        const bool branch_taken_0x214e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E08u;
        // 0x214e0c: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e08) {
            ctx->pc = 0x214DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214dd0;
        }
    }
    ctx->pc = 0x214E10u;
label_214e10:
    // 0x214e10: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x214e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x214e14: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x214E14u;
    SET_GPR_U32(ctx, 31, 0x214E1Cu);
    ctx->pc = 0x214E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E14u;
    // 0x214e18: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x214E14u, 0x214E1Cu)) {
        return;
    }
    ctx->pc = 0x214E1Cu;
label_214e1c:
    // 0x214e1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x214e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x214e20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x214e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214e28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214e2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x214e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214e34: 0x3e00008  jr          $ra
    ctx->pc = 0x214E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E34u;
        // 0x214e38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214E3Cu;
    // 0x214e3c: 0x0  nop
    ctx->pc = 0x214e3cu;
    // NOP
    ctx->pc = 0x214e40u;
}
