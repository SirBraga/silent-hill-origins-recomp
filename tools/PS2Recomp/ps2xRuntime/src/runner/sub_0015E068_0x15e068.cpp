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

// Function: sub_0015E068
// Address: 0x15e068 - 0x15e0d0
void sub_0015E068_0x15e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E068_0x15e068");
#endif

    switch (ctx->pc) {
        case 0x15e084u: goto label_15e084;
        case 0x15e090u: goto label_15e090;
        default: break;
    }

    ctx->pc = 0x15e068u;

    // 0x15e068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e06c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e070: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15e070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15e074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e07c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15E07Cu;
    SET_GPR_U32(ctx, 31, 0x15E084u);
    ctx->pc = 0x15E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E07Cu;
    // 0x15e080: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15E07Cu, 0x15E084u)) {
        return;
    }
    ctx->pc = 0x15E084u;
label_15e084:
    // 0x15e084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e088: 0xc05789a  jal         func_15E268
    ctx->pc = 0x15E088u;
    SET_GPR_U32(ctx, 31, 0x15E090u);
    ctx->pc = 0x15E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E088u;
    // 0x15e08c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15E268u, 0x15E088u, 0x15E090u)) {
        return;
    }
    ctx->pc = 0x15E090u;
label_15e090:
    // 0x15e090: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x15e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15e094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15e094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e098: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x15e098u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x15e09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e0a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15e0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15E0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0A4u;
        // 0x15e0a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E0ACu;
    // 0x15e0ac: 0x0  nop
    ctx->pc = 0x15e0acu;
    // NOP
    // 0x15e0b0: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x15e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x15e0b4: 0x0  nop
    ctx->pc = 0x15e0b4u;
    // NOP
    // 0x15e0b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15e0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15e0bc: 0x0  nop
    ctx->pc = 0x15e0bcu;
    // NOP
    // 0x15e0c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e0c4: 0x0  nop
    ctx->pc = 0x15e0c4u;
    // NOP
    // 0x15e0c8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x15e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x15e0cc: 0x0  nop
    ctx->pc = 0x15e0ccu;
    // NOP
    ctx->pc = 0x15e0d0u;
}
