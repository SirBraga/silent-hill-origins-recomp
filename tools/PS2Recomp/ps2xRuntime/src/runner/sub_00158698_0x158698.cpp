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

// Function: sub_00158698
// Address: 0x158698 - 0x1586d8
void sub_00158698_0x158698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158698_0x158698");
#endif

    switch (ctx->pc) {
        case 0x1586b0u: goto label_1586b0;
        case 0x1586b8u: goto label_1586b8;
        default: break;
    }

    ctx->pc = 0x158698u;

    // 0x158698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15869c: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x1586a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1586a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1586a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1586a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1586a8: 0xc080858  jal         func_202160
    ctx->pc = 0x1586A8u;
    SET_GPR_U32(ctx, 31, 0x1586B0u);
    ctx->pc = 0x1586ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1586A8u;
    // 0x1586ac: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1586A8u, 0x1586B0u)) {
        return;
    }
    ctx->pc = 0x1586B0u;
label_1586b0:
    // 0x1586b0: 0xc055b88  jal         func_156E20
    ctx->pc = 0x1586B0u;
    SET_GPR_U32(ctx, 31, 0x1586B8u);
    ctx->pc = 0x1586B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1586B0u;
    // 0x1586b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156E20u, 0x1586B0u, 0x1586B8u)) {
        return;
    }
    ctx->pc = 0x1586B8u;
label_1586b8:
    // 0x1586b8: 0xae02861c  sw          $v0, -0x79E4($s0)
    ctx->pc = 0x1586b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936092), GPR_U32(ctx, 2));
    // 0x1586bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1586bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1586c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1586c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1586c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1586C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1586C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586C4u;
        // 0x1586c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1586C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1586CCu;
    // 0x1586cc: 0x0  nop
    ctx->pc = 0x1586ccu;
    // NOP
    // 0x1586d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1586d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1586d4: 0x0  nop
    ctx->pc = 0x1586d4u;
    // NOP
    ctx->pc = 0x1586d8u;
}
