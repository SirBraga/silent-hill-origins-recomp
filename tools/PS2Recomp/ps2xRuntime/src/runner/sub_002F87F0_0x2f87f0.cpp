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

// Function: sub_002F87F0
// Address: 0x2f87f0 - 0x2f88b0
void sub_002F87F0_0x2f87f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F87F0_0x2f87f0");
#endif

    switch (ctx->pc) {
        case 0x2f8818u: goto label_2f8818;
        case 0x2f882cu: goto label_2f882c;
        case 0x2f883cu: goto label_2f883c;
        case 0x2f8848u: goto label_2f8848;
        case 0x2f8884u: goto label_2f8884;
        default: break;
    }

    ctx->pc = 0x2f87f0u;

    // 0x2f87f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f87f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f87f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f87f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f87f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f87f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f87fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f87fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f8800: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f8800u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f8804: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f8804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f8808: 0x26127c40  addiu       $s2, $s0, 0x7C40
    ctx->pc = 0x2f8808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x2f880c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f8810: 0xc0c90e4  jal         func_324390
    ctx->pc = 0x2F8810u;
    SET_GPR_U32(ctx, 31, 0x2F8818u);
    ctx->pc = 0x2F8814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8810u;
    // 0x2f8814: 0x3c11006b  lui         $s1, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324390u, 0x2F8810u, 0x2F8818u)) {
        return;
    }
    ctx->pc = 0x2F8818u;
label_2f8818:
    // 0x2f8818: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f8818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f881c: 0x26047c40  addiu       $a0, $s0, 0x7C40
    ctx->pc = 0x2f881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x2f8820: 0x34a50701  ori         $a1, $a1, 0x701
    ctx->pc = 0x2f8820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1793);
    // 0x2f8824: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x2F8824u;
    SET_GPR_U32(ctx, 31, 0x2F882Cu);
    ctx->pc = 0x2F8828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8824u;
    // 0x2f8828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x2F8824u, 0x2F882Cu)) {
        return;
    }
    ctx->pc = 0x2F882Cu;
label_2f882c:
    // 0x2f882c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F882Cu;
    {
        const bool branch_taken_0x2f882c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F882Cu;
        // 0x2f8830: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f882c) {
            ctx->pc = 0x2F8844u;
            goto label_2f8844;
        }
    }
    ctx->pc = 0x2F8834u;
    // 0x2f8834: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F8834u;
    SET_GPR_U32(ctx, 31, 0x2F883Cu);
    ctx->pc = 0x2F8838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8834u;
    // 0x2f8838: 0x262404c8  addiu       $a0, $s1, 0x4C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F8834u, 0x2F883Cu)) {
        return;
    }
    ctx->pc = 0x2F883Cu;
label_2f883c:
    // 0x2f883c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F883Cu;
    {
        const bool branch_taken_0x2f883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F883Cu;
        // 0x2f8840: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f883c) {
            ctx->pc = 0x2F8888u;
            goto label_2f8888;
        }
    }
    ctx->pc = 0x2F8844u;
label_2f8844:
    // 0x2f8844: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f8844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8848:
    // 0x2f8848: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f8848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f884c: 0x0  nop
    ctx->pc = 0x2f884cu;
    // NOP
    // 0x2f8850: 0x0  nop
    ctx->pc = 0x2f8850u;
    // NOP
    // 0x2f8854: 0x0  nop
    ctx->pc = 0x2f8854u;
    // NOP
    // 0x2f8858: 0x0  nop
    ctx->pc = 0x2f8858u;
    // NOP
    // 0x2f885c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F885Cu;
    {
        const bool branch_taken_0x2f885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f885c) {
            ctx->pc = 0x2F8848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8848;
        }
    }
    ctx->pc = 0x2F8864u;
    // 0x2f8864: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2f8864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2f8868: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F8868u;
    {
        const bool branch_taken_0x2f8868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8868u;
        // 0x2f886c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8868) {
            ctx->pc = 0x2F8818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8818;
        }
    }
    ctx->pc = 0x2F8870u;
    // 0x2f8870: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f8870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f8874: 0xac406668  sw          $zero, 0x6668($v0)
    ctx->pc = 0x2f8874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26216), GPR_U32(ctx, 0));
    // 0x2f8878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f887c: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2F887Cu;
    SET_GPR_U32(ctx, 31, 0x2F8884u);
    ctx->pc = 0x2F8880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F887Cu;
    // 0x2f8880: 0xac60666c  sw          $zero, 0x666C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 26220), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2F887Cu, 0x2F8884u)) {
        return;
    }
    ctx->pc = 0x2F8884u;
label_2f8884:
    // 0x2f8884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8888:
    // 0x2f8888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f8888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f888c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f888cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8890: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f8890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8898: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8898u;
        // 0x2f889c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F88A0u;
    // 0x2f88a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2f88a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f88a4: 0x0  nop
    ctx->pc = 0x2f88a4u;
    // NOP
    // 0x2f88a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2f88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2f88ac: 0x0  nop
    ctx->pc = 0x2f88acu;
    // NOP
    ctx->pc = 0x2f88b0u;
}
