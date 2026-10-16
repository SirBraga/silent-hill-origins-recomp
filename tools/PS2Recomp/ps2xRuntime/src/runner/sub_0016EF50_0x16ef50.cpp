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

// Function: sub_0016EF50
// Address: 0x16ef50 - 0x16ef98
void sub_0016EF50_0x16ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EF50_0x16ef50");
#endif

    switch (ctx->pc) {
        case 0x16ef6cu: goto label_16ef6c;
        case 0x16ef78u: goto label_16ef78;
        default: break;
    }

    ctx->pc = 0x16ef50u;

    // 0x16ef50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ef54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ef58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ef5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ef5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ef64: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16EF64u;
    SET_GPR_U32(ctx, 31, 0x16EF6Cu);
    ctx->pc = 0x16EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EF64u;
    // 0x16ef68: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16EF64u, 0x16EF6Cu)) {
        return;
    }
    ctx->pc = 0x16EF6Cu;
label_16ef6c:
    // 0x16ef6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef70: 0xc05bbe6  jal         func_16EF98
    ctx->pc = 0x16EF70u;
    SET_GPR_U32(ctx, 31, 0x16EF78u);
    ctx->pc = 0x16EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EF70u;
    // 0x16ef74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16EF98u, 0x16EF70u, 0x16EF78u)) {
        return;
    }
    ctx->pc = 0x16EF78u;
label_16ef78:
    // 0x16ef78: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16ef7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ef7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ef80: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16ef80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16ef84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16ef88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef8c: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF8Cu;
        // 0x16ef90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EF94u;
    // 0x16ef94: 0x0  nop
    ctx->pc = 0x16ef94u;
    // NOP
    ctx->pc = 0x16ef98u;
}
