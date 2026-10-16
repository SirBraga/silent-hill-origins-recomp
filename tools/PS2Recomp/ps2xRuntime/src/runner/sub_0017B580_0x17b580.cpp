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

// Function: sub_0017B580
// Address: 0x17b580 - 0x17b5f0
void sub_0017B580_0x17b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B580_0x17b580");
#endif

    switch (ctx->pc) {
        case 0x17b59cu: goto label_17b59c;
        case 0x17b5c4u: goto label_17b5c4;
        case 0x17b5ccu: goto label_17b5cc;
        case 0x17b5d8u: goto label_17b5d8;
        default: break;
    }

    ctx->pc = 0x17b580u;

    // 0x17b580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b588: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b58c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b594: 0xc08114c  jal         func_204530
    ctx->pc = 0x17B594u;
    SET_GPR_U32(ctx, 31, 0x17B59Cu);
    ctx->pc = 0x17B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B594u;
    // 0x17b598: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x17B594u, 0x17B59Cu)) {
        return;
    }
    ctx->pc = 0x17B59Cu;
label_17b59c:
    // 0x17b59c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B59Cu;
    {
        const bool branch_taken_0x17b59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b59c) {
            ctx->pc = 0x17B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B59Cu;
            // 0x17b5a0: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B5ACu;
            goto label_17b5ac;
        }
    }
    ctx->pc = 0x17B5A4u;
    // 0x17b5a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17B5A4u;
    {
        const bool branch_taken_0x17b5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5A4u;
        // 0x17b5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5a4) {
            ctx->pc = 0x17B5DCu;
            goto label_17b5dc;
        }
    }
    ctx->pc = 0x17B5ACu;
label_17b5ac:
    // 0x17b5ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17b5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5bc: 0xc080e90  jal         func_203A40
    ctx->pc = 0x17B5BCu;
    SET_GPR_U32(ctx, 31, 0x17B5C4u);
    ctx->pc = 0x17B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5BCu;
    // 0x17b5c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203A40u, 0x17B5BCu, 0x17B5C4u)) {
        return;
    }
    ctx->pc = 0x17B5C4u;
label_17b5c4:
    // 0x17b5c4: 0xc075d76  jal         func_1D75D8
    ctx->pc = 0x17B5C4u;
    SET_GPR_U32(ctx, 31, 0x17B5CCu);
    ctx->pc = 0x17B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5C4u;
    // 0x17b5c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D75D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75D8u, 0x17B5C4u, 0x17B5CCu)) {
        return;
    }
    ctx->pc = 0x17B5CCu;
label_17b5cc:
    // 0x17b5cc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x17b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17b5d0: 0xc05de0a  jal         func_177828
    ctx->pc = 0x17B5D0u;
    SET_GPR_U32(ctx, 31, 0x17B5D8u);
    ctx->pc = 0x17B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5D0u;
    // 0x17b5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x177828u, 0x17B5D0u, 0x17B5D8u)) {
        return;
    }
    ctx->pc = 0x17B5D8u;
label_17b5d8:
    // 0x17b5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b5dc:
    // 0x17b5dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5E8u;
        // 0x17b5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B5F0u;
}
