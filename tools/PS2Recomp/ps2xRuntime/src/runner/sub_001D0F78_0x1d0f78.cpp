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

// Function: sub_001D0F78
// Address: 0x1d0f78 - 0x1d0fe0
void sub_001D0F78_0x1d0f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0F78_0x1d0f78");
#endif

    switch (ctx->pc) {
        case 0x1d0f94u: goto label_1d0f94;
        case 0x1d0fc4u: goto label_1d0fc4;
        case 0x1d0fccu: goto label_1d0fcc;
        default: break;
    }

    ctx->pc = 0x1d0f78u;

    // 0x1d0f78: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0f7c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0f80: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1d0f80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x1d0f84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0f8c: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1D0F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F94u);
    ctx->pc = 0x1D0F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F8Cu;
    // 0x1d0f90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1D0F8Cu, 0x1D0F94u)) {
        return;
    }
    ctx->pc = 0x1D0F94u;
label_1d0f94:
    // 0x1d0f94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1d0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1d0f98: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d0f9c: 0x8c6343b8  lw          $v1, 0x43B8($v1)
    ctx->pc = 0x1d0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1d0fa0: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d0fa4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0FA4u;
    {
        const bool branch_taken_0x1d0fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0fa4) {
            ctx->pc = 0x1D0FC4u;
            goto label_1d0fc4;
        }
    }
    ctx->pc = 0x1D0FACu;
    // 0x1d0fac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0fb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0FB0u;
    {
        const bool branch_taken_0x1d0fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FB0u;
        // 0x1d0fb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fb0) {
            ctx->pc = 0x1D0FC4u;
            goto label_1d0fc4;
        }
    }
    ctx->pc = 0x1D0FB8u;
    // 0x1d0fb8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1d0fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1d0fbc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0FBCu;
    SET_GPR_U32(ctx, 31, 0x1D0FC4u);
    ctx->pc = 0x1D0FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FBCu;
    // 0x1d0fc0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0FBCu, 0x1D0FC4u)) {
        return;
    }
    ctx->pc = 0x1D0FC4u;
label_1d0fc4:
    // 0x1d0fc4: 0xc074406  jal         func_1D1018
    ctx->pc = 0x1D0FC4u;
    SET_GPR_U32(ctx, 31, 0x1D0FCCu);
    ctx->pc = 0x1D1018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1018u, 0x1D0FC4u, 0x1D0FCCu)) {
        return;
    }
    ctx->pc = 0x1D0FCCu;
label_1d0fcc:
    // 0x1d0fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0fd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FD4u;
        // 0x1d0fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0FDCu;
    // 0x1d0fdc: 0x0  nop
    ctx->pc = 0x1d0fdcu;
    // NOP
    ctx->pc = 0x1d0fe0u;
}
