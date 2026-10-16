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

// Function: sub_00161420
// Address: 0x161420 - 0x161468
void sub_00161420_0x161420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161420_0x161420");
#endif

    switch (ctx->pc) {
        case 0x16143cu: goto label_16143c;
        case 0x161448u: goto label_161448;
        default: break;
    }

    ctx->pc = 0x161420u;

    // 0x161420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x161424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16142c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16142cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161434: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x161434u;
    SET_GPR_U32(ctx, 31, 0x16143Cu);
    ctx->pc = 0x161438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161434u;
    // 0x161438: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x161434u, 0x16143Cu)) {
        return;
    }
    ctx->pc = 0x16143Cu;
label_16143c:
    // 0x16143c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16143cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161440: 0xc05825e  jal         func_160978
    ctx->pc = 0x161440u;
    SET_GPR_U32(ctx, 31, 0x161448u);
    ctx->pc = 0x161444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161440u;
    // 0x161444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x160978u, 0x161440u, 0x161448u)) {
        return;
    }
    ctx->pc = 0x161448u;
label_161448:
    // 0x161448: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x161448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16144c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16144cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161450: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x161450u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x161454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161458: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16145c: 0x3e00008  jr          $ra
    ctx->pc = 0x16145Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16145Cu;
        // 0x161460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16145Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161464u;
    // 0x161464: 0x0  nop
    ctx->pc = 0x161464u;
    // NOP
    ctx->pc = 0x161468u;
}
