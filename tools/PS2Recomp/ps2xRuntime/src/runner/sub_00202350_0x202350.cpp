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

// Function: sub_00202350
// Address: 0x202350 - 0x2023c0
void sub_00202350_0x202350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202350_0x202350");
#endif

    switch (ctx->pc) {
        case 0x20237cu: goto label_20237c;
        case 0x20239cu: goto label_20239c;
        case 0x2023acu: goto label_2023ac;
        default: break;
    }

    ctx->pc = 0x202350u;

    // 0x202350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202354: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20235c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20235Cu;
    {
        const bool branch_taken_0x20235c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x202360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20235Cu;
        // 0x202360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20235c) {
            ctx->pc = 0x2023ACu;
            goto label_2023ac;
        }
    }
    ctx->pc = 0x202364u;
    // 0x202364: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x202368: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x20236c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20236Cu;
    {
        const bool branch_taken_0x20236c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20236Cu;
        // 0x202370: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20236c) {
            ctx->pc = 0x202388u;
            goto label_202388;
        }
    }
    ctx->pc = 0x202374u;
    // 0x202374: 0xc080ad8  jal         func_202B60
    ctx->pc = 0x202374u;
    SET_GPR_U32(ctx, 31, 0x20237Cu);
    ctx->pc = 0x202378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202374u;
    // 0x202378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202B60u, 0x202374u, 0x20237Cu)) {
        return;
    }
    ctx->pc = 0x20237Cu;
label_20237c:
    // 0x20237c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20237Cu;
    {
        const bool branch_taken_0x20237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20237c) {
            ctx->pc = 0x202380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20237Cu;
            // 0x202380: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2023B0u;
            goto label_2023b0;
        }
    }
    ctx->pc = 0x202384u;
    // 0x202384: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_202388:
    // 0x202388: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x20238c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20238Cu;
    {
        const bool branch_taken_0x20238c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20238c) {
            ctx->pc = 0x2023A4u;
            goto label_2023a4;
        }
    }
    ctx->pc = 0x202394u;
    // 0x202394: 0xc080c5c  jal         func_203170
    ctx->pc = 0x202394u;
    SET_GPR_U32(ctx, 31, 0x20239Cu);
    ctx->pc = 0x202398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202394u;
    // 0x202398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203170u, 0x202394u, 0x20239Cu)) {
        return;
    }
    ctx->pc = 0x20239Cu;
label_20239c:
    // 0x20239c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20239Cu;
    {
        const bool branch_taken_0x20239c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20239c) {
            ctx->pc = 0x2023A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20239Cu;
            // 0x2023a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2023B0u;
            goto label_2023b0;
        }
    }
    ctx->pc = 0x2023A4u;
label_2023a4:
    // 0x2023a4: 0xc0c5486  jal         func_315218
    ctx->pc = 0x2023A4u;
    SET_GPR_U32(ctx, 31, 0x2023ACu);
    ctx->pc = 0x2023A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023A4u;
    // 0x2023a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x2023A4u, 0x2023ACu)) {
        return;
    }
    ctx->pc = 0x2023ACu;
label_2023ac:
    // 0x2023ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2023acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2023b0:
    // 0x2023b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2023b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2023b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2023B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023B4u;
        // 0x2023b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2023B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2023BCu;
    // 0x2023bc: 0x0  nop
    ctx->pc = 0x2023bcu;
    // NOP
    ctx->pc = 0x2023c0u;
}
