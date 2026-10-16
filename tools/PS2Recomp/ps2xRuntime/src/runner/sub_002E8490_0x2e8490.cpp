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

// Function: sub_002E8490
// Address: 0x2e8490 - 0x2e8550
void sub_002E8490_0x2e8490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8490_0x2e8490");
#endif

    ctx->pc = 0x2e8490u;

    // 0x2e8490: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e8490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8494: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e8494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8498: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2e8498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e849c: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x2e849cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x2e84a0: 0x24c65460  addiu       $a2, $a2, 0x5460
    ctx->pc = 0x2e84a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21600));
    // 0x2e84a4: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x2e84a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x2e84a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2e84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e84ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e84acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e84b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e84b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e84b8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e84bc: 0x31030008  andi        $v1, $t0, 0x8
    ctx->pc = 0x2e84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x2e84c0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2e84c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e84c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E84C4u;
    {
        const bool branch_taken_0x2e84c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84C4u;
        // 0x2e84c8: 0x220c2  srl         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84c4) {
            ctx->pc = 0x2E84D8u;
            goto label_2e84d8;
        }
    }
    ctx->pc = 0x2E84CCu;
    // 0x2e84cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e84d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E84D0u;
    {
        const bool branch_taken_0x2e84d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84D0u;
        // 0x2e84d4: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84d0) {
            ctx->pc = 0x2E84E0u;
            goto label_2e84e0;
        }
    }
    ctx->pc = 0x2E84D8u;
label_2e84d8:
    // 0x2e84d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e84dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e84e0:
    // 0x2e84e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e84e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e84e8: 0x28628000  slti        $v0, $v1, -0x8000
    ctx->pc = 0x2e84e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x2e84ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E84ECu;
    {
        const bool branch_taken_0x2e84ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84ECu;
        // 0x2e84f0: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84ec) {
            ctx->pc = 0x2E84FCu;
            goto label_2e84fc;
        }
    }
    ctx->pc = 0x2E84F4u;
    // 0x2e84f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E84F4u;
    {
        const bool branch_taken_0x2e84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84F4u;
        // 0x2e84f8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84f4) {
            ctx->pc = 0x2E850Cu;
            goto label_2e850c;
        }
    }
    ctx->pc = 0x2E84FCu;
label_2e84fc:
    // 0x2e84fc: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x2e84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e8500: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2e8500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8504: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E8504u;
    {
        const bool branch_taken_0x2e8504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8504) {
            ctx->pc = 0x2E8508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8504u;
            // 0x2e8508: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E850Cu;
            goto label_2e850c;
        }
    }
    ctx->pc = 0x2E850Cu;
label_2e850c:
    // 0x2e850c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e8510: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2e8510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2e8514: 0x24425440  addiu       $v0, $v0, 0x5440
    ctx->pc = 0x2e8514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21568));
    // 0x2e8518: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2e8518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e851c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e8520: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2e8520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e8524: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2e8524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e8528: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8528u;
    {
        const bool branch_taken_0x2e8528 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2E852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8528u;
        // 0x2e852c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8528) {
            ctx->pc = 0x2E8538u;
            goto label_2e8538;
        }
    }
    ctx->pc = 0x2E8530u;
    // 0x2e8530: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8530u;
        // 0x2e8534: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8538u;
label_2e8538:
    // 0x2e8538: 0x28420059  slti        $v0, $v0, 0x59
    ctx->pc = 0x2e8538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x2e853c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E853Cu;
    {
        const bool branch_taken_0x2e853c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E853Cu;
        // 0x2e8540: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e853c) {
            ctx->pc = 0x2E8548u;
            goto label_2e8548;
        }
    }
    ctx->pc = 0x2E8544u;
    // 0x2e8544: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2e8544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2e8548:
    // 0x2e8548: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8550u;
}
