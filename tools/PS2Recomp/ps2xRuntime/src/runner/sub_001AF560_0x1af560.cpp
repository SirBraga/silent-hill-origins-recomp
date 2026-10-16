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

// Function: sub_001AF560
// Address: 0x1af560 - 0x1af638
void sub_001AF560_0x1af560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF560_0x1af560");
#endif

    switch (ctx->pc) {
        case 0x1af590u: goto label_1af590;
        case 0x1af598u: goto label_1af598;
        case 0x1af5a0u: goto label_1af5a0;
        case 0x1af5e0u: goto label_1af5e0;
        case 0x1af5fcu: goto label_1af5fc;
        case 0x1af620u: goto label_1af620;
        default: break;
    }

    ctx->pc = 0x1af560u;

    // 0x1af560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af564: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1af568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af56c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AF56Cu;
    {
        const bool branch_taken_0x1af56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF56Cu;
        // 0x1af570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af56c) {
            ctx->pc = 0x1AF5C4u;
            goto label_1af5c4;
        }
    }
    ctx->pc = 0x1AF574u;
    // 0x1af574: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1af574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1af578: 0x8c43916c  lw          $v1, -0x6E94($v0)
    ctx->pc = 0x1af578u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33916Cu));
    // 0x1af57c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AF57Cu;
    {
        const bool branch_taken_0x1af57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF57Cu;
        // 0x1af580: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af57c) {
            ctx->pc = 0x1AF624u;
            goto label_1af624;
        }
    }
    ctx->pc = 0x1AF584u;
    // 0x1af584: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1af584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1af588: 0xc080888  jal         func_202220
    ctx->pc = 0x1AF588u;
    SET_GPR_U32(ctx, 31, 0x1AF590u);
    ctx->pc = 0x1AF58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF588u;
    // 0x1af58c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x1AF588u, 0x1AF590u)) {
        return;
    }
    ctx->pc = 0x1AF590u;
label_1af590:
    // 0x1af590: 0xae22916c  sw          $v0, -0x6E94($s1)
    ctx->pc = 0x1af590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938988), GPR_U32(ctx, 2));
    // 0x1af594: 0x0  nop
    ctx->pc = 0x1af594u;
    // NOP
label_1af598:
    // 0x1af598: 0xc07c456  jal         func_1F1158
    ctx->pc = 0x1AF598u;
    SET_GPR_U32(ctx, 31, 0x1AF5A0u);
    ctx->pc = 0x1F1158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1158u, 0x1AF598u, 0x1AF5A0u)) {
        return;
    }
    ctx->pc = 0x1AF5A0u;
label_1af5a0:
    // 0x1af5a0: 0x8e23916c  lw          $v1, -0x6E94($s1)
    ctx->pc = 0x1af5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938988)));
    // 0x1af5a4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1af5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1af5a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1af5ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1af5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1af5b0: 0x2a050006  slti        $a1, $s0, 0x6
    ctx->pc = 0x1af5b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1af5b4: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AF5B4u;
    {
        const bool branch_taken_0x1af5b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B4u;
        // 0x1af5b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5b4) {
            ctx->pc = 0x1AF598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af598;
        }
    }
    ctx->pc = 0x1AF5BCu;
    // 0x1af5bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1AF5BCu;
    {
        const bool branch_taken_0x1af5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5BCu;
        // 0x1af5c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5bc) {
            ctx->pc = 0x1AF628u;
            goto label_1af628;
        }
    }
    ctx->pc = 0x1AF5C4u;
label_1af5c4:
    // 0x1af5c4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1af5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1af5c8: 0x8c43916c  lw          $v1, -0x6E94($v0)
    ctx->pc = 0x1af5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33916Cu));
    // 0x1af5cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AF5CCu;
    {
        const bool branch_taken_0x1af5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5CCu;
        // 0x1af5d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5cc) {
            ctx->pc = 0x1AF624u;
            goto label_1af624;
        }
    }
    ctx->pc = 0x1AF5D4u;
    // 0x1af5d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5d8: 0x8e23916c  lw          $v1, -0x6E94($s1)
    ctx->pc = 0x1af5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938988)));
    // 0x1af5dc: 0x0  nop
    ctx->pc = 0x1af5dcu;
    // NOP
label_1af5e0:
    // 0x1af5e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1af5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1af5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af5e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1af5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af5ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF5ECu;
    {
        const bool branch_taken_0x1af5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af5ec) {
            ctx->pc = 0x1AF5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF5ECu;
            // 0x1af5f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF600u;
            goto label_1af600;
        }
    }
    ctx->pc = 0x1AF5F4u;
    // 0x1af5f4: 0xc07c3e4  jal         func_1F0F90
    ctx->pc = 0x1AF5F4u;
    SET_GPR_U32(ctx, 31, 0x1AF5FCu);
    ctx->pc = 0x1AF5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5F4u;
    // 0x1af5f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0F90u, 0x1AF5F4u, 0x1AF5FCu)) {
        return;
    }
    ctx->pc = 0x1AF5FCu;
label_1af5fc:
    // 0x1af5fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1af600:
    // 0x1af600: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1af600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1af604: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AF604u;
    {
        const bool branch_taken_0x1af604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF604u;
        // 0x1af608: 0x8e23916c  lw          $v1, -0x6E94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af604) {
            ctx->pc = 0x1AF5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af5e0;
        }
    }
    ctx->pc = 0x1AF60Cu;
    // 0x1af60c: 0x8e24916c  lw          $a0, -0x6E94($s1)
    ctx->pc = 0x1af60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938988)));
    // 0x1af610: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF610u;
    {
        const bool branch_taken_0x1af610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af610) {
            ctx->pc = 0x1AF614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF610u;
            // 0x1af614: 0xae20916c  sw          $zero, -0x6E94($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294938988), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF624u;
            goto label_1af624;
        }
    }
    ctx->pc = 0x1AF618u;
    // 0x1af618: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1AF618u;
    SET_GPR_U32(ctx, 31, 0x1AF620u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1AF618u, 0x1AF620u)) {
        return;
    }
    ctx->pc = 0x1AF620u;
label_1af620:
    // 0x1af620: 0xae20916c  sw          $zero, -0x6E94($s1)
    ctx->pc = 0x1af620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938988), GPR_U32(ctx, 0));
label_1af624:
    // 0x1af624: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af628:
    // 0x1af628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af630: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF630u;
        // 0x1af634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF638u;
}
