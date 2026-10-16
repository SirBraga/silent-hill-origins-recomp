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

// Function: sub_001B24A0
// Address: 0x1b24a0 - 0x1b2548
void sub_001B24A0_0x1b24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B24A0_0x1b24a0");
#endif

    switch (ctx->pc) {
        case 0x1b24ccu: goto label_1b24cc;
        case 0x1b24e0u: goto label_1b24e0;
        case 0x1b251cu: goto label_1b251c;
        default: break;
    }

    ctx->pc = 0x1b24a0u;

    // 0x1b24a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b24a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1b24a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1b24a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b24a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b24ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b24acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b24b0: 0x8c629168  lw          $v0, -0x6E98($v1)
    ctx->pc = 0x1b24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339168u));
    // 0x1b24b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b24b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b24b8: 0x8c500148  lw          $s0, 0x148($v0)
    ctx->pc = 0x1b24b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x1b24bc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B24BCu;
    {
        const bool branch_taken_0x1b24bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24BCu;
        // 0x1b24c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24bc) {
            ctx->pc = 0x1B24E8u;
            goto label_1b24e8;
        }
    }
    ctx->pc = 0x1B24C4u;
    // 0x1b24c4: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1B24C4u;
    SET_GPR_U32(ctx, 31, 0x1B24CCu);
    ctx->pc = 0x1B24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24C4u;
    // 0x1b24c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1B24C4u, 0x1B24CCu)) {
        return;
    }
    ctx->pc = 0x1B24CCu;
label_1b24cc:
    // 0x1b24cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B24CCu;
    {
        const bool branch_taken_0x1b24cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24CCu;
        // 0x1b24d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24cc) {
            ctx->pc = 0x1B24E8u;
            goto label_1b24e8;
        }
    }
    ctx->pc = 0x1B24D4u;
    // 0x1b24d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b24d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24d8: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x1B24D8u;
    SET_GPR_U32(ctx, 31, 0x1B24E0u);
    ctx->pc = 0x1B24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24D8u;
    // 0x1b24dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x1B24D8u, 0x1B24E0u)) {
        return;
    }
    ctx->pc = 0x1B24E0u;
label_1b24e0:
    // 0x1b24e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B24E0u;
    {
        const bool branch_taken_0x1b24e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b24e0) {
            ctx->pc = 0x1B24E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B24E0u;
            // 0x1b24e4: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B24E8u;
            goto label_1b24e8;
        }
    }
    ctx->pc = 0x1B24E8u;
label_1b24e8:
    // 0x1b24e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b24ec: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1b24ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1b24f0: 0x8c640198  lw          $a0, 0x198($v1)
    ctx->pc = 0x1b24f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1b24f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B24F4u;
    {
        const bool branch_taken_0x1b24f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24F4u;
        // 0x1b24f8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24f4) {
            ctx->pc = 0x1B2504u;
            goto label_1b2504;
        }
    }
    ctx->pc = 0x1B24FCu;
    // 0x1b24fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B24FCu;
    {
        const bool branch_taken_0x1b24fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24FCu;
        // 0x1b2500: 0x8c5091e8  lw          $s0, -0x6E18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24fc) {
            ctx->pc = 0x1B250Cu;
            goto label_1b250c;
        }
    }
    ctx->pc = 0x1B2504u;
label_1b2504:
    // 0x1b2504: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b2504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b2508: 0x8c5091e4  lw          $s0, -0x6E1C($v0)
    ctx->pc = 0x1b2508u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3391E4u));
label_1b250c:
    // 0x1b250c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2514: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x1B2514u;
    SET_GPR_U32(ctx, 31, 0x1B251Cu);
    ctx->pc = 0x1B2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2514u;
    // 0x1b2518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x1B2514u, 0x1B251Cu)) {
        return;
    }
    ctx->pc = 0x1B251Cu;
label_1b251c:
    // 0x1b251c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b251cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2520: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2520u;
    {
        const bool branch_taken_0x1b2520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2520u;
        // 0x1b2524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2520) {
            ctx->pc = 0x1B252Cu;
            goto label_1b252c;
        }
    }
    ctx->pc = 0x1B2528u;
    // 0x1b2528: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1b2528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_1b252c:
    // 0x1b252c: 0xae300148  sw          $s0, 0x148($s1)
    ctx->pc = 0x1b252cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 16));
    // 0x1b2530: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b253c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B253Cu;
        // 0x1b2540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B253Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2544u;
    // 0x1b2544: 0x0  nop
    ctx->pc = 0x1b2544u;
    // NOP
    ctx->pc = 0x1b2548u;
}
