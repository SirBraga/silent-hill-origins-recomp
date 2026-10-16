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

// Function: sub_001727F0
// Address: 0x1727f0 - 0x172910
void sub_001727F0_0x1727f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001727F0_0x1727f0");
#endif

    switch (ctx->pc) {
        case 0x17284cu: goto label_17284c;
        case 0x172868u: goto label_172868;
        case 0x172878u: goto label_172878;
        case 0x17288cu: goto label_17288c;
        case 0x1728a0u: goto label_1728a0;
        case 0x1728d0u: goto label_1728d0;
        default: break;
    }

    ctx->pc = 0x1727f0u;

    // 0x1727f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1727f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1727f4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1727f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1727f8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1727f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1727fc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1727fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x172800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172804: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x172804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x172808: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x172808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x17280c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x17280cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x172810: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x172810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x172814: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x172814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x172818: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x172818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x17281c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172820: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x172820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x172824: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x172824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x172828: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x172828u;
    {
        const bool branch_taken_0x172828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172828u;
        // 0x17282c: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172828) {
            ctx->pc = 0x17284Cu;
            goto label_17284c;
        }
    }
    ctx->pc = 0x172830u;
    // 0x172830: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x172830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172834: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x172834u;
    {
        const bool branch_taken_0x172834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172834u;
        // 0x172838: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172834) {
            ctx->pc = 0x172850u;
            goto label_172850;
        }
    }
    ctx->pc = 0x17283Cu;
    // 0x17283c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17283cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x172840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172844: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x172844u;
    SET_GPR_U32(ctx, 31, 0x17284Cu);
    ctx->pc = 0x172848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172844u;
    // 0x172848: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x172844u, 0x17284Cu)) {
        return;
    }
    ctx->pc = 0x17284Cu;
label_17284c:
    // 0x17284c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_172850:
    // 0x172850: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x172854: 0x245486d8  addiu       $s4, $v0, -0x7928
    ctx->pc = 0x172854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936280));
    // 0x172858: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x172858u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x17285c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x17285cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x172860: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x172860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x172864: 0x0  nop
    ctx->pc = 0x172864u;
    // NOP
label_172868:
    // 0x172868: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x172868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x17286c: 0x8ed086d0  lw          $s0, -0x7930($s6)
    ctx->pc = 0x17286cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936272)));
    // 0x172870: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x172870u;
    SET_GPR_U32(ctx, 31, 0x172878u);
    ctx->pc = 0x172874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172870u;
    // 0x172874: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x172870u, 0x172878u)) {
        return;
    }
    ctx->pc = 0x172878u;
label_172878:
    // 0x172878: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x172878u;
    {
        const bool branch_taken_0x172878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172878u;
        // 0x17287c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172878) {
            ctx->pc = 0x1728A0u;
            goto label_1728a0;
        }
    }
    ctx->pc = 0x172880u;
    // 0x172880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172884: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x172884u;
    SET_GPR_U32(ctx, 31, 0x17288Cu);
    ctx->pc = 0x172888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172884u;
    // 0x172888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x172884u, 0x17288Cu)) {
        return;
    }
    ctx->pc = 0x17288Cu;
label_17288c:
    // 0x17288c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17288Cu;
    {
        const bool branch_taken_0x17288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17288Cu;
        // 0x172890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17288c) {
            ctx->pc = 0x1728A0u;
            goto label_1728a0;
        }
    }
    ctx->pc = 0x172894u;
    // 0x172894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172898: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x172898u;
    SET_GPR_U32(ctx, 31, 0x1728A0u);
    ctx->pc = 0x17289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172898u;
    // 0x17289c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x172898u, 0x1728A0u)) {
        return;
    }
    ctx->pc = 0x1728A0u;
label_1728a0:
    // 0x1728a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1728a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1728a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1728A4u;
    {
        const bool branch_taken_0x1728a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728A4u;
        // 0x1728a8: 0x8ee21a70  lw          $v0, 0x1A70($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728a4) {
            ctx->pc = 0x1728D0u;
            goto label_1728d0;
        }
    }
    ctx->pc = 0x1728ACu;
    // 0x1728ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1728acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1728b0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1728B0u;
    {
        const bool branch_taken_0x1728b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1728b0) {
            ctx->pc = 0x1728B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1728B0u;
            // 0x1728b4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1728D4u;
            goto label_1728d4;
        }
    }
    ctx->pc = 0x1728B8u;
    // 0x1728b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1728bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1728BCu;
    {
        const bool branch_taken_0x1728bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728BCu;
        // 0x1728c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728bc) {
            ctx->pc = 0x1728D0u;
            goto label_1728d0;
        }
    }
    ctx->pc = 0x1728C4u;
    // 0x1728c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1728c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1728c8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1728C8u;
    SET_GPR_U32(ctx, 31, 0x1728D0u);
    ctx->pc = 0x1728CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1728C8u;
    // 0x1728cc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1728C8u, 0x1728D0u)) {
        return;
    }
    ctx->pc = 0x1728D0u;
label_1728d0:
    // 0x1728d0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1728d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1728d4:
    // 0x1728d4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1728d8: 0x661ffe3  bgez        $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1728D8u;
    {
        const bool branch_taken_0x1728d8 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1728DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728D8u;
        // 0x1728dc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728d8) {
            ctx->pc = 0x172868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172868;
        }
    }
    ctx->pc = 0x1728E0u;
    // 0x1728e0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1728e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1728e4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1728e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1728e8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1728e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1728ec: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1728ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1728f0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1728f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1728f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1728f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1728f8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1728f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1728fc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1728fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172904: 0x3e00008  jr          $ra
    ctx->pc = 0x172904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172904u;
        // 0x172908: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17290Cu;
    // 0x17290c: 0x0  nop
    ctx->pc = 0x17290cu;
    // NOP
    ctx->pc = 0x172910u;
}
