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

// Function: sub_001D9448
// Address: 0x1d9448 - 0x1d94d0
void sub_001D9448_0x1d9448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9448_0x1d9448");
#endif

    switch (ctx->pc) {
        case 0x1d946cu: goto label_1d946c;
        case 0x1d9474u: goto label_1d9474;
        case 0x1d947cu: goto label_1d947c;
        case 0x1d9488u: goto label_1d9488;
        case 0x1d949cu: goto label_1d949c;
        case 0x1d94b4u: goto label_1d94b4;
        default: break;
    }

    ctx->pc = 0x1d9448u;

    // 0x1d9448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d944c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d9450: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d9450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d9454: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d9454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9458: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d9458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d945c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D945Cu;
    {
        const bool branch_taken_0x1d945c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D945Cu;
        // 0x1d9460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d945c) {
            ctx->pc = 0x1D94B4u;
            goto label_1d94b4;
        }
    }
    ctx->pc = 0x1D9464u;
    // 0x1d9464: 0xc076604  jal         func_1D9810
    ctx->pc = 0x1D9464u;
    SET_GPR_U32(ctx, 31, 0x1D946Cu);
    ctx->pc = 0x1D9468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9464u;
    // 0x1d9468: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9810u, 0x1D9464u, 0x1D946Cu)) {
        return;
    }
    ctx->pc = 0x1D946Cu;
label_1d946c:
    // 0x1d946c: 0xc0b7182  jal         func_2DC608
    ctx->pc = 0x1D946Cu;
    SET_GPR_U32(ctx, 31, 0x1D9474u);
    ctx->pc = 0x2DC608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC608u, 0x1D946Cu, 0x1D9474u)) {
        return;
    }
    ctx->pc = 0x1D9474u;
label_1d9474:
    // 0x1d9474: 0xc076468  jal         func_1D91A0
    ctx->pc = 0x1D9474u;
    SET_GPR_U32(ctx, 31, 0x1D947Cu);
    ctx->pc = 0x1D91A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D91A0u, 0x1D9474u, 0x1D947Cu)) {
        return;
    }
    ctx->pc = 0x1D947Cu;
label_1d947c:
    // 0x1d947c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d9480: 0x245089e0  addiu       $s0, $v0, -0x7620
    ctx->pc = 0x1d9480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937056));
    // 0x1d9484: 0x0  nop
    ctx->pc = 0x1d9484u;
    // NOP
label_1d9488:
    // 0x1d9488: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d948c: 0x14920004  bne         $a0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D948Cu;
    {
        const bool branch_taken_0x1d948c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x1D9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D948Cu;
        // 0x1d9490: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d948c) {
            ctx->pc = 0x1D94A0u;
            goto label_1d94a0;
        }
    }
    ctx->pc = 0x1D9494u;
    // 0x1d9494: 0xc0b7404  jal         func_2DD010
    ctx->pc = 0x1D9494u;
    SET_GPR_U32(ctx, 31, 0x1D949Cu);
    ctx->pc = 0x2DD010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD010u, 0x1D9494u, 0x1D949Cu)) {
        return;
    }
    ctx->pc = 0x1D949Cu;
label_1d949c:
    // 0x1d949c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d94a0:
    // 0x1d94a0: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1d94a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d94a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D94A4u;
    {
        const bool branch_taken_0x1d94a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94A4u;
        // 0x1d94a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94a4) {
            ctx->pc = 0x1D9488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9488;
        }
    }
    ctx->pc = 0x1D94ACu;
    // 0x1d94ac: 0xc07640e  jal         func_1D9038
    ctx->pc = 0x1D94ACu;
    SET_GPR_U32(ctx, 31, 0x1D94B4u);
    ctx->pc = 0x1D9038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9038u, 0x1D94ACu, 0x1D94B4u)) {
        return;
    }
    ctx->pc = 0x1D94B4u;
label_1d94b4:
    // 0x1d94b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d94b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d94b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d94b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d94bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d94bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d94c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C4u;
        // 0x1d94c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94CCu;
    // 0x1d94cc: 0x0  nop
    ctx->pc = 0x1d94ccu;
    // NOP
    ctx->pc = 0x1d94d0u;
}
