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

// Function: sub_0017C638
// Address: 0x17c638 - 0x17c680
void sub_0017C638_0x17c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C638_0x17c638");
#endif

    switch (ctx->pc) {
        case 0x17c654u: goto label_17c654;
        case 0x17c660u: goto label_17c660;
        default: break;
    }

    ctx->pc = 0x17c638u;

    // 0x17c638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c63c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c64c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17C64Cu;
    SET_GPR_U32(ctx, 31, 0x17C654u);
    ctx->pc = 0x17C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C64Cu;
    // 0x17c650: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17C64Cu, 0x17C654u)) {
        return;
    }
    ctx->pc = 0x17C654u;
label_17c654:
    // 0x17c654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c658: 0xc05eefa  jal         func_17BBE8
    ctx->pc = 0x17C658u;
    SET_GPR_U32(ctx, 31, 0x17C660u);
    ctx->pc = 0x17C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C658u;
    // 0x17c65c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BBE8u, 0x17C658u, 0x17C660u)) {
        return;
    }
    ctx->pc = 0x17C660u;
label_17c660:
    // 0x17c660: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x17c660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17c664: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c668: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x17c668u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x17c66c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c670: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17c670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c674: 0x3e00008  jr          $ra
    ctx->pc = 0x17C674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C674u;
        // 0x17c678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C67Cu;
    // 0x17c67c: 0x0  nop
    ctx->pc = 0x17c67cu;
    // NOP
    ctx->pc = 0x17c680u;
}
