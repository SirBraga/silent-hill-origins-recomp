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

// Function: sub_001D9270
// Address: 0x1d9270 - 0x1d9358
void sub_001D9270_0x1d9270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9270_0x1d9270");
#endif

    switch (ctx->pc) {
        case 0x1d9294u: goto label_1d9294;
        case 0x1d92a8u: goto label_1d92a8;
        case 0x1d92bcu: goto label_1d92bc;
        case 0x1d92d0u: goto label_1d92d0;
        case 0x1d92d8u: goto label_1d92d8;
        case 0x1d92e0u: goto label_1d92e0;
        case 0x1d92f0u: goto label_1d92f0;
        case 0x1d9310u: goto label_1d9310;
        case 0x1d9330u: goto label_1d9330;
        case 0x1d9340u: goto label_1d9340;
        default: break;
    }

    ctx->pc = 0x1d9270u;

    // 0x1d9270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9274: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d9274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d9278: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d9278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d927c: 0x24848a68  addiu       $a0, $a0, -0x7598
    ctx->pc = 0x1d927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937192));
    // 0x1d9280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9288: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1d9288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d928c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1D928Cu;
    SET_GPR_U32(ctx, 31, 0x1D9294u);
    ctx->pc = 0x1D9290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D928Cu;
    // 0x1d9290: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D928Cu, 0x1D9294u)) {
        return;
    }
    ctx->pc = 0x1D9294u;
label_1d9294:
    // 0x1d9294: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d9294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d9298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d929c: 0x248489e0  addiu       $a0, $a0, -0x7620
    ctx->pc = 0x1d929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937056));
    // 0x1d92a0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1D92A0u;
    SET_GPR_U32(ctx, 31, 0x1D92A8u);
    ctx->pc = 0x1D92A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92A0u;
    // 0x1d92a4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D92A0u, 0x1D92A8u)) {
        return;
    }
    ctx->pc = 0x1D92A8u;
label_1d92a8:
    // 0x1d92a8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d92ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d92acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92b0: 0x24848c68  addiu       $a0, $a0, -0x7398
    ctx->pc = 0x1d92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937704));
    // 0x1d92b4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1D92B4u;
    SET_GPR_U32(ctx, 31, 0x1D92BCu);
    ctx->pc = 0x1D92B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92B4u;
    // 0x1d92b8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D92B4u, 0x1D92BCu)) {
        return;
    }
    ctx->pc = 0x1D92BCu;
label_1d92bc:
    // 0x1d92bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d92bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d92c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d92c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d92c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92c8: 0xc0bad8c  jal         func_2EB630
    ctx->pc = 0x1D92C8u;
    SET_GPR_U32(ctx, 31, 0x1D92D0u);
    ctx->pc = 0x1D92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92C8u;
    // 0x1d92cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB630u, 0x1D92C8u, 0x1D92D0u)) {
        return;
    }
    ctx->pc = 0x1D92D0u;
label_1d92d0:
    // 0x1d92d0: 0xc09d29c  jal         func_274A70
    ctx->pc = 0x1D92D0u;
    SET_GPR_U32(ctx, 31, 0x1D92D8u);
    ctx->pc = 0x1D92D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92D0u;
    // 0x1d92d4: 0xae028a64  sw          $v0, -0x759C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x274A70u, 0x1D92D0u, 0x1D92D8u)) {
        return;
    }
    ctx->pc = 0x1D92D8u;
label_1d92d8:
    // 0x1d92d8: 0xc0badf2  jal         func_2EB7C8
    ctx->pc = 0x1D92D8u;
    SET_GPR_U32(ctx, 31, 0x1D92E0u);
    ctx->pc = 0x1D92DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92D8u;
    // 0x1d92dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB7C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB7C8u, 0x1D92D8u, 0x1D92E0u)) {
        return;
    }
    ctx->pc = 0x1D92E0u;
label_1d92e0:
    // 0x1d92e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d92e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d92e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92e8: 0xc0b8b40  jal         func_2E2D00
    ctx->pc = 0x1D92E8u;
    SET_GPR_U32(ctx, 31, 0x1D92F0u);
    ctx->pc = 0x1D92ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92E8u;
    // 0x1d92ec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E2D00u, 0x1D92E8u, 0x1D92F0u)) {
        return;
    }
    ctx->pc = 0x1D92F0u;
label_1d92f0:
    // 0x1d92f0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d92f4: 0x8e048a64  lw          $a0, -0x759C($s0)
    ctx->pc = 0x1d92f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937188)));
    // 0x1d92f8: 0xac628a60  sw          $v0, -0x75A0($v1)
    ctx->pc = 0x1d92f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8A60u, _value); } while (0);
    // 0x1d92fc: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x1d92fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x1d9300: 0x261080e0  addiu       $s0, $s0, -0x7F20
    ctx->pc = 0x1d9300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934752));
    // 0x1d9304: 0xac821418  sw          $v0, 0x1418($a0)
    ctx->pc = 0x1d9304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5144), GPR_U32(ctx, 2));
    // 0x1d9308: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x1D9308u;
    SET_GPR_U32(ctx, 31, 0x1D9310u);
    ctx->pc = 0x1D930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9308u;
    // 0x1d930c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x1D9308u, 0x1D9310u)) {
        return;
    }
    ctx->pc = 0x1D9310u;
label_1d9310:
    // 0x1d9310: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x1d9310u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x1d9314: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1d9314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d931c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d931cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9320: 0x35290804  ori         $t1, $t1, 0x804
    ctx->pc = 0x1d9320u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2052);
    // 0x1d9324: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d9324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d9328: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x1D9328u;
    SET_GPR_U32(ctx, 31, 0x1D9330u);
    ctx->pc = 0x1D932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9328u;
    // 0x1d932c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x1D9328u, 0x1D9330u)) {
        return;
    }
    ctx->pc = 0x1D9330u;
label_1d9330:
    // 0x1d9330: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x1d9334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9338: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x1D9338u;
    SET_GPR_U32(ctx, 31, 0x1D9340u);
    ctx->pc = 0x1D933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9338u;
    // 0x1d933c: 0x34a50804  ori         $a1, $a1, 0x804 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2052);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x1D9338u, 0x1D9340u)) {
        return;
    }
    ctx->pc = 0x1D9340u;
label_1d9340:
    // 0x1d9340: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d9340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d934c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D934Cu;
        // 0x1d9350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9354u;
    // 0x1d9354: 0x0  nop
    ctx->pc = 0x1d9354u;
    // NOP
    ctx->pc = 0x1d9358u;
}
