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

// Function: sub_00315030
// Address: 0x315030 - 0x315168
void sub_00315030_0x315030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315030_0x315030");
#endif

    switch (ctx->pc) {
        case 0x315068u: goto label_315068;
        case 0x315080u: goto label_315080;
        case 0x315094u: goto label_315094;
        case 0x3150c0u: goto label_3150c0;
        case 0x3150f0u: goto label_3150f0;
        case 0x3150fcu: goto label_3150fc;
        case 0x315130u: goto label_315130;
        default: break;
    }

    ctx->pc = 0x315030u;

    // 0x315030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x315030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x315034: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x315034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x315038: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x315038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x31503c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31503cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315040: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x315040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x315044: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x315044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315048: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x315048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x31504c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x315050: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x315050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x315054: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x315054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x315058: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x315058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x31505c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x315060: 0xc0c7f78  jal         func_31FDE0
    ctx->pc = 0x315060u;
    SET_GPR_U32(ctx, 31, 0x315068u);
    ctx->pc = 0x315064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315060u;
    // 0x315064: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDE0u, 0x315060u, 0x315068u)) {
        return;
    }
    ctx->pc = 0x315068u;
label_315068:
    // 0x315068: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x315068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31506c: 0x8c62752c  lw          $v0, 0x752C($v1)
    ctx->pc = 0x31506cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x68752Cu));
    // 0x315070: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x315070u;
    {
        const bool branch_taken_0x315070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315070u;
        // 0x315074: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315070) {
            ctx->pc = 0x31509Cu;
            goto label_31509c;
        }
    }
    ctx->pc = 0x315078u;
    // 0x315078: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x315078u;
    {
        const bool branch_taken_0x315078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315078u;
        // 0x31507c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315078) {
            ctx->pc = 0x315134u;
            goto label_315134;
        }
    }
    ctx->pc = 0x315080u;
label_315080:
    // 0x315080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x315080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315084: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x315084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x315088: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x315088u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x31508c: 0xc0c7f7a  jal         func_31FDE8
    ctx->pc = 0x31508Cu;
    SET_GPR_U32(ctx, 31, 0x315094u);
    ctx->pc = 0x315090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31508Cu;
    // 0x315090: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDE8u, 0x31508Cu, 0x315094u)) {
        return;
    }
    ctx->pc = 0x315094u;
label_315094:
    // 0x315094: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x315094u;
    {
        const bool branch_taken_0x315094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315094u;
        // 0x315098: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315094) {
            ctx->pc = 0x315134u;
            goto label_315134;
        }
    }
    ctx->pc = 0x31509Cu;
label_31509c:
    // 0x31509c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x31509cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3150a0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3150a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3150a4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3150A4u;
    {
        const bool branch_taken_0x3150a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3150A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150A4u;
        // 0x3150a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150a4) {
            ctx->pc = 0x3150D8u;
            goto label_3150d8;
        }
    }
    ctx->pc = 0x3150ACu;
    // 0x3150ac: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x3150acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x3150b0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3150B0u;
    {
        const bool branch_taken_0x3150b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3150B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150B0u;
        // 0x3150b4: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150b0) {
            ctx->pc = 0x3150D8u;
            goto label_3150d8;
        }
    }
    ctx->pc = 0x3150B8u;
    // 0x3150b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3150b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3150bc: 0x0  nop
    ctx->pc = 0x3150bcu;
    // NOP
label_3150c0:
    // 0x3150c0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3150c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3150c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3150C4u;
    {
        const bool branch_taken_0x3150c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3150C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150C4u;
        // 0x3150c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150c4) {
            ctx->pc = 0x3150D8u;
            goto label_3150d8;
        }
    }
    ctx->pc = 0x3150CCu;
    // 0x3150cc: 0x0  nop
    ctx->pc = 0x3150ccu;
    // NOP
    // 0x3150d0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3150D0u;
    {
        const bool branch_taken_0x3150d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3150d0) {
            ctx->pc = 0x3150D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3150D0u;
            // 0x3150d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3150C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3150c0;
        }
    }
    ctx->pc = 0x3150D8u;
label_3150d8:
    // 0x3150d8: 0x8ef0752c  lw          $s0, 0x752C($s7)
    ctx->pc = 0x3150d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 29996)));
    // 0x3150dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3150dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3150e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3150E0u;
    {
        const bool branch_taken_0x3150e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3150E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150E0u;
        // 0x3150e4: 0x2415003d  addiu       $s5, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150e0) {
            ctx->pc = 0x315128u;
            goto label_315128;
        }
    }
    ctx->pc = 0x3150E8u;
    // 0x3150e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3150e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3150ec: 0x0  nop
    ctx->pc = 0x3150ecu;
    // NOP
label_3150f0:
    // 0x3150f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3150f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3150f4: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x3150F4u;
    SET_GPR_U32(ctx, 31, 0x3150FCu);
    ctx->pc = 0x3150F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3150F4u;
    // 0x3150f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x3150F4u, 0x3150FCu)) {
        return;
    }
    ctx->pc = 0x3150FCu;
label_3150fc:
    // 0x3150fc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3150FCu;
    {
        const bool branch_taken_0x3150fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3150fc) {
            ctx->pc = 0x315100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3150FCu;
            // 0x315100: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31511Cu;
            goto label_31511c;
        }
    }
    ctx->pc = 0x315104u;
    // 0x315104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x315104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x315108: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x315108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31510c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x31510cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x315110: 0x1075ffdb  beq         $v1, $s5, . + 4 + (-0x25 << 2)
    ctx->pc = 0x315110u;
    {
        const bool branch_taken_0x315110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x315114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315110u;
        // 0x315114: 0x8ee2752c  lw          $v0, 0x752C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 29996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315110) {
            ctx->pc = 0x315080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315080;
        }
    }
    ctx->pc = 0x315118u;
    // 0x315118: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x315118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_31511c:
    // 0x31511c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x315120: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x315120u;
    {
        const bool branch_taken_0x315120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315120) {
            ctx->pc = 0x315124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315120u;
            // 0x315124: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3150F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3150f0;
        }
    }
    ctx->pc = 0x315128u;
label_315128:
    // 0x315128: 0xc0c7f7a  jal         func_31FDE8
    ctx->pc = 0x315128u;
    SET_GPR_U32(ctx, 31, 0x315130u);
    ctx->pc = 0x31512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315128u;
    // 0x31512c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDE8u, 0x315128u, 0x315130u)) {
        return;
    }
    ctx->pc = 0x315130u;
label_315130:
    // 0x315130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315134:
    // 0x315134: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x315134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x315138: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x315138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31513c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31513cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x315140: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x315140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x315144: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x315144u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x315148: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x315148u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31514c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x31514cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315150: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x315150u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315158: 0x3e00008  jr          $ra
    ctx->pc = 0x315158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315158u;
        // 0x31515c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315160u;
    // 0x315160: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x315160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x315164: 0x0  nop
    ctx->pc = 0x315164u;
    // NOP
    ctx->pc = 0x315168u;
}
