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

// Function: sub_00176400
// Address: 0x176400 - 0x176448
void sub_00176400_0x176400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176400_0x176400");
#endif

    switch (ctx->pc) {
        case 0x17641cu: goto label_17641c;
        case 0x176428u: goto label_176428;
        default: break;
    }

    ctx->pc = 0x176400u;

    // 0x176400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x176404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176408: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x176408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17640c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17640cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176414: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x176414u;
    SET_GPR_U32(ctx, 31, 0x17641Cu);
    ctx->pc = 0x176418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176414u;
    // 0x176418: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x176414u, 0x17641Cu)) {
        return;
    }
    ctx->pc = 0x17641Cu;
label_17641c:
    // 0x17641c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17641cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176420: 0xc05d912  jal         func_176448
    ctx->pc = 0x176420u;
    SET_GPR_U32(ctx, 31, 0x176428u);
    ctx->pc = 0x176424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176420u;
    // 0x176424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176448u, 0x176420u, 0x176428u)) {
        return;
    }
    ctx->pc = 0x176428u;
label_176428:
    // 0x176428: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x176428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17642c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17642cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176430: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x176430u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x176434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176438: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x176438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17643c: 0x3e00008  jr          $ra
    ctx->pc = 0x17643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17643Cu;
        // 0x176440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176444u;
    // 0x176444: 0x0  nop
    ctx->pc = 0x176444u;
    // NOP
    ctx->pc = 0x176448u;
}
