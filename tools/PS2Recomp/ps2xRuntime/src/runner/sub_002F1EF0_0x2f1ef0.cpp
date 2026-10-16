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

// Function: sub_002F1EF0
// Address: 0x2f1ef0 - 0x2f2010
void sub_002F1EF0_0x2f1ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1EF0_0x2f1ef0");
#endif

    switch (ctx->pc) {
        case 0x2f1f2cu: goto label_2f1f2c;
        case 0x2f1f58u: goto label_2f1f58;
        case 0x2f1f78u: goto label_2f1f78;
        case 0x2f1fa0u: goto label_2f1fa0;
        case 0x2f1facu: goto label_2f1fac;
        case 0x2f1fc8u: goto label_2f1fc8;
        case 0x2f1fd4u: goto label_2f1fd4;
        default: break;
    }

    ctx->pc = 0x2f1ef0u;

    // 0x2f1ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f1ef4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f1ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f1ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1efc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f00: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f1f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f1f0c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1F0Cu;
    {
        const bool branch_taken_0x2f1f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F0Cu;
        // 0x2f1f10: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f0c) {
            ctx->pc = 0x2F1F34u;
            goto label_2f1f34;
        }
    }
    ctx->pc = 0x2F1F14u;
    // 0x2f1f14: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f1f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f1c: 0x2442b648  addiu       $v0, $v0, -0x49B8
    ctx->pc = 0x2f1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948424));
    // 0x2f1f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f24: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F1F24u;
    SET_GPR_U32(ctx, 31, 0x2F1F2Cu);
    ctx->pc = 0x2F1F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F24u;
    // 0x2f1f28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F1F24u, 0x2F1F2Cu)) {
        return;
    }
    ctx->pc = 0x2F1F2Cu;
label_2f1f2c:
    // 0x2f1f2c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1F2Cu;
    {
        const bool branch_taken_0x2f1f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1f2c) {
            ctx->pc = 0x2F1F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1F2Cu;
            // 0x2f1f30: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1F48u;
            goto label_2f1f48;
        }
    }
    ctx->pc = 0x2F1F34u;
label_2f1f34:
    // 0x2f1f34: 0x3c130072  lui         $s3, 0x72
    ctx->pc = 0x2f1f34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
    // 0x2f1f38: 0x8e70b640  lw          $s0, -0x49C0($s3)
    ctx->pc = 0x2f1f38u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x71B640u));
    // 0x2f1f3c: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F1F3Cu;
    {
        const bool branch_taken_0x2f1f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F3Cu;
        // 0x2f1f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f3c) {
            ctx->pc = 0x2F1FF4u;
            goto label_2f1ff4;
        }
    }
    ctx->pc = 0x2F1F44u;
    // 0x2f1f44: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f1f44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1f48:
    // 0x2f1f48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1F48u;
    {
        const bool branch_taken_0x2f1f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F48u;
        // 0x2f1f4c: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f48) {
            ctx->pc = 0x2F1F64u;
            goto label_2f1f64;
        }
    }
    ctx->pc = 0x2F1F50u;
    // 0x2f1f50: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F1F50u;
    {
        const bool branch_taken_0x2f1f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F50u;
        // 0x2f1f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f50) {
            ctx->pc = 0x2F1FF4u;
            goto label_2f1ff4;
        }
    }
    ctx->pc = 0x2F1F58u;
label_2f1f58:
    // 0x2f1f58: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F1F58u;
    {
        const bool branch_taken_0x2f1f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F58u;
        // 0x2f1f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f58) {
            ctx->pc = 0x2F1FF4u;
            goto label_2f1ff4;
        }
    }
    ctx->pc = 0x2F1F60u;
    // 0x2f1f60: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2f1f60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1f64:
    // 0x2f1f64: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2f1f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f1f68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f1f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f1f6c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x2f1f6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x2f1f70: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x2F1F70u;
    SET_GPR_U32(ctx, 31, 0x2F1F78u);
    ctx->pc = 0x2F1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F70u;
    // 0x2f1f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x2F1F70u, 0x2F1F78u)) {
        return;
    }
    ctx->pc = 0x2F1F78u;
label_2f1f78:
    // 0x2f1f78: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F1F78u;
    {
        const bool branch_taken_0x2f1f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1f78) {
            ctx->pc = 0x2F1F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1F78u;
            // 0x2f1f7c: 0x8202ffff  lb          $v0, -0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1f58;
        }
    }
    ctx->pc = 0x2F1F80u;
    // 0x2f1f80: 0x8203ffff  lb          $v1, -0x1($s0)
    ctx->pc = 0x2f1f80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x2f1f84: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2f1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2f1f88: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F1F88u;
    {
        const bool branch_taken_0x2f1f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F88u;
        // 0x2f1f8c: 0x2612ffff  addiu       $s2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f88) {
            ctx->pc = 0x2F1FBCu;
            goto label_2f1fbc;
        }
    }
    ctx->pc = 0x2F1F90u;
    // 0x2f1f90: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2f1f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f94: 0x3c130072  lui         $s3, 0x72
    ctx->pc = 0x2f1f94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
    // 0x2f1f98: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x2f1f98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x2f1f9c: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x2f1f9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1fa0:
    // 0x2f1fa0: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x2f1fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2f1fa4: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x2F1FA4u;
    SET_GPR_U32(ctx, 31, 0x2F1FACu);
    ctx->pc = 0x2F1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FA4u;
    // 0x2f1fa8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x2F1FA4u, 0x2F1FACu)) {
        return;
    }
    ctx->pc = 0x2F1FACu;
label_2f1fac:
    // 0x2f1fac: 0x5040fffc  beql        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2F1FACu;
    {
        const bool branch_taken_0x2f1fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1fac) {
            ctx->pc = 0x2F1FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1FACu;
            // 0x2f1fb0: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1fa0;
        }
    }
    ctx->pc = 0x2F1FB4u;
    // 0x2f1fb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F1FB4u;
    {
        const bool branch_taken_0x2f1fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FB4u;
        // 0x2f1fb8: 0x8202ffff  lb          $v0, -0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1fb4) {
            ctx->pc = 0x2F1FE0u;
            goto label_2f1fe0;
        }
    }
    ctx->pc = 0x2F1FBCu;
label_2f1fbc:
    // 0x2f1fbc: 0x3c130072  lui         $s3, 0x72
    ctx->pc = 0x2f1fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
    // 0x2f1fc0: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x2f1fc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f1fc4: 0x0  nop
    ctx->pc = 0x2f1fc4u;
    // NOP
label_2f1fc8:
    // 0x2f1fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1fcc: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x2F1FCCu;
    SET_GPR_U32(ctx, 31, 0x2F1FD4u);
    ctx->pc = 0x2F1FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FCCu;
    // 0x2f1fd0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x2F1FCCu, 0x2F1FD4u)) {
        return;
    }
    ctx->pc = 0x2F1FD4u;
label_2f1fd4:
    // 0x2f1fd4: 0x5040fffc  beql        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2F1FD4u;
    {
        const bool branch_taken_0x2f1fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1fd4) {
            ctx->pc = 0x2F1FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1FD4u;
            // 0x2f1fd8: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1fc8;
        }
    }
    ctx->pc = 0x2F1FDCu;
    // 0x2f1fdc: 0x8202ffff  lb          $v0, -0x1($s0)
    ctx->pc = 0x2f1fdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
label_2f1fe0:
    // 0x2f1fe0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1FE0u;
    {
        const bool branch_taken_0x2f1fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1fe0) {
            ctx->pc = 0x2F1FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1FE0u;
            // 0x2f1fe4: 0xae60b640  sw          $zero, -0x49C0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294948416), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1FECu;
            goto label_2f1fec;
        }
    }
    ctx->pc = 0x2F1FE8u;
    // 0x2f1fe8: 0xae70b640  sw          $s0, -0x49C0($s3)
    ctx->pc = 0x2f1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294948416), GPR_U32(ctx, 16));
label_2f1fec:
    // 0x2f1fec: 0xa200ffff  sb          $zero, -0x1($s0)
    ctx->pc = 0x2f1fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1ff0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f1ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ff4:
    // 0x2f1ff4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f1ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1ff8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f1ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1ffc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f1ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2000: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2008: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2008u;
        // 0x2f200c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2010u;
}
