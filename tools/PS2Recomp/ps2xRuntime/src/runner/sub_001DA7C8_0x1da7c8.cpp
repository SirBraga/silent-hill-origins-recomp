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

// Function: sub_001DA7C8
// Address: 0x1da7c8 - 0x1da868
void sub_001DA7C8_0x1da7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA7C8_0x1da7c8");
#endif

    switch (ctx->pc) {
        case 0x1da7f8u: goto label_1da7f8;
        case 0x1da80cu: goto label_1da80c;
        case 0x1da818u: goto label_1da818;
        case 0x1da820u: goto label_1da820;
        case 0x1da834u: goto label_1da834;
        case 0x1da83cu: goto label_1da83c;
        case 0x1da84cu: goto label_1da84c;
        case 0x1da854u: goto label_1da854;
        default: break;
    }

    ctx->pc = 0x1da7c8u;

    // 0x1da7c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da7cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da7d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1da7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1da7dc: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1da7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1da7e0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA7E0u;
    {
        const bool branch_taken_0x1da7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7E0u;
        // 0x1da7e4: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7e0) {
            ctx->pc = 0x1DA820u;
            goto label_1da820;
        }
    }
    ctx->pc = 0x1DA7E8u;
    // 0x1da7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7ec: 0x24a5aa88  addiu       $a1, $a1, -0x5578
    ctx->pc = 0x1da7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945416));
    // 0x1da7f0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1DA7F0u;
    SET_GPR_U32(ctx, 31, 0x1DA7F8u);
    ctx->pc = 0x1DA7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7F0u;
    // 0x1da7f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x1DA7F0u, 0x1DA7F8u)) {
        return;
    }
    ctx->pc = 0x1DA7F8u;
label_1da7f8:
    // 0x1da7f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1da7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1da7fc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA7FCu;
    {
        const bool branch_taken_0x1da7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da7fc) {
            ctx->pc = 0x1DA800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA7FCu;
            // 0x1da800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA810u;
            goto label_1da810;
        }
    }
    ctx->pc = 0x1DA804u;
    // 0x1da804: 0xc08999a  jal         func_226668
    ctx->pc = 0x1DA804u;
    SET_GPR_U32(ctx, 31, 0x1DA80Cu);
    ctx->pc = 0x1DA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA804u;
    // 0x1da808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226668u, 0x1DA804u, 0x1DA80Cu)) {
        return;
    }
    ctx->pc = 0x1DA80Cu;
label_1da80c:
    // 0x1da80c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da810:
    // 0x1da810: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x1DA810u;
    SET_GPR_U32(ctx, 31, 0x1DA818u);
    ctx->pc = 0x1DA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA810u;
    // 0x1da814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x1DA810u, 0x1DA818u)) {
        return;
    }
    ctx->pc = 0x1DA818u;
label_1da818:
    // 0x1da818: 0xc076a96  jal         func_1DAA58
    ctx->pc = 0x1DA818u;
    SET_GPR_U32(ctx, 31, 0x1DA820u);
    ctx->pc = 0x1DA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA818u;
    // 0x1da81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAA58u, 0x1DA818u, 0x1DA820u)) {
        return;
    }
    ctx->pc = 0x1DA820u;
label_1da820:
    // 0x1da820: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x1da820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1da824: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA824u;
    {
        const bool branch_taken_0x1da824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da824) {
            ctx->pc = 0x1DA834u;
            goto label_1da834;
        }
    }
    ctx->pc = 0x1DA82Cu;
    // 0x1da82c: 0xc09562e  jal         func_2558B8
    ctx->pc = 0x1DA82Cu;
    SET_GPR_U32(ctx, 31, 0x1DA834u);
    ctx->pc = 0x1DA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA82Cu;
    // 0x1da830: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2558B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2558B8u, 0x1DA82Cu, 0x1DA834u)) {
        return;
    }
    ctx->pc = 0x1DA834u;
label_1da834:
    // 0x1da834: 0xc097956  jal         func_25E558
    ctx->pc = 0x1DA834u;
    SET_GPR_U32(ctx, 31, 0x1DA83Cu);
    ctx->pc = 0x1DA838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA834u;
    // 0x1da838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E558u, 0x1DA834u, 0x1DA83Cu)) {
        return;
    }
    ctx->pc = 0x1DA83Cu;
label_1da83c:
    // 0x1da83c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA83Cu;
    {
        const bool branch_taken_0x1da83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA83Cu;
        // 0x1da840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da83c) {
            ctx->pc = 0x1DA84Cu;
            goto label_1da84c;
        }
    }
    ctx->pc = 0x1DA844u;
    // 0x1da844: 0xc09793e  jal         func_25E4F8
    ctx->pc = 0x1DA844u;
    SET_GPR_U32(ctx, 31, 0x1DA84Cu);
    ctx->pc = 0x1DA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA844u;
    // 0x1da848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E4F8u, 0x1DA844u, 0x1DA84Cu)) {
        return;
    }
    ctx->pc = 0x1DA84Cu;
label_1da84c:
    // 0x1da84c: 0xc095534  jal         func_2554D0
    ctx->pc = 0x1DA84Cu;
    SET_GPR_U32(ctx, 31, 0x1DA854u);
    ctx->pc = 0x1DA850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA84Cu;
    // 0x1da850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x1DA84Cu, 0x1DA854u)) {
        return;
    }
    ctx->pc = 0x1DA854u;
label_1da854:
    // 0x1da854: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1da854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da860: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA860u;
        // 0x1da864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA868u;
}
