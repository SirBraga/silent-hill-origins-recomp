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

// Function: sub_001C6398
// Address: 0x1c6398 - 0x1c63f8
void sub_001C6398_0x1c6398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6398_0x1c6398");
#endif

    ctx->pc = 0x1c6398u;

    // 0x1c6398: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c6398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c639c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1c639cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c63a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C63A0u;
    {
        const bool branch_taken_0x1c63a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63A0u;
        // 0x1c63a4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63a0) {
            ctx->pc = 0x1C63F4u;
            goto label_1c63f4;
        }
    }
    ctx->pc = 0x1C63A8u;
    // 0x1c63a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c63ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c63b0: 0x2442ed60  addiu       $v0, $v0, -0x12A0
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x1c63b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c63b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c63bc: 0x800008  jr          $a0
    ctx->pc = 0x1C63BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C63C4u: goto label_1c63c4;
            case 0x1C63D0u: goto label_1c63d0;
            case 0x1C63DCu: goto label_1c63dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C63BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C63C4u;
label_1c63c4:
    // 0x1c63c4: 0x8ce2028c  lw          $v0, 0x28C($a3)
    ctx->pc = 0x1c63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
    // 0x1c63c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C63C8u;
    {
        const bool branch_taken_0x1c63c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63C8u;
        // 0x1c63cc: 0x2400b  movn        $t0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63c8) {
            ctx->pc = 0x1C63F8u;
            return;
        }
    }
    ctx->pc = 0x1C63D0u;
label_1c63d0:
    // 0x1c63d0: 0x8ce202d0  lw          $v0, 0x2D0($a3)
    ctx->pc = 0x1c63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 720)));
    // 0x1c63d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C63D4u;
    {
        const bool branch_taken_0x1c63d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63D4u;
        // 0x1c63d8: 0x2400b  movn        $t0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63d4) {
            ctx->pc = 0x1C63F8u;
            return;
        }
    }
    ctx->pc = 0x1C63DCu;
label_1c63dc:
    // 0x1c63dc: 0x8ce20314  lw          $v0, 0x314($a3)
    ctx->pc = 0x1c63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 788)));
    // 0x1c63e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C63E0u;
    {
        const bool branch_taken_0x1c63e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c63e0) {
            ctx->pc = 0x1C63E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C63E0u;
            // 0x1c63e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C63F8u;
            return;
        }
    }
    ctx->pc = 0x1C63E8u;
    // 0x1c63e8: 0x8ce2028c  lw          $v0, 0x28C($a3)
    ctx->pc = 0x1c63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
    // 0x1c63ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C63ECu;
    {
        const bool branch_taken_0x1c63ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c63ec) {
            ctx->pc = 0x1C63F8u;
            return;
        }
    }
    ctx->pc = 0x1C63F4u;
label_1c63f4:
    // 0x1c63f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c63f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c63f8u;
}
