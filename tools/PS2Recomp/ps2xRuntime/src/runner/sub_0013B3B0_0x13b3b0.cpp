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

// Function: sub_0013B3B0
// Address: 0x13b3b0 - 0x13b3f8
void sub_0013B3B0_0x13b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B3B0_0x13b3b0");
#endif

    switch (ctx->pc) {
        case 0x13b3e8u: goto label_13b3e8;
        default: break;
    }

    ctx->pc = 0x13b3b0u;

    // 0x13b3b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13b3b4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x13b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x13b3b8: 0x8c4445f8  lw          $a0, 0x45F8($v0)
    ctx->pc = 0x13b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B45F8u));
    // 0x13b3bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b3c0: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x13b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x13b3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13b3c8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x13b3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x13b3cc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B3CCu;
    {
        const bool branch_taken_0x13b3cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3CCu;
        // 0x13b3d0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3cc) {
            ctx->pc = 0x13B3E8u;
            goto label_13b3e8;
        }
    }
    ctx->pc = 0x13B3D4u;
    // 0x13b3d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b3d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B3D8u;
    {
        const bool branch_taken_0x13b3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3D8u;
        // 0x13b3dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3d8) {
            ctx->pc = 0x13B3ECu;
            goto label_13b3ec;
        }
    }
    ctx->pc = 0x13B3E0u;
    // 0x13b3e0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x13B3E0u;
    SET_GPR_U32(ctx, 31, 0x13B3E8u);
    ctx->pc = 0x13B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3E0u;
    // 0x13b3e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x13B3E0u, 0x13B3E8u)) {
        return;
    }
    ctx->pc = 0x13B3E8u;
label_13b3e8:
    // 0x13b3e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13b3ec:
    // 0x13b3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13B3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3ECu;
        // 0x13b3f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B3F4u;
    // 0x13b3f4: 0x0  nop
    ctx->pc = 0x13b3f4u;
    // NOP
    ctx->pc = 0x13b3f8u;
}
