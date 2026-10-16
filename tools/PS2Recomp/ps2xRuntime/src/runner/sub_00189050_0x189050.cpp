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

// Function: sub_00189050
// Address: 0x189050 - 0x189098
void sub_00189050_0x189050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189050_0x189050");
#endif

    switch (ctx->pc) {
        case 0x18906cu: goto label_18906c;
        case 0x189078u: goto label_189078;
        default: break;
    }

    ctx->pc = 0x189050u;

    // 0x189050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189054: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189058: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18905c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18905cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189064: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x189064u;
    SET_GPR_U32(ctx, 31, 0x18906Cu);
    ctx->pc = 0x189068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189064u;
    // 0x189068: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x189064u, 0x18906Cu)) {
        return;
    }
    ctx->pc = 0x18906Cu;
label_18906c:
    // 0x18906c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18906cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189070: 0xc06242e  jal         func_1890B8
    ctx->pc = 0x189070u;
    SET_GPR_U32(ctx, 31, 0x189078u);
    ctx->pc = 0x189074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189070u;
    // 0x189074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1890B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1890B8u, 0x189070u, 0x189078u)) {
        return;
    }
    ctx->pc = 0x189078u;
label_189078:
    // 0x189078: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x189078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x18907c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18907cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189080: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x189080u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x189084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189088: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x189088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18908c: 0x3e00008  jr          $ra
    ctx->pc = 0x18908Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18908Cu;
        // 0x189090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18908Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189094u;
    // 0x189094: 0x0  nop
    ctx->pc = 0x189094u;
    // NOP
    ctx->pc = 0x189098u;
}
