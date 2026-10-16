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

// Function: sub_002E8550
// Address: 0x2e8550 - 0x2e8678
void sub_002E8550_0x2e8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8550_0x2e8550");
#endif

    switch (ctx->pc) {
        case 0x2e8598u: goto label_2e8598;
        case 0x2e85e0u: goto label_2e85e0;
        case 0x2e85f0u: goto label_2e85f0;
        case 0x2e8600u: goto label_2e8600;
        default: break;
    }

    ctx->pc = 0x2e8550u;

    // 0x2e8550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e8554: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2e8554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2e8558: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2e8558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2e855c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e855cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8560: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2e8560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2e8564: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e8564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8568: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2e8568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2e856c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x2e856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e8570: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2e8570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2e8574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e8574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e8578: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2e8578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2e857c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2e857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2e8580: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2e8580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2e8584: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E8584u;
    {
        const bool branch_taken_0x2e8584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8584u;
        // 0x2e8588: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8584) {
            ctx->pc = 0x2E8640u;
            goto label_2e8640;
        }
    }
    ctx->pc = 0x2E858Cu;
    // 0x2e858c: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x2e858cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x2e8590: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x2e8590u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x2e8594: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2e8594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e8598:
    // 0x2e8598: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e8598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e859c: 0x101402  srl         $v0, $s0, 16
    ctx->pc = 0x2e859cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x2e85a0: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x2e85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2e85a4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2e85a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2e85a8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2e85a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2e85ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2e85acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e85b0: 0x2c440059  sltiu       $a0, $v0, 0x59
    ctx->pc = 0x2e85b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x2e85b4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E85B4u;
    {
        const bool branch_taken_0x2e85b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85B4u;
        // 0x2e85b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85b4) {
            ctx->pc = 0x2E85C4u;
            goto label_2e85c4;
        }
    }
    ctx->pc = 0x2E85BCu;
    // 0x2e85bc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E85BCu;
    {
        const bool branch_taken_0x2e85bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85BCu;
        // 0x2e85c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85bc) {
            ctx->pc = 0x2E8644u;
            goto label_2e8644;
        }
    }
    ctx->pc = 0x2E85C4u;
label_2e85c4:
    // 0x2e85c4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2e85c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e85c8: 0x24b6ffff  addiu       $s6, $a1, -0x1
    ctx->pc = 0x2e85c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2e85cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e85ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85d0: 0x241e0007  addiu       $fp, $zero, 0x7
    ctx->pc = 0x2e85d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e85d4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x2e85d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e85d8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2e85d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2e85dc: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2e85dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e85e0:
    // 0x2e85e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e85e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e85e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e85e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E85E8u;
    {
        const bool branch_taken_0x2e85e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85E8u;
        // 0x2e85ec: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85e8) {
            ctx->pc = 0x2E8610u;
            goto label_2e8610;
        }
    }
    ctx->pc = 0x2E85F0u;
label_2e85f0:
    // 0x2e85f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e85f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85f4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x2e85f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2e85f8: 0xc0ba124  jal         func_2E8490
    ctx->pc = 0x2E85F8u;
    SET_GPR_U32(ctx, 31, 0x2E8600u);
    ctx->pc = 0x2E85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E85F8u;
    // 0x2e85fc: 0x108102  srl         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8490u, 0x2E85F8u, 0x2E8600u)) {
        return;
    }
    ctx->pc = 0x2E8600u;
label_2e8600:
    // 0x2e8600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e8600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e8604: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2e8604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8608: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x2e8608u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e860c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2e860cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2e8610:
    // 0x2e8610: 0x169e0002  bne         $s4, $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8610u;
    {
        const bool branch_taken_0x2e8610 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x2E8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8610u;
        // 0x2e8614: 0x2a220008  slti        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8610) {
            ctx->pc = 0x2E861Cu;
            goto label_2e861c;
        }
    }
    ctx->pc = 0x2E8618u;
    // 0x2e8618: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x2e8618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_2e861c:
    // 0x2e861c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E861Cu;
    {
        const bool branch_taken_0x2e861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E861Cu;
        // 0x2e8620: 0x3204000f  andi        $a0, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e861c) {
            ctx->pc = 0x2E85F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e85f0;
        }
    }
    ctx->pc = 0x2E8624u;
    // 0x2e8624: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x2e8624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8628: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x2e8628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e862c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E862Cu;
    {
        const bool branch_taken_0x2e862c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e862c) {
            ctx->pc = 0x2E8630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E862Cu;
            // 0x2e8630: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E85E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e85e0;
        }
    }
    ctx->pc = 0x2E8634u;
    // 0x2e8634: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e8634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8638: 0x54b7ffd7  bnel        $a1, $s7, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2E8638u;
    {
        const bool branch_taken_0x2e8638 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        if (branch_taken_0x2e8638) {
            ctx->pc = 0x2E863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8638u;
            // 0x2e863c: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8598;
        }
    }
    ctx->pc = 0x2E8640u;
label_2e8640:
    // 0x2e8640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8644:
    // 0x2e8644: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e8644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e8648: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e8648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e864c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e864cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8650: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2e8650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8654: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2e8654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8658: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e8658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e865c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2e865cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8660: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2e8660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8664: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2e8664u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e866c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E866Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E866Cu;
        // 0x2e8670: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E866Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8674u;
    // 0x2e8674: 0x0  nop
    ctx->pc = 0x2e8674u;
    // NOP
    ctx->pc = 0x2e8678u;
}
