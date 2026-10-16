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

// Function: sub_001EC668
// Address: 0x1ec668 - 0x1ec6b8
void sub_001EC668_0x1ec668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC668_0x1ec668");
#endif

    switch (ctx->pc) {
        case 0x1ec684u: goto label_1ec684;
        case 0x1ec68cu: goto label_1ec68c;
        default: break;
    }

    ctx->pc = 0x1ec668u;

    // 0x1ec668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ec674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec67c: 0xc07ab94  jal         func_1EAE50
    ctx->pc = 0x1EC67Cu;
    SET_GPR_U32(ctx, 31, 0x1EC684u);
    ctx->pc = 0x1EC680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC67Cu;
    // 0x1ec680: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAE50u, 0x1EC67Cu, 0x1EC684u)) {
        return;
    }
    ctx->pc = 0x1EC684u;
label_1ec684:
    // 0x1ec684: 0xc07ab0a  jal         func_1EAC28
    ctx->pc = 0x1EC684u;
    SET_GPR_U32(ctx, 31, 0x1EC68Cu);
    ctx->pc = 0x1EC688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC684u;
    // 0x1ec688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAC28u, 0x1EC684u, 0x1EC68Cu)) {
        return;
    }
    ctx->pc = 0x1EC68Cu;
label_1ec68c:
    // 0x1ec68c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec694: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC694u;
        // 0x1ec698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC69Cu;
    // 0x1ec69c: 0x0  nop
    ctx->pc = 0x1ec69cu;
    // NOP
    // 0x1ec6a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec6a4: 0x0  nop
    ctx->pc = 0x1ec6a4u;
    // NOP
    // 0x1ec6a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec6ac: 0x0  nop
    ctx->pc = 0x1ec6acu;
    // NOP
    // 0x1ec6b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec6b4: 0x0  nop
    ctx->pc = 0x1ec6b4u;
    // NOP
    ctx->pc = 0x1ec6b8u;
}
