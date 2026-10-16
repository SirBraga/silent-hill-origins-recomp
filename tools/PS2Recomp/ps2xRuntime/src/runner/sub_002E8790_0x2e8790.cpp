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

// Function: sub_002E8790
// Address: 0x2e8790 - 0x2e88c0
void sub_002E8790_0x2e8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8790_0x2e8790");
#endif

    switch (ctx->pc) {
        case 0x2e87f0u: goto label_2e87f0;
        case 0x2e8820u: goto label_2e8820;
        case 0x2e8854u: goto label_2e8854;
        default: break;
    }

    ctx->pc = 0x2e8790u;

    // 0x2e8790: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e8794: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x2e8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x2e8798: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2e8798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2e879c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2e879cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e87a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e87a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2e87a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2e87a8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2e87a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2e87ac: 0x23182  srl         $a2, $v0, 6
    ctx->pc = 0x2e87acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x2e87b0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2e87b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2e87b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e87b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87b8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2e87b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2e87bc: 0xc3f018  mult        $fp, $a2, $v1
    ctx->pc = 0x2e87bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x2e87c0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2e87c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2e87c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e87c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e87c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e87cc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2e87ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2e87d0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2e87d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2e87d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e87d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e87d8: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E87D8u;
    {
        const bool branch_taken_0x2e87d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87D8u;
        // 0x2e87dc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87d8) {
            ctx->pc = 0x2E8888u;
            goto label_2e8888;
        }
    }
    ctx->pc = 0x2E87E0u;
    // 0x2e87e0: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x2e87e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2e87e4: 0x24170007  addiu       $s7, $zero, 0x7
    ctx->pc = 0x2e87e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e87e8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x2e87e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e87ec: 0x0  nop
    ctx->pc = 0x2e87ecu;
    // NOP
label_2e87f0:
    // 0x2e87f0: 0x24d5ffff  addiu       $s5, $a2, -0x1
    ctx->pc = 0x2e87f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e87f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e87f8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2e87f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2e87fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e87fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e8800: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e8800u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e8804: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e8804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e8808: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e8808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e880c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2e880cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8810: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e8810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8814: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e8814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8818: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e8818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e881c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e881cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e8820:
    // 0x2e8820: 0x1a800008  blez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8820u;
    {
        const bool branch_taken_0x2e8820 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2E8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8820u;
        // 0x2e8824: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8820) {
            ctx->pc = 0x2E8844u;
            goto label_2e8844;
        }
    }
    ctx->pc = 0x2E8828u;
    // 0x2e8828: 0x2a62003f  slti        $v0, $s3, 0x3F
    ctx->pc = 0x2e8828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x2e882c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E882Cu;
    {
        const bool branch_taken_0x2e882c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E882Cu;
        // 0x2e8830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e882c) {
            ctx->pc = 0x2E8848u;
            goto label_2e8848;
        }
    }
    ctx->pc = 0x2E8834u;
    // 0x2e8834: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x2e8834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e8838: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e8838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e883c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E883Cu;
    {
        const bool branch_taken_0x2e883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E883Cu;
        // 0x2e8840: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e883c) {
            ctx->pc = 0x2E8848u;
            goto label_2e8848;
        }
    }
    ctx->pc = 0x2E8844u;
label_2e8844:
    // 0x2e8844: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8848:
    // 0x2e8848: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e8848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e884c: 0xc0ba19e  jal         func_2E8678
    ctx->pc = 0x2E884Cu;
    SET_GPR_U32(ctx, 31, 0x2E8854u);
    ctx->pc = 0x2E8850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E884Cu;
    // 0x2e8850: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8678u, 0x2E884Cu, 0x2E8854u)) {
        return;
    }
    ctx->pc = 0x2E8854u;
label_2e8854:
    // 0x2e8854: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2e8854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2e8858: 0x32630007  andi        $v1, $s3, 0x7
    ctx->pc = 0x2e8858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x2e885c: 0x14770004  bne         $v1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E885Cu;
    {
        const bool branch_taken_0x2e885c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x2E8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E885Cu;
        // 0x2e8860: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e885c) {
            ctx->pc = 0x2E8870u;
            goto label_2e8870;
        }
    }
    ctx->pc = 0x2E8864u;
    // 0x2e8864: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2e8864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2e8868: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e8868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e886c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e886cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8870:
    // 0x2e8870: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e8870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e8874: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x2e8874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2e8878: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E8878u;
    {
        const bool branch_taken_0x2e8878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8878u;
        // 0x2e887c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8878) {
            ctx->pc = 0x2E8820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8820;
        }
    }
    ctx->pc = 0x2E8880u;
    // 0x2e8880: 0x54c0ffdb  bnel        $a2, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2E8880u;
    {
        const bool branch_taken_0x2e8880 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8880) {
            ctx->pc = 0x2E8884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8880u;
            // 0x2e8884: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E87F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e87f0;
        }
    }
    ctx->pc = 0x2E8888u;
label_2e8888:
    // 0x2e8888: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2e8888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e888c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e888cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e8890: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e8890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e8894: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e8894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8898: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2e8898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e889c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2e889cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e88a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e88a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e88a4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2e88a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e88a8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2e88a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e88ac: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2e88acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e88b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e88b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e88b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E88B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88B4u;
        // 0x2e88b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E88B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E88BCu;
    // 0x2e88bc: 0x0  nop
    ctx->pc = 0x2e88bcu;
    // NOP
    ctx->pc = 0x2e88c0u;
}
