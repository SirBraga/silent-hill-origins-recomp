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

// Function: sub_00289420
// Address: 0x289420 - 0x2894f0
void sub_00289420_0x289420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289420_0x289420");
#endif

    switch (ctx->pc) {
        case 0x289430u: goto label_289430;
        case 0x28948cu: goto label_28948c;
        case 0x28949cu: goto label_28949c;
        case 0x2894acu: goto label_2894ac;
        case 0x2894bcu: goto label_2894bc;
        case 0x2894ccu: goto label_2894cc;
        case 0x2894dcu: goto label_2894dc;
        default: break;
    }

    ctx->pc = 0x289420u;

    // 0x289420: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x289420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289424: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x289424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x289428: 0x3e00008  jr          $ra
    ctx->pc = 0x289428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289428u;
        // 0x28942c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289430u;
label_289430:
    // 0x289430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x289430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x289434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x289434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x289438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28943c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28943cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289440: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x289440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289444: 0x16300003  bne         $s1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x289444u;
    {
        const bool branch_taken_0x289444 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x289448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289444u;
        // 0x289448: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289444) {
            ctx->pc = 0x289454u;
            goto label_289454;
        }
    }
    ctx->pc = 0x28944Cu;
    // 0x28944c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28944Cu;
    {
        const bool branch_taken_0x28944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28944Cu;
        // 0x289450: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28944c) {
            ctx->pc = 0x2894DCu;
            goto label_2894dc;
        }
    }
    ctx->pc = 0x289454u;
label_289454:
    // 0x289454: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x289454u;
    {
        const bool branch_taken_0x289454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x289454) {
            ctx->pc = 0x2894C4u;
            goto label_2894c4;
        }
    }
    ctx->pc = 0x28945Cu;
    // 0x28945c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289460: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x289460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x289464: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x289464u;
    {
        const bool branch_taken_0x289464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289464u;
        // 0x289468: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289464) {
            ctx->pc = 0x2894D0u;
            goto label_2894d0;
        }
    }
    ctx->pc = 0x28946Cu;
    // 0x28946c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289470: 0x2442cd80  addiu       $v0, $v0, -0x3280
    ctx->pc = 0x289470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954368));
    // 0x289474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x289474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x289478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28947c: 0x800008  jr          $a0
    ctx->pc = 0x28947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289484u: goto label_289484;
            case 0x289494u: goto label_289494;
            case 0x2894A4u: goto label_2894a4;
            case 0x2894B4u: goto label_2894b4;
            case 0x2894D0u: goto label_2894d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28947Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289484u;
label_289484:
    // 0x289484: 0xc0a2ddc  jal         func_28B770
    ctx->pc = 0x289484u;
    SET_GPR_U32(ctx, 31, 0x28948Cu);
    ctx->pc = 0x289488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289484u;
    // 0x289488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B770u, 0x289484u, 0x28948Cu)) {
        return;
    }
    ctx->pc = 0x28948Cu;
label_28948c:
    // 0x28948c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28948Cu;
    {
        const bool branch_taken_0x28948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28948Cu;
        // 0x289490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28948c) {
            ctx->pc = 0x2894D4u;
            goto label_2894d4;
        }
    }
    ctx->pc = 0x289494u;
label_289494:
    // 0x289494: 0xc0a34ac  jal         func_28D2B0
    ctx->pc = 0x289494u;
    SET_GPR_U32(ctx, 31, 0x28949Cu);
    ctx->pc = 0x289498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289494u;
    // 0x289498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D2B0u, 0x289494u, 0x28949Cu)) {
        return;
    }
    ctx->pc = 0x28949Cu;
label_28949c:
    // 0x28949c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28949Cu;
    {
        const bool branch_taken_0x28949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2894A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28949Cu;
        // 0x2894a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28949c) {
            ctx->pc = 0x2894D4u;
            goto label_2894d4;
        }
    }
    ctx->pc = 0x2894A4u;
label_2894a4:
    // 0x2894a4: 0xc0a26b4  jal         func_289AD0
    ctx->pc = 0x2894A4u;
    SET_GPR_U32(ctx, 31, 0x2894ACu);
    ctx->pc = 0x2894A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894A4u;
    // 0x2894a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289AD0u, 0x2894A4u, 0x2894ACu)) {
        return;
    }
    ctx->pc = 0x2894ACu;
label_2894ac:
    // 0x2894ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2894ACu;
    {
        const bool branch_taken_0x2894ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2894B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894ACu;
        // 0x2894b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894ac) {
            ctx->pc = 0x2894D4u;
            goto label_2894d4;
        }
    }
    ctx->pc = 0x2894B4u;
label_2894b4:
    // 0x2894b4: 0xc0a439c  jal         func_290E70
    ctx->pc = 0x2894B4u;
    SET_GPR_U32(ctx, 31, 0x2894BCu);
    ctx->pc = 0x2894B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894B4u;
    // 0x2894b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290E70u, 0x2894B4u, 0x2894BCu)) {
        return;
    }
    ctx->pc = 0x2894BCu;
label_2894bc:
    // 0x2894bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2894BCu;
    {
        const bool branch_taken_0x2894bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2894C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894BCu;
        // 0x2894c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894bc) {
            ctx->pc = 0x2894D4u;
            goto label_2894d4;
        }
    }
    ctx->pc = 0x2894C4u;
label_2894c4:
    // 0x2894c4: 0xc0a253c  jal         func_2894F0
    ctx->pc = 0x2894C4u;
    SET_GPR_U32(ctx, 31, 0x2894CCu);
    ctx->pc = 0x2894F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2894F0u, 0x2894C4u, 0x2894CCu)) {
        return;
    }
    ctx->pc = 0x2894CCu;
label_2894cc:
    // 0x2894cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2894ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2894d0:
    // 0x2894d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2894d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2894d4:
    // 0x2894d4: 0xc0a24a6  jal         func_289298
    ctx->pc = 0x2894D4u;
    SET_GPR_U32(ctx, 31, 0x2894DCu);
    ctx->pc = 0x2894D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894D4u;
    // 0x2894d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289298u, 0x2894D4u, 0x2894DCu)) {
        return;
    }
    ctx->pc = 0x2894DCu;
label_2894dc:
    // 0x2894dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2894dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2894e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2894e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2894e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2894e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2894e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2894E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2894ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894E8u;
        // 0x2894ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2894E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2894F0u;
}
