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

// Function: sub_001F8810
// Address: 0x1f8810 - 0x1f88c8
void sub_001F8810_0x1f8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8810_0x1f8810");
#endif

    switch (ctx->pc) {
        case 0x1f8810u: goto label_1f8810;
        case 0x1f8814u: goto label_1f8814;
        case 0x1f8818u: goto label_1f8818;
        case 0x1f881cu: goto label_1f881c;
        case 0x1f8820u: goto label_1f8820;
        case 0x1f8824u: goto label_1f8824;
        case 0x1f8828u: goto label_1f8828;
        case 0x1f882cu: goto label_1f882c;
        case 0x1f8830u: goto label_1f8830;
        case 0x1f8834u: goto label_1f8834;
        case 0x1f8838u: goto label_1f8838;
        case 0x1f883cu: goto label_1f883c;
        case 0x1f8840u: goto label_1f8840;
        case 0x1f8844u: goto label_1f8844;
        case 0x1f8848u: goto label_1f8848;
        case 0x1f884cu: goto label_1f884c;
        case 0x1f8850u: goto label_1f8850;
        case 0x1f8854u: goto label_1f8854;
        case 0x1f8858u: goto label_1f8858;
        case 0x1f885cu: goto label_1f885c;
        case 0x1f8860u: goto label_1f8860;
        case 0x1f8864u: goto label_1f8864;
        case 0x1f8868u: goto label_1f8868;
        case 0x1f886cu: goto label_1f886c;
        case 0x1f8870u: goto label_1f8870;
        case 0x1f8874u: goto label_1f8874;
        case 0x1f8878u: goto label_1f8878;
        case 0x1f887cu: goto label_1f887c;
        case 0x1f8880u: goto label_1f8880;
        case 0x1f8884u: goto label_1f8884;
        case 0x1f8888u: goto label_1f8888;
        case 0x1f888cu: goto label_1f888c;
        case 0x1f8890u: goto label_1f8890;
        case 0x1f8894u: goto label_1f8894;
        case 0x1f8898u: goto label_1f8898;
        case 0x1f889cu: goto label_1f889c;
        case 0x1f88a0u: goto label_1f88a0;
        case 0x1f88a4u: goto label_1f88a4;
        case 0x1f88a8u: goto label_1f88a8;
        case 0x1f88acu: goto label_1f88ac;
        case 0x1f88b0u: goto label_1f88b0;
        case 0x1f88b4u: goto label_1f88b4;
        case 0x1f88b8u: goto label_1f88b8;
        case 0x1f88bcu: goto label_1f88bc;
        case 0x1f88c0u: goto label_1f88c0;
        case 0x1f88c4u: goto label_1f88c4;
        default: break;
    }

    ctx->pc = 0x1f8810u;

label_1f8810:
    // 0x1f8810: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x1f8810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_1f8814:
    // 0x1f8814: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x1f8814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_1f8818:
    // 0x1f8818: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1f8818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1f881c:
    // 0x1f881c: 0x8fa20644  lw          $v0, 0x644($sp)
    ctx->pc = 0x1f881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1f8820:
    // 0x1f8820: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f8820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8824:
    // 0x1f8824: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1f8828:
    if (ctx->pc == 0x1F8828u) {
        ctx->pc = 0x1F8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8824u;
        // 0x1f8828: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F882Cu;
        goto label_1f882c;
    }
    ctx->pc = 0x1F8824u;
    {
        const bool branch_taken_0x1f8824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8824u;
        // 0x1f8828: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8824) {
            ctx->pc = 0x1F8860u;
            goto label_1f8860;
        }
    }
    ctx->pc = 0x1F882Cu;
label_1f882c:
    // 0x1f882c: 0x0  nop
    ctx->pc = 0x1f882cu;
    // NOP
label_1f8830:
    // 0x1f8830: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8834:
    // 0x1f8834: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f8834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f8838:
    // 0x1f8838: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1f8838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f883c:
    // 0x1f883c: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x1f883cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1f8840:
    // 0x1f8840: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1f8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f8844:
    // 0x1f8844: 0x60f809  jalr        $v1
label_1f8848:
    if (ctx->pc == 0x1F8848u) {
        ctx->pc = 0x1F8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8844u;
        // 0x1f8848: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F884Cu;
        goto label_1f884c;
    }
    ctx->pc = 0x1F8844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F884Cu);
        ctx->pc = 0x1F8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8844u;
        // 0x1f8848: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8844u, 0x1F884Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F884Cu;
label_1f884c:
    // 0x1f884c: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x1f884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1f8850:
    // 0x1f8850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8854:
    // 0x1f8854: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1f8858:
    if (ctx->pc == 0x1F8858u) {
        ctx->pc = 0x1F8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8854u;
        // 0x1f8858: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F885Cu;
        goto label_1f885c;
    }
    ctx->pc = 0x1F8854u;
    {
        const bool branch_taken_0x1f8854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8854u;
        // 0x1f8858: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8854) {
            ctx->pc = 0x1F8830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8830;
        }
    }
    ctx->pc = 0x1F885Cu;
label_1f885c:
    // 0x1f885c: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x1f885cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_1f8860:
    // 0x1f8860: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x1f8860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_1f8864:
    // 0x1f8864: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f8868:
    // 0x1f8868: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f8868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f886c:
    // 0x1f886c: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x1f886cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_1f8870:
    // 0x1f8870: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f8874:
    // 0x1f8874: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f8874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8878:
    // 0x1f8878: 0xc07e17c  jal         func_1F85F0
label_1f887c:
    if (ctx->pc == 0x1F887Cu) {
        ctx->pc = 0x1F887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8878u;
        // 0x1f887c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8880u;
        goto label_1f8880;
    }
    ctx->pc = 0x1F8878u;
    SET_GPR_U32(ctx, 31, 0x1F8880u);
    ctx->pc = 0x1F887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8878u;
    // 0x1f887c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F85F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F85F0u, 0x1F8878u, 0x1F8880u)) {
        return;
    }
    ctx->pc = 0x1F8880u;
label_1f8880:
    // 0x1f8880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f8884:
    // 0x1f8884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f8888:
    // 0x1f8888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f888c:
    // 0x1f888c: 0xc07e144  jal         func_1F8510
label_1f8890:
    if (ctx->pc == 0x1F8890u) {
        ctx->pc = 0x1F8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F888Cu;
        // 0x1f8890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8894u;
        goto label_1f8894;
    }
    ctx->pc = 0x1F888Cu;
    SET_GPR_U32(ctx, 31, 0x1F8894u);
    ctx->pc = 0x1F8890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F888Cu;
    // 0x1f8890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F888Cu, 0x1F8894u)) {
        return;
    }
    ctx->pc = 0x1F8894u;
label_1f8894:
    // 0x1f8894: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f8894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8898:
    // 0x1f8898: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f8898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f889c:
    // 0x1f889c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f88a0:
    if (ctx->pc == 0x1F88A0u) {
        ctx->pc = 0x1F88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F889Cu;
        // 0x1f88a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88A4u;
        goto label_1f88a4;
    }
    ctx->pc = 0x1F889Cu;
    {
        const bool branch_taken_0x1f889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F889Cu;
        // 0x1f88a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f889c) {
            ctx->pc = 0x1F88ACu;
            goto label_1f88ac;
        }
    }
    ctx->pc = 0x1F88A4u;
label_1f88a4:
    // 0x1f88a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f88a8:
    if (ctx->pc == 0x1F88A8u) {
        ctx->pc = 0x1F88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88A4u;
        // 0x1f88a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88ACu;
        goto label_1f88ac;
    }
    ctx->pc = 0x1F88A4u;
    {
        const bool branch_taken_0x1f88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88A4u;
        // 0x1f88a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88a4) {
            ctx->pc = 0x1F88B8u;
            goto label_1f88b8;
        }
    }
    ctx->pc = 0x1F88ACu;
label_1f88ac:
    // 0x1f88ac: 0x40f809  jalr        $v0
label_1f88b0:
    if (ctx->pc == 0x1F88B0u) {
        ctx->pc = 0x1F88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88ACu;
        // 0x1f88b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88B4u;
        goto label_1f88b4;
    }
    ctx->pc = 0x1F88ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F88B4u);
        ctx->pc = 0x1F88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88ACu;
        // 0x1f88b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F88ACu, 0x1F88B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F88B4u;
label_1f88b4:
    // 0x1f88b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f88b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f88b8:
    // 0x1f88b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f88b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f88bc:
    // 0x1f88bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f88bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f88c0:
    // 0x1f88c0: 0x3e00008  jr          $ra
label_1f88c4:
    if (ctx->pc == 0x1F88C4u) {
        ctx->pc = 0x1F88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88C0u;
        // 0x1f88c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88C8u;
        goto label_fallthrough_0x1f88c0;
    }
    ctx->pc = 0x1F88C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88C0u;
        // 0x1f88c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F88C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f88c0:
    ctx->pc = 0x1F88C8u;
}
