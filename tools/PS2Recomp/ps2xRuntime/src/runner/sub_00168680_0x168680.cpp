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

// Function: sub_00168680
// Address: 0x168680 - 0x1686c8
void sub_00168680_0x168680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168680_0x168680");
#endif

    switch (ctx->pc) {
        case 0x16869cu: goto label_16869c;
        case 0x1686a8u: goto label_1686a8;
        default: break;
    }

    ctx->pc = 0x168680u;

    // 0x168680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168684: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x168684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168688: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16868c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16868cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168694: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x168694u;
    SET_GPR_U32(ctx, 31, 0x16869Cu);
    ctx->pc = 0x168698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168694u;
    // 0x168698: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x168694u, 0x16869Cu)) {
        return;
    }
    ctx->pc = 0x16869Cu;
label_16869c:
    // 0x16869c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16869cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686a0: 0xc05a1b2  jal         func_1686C8
    ctx->pc = 0x1686A0u;
    SET_GPR_U32(ctx, 31, 0x1686A8u);
    ctx->pc = 0x1686A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1686A0u;
    // 0x1686a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1686C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1686C8u, 0x1686A0u, 0x1686A8u)) {
        return;
    }
    ctx->pc = 0x1686A8u;
label_1686a8:
    // 0x1686a8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1686a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1686ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1686acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1686b0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1686b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1686b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1686b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1686b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1686b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1686BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1686C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686BCu;
        // 0x1686c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1686BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1686C4u;
    // 0x1686c4: 0x0  nop
    ctx->pc = 0x1686c4u;
    // NOP
    ctx->pc = 0x1686c8u;
}
