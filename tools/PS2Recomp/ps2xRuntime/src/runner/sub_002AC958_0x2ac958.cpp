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

// Function: sub_002AC958
// Address: 0x2ac958 - 0x2accb8
void sub_002AC958_0x2ac958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC958_0x2ac958");
#endif

    switch (ctx->pc) {
        case 0x2aca34u: goto label_2aca34;
        case 0x2acb70u: goto label_2acb70;
        default: break;
    }

    ctx->pc = 0x2ac958u;

    // 0x2ac958: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ac958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ac95c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ac95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2ac960: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ac960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2ac964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac968: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ac968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ac96c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ac96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac970: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ac970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ac974: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ac974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac978: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2ac978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2ac97c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ac97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ac980: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2ac980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2ac984: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ac984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac98c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ac98cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac990: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ac990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac994: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2ac994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ac998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac99c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ac99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac9a0: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x2ac9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2ac9a4: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AC9A4u;
    {
        const bool branch_taken_0x2ac9a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9A4u;
        // 0x2ac9a8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9a4) {
            ctx->pc = 0x2AC9F4u;
            goto label_2ac9f4;
        }
    }
    ctx->pc = 0x2AC9ACu;
    // 0x2ac9ac: 0x94420020  lhu         $v0, 0x20($v0)
    ctx->pc = 0x2ac9acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ac9b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ac9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac9b4: 0x8cc30064  lw          $v1, 0x64($a2)
    ctx->pc = 0x2ac9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x2ac9b8: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x2ac9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2ac9bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ac9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ac9c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ac9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac9c4: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x2ac9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ac9c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ac9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ac9cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac9d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ac9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ac9d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AC9D4u;
    {
        const bool branch_taken_0x2ac9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9D4u;
        // 0x2ac9d8: 0x121942  srl         $v1, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9d4) {
            ctx->pc = 0x2AC9FCu;
            goto label_2ac9fc;
        }
    }
    ctx->pc = 0x2AC9DCu;
    // 0x2ac9dc: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2ac9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x2ac9e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ac9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac9e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ac9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac9e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2ac9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ac9ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC9ECu;
    {
        const bool branch_taken_0x2ac9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9ECu;
        // 0x2ac9f0: 0x121942  srl         $v1, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9ec) {
            ctx->pc = 0x2AC9FCu;
            goto label_2ac9fc;
        }
    }
    ctx->pc = 0x2AC9F4u;
label_2ac9f4:
    // 0x2ac9f4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2AC9F4u;
    {
        const bool branch_taken_0x2ac9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9F4u;
        // 0x2ac9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9f4) {
            ctx->pc = 0x2ACC94u;
            goto label_2acc94;
        }
    }
    ctx->pc = 0x2AC9FCu;
label_2ac9fc:
    // 0x2ac9fc: 0x3244001f  andi        $a0, $s2, 0x1F
    ctx->pc = 0x2ac9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x2aca00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aca00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aca04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aca04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aca08: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2aca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2aca0c: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x2aca0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x2aca10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2aca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aca14: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x2aca14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2aca18: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2aca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aca1c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2aca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2aca20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2aca20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2aca24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2aca24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca28: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x2aca28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2aca2c: 0xc0adfa8  jal         func_2B7EA0
    ctx->pc = 0x2ACA2Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA34u);
    ctx->pc = 0x2ACA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA2Cu;
    // 0x2aca30: 0x31080001  andi        $t0, $t0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7EA0u, 0x2ACA2Cu, 0x2ACA34u)) {
        return;
    }
    ctx->pc = 0x2ACA34u;
label_2aca34:
    // 0x2aca34: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2aca34u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca38: 0x11800095  beqz        $t4, . + 4 + (0x95 << 2)
    ctx->pc = 0x2ACA38u;
    {
        const bool branch_taken_0x2aca38 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA38u;
        // 0x2aca3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca38) {
            ctx->pc = 0x2ACC90u;
            goto label_2acc90;
        }
    }
    ctx->pc = 0x2ACA40u;
    // 0x2aca40: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2aca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2aca44: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2aca44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca48: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x2aca48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aca4c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2aca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2aca50: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x2aca50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2aca54: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2aca54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca58: 0x753021  addu        $a2, $v1, $s5
    ctx->pc = 0x2aca58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2aca5c: 0x31830003  andi        $v1, $t4, 0x3
    ctx->pc = 0x2aca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x2aca60: 0x1980002d  blez        $t4, . + 4 + (0x2D << 2)
    ctx->pc = 0x2ACA60u;
    {
        const bool branch_taken_0x2aca60 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x2ACA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA60u;
        // 0x2aca64: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca60) {
            ctx->pc = 0x2ACB18u;
            goto label_2acb18;
        }
    }
    ctx->pc = 0x2ACA68u;
    // 0x2aca68: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2ACA68u;
    {
        const bool branch_taken_0x2aca68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA68u;
        // 0x2aca6c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca68) {
            ctx->pc = 0x2ACB6Cu;
            goto label_2acb6c;
        }
    }
    ctx->pc = 0x2ACA70u;
    // 0x2aca70: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2ACA70u;
    {
        const bool branch_taken_0x2aca70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA70u;
        // 0x2aca74: 0x233102b  sltu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca70) {
            ctx->pc = 0x2ACB1Cu;
            goto label_2acb1c;
        }
    }
    ctx->pc = 0x2ACA78u;
    // 0x2aca78: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2aca78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2aca7c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ACA7Cu;
    {
        const bool branch_taken_0x2aca7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA7Cu;
        // 0x2aca80: 0x233102b  sltu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca7c) {
            ctx->pc = 0x2ACAD0u;
            goto label_2acad0;
        }
    }
    ctx->pc = 0x2ACA84u;
    // 0x2aca84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACA84u;
    {
        const bool branch_taken_0x2aca84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA84u;
        // 0x2aca88: 0x95040000  lhu         $a0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca84) {
            ctx->pc = 0x2ACAC4u;
            goto label_2acac4;
        }
    }
    ctx->pc = 0x2ACA8Cu;
    // 0x2aca8c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2aca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2aca90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2aca90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aca94: 0xa4ca0004  sh          $t2, 0x4($a2)
    ctx->pc = 0x2aca94u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x2aca98: 0x24c70014  addiu       $a3, $a2, 0x14
    ctx->pc = 0x2aca98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2aca9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2aca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2acaa0: 0xa4ca000c  sh          $t2, 0xC($a2)
    ctx->pc = 0x2acaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acaa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acaa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acaa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acaac: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2acaacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x2acab0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2acab0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2acab4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acab8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acabc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acac0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2acac0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_2acac4:
    // 0x2acac4: 0x25090002  addiu       $t1, $t0, 0x2
    ctx->pc = 0x2acac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2acac8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2acac8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acacc: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2acaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2acad0:
    // 0x2acad0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACAD0u;
    {
        const bool branch_taken_0x2acad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAD0u;
        // 0x2acad4: 0x95240000  lhu         $a0, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acad0) {
            ctx->pc = 0x2ACB10u;
            goto label_2acb10;
        }
    }
    ctx->pc = 0x2ACAD8u;
    // 0x2acad8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acadc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acadcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acae0: 0xa4ea0004  sh          $t2, 0x4($a3)
    ctx->pc = 0x2acae0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acae4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acae8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2acae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2acaec: 0xa4ea000c  sh          $t2, 0xC($a3)
    ctx->pc = 0x2acaecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acaf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acaf4: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2acaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2acaf8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2acaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2acafc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acb00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acb04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acb08: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2acb08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2acb0c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x2acb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_2acb10:
    // 0x2acb10: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x2acb10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x2acb14: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2acb14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2acb18:
    // 0x2acb18: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2acb18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2acb1c:
    // 0x2acb1c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACB1Cu;
    {
        const bool branch_taken_0x2acb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB1Cu;
        // 0x2acb20: 0x95240000  lhu         $a0, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb1c) {
            ctx->pc = 0x2ACB5Cu;
            goto label_2acb5c;
        }
    }
    ctx->pc = 0x2ACB24u;
    // 0x2acb24: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acb28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acb28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acb2c: 0xa4ea0004  sh          $t2, 0x4($a3)
    ctx->pc = 0x2acb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acb30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acb34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2acb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2acb38: 0xa4ea000c  sh          $t2, 0xC($a3)
    ctx->pc = 0x2acb38u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acb3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acb40: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2acb40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2acb44: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2acb44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2acb48: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acb4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acb50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acb54: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2acb54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2acb58: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x2acb58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_2acb5c:
    // 0x2acb5c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2acb5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2acb60: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x2acb60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2acb64: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2ACB64u;
    {
        const bool branch_taken_0x2acb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB64u;
        // 0x2acb68: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb64) {
            ctx->pc = 0x2ACC90u;
            goto label_2acc90;
        }
    }
    ctx->pc = 0x2ACB6Cu;
label_2acb6c:
    // 0x2acb6c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2acb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2acb70:
    // 0x2acb70: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2acb70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2acb74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ACB74u;
    {
        const bool branch_taken_0x2acb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB74u;
        // 0x2acb78: 0x94c40000  lhu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb74) {
            ctx->pc = 0x2ACBB8u;
            goto label_2acbb8;
        }
    }
    ctx->pc = 0x2ACB7Cu;
    // 0x2acb7c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acb80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acb80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acb84: 0xa4ea0004  sh          $t2, 0x4($a3)
    ctx->pc = 0x2acb84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acb88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acb8c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2acb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2acb90: 0xa4ea000c  sh          $t2, 0xC($a3)
    ctx->pc = 0x2acb90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acb94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acb98: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2acb98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2acb9c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2acb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2acba0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acba4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acba8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acbac: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2acbacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2acbb0: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x2acbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2acbb4: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2acbb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2acbb8:
    // 0x2acbb8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACBB8u;
    {
        const bool branch_taken_0x2acbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBB8u;
        // 0x2acbbc: 0x94c40002  lhu         $a0, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbb8) {
            ctx->pc = 0x2ACBF8u;
            goto label_2acbf8;
        }
    }
    ctx->pc = 0x2ACBC0u;
    // 0x2acbc0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acbc4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acbc8: 0xa4ea0004  sh          $t2, 0x4($a3)
    ctx->pc = 0x2acbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acbcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acbccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acbd0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2acbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2acbd4: 0xa4ea000c  sh          $t2, 0xC($a3)
    ctx->pc = 0x2acbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acbd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acbdc: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2acbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2acbe0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2acbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2acbe4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acbe8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acbec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acbf0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2acbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2acbf4: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x2acbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_2acbf8:
    // 0x2acbf8: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2acbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2acbfc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ACBFCu;
    {
        const bool branch_taken_0x2acbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBFCu;
        // 0x2acc00: 0x94c40004  lhu         $a0, 0x4($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbfc) {
            ctx->pc = 0x2ACC40u;
            goto label_2acc40;
        }
    }
    ctx->pc = 0x2ACC04u;
    // 0x2acc04: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acc08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acc08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acc0c: 0xa4ea0004  sh          $t2, 0x4($a3)
    ctx->pc = 0x2acc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acc10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acc14: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2acc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2acc18: 0xa4ea000c  sh          $t2, 0xC($a3)
    ctx->pc = 0x2acc18u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acc1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acc20: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2acc20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2acc24: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2acc24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2acc28: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acc2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acc30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acc34: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2acc34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2acc38: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x2acc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2acc3c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2acc3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2acc40:
    // 0x2acc40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACC40u;
    {
        const bool branch_taken_0x2acc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC40u;
        // 0x2acc44: 0x94c40006  lhu         $a0, 0x6($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc40) {
            ctx->pc = 0x2ACC80u;
            goto label_2acc80;
        }
    }
    ctx->pc = 0x2ACC48u;
    // 0x2acc48: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acc4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acc50: 0xa4ea0004  sh          $t2, 0x4($a3)
    ctx->pc = 0x2acc50u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acc54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acc58: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2acc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2acc5c: 0xa4ea000c  sh          $t2, 0xC($a3)
    ctx->pc = 0x2acc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2acc60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acc64: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2acc64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2acc68: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2acc68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2acc6c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acc70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acc74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acc78: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2acc78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2acc7c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x2acc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_2acc80:
    // 0x2acc80: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2acc80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2acc84: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x2acc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2acc88: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x2ACC88u;
    {
        const bool branch_taken_0x2acc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC88u;
        // 0x2acc8c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc88) {
            ctx->pc = 0x2ACB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acb70;
        }
    }
    ctx->pc = 0x2ACC90u;
label_2acc90:
    // 0x2acc90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2acc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2acc94:
    // 0x2acc94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2acc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acc98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2acc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acc9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2acc9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2acca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acca4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2acca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acca8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2acca8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2accac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2accacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2accb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCB0u;
        // 0x2accb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACCB8u;
}
