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

// Function: sub_00321EF8
// Address: 0x321ef8 - 0x321fd0
void sub_00321EF8_0x321ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321EF8_0x321ef8");
#endif

    switch (ctx->pc) {
        case 0x321f38u: goto label_321f38;
        case 0x321f40u: goto label_321f40;
        case 0x321f98u: goto label_321f98;
        case 0x321fa8u: goto label_321fa8;
        case 0x321fb8u: goto label_321fb8;
        case 0x321fc8u: goto label_321fc8;
        default: break;
    }

    ctx->pc = 0x321ef8u;

    // 0x321ef8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x321ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x321efc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321f00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321f04: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x321f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x321f08: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x321f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x321f0c: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x321f0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x321f10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x321f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x321f14: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x321f14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x321f18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x321f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x321f1c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x321f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321f20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321f24: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x321f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321f2c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x321f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x321f30: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x321f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x321f34: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x321f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_321f38:
    // 0x321f38: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x321F38u;
    SET_GPR_U32(ctx, 31, 0x321F40u);
    ctx->pc = 0x321F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F38u;
    // 0x321f3c: 0x8ec496c0  lw          $a0, -0x6940($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x321F38u, 0x321F40u)) {
        return;
    }
    ctx->pc = 0x321F40u;
label_321f40:
    // 0x321f40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x321f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x321f44: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x321f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x321f48: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x321f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x321f4c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x321f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x321f50: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x321f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x321f54: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x321f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x321f58: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x321f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x321f5c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x321f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321f60: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x321F60u;
    {
        const bool branch_taken_0x321f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x321F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F60u;
        // 0x321f64: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f60) {
            ctx->pc = 0x321FA0u;
            goto label_321fa0;
        }
    }
    ctx->pc = 0x321F68u;
    // 0x321f68: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x321F68u;
    {
        const bool branch_taken_0x321f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F68u;
        // 0x321f6c: 0x26a424c0  addiu       $a0, $s5, 0x24C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 9408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f68) {
            ctx->pc = 0x321F80u;
            goto label_321f80;
        }
    }
    ctx->pc = 0x321F70u;
    // 0x321f70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x321F70u;
    {
        const bool branch_taken_0x321f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F70u;
        // 0x321f74: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f70) {
            ctx->pc = 0x321F90u;
            goto label_321f90;
        }
    }
    ctx->pc = 0x321F78u;
    // 0x321f78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x321F78u;
    {
        const bool branch_taken_0x321f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321f78) {
            ctx->pc = 0x321FC0u;
            goto label_321fc0;
        }
    }
    ctx->pc = 0x321F80u;
label_321f80:
    // 0x321f80: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x321F80u;
    {
        const bool branch_taken_0x321f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x321F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F80u;
        // 0x321f84: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f80) {
            ctx->pc = 0x321FB0u;
            goto label_321fb0;
        }
    }
    ctx->pc = 0x321F88u;
    // 0x321f88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x321F88u;
    {
        const bool branch_taken_0x321f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321f88) {
            ctx->pc = 0x321FC0u;
            goto label_321fc0;
        }
    }
    ctx->pc = 0x321F90u;
label_321f90:
    // 0x321f90: 0xc0c8494  jal         func_321250
    ctx->pc = 0x321F90u;
    SET_GPR_U32(ctx, 31, 0x321F98u);
    ctx->pc = 0x321F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F90u;
    // 0x321f94: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321250u, 0x321F90u, 0x321F98u)) {
        return;
    }
    ctx->pc = 0x321F98u;
label_321f98:
    // 0x321f98: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x321F98u;
    {
        const bool branch_taken_0x321f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321f98) {
            ctx->pc = 0x321F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321f38;
        }
    }
    ctx->pc = 0x321FA0u;
label_321fa0:
    // 0x321fa0: 0xc0c8474  jal         func_3211D0
    ctx->pc = 0x321FA0u;
    SET_GPR_U32(ctx, 31, 0x321FA8u);
    ctx->pc = 0x321FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FA0u;
    // 0x321fa4: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3211D0u, 0x321FA0u, 0x321FA8u)) {
        return;
    }
    ctx->pc = 0x321FA8u;
label_321fa8:
    // 0x321fa8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x321FA8u;
    {
        const bool branch_taken_0x321fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321fa8) {
            ctx->pc = 0x321F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321f38;
        }
    }
    ctx->pc = 0x321FB0u;
label_321fb0:
    // 0x321fb0: 0xc0c84a4  jal         func_321290
    ctx->pc = 0x321FB0u;
    SET_GPR_U32(ctx, 31, 0x321FB8u);
    ctx->pc = 0x321FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FB0u;
    // 0x321fb4: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321290u, 0x321FB0u, 0x321FB8u)) {
        return;
    }
    ctx->pc = 0x321FB8u;
label_321fb8:
    // 0x321fb8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x321FB8u;
    {
        const bool branch_taken_0x321fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321fb8) {
            ctx->pc = 0x321F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321f38;
        }
    }
    ctx->pc = 0x321FC0u;
label_321fc0:
    // 0x321fc0: 0xc0c8edc  jal         func_323B70
    ctx->pc = 0x321FC0u;
    SET_GPR_U32(ctx, 31, 0x321FC8u);
    ctx->pc = 0x323B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323B70u, 0x321FC0u, 0x321FC8u)) {
        return;
    }
    ctx->pc = 0x321FC8u;
label_321fc8:
    // 0x321fc8: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x321FC8u;
    {
        const bool branch_taken_0x321fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321fc8) {
            ctx->pc = 0x321F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321f38;
        }
    }
    ctx->pc = 0x321FD0u;
}
