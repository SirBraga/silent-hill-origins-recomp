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

// Function: sub_001743A8
// Address: 0x1743a8 - 0x174400
void sub_001743A8_0x1743a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001743A8_0x1743a8");
#endif

    switch (ctx->pc) {
        case 0x1743c4u: goto label_1743c4;
        case 0x1743e8u: goto label_1743e8;
        default: break;
    }

    ctx->pc = 0x1743a8u;

    // 0x1743a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1743a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1743ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1743acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1743b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1743b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1743b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1743b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1743b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1743bc: 0xc0941b2  jal         func_2506C8
    ctx->pc = 0x1743BCu;
    SET_GPR_U32(ctx, 31, 0x1743C4u);
    ctx->pc = 0x1743C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743BCu;
    // 0x1743c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2506C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2506C8u, 0x1743BCu, 0x1743C4u)) {
        return;
    }
    ctx->pc = 0x1743C4u;
label_1743c4:
    // 0x1743c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1743c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1743c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1743C8u;
    {
        const bool branch_taken_0x1743c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1743CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743C8u;
        // 0x1743cc: 0x3c050017  lui         $a1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743c8) {
            ctx->pc = 0x1743D8u;
            goto label_1743d8;
        }
    }
    ctx->pc = 0x1743D0u;
    // 0x1743d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1743D0u;
    {
        const bool branch_taken_0x1743d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1743D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743D0u;
        // 0x1743d4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743d0) {
            ctx->pc = 0x1743E8u;
            goto label_1743e8;
        }
    }
    ctx->pc = 0x1743D8u;
label_1743d8:
    // 0x1743d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1743d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743dc: 0x24a543a8  addiu       $a1, $a1, 0x43A8
    ctx->pc = 0x1743dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17320));
    // 0x1743e0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1743E0u;
    SET_GPR_U32(ctx, 31, 0x1743E8u);
    ctx->pc = 0x1743E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743E0u;
    // 0x1743e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x1743E0u, 0x1743E8u)) {
        return;
    }
    ctx->pc = 0x1743E8u;
label_1743e8:
    // 0x1743e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1743e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1743ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1743f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1743f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1743f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1743f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1743f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1743F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1743FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743F8u;
        // 0x1743fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1743F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174400u;
}
