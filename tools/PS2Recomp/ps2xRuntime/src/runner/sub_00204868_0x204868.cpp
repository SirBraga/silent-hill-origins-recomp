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

// Function: sub_00204868
// Address: 0x204868 - 0x2048c0
void sub_00204868_0x204868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204868_0x204868");
#endif

    switch (ctx->pc) {
        case 0x204888u: goto label_204888;
        case 0x20489cu: goto label_20489c;
        default: break;
    }

    ctx->pc = 0x204868u;

    // 0x204868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20486c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20486cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x204870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20487c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20487cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204880: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204880u;
    SET_GPR_U32(ctx, 31, 0x204888u);
    ctx->pc = 0x204884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204880u;
    // 0x204884: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204880u, 0x204888u)) {
        return;
    }
    ctx->pc = 0x204888u;
label_204888:
    // 0x204888: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x204888u;
    {
        const bool branch_taken_0x204888 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204888u;
        // 0x20488c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204888) {
            ctx->pc = 0x2048A0u;
            goto label_2048a0;
        }
    }
    ctx->pc = 0x204890u;
    // 0x204890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204894: 0xc081b56  jal         func_206D58
    ctx->pc = 0x204894u;
    SET_GPR_U32(ctx, 31, 0x20489Cu);
    ctx->pc = 0x204898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204894u;
    // 0x204898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x204894u, 0x20489Cu)) {
        return;
    }
    ctx->pc = 0x20489Cu;
label_20489c:
    // 0x20489c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2048a0:
    // 0x2048a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2048a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2048a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2048a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2048a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2048a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2048ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2048ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2048B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048ACu;
        // 0x2048b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2048ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2048B4u;
    // 0x2048b4: 0x0  nop
    ctx->pc = 0x2048b4u;
    // NOP
    // 0x2048b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2048b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2048bc: 0x0  nop
    ctx->pc = 0x2048bcu;
    // NOP
    ctx->pc = 0x2048c0u;
}
