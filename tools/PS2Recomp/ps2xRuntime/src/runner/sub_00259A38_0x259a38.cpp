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

// Function: sub_00259A38
// Address: 0x259a38 - 0x259dc8
void sub_00259A38_0x259a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259A38_0x259a38");
#endif

    switch (ctx->pc) {
        case 0x259a90u: goto label_259a90;
        case 0x259b20u: goto label_259b20;
        case 0x259bbcu: goto label_259bbc;
        default: break;
    }

    ctx->pc = 0x259a38u;

    // 0x259a38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x259a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x259a3c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x259a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x259a40: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x259a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x259a44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x259a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x259a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x259a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a50: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x259a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x259a54: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x259a54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a58: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x259a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x259a5c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x259a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x259a60: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x259a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x259a64: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x259a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x259a68: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x259a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x259a6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259a70: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x259a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x259a74: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x259a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x259a78: 0x120000c6  beqz        $s0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x259A78u;
    {
        const bool branch_taken_0x259a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A78u;
        // 0x259a7c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a78) {
            ctx->pc = 0x259D94u;
            goto label_259d94;
        }
    }
    ctx->pc = 0x259A80u;
    // 0x259a80: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x259a80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259a84: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x259a84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259a88: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x259a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x259a8c: 0x0  nop
    ctx->pc = 0x259a8cu;
    // NOP
label_259a90:
    // 0x259a90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x259a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a94: 0x28570004  slti        $s7, $v0, 0x4
    ctx->pc = 0x259a94u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x259a98: 0x12e0000c  beqz        $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x259A98u;
    {
        const bool branch_taken_0x259a98 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A98u;
        // 0x259a9c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a98) {
            ctx->pc = 0x259ACCu;
            goto label_259acc;
        }
    }
    ctx->pc = 0x259AA0u;
    // 0x259aa0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x259aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x259aa4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259AA4u;
    {
        const bool branch_taken_0x259aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259aa4) {
            ctx->pc = 0x259AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259AA4u;
            // 0x259aa8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259ABCu;
            goto label_259abc;
        }
    }
    ctx->pc = 0x259AACu;
    // 0x259aac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x259aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x259ab0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x259AB0u;
    {
        const bool branch_taken_0x259ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ab0) {
            ctx->pc = 0x259AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259AB0u;
            // 0x259ab4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B00u;
            goto label_259b00;
        }
    }
    ctx->pc = 0x259AB8u;
    // 0x259ab8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_259abc:
    // 0x259abc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x259ABCu;
    {
        const bool branch_taken_0x259abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259abc) {
            ctx->pc = 0x259B00u;
            goto label_259b00;
        }
    }
    ctx->pc = 0x259AC4u;
    // 0x259ac4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x259AC4u;
    {
        const bool branch_taken_0x259ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AC4u;
        // 0x259ac8: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ac4) {
            ctx->pc = 0x259AF8u;
            goto label_259af8;
        }
    }
    ctx->pc = 0x259ACCu;
label_259acc:
    // 0x259acc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x259accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x259ad0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x259AD0u;
    {
        const bool branch_taken_0x259ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ad0) {
            ctx->pc = 0x259AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259AD0u;
            // 0x259ad4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259AECu;
            goto label_259aec;
        }
    }
    ctx->pc = 0x259AD8u;
    // 0x259ad8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x259ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x259adc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x259ADCu;
    {
        const bool branch_taken_0x259adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259adc) {
            ctx->pc = 0x259AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259ADCu;
            // 0x259ae0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259AECu;
            goto label_259aec;
        }
    }
    ctx->pc = 0x259AE4u;
    // 0x259ae4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x259AE4u;
    {
        const bool branch_taken_0x259ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AE4u;
        // 0x259ae8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ae4) {
            ctx->pc = 0x259B00u;
            goto label_259b00;
        }
    }
    ctx->pc = 0x259AECu;
label_259aec:
    // 0x259aec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259AECu;
    {
        const bool branch_taken_0x259aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259aec) {
            ctx->pc = 0x259B00u;
            goto label_259b00;
        }
    }
    ctx->pc = 0x259AF4u;
    // 0x259af4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x259af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_259af8:
    // 0x259af8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x259af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259afc: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x259afcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_259b00:
    // 0x259b00: 0x124000a4  beqz        $s2, . + 4 + (0xA4 << 2)
    ctx->pc = 0x259B00u;
    {
        const bool branch_taken_0x259b00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B00u;
        // 0x259b04: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b00) {
            ctx->pc = 0x259D94u;
            goto label_259d94;
        }
    }
    ctx->pc = 0x259B08u;
    // 0x259b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b0c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x259b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x259b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x259b14: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x259b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x259b18: 0xc096628  jal         func_2598A0
    ctx->pc = 0x259B18u;
    SET_GPR_U32(ctx, 31, 0x259B20u);
    ctx->pc = 0x259B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B18u;
    // 0x259b1c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2598A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2598A0u, 0x259B18u, 0x259B20u)) {
        return;
    }
    ctx->pc = 0x259B20u;
label_259b20:
    // 0x259b20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x259b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x259b24: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259B24u;
    {
        const bool branch_taken_0x259b24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x259b24) {
            ctx->pc = 0x259B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B24u;
            // 0x259b28: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B34u;
            goto label_259b34;
        }
    }
    ctx->pc = 0x259B2Cu;
    // 0x259b2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x259B2Cu;
    {
        const bool branch_taken_0x259b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B2Cu;
        // 0x259b30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b2c) {
            ctx->pc = 0x259B50u;
            goto label_259b50;
        }
    }
    ctx->pc = 0x259B34u;
label_259b34:
    // 0x259b34: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259B34u;
    {
        const bool branch_taken_0x259b34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x259b34) {
            ctx->pc = 0x259B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B34u;
            // 0x259b38: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B44u;
            goto label_259b44;
        }
    }
    ctx->pc = 0x259B3Cu;
    // 0x259b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x259B3Cu;
    {
        const bool branch_taken_0x259b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B3Cu;
        // 0x259b40: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b3c) {
            ctx->pc = 0x259B50u;
            goto label_259b50;
        }
    }
    ctx->pc = 0x259B44u;
label_259b44:
    // 0x259b44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x259b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259b48: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x259b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x259b4c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x259b4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_259b50:
    // 0x259b50: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x259b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x259b54: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x259B54u;
    {
        const bool branch_taken_0x259b54 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b54) {
            ctx->pc = 0x259B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B54u;
            // 0x259b58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B5Cu;
            goto label_259b5c;
        }
    }
    ctx->pc = 0x259B5Cu;
label_259b5c:
    // 0x259b5c: 0x7e001a  div         $zero, $v1, $fp
    ctx->pc = 0x259b5cu;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x259b60: 0x1010  mfhi        $v0
    ctx->pc = 0x259b60u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x259b64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259b68: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x259b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x259b6c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x259b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x259b70: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x259b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x259b74: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x259B74u;
    {
        const bool branch_taken_0x259b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x259b74) {
            ctx->pc = 0x259B8Cu;
            goto label_259b8c;
        }
    }
    ctx->pc = 0x259B7Cu;
    // 0x259b7c: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x259B7Cu;
    {
        const bool branch_taken_0x259b7c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b7c) {
            ctx->pc = 0x259B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B7Cu;
            // 0x259b80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B84u;
            goto label_259b84;
        }
    }
    ctx->pc = 0x259B84u;
label_259b84:
    // 0x259b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x259B84u;
    {
        const bool branch_taken_0x259b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B84u;
        // 0x259b88: 0x94d40002  lhu         $s4, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b84) {
            ctx->pc = 0x259B98u;
            goto label_259b98;
        }
    }
    ctx->pc = 0x259B8Cu;
label_259b8c:
    // 0x259b8c: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x259B8Cu;
    {
        const bool branch_taken_0x259b8c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b8c) {
            ctx->pc = 0x259B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B8Cu;
            // 0x259b90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B94u;
            goto label_259b94;
        }
    }
    ctx->pc = 0x259B94u;
label_259b94:
    // 0x259b94: 0x94d40000  lhu         $s4, 0x0($a2)
    ctx->pc = 0x259b94u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_259b98:
    // 0x259b98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x259b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x259b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ba0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x259ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259ba4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x259ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ba8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x259ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259bac: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x259bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259bb4: 0xc0965fe  jal         func_2597F8
    ctx->pc = 0x259BB4u;
    SET_GPR_U32(ctx, 31, 0x259BBCu);
    ctx->pc = 0x259BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BB4u;
    // 0x259bb8: 0x9445fffe  lhu         $a1, -0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2597F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2597F8u, 0x259BB4u, 0x259BBCu)) {
        return;
    }
    ctx->pc = 0x259BBCu;
label_259bbc:
    // 0x259bbc: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x259BBCu;
    {
        const bool branch_taken_0x259bbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BBCu;
        // 0x259bc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bbc) {
            ctx->pc = 0x259BF8u;
            goto label_259bf8;
        }
    }
    ctx->pc = 0x259BC4u;
    // 0x259bc4: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x259BC4u;
    {
        const bool branch_taken_0x259bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BC4u;
        // 0x259bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bc4) {
            ctx->pc = 0x259C3Cu;
            goto label_259c3c;
        }
    }
    ctx->pc = 0x259BCCu;
    // 0x259bcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x259bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x259bd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259BD0u;
    {
        const bool branch_taken_0x259bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BD0u;
        // 0x259bd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bd0) {
            ctx->pc = 0x259BE4u;
            goto label_259be4;
        }
    }
    ctx->pc = 0x259BD8u;
    // 0x259bd8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x259bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x259bdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x259bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259be0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x259be0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_259be4:
    // 0x259be4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x259be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259be8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x259BE8u;
    {
        const bool branch_taken_0x259be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BE8u;
        // 0x259bec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259be8) {
            ctx->pc = 0x259C30u;
            goto label_259c30;
        }
    }
    ctx->pc = 0x259BF0u;
    // 0x259bf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x259BF0u;
    {
        const bool branch_taken_0x259bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BF0u;
        // 0x259bf4: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bf0) {
            ctx->pc = 0x259C28u;
            goto label_259c28;
        }
    }
    ctx->pc = 0x259BF8u;
label_259bf8:
    // 0x259bf8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x259BF8u;
    {
        const bool branch_taken_0x259bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BF8u;
        // 0x259bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bf8) {
            ctx->pc = 0x259C3Cu;
            goto label_259c3c;
        }
    }
    ctx->pc = 0x259C00u;
    // 0x259c00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x259c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x259c04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C04u;
    {
        const bool branch_taken_0x259c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C04u;
        // 0x259c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c04) {
            ctx->pc = 0x259C18u;
            goto label_259c18;
        }
    }
    ctx->pc = 0x259C0Cu;
    // 0x259c0c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x259c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x259c10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x259c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c14: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x259c14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_259c18:
    // 0x259c18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x259c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259c1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C1Cu;
    {
        const bool branch_taken_0x259c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C1Cu;
        // 0x259c20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c1c) {
            ctx->pc = 0x259C30u;
            goto label_259c30;
        }
    }
    ctx->pc = 0x259C24u;
    // 0x259c24: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x259c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_259c28:
    // 0x259c28: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x259c28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c2c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x259c2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_259c30:
    // 0x259c30: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x259c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x259c34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x259C34u;
    {
        const bool branch_taken_0x259c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259c34) {
            ctx->pc = 0x259C40u;
            goto label_259c40;
        }
    }
    ctx->pc = 0x259C3Cu;
label_259c3c:
    // 0x259c3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x259c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259c40:
    // 0x259c40: 0x50a0004b  beql        $a1, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x259C40u;
    {
        const bool branch_taken_0x259c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c40) {
            ctx->pc = 0x259C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259C40u;
            // 0x259c44: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259D70u;
            goto label_259d70;
        }
    }
    ctx->pc = 0x259C48u;
    // 0x259c48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x259c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x259c4c: 0x50530004  beql        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C4Cu;
    {
        const bool branch_taken_0x259c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x259c4c) {
            ctx->pc = 0x259C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259C4Cu;
            // 0x259c50: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259C60u;
            goto label_259c60;
        }
    }
    ctx->pc = 0x259C54u;
    // 0x259c54: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x259C54u;
    {
        const bool branch_taken_0x259c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x259c54) {
            ctx->pc = 0x259C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259C54u;
            // 0x259c58: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259C84u;
            goto label_259c84;
        }
    }
    ctx->pc = 0x259C5Cu;
    // 0x259c5c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x259c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_259c60:
    // 0x259c60: 0x50530005  beql        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x259C60u;
    {
        const bool branch_taken_0x259c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x259c60) {
            ctx->pc = 0x259C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259C60u;
            // 0x259c64: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259C78u;
            goto label_259c78;
        }
    }
    ctx->pc = 0x259C68u;
    // 0x259c68: 0x50500003  beql        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259C68u;
    {
        const bool branch_taken_0x259c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x259c68) {
            ctx->pc = 0x259C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259C68u;
            // 0x259c6c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259C78u;
            goto label_259c78;
        }
    }
    ctx->pc = 0x259C70u;
    // 0x259c70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x259C70u;
    {
        const bool branch_taken_0x259c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C70u;
        // 0x259c74: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c70) {
            ctx->pc = 0x259C84u;
            goto label_259c84;
        }
    }
    ctx->pc = 0x259C78u;
label_259c78:
    // 0x259c78: 0x10930002  beq         $a0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x259C78u;
    {
        const bool branch_taken_0x259c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x259C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C78u;
        // 0x259c7c: 0x901026  xor         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c78) {
            ctx->pc = 0x259C84u;
            goto label_259c84;
        }
    }
    ctx->pc = 0x259C80u;
    // 0x259c80: 0x82a80b  movn        $s5, $a0, $v0
    ctx->pc = 0x259c80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4));
label_259c84:
    // 0x259c84: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x259C84u;
    {
        const bool branch_taken_0x259c84 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c84) {
            ctx->pc = 0x259CC0u;
            goto label_259cc0;
        }
    }
    ctx->pc = 0x259C8Cu;
    // 0x259c8c: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
    ctx->pc = 0x259C8Cu;
    {
        const bool branch_taken_0x259c8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C8Cu;
        // 0x259c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c8c) {
            ctx->pc = 0x259D04u;
            goto label_259d04;
        }
    }
    ctx->pc = 0x259C94u;
    // 0x259c94: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x259c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x259c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C98u;
    {
        const bool branch_taken_0x259c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C98u;
        // 0x259c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c98) {
            ctx->pc = 0x259CACu;
            goto label_259cac;
        }
    }
    ctx->pc = 0x259CA0u;
    // 0x259ca0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x259ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x259ca4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x259ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ca8: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x259ca8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_259cac:
    // 0x259cac: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x259cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x259cb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x259CB0u;
    {
        const bool branch_taken_0x259cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CB0u;
        // 0x259cb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cb0) {
            ctx->pc = 0x259CF8u;
            goto label_259cf8;
        }
    }
    ctx->pc = 0x259CB8u;
    // 0x259cb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x259CB8u;
    {
        const bool branch_taken_0x259cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CB8u;
        // 0x259cbc: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cb8) {
            ctx->pc = 0x259CF0u;
            goto label_259cf0;
        }
    }
    ctx->pc = 0x259CC0u;
label_259cc0:
    // 0x259cc0: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x259CC0u;
    {
        const bool branch_taken_0x259cc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CC0u;
        // 0x259cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cc0) {
            ctx->pc = 0x259D04u;
            goto label_259d04;
        }
    }
    ctx->pc = 0x259CC8u;
    // 0x259cc8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x259cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x259ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CCCu;
    {
        const bool branch_taken_0x259ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CCCu;
        // 0x259cd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ccc) {
            ctx->pc = 0x259CE0u;
            goto label_259ce0;
        }
    }
    ctx->pc = 0x259CD4u;
    // 0x259cd4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x259cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x259cd8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x259cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259cdc: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x259cdcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_259ce0:
    // 0x259ce0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x259ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x259ce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CE4u;
    {
        const bool branch_taken_0x259ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CE4u;
        // 0x259ce8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ce4) {
            ctx->pc = 0x259CF8u;
            goto label_259cf8;
        }
    }
    ctx->pc = 0x259CECu;
    // 0x259cec: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x259cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_259cf0:
    // 0x259cf0: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x259cf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259cf4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x259cf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_259cf8:
    // 0x259cf8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x259cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x259cfc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x259cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d00: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x259d00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
label_259d04:
    // 0x259d04: 0x50a00019  beql        $a1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x259D04u;
    {
        const bool branch_taken_0x259d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d04) {
            ctx->pc = 0x259D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259D04u;
            // 0x259d08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259D6Cu;
            goto label_259d6c;
        }
    }
    ctx->pc = 0x259D0Cu;
    // 0x259d0c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x259d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x259d10: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x259d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x259d14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D14u;
    {
        const bool branch_taken_0x259d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D14u;
        // 0x259d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d14) {
            ctx->pc = 0x259D28u;
            goto label_259d28;
        }
    }
    ctx->pc = 0x259D1Cu;
    // 0x259d1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x259d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259d20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x259D20u;
    {
        const bool branch_taken_0x259d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D20u;
        // 0x259d24: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d20) {
            ctx->pc = 0x259D54u;
            goto label_259d54;
        }
    }
    ctx->pc = 0x259D28u;
label_259d28:
    // 0x259d28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x259d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259d2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x259d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259d30: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x259d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259d38: 0x9462fffc  lhu         $v0, -0x4($v1)
    ctx->pc = 0x259d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x259d3c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x259d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x259d40: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x259d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x259d44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x259d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259d48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x259d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x259d4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x259d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x259d50: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x259d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_259d54:
    // 0x259d54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259d58: 0xa4740000  sh          $s4, 0x0($v1)
    ctx->pc = 0x259d58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x259d5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x259d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x259d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x259d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x259d64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x259D64u;
    {
        const bool branch_taken_0x259d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D64u;
        // 0x259d68: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d64) {
            ctx->pc = 0x259D8Cu;
            goto label_259d8c;
        }
    }
    ctx->pc = 0x259D6Cu;
label_259d6c:
    // 0x259d6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x259d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259d70:
    // 0x259d70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x259d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259d74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x259d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259d7c: 0xa4540000  sh          $s4, 0x0($v0)
    ctx->pc = 0x259d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x259d80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x259d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x259d84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x259d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x259d88: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x259d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_259d8c:
    // 0x259d8c: 0x1600ff40  bnez        $s0, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x259D8Cu;
    {
        const bool branch_taken_0x259d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x259D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D8Cu;
        // 0x259d90: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d8c) {
            ctx->pc = 0x259A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259a90;
        }
    }
    ctx->pc = 0x259D94u;
label_259d94:
    // 0x259d94: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x259d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x259d98: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x259d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x259d9c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x259d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259da0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x259da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259da4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x259da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259da8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x259da8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259dac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x259dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259db0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x259db0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259db4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x259db4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259db8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x259db8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259dbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x259DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DC0u;
        // 0x259dc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259DC8u;
}
