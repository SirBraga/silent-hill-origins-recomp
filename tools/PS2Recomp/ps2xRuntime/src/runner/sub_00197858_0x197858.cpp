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

// Function: sub_00197858
// Address: 0x197858 - 0x1979a8
void sub_00197858_0x197858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197858_0x197858");
#endif

    switch (ctx->pc) {
        case 0x1978e0u: goto label_1978e0;
        case 0x1978e8u: goto label_1978e8;
        case 0x1978f8u: goto label_1978f8;
        case 0x197918u: goto label_197918;
        case 0x197968u: goto label_197968;
        case 0x197970u: goto label_197970;
        default: break;
    }

    ctx->pc = 0x197858u;

    // 0x197858: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x197858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19785c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x197860: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x197860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x197864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197868: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x197868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x19786c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19786cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197870: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x197870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x197874: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x197874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x197878: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x197878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x19787c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x19787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x197880: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x197880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x197884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x197888: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x197888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x19788c: 0x8e1109e8  lw          $s1, 0x9E8($s0)
    ctx->pc = 0x19788cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
    // 0x197890: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x197890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x197894: 0x2c8200ff  sltiu       $v0, $a0, 0xFF
    ctx->pc = 0x197894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x197898: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x197898u;
    {
        const bool branch_taken_0x197898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197898u;
        // 0x19789c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197898) {
            ctx->pc = 0x197970u;
            goto label_197970;
        }
    }
    ctx->pc = 0x1978A0u;
    // 0x1978a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1978a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1978a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1978a8: 0x260309ec  addiu       $v1, $s0, 0x9EC
    ctx->pc = 0x1978a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2540));
    // 0x1978ac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1978acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1978b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1978b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1978b4: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x1978b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1978b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1978b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1978bc: 0x8e1e09d0  lw          $fp, 0x9D0($s0)
    ctx->pc = 0x1978bcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1978c0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1978c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1978c4: 0x8e050dec  lw          $a1, 0xDEC($s0)
    ctx->pc = 0x1978c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3564)));
    // 0x1978c8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1978c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1978cc: 0xae170004  sw          $s7, 0x4($s0)
    ctx->pc = 0x1978ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 23));
    // 0x1978d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1978d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978d4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1978d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1978D8u;
    {
        const bool branch_taken_0x1978d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978D8u;
        // 0x1978dc: 0x2616000c  addiu       $s6, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978d8) {
            ctx->pc = 0x197910u;
            goto label_197910;
        }
    }
    ctx->pc = 0x1978E0u;
label_1978e0:
    // 0x1978e0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1978E0u;
    SET_GPR_U32(ctx, 31, 0x1978E8u);
    ctx->pc = 0x1978E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978E0u;
    // 0x1978e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1978E0u, 0x1978E8u)) {
        return;
    }
    ctx->pc = 0x1978E8u;
label_1978e8:
    // 0x1978e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1978E8u;
    {
        const bool branch_taken_0x1978e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978E8u;
        // 0x1978ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978e8) {
            ctx->pc = 0x197910u;
            goto label_197910;
        }
    }
    ctx->pc = 0x1978F0u;
    // 0x1978f0: 0xc065e84  jal         func_197A10
    ctx->pc = 0x1978F0u;
    SET_GPR_U32(ctx, 31, 0x1978F8u);
    ctx->pc = 0x1978F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978F0u;
    // 0x1978f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A10u, 0x1978F0u, 0x1978F8u)) {
        return;
    }
    ctx->pc = 0x1978F8u;
label_1978f8:
    // 0x1978f8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1978f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1978fc: 0x8e0409e8  lw          $a0, 0x9E8($s0)
    ctx->pc = 0x1978fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
    // 0x197900: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x197900u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17));
    // 0x197904: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x197904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x197908: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x197908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x19790c: 0x44980a  movz        $s3, $v0, $a0
    ctx->pc = 0x19790cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
label_197910:
    // 0x197910: 0xc065cba  jal         func_1972E8
    ctx->pc = 0x197910u;
    SET_GPR_U32(ctx, 31, 0x197918u);
    ctx->pc = 0x197914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197910u;
    // 0x197914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1972E8u, 0x197910u, 0x197918u)) {
        return;
    }
    ctx->pc = 0x197918u;
label_197918:
    // 0x197918: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197918u;
    {
        const bool branch_taken_0x197918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197918u;
        // 0x19791c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197918) {
            ctx->pc = 0x197930u;
            goto label_197930;
        }
    }
    ctx->pc = 0x197920u;
    // 0x197920: 0x8e0209e8  lw          $v0, 0x9E8($s0)
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
    // 0x197924: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x197924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x197928: 0x5040ffed  beql        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x197928u;
    {
        const bool branch_taken_0x197928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197928) {
            ctx->pc = 0x19792Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197928u;
            // 0x19792c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1978E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1978e0;
        }
    }
    ctx->pc = 0x197930u;
label_197930:
    // 0x197930: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x197930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x197934: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x197934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x197938: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x197938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19793c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x19793cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x197940: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x197940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197944: 0xae1109e8  sw          $s1, 0x9E8($s0)
    ctx->pc = 0x197944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2536), GPR_U32(ctx, 17));
    // 0x197948: 0xae050dec  sw          $a1, 0xDEC($s0)
    ctx->pc = 0x197948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 5));
    // 0x19794c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x19794cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x197950: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x197950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197954: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x197954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197958: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x197958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19795c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19795cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x197960: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x197960u;
    SET_GPR_U32(ctx, 31, 0x197968u);
    ctx->pc = 0x197964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197960u;
    // 0x197964: 0xae1e09d0  sw          $fp, 0x9D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x197960u, 0x197968u)) {
        return;
    }
    ctx->pc = 0x197968u;
label_197968:
    // 0x197968: 0xc066008  jal         func_198020
    ctx->pc = 0x197968u;
    SET_GPR_U32(ctx, 31, 0x197970u);
    ctx->pc = 0x19796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197968u;
    // 0x19796c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198020u, 0x197968u, 0x197970u)) {
        return;
    }
    ctx->pc = 0x197970u;
label_197970:
    // 0x197970: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x197970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197974: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x197974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x197978: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x197978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19797c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19797cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x197980: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x197980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x197984: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x197984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197988: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x197988u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19798c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x19798cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197990: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x197990u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197994: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x197994u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19799c: 0x3e00008  jr          $ra
    ctx->pc = 0x19799Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1979A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19799Cu;
        // 0x1979a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19799Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1979A4u;
    // 0x1979a4: 0x0  nop
    ctx->pc = 0x1979a4u;
    // NOP
    ctx->pc = 0x1979a8u;
}
