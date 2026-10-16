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

// Function: sub_001F6168
// Address: 0x1f6168 - 0x1f61e0
void sub_001F6168_0x1f6168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6168_0x1f6168");
#endif

    switch (ctx->pc) {
        case 0x1f619cu: goto label_1f619c;
        case 0x1f61b0u: goto label_1f61b0;
        case 0x1f61c0u: goto label_1f61c0;
        default: break;
    }

    ctx->pc = 0x1f6168u;

    // 0x1f6168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f616c: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x1f616cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x1f6170: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f6170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f6174: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f6174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f617c: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1f617cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1f6180: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f6180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6184: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x1f6184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1f6188: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1f6188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f618c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1f618cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f6190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6194: 0xc09d0be  jal         func_2742F8
    ctx->pc = 0x1F6194u;
    SET_GPR_U32(ctx, 31, 0x1F619Cu);
    ctx->pc = 0x1F6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6194u;
    // 0x1f6198: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2742F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2742F8u, 0x1F6194u, 0x1F619Cu)) {
        return;
    }
    ctx->pc = 0x1F619Cu;
label_1f619c:
    // 0x1f619c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f619cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F61A0u;
    {
        const bool branch_taken_0x1f61a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61A0u;
        // 0x1f61a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61a0) {
            ctx->pc = 0x1F61C4u;
            goto label_1f61c4;
        }
    }
    ctx->pc = 0x1F61A8u;
    // 0x1f61a8: 0xc09cd58  jal         func_273560
    ctx->pc = 0x1F61A8u;
    SET_GPR_U32(ctx, 31, 0x1F61B0u);
    ctx->pc = 0x1F61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61A8u;
    // 0x1f61ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273560u, 0x1F61A8u, 0x1F61B0u)) {
        return;
    }
    ctx->pc = 0x1F61B0u;
label_1f61b0:
    // 0x1f61b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F61B0u;
    {
        const bool branch_taken_0x1f61b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61B0u;
        // 0x1f61b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61b0) {
            ctx->pc = 0x1F61C4u;
            goto label_1f61c4;
        }
    }
    ctx->pc = 0x1F61B8u;
    // 0x1f61b8: 0xc09cdac  jal         func_2736B0
    ctx->pc = 0x1F61B8u;
    SET_GPR_U32(ctx, 31, 0x1F61C0u);
    ctx->pc = 0x1F61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61B8u;
    // 0x1f61bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2736B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2736B0u, 0x1F61B8u, 0x1F61C0u)) {
        return;
    }
    ctx->pc = 0x1F61C0u;
label_1f61c0:
    // 0x1f61c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f61c4:
    // 0x1f61c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f61c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f61c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f61c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f61cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F61CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61CCu;
        // 0x1f61d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F61CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F61D4u;
    // 0x1f61d4: 0x0  nop
    ctx->pc = 0x1f61d4u;
    // NOP
    // 0x1f61d8: 0x0  nop
    ctx->pc = 0x1f61d8u;
    // NOP
    // 0x1f61dc: 0x0  nop
    ctx->pc = 0x1f61dcu;
    // NOP
    ctx->pc = 0x1f61e0u;
}
