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

// Function: sub_001979A8
// Address: 0x1979a8 - 0x197a10
void sub_001979A8_0x1979a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001979A8_0x1979a8");
#endif

    switch (ctx->pc) {
        case 0x1979d4u: goto label_1979d4;
        case 0x1979e4u: goto label_1979e4;
        default: break;
    }

    ctx->pc = 0x1979a8u;

    // 0x1979a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1979a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1979ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1979acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1979b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1979b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1979b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1979b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1979b8: 0x8c8209d8  lw          $v0, 0x9D8($a0)
    ctx->pc = 0x1979b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2520)));
    // 0x1979bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1979BCu;
    {
        const bool branch_taken_0x1979bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979BCu;
        // 0x1979c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979bc) {
            ctx->pc = 0x1979F4u;
            goto label_1979f4;
        }
    }
    ctx->pc = 0x1979C4u;
    // 0x1979c4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1979C4u;
    {
        const bool branch_taken_0x1979c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979C4u;
        // 0x1979c8: 0x2490000c  addiu       $s0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979c4) {
            ctx->pc = 0x1979ECu;
            goto label_1979ec;
        }
    }
    ctx->pc = 0x1979CCu;
    // 0x1979cc: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1979CCu;
    SET_GPR_U32(ctx, 31, 0x1979D4u);
    ctx->pc = 0x1979D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979CCu;
    // 0x1979d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1979CCu, 0x1979D4u)) {
        return;
    }
    ctx->pc = 0x1979D4u;
label_1979d4:
    // 0x1979d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1979d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1979d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979dc: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x1979DCu;
    SET_GPR_U32(ctx, 31, 0x1979E4u);
    ctx->pc = 0x1979E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979DCu;
    // 0x1979e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x1979DCu, 0x1979E4u)) {
        return;
    }
    ctx->pc = 0x1979E4u;
label_1979e4:
    // 0x1979e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1979E4u;
    {
        const bool branch_taken_0x1979e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1979E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979E4u;
        // 0x1979e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979e4) {
            ctx->pc = 0x1979F8u;
            goto label_1979f8;
        }
    }
    ctx->pc = 0x1979ECu;
label_1979ec:
    // 0x1979ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1979ECu;
    {
        const bool branch_taken_0x1979ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979ECu;
        // 0x1979f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979ec) {
            ctx->pc = 0x1979F8u;
            goto label_1979f8;
        }
    }
    ctx->pc = 0x1979F4u;
label_1979f4:
    // 0x1979f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1979f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1979f8:
    // 0x1979f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1979f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1979fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1979fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197a04: 0x3e00008  jr          $ra
    ctx->pc = 0x197A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A04u;
        // 0x197a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197A0Cu;
    // 0x197a0c: 0x0  nop
    ctx->pc = 0x197a0cu;
    // NOP
    ctx->pc = 0x197a10u;
}
