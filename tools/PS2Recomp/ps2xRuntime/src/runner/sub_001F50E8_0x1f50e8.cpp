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

// Function: sub_001F50E8
// Address: 0x1f50e8 - 0x1f5248
void sub_001F50E8_0x1f50e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F50E8_0x1f50e8");
#endif

    switch (ctx->pc) {
        case 0x1f5148u: goto label_1f5148;
        case 0x1f5154u: goto label_1f5154;
        case 0x1f5180u: goto label_1f5180;
        case 0x1f51ccu: goto label_1f51cc;
        case 0x1f51d4u: goto label_1f51d4;
        case 0x1f521cu: goto label_1f521c;
        default: break;
    }

    ctx->pc = 0x1f50e8u;

    // 0x1f50e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f50e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f50ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f50ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f50f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f50f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f50f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f50f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f50f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f50fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f5100: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f5100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5104: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1f5104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1f5108: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f5108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f510c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1f510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1f5110: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1f5110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5114: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f5114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f5118: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f5118u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f511c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5120: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f5120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f5124: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1f5124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x1f5128: 0x222180a  movz        $v1, $s1, $v0
    ctx->pc = 0x1f5128u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17));
    // 0x1f512c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f512cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5130: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5130u;
    {
        const bool branch_taken_0x1f5130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5130u;
        // 0x1f5134: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5130) {
            ctx->pc = 0x1F5168u;
            goto label_1f5168;
        }
    }
    ctx->pc = 0x1F5138u;
    // 0x1f5138: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5138u;
    {
        const bool branch_taken_0x1f5138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5138) {
            ctx->pc = 0x1F513Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5138u;
            // 0x1f513c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F516Cu;
            goto label_1f516c;
        }
    }
    ctx->pc = 0x1F5140u;
    // 0x1f5140: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5144: 0x0  nop
    ctx->pc = 0x1f5144u;
    // NOP
label_1f5148:
    // 0x1f5148: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f5148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f514c: 0xc07d3b8  jal         func_1F4EE0
    ctx->pc = 0x1F514Cu;
    SET_GPR_U32(ctx, 31, 0x1F5154u);
    ctx->pc = 0x1F5150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F514Cu;
    // 0x1f5150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4EE0u, 0x1F514Cu, 0x1F5154u)) {
        return;
    }
    ctx->pc = 0x1F5154u;
label_1f5154:
    // 0x1f5154: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f5154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f5158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5158u;
    {
        const bool branch_taken_0x1f5158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5158u;
        // 0x1f515c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5158) {
            ctx->pc = 0x1F5168u;
            goto label_1f5168;
        }
    }
    ctx->pc = 0x1F5160u;
    // 0x1f5160: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F5160u;
    {
        const bool branch_taken_0x1f5160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5160) {
            ctx->pc = 0x1F5164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5160u;
            // 0x1f5164: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5148;
        }
    }
    ctx->pc = 0x1F5168u;
label_1f5168:
    // 0x1f5168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f516c:
    // 0x1f516c: 0x16000028  bnez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F516Cu;
    {
        const bool branch_taken_0x1f516c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F516Cu;
        // 0x1f5170: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f516c) {
            ctx->pc = 0x1F5210u;
            goto label_1f5210;
        }
    }
    ctx->pc = 0x1F5174u;
    // 0x1f5174: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1f5174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f5178: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1F5178u;
    SET_GPR_U32(ctx, 31, 0x1F5180u);
    ctx->pc = 0x1F517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5178u;
    // 0x1f517c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1F5178u, 0x1F5180u)) {
        return;
    }
    ctx->pc = 0x1F5180u;
label_1f5180:
    // 0x1f5180: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f5180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1f5184: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f5184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f5188: 0x24842820  addiu       $a0, $a0, 0x2820
    ctx->pc = 0x1f5188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
    // 0x1f518c: 0x24632808  addiu       $v1, $v1, 0x2808
    ctx->pc = 0x1f518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10248));
    // 0x1f5190: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1f5190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1f5194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5198: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1f5198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1f519c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f51a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f51a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51a8: 0xac550014  sw          $s5, 0x14($v0)
    ctx->pc = 0x1f51a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 21));
    // 0x1f51ac: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x1f51acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x1f51b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f51b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f51b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f51b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1f51b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1f51bc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1f51bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1f51c0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1f51c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1f51c4: 0xc07d492  jal         func_1F5248
    ctx->pc = 0x1F51C4u;
    SET_GPR_U32(ctx, 31, 0x1F51CCu);
    ctx->pc = 0x1F51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51C4u;
    // 0x1f51c8: 0xac510020  sw          $s1, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5248u, 0x1F51C4u, 0x1F51CCu)) {
        return;
    }
    ctx->pc = 0x1F51CCu;
label_1f51cc:
    // 0x1f51cc: 0xc080858  jal         func_202160
    ctx->pc = 0x1F51CCu;
    SET_GPR_U32(ctx, 31, 0x1F51D4u);
    ctx->pc = 0x1F51D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51CCu;
    // 0x1f51d0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1F51CCu, 0x1F51D4u)) {
        return;
    }
    ctx->pc = 0x1F51D4u;
label_1f51d4:
    // 0x1f51d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f51d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f51dc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1f51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1f51e0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f51e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f51e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F51E4u;
    {
        const bool branch_taken_0x1f51e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51E4u;
        // 0x1f51e8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51e4) {
            ctx->pc = 0x1F51F0u;
            goto label_1f51f0;
        }
    }
    ctx->pc = 0x1F51ECu;
    // 0x1f51ec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1f51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1f51f0:
    // 0x1f51f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f51f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F51F4u;
    {
        const bool branch_taken_0x1f51f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f51f4) {
            ctx->pc = 0x1F51F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F51F4u;
            // 0x1f51f8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F51FCu;
            goto label_1f51fc;
        }
    }
    ctx->pc = 0x1F51FCu;
label_1f51fc:
    // 0x1f51fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5200: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f5200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f5204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5208u;
    {
        const bool branch_taken_0x1f5208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5208u;
        // 0x1f520c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5208) {
            ctx->pc = 0x1F521Cu;
            goto label_1f521c;
        }
    }
    ctx->pc = 0x1F5210u;
label_1f5210:
    // 0x1f5210: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f5210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5214: 0xc07d492  jal         func_1F5248
    ctx->pc = 0x1F5214u;
    SET_GPR_U32(ctx, 31, 0x1F521Cu);
    ctx->pc = 0x1F5218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5214u;
    // 0x1f5218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5248u, 0x1F5214u, 0x1F521Cu)) {
        return;
    }
    ctx->pc = 0x1F521Cu;
label_1f521c:
    // 0x1f521c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f521cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5220: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f5220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5224: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f5224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5228: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f5228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f522c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f522cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5230: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1f5230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5234: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1f5234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f523c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F523Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F523Cu;
        // 0x1f5240: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F523Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5244u;
    // 0x1f5244: 0x0  nop
    ctx->pc = 0x1f5244u;
    // NOP
    ctx->pc = 0x1f5248u;
}
