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

// Function: sub_00260110
// Address: 0x260110 - 0x2601d8
void sub_00260110_0x260110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260110_0x260110");
#endif

    ctx->pc = 0x260110u;

    // 0x260110: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x260110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x260114: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x260114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260118: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x260118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x26011c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26011Cu;
    {
        const bool branch_taken_0x26011c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26011Cu;
        // 0x260120: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26011c) {
            ctx->pc = 0x26015Cu;
            goto label_26015c;
        }
    }
    ctx->pc = 0x260124u;
    // 0x260124: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x260124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x260128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260128u;
    {
        const bool branch_taken_0x260128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260128u;
        // 0x26012c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260128) {
            ctx->pc = 0x260140u;
            goto label_260140;
        }
    }
    ctx->pc = 0x260130u;
    // 0x260130: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x260130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x260134: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x260134u;
    {
        const bool branch_taken_0x260134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260134) {
            ctx->pc = 0x260138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260134u;
            // 0x260138: 0x30c20010  andi        $v0, $a2, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x260154u;
            goto label_260154;
        }
    }
    ctx->pc = 0x26013Cu;
    // 0x26013c: 0x0  nop
    ctx->pc = 0x26013cu;
    // NOP
label_260140:
    // 0x260140: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x260140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x260144: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260148: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x260148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x26014c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26014Cu;
    {
        const bool branch_taken_0x26014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26014Cu;
        // 0x260150: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26014c) {
            ctx->pc = 0x2601B0u;
            goto label_2601b0;
        }
    }
    ctx->pc = 0x260154u;
label_260154:
    // 0x260154: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x260154u;
    {
        const bool branch_taken_0x260154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260154u;
        // 0x260158: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260154) {
            ctx->pc = 0x260170u;
            goto label_260170;
        }
    }
    ctx->pc = 0x26015Cu;
label_26015c:
    // 0x26015c: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x26015cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x260160: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x260160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x260164: 0x90633550  lbu         $v1, 0x3550($v1)
    ctx->pc = 0x260164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x260168: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x260168u;
    {
        const bool branch_taken_0x260168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260168u;
        // 0x26016c: 0xa0830028  sb          $v1, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260168) {
            ctx->pc = 0x2601B4u;
            goto label_2601b4;
        }
    }
    ctx->pc = 0x260170u;
label_260170:
    // 0x260170: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x260170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x260174: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x260174u;
    {
        const bool branch_taken_0x260174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260174u;
        // 0x260178: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260174) {
            ctx->pc = 0x260190u;
            goto label_260190;
        }
    }
    ctx->pc = 0x26017Cu;
    // 0x26017c: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x26017cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x260180: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260184: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x260184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x260188: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x260188u;
    {
        const bool branch_taken_0x260188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260188u;
        // 0x26018c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260188) {
            ctx->pc = 0x2601B0u;
            goto label_2601b0;
        }
    }
    ctx->pc = 0x260190u;
label_260190:
    // 0x260190: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x260190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x260194: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260194u;
    {
        const bool branch_taken_0x260194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260194u;
        // 0x260198: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260194) {
            ctx->pc = 0x2601A0u;
            goto label_2601a0;
        }
    }
    ctx->pc = 0x26019Cu;
    // 0x26019c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26019cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2601a0:
    // 0x2601a0: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x2601a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x2601a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2601a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2601a8: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x2601a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x2601ac: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x2601acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_2601b0:
    // 0x2601b0: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x2601b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
label_2601b4:
    // 0x2601b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2601b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2601b8: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2601B8u;
    {
        const bool branch_taken_0x2601b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2601b8) {
            ctx->pc = 0x2601CCu;
            goto label_2601cc;
        }
    }
    ctx->pc = 0x2601C0u;
    // 0x2601c0: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x2601c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2601c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2601c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2601c8: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x2601c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
label_2601cc:
    // 0x2601cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2601CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2601CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2601D4u;
    // 0x2601d4: 0x0  nop
    ctx->pc = 0x2601d4u;
    // NOP
    ctx->pc = 0x2601d8u;
}
