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

// Function: sub_0013D530
// Address: 0x13d530 - 0x13d5b8
void sub_0013D530_0x13d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D530_0x13d530");
#endif

    switch (ctx->pc) {
        case 0x13d558u: goto label_13d558;
        case 0x13d56cu: goto label_13d56c;
        case 0x13d574u: goto label_13d574;
        case 0x13d590u: goto label_13d590;
        case 0x13d598u: goto label_13d598;
        case 0x13d5a0u: goto label_13d5a0;
        default: break;
    }

    ctx->pc = 0x13d530u;

    // 0x13d530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d538: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13d53c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d544: 0x8e2500f4  lw          $a1, 0xF4($s1)
    ctx->pc = 0x13d544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x13d548: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13D548u;
    {
        const bool branch_taken_0x13d548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D548u;
        // 0x13d54c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d548) {
            ctx->pc = 0x13D578u;
            goto label_13d578;
        }
    }
    ctx->pc = 0x13D550u;
    // 0x13d550: 0xc06640a  jal         func_199028
    ctx->pc = 0x13D550u;
    SET_GPR_U32(ctx, 31, 0x13D558u);
    ctx->pc = 0x13D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D550u;
    // 0x13d554: 0x8c448bc4  lw          $a0, -0x743C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13D550u, 0x13D558u)) {
        return;
    }
    ctx->pc = 0x13D558u;
label_13d558:
    // 0x13d558: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x13d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x13d55c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D55Cu;
    {
        const bool branch_taken_0x13d55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d55c) {
            ctx->pc = 0x13D56Cu;
            goto label_13d56c;
        }
    }
    ctx->pc = 0x13D564u;
    // 0x13d564: 0xc0b5c9e  jal         func_2D7278
    ctx->pc = 0x13D564u;
    SET_GPR_U32(ctx, 31, 0x13D56Cu);
    ctx->pc = 0x13D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D564u;
    // 0x13d568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7278u, 0x13D564u, 0x13D56Cu)) {
        return;
    }
    ctx->pc = 0x13D56Cu;
label_13d56c:
    // 0x13d56c: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x13D56Cu;
    SET_GPR_U32(ctx, 31, 0x13D574u);
    ctx->pc = 0x13D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D56Cu;
    // 0x13d570: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x13D56Cu, 0x13D574u)) {
        return;
    }
    ctx->pc = 0x13D574u;
label_13d574:
    // 0x13d574: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x13d574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_13d578:
    // 0x13d578: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x13d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x13d57c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13D57Cu;
    {
        const bool branch_taken_0x13d57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D57Cu;
        // 0x13d580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d57c) {
            ctx->pc = 0x13D5A4u;
            goto label_13d5a4;
        }
    }
    ctx->pc = 0x13D584u;
    // 0x13d584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13d584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d588: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x13D588u;
    SET_GPR_U32(ctx, 31, 0x13D590u);
    ctx->pc = 0x13D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D588u;
    // 0x13d58c: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x13D588u, 0x13D590u)) {
        return;
    }
    ctx->pc = 0x13D590u;
label_13d590:
    // 0x13d590: 0xc0898d2  jal         func_226348
    ctx->pc = 0x13D590u;
    SET_GPR_U32(ctx, 31, 0x13D598u);
    ctx->pc = 0x13D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D590u;
    // 0x13d594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x13D590u, 0x13D598u)) {
        return;
    }
    ctx->pc = 0x13D598u;
label_13d598:
    // 0x13d598: 0xc095534  jal         func_2554D0
    ctx->pc = 0x13D598u;
    SET_GPR_U32(ctx, 31, 0x13D5A0u);
    ctx->pc = 0x13D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D598u;
    // 0x13d59c: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x13D598u, 0x13D5A0u)) {
        return;
    }
    ctx->pc = 0x13D5A0u;
label_13d5a0:
    // 0x13d5a0: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x13d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_13d5a4:
    // 0x13d5a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13d5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5B0u;
        // 0x13d5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D5B8u;
}
