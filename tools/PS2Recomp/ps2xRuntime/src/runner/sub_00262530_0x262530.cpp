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

// Function: sub_00262530
// Address: 0x262530 - 0x2625c8
void sub_00262530_0x262530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262530_0x262530");
#endif

    ctx->pc = 0x262530u;

    // 0x262530: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x262530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262534: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x262534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x262538: 0x8c440fcc  lw          $a0, 0xFCC($v0)
    ctx->pc = 0x262538u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x730FCCu));
    // 0x26253c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x26253cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x262540: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x262540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x262544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x262548: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x262548u;
    {
        const bool branch_taken_0x262548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262548) {
            ctx->pc = 0x2625BCu;
            goto label_2625bc;
        }
    }
    ctx->pc = 0x262550u;
    // 0x262550: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x262550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x262554: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x262554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x262558: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x262558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x26255c: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x26255cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x262560: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x262560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x262564: 0x3042009d  andi        $v0, $v0, 0x9D
    ctx->pc = 0x262564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)157);
    // 0x262568: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x262568u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x26256c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26256cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262570: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x262570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x262574: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x262574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x262578: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x262578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x26257c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x26257cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x262580: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x262580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x262584: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x262584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x262588: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x262588u;
    {
        const bool branch_taken_0x262588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262588) {
            ctx->pc = 0x2625BCu;
            goto label_2625bc;
        }
    }
    ctx->pc = 0x262590u;
    // 0x262590: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x262590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x262594: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x262594u;
    {
        const bool branch_taken_0x262594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262594u;
        // 0x262598: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262594) {
            ctx->pc = 0x2625BCu;
            goto label_2625bc;
        }
    }
    ctx->pc = 0x26259Cu;
    // 0x26259c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x26259cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2625a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2625a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2625a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2625A4u;
    {
        const bool branch_taken_0x2625a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2625A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625A4u;
        // 0x2625a8: 0x34820004  ori         $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625a4) {
            ctx->pc = 0x2625B8u;
            goto label_2625b8;
        }
    }
    ctx->pc = 0x2625ACu;
    // 0x2625ac: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x2625acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2625b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2625B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625B0u;
        // 0x2625b4: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2625B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2625B8u;
label_2625b8:
    // 0x2625b8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2625b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2625bc:
    // 0x2625bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2625BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2625BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2625C4u;
    // 0x2625c4: 0x0  nop
    ctx->pc = 0x2625c4u;
    // NOP
    ctx->pc = 0x2625c8u;
}
