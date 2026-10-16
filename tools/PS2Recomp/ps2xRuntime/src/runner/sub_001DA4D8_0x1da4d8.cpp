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

// Function: sub_001DA4D8
// Address: 0x1da4d8 - 0x1da578
void sub_001DA4D8_0x1da4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA4D8_0x1da4d8");
#endif

    switch (ctx->pc) {
        case 0x1da4f8u: goto label_1da4f8;
        case 0x1da540u: goto label_1da540;
        default: break;
    }

    ctx->pc = 0x1da4d8u;

    // 0x1da4d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da4dc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1da4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1da4e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1da4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1da4e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1da4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da4f0: 0xc04257c  jal         func_1095F0
    ctx->pc = 0x1DA4F0u;
    SET_GPR_U32(ctx, 31, 0x1DA4F8u);
    ctx->pc = 0x1DA4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4F0u;
    // 0x1da4f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1095F0u, 0x1DA4F0u, 0x1DA4F8u)) {
        return;
    }
    ctx->pc = 0x1DA4F8u;
label_1da4f8:
    // 0x1da4f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1da4f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1da4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da504: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DA504u;
    {
        const bool branch_taken_0x1da504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA504u;
        // 0x1da508: 0x26020007  addiu       $v0, $s0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da504) {
            ctx->pc = 0x1DA560u;
            goto label_1da560;
        }
    }
    ctx->pc = 0x1DA50Cu;
    // 0x1da50c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1da50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1da510: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1da510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1da514: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x1da514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
    // 0x1da518: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1da518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1da51c: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x1da51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1da520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da524: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1da524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da52c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da530: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1da530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1da534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1da534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da538: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA538u;
    {
        const bool branch_taken_0x1da538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA538u;
        // 0x1da53c: 0xb03021  addu        $a2, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da538) {
            ctx->pc = 0x1DA55Cu;
            goto label_1da55c;
        }
    }
    ctx->pc = 0x1DA540u;
label_1da540:
    // 0x1da540: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1da540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1da544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da548: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1da548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da54c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1da54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1da554: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DA554u;
    {
        const bool branch_taken_0x1da554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA554u;
        // 0x1da558: 0xb03021  addu        $a2, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da554) {
            ctx->pc = 0x1DA540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da540;
        }
    }
    ctx->pc = 0x1DA55Cu;
label_1da55c:
    // 0x1da55c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1da55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1da560:
    // 0x1da560: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1da560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da564: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1da564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da56c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA56Cu;
        // 0x1da570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA574u;
    // 0x1da574: 0x0  nop
    ctx->pc = 0x1da574u;
    // NOP
    ctx->pc = 0x1da578u;
}
