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

// Function: sub_001BC0A8
// Address: 0x1bc0a8 - 0x1bc1e0
void sub_001BC0A8_0x1bc0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC0A8_0x1bc0a8");
#endif

    switch (ctx->pc) {
        case 0x1bc0d8u: goto label_1bc0d8;
        case 0x1bc124u: goto label_1bc124;
        case 0x1bc138u: goto label_1bc138;
        case 0x1bc154u: goto label_1bc154;
        case 0x1bc190u: goto label_1bc190;
        case 0x1bc1c8u: goto label_1bc1c8;
        default: break;
    }

    ctx->pc = 0x1bc0a8u;

    // 0x1bc0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bc0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bc0ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bc0acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bc0b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bc0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bc0b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bc0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bc0bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc0c0: 0x8c8202dc  lw          $v0, 0x2DC($a0)
    ctx->pc = 0x1bc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 732)));
    // 0x1bc0c4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bc0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc0c8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC0C8u;
    {
        const bool branch_taken_0x1bc0c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0C8u;
        // 0x1bc0cc: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0c8) {
            ctx->pc = 0x1BC0F0u;
            goto label_1bc0f0;
        }
    }
    ctx->pc = 0x1BC0D0u;
    // 0x1bc0d0: 0x8c840320  lw          $a0, 0x320($a0)
    ctx->pc = 0x1bc0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x1bc0d4: 0x0  nop
    ctx->pc = 0x1bc0d4u;
    // NOP
label_1bc0d8:
    // 0x1bc0d8: 0x50640007  beql        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC0D8u;
    {
        const bool branch_taken_0x1bc0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bc0d8) {
            ctx->pc = 0x1BC0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC0D8u;
            // 0x1bc0dc: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC0F8u;
            goto label_1bc0f8;
        }
    }
    ctx->pc = 0x1BC0E0u;
    // 0x1bc0e0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1bc0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bc0e4: 0x0  nop
    ctx->pc = 0x1bc0e4u;
    // NOP
    // 0x1bc0e8: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BC0E8u;
    {
        const bool branch_taken_0x1bc0e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0E8u;
        // 0x1bc0ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0e8) {
            ctx->pc = 0x1BC0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc0d8;
        }
    }
    ctx->pc = 0x1BC0F0u;
label_1bc0f0:
    // 0x1bc0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0f4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1bc0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x0u));
label_1bc0f8:
    // 0x1bc0f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1bc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bc0fc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1bc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1bc100: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BC100u;
    {
        const bool branch_taken_0x1bc100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC100u;
        // 0x1bc104: 0x8e448b2c  lw          $a0, -0x74D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc100) {
            ctx->pc = 0x1BC140u;
            goto label_1bc140;
        }
    }
    ctx->pc = 0x1BC108u;
    // 0x1bc108: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1bc10c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1bc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bc110: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC110u;
    {
        const bool branch_taken_0x1bc110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC110u;
        // 0x1bc114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc110) {
            ctx->pc = 0x1BC144u;
            goto label_1bc144;
        }
    }
    ctx->pc = 0x1BC118u;
    // 0x1bc118: 0x8e448b2c  lw          $a0, -0x74D4($s2)
    ctx->pc = 0x1bc118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937388)));
    // 0x1bc11c: 0xc064452  jal         func_191148
    ctx->pc = 0x1BC11Cu;
    SET_GPR_U32(ctx, 31, 0x1BC124u);
    ctx->pc = 0x1BC120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC11Cu;
    // 0x1bc120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BC11Cu, 0x1BC124u)) {
        return;
    }
    ctx->pc = 0x1BC124u;
label_1bc124:
    // 0x1bc124: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bc124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc128: 0x8e448b2c  lw          $a0, -0x74D4($s2)
    ctx->pc = 0x1bc128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937388)));
    // 0x1bc12c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bc12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc130: 0xc06446c  jal         func_1911B0
    ctx->pc = 0x1BC130u;
    SET_GPR_U32(ctx, 31, 0x1BC138u);
    ctx->pc = 0x1BC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC130u;
    // 0x1bc134: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1911B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1911B0u, 0x1BC130u, 0x1BC138u)) {
        return;
    }
    ctx->pc = 0x1BC138u;
label_1bc138:
    // 0x1bc138: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC138u;
    {
        const bool branch_taken_0x1bc138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc138) {
            ctx->pc = 0x1BC154u;
            goto label_1bc154;
        }
    }
    ctx->pc = 0x1BC140u;
label_1bc140:
    // 0x1bc140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bc140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc144:
    // 0x1bc144: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x1bc144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1bc148: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1bc148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1bc14c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x1BC14Cu;
    SET_GPR_U32(ctx, 31, 0x1BC154u);
    ctx->pc = 0x1BC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC14Cu;
    // 0x1bc150: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x1BC14Cu, 0x1BC154u)) {
        return;
    }
    ctx->pc = 0x1BC154u;
label_1bc154:
    // 0x1bc154: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BC154u;
    {
        const bool branch_taken_0x1bc154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc154) {
            ctx->pc = 0x1BC158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC154u;
            // 0x1bc158: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC1CCu;
            goto label_1bc1cc;
        }
    }
    ctx->pc = 0x1BC15Cu;
    // 0x1bc15c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BC15Cu;
    {
        const bool branch_taken_0x1bc15c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC15Cu;
        // 0x1bc160: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc15c) {
            ctx->pc = 0x1BC198u;
            goto label_1bc198;
        }
    }
    ctx->pc = 0x1BC164u;
    // 0x1bc164: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc168: 0x8c454458  lw          $a1, 0x4458($v0)
    ctx->pc = 0x1bc168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17496)));
    // 0x1bc16c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bc170: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BC170u;
    {
        const bool branch_taken_0x1bc170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC170u;
        // 0x1bc174: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc170) {
            ctx->pc = 0x1BC1CCu;
            goto label_1bc1cc;
        }
    }
    ctx->pc = 0x1BC178u;
    // 0x1bc178: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bc178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc17c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BC17Cu;
    {
        const bool branch_taken_0x1bc17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC17Cu;
        // 0x1bc180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc17c) {
            ctx->pc = 0x1BC1CCu;
            goto label_1bc1cc;
        }
    }
    ctx->pc = 0x1BC184u;
    // 0x1bc184: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bc184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bc188: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC188u;
    SET_GPR_U32(ctx, 31, 0x1BC190u);
    ctx->pc = 0x1BC18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC188u;
    // 0x1bc18c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC188u, 0x1BC190u)) {
        return;
    }
    ctx->pc = 0x1BC190u;
label_1bc190:
    // 0x1bc190: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BC190u;
    {
        const bool branch_taken_0x1bc190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC190u;
        // 0x1bc194: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc190) {
            ctx->pc = 0x1BC1CCu;
            goto label_1bc1cc;
        }
    }
    ctx->pc = 0x1BC198u;
label_1bc198:
    // 0x1bc198: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bc198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bc19c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc1a0: 0x8c454460  lw          $a1, 0x4460($v0)
    ctx->pc = 0x1bc1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4460u));
    // 0x1bc1a4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bc1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bc1a8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC1A8u;
    {
        const bool branch_taken_0x1bc1a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1A8u;
        // 0x1bc1ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1a8) {
            ctx->pc = 0x1BC1CCu;
            goto label_1bc1cc;
        }
    }
    ctx->pc = 0x1BC1B0u;
    // 0x1bc1b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc1b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC1B4u;
    {
        const bool branch_taken_0x1bc1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1B4u;
        // 0x1bc1b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1b4) {
            ctx->pc = 0x1BC1CCu;
            goto label_1bc1cc;
        }
    }
    ctx->pc = 0x1BC1BCu;
    // 0x1bc1bc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bc1c0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC1C0u;
    SET_GPR_U32(ctx, 31, 0x1BC1C8u);
    ctx->pc = 0x1BC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1C0u;
    // 0x1bc1c4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC1C0u, 0x1BC1C8u)) {
        return;
    }
    ctx->pc = 0x1BC1C8u;
label_1bc1c8:
    // 0x1bc1c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bc1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc1cc:
    // 0x1bc1cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bc1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc1d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc1d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc1d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1D8u;
        // 0x1bc1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC1E0u;
}
