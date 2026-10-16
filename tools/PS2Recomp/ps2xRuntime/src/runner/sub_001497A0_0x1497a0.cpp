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

// Function: sub_001497A0
// Address: 0x1497a0 - 0x1498a0
void sub_001497A0_0x1497a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001497A0_0x1497a0");
#endif

    switch (ctx->pc) {
        case 0x1497e0u: goto label_1497e0;
        case 0x149810u: goto label_149810;
        case 0x149824u: goto label_149824;
        case 0x149858u: goto label_149858;
        default: break;
    }

    ctx->pc = 0x1497a0u;

    // 0x1497a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1497a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1497a4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1497a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1497a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1497a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1497ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1497acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1497b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1497b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1497b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1497b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1497bc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1497bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497c0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1497c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1497c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1497c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497c8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1497c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1497cc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1497ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1497d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1497d4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1497d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1497d8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1497D8u;
    SET_GPR_U32(ctx, 31, 0x1497E0u);
    ctx->pc = 0x1497DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1497D8u;
    // 0x1497dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1497D8u, 0x1497E0u)) {
        return;
    }
    ctx->pc = 0x1497E0u;
label_1497e0:
    // 0x1497e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1497e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497e4: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x1497e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
    // 0x1497e8: 0xae920008  sw          $s2, 0x8($s4)
    ctx->pc = 0x1497e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
    // 0x1497ec: 0xae93000c  sw          $s3, 0xC($s4)
    ctx->pc = 0x1497ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 19));
    // 0x1497f0: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x1497f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
    // 0x1497f4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1497F4u;
    {
        const bool branch_taken_0x1497f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1497F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497F4u;
        // 0x1497f8: 0xae950014  sw          $s5, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497f4) {
            ctx->pc = 0x149828u;
            goto label_149828;
        }
    }
    ctx->pc = 0x1497FCu;
    // 0x1497fc: 0x1aa0000b  blez        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1497FCu;
    {
        const bool branch_taken_0x1497fc = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x149800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497FCu;
        // 0x149800: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497fc) {
            ctx->pc = 0x14982Cu;
            goto label_14982c;
        }
    }
    ctx->pc = 0x149804u;
    // 0x149804: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x149804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149808: 0xc080924  jal         func_202490
    ctx->pc = 0x149808u;
    SET_GPR_U32(ctx, 31, 0x149810u);
    ctx->pc = 0x14980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149808u;
    // 0x14980c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x149808u, 0x149810u)) {
        return;
    }
    ctx->pc = 0x149810u;
label_149810:
    // 0x149810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149814: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x149814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x149818: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x149818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14981c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x14981Cu;
    SET_GPR_U32(ctx, 31, 0x149824u);
    ctx->pc = 0x149820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14981Cu;
    // 0x149820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x14981Cu, 0x149824u)) {
        return;
    }
    ctx->pc = 0x149824u;
label_149824:
    // 0x149824: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x149824u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_149828:
    // 0x149828: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_14982c:
    // 0x14982c: 0x8c6284d0  lw          $v0, -0x7B30($v1)
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935760)));
    // 0x149830: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149830u;
    {
        const bool branch_taken_0x149830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149830) {
            ctx->pc = 0x149834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149830u;
            // 0x149834: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149844u;
            goto label_149844;
        }
    }
    ctx->pc = 0x149838u;
    // 0x149838: 0xac7484d0  sw          $s4, -0x7B30($v1)
    ctx->pc = 0x149838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935760), GPR_U32(ctx, 20));
    // 0x14983c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14983Cu;
    {
        const bool branch_taken_0x14983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14983Cu;
        // 0x149840: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14983c) {
            ctx->pc = 0x14987Cu;
            goto label_14987c;
        }
    }
    ctx->pc = 0x149844u;
label_149844:
    // 0x149844: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149848: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x149848u;
    {
        const bool branch_taken_0x149848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149848) {
            ctx->pc = 0x14984Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149848u;
            // 0x14984c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149878u;
            goto label_149878;
        }
    }
    ctx->pc = 0x149850u;
    // 0x149850: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x149850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149854: 0x0  nop
    ctx->pc = 0x149854u;
    // NOP
label_149858:
    // 0x149858: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14985c: 0x0  nop
    ctx->pc = 0x14985cu;
    // NOP
    // 0x149860: 0x0  nop
    ctx->pc = 0x149860u;
    // NOP
    // 0x149864: 0x0  nop
    ctx->pc = 0x149864u;
    // NOP
    // 0x149868: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x149868u;
    {
        const bool branch_taken_0x149868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149868) {
            ctx->pc = 0x14986Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149868u;
            // 0x14986c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149858;
        }
    }
    ctx->pc = 0x149870u;
    // 0x149870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149874: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x149874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_149878:
    // 0x149878: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x149878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_14987c:
    // 0x14987c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14987cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149880: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x149880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149884: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x149884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14988c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14988cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149890: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x149890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149898: 0x3e00008  jr          $ra
    ctx->pc = 0x149898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149898u;
        // 0x14989c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1498A0u;
}
