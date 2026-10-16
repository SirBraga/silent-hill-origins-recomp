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

// Function: sub_0017D6F8
// Address: 0x17d6f8 - 0x17d8b0
void sub_0017D6F8_0x17d6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D6F8_0x17d6f8");
#endif

    switch (ctx->pc) {
        case 0x17d718u: goto label_17d718;
        case 0x17d72cu: goto label_17d72c;
        case 0x17d740u: goto label_17d740;
        case 0x17d76cu: goto label_17d76c;
        case 0x17d7e4u: goto label_17d7e4;
        case 0x17d7f8u: goto label_17d7f8;
        case 0x17d810u: goto label_17d810;
        case 0x17d828u: goto label_17d828;
        case 0x17d884u: goto label_17d884;
        default: break;
    }

    ctx->pc = 0x17d6f8u;

    // 0x17d6f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17d6fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17d700: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17d704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17d704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d708: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17d70c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17d710: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x17D710u;
    SET_GPR_U32(ctx, 31, 0x17D718u);
    ctx->pc = 0x17D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D710u;
    // 0x17d714: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x17D710u, 0x17D718u)) {
        return;
    }
    ctx->pc = 0x17D718u;
label_17d718:
    // 0x17d718: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17d71c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d720: 0x8c46f968  lw          $a2, -0x698($v0)
    ctx->pc = 0x17d720u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF968u));
    // 0x17d724: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x17D724u;
    SET_GPR_U32(ctx, 31, 0x17D72Cu);
    ctx->pc = 0x17D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D724u;
    // 0x17d728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x17D724u, 0x17D72Cu)) {
        return;
    }
    ctx->pc = 0x17D72Cu;
label_17d72c:
    // 0x17d72c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d730: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d734: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17D734u;
    {
        const bool branch_taken_0x17d734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D734u;
        // 0x17d738: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d734) {
            ctx->pc = 0x17D77Cu;
            goto label_17d77c;
        }
    }
    ctx->pc = 0x17D73Cu;
    // 0x17d73c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17d740:
    // 0x17d740: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17d744: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D744u;
    {
        const bool branch_taken_0x17d744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D744u;
        // 0x17d748: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d744) {
            ctx->pc = 0x17D758u;
            goto label_17d758;
        }
    }
    ctx->pc = 0x17D74Cu;
    // 0x17d74c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17d750: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x17d750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x17d754: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17d758:
    // 0x17d758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17d758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d75c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17d764: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17D764u;
    SET_GPR_U32(ctx, 31, 0x17D76Cu);
    ctx->pc = 0x17D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D764u;
    // 0x17d768: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17D764u, 0x17D76Cu)) {
        return;
    }
    ctx->pc = 0x17D76Cu;
label_17d76c:
    // 0x17d76c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d770: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d774: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17D774u;
    {
        const bool branch_taken_0x17d774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D774u;
        // 0x17d778: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d774) {
            ctx->pc = 0x17D740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d740;
        }
    }
    ctx->pc = 0x17D77Cu;
label_17d77c:
    // 0x17d77c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x17d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x17d780: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17D780u;
    {
        const bool branch_taken_0x17d780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D780u;
        // 0x17d784: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d780) {
            ctx->pc = 0x17D7E8u;
            goto label_17d7e8;
        }
    }
    ctx->pc = 0x17D788u;
    // 0x17d788: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x17d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x17d78c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d790: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D790u;
    {
        const bool branch_taken_0x17d790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D790u;
        // 0x17d794: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d790) {
            ctx->pc = 0x17D7C0u;
            goto label_17d7c0;
        }
    }
    ctx->pc = 0x17D798u;
    // 0x17d798: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D798u;
    {
        const bool branch_taken_0x17d798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d798) {
            ctx->pc = 0x17D79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D798u;
            // 0x17d79c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D7B0u;
            goto label_17d7b0;
        }
    }
    ctx->pc = 0x17D7A0u;
    // 0x17d7a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D7A0u;
    {
        const bool branch_taken_0x17d7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7A0u;
        // 0x17d7a4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7a0) {
            ctx->pc = 0x17D7C4u;
            goto label_17d7c4;
        }
    }
    ctx->pc = 0x17D7A8u;
    // 0x17d7a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17D7A8u;
    {
        const bool branch_taken_0x17d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7A8u;
        // 0x17d7ac: 0x8e450058  lw          $a1, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7a8) {
            ctx->pc = 0x17D7D0u;
            goto label_17d7d0;
        }
    }
    ctx->pc = 0x17D7B0u;
label_17d7b0:
    // 0x17d7b0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D7B0u;
    {
        const bool branch_taken_0x17d7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17d7b0) {
            ctx->pc = 0x17D7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D7B0u;
            // 0x17d7b4: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D7CCu;
            goto label_17d7cc;
        }
    }
    ctx->pc = 0x17D7B8u;
    // 0x17d7b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17D7B8u;
    {
        const bool branch_taken_0x17d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7B8u;
        // 0x17d7bc: 0x8e450058  lw          $a1, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7b8) {
            ctx->pc = 0x17D7D0u;
            goto label_17d7d0;
        }
    }
    ctx->pc = 0x17D7C0u;
label_17d7c0:
    // 0x17d7c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_17d7c4:
    // 0x17d7c4: 0x244246a0  addiu       $v0, $v0, 0x46A0
    ctx->pc = 0x17d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18080));
    // 0x17d7c8: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x17d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_17d7cc:
    // 0x17d7cc: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_17d7d0:
    // 0x17d7d0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D7D0u;
    {
        const bool branch_taken_0x17d7d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7D0u;
        // 0x17d7d4: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7d0) {
            ctx->pc = 0x17D7E4u;
            goto label_17d7e4;
        }
    }
    ctx->pc = 0x17D7D8u;
    // 0x17d7d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7dc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17D7DCu;
    SET_GPR_U32(ctx, 31, 0x17D7E4u);
    ctx->pc = 0x17D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7DCu;
    // 0x17d7e0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17D7DCu, 0x17D7E4u)) {
        return;
    }
    ctx->pc = 0x17D7E4u;
label_17d7e4:
    // 0x17d7e4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x17d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_17d7e8:
    // 0x17d7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7ec: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x17d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
    // 0x17d7f0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x17D7F0u;
    SET_GPR_U32(ctx, 31, 0x17D7F8u);
    ctx->pc = 0x17D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7F0u;
    // 0x17d7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x17D7F0u, 0x17D7F8u)) {
        return;
    }
    ctx->pc = 0x17D7F8u;
label_17d7f8:
    // 0x17d7f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d7fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d800: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x17D800u;
    {
        const bool branch_taken_0x17d800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D800u;
        // 0x17d804: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d800) {
            ctx->pc = 0x17D898u;
            goto label_17d898;
        }
    }
    ctx->pc = 0x17D808u;
    // 0x17d808: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x17d808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d80c: 0x0  nop
    ctx->pc = 0x17d80cu;
    // NOP
label_17d810:
    // 0x17d810: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d814: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17D814u;
    {
        const bool branch_taken_0x17d814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D814u;
        // 0x17d818: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d814) {
            ctx->pc = 0x17D86Cu;
            goto label_17d86c;
        }
    }
    ctx->pc = 0x17D81Cu;
    // 0x17d81c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x17d81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x17d820: 0xc080858  jal         func_202160
    ctx->pc = 0x17D820u;
    SET_GPR_U32(ctx, 31, 0x17D828u);
    ctx->pc = 0x17D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D820u;
    // 0x17d824: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x17D820u, 0x17D828u)) {
        return;
    }
    ctx->pc = 0x17D828u;
label_17d828:
    // 0x17d828: 0x26510044  addiu       $s1, $s2, 0x44
    ctx->pc = 0x17d828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x17d82c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17d82cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d830: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x17d830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x17d834: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17d838: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17d838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17d83c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x17d840: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17d840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17d844: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17D844u;
    {
        const bool branch_taken_0x17d844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d844) {
            ctx->pc = 0x17D848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D844u;
            // 0x17d848: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D84Cu;
            goto label_17d84c;
        }
    }
    ctx->pc = 0x17D84Cu;
label_17d84c:
    // 0x17d84c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17d850: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17D850u;
    {
        const bool branch_taken_0x17d850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d850) {
            ctx->pc = 0x17D854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D850u;
            // 0x17d854: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D858u;
            goto label_17d858;
        }
    }
    ctx->pc = 0x17D858u;
label_17d858:
    // 0x17d858: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x17d858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x17d85c: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x17d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17d860: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d864: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x17d864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x17d868: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17d86c:
    // 0x17d86c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d870: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17d870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d874: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d878: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17d87c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17D87Cu;
    SET_GPR_U32(ctx, 31, 0x17D884u);
    ctx->pc = 0x17D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D87Cu;
    // 0x17d880: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17D87Cu, 0x17D884u)) {
        return;
    }
    ctx->pc = 0x17D884u;
label_17d884:
    // 0x17d884: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17d884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d888: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d88c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x17D88Cu;
    {
        const bool branch_taken_0x17d88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D88Cu;
        // 0x17d890: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d88c) {
            ctx->pc = 0x17D810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d810;
        }
    }
    ctx->pc = 0x17D894u;
    // 0x17d894: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17d894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17d898:
    // 0x17d898: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17d898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d89c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17d89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d8a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8A4u;
        // 0x17d8a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D8ACu;
    // 0x17d8ac: 0x0  nop
    ctx->pc = 0x17d8acu;
    // NOP
    ctx->pc = 0x17d8b0u;
}
