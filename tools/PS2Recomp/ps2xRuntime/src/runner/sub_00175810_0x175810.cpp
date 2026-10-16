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

// Function: sub_00175810
// Address: 0x175810 - 0x175858
void sub_00175810_0x175810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175810_0x175810");
#endif

    switch (ctx->pc) {
        case 0x17582cu: goto label_17582c;
        case 0x175838u: goto label_175838;
        default: break;
    }

    ctx->pc = 0x175810u;

    // 0x175810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175814: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x175814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175818: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17581c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17581cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175824: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x175824u;
    SET_GPR_U32(ctx, 31, 0x17582Cu);
    ctx->pc = 0x175828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175824u;
    // 0x175828: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x175824u, 0x17582Cu)) {
        return;
    }
    ctx->pc = 0x17582Cu;
label_17582c:
    // 0x17582c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17582cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175830: 0xc05d616  jal         func_175858
    ctx->pc = 0x175830u;
    SET_GPR_U32(ctx, 31, 0x175838u);
    ctx->pc = 0x175834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175830u;
    // 0x175834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175858u, 0x175830u, 0x175838u)) {
        return;
    }
    ctx->pc = 0x175838u;
label_175838:
    // 0x175838: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x175838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17583c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17583cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175840: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x175840u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x175844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175848: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x175848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17584c: 0x3e00008  jr          $ra
    ctx->pc = 0x17584Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17584Cu;
        // 0x175850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17584Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175854u;
    // 0x175854: 0x0  nop
    ctx->pc = 0x175854u;
    // NOP
    ctx->pc = 0x175858u;
}
