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

// Function: sub_00199548
// Address: 0x199548 - 0x1995b0
void sub_00199548_0x199548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199548_0x199548");
#endif

    switch (ctx->pc) {
        case 0x199570u: goto label_199570;
        case 0x199594u: goto label_199594;
        default: break;
    }

    ctx->pc = 0x199548u;

    // 0x199548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19954c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199550: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x199550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x199554: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x199554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x199558: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x199558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19955c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x199560: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x199560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199568: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x199568u;
    SET_GPR_U32(ctx, 31, 0x199570u);
    ctx->pc = 0x19956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199568u;
    // 0x19956c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x199568u, 0x199570u)) {
        return;
    }
    ctx->pc = 0x199570u;
label_199570:
    // 0x199570: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x199570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x199574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199578: 0x8c628bcc  lw          $v0, -0x7434($v1)
    ctx->pc = 0x199578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338BCCu));
    // 0x19957c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19957cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199580: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x199580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199584: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x199584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19958c: 0xc0ab178  jal         func_2AC5E0
    ctx->pc = 0x19958Cu;
    SET_GPR_U32(ctx, 31, 0x199594u);
    ctx->pc = 0x199590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19958Cu;
    // 0x199590: 0xac628bcc  sw          $v0, -0x7434($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937548), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC5E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AC5E0u, 0x19958Cu, 0x199594u)) {
        return;
    }
    ctx->pc = 0x199594u;
label_199594:
    // 0x199594: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x199594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x199598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19959c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19959cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1995a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1995a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1995a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1995A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995A4u;
        // 0x1995a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1995A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1995ACu;
    // 0x1995ac: 0x0  nop
    ctx->pc = 0x1995acu;
    // NOP
    ctx->pc = 0x1995b0u;
}
