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

// Function: sub_002EF9B8
// Address: 0x2ef9b8 - 0x2efbd0
void sub_002EF9B8_0x2ef9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF9B8_0x2ef9b8");
#endif

    switch (ctx->pc) {
        case 0x2efa08u: goto label_2efa08;
        case 0x2efa0cu: goto label_2efa0c;
        case 0x2efa38u: goto label_2efa38;
        case 0x2efa48u: goto label_2efa48;
        case 0x2efa5cu: goto label_2efa5c;
        case 0x2efa64u: goto label_2efa64;
        case 0x2efac0u: goto label_2efac0;
        case 0x2efac8u: goto label_2efac8;
        case 0x2efae4u: goto label_2efae4;
        case 0x2efaecu: goto label_2efaec;
        case 0x2efb08u: goto label_2efb08;
        case 0x2efb10u: goto label_2efb10;
        case 0x2efb20u: goto label_2efb20;
        case 0x2efb34u: goto label_2efb34;
        case 0x2efb3cu: goto label_2efb3c;
        case 0x2efb50u: goto label_2efb50;
        case 0x2efb58u: goto label_2efb58;
        case 0x2efb6cu: goto label_2efb6c;
        case 0x2efb74u: goto label_2efb74;
        case 0x2efb88u: goto label_2efb88;
        case 0x2efb90u: goto label_2efb90;
        default: break;
    }

    ctx->pc = 0x2ef9b8u;

    // 0x2ef9b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ef9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ef9bc: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2ef9c0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2ef9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2ef9c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ef9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ef9c8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ef9c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9cc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2ef9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2ef9d0: 0x2e2a021  addu        $s4, $s7, $v0
    ctx->pc = 0x2ef9d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2ef9d4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ef9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ef9d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ef9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ef9dc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2ef9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2ef9e0: 0x24b30008  addiu       $s3, $a1, 0x8
    ctx->pc = 0x2ef9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ef9e4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2ef9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2ef9e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ef9e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9ec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ef9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2ef9f0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2ef9f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef9f4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ef9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2ef9f8: 0x26920008  addiu       $s2, $s4, 0x8
    ctx->pc = 0x2ef9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2ef9fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF9FCu;
    {
        const bool branch_taken_0x2ef9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9FCu;
        // 0x2efa00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9fc) {
            ctx->pc = 0x2EFA14u;
            goto label_2efa14;
        }
    }
    ctx->pc = 0x2EFA04u;
    // 0x2efa04: 0x0  nop
    ctx->pc = 0x2efa04u;
    // NOP
label_2efa08:
    // 0x2efa08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2efa08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2efa0c:
    // 0x2efa0c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2efa0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2efa10: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2efa10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2efa14:
    // 0x2efa14: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x2efa14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2efa18: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EFA18u;
    {
        const bool branch_taken_0x2efa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efa18) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA20u;
    // 0x2efa20: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2efa20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2efa24: 0x5200fff8  beql        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EFA24u;
    {
        const bool branch_taken_0x2efa24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efa24) {
            ctx->pc = 0x2EFA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA24u;
            // 0x2efa28: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efa08;
        }
    }
    ctx->pc = 0x2EFA2Cu;
    // 0x2efa2c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2efa2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efa30: 0xc09d8ce  jal         func_276338
    ctx->pc = 0x2EFA30u;
    SET_GPR_U32(ctx, 31, 0x2EFA38u);
    ctx->pc = 0x2EFA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA30u;
    // 0x2efa34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276338u, 0x2EFA30u, 0x2EFA38u)) {
        return;
    }
    ctx->pc = 0x2EFA38u;
label_2efa38:
    // 0x2efa38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2efa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2efa3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2efa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa40: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x2EFA40u;
    SET_GPR_U32(ctx, 31, 0x2EFA48u);
    ctx->pc = 0x2EFA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA40u;
    // 0x2efa44: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x2EFA40u, 0x2EFA48u)) {
        return;
    }
    ctx->pc = 0x2EFA48u;
label_2efa48:
    // 0x2efa48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFA48u;
    {
        const bool branch_taken_0x2efa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA48u;
        // 0x2efa4c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa48) {
            ctx->pc = 0x2EFA6Cu;
            goto label_2efa6c;
        }
    }
    ctx->pc = 0x2EFA50u;
    // 0x2efa50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2efa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa54: 0xc09d918  jal         func_276460
    ctx->pc = 0x2EFA54u;
    SET_GPR_U32(ctx, 31, 0x2EFA5Cu);
    ctx->pc = 0x2EFA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA54u;
    // 0x2efa58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x2EFA54u, 0x2EFA5Cu)) {
        return;
    }
    ctx->pc = 0x2EFA5Cu;
label_2efa5c:
    // 0x2efa5c: 0xc0bbdb8  jal         func_2EF6E0
    ctx->pc = 0x2EFA5Cu;
    SET_GPR_U32(ctx, 31, 0x2EFA64u);
    ctx->pc = 0x2EFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA5Cu;
    // 0x2efa60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF6E0u, 0x2EFA5Cu, 0x2EFA64u)) {
        return;
    }
    ctx->pc = 0x2EFA64u;
label_2efa64:
    // 0x2efa64: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EFA64u;
    {
        const bool branch_taken_0x2efa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA64u;
        // 0x2efa68: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa64) {
            ctx->pc = 0x2EFA0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efa0c;
        }
    }
    ctx->pc = 0x2EFA6Cu;
label_2efa6c:
    // 0x2efa6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2efa6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efa70:
    // 0x2efa70: 0x16c0004c  bnez        $s6, . + 4 + (0x4C << 2)
    ctx->pc = 0x2EFA70u;
    {
        const bool branch_taken_0x2efa70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA70u;
        // 0x2efa74: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa70) {
            ctx->pc = 0x2EFBA4u;
            goto label_2efba4;
        }
    }
    ctx->pc = 0x2EFA78u;
    // 0x2efa78: 0x12a00049  beqz        $s5, . + 4 + (0x49 << 2)
    ctx->pc = 0x2EFA78u;
    {
        const bool branch_taken_0x2efa78 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA78u;
        // 0x2efa7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa78) {
            ctx->pc = 0x2EFBA0u;
            goto label_2efba0;
        }
    }
    ctx->pc = 0x2EFA80u;
    // 0x2efa80: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x2efa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2efa84: 0x1aa0001b  blez        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EFA84u;
    {
        const bool branch_taken_0x2efa84 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x2EFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA84u;
        // 0x2efa88: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa84) {
            ctx->pc = 0x2EFAF4u;
            goto label_2efaf4;
        }
    }
    ctx->pc = 0x2EFA8Cu;
    // 0x2efa8c: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EFA8Cu;
    {
        const bool branch_taken_0x2efa8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efa8c) {
            ctx->pc = 0x2EFA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA8Cu;
            // 0x2efa90: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFB24u;
            goto label_2efb24;
        }
    }
    ctx->pc = 0x2EFA94u;
    // 0x2efa94: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2efa94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2efa98: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EFA98u;
    {
        const bool branch_taken_0x2efa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efa98) {
            ctx->pc = 0x2EFA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA98u;
            // 0x2efa9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFAF8u;
            goto label_2efaf8;
        }
    }
    ctx->pc = 0x2EFAA0u;
    // 0x2efaa0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2efaa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2efaa4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EFAA4u;
    {
        const bool branch_taken_0x2efaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efaa4) {
            ctx->pc = 0x2EFAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFAA4u;
            // 0x2efaa8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFAD4u;
            goto label_2efad4;
        }
    }
    ctx->pc = 0x2EFAACu;
    // 0x2efaac: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2efaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2efab0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFAB0u;
    {
        const bool branch_taken_0x2efab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAB0u;
        // 0x2efab4: 0x2690000c  addiu       $s0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efab0) {
            ctx->pc = 0x2EFACCu;
            goto label_2efacc;
        }
    }
    ctx->pc = 0x2EFAB8u;
    // 0x2efab8: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EFAB8u;
    SET_GPR_U32(ctx, 31, 0x2EFAC0u);
    ctx->pc = 0x2EFABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAB8u;
    // 0x2efabc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EFAB8u, 0x2EFAC0u)) {
        return;
    }
    ctx->pc = 0x2EFAC0u;
label_2efac0:
    // 0x2efac0: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EFAC0u;
    SET_GPR_U32(ctx, 31, 0x2EFAC8u);
    ctx->pc = 0x2EFAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAC0u;
    // 0x2efac4: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EFAC0u, 0x2EFAC8u)) {
        return;
    }
    ctx->pc = 0x2EFAC8u;
label_2efac8:
    // 0x2efac8: 0x2690000c  addiu       $s0, $s4, 0xC
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_2efacc:
    // 0x2efacc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2efaccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efad0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2efad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2efad4:
    // 0x2efad4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFAD4u;
    {
        const bool branch_taken_0x2efad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efad4) {
            ctx->pc = 0x2EFAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFAD4u;
            // 0x2efad8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFAF0u;
            goto label_2efaf0;
        }
    }
    ctx->pc = 0x2EFADCu;
    // 0x2efadc: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EFADCu;
    SET_GPR_U32(ctx, 31, 0x2EFAE4u);
    ctx->pc = 0x2EFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFADCu;
    // 0x2efae0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EFADCu, 0x2EFAE4u)) {
        return;
    }
    ctx->pc = 0x2EFAE4u;
label_2efae4:
    // 0x2efae4: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EFAE4u;
    SET_GPR_U32(ctx, 31, 0x2EFAECu);
    ctx->pc = 0x2EFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAE4u;
    // 0x2efae8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EFAE4u, 0x2EFAECu)) {
        return;
    }
    ctx->pc = 0x2EFAECu;
label_2efaec:
    // 0x2efaec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2efaecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2efaf0:
    // 0x2efaf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2efaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2efaf4:
    // 0x2efaf4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2efaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2efaf8:
    // 0x2efaf8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFAF8u;
    {
        const bool branch_taken_0x2efaf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efaf8) {
            ctx->pc = 0x2EFAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFAF8u;
            // 0x2efafc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFB14u;
            goto label_2efb14;
        }
    }
    ctx->pc = 0x2EFB00u;
    // 0x2efb00: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EFB00u;
    SET_GPR_U32(ctx, 31, 0x2EFB08u);
    ctx->pc = 0x2EFB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB00u;
    // 0x2efb04: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EFB00u, 0x2EFB08u)) {
        return;
    }
    ctx->pc = 0x2EFB08u;
label_2efb08:
    // 0x2efb08: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EFB08u;
    SET_GPR_U32(ctx, 31, 0x2EFB10u);
    ctx->pc = 0x2EFB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB08u;
    // 0x2efb0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EFB08u, 0x2EFB10u)) {
        return;
    }
    ctx->pc = 0x2EFB10u;
label_2efb10:
    // 0x2efb10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2efb10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2efb14:
    // 0x2efb14: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x2efb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2efb18: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EFB18u;
    {
        const bool branch_taken_0x2efb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB18u;
        // 0x2efb1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb18) {
            ctx->pc = 0x2EFBA0u;
            goto label_2efba0;
        }
    }
    ctx->pc = 0x2EFB20u;
label_2efb20:
    // 0x2efb20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2efb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2efb24:
    // 0x2efb24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFB24u;
    {
        const bool branch_taken_0x2efb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efb24) {
            ctx->pc = 0x2EFB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB24u;
            // 0x2efb28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFB40u;
            goto label_2efb40;
        }
    }
    ctx->pc = 0x2EFB2Cu;
    // 0x2efb2c: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EFB2Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB34u);
    ctx->pc = 0x2EFB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB2Cu;
    // 0x2efb30: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EFB2Cu, 0x2EFB34u)) {
        return;
    }
    ctx->pc = 0x2EFB34u;
label_2efb34:
    // 0x2efb34: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EFB34u;
    SET_GPR_U32(ctx, 31, 0x2EFB3Cu);
    ctx->pc = 0x2EFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB34u;
    // 0x2efb38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EFB34u, 0x2EFB3Cu)) {
        return;
    }
    ctx->pc = 0x2EFB3Cu;
label_2efb3c:
    // 0x2efb3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2efb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2efb40:
    // 0x2efb40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFB40u;
    {
        const bool branch_taken_0x2efb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efb40) {
            ctx->pc = 0x2EFB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB40u;
            // 0x2efb44: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFB5Cu;
            goto label_2efb5c;
        }
    }
    ctx->pc = 0x2EFB48u;
    // 0x2efb48: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EFB48u;
    SET_GPR_U32(ctx, 31, 0x2EFB50u);
    ctx->pc = 0x2EFB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB48u;
    // 0x2efb4c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EFB48u, 0x2EFB50u)) {
        return;
    }
    ctx->pc = 0x2EFB50u;
label_2efb50:
    // 0x2efb50: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EFB50u;
    SET_GPR_U32(ctx, 31, 0x2EFB58u);
    ctx->pc = 0x2EFB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB50u;
    // 0x2efb54: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EFB50u, 0x2EFB58u)) {
        return;
    }
    ctx->pc = 0x2EFB58u;
label_2efb58:
    // 0x2efb58: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2efb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2efb5c:
    // 0x2efb5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFB5Cu;
    {
        const bool branch_taken_0x2efb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efb5c) {
            ctx->pc = 0x2EFB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB5Cu;
            // 0x2efb60: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFB78u;
            goto label_2efb78;
        }
    }
    ctx->pc = 0x2EFB64u;
    // 0x2efb64: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EFB64u;
    SET_GPR_U32(ctx, 31, 0x2EFB6Cu);
    ctx->pc = 0x2EFB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB64u;
    // 0x2efb68: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EFB64u, 0x2EFB6Cu)) {
        return;
    }
    ctx->pc = 0x2EFB6Cu;
label_2efb6c:
    // 0x2efb6c: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EFB6Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB74u);
    ctx->pc = 0x2EFB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB6Cu;
    // 0x2efb70: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EFB6Cu, 0x2EFB74u)) {
        return;
    }
    ctx->pc = 0x2EFB74u;
label_2efb74:
    // 0x2efb74: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2efb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2efb78:
    // 0x2efb78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFB78u;
    {
        const bool branch_taken_0x2efb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efb78) {
            ctx->pc = 0x2EFB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB78u;
            // 0x2efb7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFB94u;
            goto label_2efb94;
        }
    }
    ctx->pc = 0x2EFB80u;
    // 0x2efb80: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EFB80u;
    SET_GPR_U32(ctx, 31, 0x2EFB88u);
    ctx->pc = 0x2EFB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB80u;
    // 0x2efb84: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EFB80u, 0x2EFB88u)) {
        return;
    }
    ctx->pc = 0x2EFB88u;
label_2efb88:
    // 0x2efb88: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EFB88u;
    SET_GPR_U32(ctx, 31, 0x2EFB90u);
    ctx->pc = 0x2EFB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB88u;
    // 0x2efb8c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EFB88u, 0x2EFB90u)) {
        return;
    }
    ctx->pc = 0x2EFB90u;
label_2efb90:
    // 0x2efb90: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2efb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2efb94:
    // 0x2efb94: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x2efb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2efb98: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2EFB98u;
    {
        const bool branch_taken_0x2efb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB98u;
        // 0x2efb9c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb98) {
            ctx->pc = 0x2EFB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efb20;
        }
    }
    ctx->pc = 0x2EFBA0u;
label_2efba0:
    // 0x2efba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2efba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efba4:
    // 0x2efba4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2efba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2efba8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2efba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2efbac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2efbacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2efbb0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2efbb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2efbb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2efbb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2efbb8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2efbb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2efbbc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2efbbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efbc0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2efbc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efbc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBC8u;
        // 0x2efbcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFBD0u;
}
